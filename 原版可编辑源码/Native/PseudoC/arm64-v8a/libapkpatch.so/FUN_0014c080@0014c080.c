
void FUN_0014c080(long *param_1)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  void *pvVar9;
  undefined1 auVar10 [16];
  long local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  pcVar6 = (char *)*param_1;
  pcVar1 = (char *)param_1[1];
  if (pcVar1 == pcVar6) {
LAB_0014c10c:
    puVar4 = (undefined8 *)FUN_0014a548(param_1);
  }
  else {
    cVar2 = *pcVar6;
    if (cVar2 == 'J') {
      lVar7 = param_1[2];
      lVar8 = param_1[3];
      pcVar6 = pcVar6 + 1;
      *param_1 = (long)pcVar6;
      if (pcVar6 == pcVar1) goto LAB_0014c19c;
      while (*pcVar6 != 'E') {
LAB_0014c19c:
        do {
          local_50 = FUN_0014c080(param_1);
          puVar4 = (undefined8 *)0x0;
          if (local_50 == 0) goto LAB_0014c114;
          FUN_0014c270(param_1 + 2,&local_50);
          pcVar6 = (char *)*param_1;
        } while (pcVar6 == (char *)param_1[1]);
      }
      lVar7 = (lVar8 - lVar7 >> 3) * 8;
      *param_1 = (long)(pcVar6 + 1);
      auVar10 = FUN_00156e64(param_1,param_1[2] + lVar7,param_1[3]);
      pvVar9 = (void *)param_1[0x266];
      param_1[3] = param_1[2] + lVar7;
      lVar7 = *(long *)((long)pvVar9 + 8);
      puVar5 = pvVar9;
      if (0xfef < lVar7 + 0x20U) {
        puVar5 = malloc(0x1000);
        if (puVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar7 = 0;
        *puVar5 = pvVar9;
        puVar5[1] = 0;
        param_1[0x266] = (long)puVar5;
      }
      *(long *)((long)puVar5 + 8) = lVar7 + 0x20;
      puVar4 = (undefined8 *)((long)puVar5 + lVar7 + 0x10);
      *puVar4 = &PTR_FUN_00168a00;
      *(undefined4 *)((long)puVar5 + lVar7 + 0x18) = 0x1010121;
      *(undefined1 (*) [16])((long)puVar5 + lVar7 + 0x20) = auVar10;
      goto LAB_0014c114;
    }
    if (cVar2 == 'L') {
      if (((ulong)((long)pcVar1 - (long)pcVar6) < 2) || (pcVar6[1] != 'Z')) {
        puVar4 = (undefined8 *)FUN_0014f5b8(param_1);
        goto LAB_0014c114;
      }
      *param_1 = (long)(pcVar6 + 2);
      puVar4 = (undefined8 *)FUN_00149bec(param_1);
    }
    else {
      if (cVar2 != 'X') goto LAB_0014c10c;
      *param_1 = (long)(pcVar6 + 1);
      puVar4 = (undefined8 *)FUN_0014e504(param_1);
    }
    if (puVar4 != (undefined8 *)0x0) {
      pcVar6 = (char *)*param_1;
      if ((pcVar6 == (char *)param_1[1]) || (*pcVar6 != 'E')) {
        puVar4 = (undefined8 *)0x0;
      }
      else {
        *param_1 = (long)(pcVar6 + 1);
      }
    }
  }
LAB_0014c114:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4);
}

