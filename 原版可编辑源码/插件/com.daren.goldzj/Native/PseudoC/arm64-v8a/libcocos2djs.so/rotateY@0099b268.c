
/* cocos2d::Mat4::rotateY(float, cocos2d::Mat4*) const */

void __thiscall cocos2d::Mat4::rotateY(Mat4 *this,float param_1,Mat4 *param_2)

{
  long lVar1;
  float local_88;
  float fStack_84;
  float local_80 [2];
  float fStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  float local_60;
  undefined4 uStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
                    /* catch() { ... } // from try @ 0099b078 with catch @ 0099b270
                       catch() { ... } // from try @ 0099b164 with catch @ 0099b270 */
                    /* catch() { ... } // from try @ 0099b064 with catch @ 0099b274
                       catch() { ... } // from try @ 0099b11c with catch @ 0099b274 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 0099b024 with catch @ 0099b28c */
                    /* catch() { ... } // from try @ 0099b018 with catch @ 0099b290 */
                    /* catch() { ... } // from try @ 0099aff8 with catch @ 0099b294 */
  _fStack_78 = IDENTITY._8_8_;
  local_80 = (float  [2])IDENTITY._0_8_;
  uStack_68 = IDENTITY._24_8_;
  uStack_70 = IDENTITY._16_8_;
                    /* catch() { ... } // from try @ 0099b030 with catch @ 0099b2a4
                       catch() { ... } // from try @ 0099b0b0 with catch @ 0099b2a4
                       catch() { ... } // from try @ 0099b1c0 with catch @ 0099b2a4 */
  _fStack_58 = IDENTITY._40_8_;
  _local_60 = IDENTITY._32_8_;
  uStack_48 = IDENTITY._56_8_;
  uStack_50 = IDENTITY._48_8_;
  sincosf(param_1,&fStack_84,&local_88);
  local_80[0] = local_88;
  _fStack_78 = CONCAT44(uStack_74,-fStack_84);
  _local_60 = CONCAT44(uStack_5c,fStack_84);
  _fStack_58 = CONCAT44(uStack_54,local_88);
  MathUtil::multiplyMatrix((float *)this,local_80,(float *)param_2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 0099b2fc to 00a9b34f has its CatchHandler @ 0099b2fc
                       catch() { ... } // from try @ 0099b2fc with catch @ 0099b2fc
                       catch() { ... } // from try @ 0099b54c with catch @ 0099b2fc */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

