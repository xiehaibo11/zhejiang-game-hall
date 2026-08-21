
/* CanvasRenderingContext2DImpl::measureText(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

undefined1  [16] __thiscall
CanvasRenderingContext2DImpl::measureText(CanvasRenderingContext2DImpl *this,basic_string *param_1)

{
  basic_string bVar1;
  long lVar2;
  undefined8 uVar3;
  ulong __n;
  void *__src;
  void *__dest;
  ulong uVar4;
  float fVar5;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar7 [16];
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  byte local_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined4 local_7f;
  undefined3 uStack_7b;
  void *local_78;
  ulong local_70;
  undefined8 uStack_68;
  char *local_60;
  long local_58;
  undefined8 uVar6;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  bVar1 = *param_1;
  __n = *(ulong *)(param_1 + 8);
  uVar4 = (ulong)((byte)bVar1 >> 1);
  if (((byte)bVar1 & 1) != 0) {
    uVar4 = __n;
  }
  if (uVar4 == 0) {
    uVar6 = 0;
    uVar3 = 0;
    goto LAB_0085dd14;
  }
  uVar3 = *(undefined8 *)this;
  local_60 = operator_new(0x30);
  uStack_68 = 0x2d;
  local_70 = 0x31;
  uStack_7b = 0;
  local_88 = 0x16;
  local_7f = 0x747865;
  builtin_strncpy(local_60,"org/cocos2dx/lib/CanvasRenderingContext2DImpl",0x2e);
  local_78 = (void *)0x0;
  uStack_98 = 0;
  local_90 = (void *)0x0;
  uStack_87 = 0x6572757361656d;
  uStack_80 = 0x54;
  local_a0 = 0;
  if (((byte)bVar1 & 1) == 0) {
    local_90 = *(void **)(param_1 + 0x10);
    uStack_98 = *(ulong *)(param_1 + 8);
    local_a0 = *(ulong *)param_1;
  }
  else {
    if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    __src = *(void **)(param_1 + 0x10);
    if (__n < 0x17) {
      __dest = (void *)((ulong)&local_a0 | 1);
      local_a0 = (ulong)(byte)((int)__n << 1);
      if (__n != 0) goto LAB_0085dcc8;
    }
    else {
      uVar4 = __n + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar4);
      local_a0 = uVar4 | 1;
      uStack_98 = __n;
      local_90 = __dest;
LAB_0085dcc8:
      memcpy(__dest,__src,__n);
    }
    *(undefined1 *)((long)__dest + __n) = 0;
  }
  fVar5 = cocos2d::JniHelper::
          callObjectFloatMethod<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    (uVar3,&local_70,&local_88,&local_a0);
  uVar6 = CONCAT44(extraout_var,fVar5);
  uVar3 = extraout_var_00;
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
LAB_0085dd14:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  auVar7._8_8_ = uVar3;
  auVar7._0_8_ = uVar6;
  return auVar7;
}

