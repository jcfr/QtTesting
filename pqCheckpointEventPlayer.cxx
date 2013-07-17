

#include "pqCheckpointEventPlayer.h"

// ----------------------------------------------------------------------------
pqCheckpointEventPlayer::pqCheckpointEventPlayer(pqTestUtility* testUtility,
                                           QObject* parent)
  :pqCommentEventPlayer(testUtility,parent)
{
  this->TestUtility = testUtility;
}

// ----------------------------------------------------------------------------
pqCheckpointEventPlayer::~pqCheckpointEventPlayer()
{
  this->TestUtility = 0;
}

// ----------------------------------------------------------------------------
bool pqCheckpointEventPlayer::playEvents(QObject* Object,
                                     const QString &Command,
                                     const QString &Arguments,
                                     bool &Error)
{
  if (!Command.startsWith("chekpoint"))
    {
    return false;
    }

  if (!Arguments.isEmpty())
    {
    emit this->checkpoint(Arguments);
    }

  if (Command.startsWith("chekpoint"))
    {
    this->TestUtility->dispatcher()->run(false);
    //prendre les arguments d'un evement faire un qcompare et afficher cela grace à un qdebbug
    
    }
//if (!Arguments.isEmpty())
    //{
   //Qdebugg << Qcompare(Argument,Qstring("");
    //}
  return true;
}
