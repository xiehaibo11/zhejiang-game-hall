
/* CocosDenshion::android::AndroidJavaEngine::preloadEffect(char const*) */

void __thiscall
CocosDenshion::android::AndroidJavaEngine::preloadEffect(AndroidJavaEngine *this,char *param_1)

{
  long lVar1;
  size_t __n;
  code *pcVar2;
  void *pvVar3;
  void *__dest;
  ulong uVar4;
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  byte local_98;
  undefined5 uStack_97;
  undefined2 uStack_92;
  undefined1 local_90;
  undefined5 uStack_8f;
  undefined1 uStack_8a;
  undefined1 uStack_89;
  void *local_88;
  byte local_80;
  undefined7 uStack_7f;
  ulong uStack_78;
  void *local_70;
  byte *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (this[8] == (AndroidJavaEngine)0x0) {
    getFullPathWithoutAssetsPrefix((android *)param_1,param_1);
    pvVar3 = local_70;
    uStack_89 = 0;
    local_98 = 0x1a;
    local_88 = (void *)0x0;
    uStack_8a = 0;
                    /* try { // try from 00df6158 to 00ef615b has its CatchHandler @ 00df62fc */
    uStack_97 = 0x6f6c657270;
    local_b0 = 0;
    uStack_a8 = 0;
    uStack_92 = 0x6461;
    local_90 = 0x45;
    uStack_8f = 0x7463656666;
    local_a0 = (void *)0x0;
    if ((local_80 & 1) == 0) {
      local_b0 = CONCAT71(uStack_7f,local_80);
      uStack_a8 = uStack_78;
      local_a0 = local_70;
    }
    else {
      if (0xffffffffffffffef < uStack_78) goto LAB_00df62ec;
      if (uStack_78 < 0x17) {
        __dest = (void *)((ulong)&local_b0 | 1);
        local_b0 = (ulong)(byte)((int)uStack_78 << 1);
        if (uStack_78 != 0) goto LAB_00df6254;
      }
      else {
        uVar4 = uStack_78 + 0x10 & 0xfffffffffffffff0;
        __dest = operator_new(uVar4);
        local_b0 = uVar4 | 1;
        uStack_a8 = uStack_78;
        local_a0 = __dest;
LAB_00df6254:
        memcpy(__dest,pvVar3,uStack_78);
      }
      *(undefined1 *)((long)__dest + uStack_78) = 0;
    }
    cocos2d::JniHelper::
    callStaticVoidMethod<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
              (&DAT_01788b10,&local_98,&local_b0);
    if ((local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
    if ((local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    goto joined_r0x00df6290;
  }
  local_90 = 0;
  uStack_8f = 0;
  uStack_8a = 0;
  uStack_89 = 0;
  local_88 = (void *)0x0;
  local_98 = 0;
  uStack_97 = 0;
  uStack_92 = 0;
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
LAB_00df62ec:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (__n < 0x17) {
    pvVar3 = (void *)((ulong)&local_98 | 1);
    local_98 = (byte)((int)__n << 1);
                    /* try { // try from 00df6120 to 00ef6123 has its CatchHandler @ 00df6308 */
    if (__n != 0) goto LAB_00df61a4;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00df6190 to 00ef6193 has its CatchHandler @ 00df62f0 */
    pvVar3 = operator_new(uVar4);
                    /* try { // try from 00df6194 to 00ef632f has its CatchHandler @ 00df5ef8 */
    local_98 = (byte)uVar4 | 1;
    uStack_97 = (undefined5)(uVar4 >> 8);
    uStack_92 = (undefined2)(uVar4 >> 0x30);
    local_90 = (undefined1)__n;
    uStack_8f = (undefined5)(__n >> 8);
    uStack_8a = (undefined1)(__n >> 0x30);
    uStack_89 = (undefined1)(__n >> 0x38);
    local_88 = pvVar3;
LAB_00df61a4:
    memcpy(pvVar3,param_1,__n);
  }
  *(undefined1 *)((long)pvVar3 + __n) = 0;
  local_60 = (byte *)0x0;
  cocos2d::experimental::AudioEngine::preload(&local_98,&local_80);
  if (&local_80 == local_60) {
    pcVar2 = *(code **)(*(long *)local_60 + 0x20);
  }
  else {
    local_70 = local_88;
    local_80 = local_98;
    if (local_60 == (byte *)0x0) goto joined_r0x00df6290;
    pcVar2 = *(code **)(*(long *)local_60 + 0x28);
  }
  (*pcVar2)();
  local_70 = local_88;
  local_80 = local_98;
joined_r0x00df6290:
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

