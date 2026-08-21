
/* v8::internal::compiler::RepresentationSelector::ProcessRemainingInputs(v8::internal::compiler::Node*,
   int) */

void __thiscall
v8::internal::compiler::RepresentationSelector::ProcessRemainingInputs
          (RepresentationSelector *this,Node *param_1,int param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined1 local_88 [4];
  undefined8 local_84;
  undefined1 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68 [4];
  undefined8 local_64;
  undefined1 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = NodeProperties::PastFrameStateIndex(param_1);
  if (iVar2 <= param_2) {
    iVar2 = param_2;
  }
  iVar3 = NodeProperties::PastEffectIndex(param_1);
  if (iVar2 < iVar3) {
    do {
      local_68[0] = 0;
      local_64 = 0;
      local_5c = 0;
      local_58 = 0;
      local_50 = 0xffffffff;
      EnqueueInput(this,param_1,iVar2,local_68);
      iVar2 = iVar2 + 1;
      iVar3 = NodeProperties::PastEffectIndex(param_1);
    } while (iVar2 < iVar3);
  }
  iVar2 = NodeProperties::PastEffectIndex(param_1);
  if (iVar2 <= param_2) {
    iVar2 = param_2;
  }
  iVar3 = NodeProperties::PastControlIndex(param_1);
  if (iVar2 < iVar3) {
    do {
      local_88[0] = 0;
      local_84 = 0;
      local_7c = 0;
      local_78 = 0;
      local_70 = 0xffffffff;
      EnqueueInput(this,param_1,iVar2,local_88);
      iVar2 = iVar2 + 1;
      iVar3 = NodeProperties::PastControlIndex(param_1);
    } while (iVar2 < iVar3);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

