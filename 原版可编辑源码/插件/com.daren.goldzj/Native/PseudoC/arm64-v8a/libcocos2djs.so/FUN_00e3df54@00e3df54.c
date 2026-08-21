
uint FUN_00e3df54(long *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_138 [228];
  uint local_54;
  
  local_54 = 0;
  puVar3 = *(undefined8 **)(*(long *)(*param_1 + 0x490) + 0x1358);
  lVar1 = FT_Get_Module(*(undefined8 *)(*(long *)(*param_1 + 0xb0) + 8),"pshinter");
  if ((((puVar3 == (undefined8 *)0x0) || (lVar1 == 0)) ||
      (pcVar2 = (code *)*puVar3, pcVar2 == (code *)0x0)) ||
     (puVar3 = (undefined8 *)(*pcVar2)(), puVar3 == (undefined8 *)0x0)) {
LAB_00e3e060:
    local_54 = 0;
    param_1[0xb] = 0xffffffff;
  }
  else {
    lVar4 = *(long *)(*param_1 + 0x490);
    lVar1 = FUN_00e1388c(*(undefined8 *)(*param_1 + 0xb8),0x808,&local_54);
    if (local_54 == 0) {
      FUN_00e42b14(lVar4 + 0x668,auStack_138);
      local_54 = (*(code *)*puVar3)(*(undefined8 *)(*param_1 + 0xb8),auStack_138,lVar1);
      if (local_54 == 0) {
        uVar5 = (ulong)*(uint *)(lVar4 + 0xb30);
        local_54 = 0;
        do {
          if (uVar5 == 0) {
            *(long *)param_1[10] = lVar1;
            goto LAB_00e3e060;
          }
          lVar6 = (ulong)((int)uVar5 - 1) * 8;
          FUN_00e42b14(*(undefined8 *)(lVar4 + lVar6 + 0xb38),auStack_138);
          local_54 = (*(code *)*puVar3)(*(undefined8 *)(*param_1 + 0xb8),auStack_138,
                                        lVar1 + 8 + lVar6);
          uVar5 = uVar5 - 1;
        } while (local_54 == 0);
      }
    }
  }
  return local_54;
}

