
#include <QDebug>
#include "pqCheckpointEventPlayer.h"

// ----------------------------------------------------------------------------
pqCheckpointEventPlayer::pqCheckpointEventPlayer(pqTestUtility* testUtility,
                                           QObject* parent)
  :pqWidgetEventPlayer(parent)
{
  this->TestUtility = testUtility;
}

// ----------------------------------------------------------------------------
pqCheckpointEventPlayer::~pqCheckpointEventPlayer()
{
  this->TestUtility = 0;
}

// ----------------------------------------------------------------------------
bool pqCheckpointEventPlayer::playEvent(QObject* Object,
                                     const QString &Command,
                                     const QString &Arguments,
                                     bool &Error)
{

 qDebug() << "Start pqcheckpointplayer action";
  if (!Command.startsWith("checkpoint"))
    {
    return false;
    }

  if (!Arguments.isEmpty())
    {
    emit this->checkpoint(Arguments);
    }

  /*if (Command.startsWith("chekpoint"))
    {
    this->TestUtility->dispatcher()->run(false);
  
    }*/

  return true;
}
