
/* cocos2d::TextSpaceArray::addSpace(cocos2d::TextRowSpace&) */

void __thiscall cocos2d::TextSpaceArray::addSpace(TextSpaceArray *this,TextRowSpace *param_1)

{
  TextSpaceArray *pTVar1;
  undefined8 *puVar2;
  TextRowSpace TVar3;
  undefined8 uVar4;
  float local_4;
  
                    /* try { // try from 009b0cc0 to 00ab0cf7 has its CatchHandler @ 009b0cc0
                       catch() { ... } // from try @ 009b0cc0 with catch @ 009b0cc0
                       catch() { ... } // from try @ 009b0d00 with catch @ 009b0cc0 */
  if (*(long *)(param_1 + 0x20) != *(long *)(param_1 + 0x18)) {
    local_4 = *(float *)(param_1 + 8) - *(float *)param_1;
    pTVar1 = (TextSpaceArray *)&local_4;
    if (*(float *)(param_1 + 8) - *(float *)param_1 <= *(float *)this) {
      pTVar1 = this;
    }
                    /* try { // try from 009b0cf8 to 00ab0cff has its CatchHandler @ 009b0d10 */
    *(float *)this = *(float *)pTVar1;
                    /* try { // try from 009b0d00 to 00ab0d23 has its CatchHandler @ 009b0cc0 */
  }
  puVar2 = *(undefined8 **)(this + 0x10);
  if (puVar2 < *(undefined8 **)(this + 0x18)) {
                    /* catch() { ... } // from try @ 009b0cf8 with catch @ 009b0d10 */
    *(undefined1 *)(puVar2 + 6) = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[1] = 0x80000000800000;
    *puVar2 = 0x7f7fffff7f7fffff;
    uVar4 = *(undefined8 *)param_1;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    *puVar2 = uVar4;
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((long)puVar2 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    TVar3 = param_1[0x30];
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    puVar2[3] = uVar4;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(TextRowSpace *)(puVar2 + 6) = TVar3;
    *(undefined8 *)(param_1 + 8) = 0x80000000800000;
    *(undefined8 *)param_1 = 0x7f7fffff7f7fffff;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    param_1[0x30] = (TextRowSpace)0x0;
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 0x38;
    return;
  }
                    /* try { // try from 009b0d80 to 00ab0dcf has its CatchHandler @ 009b0d80
                       catch() { ... } // from try @ 009b0d80 with catch @ 009b0d80
                       catch() { ... } // from try @ 009b0eb0 with catch @ 009b0d80 */
  std::__ndk1::vector<cocos2d::TextRowSpace,std::__ndk1::allocator<cocos2d::TextRowSpace>>::
  __emplace_back_slow_path<cocos2d::TextRowSpace>
            ((vector<cocos2d::TextRowSpace,std::__ndk1::allocator<cocos2d::TextRowSpace>> *)
             (this + 8),param_1);
  return;
}

