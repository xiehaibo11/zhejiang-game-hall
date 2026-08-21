
/* v8::internal::compiler::RepresentationSelector::VisitCheck(v8::internal::compiler::Node*,
   v8::internal::compiler::Type, v8::internal::compiler::SimplifiedLowering*) */

void v8::internal::compiler::RepresentationSelector::VisitCheck
               (RepresentationSelector *param_1,Node *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  Node *pNVar3;
  long lVar4;
  int iVar5;
  Node *pNVar6;
  undefined2 local_6c;
  undefined1 local_6a;
  undefined2 local_64;
  undefined1 local_62;
  Type local_58;
  undefined2 uStack_57;
  undefined1 uStack_55;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pNVar6 = param_2 + 0x20;
  pNVar3 = pNVar6;
  if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
    pNVar3 = (Node *)(*(long *)pNVar6 + 0x10);
  }
  lVar4 = *(long *)(*(long *)pNVar3 + 8);
  local_58 = SUB81(lVar4,0);
  uStack_57 = (undefined2)((ulong)lVar4 >> 8);
  uStack_55 = (undefined1)((ulong)lVar4 >> 0x18);
  uStack_54 = (undefined4)((ulong)lVar4 >> 0x20);
  if ((lVar4 != param_3) && (uVar2 = Type::SlowIs(&local_58,param_3), (uVar2 & 1) == 0)) {
    if (*(int *)(param_1 + 0x78) == 2) {
      local_58 = (Type)0x7;
      uStack_54 = 5;
      uStack_50 = 1;
      local_4c = 6;
      uStack_57 = local_6c;
      uStack_55 = local_6a;
      local_48 = 0;
      local_40 = 0xffffffff;
      ConvertInput(param_1,param_2,0,&local_58,0);
    }
    else if (*(int *)(param_1 + 0x78) == 0) {
      local_58 = (Type)0x7;
      uStack_54 = 5;
      uStack_50 = 1;
      local_4c = 6;
      uStack_57 = local_6c;
      uStack_55 = local_6a;
      local_48 = 0;
      local_40 = 0xffffffff;
      EnqueueInput(param_1,param_2,0,&local_58);
    }
    ProcessRemainingInputs(param_1,param_2,1);
    if (*(int *)(param_1 + 0x78) == 1) {
      *(undefined1 *)
       (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 1) = 7;
    }
    else if (*(int *)(param_1 + 0x78) == 0) {
      *(undefined8 *)
       (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 0x10) =
           0xffffffff;
    }
    goto LAB_012e722c;
  }
  if (*(int *)(param_1 + 0x78) == 2) {
    local_58 = (Type)0x8;
    uStack_54 = 5;
    uStack_50 = 1;
    uStack_57 = local_64;
    uStack_55 = local_62;
    local_4c = 0;
    local_48 = 0;
    local_40 = 0xffffffff;
    ConvertInput(param_1,param_2,0,&local_58,0);
  }
  else if (*(int *)(param_1 + 0x78) == 0) {
    local_58 = (Type)0x8;
    uStack_54 = 5;
    uStack_50 = 1;
    uStack_57 = local_64;
    uStack_55 = local_62;
    local_4c = 0;
    local_48 = 0;
    local_40 = 0xffffffff;
    EnqueueInput(param_1,param_2,0,&local_58);
  }
  ProcessRemainingInputs(param_1,param_2,1);
  iVar5 = *(int *)(param_1 + 0x78);
  if (iVar5 == 1) {
    *(undefined1 *)
     (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 1) = 7;
LAB_012e71f8:
    iVar5 = *(int *)(param_1 + 0x78);
  }
  else if (iVar5 == 0) {
    *(undefined8 *)
     (*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x28 + 0x10) =
         0xffffffff;
    goto LAB_012e71f8;
  }
  if (iVar5 == 2) {
    if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
      pNVar6 = (Node *)(*(long *)pNVar6 + 0x10);
    }
    DeferReplacement(param_1,param_2,*(Node **)pNVar6);
  }
LAB_012e722c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

