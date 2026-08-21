
void FUN_00e9aca0(void)

{
  size_t __n;
  ulong uVar1;
  code *pcVar2;
  long unaff_x19;
  mutex *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *puVar3;
  long unaff_x23;
  undefined8 *puVar4;
  long unaff_x29;
  undefined8 in_stack_00000008;
  long *in_stack_00000030;
  
  if (unaff_x21 != unaff_x22) {
    puVar4 = unaff_x21 + 1;
    puVar3 = unaff_x21;
    if (puVar4 == unaff_x22) {
      FUN_00e9acf4();
      return;
    }
    do {
      in_stack_00000008 = *puVar4;
      if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_009d64e4();
      }
      uVar1 = (**(code **)(*in_stack_00000030 + 0x30))(in_stack_00000030,&stack0x00000008);
      unaff_x21 = puVar3;
      if ((uVar1 & 1) == 0) {
        unaff_x21 = puVar3 + 1;
        *puVar3 = *puVar4;
      }
      puVar4 = puVar4 + 1;
      puVar3 = unaff_x21;
    } while (unaff_x22 != puVar4);
  }
  puVar3 = *(undefined8 **)(unaff_x19 + 0x108);
  puVar4 = unaff_x21;
  if (unaff_x21 != puVar3) {
    do {
      cocos2d::Ref::release((Ref *)*puVar4);
      puVar4 = puVar4 + 1;
    } while (puVar3 != puVar4);
    __n = *(long *)(unaff_x19 + 0x108) - (long)puVar3;
    if (__n != 0) {
      memmove(unaff_x21,puVar3,__n);
    }
    *(undefined8 **)(unaff_x19 + 0x108) = unaff_x21 + ((long)__n >> 3);
  }
  if ((long *)&stack0x00000010 == in_stack_00000030) {
    pcVar2 = *(code **)(*in_stack_00000030 + 0x20);
  }
  else {
    if (in_stack_00000030 == (long *)0x0) goto LAB_00e9ad68;
    pcVar2 = *(code **)(*in_stack_00000030 + 0x28);
  }
  (*pcVar2)();
LAB_00e9ad68:
  std::__ndk1::mutex::unlock(unaff_x20);
  if (*(long *)(unaff_x23 + 0x28) != *(long *)(unaff_x29 + -0x38)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

