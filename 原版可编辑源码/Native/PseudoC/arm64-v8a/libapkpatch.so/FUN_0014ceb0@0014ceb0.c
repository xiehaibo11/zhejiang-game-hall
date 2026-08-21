
undefined8 * FUN_0014ceb0(long *param_1)

{
  ulong uVar1;
  byte *pbVar2;
  byte bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  byte *pbVar7;
  byte *pbVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  pbVar7 = (byte *)*param_1;
  pbVar2 = (byte *)param_1[1];
  if ((pbVar7 != pbVar2) && (*pbVar7 == 0x53)) {
    pbVar8 = pbVar7 + 1;
    *param_1 = (long)pbVar8;
    if (pbVar2 != pbVar8) {
      if (*pbVar8 - 0x61 < 0x1a) {
        puVar5 = (undefined8 *)0x0;
        switch((uint)*pbVar8) {
        case 0x61:
          puVar11 = (undefined8 *)param_1[0x266];
          *param_1 = (long)(pbVar7 + 2);
          lVar9 = puVar11[1];
          if (lVar9 + 0x10U < 0xff0) {
            uVar6 = 0;
          }
          else {
            puVar5 = malloc(0x1000);
            if (puVar5 == (void *)0x0) {
LAB_0014d240:
                    /* WARNING: Subroutine does not return */
              std::terminate();
            }
            uVar6 = 0;
LAB_0014d118:
            lVar9 = 0;
            *puVar5 = puVar11;
            puVar5[1] = 0;
            param_1[0x266] = (long)puVar5;
            puVar11 = puVar5;
          }
          break;
        case 0x62:
          puVar11 = (undefined8 *)param_1[0x266];
          *param_1 = (long)(pbVar7 + 2);
          lVar9 = puVar11[1];
          if (0xfef < lVar9 + 0x10U) {
            puVar5 = malloc(0x1000);
            if (puVar5 == (undefined8 *)0x0) goto LAB_0014d240;
            uVar6 = 1;
            goto LAB_0014d118;
          }
          uVar6 = 1;
          break;
        default:
          goto code_r0x0014cfc4;
        case 100:
          puVar11 = (undefined8 *)param_1[0x266];
          *param_1 = (long)(pbVar7 + 2);
          lVar9 = puVar11[1];
          if (0xfef < lVar9 + 0x10U) {
            puVar5 = malloc(0x1000);
            if (puVar5 == (undefined8 *)0x0) goto LAB_0014d240;
            uVar6 = 5;
            goto LAB_0014d118;
          }
          uVar6 = 5;
          break;
        case 0x69:
          puVar11 = (undefined8 *)param_1[0x266];
          *param_1 = (long)(pbVar7 + 2);
          lVar9 = puVar11[1];
          if (0xfef < lVar9 + 0x10U) {
            puVar5 = malloc(0x1000);
            if (puVar5 == (undefined8 *)0x0) goto LAB_0014d240;
            uVar6 = 3;
            goto LAB_0014d118;
          }
          uVar6 = 3;
          break;
        case 0x6f:
          puVar11 = (undefined8 *)param_1[0x266];
          *param_1 = (long)(pbVar7 + 2);
          lVar9 = puVar11[1];
          if (0xfef < lVar9 + 0x10U) {
            puVar5 = malloc(0x1000);
            if (puVar5 == (undefined8 *)0x0) goto LAB_0014d240;
            uVar6 = 4;
            goto LAB_0014d118;
          }
          uVar6 = 4;
          break;
        case 0x73:
          puVar11 = (undefined8 *)param_1[0x266];
          *param_1 = (long)(pbVar7 + 2);
          lVar9 = puVar11[1];
          if (0xfef < lVar9 + 0x10U) {
            puVar5 = malloc(0x1000);
            if (puVar5 == (undefined8 *)0x0) goto LAB_0014d240;
            uVar6 = 2;
            goto LAB_0014d118;
          }
          uVar6 = 2;
        }
        puVar11[1] = lVar9 + 0x10;
        puVar5 = (undefined8 *)((long)puVar11 + lVar9 + 0x10);
        *puVar5 = &PTR_FUN_001687d0;
        *(undefined4 *)((long)puVar11 + lVar9 + 0x18) = 0x1010129;
        *(undefined4 *)((long)puVar11 + lVar9 + 0x1c) = uVar6;
        puVar11 = (undefined8 *)FUN_0014dbf8(param_1,puVar5);
        local_40 = puVar11;
        if (puVar11 != puVar5) {
          FUN_0014c270(param_1 + 0x25,&local_40);
          puVar5 = puVar11;
        }
        goto code_r0x0014cfc4;
      }
      if (*pbVar8 == 0x5f) {
        *param_1 = (long)(pbVar7 + 2);
        if ((undefined8 *)param_1[0x25] != (undefined8 *)param_1[0x26]) {
          puVar5 = *(undefined8 **)param_1[0x25];
          goto code_r0x0014cfc4;
        }
      }
      else {
        bVar3 = *pbVar8;
        if ((0x2f < bVar3) && ((bVar3 < 0x3a || ((byte)(bVar3 + 0xbf) < 0x1a)))) {
          lVar9 = 0;
          pbVar7 = pbVar7 + 2;
          do {
            if (bVar3 < 0x3a) {
              lVar10 = -0x30;
            }
            else {
              if (0x19 < (byte)(bVar3 + 0xbf)) break;
              lVar10 = -0x37;
            }
            *param_1 = (long)pbVar7;
            if (pbVar7 == pbVar2) goto LAB_0014cfbc;
            uVar1 = (ulong)bVar3;
            pbVar8 = pbVar7 + 1;
            bVar3 = *pbVar7;
            lVar9 = lVar9 * 0x24 + uVar1 + lVar10;
            pbVar7 = pbVar8;
          } while (0x2f < bVar3);
          if ((pbVar7 + -1 != pbVar2) && (pbVar7[-1] == 0x5f)) {
            *param_1 = (long)pbVar7;
            if (lVar9 + 1U < (ulong)(param_1[0x26] - param_1[0x25] >> 3)) {
              puVar5 = *(undefined8 **)(param_1[0x25] + (lVar9 + 1U) * 8);
              goto code_r0x0014cfc4;
            }
          }
        }
      }
    }
  }
LAB_0014cfbc:
  puVar5 = (undefined8 *)0x0;
code_r0x0014cfc4:
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

