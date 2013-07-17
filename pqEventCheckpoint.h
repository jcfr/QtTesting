#ifndef __pqEventCheckpoint_h
#define __pqEventCheckpoint_h

// Qt includes
#include <QObject>
#include <QString>
// QtTesting inlcudes
#include "pqTestUtility.h"
#include "QtTestingExport.h"
#include "pqEventComment.h"

//#include <QXmlAttributes>
/// pqEventCheckpoint is responsible for adding checkpoint
/// 
///  #endif
 class pqEventCheckpoint : public pqEventComment
 
  
 {
  Q_OBJECT
  public:
  pqEventCheckpoint(pqTestUtility* testUtility, QObject* p =0);
  
  ~pqEventCheckpoint();
  void recordCheckpoint(const QString& arguments);
  signals:
  /// All functions should emit this signal whenever they wish to add a checkpoint
  void recordCheckpoint(QObject* widget, const QString& type, const QString& arguments);

protected:
  void recordCheckpoint(const QString& command,
                     const QString& arguments,
                     QObject* = 0);

  pqTestUtility* TestUtility;
  
  
  
  
  
  };
  
  
#endif
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
 
