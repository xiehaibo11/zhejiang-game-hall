
/* v8::internal::compiler::GetWasmCallDescriptor(v8::internal::Zone*,
   v8::internal::Signature<v8::internal::wasm::ValueType>*,
   v8::internal::compiler::WasmGraphBuilder::UseRetpoline, v8::internal::compiler::WasmCallKind) */

undefined4 *
v8::internal::compiler::GetWasmCallDescriptor(Zone *param_1,ulong *param_2,uint param_3,int param_4)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  ulong *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  int local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined *local_78;
  int local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  uVar4 = *param_2;
  uVar5 = param_2[1];
  puVar8 = *(undefined4 **)(param_1 + 0x10);
  lVar2 = 1;
  if (param_4 - 1U < 2) {
    lVar2 = 2;
  }
  uVar7 = (int)(uVar5 + lVar2) + (int)uVar4;
  uVar11 = -(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar7 << 3;
  if ((ulong)(*(long *)(param_1 + 0x18) - (long)puVar8) < uVar11) {
    puVar8 = (undefined4 *)Zone::NewExpand(param_1,uVar11);
  }
  else {
    *(ulong *)(param_1 + 0x10) = uVar11 + (long)puVar8;
  }
  local_88 = &DAT_01a0617c;
  local_80 = 8;
  puVar9 = puVar8 + uVar4 * 2;
  local_78 = &DAT_01a061d0;
  local_70 = 0;
  local_90 = 0x100000007;
  *(undefined2 *)(puVar9 + 1) = 0x707;
  *puVar9 = 0xe;
  uVar11 = param_2[1];
  if (uVar11 == 0) {
    uVar17 = 1;
  }
  else {
    uVar15 = 0;
    uVar16 = 1;
    do {
      uVar12 = 4;
      uVar17 = uVar16;
      switch(*(undefined1 *)(param_2[2] + *param_2 + uVar15)) {
      case 0:
        uVar12 = 0;
        break;
      case 1:
        break;
      case 2:
        uVar12 = 5;
        break;
      case 3:
        uVar12 = 0xb;
        break;
      case 4:
        uVar12 = 0xc;
        break;
      case 5:
        uVar12 = 0xd;
        break;
      case 6:
      case 7:
      case 8:
      case 9:
        goto switchD_013198b0_caseD_6;
      default:
        goto switchD_013198b0_default;
      }
      uVar12 = FUN_01328b9c(&local_90,uVar12);
      uVar17 = uVar15 + 2;
      if (uVar15 + 2 <= uVar16) {
        uVar17 = uVar16;
      }
      puVar9[2] = (int)uVar12;
      *(short *)(puVar9 + 3) = (short)((ulong)uVar12 >> 0x20);
switchD_013198b0_caseD_6:
      uVar15 = uVar15 + 1;
      uVar16 = uVar17;
      puVar9 = puVar9 + 2;
    } while (uVar11 != uVar15);
    if (uVar11 != 0) {
      uVar15 = 0;
      puVar9 = puVar8 + uVar4 * 2;
      do {
        uVar7 = (uint)*(byte *)(param_2[2] + *param_2 + uVar15);
        uVar17 = uVar16;
        if (5 < uVar7) {
          if (3 < uVar7 - 6) goto switchD_013198b0_default;
          uVar12 = FUN_01328b9c(&local_90,7);
          uVar17 = uVar15 + 2;
          if (uVar15 + 2 <= uVar16) {
            uVar17 = uVar16;
          }
          puVar9[2] = (int)uVar12;
          *(short *)(puVar9 + 3) = (short)((ulong)uVar12 >> 0x20);
        }
        uVar15 = uVar15 + 1;
        uVar16 = uVar17;
        puVar9 = puVar9 + 2;
      } while (uVar11 != uVar15);
    }
  }
  iVar1 = local_70;
  if (param_4 - 1U < 2) {
    *(undefined2 *)(puVar8 + (uVar17 + uVar4) * 2 + 1) = 0x707;
    puVar8[(uVar17 + uVar4) * 2] = 2;
  }
  local_b0 = &DAT_01a06250;
  local_b8 = 2;
  local_a8 = 2;
  local_a0 = &DAT_01a06268;
  uVar7 = ShouldPadArguments(local_70);
  iVar1 = iVar1 + (uVar7 & 1);
  local_98 = iVar1;
  if (0 < (int)uVar4) {
    uVar11 = 0;
    puVar9 = puVar8;
    do {
      uVar12 = 4;
      switch(*(undefined1 *)(param_2[2] + uVar11)) {
      case 0:
        uVar12 = 0;
        break;
      case 1:
        break;
      case 2:
        uVar12 = 5;
        break;
      case 3:
        uVar12 = 0xb;
        break;
      case 4:
        uVar12 = 0xc;
        break;
      case 5:
        uVar12 = 0xd;
        break;
      case 6:
      case 7:
      case 8:
      case 9:
        uVar12 = 7;
        break;
      default:
switchD_013198b0_default:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      uVar12 = FUN_01328b9c(&local_b8,uVar12);
      uVar11 = uVar11 + 1;
      *puVar9 = (int)uVar12;
      *(short *)(puVar9 + 1) = (short)((ulong)uVar12 >> 0x20);
      puVar9 = puVar9 + 2;
    } while ((uVar4 & 0xffffffff) != uVar11);
  }
  uVar13 = 5;
  if (param_4 != 1) {
    uVar13 = 3;
  }
  uVar3 = 4;
  if (param_4 != 0) {
    uVar3 = uVar13;
  }
  puVar9 = *(undefined4 **)(param_1 + 0x10);
  lVar14 = *(long *)(param_1 + 0x18);
  uVar13 = 0x40;
  if ((param_3 & 1) == 0) {
    uVar13 = 0;
  }
  if ((ulong)(lVar14 - (long)puVar9) < 0x58) {
    puVar9 = (undefined4 *)Zone::NewExpand(param_1,0x58);
    puVar10 = *(ulong **)(param_1 + 0x10);
    lVar14 = *(long *)(param_1 + 0x18);
  }
  else {
    puVar10 = (ulong *)(puVar9 + 0x16);
    *(ulong **)(param_1 + 0x10) = puVar10;
  }
  if ((ulong)(lVar14 - (long)puVar10) < 0x18) {
    puVar10 = (ulong *)Zone::NewExpand(param_1,0x18);
  }
  else {
    *(ulong **)(param_1 + 0x10) = puVar10 + 3;
  }
  puVar10[2] = (ulong)puVar8;
  *puVar10 = uVar4;
  puVar10[1] = uVar5 + lVar2;
  *(undefined8 *)(puVar9 + 2) = 0x5fffffffe;
  *(ulong **)(puVar9 + 4) = puVar10;
  *(undefined8 *)(puVar9 + 0xe) = 0;
  *(undefined8 *)(puVar9 + 0x10) = 0;
  *(long *)(puVar9 + 6) = (long)iVar1;
  *(long *)(puVar9 + 8) = (long)local_98 - (long)iVar1;
  *puVar9 = uVar3;
  *(undefined2 *)(puVar9 + 1) = 5;
  *(undefined1 *)(puVar9 + 10) = 0;
  *(undefined8 *)(puVar9 + 0xc) = 0;
  puVar9[0x12] = uVar13;
  *(char **)(puVar9 + 0x14) = "wasm-call";
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar9;
}

