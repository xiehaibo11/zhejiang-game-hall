
undefined8 * FUN_0183d720(long *param_1)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  
  pcVar2 = (char *)*param_1;
  if ((pcVar2 != (char *)param_1[1]) && (*pcVar2 == 'D')) {
    pcVar1 = pcVar2 + 1;
    *param_1 = (long)pcVar1;
    if ((pcVar1 != (char *)param_1[1]) && ((*pcVar1 == 't' || (*pcVar1 == 'T')))) {
      *param_1 = (long)(pcVar2 + 2);
      lVar3 = FUN_0183e610(param_1);
      if (lVar3 == 0) {
        return (undefined8 *)0x0;
      }
      pcVar2 = (char *)*param_1;
      if ((pcVar2 != (char *)param_1[1]) && (*pcVar2 == 'E')) {
        pvVar8 = (void *)param_1[0x25c];
        *param_1 = (long)(pcVar2 + 1);
        plVar7 = (long *)((long)pvVar8 + 8);
        lVar6 = *plVar7;
        puVar4 = pvVar8;
        if (0xfef < lVar6 + 0x40U) {
          puVar4 = malloc(0x1000);
          if (puVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::terminate();
          }
          lVar6 = 0;
          *puVar4 = pvVar8;
          plVar7 = puVar4 + 1;
          *plVar7 = 0;
          param_1[0x25c] = (long)puVar4;
        }
        *plVar7 = lVar6 + 0x40;
        puVar5 = (undefined8 *)((long)puVar4 + lVar6 + 0x10);
        *puVar5 = &PTR_FUN_01ce0850;
        *(char **)((long)puVar4 + lVar6 + 0x28) = "";
        *(char **)((long)puVar4 + lVar6 + 0x20) = "decltype(";
        *(undefined4 *)((long)puVar4 + lVar6 + 0x18) = 0x101012f;
        *(long *)((long)puVar4 + lVar6 + 0x30) = lVar3;
        *(char **)((long)puVar4 + lVar6 + 0x40) = "";
        *(char **)((long)puVar4 + lVar6 + 0x38) = ")";
        return puVar5;
      }
    }
  }
  return (undefined8 *)0x0;
}

