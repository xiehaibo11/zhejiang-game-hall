
/* cocos2d::network::DownloadTask::~DownloadTask() */

void __thiscall cocos2d::network::DownloadTask::~DownloadTask(DownloadTask *this)

{
  DownloadTask DVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x50);
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined ***)this = &PTR__DownloadTask_016f4ad8;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (((byte)this[0x38] & 1) == 0) {
    DVar1 = this[0x20];
  }
  else {
    operator_delete(*(void **)(this + 0x48));
    DVar1 = this[0x20];
  }
  if (((byte)DVar1 & 1) == 0) {
    DVar1 = this[8];
  }
  else {
    operator_delete(*(void **)(this + 0x30));
    DVar1 = this[8];
  }
  if (((byte)DVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x18));
  }
  operator_delete(this);
  return;
}

