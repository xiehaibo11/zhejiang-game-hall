
/* btDbvt::clone(btDbvt&, btDbvt::IClone*) const */

void __thiscall btDbvt::clone(btDbvt *this,btDbvt *param_1,IClone *param_2)

{
  bool bVar1;
  btDbvt *pbVar2;
  undefined8 *puVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  long *local_90;
  long *local_80;
  long *local_78;
  
  if (*(long *)param_1 != 0) {
    FUN_0123645c(param_1);
  }
  btAlignedFreeInternal(*(void **)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (*(void **)(param_1 + 0x30) != (void *)0x0) {
    if (param_1[0x38] != (btDbvt)0x0) {
      btAlignedFreeInternal(*(void **)(param_1 + 0x30));
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x38] = (btDbvt)0x1;
  *(undefined4 *)(param_1 + 0x18) = 0;
  lVar10 = *(long *)this;
  if (lVar10 != 0) {
    uVar13 = *(uint *)(this + 0x14);
    if ((int)uVar13 < 1) {
      plVar5 = (long *)btAlignedAllocInternal(0x10,0x10);
      uVar13 = 1;
    }
    else {
      plVar5 = (long *)btAlignedAllocInternal((long)(int)uVar13 << 4,0x10);
      lVar10 = *(long *)this;
    }
    uVar14 = 1;
    *plVar5 = lVar10;
    plVar5[1] = 0;
    local_90 = plVar5;
    local_80 = plVar5;
    local_78 = plVar5;
    do {
      uVar15 = (long)(int)uVar14 - 1;
      puVar3 = (undefined8 *)plVar5[uVar15 * 2];
      lVar10 = (plVar5 + uVar15 * 2)[1];
      puVar12 = *(undefined8 **)(param_1 + 8);
      uVar11 = puVar3[5];
      if (puVar12 == (undefined8 *)0x0) {
        puVar12 = (undefined8 *)btAlignedAllocInternal(0x38,0x10);
        puVar12[6] = 0;
        puVar12[3] = 0;
        puVar12[2] = 0;
        puVar12[5] = 0;
        puVar12[4] = 0;
        puVar12[1] = 0;
        *puVar12 = 0;
      }
      else {
        *(undefined8 *)(param_1 + 8) = 0;
      }
      puVar12[4] = lVar10;
      puVar12[5] = uVar11;
      puVar12[6] = 0;
      uVar11 = puVar3[2];
      puVar12[3] = puVar3[3];
      puVar12[2] = uVar11;
      uVar11 = *puVar3;
      pbVar2 = param_1;
      if (lVar10 != 0) {
        pbVar2 = (btDbvt *)(lVar10 + (ulong)((uint)uVar15 & 1) * 8 + 0x28);
      }
      puVar12[1] = puVar3[1];
      *puVar12 = uVar11;
      *(undefined8 **)pbVar2 = puVar12;
      if (puVar3[6] == 0) {
        (**(code **)(*(long *)param_2 + 0x10))(param_2,puVar12);
      }
      else {
        lVar10 = puVar3[5];
        plVar6 = local_80;
        if ((uint)uVar15 == uVar13) {
          uVar4 = uVar13 << 1;
          if (uVar13 == 0) {
            uVar4 = 1;
          }
          if ((int)uVar14 <= (int)uVar4) {
            uVar9 = uVar15;
            uVar13 = uVar4;
            if (uVar4 == 0) {
              local_90 = (long *)0x0;
              local_78 = local_90;
              if (1 < (int)uVar14) goto LAB_01238790;
LAB_012387b0:
              bVar1 = plVar5 == (long *)0x0;
              plVar5 = local_90;
              local_78 = local_90;
              plVar6 = local_90;
              if (bVar1) goto LAB_012387c8;
            }
            else {
              local_90 = (long *)btAlignedAllocInternal
                                           (-(ulong)(uVar4 >> 0x1f) & 0xfffffff000000000 |
                                            (ulong)uVar4 << 4,0x10);
              local_78 = local_90;
              if ((int)uVar14 < 2) goto LAB_012387b0;
LAB_01238790:
              do {
                lVar7 = *plVar5;
                uVar9 = uVar9 - 1;
                local_90[1] = plVar5[1];
                *local_90 = lVar7;
                local_90 = local_90 + 2;
                plVar5 = plVar5 + 2;
              } while (uVar9 != 0);
            }
            btAlignedFreeInternal(local_80);
            plVar5 = local_78;
            local_90 = local_78;
            plVar6 = local_78;
          }
        }
LAB_012387c8:
        local_80 = plVar6;
        plVar5[uVar15 * 2] = lVar10;
        (plVar5 + uVar15 * 2)[1] = (long)puVar12;
        lVar10 = puVar3[6];
        plVar6 = plVar5;
        plVar8 = local_78;
        if (uVar14 == uVar13) {
          uVar4 = uVar14 << 1;
          if (uVar14 == 0) {
            uVar4 = 1;
          }
          uVar13 = uVar14;
          if ((int)uVar14 < (int)uVar4) {
            uVar13 = uVar4;
            if (uVar4 == 0) {
              plVar6 = (long *)0x0;
              if (0 < (int)uVar14) goto LAB_0123880c;
LAB_01238848:
              local_90 = plVar6;
              local_80 = plVar6;
              plVar8 = plVar6;
              if (plVar5 == (long *)0x0) goto LAB_01238860;
            }
            else {
              plVar6 = (long *)btAlignedAllocInternal
                                         (-(ulong)(uVar4 >> 0x1f) & 0xfffffff000000000 |
                                          (ulong)uVar4 << 4,0x10);
              if ((int)uVar14 < 1) goto LAB_01238848;
LAB_0123880c:
              lVar7 = (long)(int)uVar14;
              plVar8 = plVar6;
              do {
                lVar16 = *plVar5;
                lVar7 = lVar7 + -1;
                plVar8[1] = plVar5[1];
                *plVar8 = lVar16;
                plVar8 = plVar8 + 2;
                plVar5 = plVar5 + 2;
              } while (lVar7 != 0);
            }
            btAlignedFreeInternal(local_78);
            local_90 = plVar6;
            local_80 = plVar6;
            plVar8 = plVar6;
          }
        }
LAB_01238860:
        local_78 = plVar8;
        plVar6[(long)(int)uVar14 * 2] = lVar10;
        (plVar6 + (long)(int)uVar14 * 2)[1] = (long)puVar12;
        uVar15 = (ulong)(uVar14 + 1);
        plVar5 = plVar6;
      }
      uVar14 = (uint)uVar15;
    } while (0 < (int)uVar14);
    if (plVar5 != (long *)0x0) {
      btAlignedFreeInternal(local_90);
      return;
    }
  }
  return;
}

