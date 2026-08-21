
uint FUN_0107e704(long *param_1)

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
  puVar3 = *(undefined8 **)(*(long *)(*param_1 + 0x428) + 0x1278);
  lVar1 = FT_Get_Module(*(undefined8 *)(*(long *)(*param_1 + 0xb0) + 8),"pshinter");
  if ((((puVar3 == (undefined8 *)0x0) || (lVar1 == 0)) ||
      (pcVar2 = (code *)*puVar3, pcVar2 == (code *)0x0)) ||
     (puVar3 = (undefined8 *)(*pcVar2)(), puVar3 == (undefined8 *)0x0)) {
LAB_0107e80c:
    local_54 = 0;
    param_1[0xb] = 0xffffffff;
  }
  else {
    lVar4 = *(long *)(*param_1 + 0x428);
    lVar1 = ft_mem_alloc(*(undefined8 *)(*param_1 + 0xb8),0x808,&local_54);
    if (local_54 == 0) {
      FUN_01086bc4(lVar4 + 0x610,auStack_138);
      local_54 = (*(code *)*puVar3)(*(undefined8 *)(*param_1 + 0xb8),auStack_138,lVar1);
      if (local_54 == 0) {
        uVar5 = (ulong)*(uint *)(lVar4 + 0xa50);
        local_54 = 0;
        do {
          if (uVar5 == 0) {
            param_1[10] = lVar1;
            goto LAB_0107e80c;
          }
          lVar6 = (ulong)((int)uVar5 - 1) * 8;
          FUN_01086bc4(*(undefined8 *)(lVar4 + lVar6 + 0xa58),auStack_138);
          local_54 = (*(code *)*puVar3)(*(undefined8 *)(*param_1 + 0xb8),auStack_138,
                                        lVar1 + 8 + lVar6);
          uVar5 = uVar5 - 1;
        } while (local_54 == 0);
      }
    }
  }
  return local_54;
}

