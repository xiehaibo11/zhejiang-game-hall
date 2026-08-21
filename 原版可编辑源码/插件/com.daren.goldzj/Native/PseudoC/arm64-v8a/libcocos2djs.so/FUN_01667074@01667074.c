
void FUN_01667074(undefined8 *param_1,LiveRange *param_2,LiveRange *param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  LiveRange *pLVar6;
  char *pcVar7;
  Zone *this;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  LinearScanAllocator *this_00;
  LiveRange *local_28;
  
  if ((-1 < *(int *)(*(long *)(param_3 + 0x20) + 0x5c)) &&
     (((*(uint *)(param_3 + 4) ^ *(uint *)(param_2 + 4)) & 0x1f80) == 0)) {
    this_00 = (LinearScanAllocator *)*param_1;
    iVar4 = v8::internal::compiler::LiveRange::FirstIntersection(param_2,param_3);
    if ((iVar4 != -1) && (iVar4 <= *(int *)(param_1 + 1))) {
      puVar8 = *(undefined8 **)this_00;
      if ((*(byte *)(puVar8 + 0x3a) >> 2 & 1) != 0) {
        uVar9 = (ulong)(*(uint *)(param_3 + 4) >> 7) & 0x3f;
        if ((int)uVar9 == 0x20) {
          pcVar7 = "unassigned";
        }
        else {
          puVar8 = &v8::internal::RegisterName(v8::internal::Register)::Names;
          if (*(int *)(this_00 + 8) != 0) {
            puVar8 = &v8::internal::RegisterName(v8::internal::VRegister)::Names;
          }
          pcVar7 = (char *)puVar8[uVar9];
        }
        v8::internal::PrintF
                  ("Resolving conflict of %d with deferred fixed for register %s\n",
                   (ulong)*(uint *)(*(long *)(param_3 + 0x20) + 0x5c),pcVar7);
        puVar8 = *(undefined8 **)this_00;
      }
      this = (Zone *)*puVar8;
      lVar3 = *(long *)(param_3 + 0x20);
      do {
        lVar10 = lVar3;
        lVar3 = *(long *)(lVar10 + 0x68);
      } while (*(long *)(lVar10 + 0x68) != 0);
      iVar1 = *(int *)(lVar10 + 0x60) + 1;
      *(int *)(lVar10 + 0x60) = iVar1;
      pLVar6 = *(LiveRange **)(this + 0x10);
      if ((ulong)(*(long *)(this + 0x18) - (long)pLVar6) < 0x60) {
        pLVar6 = (LiveRange *)v8::internal::Zone::NewExpand(this,0x60);
      }
      else {
        *(LiveRange **)(this + 0x10) = pLVar6 + 0x60;
      }
      uVar11 = *(undefined8 *)(param_3 + 0x20);
      uVar2 = *(uint *)(param_3 + 4);
      *(undefined8 *)(pLVar6 + 0x18) = 0;
      *(undefined8 *)(pLVar6 + 0x20) = uVar11;
      *(undefined4 *)(pLVar6 + 0x58) = 0xffffffff;
      *(undefined8 *)(pLVar6 + 8) = 0;
      *(undefined8 *)(pLVar6 + 0x10) = 0;
      *(undefined8 *)(pLVar6 + 0x30) = 0;
      *(undefined8 *)(pLVar6 + 0x28) = 0;
      *(undefined8 *)(pLVar6 + 0x40) = 0;
      *(undefined8 *)(pLVar6 + 0x38) = 0;
      *(undefined8 *)(pLVar6 + 0x50) = 0;
      *(undefined8 *)(pLVar6 + 0x48) = 0;
      *(int *)pLVar6 = iVar1;
      *(uint *)(pLVar6 + 4) = uVar2 & 0x1fe000 | 0x8001000;
      *(undefined8 *)(pLVar6 + 0x50) = *(undefined8 *)(param_3 + 0x50);
      v8::internal::compiler::LiveRange::DetachAt(param_3,iVar4,pLVar6,this,0);
      *(undefined8 *)(pLVar6 + 0x20) = *(undefined8 *)(param_3 + 0x20);
      *(undefined8 *)(pLVar6 + 0x28) = *(undefined8 *)(param_3 + 0x28);
      *(LiveRange **)(param_3 + 0x28) = pLVar6;
      *(uint *)(pLVar6 + 4) =
           *(uint *)(pLVar6 + 4) & 0xf0000000 |
           *(uint *)(pLVar6 + 4) & 0x3fffff | (*(uint *)(param_3 + 4) >> 7 & 0x3f) << 0x16;
      v8::internal::compiler::LinearScanAllocator::AddToUnhandled(this_00,pLVar6);
      plVar5 = *(long **)(param_4 + 0x20);
      local_28 = param_3;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_008589d0();
      }
      (**(code **)(*plVar5 + 0x30))(plVar5,&local_28);
    }
  }
  return;
}

