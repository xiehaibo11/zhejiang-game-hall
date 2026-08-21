
/* cocos2d::PointArray::getControlPointAtIndex(long) const */

long __thiscall cocos2d::PointArray::getControlPointAtIndex(PointArray *this,long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 & (param_1 >> 0x3f ^ 0xffffffffffffffffU);
  uVar2 = *(long *)(this + 0x38) - *(long *)(this + 0x30) >> 3;
  if ((long)uVar2 <= (long)uVar1) {
    uVar1 = uVar2 - 1;
  }
  if (uVar1 < uVar2) {
    return *(long *)(this + 0x30) + uVar1 * 8;
  }
                    /* WARNING: Subroutine does not return */
  std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
}

