
void FUN_00e9acf4(void)

{
  size_t __n;
  code *pcVar1;
  long unaff_x19;
  mutex *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *__src;
  long unaff_x23;
  undefined8 *puVar2;
  long unaff_x29;
  long *in_stack_00000030;
  
  __src = *(undefined8 **)(unaff_x19 + 0x108);
  puVar2 = unaff_x21;
  if (unaff_x21 != __src) {
    do {
      cocos2d::Ref::release((Ref *)*puVar2);
      puVar2 = puVar2 + 1;
    } while (__src != puVar2);
    __n = *(long *)(unaff_x19 + 0x108) - (long)__src;
    if (__n != 0) {
      memmove(unaff_x21,__src,__n);
    }
    *(undefined8 **)(unaff_x19 + 0x108) = unaff_x21 + ((long)__n >> 3);
  }
  if ((long *)&stack0x00000010 == in_stack_00000030) {
    pcVar1 = *(code **)(*in_stack_00000030 + 0x20);
  }
  else {
    if (in_stack_00000030 == (long *)0x0) goto LAB_00e9ad68;
    pcVar1 = *(code **)(*in_stack_00000030 + 0x28);
  }
  (*pcVar1)();
LAB_00e9ad68:
  std::__ndk1::mutex::unlock(unaff_x20);
  if (*(long *)(unaff_x23 + 0x28) != *(long *)(unaff_x29 + -0x38)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

