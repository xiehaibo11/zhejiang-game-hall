
/* v8::internal::compiler::Linkage::GetStubCallDescriptor(v8::internal::Zone*,
   v8::internal::CallInterfaceDescriptor const&, int,
   v8::base::Flags<v8::internal::compiler::CallDescriptor::Flag, int>,
   v8::base::Flags<v8::internal::compiler::Operator::Property, unsigned char>,
   v8::internal::StubCallMode) */

undefined4 *
v8::internal::compiler::Linkage::GetStubCallDescriptor
          (Zone *param_1,CallInterfaceDescriptor *param_2,int param_3,uint param_4,
          undefined1 param_5,int param_6)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined2 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long *plVar9;
  ulong uVar10;
  uint uVar11;
  int *piVar12;
  ulong uVar13;
  undefined8 uVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  
  piVar12 = *(int **)(param_2 + 8);
  puVar7 = *(undefined4 **)(param_1 + 0x10);
  iVar2 = *piVar12;
  uVar3 = piVar12[1];
  lVar4 = (long)(int)uVar3;
  uVar18 = (ulong)(uint)piVar12[3] & 1;
  uVar11 = iVar2 + param_3;
  lVar1 = (uVar18 ^ 1) + (long)(int)uVar11;
  uVar15 = (int)lVar1 + uVar3;
  uVar10 = -(ulong)(uVar15 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar15 << 3;
  if ((ulong)(*(long *)(param_1 + 0x18) - (long)puVar7) < uVar10) {
    puVar7 = (undefined4 *)Zone::NewExpand(param_1,uVar10);
  }
  else {
    *(ulong *)(param_1 + 0x10) = uVar10 + (long)puVar7;
  }
  if (uVar3 != 0) {
    uVar5 = **(undefined2 **)(*(long *)(param_2 + 8) + 0x20);
    *puVar7 = 0;
    *(undefined2 *)(puVar7 + 1) = uVar5;
    if (uVar3 != 1) {
      uVar5 = *(undefined2 *)(*(long *)(*(long *)(param_2 + 8) + 0x20) + 2);
      puVar7[2] = 2;
      *(undefined2 *)(puVar7 + 3) = uVar5;
      if (2 < uVar3) {
        uVar5 = *(undefined2 *)(*(long *)(*(long *)(param_2 + 8) + 0x20) + 4);
        puVar7[4] = 4;
        *(undefined2 *)(puVar7 + 5) = uVar5;
      }
    }
  }
  if (0 < (int)uVar11) {
    uVar10 = 0;
    uVar13 = (ulong)uVar11;
    if (0 < (long)iVar2) goto LAB_0176842c;
    do {
      uVar16 = (ulong)(((int)uVar10 - uVar11) * 2) | 0x70800000001;
      while( true ) {
        lVar17 = uVar10 + lVar4;
        uVar10 = uVar10 + 1;
        *(short *)(puVar7 + lVar17 * 2 + 1) = (short)(uVar16 >> 0x20);
        puVar7[lVar17 * 2] = (int)uVar16;
        if (uVar10 == uVar13) goto LAB_01768458;
        if ((long)iVar2 <= (long)uVar10) break;
LAB_0176842c:
        lVar17 = *(long *)(param_2 + 8);
        uVar16 = (ulong)CONCAT24(*(undefined2 *)
                                  (*(long *)(lVar17 + 0x20) +
                                  (long)(*(int *)(lVar17 + 4) + (int)uVar10) * 2),
                                 *(int *)(*(long *)(lVar17 + 0x18) + uVar10 * 0xc) << 1);
      }
    } while( true );
  }
  uVar13 = 0;
LAB_01768458:
  if ((int)uVar18 == 0) {
    *(undefined2 *)(puVar7 + (uVar13 + lVar4) * 2 + 1) = 0x708;
    puVar7[(uVar13 + lVar4) * 2] = 0x36;
    if (param_6 == 2) goto LAB_01768498;
LAB_01768464:
    if (param_6 == 1) {
      uVar15 = 0;
      uVar18 = 4;
      uVar11 = 5;
      goto LAB_017684c0;
    }
    if (param_6 != 0) {
      uVar15 = 0;
      uVar11 = 0;
      goto LAB_017684c0;
    }
    uVar18 = 0;
  }
  else {
    if (param_6 != 2) goto LAB_01768464;
LAB_01768498:
    uVar18 = 6;
  }
  uVar11 = 8;
  uVar15 = 0x700;
LAB_017684c0:
  puVar8 = *(undefined4 **)(param_1 + 0x10);
  lVar17 = *(long *)(param_1 + 0x18);
  if ((ulong)(lVar17 - (long)puVar8) < 0x58) {
    puVar8 = (undefined4 *)Zone::NewExpand(param_1,0x58);
    plVar9 = *(long **)(param_1 + 0x10);
    lVar17 = *(long *)(param_1 + 0x18);
  }
  else {
    plVar9 = (long *)(puVar8 + 0x16);
    *(long **)(param_1 + 0x10) = plVar9;
  }
  if ((ulong)(lVar17 - (long)plVar9) < 0x18) {
    plVar9 = (long *)Zone::NewExpand(param_1,0x18);
  }
  else {
    *(long **)(param_1 + 0x10) = plVar9 + 3;
  }
  *plVar9 = lVar4;
  plVar9[1] = lVar1;
  plVar9[2] = (long)puVar7;
  uVar6 = CallInterfaceDescriptor::DebugName(param_2);
  uVar14 = *(undefined8 *)(*(long *)(param_2 + 8) + 0x10);
  *(ulong *)(puVar8 + 2) = (ulong)(uVar11 | uVar15) << 0x20 | 0xfffffffe;
  *(long **)(puVar8 + 4) = plVar9;
  *(long *)(puVar8 + 6) = (long)param_3;
  *(undefined8 *)(puVar8 + 8) = 0;
  *puVar8 = (int)uVar18;
  *(short *)(puVar8 + 1) = (short)(uVar11 | uVar15);
  *(undefined8 *)(puVar8 + 0xc) = 0;
  *(undefined8 *)(puVar8 + 0xe) = 0;
  *(undefined1 *)(puVar8 + 10) = param_5;
  puVar8[0x12] = param_4 | 4;
  *(undefined8 *)(puVar8 + 0x10) = uVar14;
  *(undefined8 *)(puVar8 + 0x14) = uVar6;
  return puVar8;
}

