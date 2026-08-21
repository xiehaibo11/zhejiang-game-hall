
/* cocos2d::AnimationCache::addAnimationsWithFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::AnimationCache::addAnimationsWithFile(AnimationCache *this,basic_string *param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long *plVar5;
  AnimationCache *this_00;
  basic_string *pbVar6;
  void *pvVar7;
  void *local_60 [2];
  void *local_50;
  long local_48;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 00eed878 with catch @ 00eed8e8 */
  uVar1 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 == 0) {
    log("%s error:file name is empty!","addAnimationsWithFile");
  }
  else {
    plVar5 = (long *)FileUtils::getInstance();
                    /* catch() { ... } // from try @ 00eed840 with catch @ 00eed918 */
    this_00 = (AnimationCache *)(**(code **)(*plVar5 + 0xc0))(local_60,plVar5,param_1);
    if (local_48 == 0) {
      pbVar6 = *(basic_string **)(param_1 + 0x10);
      if (((byte)*param_1 & 1) == 0) {
        pbVar6 = param_1 + 1;
      }
                    /* try { // try from 00eed934 to 00fed97b has its CatchHandler @ 00eed934
                       catch() { ... } // from try @ 00eed934 with catch @ 00eed934
                       catch() { ... } // from try @ 00eed9b8 with catch @ 00eed934 */
      this_00 = (AnimationCache *)
                log("AnimationCache::addAnimationsWithFile error:%s not exist!",pbVar6);
    }
    addAnimationsWithDictionary(this_00,(unordered_map *)local_60,param_1);
    pvVar3 = local_60[0];
    puVar4 = local_50;
    while (puVar4 != (void *)0x0) {
      pvVar7 = (void *)*puVar4;
      local_60[0] = pvVar3;
      cocos2d::Value::~Value((Value *)(puVar4 + 5));
      if ((*(byte *)(puVar4 + 2) & 1) != 0) {
                    /* try { // try from 00eed97c to 00fed993 has its CatchHandler @ 00eeda50 */
        operator_delete((void *)puVar4[4]);
      }
      operator_delete(puVar4);
      pvVar3 = local_60[0];
      puVar4 = pvVar7;
    }
    local_60[0] = (void *)0x0;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
  }
                    /* try { // try from 00eed9b0 to 00fed9b7 has its CatchHandler @ 00eeda20 */
                    /* try { // try from 00eed9b8 to 00feda6b has its CatchHandler @ 00eed934 */
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

