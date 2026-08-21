
/* v8::internal::compiler::RepresentationSelector::VisitNoop(v8::internal::compiler::Node*,
   v8::internal::compiler::Truncation) */

void __thiscall
v8::internal::compiler::RepresentationSelector::VisitNoop
          (RepresentationSelector *this,Node *param_1,ulong param_3)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  Node *pNVar4;
  int iVar5;
  undefined1 local_68 [4];
  ulong local_64;
  undefined1 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((param_3 & 0xff) == 0) {
    VisitUnused(this,param_1);
    goto LAB_012e6ab8;
  }
  lVar3 = *(long *)(*(long *)(this + 0x18) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x28 +
                   0x18);
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_1 + 8);
  }
  uVar2 = GetOutputInfoForPhi(this,param_1,lVar3,param_3);
  if (*(int *)(this + 0x78) == 2) {
    local_5c = 0;
    local_58 = 0;
    local_50 = 0xffffffff;
    local_68[0] = uVar2;
    local_64 = param_3;
    ConvertInput(this,param_1,0,local_68,0);
  }
  else if (*(int *)(this + 0x78) == 0) {
    local_5c = 0;
    local_58 = 0;
    local_50 = 0xffffffff;
    local_68[0] = uVar2;
    local_64 = param_3;
    EnqueueInput(this,param_1,0,local_68);
  }
  ProcessRemainingInputs(this,param_1,1);
  iVar5 = *(int *)(this + 0x78);
  if (iVar5 == 1) {
    *(undefined1 *)
     (*(long *)(this + 0x18) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x28 + 1) = uVar2;
LAB_012e6a80:
    iVar5 = *(int *)(this + 0x78);
  }
  else if (iVar5 == 0) {
    *(undefined8 *)
     (*(long *)(this + 0x18) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x28 + 0x10) =
         0xffffffff;
    goto LAB_012e6a80;
  }
  if (iVar5 == 2) {
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    DeferReplacement(this,param_1,*(Node **)pNVar4);
  }
LAB_012e6ab8:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

