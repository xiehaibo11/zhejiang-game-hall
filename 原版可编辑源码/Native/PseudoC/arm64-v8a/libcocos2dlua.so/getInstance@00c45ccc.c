
/* cocostudio::ArmatureDataManager::getInstance() */

ArmatureDataManager * cocostudio::ArmatureDataManager::getInstance(void)

{
  ArmatureDataManager *this;
  ulong uVar1;
  
  if (DAT_01785700 == (ArmatureDataManager *)0x0) {
    this = operator_new(0xd0,(nothrow_t *)&std::nothrow);
    if (this != (ArmatureDataManager *)0x0) {
      ArmatureDataManager(this);
      DAT_01785700 = this;
      uVar1 = (**(code **)(*(long *)this + 0x10))(this);
      if ((uVar1 & 1) != 0) {
        return DAT_01785700;
      }
      if (DAT_01785700 != (ArmatureDataManager *)0x0) {
        (**(code **)(*(long *)DAT_01785700 + 8))(DAT_01785700);
      }
    }
    DAT_01785700 = (ArmatureDataManager *)0x0;
  }
  return DAT_01785700;
}

