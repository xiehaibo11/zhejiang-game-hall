
/* cocos2d::ui::ListView::removeLastItem() */

void __thiscall cocos2d::ui::ListView::removeLastItem(ListView *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x8c0) - *(long *)(this + 0x8b8);
  if ((7 < lVar1) && (lVar1 = *(long *)(lVar1 + *(long *)(this + 0x8b8) + -8), lVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00db64f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x280))(this,lVar1,1);
    return;
  }
  return;
}

