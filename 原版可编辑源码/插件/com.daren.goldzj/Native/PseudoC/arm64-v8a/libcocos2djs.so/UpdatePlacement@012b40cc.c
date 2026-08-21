
/* v8::internal::compiler::Scheduler::UpdatePlacement(v8::internal::compiler::Node*,
   v8::internal::compiler::Scheduler::Placement) */

void __thiscall
v8::internal::compiler::Scheduler::UpdatePlacement(Scheduler *this,Node *param_1,int param_3)

{
  ushort uVar1;
  Node *pNVar2;
  BasicBlock *pBVar3;
  undefined8 *puVar4;
  Node *pNVar5;
  uint uVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  
  piVar7 = (int *)(*(long *)(this + 0xb0) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10 +
                  0xc);
  if (*piVar7 != 0) {
    uVar1 = *(ushort *)(*(long *)param_1 + 0x10);
    if (uVar1 < 0x17) {
      for (plVar8 = *(long **)(param_1 + 0x18); plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        puVar4 = plVar8 + (ulong)(*(uint *)(plVar8 + 2) >> 1) * 3 + 3;
        if ((*(uint *)(plVar8 + 2) & 1) == 0) {
          puVar4 = (undefined8 *)*puVar4;
        }
        if (*(int *)(*(long *)(this + 0xb0) +
                     ((ulong)*(uint *)((long)puVar4 + 0x14) & 0xffffff) * 0x10 + 0xc) == 3) {
          UpdatePlacement(this,puVar4,param_3);
        }
      }
    }
    else if (uVar1 - 0x23 < 2) {
      pNVar2 = (Node *)NodeProperties::GetControlInput(param_1,0);
      pBVar3 = (BasicBlock *)Schedule::block(*(Schedule **)(this + 0x10),pNVar2);
      Schedule::AddNode(*(Schedule **)(this + 0x10),pBVar3,param_1);
    }
    else if (uVar1 == 0x32) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    pNVar2 = param_1 + 0x20;
    uVar6 = (byte)param_1[0x17] & 0xf;
    if (uVar6 == 0xf) {
      param_1 = *(Node **)pNVar2;
      uVar6 = *(uint *)(param_1 + 8);
      pNVar2 = param_1 + 0x10;
      if (uVar6 == 0) goto LAB_012b423c;
    }
    else if (((byte)param_1[0x17] & 0xf) == 0) goto LAB_012b423c;
    lVar9 = (long)(int)uVar6 << 3;
    do {
      uVar6 = *(uint *)(param_1 + -8) >> 1;
      if ((*(uint *)(param_1 + -8) & 1) == 0) {
        pNVar5 = *(Node **)(param_1 + (ulong)uVar6 * 0x18);
      }
      else {
        pNVar5 = param_1 + (ulong)uVar6 * 0x18;
      }
      DecrementUnscheduledUseCount(this,*(Node **)pNVar2,uVar6,pNVar5);
      pNVar2 = pNVar2 + 8;
      lVar9 = lVar9 + -8;
      param_1 = param_1 + -0x18;
    } while (lVar9 != 0);
  }
LAB_012b423c:
  *piVar7 = param_3;
  return;
}

