#ifndef __pqCheckpointEventPlayer_h
#define __pqCheckpointEventPlayer_h

// QtTesting includes
#include "pqTestUtility.h"
#include "pqWidgetEventPlayer.h"
#include "pqCommentEventPlayer.h"

/// This class is a checkpoint class.
/// Do no action on Object.
/// Emit comment wrote in the xml, which can be cacth to do checkpoint.

class pqCheckpointEventPlayer: public pqCommentEventPlayer 
{
  Q_OBJECT

public:
  pqCheckpointEventPlayer(pqTestUtility* testUtility, QObject* p =0);
  ~pqCheckpointEventPlayer();

  bool playEvents(QObject* Object, const QString &Command, const QString &Arguments, bool &Error);

signals:
  void checkpoint(const QString&);


private:
  pqTestUtility* TestUtility;
};

#endif // __pqCheckpointEventPlayer_h
