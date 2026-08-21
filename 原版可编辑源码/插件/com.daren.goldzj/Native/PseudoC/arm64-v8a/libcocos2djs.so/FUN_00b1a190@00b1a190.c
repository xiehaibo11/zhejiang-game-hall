
int FUN_00b1a190(void)

{
  int iVar1;
  int iVar2;
  long unaff_x19;
  undefined8 *unaff_x21;
  
  CRYPTO_THREAD_write_lock(*unaff_x21);
  iVar2 = *(int *)(unaff_x19 + 0xa0);
  if ((iVar2 == 0) && (iVar2 = 0, *(code **)(unaff_x19 + 0x60) != (code *)0x0)) {
    iVar1 = (**(code **)(unaff_x19 + 0x60))();
    if (iVar1 == 0) goto LAB_00b1a024;
    iVar2 = *(int *)(unaff_x19 + 0xa0);
  }
  else {
    iVar1 = 1;
  }
  *(int *)(unaff_x19 + 0x9c) = *(int *)(unaff_x19 + 0x9c) + 1;
  *(int *)(unaff_x19 + 0xa0) = iVar2 + 1;
LAB_00b1a024:
  CRYPTO_THREAD_unlock(*unaff_x21);
  return iVar1;
}

