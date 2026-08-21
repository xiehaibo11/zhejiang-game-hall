
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
  uVar3 = FT_Get_Char_Index(*(undefined8 *)(this + 0x28));
  if ((int)uVar3 != 0) {
    uVar5 = uVar3 & 0xffffffff;
                    /* try { // try from 00f0576c to 0100576f has its CatchHandler @ 00f05898 */
    uVar3 = FT_Get_Char_Index(*(undefined8 *)(this + 0x28),param_2);
                    /* try { // try from 00f05778 to 0100577f has its CatchHandler @ 00f05878 */
    if ((int)uVar3 != 0) {
                    /* try { // try from 00f0578c to 0100579b has its CatchHandler @ 00f05858 */
      iVar2 = FT_Get_Kerning(*(undefined8 *)(this + 0x28),uVar5,uVar3 & 0xffffffff,0,local_48);
                    /* try { // try from 00f0579c to 010058b3 has its CatchHandler @ 00f056fc */
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

