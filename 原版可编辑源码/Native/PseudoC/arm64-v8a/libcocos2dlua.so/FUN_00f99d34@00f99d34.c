
void FUN_00f99d34(undefined8 *param_1)

{
  long lVar1;
  Director *pDVar2;
  long lVar3;
  ulong uVar4;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  Mat4 aMStack_b8 [64];
  Mat4 aMStack_78 [64];
  long local_38;
  
                    /* try { // try from 00f99d40 to 01099d53 has its CatchHandler @ 00f99e68 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00f99d54 to 01099d67 has its CatchHandler @ 00f99e4c */
  if (param_1 != (undefined8 *)0x0) {
    if (DAT_0178fc40 == (Director *)0x0) {
                    /* try { // try from 00f99d68 to 01099e7b has its CatchHandler @ 00f99ce4 */
      pDVar2 = operator_new(0x1e0,(nothrow_t *)&std::nothrow);
      if (pDVar2 != (Director *)0x0) {
        cocos2d::Director::Director(pDVar2);
      }
      DAT_0178fc40 = pDVar2;
      cocos2d::Director::init(pDVar2);
    }
    pDVar2 = DAT_0178fc40;
    lVar3 = *(long *)(DAT_0178fc40 + 0x58);
    uVar4 = (*(long *)(lVar3 + 0x28) + *(long *)(lVar3 + 0x20)) - 1;
    cocos2d::Mat4::Mat4(aMStack_78,
                        (Mat4 *)(*(long *)(*(long *)(lVar3 + 8) + (uVar4 >> 3 & 0x1ffffffffffffff8))
                                + (uVar4 & 0x3f) * 0x40));
    uVar4 = (*(long *)(pDVar2 + 0x50) + *(long *)(pDVar2 + 0x48)) - 1;
    cocos2d::Mat4::Mat4(aMStack_b8,
                        (Mat4 *)(*(long *)(*(long *)(pDVar2 + 0x30) +
                                          (uVar4 >> 3 & 0x1ffffffffffffff8)) + (uVar4 & 0x3f) * 0x40
                                ));
    cocos2d::Mat4::Mat4((Mat4 *)&local_f8,aMStack_78);
    cocos2d::Mat4::multiply((Mat4 *)&local_f8,aMStack_b8);
    param_1[5] = uStack_d0;
    param_1[4] = local_d8;
    param_1[7] = uStack_c0;
    param_1[6] = local_c8;
    param_1[1] = uStack_f0;
    *param_1 = local_f8;
    param_1[3] = uStack_e0;
    param_1[2] = local_e8;
    cocos2d::Mat4::~Mat4((Mat4 *)&local_f8);
    cocos2d::Mat4::~Mat4(aMStack_b8);
    cocos2d::Mat4::~Mat4(aMStack_78);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 00f99d54 with catch @ 00f99e4c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

