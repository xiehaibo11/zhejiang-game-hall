
/* cocos2d::FontFreeType::getHorizontalKerningForChars(unsigned long, unsigned long) const */

void __thiscall
cocos2d::FontFreeType::getHorizontalKerningForChars(FontFreeType *this,ulong param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong local_48 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FT_Get_Char_Index(*(undefined8 *)(this + 0x58));
  if ((int)uVar3 != 0) {
    uVar5 = uVar3 & 0xffffffff;
    uVar3 = FT_Get_Char_Index(*(undefined8 *)(this + 0x58),param_2);
    if ((int)uVar3 != 0) {
      iVar2 = FT_Get_Kerning(*(undefined8 *)(this + 0x58),uVar5,uVar3 & 0xffffffff,0,local_48);
      uVar4 = (uint)(local_48[0] >> 6);
      if (iVar2 != 0) {
        uVar4 = 0;
      }
      uVar3 = (ulong)uVar4;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

