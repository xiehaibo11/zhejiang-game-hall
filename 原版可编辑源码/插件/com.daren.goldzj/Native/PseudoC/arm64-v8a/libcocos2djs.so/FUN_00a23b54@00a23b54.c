
void FUN_00a23b54(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x670 + lVar1));
    *(undefined8 *)(param_1 + 0x670 + lVar1) = 0;
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x1e8);
  if (*(char *)(param_1 + 0x920) != '\0') {
    (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x918));
    *(undefined8 *)(param_1 + 0x918) = 0;
    *(undefined1 *)(param_1 + 0x920) = 0;
  }
  *(undefined8 *)(param_1 + 0x918) = 0;
  if (*(char *)(param_1 + 0x910) != '\0') {
    (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x908));
    *(undefined8 *)(param_1 + 0x908) = 0;
    *(undefined1 *)(param_1 + 0x910) = 0;
  }
  *(undefined8 *)(param_1 + 0x908) = 0;
  return;
}

