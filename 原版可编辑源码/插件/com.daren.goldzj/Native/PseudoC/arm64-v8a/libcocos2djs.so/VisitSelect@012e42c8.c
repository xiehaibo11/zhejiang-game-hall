
/* v8::internal::compiler::RepresentationSelector::VisitSelect(v8::internal::compiler::Node*,
   v8::internal::compiler::Truncation, v8::internal::compiler::SimplifiedLowering*) */

void __thiscall
v8::internal::compiler::RepresentationSelector::VisitSelect
          (RepresentationSelector *this,Node *param_1,undefined8 param_3,long *param_4)

{
  undefined1 uVar1;
  long lVar2;
  uint uVar3;
  ushort *puVar4;
  Operator *pOVar5;
  long lVar6;
  int iVar7;
  undefined1 local_68 [4];
  undefined8 local_64;
  undefined1 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(int *)(this + 0x78) == 2) {
    local_68[0] = 1;
    local_64 = 1;
    local_5c = 0;
    local_58 = 0;
    local_50 = 0xffffffff;
    ConvertInput(this,param_1,0,local_68,0);
  }
  else if (*(int *)(this + 0x78) == 0) {
    local_68[0] = 1;
    local_64 = 1;
    local_5c = 0;
    local_58 = 0;
    local_50 = 0xffffffff;
    EnqueueInput(this,param_1,0,local_68);
  }
  lVar6 = *(long *)(*(long *)(this + 0x18) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x28 +
                   0x18);
  if (lVar6 == 0) {
    lVar6 = *(long *)(param_1 + 8);
  }
  uVar3 = GetOutputInfoForPhi(this,param_1,lVar6,param_3);
  iVar7 = *(int *)(this + 0x78);
  uVar1 = (undefined1)uVar3;
  if (iVar7 == 1) {
    *(undefined1 *)
     (*(long *)(this + 0x18) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x28 + 1) = uVar1;
  }
  else {
    if (iVar7 != 0) goto LAB_012e4428;
    *(undefined8 *)
     (*(long *)(this + 0x18) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x28 + 0x10) =
         0xffffffff;
  }
  iVar7 = *(int *)(this + 0x78);
LAB_012e4428:
  if (iVar7 == 2) {
    puVar4 = (ushort *)SelectParametersOf(*(Operator **)param_1);
    if ((uVar3 & 0xff) != (*puVar4 & 0xff)) {
      pOVar5 = (Operator *)
               CommonOperatorBuilder::Select
                         (*(CommonOperatorBuilder **)(*param_4 + 8),uVar3,*puVar4 >> 8);
      NodeProperties::ChangeOp(param_1,pOVar5);
    }
  }
  if (*(int *)(this + 0x78) == 2) {
    local_5c = 0;
    local_58 = 0;
    local_50 = 0xffffffff;
    local_68[0] = uVar1;
    local_64 = param_3;
    ConvertInput(this,param_1,1,local_68,0);
  }
  else if (*(int *)(this + 0x78) == 0) {
    local_5c = 0;
    local_58 = 0;
    local_50 = 0xffffffff;
    local_68[0] = uVar1;
    local_64 = param_3;
    EnqueueInput(this,param_1,1,local_68);
  }
  if (*(int *)(this + 0x78) == 2) {
    local_5c = 0;
    local_58 = 0;
    local_50 = 0xffffffff;
    local_68[0] = uVar1;
    local_64 = param_3;
    ConvertInput(this,param_1,2,local_68,0);
  }
  else if (*(int *)(this + 0x78) == 0) {
    local_5c = 0;
    local_58 = 0;
    local_50 = 0xffffffff;
    local_68[0] = uVar1;
    local_64 = param_3;
    EnqueueInput(this,param_1,2,local_68);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

