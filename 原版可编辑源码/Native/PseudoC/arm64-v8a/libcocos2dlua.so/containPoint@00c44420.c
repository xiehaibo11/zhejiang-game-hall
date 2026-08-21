
/* cocostudio::DisplayManager::containPoint(float, float) */

uint __thiscall
cocostudio::DisplayManager::containPoint(DisplayManager *this,float param_1,float param_2)

{
  long lVar1;
  uint uVar2;
  float local_30;
  float fStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_1;
  fStack_2c = param_2;
  uVar2 = (**(code **)(*(long *)this + 0x40))(this,&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

