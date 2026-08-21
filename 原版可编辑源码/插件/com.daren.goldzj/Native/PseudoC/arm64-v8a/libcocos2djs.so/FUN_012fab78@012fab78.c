
long * FUN_012fab78(long *param_1,uint *param_2)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  long *plVar10;
  
  uVar3 = v8::base::hash_value(param_2[1]);
  uVar3 = v8::base::hash_combine(0,uVar3);
  uVar4 = v8::base::hash_value(*param_2);
  uVar2 = v8::base::hash_combine(uVar3,uVar4);
  puVar5 = (undefined8 *)*param_1;
  if (puVar5 != (undefined8 *)0x0) {
    uVar8 = 0;
    while (*(uint *)(puVar5 + 2) != uVar2) {
      plVar10 = puVar5 + (long)(int)uVar8 + 3;
      do {
        uVar7 = uVar8;
        uVar8 = uVar7 + 1;
        plVar10 = plVar10 + 1;
      } while (-1 < (int)((*(uint *)(puVar5 + 2) ^ uVar2) << (ulong)(uVar7 & 0x1f)));
      if (((int)*(char *)((long)puVar5 + 0xc) <= (int)uVar7) ||
         (puVar5 = (undefined8 *)*plVar10, puVar5 == (undefined8 *)0x0)) goto LAB_012fac10;
    }
    if (puVar5[3] == 0) {
      if ((*param_2 == (uint)*puVar5) && (param_2[1] == (uint)((ulong)*puVar5 >> 0x20))) {
        return puVar5 + 1;
      }
    }
    else {
      plVar9 = (long *)(puVar5[3] + 8);
      plVar10 = (long *)*plVar9;
      if (plVar10 != (long *)0x0) {
        uVar2 = *param_2;
        plVar6 = plVar9;
        do {
          if (*(uint *)((long)plVar10 + 0x1c) < uVar2) {
            plVar1 = (long *)plVar10[1];
          }
          else if ((*(uint *)((long)plVar10 + 0x1c) == uVar2) &&
                  (*(uint *)(plVar10 + 4) < param_2[1])) {
            plVar1 = (long *)plVar10[1];
          }
          else {
            plVar1 = (long *)*plVar10;
            plVar6 = plVar10;
          }
          plVar10 = plVar1;
        } while (plVar10 != (long *)0x0);
        if (plVar6 != plVar9) {
          uVar8 = (uint)*(undefined8 *)((long)plVar6 + 0x1c);
          if ((uVar8 <= uVar2) &&
             ((uVar2 != uVar8 ||
              ((uint)((ulong)*(undefined8 *)((long)plVar6 + 0x1c) >> 0x20) <= param_2[1])))) {
            return (long *)((long)plVar6 + 0x24);
          }
        }
      }
    }
  }
LAB_012fac10:
  return param_1 + 1;
}

