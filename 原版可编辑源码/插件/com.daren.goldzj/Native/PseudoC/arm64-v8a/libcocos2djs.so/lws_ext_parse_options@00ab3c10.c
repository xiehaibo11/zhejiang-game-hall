
undefined8
lws_ext_parse_options
          (long param_1,undefined8 param_2,undefined8 param_3,long *param_4,byte *param_5,
          int param_6)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  uint uVar7;
  ulong uVar8;
  byte bVar9;
  uint uVar10;
  long *plVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 local_80;
  uint local_78;
  byte *local_70;
  int local_68;
  
  uVar8 = 0xffffffff;
  local_80 = 0;
  do {
    uVar1 = (int)uVar8 + 1;
    uVar8 = (ulong)uVar1;
  } while (param_4[uVar8 * 2] != 0);
  if (param_6 != 0) {
    bVar2 = false;
    uVar12 = 0;
    uVar4 = 0;
    uVar13 = 0;
    do {
      uVar14 = 4;
      uVar5 = uVar4;
      uVar7 = uVar12;
      switch(uVar13) {
      case 0:
        uVar13 = 0;
        if (*param_5 != 0x20) {
          uVar12 = 0;
          uVar5 = (1 << (ulong)(uVar1 & 0x1f)) - 1;
          if (*param_5 == 0x2c) {
            return 0;
          }
          goto switchD_00ab3cc0_caseD_1;
        }
        break;
      case 1:
switchD_00ab3cc0_caseD_1:
        local_70 = (byte *)0x0;
        local_68 = 0;
        if (uVar5 == 0) {
          uVar4 = 0;
          bVar2 = false;
          uVar13 = 1;
          uVar7 = uVar12 + 1;
        }
        else {
          uVar10 = 0;
          uVar7 = uVar12 + 1;
          plVar11 = param_4;
          uVar4 = uVar5;
          do {
            if ((uVar5 & 1) != 0) {
              if (*param_5 == *(byte *)(*plVar11 + (ulong)uVar12)) {
                if (*(char *)(*plVar11 + (ulong)uVar7) == '\0') {
                  bVar2 = false;
                  uVar14 = 2;
                  uVar13 = uVar14;
                  local_78 = uVar10;
                  if (param_6 == 1) goto LAB_00ab3e5c;
                  goto switchD_00ab3cc0_default;
                }
              }
              else {
                uVar4 = uVar4 & (1 << (ulong)(uVar10 & 0x1f) ^ 0xffffffffU);
                if (uVar4 == 0) {
                  return 0xffffffff;
                }
              }
            }
            uVar5 = uVar5 >> 1;
            uVar10 = uVar10 + 1;
            plVar11 = plVar11 + 2;
          } while (uVar5 != 0);
          bVar2 = false;
          uVar13 = 1;
        }
        break;
      case 2:
        bVar9 = *param_5;
        if (bVar9 != 0x20) {
          if (bVar9 == 0x2c) {
            return 0;
          }
          if ((param_6 != 1) && (bVar9 != 0x3b)) {
            if (bVar9 != 0x3d) {
              return 0xffffffff;
            }
            if ((int)param_4[(long)(int)local_78 * 2 + 1] == 0) {
              return 0xffffffff;
            }
            uVar7 = 0;
            bVar2 = false;
            goto LAB_00ab3ed8;
          }
          if ((int)param_4[(long)(int)local_78 * 2 + 1] == 1) {
            return 0xffffffff;
          }
          uVar14 = 0;
LAB_00ab3e5c:
          pcVar6 = *(code **)(param_1 + 8);
          uVar3 = lws_get_context(param_2);
          (*pcVar6)(uVar3,param_1,param_2,0x18,param_3,&local_80,0);
          if (param_6 == 1) {
            return 0;
          }
          if (!bVar2) goto switchD_00ab3cc0_caseD_4;
          bVar9 = *param_5;
          uVar13 = uVar14;
          uVar7 = uVar12;
          if ((bVar9 == 0x22) || (bVar9 == 0x20)) break;
          goto LAB_00ab3eb4;
        }
        uVar13 = 2;
        break;
      case 3:
        if (*param_5 - 0x30 < 10) {
          if (uVar12 == 0) {
            uVar7 = 1;
            local_70 = param_5;
          }
          else {
            uVar7 = uVar12 + 1;
          }
          if (param_6 != 1) goto LAB_00ab3ed8;
          uVar12 = uVar12 + 1;
        }
        if (uVar12 != 0) {
          if (((bVar2) && (param_6 != 1)) && (*param_5 != 0x22)) {
            return 0xffffffff;
          }
          if (local_70 != (byte *)0x0) {
            local_68 = (int)param_5 - (int)local_70;
          }
          if (param_6 == 1) {
            local_68 = local_68 + 1;
          }
          uVar14 = 4;
          goto LAB_00ab3e5c;
        }
        if (*param_5 != 0x22) {
          return 0xffffffff;
        }
        uVar7 = 0;
        bVar2 = true;
LAB_00ab3ed8:
        uVar13 = 3;
        break;
      case 4:
switchD_00ab3cc0_caseD_4:
        bVar9 = *param_5;
        uVar13 = uVar14;
        uVar7 = uVar12;
        if (bVar9 != 0x20) {
LAB_00ab3eb4:
          if (bVar9 != 0x3b) {
            if (bVar9 == 0x2c) {
              return 0;
            }
            return 0xffffffff;
          }
          uVar13 = 0;
          uVar7 = uVar12;
        }
      }
switchD_00ab3cc0_default:
      uVar12 = uVar7;
      param_6 = param_6 + -1;
      param_5 = param_5 + 1;
    } while (param_6 != 0);
  }
  return 0;
}

