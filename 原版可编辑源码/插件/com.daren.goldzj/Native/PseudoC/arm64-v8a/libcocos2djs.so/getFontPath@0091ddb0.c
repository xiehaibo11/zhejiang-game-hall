
/* cocos2d::LabelRenderer::getFontPath() */

void cocos2d::LabelRenderer::getFontPath(void)

{
  long lVar1;
  long in_x0;
  ulong *puVar2;
  ulong *in_x8;
  void *__dest;
  ulong uVar3;
  void *__src;
  ulong uVar4;
  Value aVStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  se::Value::Value(aVStack_58);
  se::Object::getProperty(*(Object **)(in_x0 + 0x18),"fontPath",aVStack_58);
  puVar2 = (ulong *)se::Value::toString(aVStack_58);
  in_x8[1] = 0;
  in_x8[2] = 0;
  *in_x8 = 0;
  if ((*puVar2 & 1) == 0) {
    uVar4 = puVar2[1];
    uVar3 = *puVar2;
    in_x8[2] = puVar2[2];
    in_x8[1] = uVar4;
    *in_x8 = uVar3;
    goto LAB_0091de80;
  }
  uVar3 = puVar2[1];
  if (0xffffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  __src = (void *)puVar2[2];
  if (uVar3 < 0x17) {
    __dest = (void *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)uVar3 << 1);
    if (uVar3 != 0) goto LAB_0091de6c;
  }
  else {
    uVar4 = uVar3 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar4);
    in_x8[1] = uVar3;
    in_x8[2] = (ulong)__dest;
    *in_x8 = uVar4 | 1;
LAB_0091de6c:
    memcpy(__dest,__src,uVar3);
  }
  *(undefined1 *)((long)__dest + uVar3) = 0;
LAB_0091de80:
  se::Value::~Value(aVStack_58);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

