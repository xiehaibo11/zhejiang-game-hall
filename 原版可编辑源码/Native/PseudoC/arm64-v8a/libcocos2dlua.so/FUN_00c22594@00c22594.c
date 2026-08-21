
void FUN_00c22594(long *param_1,uint *param_2,long *param_3,ulong *param_4,uint param_5)

{
  uint *puVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  char local_9;
  ulong local_8;
  
  uVar7 = *param_4;
  uVar5 = (uint)((long)uVar7 >> 0x2f);
  if (uVar5 == 0xfffffff2) {
    uVar3 = *param_2;
    param_5 = param_5 | 2;
    lVar4 = 0xd8;
    uVar5 = uVar3 >> 0x1c;
  }
  else if (uVar5 < 0xfffffff2) {
    uVar3 = *param_2;
    param_5 = param_5 | 2;
    lVar4 = 0x150;
    uVar5 = uVar3 >> 0x1c;
  }
  else if (uVar5 == 0xfffffff5) {
    uVar7 = uVar7 & 0x7fffffffffff;
    lVar6 = *param_1;
    uVar9 = (ulong)*(ushort *)(uVar7 + 10);
    uVar5 = *(uint *)(lVar6 + uVar9 * 0x18);
    if ((uVar5 & 0xf0800000) == 0x20800000) {
      param_4 = *(ulong **)(uVar7 + 0x10);
      uVar9 = (ulong)(uVar5 & 0xffff);
    }
    else {
      param_4 = (ulong *)(uVar7 + 0x10);
    }
    lVar4 = uVar9 * 0x18;
    uVar8 = *(uint *)(lVar6 + lVar4);
    while (uVar5 = uVar8 >> 0x1c, uVar5 == 8) {
      lVar4 = ((ulong)uVar8 & 0xffff) * 0x18;
      uVar8 = *(uint *)(lVar6 + lVar4);
    }
    lVar4 = lVar6 + lVar4;
    if (uVar5 != 6) {
      if (uVar5 == 5) {
        uVar3 = *param_2;
        uVar5 = uVar3 >> 0x1c;
        lVar4 = lVar6 + (ulong)(uVar8 & 0xffff) * 0x18;
      }
      else {
        uVar3 = *param_2;
        uVar5 = uVar3 >> 0x1c;
      }
      goto LAB_00c225f0;
    }
    uVar7 = FUN_00c0e7d0(param_1,(uint)uVar9 | 0x20030000,8);
    uVar3 = *param_2;
    lVar4 = (uVar7 & 0xffffffff) * 0x18;
    uVar5 = uVar3 >> 0x1c;
  }
  else if (uVar5 == 0xfffffffb) {
    uVar3 = *param_2;
    uVar7 = uVar7 & 0x7fffffffffff;
    uVar5 = uVar3 >> 0x1c;
    if (uVar5 == 5) {
      puVar1 = (uint *)FUN_00c0e9cc(param_1,param_2,uVar7,&local_8,0);
      if ((puVar1 == (uint *)0x0) || (*puVar1 >> 0x1c != 0xb)) goto LAB_00c22aa8;
      uVar3 = *param_2;
      param_4 = (ulong *)(puVar1 + 1);
      uVar5 = uVar3 >> 0x1c;
      lVar4 = (ulong)(*puVar1 & 0xffff) * 0x18;
    }
    else {
      if ((uVar3 & 0xfc000000) == 0x30000000) {
        lVar4 = *param_1;
        do {
          lVar6 = (ulong)(ushort)uVar3 * 0x18;
          uVar3 = *(uint *)(lVar4 + lVar6);
        } while (uVar3 >> 0x1c == 8);
        uVar5 = *(int *)(uVar7 + 0x10) + 1;
        if ((*(ulong *)(lVar4 + lVar6) & 0xfffffffffc000000) == 0x100000000) {
          uVar3 = param_2[1];
          if ((uVar5 <= uVar3) || (uVar3 == 0)) {
            uVar3 = uVar5;
          }
          memcpy(param_3,(void *)(uVar7 + 0x18),(ulong)uVar3);
          return;
        }
        goto LAB_00c22aac;
      }
      param_4 = (ulong *)(uVar7 + 0x18);
      param_5 = param_5 | 2;
      lVar4 = 0x1e0;
    }
  }
  else {
    if (uVar5 == 0xfffffff4) {
      uVar5 = *param_2;
      if (uVar5 >> 0x1c == 3) {
        uVar7 = uVar7 & 0x7fffffffffff;
        do {
          lVar6 = (ulong)(ushort)uVar5 * 0x18;
          lVar4 = *param_1 + lVar6;
          uVar5 = *(uint *)(*param_1 + lVar6);
        } while (uVar5 >> 0x1c == 8);
        uVar5 = param_2[1];
        uVar9 = 0;
        uVar3 = *(uint *)(lVar4 + 4);
        param_4 = (ulong *)0x0;
        do {
          if ((uint)uVar9 < *(uint *)(uVar7 + 0x30)) {
            plVar2 = (long *)(*(long *)(uVar7 + 0x10) + uVar9 * 8);
          }
          else {
            plVar2 = (long *)FUN_00c1bbc0(uVar7,uVar9 & 0xffffffff);
          }
          uVar8 = (uint)param_4;
          if ((plVar2 == (long *)0x0) || (*plVar2 == -1)) {
            if (uVar9 != 0) {
              if (uVar5 == 0xffffffff) {
                return;
              }
              if (uVar3 == uVar8) {
                for (; (uint)param_4 < uVar5; param_4 = (ulong *)(ulong)((uint)param_4 + uVar3)) {
                  memcpy((void *)((long)param_3 + (long)param_4),param_3,(ulong)uVar3);
                }
                return;
              }
              memset((void *)((long)param_3 + (long)param_4),0,(ulong)(uVar5 - uVar8));
              return;
            }
          }
          else {
            if (uVar5 <= uVar8) {
              FUN_007b604c(*param_1,param_1 + 2,param_2);
              goto LAB_00c22aa8;
            }
            lVar6 = (long)param_3 + (long)param_4;
            param_4 = (ulong *)(ulong)(uVar8 + uVar3);
            FUN_00c22594(param_1,lVar4,lVar6,plVar2,param_5);
          }
          uVar9 = uVar9 + 1;
        } while( true );
      }
      if (uVar5 >> 0x1c == 1) {
        local_8 = local_8 & 0xffffffff00000000;
        memset(param_3,0,(ulong)param_2[1]);
        FUN_00c22390(param_1,param_2,(short)param_2[2],param_3,uVar7 & 0x7fffffffffff,&local_8,
                     param_5);
        return;
      }
LAB_00c22aa8:
      lVar4 = *param_1;
LAB_00c22aac:
      lVar4 = FUN_00c0ee70(param_1[2],(int)((long)param_2 - lVar4 >> 3) * -0x55555555,0);
      uVar3 = (uint)((long)*param_4 >> 0x2f);
      uVar5 = 0xd;
      if (0xfffffff2 < uVar3) {
        uVar5 = ~uVar3;
      }
      if (param_5 >> 8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00bfb308(param_1[2],0xc62,(&PTR_DAT_01697110)[uVar5],lVar4 + 0x18);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00bfb3b8(param_1[2],param_5 >> 8,0xc62);
    }
    if (uVar5 + 3 < 2) {
      uVar3 = *param_2;
      lVar4 = 0x48;
      local_9 = -2 - (char)uVar5;
      uVar5 = uVar3 >> 0x1c;
      param_4 = (ulong *)&local_9;
    }
    else if (uVar7 == 0xffffffffffffffff) {
      uVar3 = *param_2;
      param_5 = param_5 | 2;
      lVar4 = 0x198;
      uVar5 = uVar3 >> 0x1c;
      param_4 = &local_8;
      local_8 = 0;
    }
    else if (uVar5 == 0xfffffff3) {
      uVar7 = uVar7 & 0x7fffffffffff;
      local_8 = uVar7 + 0x30;
      if (*(char *)(uVar7 + 10) == '\x01') {
        uVar3 = *param_2;
        local_8 = *(ulong *)(uVar7 + 0x30);
        lVar4 = 0x198;
        uVar5 = uVar3 >> 0x1c;
        param_4 = &local_8;
      }
      else {
        uVar3 = *param_2;
        lVar4 = 0x198;
        param_4 = &local_8;
        uVar5 = uVar3 >> 0x1c;
      }
    }
    else {
      if (uVar5 != 0xfffffffc) {
        if ((uVar5 == 0xfffffff7) &&
           (lVar4 = FUN_00c10438(param_1,param_2,*param_4 & 0x7fffffffffff), lVar4 != 0)) {
          *param_3 = lVar4;
          return;
        }
        goto LAB_00c22aa8;
      }
      uVar3 = *param_2;
      local_8 = uVar7 & 0x7fffffffffff;
      lVar4 = 0x198;
      uVar5 = uVar3 >> 0x1c;
      param_4 = &local_8;
    }
  }
  lVar6 = *param_1;
  lVar4 = lVar6 + lVar4;
LAB_00c225f0:
  if (uVar5 == 5) {
    param_2 = (uint *)(lVar6 + (ulong)(ushort)uVar3 * 0x18);
  }
  FUN_00c21820(param_1,param_2,lVar4,param_3,param_4,param_5);
  return;
}

