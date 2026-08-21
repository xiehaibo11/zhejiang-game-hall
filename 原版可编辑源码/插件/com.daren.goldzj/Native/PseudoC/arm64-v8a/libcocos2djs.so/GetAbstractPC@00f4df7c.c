
/* v8::internal::Isolate::GetAbstractPC(int*, int*) */

void __thiscall v8::internal::Isolate::GetAbstractPC(Isolate *this,int *param_1,int *param_2)

{
  Isolate *pIVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  undefined8 local_618;
  undefined8 uStack_610;
  StackFrameIterator aSStack_608 [1416];
  InterpretedFrame *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  StackFrameIterator::StackFrameIterator(aSStack_608,this);
  if (local_80 != (InterpretedFrame *)0x0) {
    JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)aSStack_608);
    if (local_80 != (InterpretedFrame *)0x0) {
      pIVar1 = this + 0x95a0;
      uVar4 = (**(code **)(*(long *)local_80 + 0x98))(local_80);
      uVar4 = uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 0xb);
      if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar5 = *(ulong **)pIVar1;
        if (puVar5 == *(ulong **)(this + 0x95a8)) {
          puVar5 = (ulong *)HandleScope::Extend(this);
        }
        *(ulong **)pIVar1 = puVar5 + 1;
        *puVar5 = uVar4;
      }
      else {
        puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(this + 0x95b8),uVar4);
      }
      SharedFunctionInfo::EnsureSourcePositionsAvailable(this,puVar5);
      iVar3 = (**(code **)(*(long *)local_80 + 0x68))(local_80);
      uVar4 = (**(code **)(*(long *)local_80 + 0x98))(local_80);
      uVar8 = uVar4 & 0xffffffff00000000;
      uVar4 = uVar8 | *(uint *)((uVar8 | *(uint *)(uVar4 + 0xb)) + 0xf);
      if (*(short *)((uVar8 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x5b) {
        uVar4 = uVar8 | *(uint *)(uVar4 + 0xb);
      }
      if (((uVar4 & 1) == 0) ||
         (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) != 0x65)) {
        iVar7 = -1;
        *param_1 = iVar3;
      }
      else {
        if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar5 = *(ulong **)pIVar1;
          if (puVar5 == *(ulong **)(this + 0x95a8)) {
            puVar5 = (ulong *)HandleScope::Extend(this);
          }
          *(ulong **)pIVar1 = puVar5 + 1;
          *puVar5 = uVar4;
        }
        else {
          puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(this + 0x95b8),uVar4);
        }
        local_618 = 0xffffffffffffffff;
        uStack_610 = 0xffffffffffffffff;
        Script::GetPositionInfo(puVar5,iVar3,&local_618,1);
        *param_1 = (int)local_618 + 1;
        iVar7 = local_618._4_4_ + 1;
      }
      *param_2 = iVar7;
      iVar3 = (**(code **)(*(long *)local_80 + 8))(local_80);
      if (iVar3 == 0xc) {
        lVar6 = InterpretedFrame::GetBytecodeArray(local_80);
        iVar3 = InterpretedFrame::GetBytecodeOffset(local_80);
        lVar6 = lVar6 + iVar3 + 0x21;
      }
      else {
        lVar6 = **(long **)(local_80 + 0x28);
      }
      goto LAB_00f4e178;
    }
  }
  lVar6 = 0;
  *param_1 = -1;
  *param_2 = -1;
LAB_00f4e178:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar6);
}

