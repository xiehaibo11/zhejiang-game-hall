
/* v8::internal::compiler::Linkage::GetSimplifiedCDescriptor(v8::internal::Zone*,
   v8::internal::Signature<v8::internal::MachineType> const*,
   v8::base::Flags<v8::internal::compiler::CallDescriptor::Flag, int>) */

undefined4 *
v8::internal::compiler::Linkage::GetSimplifiedCDescriptor(Zone *param_1,ulong *param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  undefined2 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulong *puVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  uint *puVar12;
  int *piVar13;
  uint uVar14;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  puVar5 = *(undefined4 **)(param_1 + 0x10);
  uVar14 = (int)uVar2 + (int)uVar1;
  uVar8 = -(ulong)(uVar14 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar14 << 3;
  if ((ulong)(*(long *)(param_1 + 0x18) - (long)puVar5) < uVar8) {
    puVar5 = (undefined4 *)Zone::NewExpand(param_1,uVar8);
    uVar8 = *param_2;
  }
  else {
    *(ulong *)(param_1 + 0x10) = uVar8 + (long)puVar5;
    uVar8 = *param_2;
  }
  if (uVar8 != 0) {
    uVar11 = 0;
    do {
      cVar3 = *(char *)(param_2[2] + uVar11 * 2);
      if (cVar3 == '\f') goto LAB_01680ebc;
      if (cVar3 == '\v') goto LAB_01680ed0;
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar8);
  }
  if (param_2[1] != 0) {
    uVar11 = 0;
    do {
      cVar3 = *(char *)(param_2[2] + uVar8 * 2 + uVar11 * 2);
      if (cVar3 == '\f') {
LAB_01680ebc:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","MachineRepresentation::kFloat64 != rep");
      }
      if (cVar3 == '\v') {
LAB_01680ed0:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","MachineRepresentation::kFloat32 != rep");
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < param_2[1]);
  }
  if (2 < uVar1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","2 >= locations.return_count_");
  }
  if (uVar1 != 0) {
    uVar4 = *(undefined2 *)param_2[2];
    *puVar5 = 0;
    *(undefined2 *)(puVar5 + 1) = uVar4;
    if (uVar1 != 1) {
      uVar4 = *(undefined2 *)(param_2[2] + 2);
      puVar5[2] = 2;
      *(undefined2 *)(puVar5 + 3) = uVar4;
    }
  }
  uVar8 = param_2[1];
  if ((int)uVar8 < 1) {
LAB_01680de0:
    puVar6 = *(undefined4 **)(param_1 + 0x10);
    lVar10 = *(long *)(param_1 + 0x18);
    if ((ulong)(lVar10 - (long)puVar6) < 0x58) {
      puVar6 = (undefined4 *)Zone::NewExpand(param_1,0x58);
      puVar7 = *(ulong **)(param_1 + 0x10);
      lVar10 = *(long *)(param_1 + 0x18);
    }
    else {
      puVar7 = (ulong *)(puVar6 + 0x16);
      *(ulong **)(param_1 + 0x10) = puVar7;
    }
    if ((ulong)(lVar10 - (long)puVar7) < 0x18) {
      puVar7 = (ulong *)Zone::NewExpand(param_1,0x18);
    }
    else {
      *(ulong **)(param_1 + 0x10) = puVar7 + 3;
    }
    *puVar7 = uVar1;
    puVar7[1] = uVar2;
    puVar7[2] = (ulong)puVar5;
    *puVar6 = 2;
    *(undefined2 *)(puVar6 + 1) = 5;
    *(undefined8 *)(puVar6 + 6) = 0;
    *(undefined8 *)(puVar6 + 8) = 0;
    puVar6[0x12] = param_3 | 0x10;
    *(undefined8 *)(puVar6 + 0x10) = 0;
    *(undefined8 *)(puVar6 + 2) = 0x5fffffffe;
    *(ulong **)(puVar6 + 4) = puVar7;
    *(undefined1 *)(puVar6 + 10) = 0x20;
    *(undefined8 *)(puVar6 + 0xe) = 0xff00;
    *(undefined8 *)(puVar6 + 0xc) = 0x7ff80000;
    *(char **)(puVar6 + 0x14) = "c-call";
    return puVar6;
  }
  iVar9 = 0;
  uVar11 = 0;
  puVar12 = puVar5 + uVar1 * 2;
  piVar13 = &DAT_01a5b574;
  do {
    uVar4 = *(undefined2 *)(param_2[2] + (uVar11 + *param_2) * 2);
    uVar14 = *piVar13 << 1;
    while( true ) {
      *puVar12 = uVar14;
      *(undefined2 *)(puVar12 + 1) = uVar4;
      uVar11 = uVar11 + 1;
      piVar13 = piVar13 + 3;
      puVar12 = puVar12 + 2;
      if ((uVar8 & 0xffffffff) == uVar11) goto LAB_01680de0;
      if (uVar11 < 8) break;
      uVar4 = *(undefined2 *)(param_2[2] + (uVar11 + *param_2) * 2);
      uVar14 = iVar9 << 1 ^ 0xffffffff;
      iVar9 = iVar9 + 1;
    }
  } while( true );
}

