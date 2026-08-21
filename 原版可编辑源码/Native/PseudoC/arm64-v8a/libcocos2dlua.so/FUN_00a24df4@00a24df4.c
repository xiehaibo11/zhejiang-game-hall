
long FUN_00a24df4(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = (*(code *)PTR_calloc_01769a18)(1,0x8e68);
  if (lVar2 == 0) {
    return 0;
  }
  lVar3 = (*(code *)PTR_malloc_017699f8)(0x100);
  *(long *)(lVar2 + 0xaf8) = lVar3;
  if (lVar3 != 0) {
    *(undefined8 *)(lVar2 + 0xb00) = 0x100;
    iVar1 = FUN_00a395cc(lVar2,param_1);
    if (iVar1 == 0) {
      *(undefined8 *)(lVar2 + 0xad0) = 0;
      *(undefined8 *)(lVar2 + 0xaf0) = 0;
      *(undefined4 *)(lVar2 + 0x978) = *(undefined4 *)(param_1 + 0x978);
      *(undefined1 *)(lVar2 + 0x970) = *(undefined1 *)(param_1 + 0x970);
      if (*(long *)(param_1 + 0x938) != 0) {
        lVar3 = FUN_00a313d0(param_1,*(undefined8 *)(*(long *)(param_1 + 0x938) + 8),
                             *(undefined8 *)(lVar2 + 0x938),*(undefined1 *)(param_1 + 0x3d1));
        *(long *)(lVar2 + 0x938) = lVar3;
        if (lVar3 == 0) goto LAB_00a24e50;
      }
      if (*(long *)(param_1 + 0x928) != 0) {
        lVar3 = FUN_00a2c540();
        *(long *)(lVar2 + 0x928) = lVar3;
        if (lVar3 == 0) goto LAB_00a24e50;
      }
      if (*(long *)(param_1 + 0x908) != 0) {
        lVar3 = (*(code *)PTR_strdup_01769a10)();
        *(long *)(lVar2 + 0x908) = lVar3;
        if (lVar3 == 0) goto LAB_00a24e50;
        *(undefined1 *)(lVar2 + 0x910) = 1;
      }
      if (*(long *)(param_1 + 0x918) != 0) {
        lVar3 = (*(code *)PTR_strdup_01769a10)();
        *(long *)(lVar2 + 0x918) = lVar3;
        if (lVar3 == 0) goto LAB_00a24e50;
        *(undefined1 *)(lVar2 + 0x920) = 1;
      }
      FUN_00a47c70(lVar2);
      *(undefined4 *)(lVar2 + 0x8e60) = 0xc0dedbad;
      return lVar2;
    }
  }
LAB_00a24e50:
  FUN_00a2c624(*(undefined8 *)(lVar2 + 0x928));
  *(undefined8 *)(lVar2 + 0x928) = 0;
  (*(code *)PTR_free_01769a00)(*(undefined8 *)(lVar2 + 0xaf8));
  *(undefined8 *)(lVar2 + 0xaf8) = 0;
  (*(code *)PTR_free_01769a00)(*(undefined8 *)(lVar2 + 0x908));
  *(undefined8 *)(lVar2 + 0x908) = 0;
  (*(code *)PTR_free_01769a00)(*(undefined8 *)(lVar2 + 0x918));
  *(undefined8 *)(lVar2 + 0x918) = 0;
  FUN_00a3953c(lVar2);
  (*(code *)PTR_free_01769a00)(lVar2);
  return 0;
}

