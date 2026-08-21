
/* CanvasRenderingContext2DImpl::updateFont(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, float, bool, bool, bool,
   bool) */

void __thiscall
CanvasRenderingContext2DImpl::updateFont
          (CanvasRenderingContext2DImpl *this,basic_string *param_1,float param_2,bool param_3,
          bool param_4,bool param_5,bool param_6)

{
  long lVar1;
  undefined8 uVar2;
  ulong __n;
  void *__src;
  void *__dest;
  ulong uVar3;
  undefined4 in_register_00005004;
  ulong local_c0;
  ulong uStack_b8;
  void *local_b0;
  byte local_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined2 local_9f;
  undefined1 local_9d;
  undefined4 uStack_9c;
  void *local_98;
  ulong local_90;
  undefined8 uStack_88;
  char *local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  uVar2 = *(undefined8 *)this;
  local_80 = operator_new(0x30);
  uStack_88 = 0x2d;
  local_90 = 0x31;
  uStack_9c = 0;
  local_a8 = 0x14;
  local_9f = 0x746e;
  builtin_strncpy(local_80,"org/cocos2dx/lib/CanvasRenderingContext2DImpl",0x2e);
  local_98 = (void *)0x0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = (void *)0x0;
  uStack_a7 = 0x46657461647075;
  uStack_a0 = 0x6f;
  local_9d = 0;
  if (((byte)*param_1 & 1) == 0) {
    local_b0 = *(void **)(param_1 + 0x10);
    uStack_b8 = *(ulong *)(param_1 + 8);
    local_c0 = *(ulong *)param_1;
    goto LAB_0085f6b8;
  }
  __n = *(ulong *)(param_1 + 8);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  __src = *(void **)(param_1 + 0x10);
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_c0 | 1);
    local_c0 = (ulong)(byte)((int)__n << 1);
    if (__n != 0) goto LAB_0085f6a4;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar3);
    local_c0 = uVar3 | 1;
    uStack_b8 = __n;
    local_b0 = __dest;
LAB_0085f6a4:
    memcpy(__dest,__src,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
LAB_0085f6b8:
  cocos2d::JniHelper::
  callObjectVoidMethod<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,float,bool,bool,bool,bool>
            (CONCAT44(in_register_00005004,param_2),uVar2,&local_90,&local_a8,&local_c0,param_3,
             param_4,param_5,param_6);
  if ((local_c0 & 1) != 0) {
    operator_delete(local_b0);
  }
  if ((local_a8 & 1) != 0) {
    operator_delete(local_98);
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

