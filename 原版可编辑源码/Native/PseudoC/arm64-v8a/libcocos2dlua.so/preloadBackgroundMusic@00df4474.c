
/* CocosDenshion::android::AndroidJavaEngine::preloadBackgroundMusic(char const*) */

void __thiscall
CocosDenshion::android::AndroidJavaEngine::preloadBackgroundMusic
          (AndroidJavaEngine *this,char *param_1)

{
  long lVar1;
  void *__src;
  void *__dest;
  ulong uVar2;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  byte local_78;
  char local_77 [8];
  undefined6 uStack_6f;
  undefined1 uStack_69;
  undefined1 uStack_68;
  undefined6 uStack_67;
  undefined1 uStack_61;
  byte local_60;
  undefined7 uStack_5f;
  ulong uStack_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  getFullPathWithoutAssetsPrefix((android *)param_1,param_1);
  __src = local_50;
  uStack_61 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_78 = 0x2c;
  uStack_6f = 0x6f72676b6361;
  builtin_strncpy(local_77,"preloadB",8);
  uStack_69 = 0x75;
  uStack_68 = 0x6e;
  uStack_67 = 0x636973754d64;
  local_80 = (void *)0x0;
  if ((local_60 & 1) == 0) {
    local_90 = CONCAT71(uStack_5f,local_60);
    uStack_88 = uStack_58;
    local_80 = local_50;
    goto LAB_00df4550;
  }
                    /* catch() { ... } // from try @ 00df4398 with catch @ 00df44f0 */
  if (0xffffffffffffffef < uStack_58) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (uStack_58 < 0x17) {
                    /* try { // try from 00df4504 to 00ef45eb has its CatchHandler @ 00df4504
                       catch() { ... } // from try @ 00df4504 with catch @ 00df4504
                       catch() { ... } // from try @ 00df4654 with catch @ 00df4504 */
    __dest = (void *)((ulong)&local_90 | 1);
    local_90 = (ulong)(byte)((int)uStack_58 << 1);
    if (uStack_58 != 0) goto LAB_00df453c;
  }
  else {
    uVar2 = uStack_58 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar2);
    local_90 = uVar2 | 1;
    uStack_88 = uStack_58;
    local_80 = __dest;
LAB_00df453c:
    memcpy(__dest,__src,uStack_58);
  }
  *(undefined1 *)((long)__dest + uStack_58) = 0;
LAB_00df4550:
  cocos2d::JniHelper::
  callStaticVoidMethod<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
            (&DAT_01788b10,&local_78,&local_90);
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_61,CONCAT61(uStack_67,uStack_68)));
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

