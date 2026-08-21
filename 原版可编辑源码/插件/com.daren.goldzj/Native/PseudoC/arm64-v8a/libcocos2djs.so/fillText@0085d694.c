
/* CanvasRenderingContext2DImpl::fillText(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, float, float, float) */

void __thiscall
CanvasRenderingContext2DImpl::fillText
          (CanvasRenderingContext2DImpl *this,basic_string *param_1,float param_2,float param_3,
          float param_4)

{
  basic_string bVar1;
  long lVar2;
  ulong __n;
  undefined8 uVar3;
  void *__src;
  void *__dest;
  ulong uVar4;
  undefined4 in_register_00005004;
  undefined4 in_register_00005024;
  undefined4 in_register_00005044;
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  byte local_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined1 local_8f;
  undefined6 uStack_8e;
  void *local_88;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  bVar1 = *param_1;
  __n = *(ulong *)(param_1 + 8);
  uVar4 = (ulong)((byte)bVar1 >> 1);
  if (((byte)bVar1 & 1) != 0) {
    uVar4 = __n;
  }
  if (((uVar4 == 0) || (*(float *)(this + 0x18) < 1.0)) || (*(float *)(this + 0x1c) < 1.0))
  goto LAB_0085d834;
  uVar3 = *(undefined8 *)this;
  local_70 = operator_new(0x30);
  uStack_78 = 0x2d;
  local_80 = 0x31;
  uStack_8e = 0;
  local_98 = 0x10;
  builtin_strncpy(local_70,"org/cocos2dx/lib/CanvasRenderingContext2DImpl",0x2e);
  local_88 = (void *)0x0;
  uStack_a8 = 0;
  local_a0 = (void *)0x0;
  uStack_97 = 0x7865546c6c6966;
  uStack_90 = 0x74;
  local_8f = 0;
  local_b0 = 0;
  if (((byte)bVar1 & 1) == 0) {
    local_a0 = *(void **)(param_1 + 0x10);
    uStack_a8 = *(ulong *)(param_1 + 8);
    local_b0 = *(ulong *)param_1;
  }
  else {
    if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    __src = *(void **)(param_1 + 0x10);
    if (__n < 0x17) {
      __dest = (void *)((ulong)&local_b0 | 1);
      local_b0 = (ulong)(byte)((int)__n << 1);
      if (__n != 0) goto LAB_0085d7d8;
    }
    else {
      uVar4 = __n + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar4);
      local_b0 = uVar4 | 1;
      uStack_a8 = __n;
      local_a0 = __dest;
LAB_0085d7d8:
      memcpy(__dest,__src,__n);
    }
    *(undefined1 *)((long)__dest + __n) = 0;
  }
  cocos2d::JniHelper::
  callObjectVoidMethod<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,float,float,float>
            (CONCAT44(in_register_00005004,param_2),CONCAT44(in_register_00005024,param_3),
             CONCAT44(in_register_00005044,param_4),uVar3,&local_80,&local_98,&local_b0);
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  fillData(this);
LAB_0085d834:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

