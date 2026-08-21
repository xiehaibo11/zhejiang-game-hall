
/* cocostudio::BaseData::getColor() */

void __thiscall cocostudio::BaseData::getColor(BaseData *this)

{
  long lVar1;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  cocos2d::Color4B::Color4B
            ((Color4B *)&local_2c,(uchar)*(undefined4 *)(this + 0x4c),
             (uchar)*(undefined4 *)(this + 0x50),(uchar)*(undefined4 *)(this + 0x54),
             (uchar)*(undefined4 *)(this + 0x48));
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_2c);
}

