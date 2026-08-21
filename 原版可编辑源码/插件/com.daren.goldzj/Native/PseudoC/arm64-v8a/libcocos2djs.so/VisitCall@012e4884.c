
/* v8::internal::compiler::RepresentationSelector::VisitCall(v8::internal::compiler::Node*,
   v8::internal::compiler::SimplifiedLowering*) */

void v8::internal::compiler::RepresentationSelector::VisitCall
               (Node *param_1,SimplifiedLowering *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined1 uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined2 local_bc;
  undefined1 local_ba;
  undefined2 local_b4;
  undefined1 local_b2;
  undefined2 local_ac;
  undefined1 local_aa;
  undefined1 local_a8 [4];
  undefined8 local_a4;
  undefined1 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [4];
  undefined8 local_84;
  undefined1 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar5 = CallDescriptorOf(*(Operator **)param_2);
  uVar1 = *(uint *)(*(long *)param_2 + 0x14);
  if (0 < (int)uVar1) {
    uVar10 = 0;
    iVar3 = *(int *)(*(long *)(lVar5 + 0x10) + 8);
    puVar11 = (undefined2 *)((ulong)local_a8 | 1);
    puVar12 = (undefined2 *)((ulong)local_88 | 1);
LAB_012e49b8:
    if (*(int *)(param_1 + 0x78) == 2) {
      local_a8[0] = 0;
      *(undefined1 *)(puVar11 + 1) = local_aa;
      *puVar11 = local_ac;
      local_a4 = 0x100000005;
      uVar6 = 0;
      goto LAB_012e4b78;
    }
    if (*(int *)(param_1 + 0x78) != 0) goto LAB_012e4954;
    local_88[0] = 0;
    *(undefined1 *)(puVar12 + 1) = local_aa;
    *puVar12 = local_ac;
    local_84 = 0x100000005;
    uVar6 = 0;
    do {
      local_7c = 0;
      local_78 = 0;
      local_70 = 0xffffffff;
      EnqueueInput((RepresentationSelector *)param_1,param_2,uVar6,local_88);
LAB_012e4954:
      do {
        while( true ) {
          uVar10 = uVar10 + 1;
          if (uVar1 == uVar10) goto LAB_012e4b84;
          if (uVar10 == 0) goto LAB_012e49b8;
          if ((long)iVar3 < (long)uVar10) break;
          uVar2 = *(uint *)((*(long **)(lVar5 + 0x10))[2] + (uVar10 + **(long **)(lVar5 + 0x10)) * 8
                           + -4);
          uVar7 = (undefined1)uVar2;
          uVar9 = 0x100000005;
          switch(uVar2 & 0xff) {
          case 1:
            uVar9 = 1;
            break;
          case 2:
          case 3:
          case 4:
            uVar7 = 4;
            uVar9 = 2;
            break;
          case 5:
          case 6:
          case 0xb:
            break;
          case 7:
          case 8:
            uVar7 = 8;
            uVar9 = 0x100000005;
            break;
          default:
                    /* WARNING: Subroutine does not return */
            V8_Fatal("unreachable code");
          case 0xc:
            uVar9 = 0x100000004;
          }
          if (*(int *)(param_1 + 0x78) == 2) {
            *(undefined1 *)(puVar11 + 1) = local_b2;
            *puVar11 = local_b4;
            local_a8[0] = uVar7;
            local_a4 = uVar9;
LAB_012e4b5c:
            uVar6 = uVar10 & 0xffffffff;
LAB_012e4b78:
            local_90 = 0xffffffff;
            local_98 = 0;
            local_9c = 0;
            ConvertInput((RepresentationSelector *)param_1,param_2,uVar6,local_a8,0);
          }
          else if (*(int *)(param_1 + 0x78) == 0) {
            *(undefined1 *)(puVar12 + 1) = local_b2;
            *puVar12 = local_b4;
            local_88[0] = uVar7;
            local_84 = uVar9;
            goto LAB_012e4934;
          }
        }
        if (*(int *)(param_1 + 0x78) == 2) {
          local_a8[0] = 8;
          *(undefined1 *)(puVar11 + 1) = local_ba;
          *puVar11 = local_bc;
          local_a4 = 0x100000005;
          goto LAB_012e4b5c;
        }
      } while (*(int *)(param_1 + 0x78) != 0);
      local_88[0] = 8;
      *(undefined1 *)(puVar12 + 1) = local_ba;
      *puVar12 = local_bc;
      local_84 = 0x100000005;
LAB_012e4934:
      uVar6 = uVar10 & 0xffffffff;
    } while( true );
  }
LAB_012e4b84:
  ProcessRemainingInputs((RepresentationSelector *)param_1,(Node *)param_2,uVar1);
  iVar3 = *(int *)(param_1 + 0x78);
  lVar8 = *(long *)(param_1 + 0x18);
  uVar10 = (ulong)*(uint *)(param_2 + 0x14) & 0xffffff;
  if (**(long **)(lVar5 + 0x10) == 0) {
    if (iVar3 == 1) {
      *(undefined1 *)(lVar8 + uVar10 * 0x28 + 1) = 8;
      goto LAB_012e4c04;
    }
  }
  else if (iVar3 == 1) {
    *(char *)(lVar8 + uVar10 * 0x28 + 1) = (char)*(undefined4 *)((*(long **)(lVar5 + 0x10))[2] + 4);
    goto LAB_012e4c04;
  }
  if (iVar3 == 0) {
    *(undefined8 *)(lVar8 + uVar10 * 0x28 + 0x10) = 0xffffffff;
  }
LAB_012e4c04:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

