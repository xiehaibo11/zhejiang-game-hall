
/* WARNING: Removing unreachable block (ram,0x0153c164) */
/* v8::internal::Trace::PerformDeferredActions(v8::internal::RegExpMacroAssembler*, int,
   v8::internal::DynamicBitSet const&, v8::internal::DynamicBitSet*, v8::internal::DynamicBitSet*,
   v8::internal::Zone*) */

void __thiscall
v8::internal::Trace::PerformDeferredActions
          (Trace *this,RegExpMacroAssembler *param_1,int param_2,DynamicBitSet *param_3,
          DynamicBitSet *param_4,DynamicBitSet *param_5,Zone *param_6)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  DynamicBitSet *this_00;
  ulong uVar7;
  int *piVar8;
  code *pcVar9;
  undefined8 *puVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int local_74;
  
  iVar6 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
  iVar1 = iVar6 + 2;
  if (-1 < iVar6 + 1) {
    iVar1 = iVar6 + 1;
  }
  if (-1 < param_2) {
    uVar12 = 0;
    local_74 = 0;
LAB_0153c194:
    if ((*(uint *)param_3 >> (ulong)(uVar12 & 0x1f) & 1) == 0) goto LAB_0153c180;
LAB_0153c1d8:
    piVar8 = *(int **)(this + 8);
    if (piVar8 != (int *)0x0) {
      bVar3 = false;
      bVar4 = false;
      uVar13 = 0;
      iVar6 = 0;
      uVar14 = 0x80000000;
      do {
        while (iVar2 = *piVar8, iVar2 == 6) {
          if (((int)*(undefined8 *)(piVar8 + 4) <= (int)uVar12) &&
             ((int)uVar12 <= (int)((ulong)*(undefined8 *)(piVar8 + 4) >> 0x20))) {
            bVar3 = (bool)(bVar3 | uVar14 == 0x80000000);
LAB_0153c204:
            iVar6 = 1;
          }
LAB_0153c208:
          piVar8 = *(int **)(piVar8 + 2);
joined_r0x0153c2cc:
          if (piVar8 == (int *)0x0) goto LAB_0153c2d0;
        }
        if (piVar8[1] != uVar12) goto LAB_0153c208;
        if (iVar2 == 2) {
          if ((uVar14 == 0x80000000) && (!bVar3)) {
            uVar14 = piVar8[4];
          }
          if (uVar12 < 2) {
            iVar6 = 0;
            piVar8 = *(int **)(piVar8 + 2);
          }
          else {
            iVar6 = 1;
            if ((char)piVar8[5] != '\0') {
              iVar6 = 2;
            }
            piVar8 = *(int **)(piVar8 + 2);
          }
          goto joined_r0x0153c2cc;
        }
        if (iVar2 == 1) {
          uVar13 = uVar13 + (byte)~bVar4;
          goto LAB_0153c204;
        }
        if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        if (!bVar4) {
          uVar13 = piVar8[4] + uVar13;
        }
        iVar6 = 1;
        bVar4 = true;
        piVar8 = *(int **)(piVar8 + 2);
      } while (piVar8 != (int *)0x0);
LAB_0153c2d0:
      if (iVar6 == 1) {
        bVar5 = local_74 + 1 == iVar1 >> 1;
        iVar6 = 0;
        if (!bVar5) {
          iVar6 = local_74 + 1;
        }
        (**(code **)(*(long *)param_1 + 0x130))(param_1,uVar12,bVar5);
        this_00 = param_4;
        local_74 = iVar6;
LAB_0153c33c:
        DynamicBitSet::Set(this_00,uVar12,param_6);
        if (uVar14 == 0x80000000) goto LAB_0153c2ec;
LAB_0153c168:
        pcVar9 = *(code **)(*(long *)param_1 + 0x160);
        uVar13 = uVar14;
      }
      else {
        this_00 = param_5;
        if (iVar6 == 2) goto LAB_0153c33c;
        if (uVar14 != 0x80000000) goto LAB_0153c168;
LAB_0153c2ec:
        if (bVar3) {
          pcVar9 = *(code **)(*(long *)param_1 + 0x168);
          uVar13 = uVar12;
        }
        else if (bVar4) {
          pcVar9 = *(code **)(*(long *)param_1 + 0x150);
        }
        else {
          if (uVar13 == 0) goto LAB_0153c180;
          pcVar9 = *(code **)(*(long *)param_1 + 0x30);
        }
      }
      (*pcVar9)(param_1,uVar12,uVar13);
    }
LAB_0153c180:
    while (bVar4 = uVar12 != param_2, uVar12 = uVar12 + 1, bVar4) {
      if (uVar12 < 0x20) goto LAB_0153c194;
      puVar10 = *(undefined8 **)(param_3 + 8);
      if ((puVar10 != (undefined8 *)0x0) &&
         (uVar7 = (ulong)*(uint *)((long)puVar10 + 0xc), 0 < (int)*(uint *)((long)puVar10 + 0xc))) {
        puVar11 = (uint *)*puVar10;
        do {
          if (*puVar11 == uVar12) goto LAB_0153c1d8;
          uVar7 = uVar7 - 1;
          puVar11 = puVar11 + 1;
        } while (uVar7 != 0);
      }
    }
  }
  return;
}

