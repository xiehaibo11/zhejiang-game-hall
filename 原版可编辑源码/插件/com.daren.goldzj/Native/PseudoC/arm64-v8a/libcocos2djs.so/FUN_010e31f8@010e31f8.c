
long FUN_010e31f8(long *param_1,long *param_2,uint param_3)

{
  char cVar1;
  ulong *puVar2;
  ulong *puVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  iVar5 = (int)param_1[1];
  lVar4 = *param_1;
  uVar8 = (ulong)(iVar5 - 1U & param_3);
  cVar1 = *(char *)(lVar4 + uVar8 * 0x18 + 0x10);
  do {
    if (cVar1 == '\0') {
LAB_010e32f8:
      return lVar4 + uVar8 * 0x18;
    }
    puVar2 = (ulong *)*param_2;
    puVar3 = *(ulong **)(lVar4 + uVar8 * 0x18);
    if (puVar2 == puVar3) goto LAB_010e32f8;
    uVar6 = *puVar2;
    if (((puVar2 != (ulong *)0x0) && (puVar3 != (ulong *)0x0)) && (uVar6 == *puVar3))
    goto LAB_010e32f8;
    uVar7 = uVar6 & 0xffffffff00000000 | 7;
    if (((0x1f < *(ushort *)(uVar7 + *(uint *)(uVar6 - 1))) ||
        (0x1f < *(ushort *)((*puVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar3 - 1)))) &&
       ((*(short *)(uVar7 + *(uint *)(uVar6 - 1)) != 0x40 &&
        (*(short *)((*puVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar3 - 1)) != 0x40))))
    {
      uVar6 = v8::internal::String::SlowEquals(param_1[2]);
      if ((uVar6 & 1) != 0) {
        lVar4 = *param_1;
        goto LAB_010e32f8;
      }
      iVar5 = (int)param_1[1];
      lVar4 = *param_1;
    }
    uVar8 = (ulong)((int)uVar8 + 1U & iVar5 - 1U);
    cVar1 = *(char *)(lVar4 + uVar8 * 0x18 + 0x10);
  } while( true );
}

