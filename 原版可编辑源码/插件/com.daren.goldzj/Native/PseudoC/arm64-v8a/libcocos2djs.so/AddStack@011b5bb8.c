
/* v8::internal::SamplingHeapProfiler::AddStack() */

SamplingHeapProfiler * __thiscall
v8::internal::SamplingHeapProfiler::AddStack(SamplingHeapProfiler *this)

{
  long lVar1;
  bool bVar2;
  JavaScriptFrame *pJVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  char *pcVar7;
  ulong uVar8;
  ulong uVar9;
  SamplingHeapProfiler *pSVar10;
  StringsStorage *pSVar11;
  int iVar12;
  ulong *puVar13;
  ulong local_618;
  ulong *local_610;
  ulong *local_608;
  ulong *puStack_600;
  StackFrameIterator aSStack_5f8 [1416];
  JavaScriptFrame *local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_608 = (ulong *)0x0;
  puStack_600 = (ulong *)0x0;
  local_610 = (ulong *)0x0;
  pSVar10 = this + 0x60;
  StackFrameIterator::StackFrameIterator(aSStack_5f8,*(Isolate **)this);
  if (local_70 == (JavaScriptFrame *)0x0) {
LAB_011b5d9c:
    if (*(uint *)(*(long *)this + 0x2c60) < 8) {
      pcVar7 = (&PTR_DAT_01cb7848)[(int)*(uint *)(*(long *)this + 0x2c60)];
    }
    else {
      pcVar7 = (char *)0x0;
    }
  }
  else {
    JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)aSStack_5f8);
    if (local_70 == (JavaScriptFrame *)0x0) goto LAB_011b5d9c;
    iVar12 = 0;
    bVar2 = false;
    do {
      pJVar3 = local_70;
      if (*(int *)(this + 0xd8) <= iVar12) break;
      uVar5 = JavaScriptFrame::unchecked_function(local_70);
      if (((uVar5 & 1) == 0) ||
         (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0x439)) {
        bVar2 = true;
      }
      else {
        uVar5 = (**(code **)(*(long *)pJVar3 + 0x98))(pJVar3);
        local_618 = uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 0xb);
        if (local_608 == puStack_600) {
          std::__ndk1::
          vector<v8::internal::SharedFunctionInfo,std::__ndk1::allocator<v8::internal::SharedFunctionInfo>>
          ::__push_back_slow_path<v8::internal::SharedFunctionInfo_const&>
                    ((vector<v8::internal::SharedFunctionInfo,std::__ndk1::allocator<v8::internal::SharedFunctionInfo>>
                      *)&local_610,(SharedFunctionInfo *)&local_618);
        }
        else {
          *local_608 = local_618;
          local_608 = local_608 + 1;
        }
        iVar12 = iVar12 + 1;
      }
      JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)aSStack_5f8);
    } while (local_70 != (JavaScriptFrame *)0x0);
    if (iVar12 == 0) goto LAB_011b5d9c;
    puVar13 = local_608;
    if (local_608 != local_610) {
      do {
        puVar13 = puVar13 + -1;
        local_618 = *puVar13;
        pSVar11 = *(StringsStorage **)(this + 0x58);
        uVar6 = SharedFunctionInfo::DebugName((SharedFunctionInfo *)&local_618);
        pcVar7 = (char *)StringsStorage::GetName(pSVar11,uVar6);
        uVar9 = local_618 & 0xffffffff00000000;
        uVar8 = uVar9 | *(uint *)(local_618 + 0xf);
        uVar5 = uVar8;
        if (*(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar8 - 1)) == 0x5b) {
          uVar5 = uVar9 | *(uint *)(uVar8 + 0xb);
        }
        if (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x65) {
          if (*(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar8 - 1)) == 0x5b) {
            uVar8 = uVar9 | *(uint *)(uVar8 + 0xb);
          }
          iVar12 = *(int *)(uVar8 + 0x1f) >> 1;
        }
        else {
          iVar12 = 0;
        }
        iVar4 = SharedFunctionInfo::StartPosition((SharedFunctionInfo *)&local_618);
        pSVar10 = (SamplingHeapProfiler *)
                  FindOrAddChildNode(this,(AllocationNode *)pSVar10,pcVar7,iVar12,iVar4);
      } while (puVar13 != local_610);
    }
    if (!bVar2) goto LAB_011b5dd8;
    pcVar7 = "(deopt)";
  }
  pSVar10 = (SamplingHeapProfiler *)FindOrAddChildNode(this,(AllocationNode *)pSVar10,pcVar7,0,0);
LAB_011b5dd8:
  if (local_610 != (ulong *)0x0) {
    local_608 = local_610;
    operator_delete(local_610);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return pSVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

