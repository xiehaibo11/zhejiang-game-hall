
void FUN_0011cb4c(long param_1,long param_2,ulong *param_3,uint param_4,long *param_5,ulong *param_6
                 ,undefined8 param_7)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar10 = param_4 & 0xff;
  uVar11 = *param_3;
  if (uVar10 == 0x50) {
    uVar11 = uVar11 + 7 & 0xfffffffffffffff8;
    *param_3 = uVar11 | 1;
    uVar4 = (**(code **)(param_2 + 0x18))(param_1,uVar11,&local_70,0,param_7);
    uVar11 = local_70;
    if (-1 < (int)uVar4) {
      uVar12 = *param_3;
      *param_3 = uVar12 + 1;
      uVar4 = (**(code **)(param_2 + 0x18))(param_1,uVar12 & 0xfffffffffffffff8,&local_70,0,param_7)
      ;
      if (-1 < (int)uVar4) {
        uVar13 = *param_3;
        iVar2 = *(int *)(param_1 + 0x40);
        *param_3 = uVar13 + 1;
        uVar6 = (uint)(local_70 >> ((uVar12 - (uVar12 & 0xfffffffffffffff8)) * 8 & 0x3f));
        uVar10 = (uint)uVar11 & 0xff | uVar6 << 8;
        if (iVar2 != 0) {
          uVar10 = uVar6 & 0xff | (uint)uVar11 << 8;
        }
        uVar4 = (**(code **)(param_2 + 0x18))
                          (param_1,uVar13 & 0xfffffffffffffff8,&local_70,0,param_7);
        uVar11 = local_70;
        if (-1 < (int)uVar4) {
          uVar12 = *param_3;
          *param_3 = uVar12 + 1;
          uVar4 = (**(code **)(param_2 + 0x18))
                            (param_1,uVar12 & 0xfffffffffffffff8,&local_70,0,param_7);
          if (-1 < (int)uVar4) {
            uVar11 = uVar11 >> ((uVar13 - (uVar13 & 0xfffffffffffffff8)) * 8 & 0x3f);
            uVar12 = local_70 >> ((uVar12 - (uVar12 & 0xfffffffffffffff8)) * 8 & 0x3f);
            if (*(int *)(param_1 + 0x40) == 0) {
              uVar11 = (ulong)uVar10 & 0xffff | (uVar11 & 0xff | (uVar12 & 0xff) << 8) << 0x10;
            }
            else {
              uVar11 = ((ulong)uVar10 & 0xffff) << 0x10 | (uVar11 & 0xff) << 8 | uVar12 & 0xff;
            }
            uVar13 = *param_3;
            *param_3 = uVar13 + 1;
            uVar4 = (**(code **)(param_2 + 0x18))
                              (param_1,uVar13 & 0xfffffffffffffff8,&local_70,0,param_7);
            uVar12 = local_70;
            if (-1 < (int)uVar4) {
              uVar16 = *param_3;
              *param_3 = uVar16 + 1;
              uVar4 = (**(code **)(param_2 + 0x18))
                                (param_1,uVar16 & 0xfffffffffffffff8,&local_70,0,param_7);
              if (-1 < (int)uVar4) {
                uVar14 = *param_3;
                uVar6 = (uint)(uVar12 >> ((uVar13 - (uVar13 & 0xfffffffffffffff8)) * 8 & 0x3f));
                uVar8 = (uint)(local_70 >> ((uVar16 - (uVar16 & 0xfffffffffffffff8)) * 8 & 0x3f));
                iVar2 = *(int *)(param_1 + 0x40);
                *param_3 = uVar14 + 1;
                uVar10 = uVar6 & 0xff | uVar8 << 8;
                if (iVar2 != 0) {
                  uVar10 = uVar8 & 0xff | uVar6 << 8;
                }
                uVar4 = (**(code **)(param_2 + 0x18))
                                  (param_1,uVar14 & 0xfffffffffffffff8,&local_70,0,param_7);
                uVar12 = local_70;
                if (-1 < (int)uVar4) {
                  uVar13 = *param_3;
                  *param_3 = uVar13 + 1;
                  uVar4 = (**(code **)(param_2 + 0x18))
                                    (param_1,uVar13 & 0xfffffffffffffff8,&local_70,0,param_7);
                  if (-1 < (int)uVar4) {
                    uVar12 = uVar12 >> ((uVar14 - (uVar14 & 0xfffffffffffffff8)) * 8 & 0x3f);
                    local_70 = local_70 >> ((uVar13 - (uVar13 & 0xfffffffffffffff8)) * 8 & 0x3f);
                    if (*(int *)(param_1 + 0x40) == 0) {
                      uVar12 = (ulong)uVar10 & 0xffff |
                               (uVar12 & 0xff | (local_70 & 0xff) << 8) << 0x10;
                    }
                    else {
                      uVar12 = ((ulong)uVar10 & 0xffff) << 0x10 | (uVar12 & 0xff) << 8 |
                               local_70 & 0xff;
                    }
                    uVar13 = uVar11 | uVar12 << 0x20;
                    if (*(int *)(param_1 + 0x40) != 0) {
                      uVar13 = uVar12 | uVar11 << 0x20;
                    }
                    uVar4 = 0;
                    *param_6 = uVar13;
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LAB_0011dbdc;
  }
  if (uVar10 == 0xff) {
    uVar4 = 0;
    *param_6 = 0;
    goto LAB_0011dbdc;
  }
  uVar6 = param_4 & 0xf;
  switch(uVar6) {
  case 0:
  case 4:
    *param_3 = uVar11 + 1;
    uVar4 = (**(code **)(param_2 + 0x18))(param_1,uVar11 & 0xfffffffffffffff8,&local_70,0,param_7);
    uVar12 = local_70;
    if ((int)uVar4 < 0) goto LAB_0011dbdc;
    uVar13 = *param_3;
    *param_3 = uVar13 + 1;
    uVar4 = (**(code **)(param_2 + 0x18))(param_1,uVar13 & 0xfffffffffffffff8,&local_70,0,param_7);
    if ((int)uVar4 < 0) goto LAB_0011dbdc;
    uVar16 = *param_3;
    uVar8 = (uint)(uVar12 >> ((uVar11 - (uVar11 & 0xfffffffffffffff8)) * 8 & 0x3f));
    uVar7 = (uint)(local_70 >> ((uVar13 - (uVar13 & 0xfffffffffffffff8)) * 8 & 0x3f));
    iVar2 = *(int *)(param_1 + 0x40);
    *param_3 = uVar16 + 1;
    uVar6 = uVar8 & 0xff | uVar7 << 8;
    if (iVar2 != 0) {
      uVar6 = uVar7 & 0xff | uVar8 << 8;
    }
    uVar4 = (**(code **)(param_2 + 0x18))(param_1,uVar16 & 0xfffffffffffffff8,&local_70,0,param_7);
    uVar12 = local_70;
    if ((int)uVar4 < 0) goto LAB_0011dbdc;
    uVar13 = *param_3;
    *param_3 = uVar13 + 1;
    uVar4 = (**(code **)(param_2 + 0x18))(param_1,uVar13 & 0xfffffffffffffff8,&local_70,0,param_7);
    if ((int)uVar4 < 0) goto LAB_0011dbdc;
    uVar8 = (uint)(uVar12 >> ((uVar16 - (uVar16 & 0xfffffffffffffff8)) * 8 & 0x3f));
    uVar7 = (uint)(local_70 >> ((uVar13 - (uVar13 & 0xfffffffffffffff8)) * 8 & 0x3f));
    if (*(int *)(param_1 + 0x40) == 0) {
      uVar6 = uVar6 & 0xffff | (uVar8 & 0xff | uVar7 << 8) << 0x10;
    }
    else {
      uVar6 = uVar6 << 0x10 | (uVar8 & 0xff) << 8 | uVar7 & 0xff;
    }
    uVar13 = *param_3;
    *param_3 = uVar13 + 1;
    uVar4 = (**(code **)(param_2 + 0x18))(param_1,uVar13 & 0xfffffffffffffff8,&local_70,0,param_7);
    uVar12 = local_70;
    if ((int)uVar4 < 0) goto LAB_0011dbdc;
    uVar16 = *param_3;
    *param_3 = uVar16 + 1;
    uVar4 = (**(code **)(param_2 + 0x18))(param_1,uVar16 & 0xfffffffffffffff8,&local_70,0,param_7);
    if ((int)uVar4 < 0) goto LAB_0011dbdc;
    uVar14 = *param_3;
    uVar7 = (uint)(uVar12 >> ((uVar13 - (uVar13 & 0xfffffffffffffff8)) * 8 & 0x3f));
    uVar9 = (uint)(local_70 >> ((uVar16 - (uVar16 & 0xfffffffffffffff8)) * 8 & 0x3f));
    iVar2 = *(int *)(param_1 + 0x40);
    *param_3 = uVar14 + 1;
    uVar8 = uVar7 & 0xff | uVar9 << 8;
    if (iVar2 != 0) {
      uVar8 = uVar9 & 0xff | uVar7 << 8;
    }
    uVar4 = (**(code **)(param_2 + 0x18))(param_1,uVar14 & 0xfffffffffffffff8,&local_70,0,param_7);
    uVar12 = local_70;
    if ((int)uVar4 < 0) goto LAB_0011dbdc;
    uVar13 = *param_3;
    *param_3 = uVar13 + 1;
    uVar4 = (**(code **)(param_2 + 0x18))(param_1,uVar13 & 0xfffffffffffffff8,&local_70,0,param_7);
    if ((int)uVar4 < 0) goto LAB_0011dbdc;
    uVar12 = uVar12 >> ((uVar14 - (uVar14 & 0xfffffffffffffff8)) * 8 & 0x3f);
    uVar13 = local_70 >> ((uVar13 - (uVar13 & 0xfffffffffffffff8)) * 8 & 0x3f);
    if (*(int *)(param_1 + 0x40) != 0) {
      uVar16 = (ulong)uVar6 << 0x20 | ((ulong)uVar8 & 0xffff) << 0x10;
      goto LAB_0011d75c;
    }
    uVar16 = CONCAT44(uVar8 & 0xffff | ((uint)uVar12 & 0xff | (int)uVar13 << 8) << 0x10,uVar6);
    break;
  case 1:
    *param_3 = uVar11 + 1;
    uVar4 = (**(code **)(param_2 + 0x18))(param_1,uVar11 & 0xfffffffffffffff8,&local_70,0,param_7);
    if (-1 < (int)uVar4) {
      uVar12 = 0;
      uVar16 = 0;
      uVar13 = local_70 >> ((uVar11 - (uVar11 & 0xfffffffffffffff8)) * 8 & 0x3f);
      do {
        uVar16 = (uVar13 & 0x7f) << (uVar12 & 0x3f) | uVar16;
        if (-1 < (char)uVar13) goto joined_r0x0011dc64;
        uVar13 = *param_3;
        *param_3 = uVar13 + 1;
        uVar12 = uVar12 + 7;
        uVar4 = (**(code **)(param_2 + 0x18))
                          (param_1,uVar13 & 0xfffffffffffffff8,&local_70,0,param_7);
        uVar13 = local_70 >> ((uVar13 - (uVar13 & 0xfffffffffffffff8)) * 8 & 0x3f);
      } while (-1 < (int)uVar4);
    }
    goto LAB_0011dbdc;
  case 2:
    *param_3 = uVar11 + 1;
    uVar4 = (**(code **)(param_2 + 0x18))(param_1,uVar11 & 0xfffffffffffffff8,&local_70,0,param_7);
    uVar12 = local_70;
    if ((int)uVar4 < 0) goto LAB_0011dbdc;
    uVar13 = *param_3;
    *param_3 = uVar13 + 1;
    uVar4 = (**(code **)(param_2 + 0x18))(param_1,uVar13 & 0xfffffffffffffff8,&local_70,0,param_7);
    if ((int)uVar4 < 0) goto LAB_0011dbdc;
    uVar8 = (uint)(uVar12 >> ((uVar11 - (uVar11 & 0xfffffffffffffff8)) * 8 & 0x3f));
    uVar7 = (uint)(local_70 >> ((uVar13 - (uVar13 & 0xfffffffffffffff8)) * 8 & 0x3f));
    uVar6 = uVar8 & 0xff | uVar7 << 8;
    if (*(int *)(param_1 + 0x40) != 0) {
      uVar6 = uVar7 & 0xff | uVar8 << 8;
    }
    uVar16 = (ulong)uVar6 & 0xffff;
    if ((uVar6 & 0xffff) == 0) goto LAB_0011d214;
    goto LAB_0011d770;
  case 3:
    *param_3 = uVar11 + 1;
    uVar4 = (**(code **)(param_2 + 0x18))(param_1,uVar11 & 0xfffffffffffffff8,&local_70,0,param_7);
    uVar12 = local_70;
    if ((int)uVar4 < 0) goto LAB_0011dbdc;
    uVar13 = *param_3;
    *param_3 = uVar13 + 1;
    uVar4 = (**(code **)(param_2 + 0x18))(param_1,uVar13 & 0xfffffffffffffff8,&local_70,0,param_7);
    if ((int)uVar4 < 0) goto LAB_0011dbdc;
    uVar16 = *param_3;
    uVar8 = (uint)(uVar12 >> ((uVar11 - (uVar11 & 0xfffffffffffffff8)) * 8 & 0x3f));
    uVar7 = (uint)(local_70 >> ((uVar13 - (uVar13 & 0xfffffffffffffff8)) * 8 & 0x3f));
    iVar2 = *(int *)(param_1 + 0x40);
    *param_3 = uVar16 + 1;
    uVar6 = uVar8 & 0xff | uVar7 << 8;
    if (iVar2 != 0) {
      uVar6 = uVar7 & 0xff | uVar8 << 8;
    }
    uVar4 = (**(code **)(param_2 + 0x18))(param_1,uVar16 & 0xfffffffffffffff8,&local_70,0,param_7);
    uVar12 = local_70;
    if ((int)uVar4 < 0) goto LAB_0011dbdc;
    uVar13 = *param_3;
    *param_3 = uVar13 + 1;
    uVar4 = (**(code **)(param_2 + 0x18))(param_1,uVar13 & 0xfffffffffffffff8,&local_70,0,param_7);
    if ((int)uVar4 < 0) goto LAB_0011dbdc;
    uVar12 = uVar12 >> ((uVar16 - (uVar16 & 0xfffffffffffffff8)) * 8 & 0x3f);
    uVar13 = local_70 >> ((uVar13 - (uVar13 & 0xfffffffffffffff8)) * 8 & 0x3f);
    if (*(int *)(param_1 + 0x40) == 0) {
      uVar16 = (ulong)uVar6 & 0xffff | (uVar12 & 0xff | (uVar13 & 0xff) << 8) << 0x10;
      goto joined_r0x0011d960;
    }
    uVar16 = ((ulong)uVar6 & 0xffff) << 0x10;
LAB_0011d75c:
    uVar16 = uVar16 | (uVar12 & 0xff) << 8 | uVar13 & 0xff;
    break;
  default:
    pcVar5 = "unexpected encoding format 0x%x\n";
    goto LAB_0011d4c8;
  case 9:
    *param_3 = uVar11 + 1;
    uVar4 = (**(code **)(param_2 + 0x18))(param_1,uVar11 & 0xfffffffffffffff8,&local_70,0,param_7);
    if (-1 < (int)uVar4) {
      uVar12 = 0;
      uVar16 = 0;
      uVar13 = local_70 >> ((uVar11 - (uVar11 & 0xfffffffffffffff8)) * 8 & 0x3f);
      do {
        uVar16 = (uVar13 & 0x7f) << (uVar12 & 0x3f) | uVar16;
        if (-1 < (char)uVar13) goto joined_r0x0011dc64;
        uVar13 = *param_3;
        *param_3 = uVar13 + 1;
        uVar12 = uVar12 + 7;
        uVar4 = (**(code **)(param_2 + 0x18))
                          (param_1,uVar13 & 0xfffffffffffffff8,&local_70,0,param_7);
        uVar13 = local_70 >> ((uVar13 - (uVar13 & 0xfffffffffffffff8)) * 8 & 0x3f);
      } while (-1 < (int)uVar4);
    }
    goto LAB_0011dbdc;
  case 10:
    *param_3 = uVar11 + 1;
    uVar4 = (**(code **)(param_2 + 0x18))(param_1,uVar11 & 0xfffffffffffffff8,&local_70,0,param_7);
    uVar12 = local_70;
    if ((int)uVar4 < 0) goto LAB_0011dbdc;
    uVar13 = *param_3;
    *param_3 = uVar13 + 1;
    uVar4 = (**(code **)(param_2 + 0x18))(param_1,uVar13 & 0xfffffffffffffff8,&local_70,0,param_7);
    if ((int)uVar4 < 0) goto LAB_0011dbdc;
    uVar12 = uVar12 >> ((uVar11 - (uVar11 & 0xfffffffffffffff8)) * 8 & 0x3f);
    uVar13 = local_70 >> ((uVar13 - (uVar13 & 0xfffffffffffffff8)) * 8 & 0x3f);
    uVar1 = (ushort)uVar12 & 0xff | (ushort)((int)uVar13 << 8);
    if (*(int *)(param_1 + 0x40) != 0) {
      uVar1 = (ushort)uVar13 & 0xff | (ushort)((int)uVar12 << 8);
    }
    uVar16 = (ulong)(short)uVar1;
    break;
  case 0xb:
    *param_3 = uVar11 + 1;
    uVar4 = (**(code **)(param_2 + 0x18))(param_1,uVar11 & 0xfffffffffffffff8,&local_70,0,param_7);
    uVar12 = local_70;
    if ((int)uVar4 < 0) goto LAB_0011dbdc;
    uVar13 = *param_3;
    *param_3 = uVar13 + 1;
    uVar4 = (**(code **)(param_2 + 0x18))(param_1,uVar13 & 0xfffffffffffffff8,&local_70,0,param_7);
    if ((int)uVar4 < 0) goto LAB_0011dbdc;
    uVar16 = *param_3;
    uVar8 = (uint)(uVar12 >> ((uVar11 - (uVar11 & 0xfffffffffffffff8)) * 8 & 0x3f));
    uVar7 = (uint)(local_70 >> ((uVar13 - (uVar13 & 0xfffffffffffffff8)) * 8 & 0x3f));
    iVar2 = *(int *)(param_1 + 0x40);
    *param_3 = uVar16 + 1;
    uVar6 = uVar8 & 0xff | uVar7 << 8;
    if (iVar2 != 0) {
      uVar6 = uVar7 & 0xff | uVar8 << 8;
    }
    uVar4 = (**(code **)(param_2 + 0x18))(param_1,uVar16 & 0xfffffffffffffff8,&local_70,0,param_7);
    uVar12 = local_70;
    if ((int)uVar4 < 0) goto LAB_0011dbdc;
    uVar13 = *param_3;
    *param_3 = uVar13 + 1;
    uVar4 = (**(code **)(param_2 + 0x18))(param_1,uVar13 & 0xfffffffffffffff8,&local_70,0,param_7);
    if ((int)uVar4 < 0) goto LAB_0011dbdc;
    uVar8 = (uint)(uVar12 >> ((uVar16 - (uVar16 & 0xfffffffffffffff8)) * 8 & 0x3f));
    uVar7 = (uint)(local_70 >> ((uVar13 - (uVar13 & 0xfffffffffffffff8)) * 8 & 0x3f));
    if (*(int *)(param_1 + 0x40) == 0) {
      uVar6 = uVar6 & 0xffff | (uVar8 & 0xff | uVar7 << 8) << 0x10;
    }
    else {
      uVar6 = uVar6 << 0x10 | (uVar8 & 0xff) << 8 | uVar7 & 0xff;
    }
    uVar16 = (ulong)(int)uVar6;
joined_r0x0011d960:
    if (uVar16 != 0) goto LAB_0011d770;
    goto LAB_0011d214;
  case 0xc:
    *param_3 = uVar11 + 1;
    uVar4 = (**(code **)(param_2 + 0x18))(param_1,uVar11 & 0xfffffffffffffff8,&local_70,0,param_7);
    uVar12 = local_70;
    if ((int)uVar4 < 0) goto LAB_0011dbdc;
    uVar13 = *param_3;
    *param_3 = uVar13 + 1;
    uVar4 = (**(code **)(param_2 + 0x18))(param_1,uVar13 & 0xfffffffffffffff8,&local_70,0,param_7);
    if ((int)uVar4 < 0) goto LAB_0011dbdc;
    uVar16 = *param_3;
    uVar8 = (uint)(uVar12 >> ((uVar11 - (uVar11 & 0xfffffffffffffff8)) * 8 & 0x3f));
    uVar7 = (uint)(local_70 >> ((uVar13 - (uVar13 & 0xfffffffffffffff8)) * 8 & 0x3f));
    iVar2 = *(int *)(param_1 + 0x40);
    *param_3 = uVar16 + 1;
    uVar6 = uVar8 & 0xff | uVar7 << 8;
    if (iVar2 != 0) {
      uVar6 = uVar7 & 0xff | uVar8 << 8;
    }
    uVar4 = (**(code **)(param_2 + 0x18))(param_1,uVar16 & 0xfffffffffffffff8,&local_70,0,param_7);
    uVar12 = local_70;
    if ((int)uVar4 < 0) goto LAB_0011dbdc;
    uVar13 = *param_3;
    *param_3 = uVar13 + 1;
    uVar4 = (**(code **)(param_2 + 0x18))(param_1,uVar13 & 0xfffffffffffffff8,&local_70,0,param_7);
    if ((int)uVar4 < 0) goto LAB_0011dbdc;
    uVar12 = uVar12 >> ((uVar16 - (uVar16 & 0xfffffffffffffff8)) * 8 & 0x3f);
    uVar13 = local_70 >> ((uVar13 - (uVar13 & 0xfffffffffffffff8)) * 8 & 0x3f);
    if (*(int *)(param_1 + 0x40) == 0) {
      uVar12 = (ulong)uVar6 & 0xffff | (uVar12 & 0xff | (uVar13 & 0xff) << 8) << 0x10;
    }
    else {
      uVar12 = ((ulong)uVar6 & 0xffff) << 0x10 | (uVar12 & 0xff) << 8 | uVar13 & 0xff;
    }
    uVar16 = *param_3;
    *param_3 = uVar16 + 1;
    uVar4 = (**(code **)(param_2 + 0x18))(param_1,uVar16 & 0xfffffffffffffff8,&local_70,0,param_7);
    uVar13 = local_70;
    if ((int)uVar4 < 0) goto LAB_0011dbdc;
    uVar14 = *param_3;
    *param_3 = uVar14 + 1;
    uVar4 = (**(code **)(param_2 + 0x18))(param_1,uVar14 & 0xfffffffffffffff8,&local_70,0,param_7);
    if ((int)uVar4 < 0) goto LAB_0011dbdc;
    uVar15 = *param_3;
    uVar8 = (uint)(uVar13 >> ((uVar16 - (uVar16 & 0xfffffffffffffff8)) * 8 & 0x3f));
    uVar7 = (uint)(local_70 >> ((uVar14 - (uVar14 & 0xfffffffffffffff8)) * 8 & 0x3f));
    iVar2 = *(int *)(param_1 + 0x40);
    *param_3 = uVar15 + 1;
    uVar6 = uVar8 & 0xff | uVar7 << 8;
    if (iVar2 != 0) {
      uVar6 = uVar7 & 0xff | uVar8 << 8;
    }
    uVar4 = (**(code **)(param_2 + 0x18))(param_1,uVar15 & 0xfffffffffffffff8,&local_70,0,param_7);
    uVar13 = local_70;
    if ((int)uVar4 < 0) goto LAB_0011dbdc;
    uVar16 = *param_3;
    *param_3 = uVar16 + 1;
    uVar4 = (**(code **)(param_2 + 0x18))(param_1,uVar16 & 0xfffffffffffffff8,&local_70,0,param_7);
    if ((int)uVar4 < 0) goto LAB_0011dbdc;
    uVar13 = uVar13 >> ((uVar15 - (uVar15 & 0xfffffffffffffff8)) * 8 & 0x3f);
    uVar16 = local_70 >> ((uVar16 - (uVar16 & 0xfffffffffffffff8)) * 8 & 0x3f);
    if (*(int *)(param_1 + 0x40) == 0) {
      uVar13 = (ulong)uVar6 & 0xffff | (uVar13 & 0xff | (uVar16 & 0xff) << 8) << 0x10;
    }
    else {
      uVar13 = ((ulong)uVar6 & 0xffff) << 0x10 | (uVar13 & 0xff) << 8 | uVar16 & 0xff;
    }
    uVar16 = uVar12 | uVar13 << 0x20;
    if (*(int *)(param_1 + 0x40) != 0) {
      uVar16 = uVar13 | uVar12 << 0x20;
    }
  }
joined_r0x0011dc64:
  if (uVar16 == 0) {
LAB_0011d214:
    uVar4 = 0;
    *param_6 = 0;
    goto LAB_0011dbdc;
  }
LAB_0011d770:
  switch(uVar10 >> 4 & 7) {
  case 1:
    uVar16 = uVar16 + uVar11;
    break;
  default:
    uVar6 = param_4 & 0x70;
    pcVar5 = "unexpected application type 0x%x\n";
LAB_0011d4c8:
    log2Console(3,"Bugly-libunwind",pcVar5,uVar6);
    uVar4 = 0xfffffff8;
    goto LAB_0011dbdc;
  case 3:
    uVar16 = param_5[4] + uVar16;
    break;
  case 4:
    uVar16 = *param_5 + uVar16;
  case 0:
  }
  if (uVar10 >> 7 != 0) {
    uVar4 = (**(code **)(param_2 + 0x18))(param_1,uVar16 & 0xfffffffffffffff8,&local_70,0,param_7);
    uVar11 = local_70;
    if ((int)uVar4 < 0) goto LAB_0011dbdc;
    uVar12 = uVar16 + 1 & 0xfffffffffffffff8;
    uVar4 = (**(code **)(param_2 + 0x18))(param_1,uVar12,&local_70,0,param_7);
    if ((int)uVar4 < 0) goto LAB_0011dbdc;
    uVar6 = (uint)(uVar11 >> ((uVar16 - (uVar16 & 0xfffffffffffffff8)) * 8 & 0x3f));
    uVar11 = uVar16 + 2 & 0xfffffffffffffff8;
    uVar8 = (uint)(local_70 >> (((uVar16 + 1) - uVar12) * 8 & 0x3f));
    uVar10 = uVar6 & 0xff | uVar8 << 8;
    if (*(int *)(param_1 + 0x40) != 0) {
      uVar10 = uVar8 & 0xff | uVar6 << 8;
    }
    uVar4 = (**(code **)(param_2 + 0x18))(param_1,uVar11,&local_70,0,param_7);
    uVar12 = local_70;
    if ((int)uVar4 < 0) goto LAB_0011dbdc;
    uVar13 = uVar16 + 3 & 0xfffffffffffffff8;
    uVar4 = (**(code **)(param_2 + 0x18))(param_1,uVar13,&local_70,0,param_7);
    if ((int)uVar4 < 0) goto LAB_0011dbdc;
    uVar6 = (uint)(uVar12 >> (((uVar16 + 2) - uVar11) * 8 & 0x3f));
    uVar8 = (uint)(local_70 >> (((uVar16 + 3) - uVar13) * 8 & 0x3f));
    if (*(int *)(param_1 + 0x40) == 0) {
      uVar10 = uVar10 & 0xffff | (uVar6 & 0xff | uVar8 << 8) << 0x10;
    }
    else {
      uVar10 = uVar10 << 0x10 | (uVar6 & 0xff) << 8 | uVar8 & 0xff;
    }
    uVar12 = uVar16 + 4 & 0xfffffffffffffff8;
    uVar4 = (**(code **)(param_2 + 0x18))(param_1,uVar12,&local_70,0,param_7);
    uVar11 = local_70;
    if ((int)uVar4 < 0) goto LAB_0011dbdc;
    uVar13 = uVar16 + 5 & 0xfffffffffffffff8;
    uVar4 = (**(code **)(param_2 + 0x18))(param_1,uVar13,&local_70,0,param_7);
    if ((int)uVar4 < 0) goto LAB_0011dbdc;
    uVar8 = (uint)(uVar11 >> (((uVar16 + 4) - uVar12) * 8 & 0x3f));
    uVar11 = uVar16 + 6 & 0xfffffffffffffff8;
    uVar7 = (uint)(local_70 >> (((uVar16 + 5) - uVar13) * 8 & 0x3f));
    uVar6 = uVar8 & 0xff | uVar7 << 8;
    if (*(int *)(param_1 + 0x40) != 0) {
      uVar6 = uVar7 & 0xff | uVar8 << 8;
    }
    uVar4 = (**(code **)(param_2 + 0x18))(param_1,uVar11,&local_70,0,param_7);
    uVar12 = local_70;
    if ((int)uVar4 < 0) goto LAB_0011dbdc;
    uVar13 = uVar16 + 7 & 0xfffffffffffffff8;
    uVar4 = (**(code **)(param_2 + 0x18))(param_1,uVar13,&local_70,0,param_7);
    if ((int)uVar4 < 0) goto LAB_0011dbdc;
    uVar12 = uVar12 >> (((uVar16 + 6) - uVar11) * 8 & 0x3f);
    local_70 = local_70 >> (((uVar16 + 7) - uVar13) * 8 & 0x3f);
    if (*(int *)(param_1 + 0x40) == 0) {
      uVar16 = CONCAT44(uVar6 & 0xffff | ((uint)uVar12 & 0xff | (int)local_70 << 8) << 0x10,uVar10);
    }
    else {
      uVar16 = (ulong)uVar10 << 0x20 | ((ulong)uVar6 & 0xffff) << 0x10 | (uVar12 & 0xff) << 8 |
               local_70 & 0xff;
    }
  }
  uVar4 = 0;
  *param_6 = uVar16;
LAB_0011dbdc:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

