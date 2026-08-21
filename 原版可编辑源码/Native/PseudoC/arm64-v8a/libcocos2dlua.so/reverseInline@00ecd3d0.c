
/* cocos2d::PointArray::reverseInline() */

void __thiscall cocos2d::PointArray::reverseInline(PointArray *this)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar1 = *(long *)(this + 0x30);
  uVar2 = *(long *)(this + 0x38) - lVar1 >> 3;
  if (uVar2 >> 1 != 0) {
    uVar3 = 0;
    uVar4 = uVar2;
    do {
      uVar4 = uVar4 - 1;
      if ((uVar4 == 0xffffffffffffffff) || (uVar2 <= uVar4)) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
      }
      lVar5 = uVar3 * 8;
      uVar6 = *(undefined8 *)(lVar1 + lVar5);
      uVar3 = uVar3 + 1;
      *(undefined8 *)(lVar1 + lVar5) = *(undefined8 *)(lVar1 + uVar4 * 8);
      *(undefined8 *)(lVar1 + uVar4 * 8) = uVar6;
    } while (uVar2 >> 1 != uVar3);
  }
  return;
}

