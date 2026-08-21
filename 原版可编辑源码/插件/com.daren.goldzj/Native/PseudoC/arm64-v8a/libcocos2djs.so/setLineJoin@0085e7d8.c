
/* CanvasRenderingContext2DImpl::setLineJoin(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
CanvasRenderingContext2DImpl::setLineJoin(CanvasRenderingContext2DImpl *this,basic_string *param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong __n;
  void *__src;
  void *__dest;
  ulong uVar3;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  byte local_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined4 local_6f;
  undefined3 uStack_6b;
  void *local_68;
  ulong local_60;
  undefined8 uStack_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = *(undefined8 *)this;
  local_50 = operator_new(0x30);
  uStack_58 = 0x2d;
  local_60 = 0x31;
  uStack_6b = 0;
  local_78 = 0x16;
  local_6f = 0x6e696f;
  builtin_strncpy(local_50,"org/cocos2dx/lib/CanvasRenderingContext2DImpl",0x2e);
  local_68 = (void *)0x0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = (void *)0x0;
  uStack_77 = 0x656e694c746573;
  uStack_70 = 0x4a;
  if (((byte)*param_1 & 1) == 0) {
    local_80 = *(void **)(param_1 + 0x10);
    uStack_88 = *(ulong *)(param_1 + 8);
    local_90 = *(ulong *)param_1;
    goto LAB_0085e8ec;
  }
  __n = *(ulong *)(param_1 + 8);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  __src = *(void **)(param_1 + 0x10);
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_90 | 1);
    local_90 = (ulong)(byte)((int)__n << 1);
    if (__n != 0) goto LAB_0085e8d8;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar3);
    local_90 = uVar3 | 1;
    uStack_88 = __n;
    local_80 = __dest;
LAB_0085e8d8:
    memcpy(__dest,__src,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
LAB_0085e8ec:
  cocos2d::JniHelper::
  callObjectVoidMethod<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
            (uVar2,&local_60,&local_78,&local_90);
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
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

