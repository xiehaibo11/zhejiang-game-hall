
undefined8 * FUN_0014dbf8(long *param_1,undefined8 *param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  long lVar6;
  undefined8 *puVar7;
  void *pvVar8;
  undefined1 auVar9 [16];
  
  pcVar5 = (char *)*param_1;
  puVar7 = param_2;
  if (pcVar5 != (char *)param_1[1]) {
    do {
      if (*pcVar5 != 'B') {
        return puVar7;
      }
      *param_1 = (long)(pcVar5 + 1);
      auVar9 = FUN_0015a358(param_1);
      if (auVar9._0_8_ == auVar9._8_8_) {
        return (undefined8 *)0x0;
      }
      pvVar8 = (void *)param_1[0x266];
      lVar6 = *(long *)((long)pvVar8 + 8);
      puVar4 = pvVar8;
      if (0xfef < lVar6 + 0x30U) {
        puVar4 = malloc(0x1000);
        if (puVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar6 = 0;
        *puVar4 = pvVar8;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      *(long *)((long)puVar4 + 8) = lVar6 + 0x30;
      param_2 = (undefined8 *)((long)puVar4 + lVar6 + 0x10);
      *param_2 = &PTR_FUN_00168680;
      uVar3 = *(undefined2 *)((long)puVar7 + 9);
      uVar2 = *(undefined1 *)((long)puVar7 + 0xb);
      *(undefined1 (*) [16])((long)puVar4 + lVar6 + 0x28) = auVar9;
      *(undefined8 **)((long)puVar4 + lVar6 + 0x20) = puVar7;
      *(undefined2 *)((long)puVar4 + lVar6 + 0x19) = uVar3;
      pcVar5 = (char *)*param_1;
      pcVar1 = (char *)param_1[1];
      *(undefined1 *)((long)puVar4 + lVar6 + 0x18) = 8;
      *(undefined1 *)((long)puVar4 + lVar6 + 0x1b) = uVar2;
      puVar7 = param_2;
    } while (pcVar5 != pcVar1);
  }
  return param_2;
}

