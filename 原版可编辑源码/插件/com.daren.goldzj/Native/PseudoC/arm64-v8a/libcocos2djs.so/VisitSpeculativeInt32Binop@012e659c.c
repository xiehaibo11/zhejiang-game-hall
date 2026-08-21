
/* v8::internal::compiler::RepresentationSelector::VisitSpeculativeInt32Binop(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::RepresentationSelector::VisitSpeculativeInt32Binop
          (RepresentationSelector *this,Node *param_1)

{
  long lVar1;
  undefined1 uVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 uVar5;
  Node *pNVar6;
  long lVar7;
  Node *pNVar8;
  Type local_88;
  undefined2 uStack_87;
  undefined1 uStack_85;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined1 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  Type local_68;
  undefined2 uStack_67;
  undefined1 uStack_65;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pNVar8 = param_1 + 0x20;
  uVar4 = *(uint *)(param_1 + 0x14);
  pNVar6 = pNVar8;
  if ((~uVar4 & 0xf000000) == 0) {
    pNVar6 = (Node *)(*(long *)pNVar8 + 0x10);
  }
  lVar7 = *(long *)(*(long *)pNVar6 + 8);
  local_68 = SUB81(lVar7,0);
  uStack_67 = (undefined2)((ulong)lVar7 >> 8);
  uStack_65 = (undefined1)((ulong)lVar7 >> 0x18);
  uStack_64 = (undefined4)((ulong)lVar7 >> 0x20);
  if (lVar7 == 0x801fdf) {
LAB_012e661c:
    if ((~uVar4 & 0xf000000) == 0) {
      pNVar8 = (Node *)(*(long *)pNVar8 + 0x10);
    }
    lVar7 = *(long *)(*(long *)(pNVar8 + 8) + 8);
    local_88 = SUB81(lVar7,0);
    uStack_87 = (undefined2)((ulong)lVar7 >> 8);
    uStack_85 = (undefined1)((ulong)lVar7 >> 0x18);
    uStack_84 = (undefined4)((ulong)lVar7 >> 0x20);
    if ((lVar7 == 0x801fdf) || (uVar3 = Type::SlowIs(&local_88,0x801fdf), (uVar3 & 1) != 0)) {
      uStack_64 = 2;
      uStack_60 = 0;
      local_5c = 0;
      goto LAB_012e6784;
    }
  }
  else {
    uVar3 = Type::SlowIs(&local_68,0x801fdf);
    if ((uVar3 & 1) != 0) {
      uVar4 = *(uint *)(param_1 + 0x14);
      goto LAB_012e661c;
    }
  }
  uVar2 = NumberOperationHintOf(*(Operator **)param_1);
  uVar5 = 0x100000005;
  local_5c = 1;
  switch(uVar2) {
  case 0:
  case 1:
    break;
  case 2:
    local_5c = 2;
    break;
  case 3:
    local_5c = 4;
    goto LAB_012e6718;
  case 4:
    local_5c = 5;
LAB_012e6718:
    uVar5 = 2;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  uStack_64 = (undefined4)uVar5;
  uStack_60 = (undefined4)((ulong)uVar5 >> 0x20);
LAB_012e6784:
  local_50 = 0xffffffff;
  local_58 = 0;
  local_68 = (Type)0x4;
  local_70 = 0xffffffff;
  local_78 = 0;
  local_88 = (Type)0x4;
  uStack_84 = uStack_64;
  uStack_80 = uStack_60;
  local_7c = local_5c;
  VisitBinop(this,param_1,&local_68,&local_88,4,0xffffffff);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

