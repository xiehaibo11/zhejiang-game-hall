
/* CocosDenshion::android::AndroidJavaEngine::playBackgroundMusic(char const*, bool) */

void __thiscall
CocosDenshion::android::AndroidJavaEngine::playBackgroundMusic
          (AndroidJavaEngine *this,char *param_1,bool param_2)

{
  long lVar1;
  void *__src;
  void *__dest;
  ulong uVar2;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  byte local_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined4 uStack_68;
  undefined4 uStack_64;
  byte local_60;
  undefined7 uStack_5f;
  ulong uStack_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  getFullPathWithoutAssetsPrefix((android *)param_1,param_1);
  __src = local_50;
  local_78 = 0x26;
  uStack_64 = 0;
  local_90 = 0;
  uStack_88 = 0;
  uStack_6f = 0x4d646e756f7267;
  uStack_68 = 0x63697375;
  uStack_77 = 0x63614279616c70;
  uStack_70 = 0x6b;
  local_80 = (void *)0x0;
  if ((local_60 & 1) == 0) {
    local_90 = CONCAT71(uStack_5f,local_60);
    uStack_88 = uStack_58;
    local_80 = local_50;
    goto LAB_00df48d4;
  }
  if (0xffffffffffffffef < uStack_58) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (uStack_58 < 0x17) {
    __dest = (void *)((ulong)&local_90 | 1);
                    /* try { // try from 00df4894 to 00ef489b has its CatchHandler @ 00df4964 */
    local_90 = (ulong)(byte)((int)uStack_58 << 1);
    if (uStack_58 != 0) goto LAB_00df48c0;
  }
  else {
    uVar2 = uStack_58 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar2);
    local_90 = uVar2 | 1;
    uStack_88 = uStack_58;
    local_80 = __dest;
LAB_00df48c0:
    memcpy(__dest,__src,uStack_58);
  }
  *(undefined1 *)((long)__dest + uStack_58) = 0;
LAB_00df48d4:
  cocos2d::JniHelper::
  callStaticVoidMethod<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,bool>
            (&DAT_01788b10,&local_78,&local_90,param_2);
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_64,uStack_68));
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

