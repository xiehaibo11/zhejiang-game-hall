
/* cocostudio::TriggerMng::getInstance() */

TriggerMng * cocostudio::TriggerMng::getInstance(void)

{
  TriggerMng *this;
  
  this = _sharedTriggerMng;
  if ((_sharedTriggerMng == (TriggerMng *)0x0) &&
     (this = operator_new(0x40,(nothrow_t *)&std::nothrow), this != (TriggerMng *)0x0)) {
    TriggerMng(this);
  }
  _sharedTriggerMng = this;
  return _sharedTriggerMng;
}

