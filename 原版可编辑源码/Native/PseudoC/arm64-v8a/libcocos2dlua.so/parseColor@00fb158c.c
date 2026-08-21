
/* cocos2d::Properties::parseColor(char const*, cocos2d::Vec4*) */

void cocos2d::Properties::parseColor(char *param_1,Vec4 *param_2)

{
  long lVar1;
  int iVar2;
  size_t sVar3;
  undefined8 uVar4;
  uint extraout_w1;
  Vec4 aVStack_50 [20];
  uint local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((((param_1 == (char *)0x0) || (sVar3 = strlen(param_1), sVar3 != 9)) || (*param_1 != '#')) ||
     (iVar2 = sscanf(param_1 + 1,"%x",&local_3c), iVar2 != 1)) {
    if (param_2 != (Vec4 *)0x0) {
      Vec4::set(param_2,0.0,0.0,0.0,0.0);
    }
    uVar4 = 0;
  }
  else {
    if (param_2 != (Vec4 *)0x0) {
      Vec4::fromColor((Vec4 *)(ulong)local_3c,extraout_w1);
      Vec4::set(param_2,aVStack_50);
      Vec4::~Vec4(aVStack_50);
    }
    uVar4 = 1;
  }
                    /* try { // try from 00fb163c to 010b163f has its CatchHandler @ 00fb164c */
                    /* try { // try from 00fb1640 to 010b1643 has its CatchHandler @ 00fb1648 */
                    /* try { // try from 00fb1644 to 010b16ff has its CatchHandler @ 00fb0ea4 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 00fb1640 with catch @ 00fb1648 */
                    /* catch() { ... } // from try @ 00fb163c with catch @ 00fb164c */
                    /* catch() { ... } // from try @ 00fb1038 with catch @ 00fb1650 */
                    /* catch() { ... } // from try @ 00fb0f10 with catch @ 00fb1654 */
                    /* catch() { ... } // from try @ 00fb1344 with catch @ 00fb1658 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

