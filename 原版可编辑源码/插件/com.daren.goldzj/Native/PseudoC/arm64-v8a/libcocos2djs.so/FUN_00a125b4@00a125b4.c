
undefined8 FUN_00a125b4(long *param_1,long param_2,long param_3,undefined8 param_4,uint *param_5)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  
  if ((param_1 == (long *)0x0) || (*param_1 != 0xbab1e)) {
    uVar2 = 1;
  }
  else {
    plVar5 = (long *)param_1[1];
    if (plVar5 == (long *)0x0) {
      uVar6 = 0xffffffff;
    }
    else {
      uVar6 = 0xffffffff;
LAB_00a12600:
      do {
        uVar1 = FUN_00a128fc(plVar5,&local_54);
        if (((uVar1 & 1) == 0) || (0x3ff < local_54)) {
          uVar3 = 0xffffffff;
          if ((uVar1 >> 0x10 & 1) == 0) goto LAB_00a12684;
LAB_00a1264c:
          if (0x3ff < local_54) goto LAB_00a12684;
          uVar4 = (ulong)(long)(int)local_54 >> 3 & 0x1ffffffffffffff8;
          *(ulong *)(param_3 + uVar4) =
               *(ulong *)(param_3 + uVar4) | 1L << ((long)(int)local_54 & 0x3fU);
          uVar7 = local_54;
          if ((int)local_54 <= (int)uVar6) {
            uVar7 = uVar6;
          }
          if ((uVar1 >> 1 & 1) != 0) goto LAB_00a1269c;
          goto LAB_00a126d0;
        }
        uVar4 = (ulong)(long)(int)local_54 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(param_2 + uVar4) =
             *(ulong *)(param_2 + uVar4) | 1L << ((long)(int)local_54 & 0x3fU);
        uVar3 = local_54;
        if ((uVar1 >> 0x10 & 1) != 0) goto LAB_00a1264c;
LAB_00a12684:
        uVar7 = uVar3;
        if ((int)uVar3 <= (int)uVar6) {
          uVar7 = uVar6;
        }
        if (uVar3 == 0xffffffff) {
LAB_00a128a8:
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) break;
          goto LAB_00a12600;
        }
        if ((uVar1 >> 1 & 1) == 0) {
LAB_00a126d0:
          uVar3 = 0xffffffff;
          if ((uVar1 >> 0x11 & 1) == 0) goto LAB_00a12710;
LAB_00a126d8:
          if (0x3ff < local_50) goto LAB_00a12710;
          uVar4 = (ulong)(long)(int)local_50 >> 3 & 0x1ffffffffffffff8;
          *(ulong *)(param_3 + uVar4) =
               *(ulong *)(param_3 + uVar4) | 1L << ((long)(int)local_50 & 0x3fU);
          uVar8 = local_50;
          if ((int)local_50 <= (int)uVar7) {
            uVar8 = uVar7;
          }
          if ((uVar1 >> 2 & 1) != 0) goto LAB_00a12728;
          goto LAB_00a1275c;
        }
LAB_00a1269c:
        if (0x3ff < local_50) goto LAB_00a126d0;
        uVar4 = (ulong)(long)(int)local_50 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(param_2 + uVar4) =
             *(ulong *)(param_2 + uVar4) | 1L << ((long)(int)local_50 & 0x3fU);
        uVar3 = local_50;
        if ((uVar1 >> 0x11 & 1) != 0) goto LAB_00a126d8;
LAB_00a12710:
        uVar8 = uVar3;
        if ((int)uVar3 <= (int)uVar7) {
          uVar8 = uVar7;
        }
        uVar6 = uVar7;
        if (uVar3 == 0xffffffff) goto LAB_00a128a8;
        if ((uVar1 >> 2 & 1) == 0) {
LAB_00a1275c:
          uVar3 = 0xffffffff;
          if ((uVar1 >> 0x12 & 1) == 0) goto LAB_00a1279c;
LAB_00a12764:
          if (0x3ff < local_4c) goto LAB_00a1279c;
          uVar4 = (ulong)(long)(int)local_4c >> 3 & 0x1ffffffffffffff8;
          *(ulong *)(param_3 + uVar4) =
               *(ulong *)(param_3 + uVar4) | 1L << ((long)(int)local_4c & 0x3fU);
          uVar7 = local_4c;
          if ((int)local_4c <= (int)uVar8) {
            uVar7 = uVar8;
          }
          if ((uVar1 >> 3 & 1) != 0) goto LAB_00a127b4;
          goto LAB_00a127e8;
        }
LAB_00a12728:
        if (0x3ff < local_4c) goto LAB_00a1275c;
        uVar4 = (ulong)(long)(int)local_4c >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(param_2 + uVar4) =
             *(ulong *)(param_2 + uVar4) | 1L << ((long)(int)local_4c & 0x3fU);
        uVar3 = local_4c;
        if ((uVar1 >> 0x12 & 1) != 0) goto LAB_00a12764;
LAB_00a1279c:
        uVar7 = uVar3;
        if ((int)uVar3 <= (int)uVar8) {
          uVar7 = uVar8;
        }
        uVar6 = uVar8;
        if (uVar3 == 0xffffffff) goto LAB_00a128a8;
        if ((uVar1 >> 3 & 1) == 0) {
LAB_00a127e8:
          uVar3 = 0xffffffff;
          if ((uVar1 >> 0x13 & 1) == 0) goto LAB_00a12828;
LAB_00a127f0:
          if (0x3ff < local_48) goto LAB_00a12828;
          uVar4 = (ulong)(long)(int)local_48 >> 3 & 0x1ffffffffffffff8;
          *(ulong *)(param_3 + uVar4) =
               *(ulong *)(param_3 + uVar4) | 1L << ((long)(int)local_48 & 0x3fU);
          uVar8 = local_48;
          if ((int)local_48 <= (int)uVar7) {
            uVar8 = uVar7;
          }
          if ((uVar1 >> 4 & 1) != 0) goto LAB_00a1283c;
          goto LAB_00a12870;
        }
LAB_00a127b4:
        if (0x3ff < local_48) goto LAB_00a127e8;
        uVar4 = (ulong)(long)(int)local_48 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(param_2 + uVar4) =
             *(ulong *)(param_2 + uVar4) | 1L << ((long)(int)local_48 & 0x3fU);
        uVar3 = local_48;
        if ((uVar1 >> 0x13 & 1) != 0) goto LAB_00a127f0;
LAB_00a12828:
        uVar8 = uVar3;
        if ((int)uVar3 <= (int)uVar7) {
          uVar8 = uVar7;
        }
        uVar6 = uVar7;
        if (uVar3 == 0xffffffff) goto LAB_00a128a8;
        if ((uVar1 >> 4 & 1) == 0) {
LAB_00a12870:
          uVar3 = 0xffffffff;
        }
        else {
LAB_00a1283c:
          if (0x3ff < local_44) goto LAB_00a12870;
          uVar4 = (ulong)(long)(int)local_44 >> 3 & 0x1ffffffffffffff8;
          *(ulong *)(param_2 + uVar4) =
               *(ulong *)(param_2 + uVar4) | 1L << ((long)(int)local_44 & 0x3fU);
          uVar3 = local_44;
        }
        if (((uVar1 >> 0x14 & 1) != 0) && (local_44 < 0x400)) {
          uVar4 = (ulong)(long)(int)local_44 >> 3 & 0x1ffffffffffffff8;
          *(ulong *)(param_3 + uVar4) =
               *(ulong *)(param_3 + uVar4) | 1L << ((long)(int)local_44 & 0x3fU);
          uVar6 = local_44;
          if ((int)local_44 <= (int)uVar8) {
            uVar6 = uVar8;
          }
          goto LAB_00a128a8;
        }
        uVar1 = uVar3;
        if ((int)uVar3 <= (int)uVar8) {
          uVar1 = uVar8;
        }
        uVar6 = uVar8;
        if (uVar3 != 0xffffffff) {
          uVar6 = uVar1;
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
    uVar2 = 0;
    *param_5 = uVar6;
  }
  return uVar2;
}

