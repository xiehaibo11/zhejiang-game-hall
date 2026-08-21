
/* cocos2d::ui::ListView::removeItem(long) */

void __thiscall cocos2d::ui::ListView::removeItem(ListView *this,long param_1)

{
  long lVar1;
  
  if (((-1 < param_1) && (param_1 < *(long *)(this + 0x8c0) - *(long *)(this + 0x8b8) >> 3)) &&
     (lVar1 = *(long *)(*(long *)(this + 0x8b8) + param_1 * 8), lVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00db6498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x280))(this,lVar1,1);
    return;
  }
  return;
}

