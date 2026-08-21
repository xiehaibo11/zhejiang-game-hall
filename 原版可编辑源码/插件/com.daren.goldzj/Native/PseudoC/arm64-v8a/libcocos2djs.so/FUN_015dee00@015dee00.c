
void FUN_015dee00(undefined8 *param_1,long param_2,uint param_3)

{
  uint *puVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  int *piVar13;
  ulong uVar14;
  uint *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 *local_c0;
  undefined1 *local_b8;
  long *local_b0;
  undefined1 local_a8 [64];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if ((int)((ulong)(*(long *)(param_2 + 0xd8) - *(long *)(param_2 + 0xd0)) >> 3) * -0xf0f0f0f - 1U
      == param_3) {
    uVar14 = **(ulong **)(param_2 + 0x60);
    local_b0 = &local_68;
    uVar12 = uVar14 & 0xffffffff;
    local_c0 = local_a8;
    if (8 < uVar12) {
      local_b8 = local_a8;
      v8::base::SmallVector<v8::internal::compiler::Node*,8ul>::Grow
                ((SmallVector<v8::internal::compiler::Node*,8ul> *)&local_c0,uVar12);
    }
    local_b8 = local_c0 + uVar12 * 8;
    if (((int)uVar14 != 0) && (uVar12 != 0)) {
      puVar7 = *(undefined1 **)(param_2 + 0xb8);
      if ((uVar12 < 5) ||
         ((local_c0 < puVar7 && (puVar7 + uVar12 * -0x18 + 0x10 < local_c0 + uVar12 * 8)))) {
        lVar9 = 0;
      }
      else {
        uVar2 = 4;
        if ((uVar14 & 3) != 0) {
          uVar2 = uVar14 & 3;
        }
        lVar9 = uVar12 - uVar2;
        puVar8 = (undefined8 *)(puVar7 + (2 - uVar12) * 0x18 + 0x10);
        puVar11 = (undefined8 *)(local_c0 + 0x10);
        lVar10 = lVar9;
        do {
          uVar6 = *puVar8;
          uVar16 = puVar8[3];
          uVar17 = puVar8[-6];
          puVar5 = puVar8 + -3;
          puVar8 = puVar8 + 0xc;
          lVar10 = lVar10 + -4;
          puVar11[-1] = *puVar5;
          puVar11[-2] = uVar17;
          puVar11[1] = uVar16;
          *puVar11 = uVar6;
          puVar11 = puVar11 + 4;
        } while (lVar10 != 0);
      }
      lVar10 = uVar12 - lVar9;
      puVar8 = (undefined8 *)(puVar7 + (lVar9 - uVar12) * 0x18 + 0x10);
      puVar11 = (undefined8 *)(local_c0 + lVar9 * 8);
      do {
        lVar10 = lVar10 + -1;
        *puVar11 = *puVar8;
        puVar8 = puVar8 + 3;
        puVar11 = puVar11 + 1;
      } while (lVar10 != 0);
    }
    uVar6 = v8::internal::compiler::WasmGraphBuilder::Return
                      (param_1[1],local_c0,(long)local_b8 - (long)local_c0 >> 3);
    FUN_015ddc44(param_1,param_2,uVar6);
    if (local_c0 != local_a8) {
      free(local_c0);
    }
  }
  else {
    lVar9 = *(long *)(param_2 + 0xd8) + (ulong)param_3 * -0x88;
    puVar1 = (uint *)(lVar9 + -0x70);
    if (*(char *)(lVar9 + -0x88) != '\x03') {
      puVar1 = (uint *)(lVar9 + -0x48);
    }
    if (*puVar1 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = *(long *)(param_2 + 0xb8) + (ulong)*puVar1 * -0x18;
    }
    piVar13 = *(int **)(lVar9 + -0x20);
    iVar3 = *piVar13;
    FUN_015ddeb8(param_1,param_2,*param_1,piVar13);
    uVar12 = (ulong)*puVar1;
    if (*puVar1 != 0) {
      lVar9 = 0;
      uVar14 = 0;
      do {
        puVar15 = puVar1 + 2;
        if ((int)uVar12 != 1) {
          puVar15 = (uint *)(*(long *)(puVar1 + 2) + lVar9);
        }
        if (iVar3 == 1) {
          uVar6 = *(undefined8 *)(lVar10 + 0x10 + lVar9);
        }
        else {
          if (9 < (byte)puVar15[2]) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("unreachable code");
          }
          uVar6 = 4;
          switch((byte)puVar15[2]) {
          case 0:
            uVar6 = 0;
            break;
          case 1:
            break;
          case 2:
            uVar6 = 5;
            break;
          case 3:
            uVar6 = 0xb;
            break;
          case 4:
            uVar6 = 0xc;
            break;
          case 5:
            uVar6 = 0xd;
            break;
          default:
            uVar6 = 7;
          }
          uVar6 = v8::internal::compiler::WasmGraphBuilder::CreateOrMergeIntoPhi
                            ((WasmGraphBuilder *)param_1[1],uVar6,*(undefined8 *)(piVar13 + 2),
                             *(undefined8 *)(puVar15 + 4),*(undefined8 *)(lVar10 + 0x10 + lVar9));
        }
        *(undefined8 *)(puVar15 + 4) = uVar6;
        uVar12 = (ulong)*puVar1;
        uVar14 = uVar14 + 1;
        lVar9 = lVar9 + 0x18;
      } while (uVar14 < uVar12);
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

