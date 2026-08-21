
/* CocosDenshion::android::AndroidJavaEngine::unloadEffect(char const*) */

void __thiscall
CocosDenshion::android::AndroidJavaEngine::unloadEffect(AndroidJavaEngine *this,char *param_1)

{
  long lVar1;
  size_t sVar2;
  void *pvVar3;
  void *__dest;
  ulong uVar4;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  byte local_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined4 local_6f;
  undefined1 local_6b;
  undefined2 uStack_6a;
  void *local_68;
  ulong local_60;
  size_t sStack_58;
  void *local_50;
  long local_48;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00df6190 with catch @ 00df62f0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00df6158 with catch @ 00df62fc
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00df6120 with catch @ 00df6308
                        */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00df6094 with catch @ 00df631c
                        */
  if (this[8] == (AndroidJavaEngine)0x0) {
    getFullPathWithoutAssetsPrefix((android *)param_1,param_1);
    pvVar3 = local_50;
    sVar2 = sStack_58;
    uStack_6a = 0;
    local_78 = 0x18;
    local_6f = 0x74636566;
    local_68 = (void *)0x0;
    uStack_77 = 0x4564616f6c6e75;
    uStack_70 = 0x66;
    local_6b = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = (void *)0x0;
    if ((local_60 & 1) == 0) {
      uStack_88 = sStack_58;
      local_90 = local_60;
      local_80 = local_50;
    }
    else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00df63dc with catch @ 00df6404
                        */
      if (0xffffffffffffffef < sStack_58) goto LAB_00df64ec;
      if (sStack_58 < 0x17) {
        __dest = (void *)((ulong)&local_90 | 1);
        local_90 = (ulong)(byte)((int)sStack_58 << 1);
        if (sStack_58 != 0) goto LAB_00df6454;
      }
      else {
        uVar4 = sStack_58 + 0x10 & 0xfffffffffffffff0;
        __dest = operator_new(uVar4);
        local_90 = uVar4 | 1;
        uStack_88 = sVar2;
        local_80 = __dest;
LAB_00df6454:
        memcpy(__dest,pvVar3,sVar2);
      }
                    /* try { // try from 00df6464 to 00ef6467 has its CatchHandler @ 00df66e8 */
      *(undefined1 *)((long)__dest + sVar2) = 0;
    }
    cocos2d::JniHelper::
    callStaticVoidMethod<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
              (&DAT_01788b10,&local_78,&local_90);
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
    goto joined_r0x00df6490;
  }
  sStack_58 = 0;
  local_50 = (void *)0x0;
  local_60 = 0;
  sVar2 = strlen(param_1);
  if (0xffffffffffffffef < sVar2) {
LAB_00df64ec:
                    /* WARNING: Subroutine does not return */
    abort();
  }
                    /* try { // try from 00df6338 to 00ef63db has its CatchHandler @ 00df6338
                       catch(type#1 @ 00000000) { ... } // from try @ 00df6338 with catch @ 00df6338
                       catch(type#1 @ 00000000) { ... } // from try @ 00df6564 with catch @ 00df6338
                        */
  if (sVar2 < 0x17) {
    pvVar3 = (void *)((ulong)&local_60 | 1);
    local_60 = CONCAT71(local_60._1_7_,(char)((int)sVar2 << 1));
    if (sVar2 != 0) goto LAB_00df63dc;
  }
  else {
    uVar4 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar3 = operator_new(uVar4);
    local_60 = uVar4 | 1;
    sStack_58 = sVar2;
    local_50 = pvVar3;
LAB_00df63dc:
                    /* try { // try from 00df63dc to 00ef63e3 has its CatchHandler @ 00df6404 */
    memcpy(pvVar3,param_1,sVar2);
  }
  *(undefined1 *)((long)pvVar3 + sVar2) = 0;
  cocos2d::experimental::AudioEngine::uncache((basic_string *)&local_60);
joined_r0x00df6490:
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

