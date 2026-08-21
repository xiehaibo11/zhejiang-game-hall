
/* v8::internal::Factory::NewStackFrameInfo(v8::internal::Handle<v8::internal::FrameArray>, int) */

ulong * __thiscall v8::internal::Factory::NewStackFrameInfo(Factory *this,long *param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  StackFrameBase *this_00;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  Factory *pFVar18;
  Factory *pFVar19;
  ulong *puVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  uint uVar25;
  ulong local_128;
  FrameArrayIterator aFStack_120 [176];
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  FrameArrayIterator::FrameArrayIterator(aFStack_120,this,param_2,param_3);
  lVar21 = *param_2;
  lVar1 = (long)(int)((param_3 * 0x18 | 4U) + 0x10) + 7;
  if ((((*(uint *)(lVar21 + lVar1) >> 1 & 1) == 0) && ((*(uint *)(lVar1 + lVar21) >> 2 & 1) == 0))
     && ((*(uint *)(lVar1 + lVar21) >> 2 & 1) == 0)) {
    uVar25 = *(uint *)(lVar1 + lVar21) >> 3 & 1;
  }
  else {
    uVar25 = 1;
  }
  this_00 = (StackFrameBase *)FrameArrayIterator::Frame(aFStack_120);
  iVar5 = (**(code **)(*(long *)this_00 + 0x68))();
  iVar6 = (**(code **)(*(long *)this_00 + 0x70))(this_00);
  iVar7 = (**(code **)(*(long *)this_00 + 0x78))(this_00);
  iVar8 = StackFrameBase::GetScriptId(this_00);
  puVar12 = (ulong *)(**(code **)(*(long *)this_00 + 0x20))(this_00);
  puVar13 = (ulong *)(**(code **)(*(long *)this_00 + 0x30))(this_00);
  puVar14 = (ulong *)(**(code **)(*(long *)this_00 + 0x28))(this_00);
  if (uVar25 == 0) {
    puVar15 = (ulong *)(**(code **)(*(long *)this_00 + 0x18))(this_00);
    uVar22 = *puVar15;
    if ((uVar22 & 1) != 0) {
      uVar24 = uVar22 & 0xffffffff00000000;
      if (*(short *)((uVar24 | 7) + (ulong)*(uint *)(uVar22 - 1)) == 0x439) {
        uVar22 = uVar24 | *(uint *)((uVar24 | *(uint *)(uVar22 + 0xb)) + 0xf);
        if (*(short *)((uVar24 | 7) + (ulong)*(uint *)(uVar22 - 1)) == 0x5b) {
          uVar22 = uVar24 | *(uint *)(uVar22 + 0xb);
        }
        if (((uVar22 & 1) == 0) || ((int)uVar22 != *(int *)((uVar22 & 0xffffffff00000000) + 0xa0)))
        {
          local_128 = uVar22;
          uVar11 = Script::IsUserJavaScript((Script *)&local_128);
          goto LAB_00f7da08;
        }
      }
    }
  }
  uVar11 = 0;
LAB_00f7da08:
  pFVar18 = this + 0xa0;
  puVar15 = (ulong *)(**(code **)(*(long *)this_00 + 0x48))(this_00);
  puVar16 = (ulong *)(**(code **)(*(long *)this_00 + 0x50))(this_00);
  puVar17 = (ulong *)(**(code **)(*(long *)this_00 + 0x58))(this_00);
  uVar9 = (**(code **)(*(long *)this_00 + 0x90))(this_00);
  uVar10 = (**(code **)(*(long *)this_00 + 0xb0))(this_00);
  pFVar19 = pFVar18;
  if (((uVar9 & 1) == 0) && ((uVar10 & 1) == 0)) {
    pFVar18 = (Factory *)(**(code **)(*(long *)this_00 + 0x38))(this_00);
    pFVar19 = (Factory *)(**(code **)(*(long *)this_00 + 0x40))(this_00);
  }
  puVar20 = (ulong *)NewStruct(this,0x6b,0);
  *(undefined4 *)(*puVar20 + 0x37) = 0;
  uVar2 = *(int *)(*puVar20 + 0x37) >> 1;
  uVar3 = uVar2 | 4;
  if (uVar25 == 0) {
    uVar3 = uVar2 & 0x7ffffffb;
  }
  *(int *)(*puVar20 + 0x37) = uVar3 << 1;
  uVar25 = *(int *)(*puVar20 + 0x37) >> 1;
  uVar2 = uVar25 & 0x7ffffff7;
  if ((*(uint *)(*param_2 + lVar1) & 8) != 0) {
    uVar2 = uVar25 | 8;
  }
  *(int *)(*puVar20 + 0x37) = uVar2 << 1;
  uVar25 = *(int *)(*puVar20 + 0x37) >> 1;
  uVar2 = uVar25 | 0x10;
  if ((uVar11 & 1) == 0) {
    uVar2 = uVar25 & 0x7fffffef;
  }
  *(int *)(*puVar20 + 0x37) = uVar2 << 1;
  *(int *)(*puVar20 + 3) = iVar5 << 1;
  *(int *)(*puVar20 + 7) = iVar6 << 1;
  *(int *)(*puVar20 + 0x13) = iVar7 << 1;
  *(int *)(*puVar20 + 0xf) = iVar8 << 1;
  uVar24 = *puVar20;
  uVar22 = *puVar12;
  *(int *)(uVar24 + 0x17) = (int)uVar22;
  if ((uVar22 & 1) != 0) {
    uVar23 = *(ulong *)((uVar22 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar23 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar24,uVar24 + 0x17,uVar22);
      uVar23 = *(ulong *)(uVar22 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar23 & 0x18) != 0) && ((*(byte *)((uVar24 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar24,uVar24 + 0x17,uVar22);
    }
  }
  uVar24 = *puVar20;
  uVar22 = *puVar13;
  *(int *)(uVar24 + 0x1b) = (int)uVar22;
  if ((uVar22 & 1) != 0) {
    uVar23 = *(ulong *)((uVar22 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar23 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar24,uVar24 + 0x1b,uVar22);
      uVar23 = *(ulong *)(uVar22 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar23 & 0x18) != 0) && ((*(byte *)((uVar24 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar24,uVar24 + 0x1b,uVar22);
    }
  }
  uVar24 = *puVar20;
  uVar22 = *puVar14;
  *(int *)(uVar24 + 0x1f) = (int)uVar22;
  if ((uVar22 & 1) != 0) {
    uVar23 = *(ulong *)((uVar22 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar23 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar24,uVar24 + 0x1f,uVar22);
      uVar23 = *(ulong *)(uVar22 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar23 & 0x18) != 0) && ((*(byte *)((uVar24 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar24,uVar24 + 0x1f,uVar22);
    }
  }
  uVar24 = *puVar20;
  uVar22 = *(ulong *)pFVar18;
  *(int *)(uVar24 + 0x23) = (int)uVar22;
  if ((uVar22 & 1) != 0) {
    uVar23 = *(ulong *)((uVar22 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar23 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar24,uVar24 + 0x23,uVar22);
      uVar23 = *(ulong *)(uVar22 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar23 & 0x18) != 0) && ((*(byte *)((uVar24 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar24,uVar24 + 0x23,uVar22);
    }
  }
  uVar24 = *puVar20;
  uVar22 = *(ulong *)pFVar19;
  *(int *)(uVar24 + 0x27) = (int)uVar22;
  if ((uVar22 & 1) != 0) {
    uVar23 = *(ulong *)((uVar22 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar23 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar24,uVar24 + 0x27,uVar22);
      uVar23 = *(ulong *)(uVar22 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar23 & 0x18) != 0) && ((*(byte *)((uVar24 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar24,uVar24 + 0x27,uVar22);
    }
  }
  uVar24 = *puVar20;
  uVar22 = *puVar15;
  *(int *)(uVar24 + 0x2b) = (int)uVar22;
  if ((uVar22 & 1) != 0) {
    uVar23 = *(ulong *)((uVar22 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar23 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar24,uVar24 + 0x2b,uVar22);
      uVar23 = *(ulong *)(uVar22 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar23 & 0x18) != 0) && ((*(byte *)((uVar24 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar24,uVar24 + 0x2b,uVar22);
    }
  }
  uVar24 = *puVar20;
  uVar22 = *puVar16;
  *(int *)(uVar24 + 0x2f) = (int)uVar22;
  if ((uVar22 & 1) != 0) {
    uVar23 = *(ulong *)((uVar22 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar23 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar24,uVar24 + 0x2f,uVar22);
      uVar23 = *(ulong *)(uVar22 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar23 & 0x18) != 0) && ((*(byte *)((uVar24 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar24,uVar24 + 0x2f,uVar22);
    }
  }
  uVar24 = *puVar20;
  uVar22 = *puVar17;
  *(int *)(uVar24 + 0x33) = (int)uVar22;
  if ((uVar22 & 1) != 0) {
    uVar23 = *(ulong *)((uVar22 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar23 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar24,uVar24 + 0x33,uVar22);
      uVar23 = *(ulong *)(uVar22 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar23 & 0x18) != 0) && ((*(byte *)((uVar24 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar24,uVar24 + 0x33,uVar22);
    }
  }
  uVar24 = *puVar20;
  uVar22 = (**(code **)(*(long *)this_00 + 0x98))(this_00);
  uVar25 = *(int *)(uVar24 + 0x37) >> 1;
  uVar11 = uVar25 | 1;
  if ((uVar22 & 1) == 0) {
    uVar11 = uVar25 & 0x7ffffffe;
  }
  *(int *)(uVar24 + 0x37) = uVar11 << 1;
  uVar25 = *(int *)(*puVar20 + 0x37) >> 1;
  uVar11 = uVar25 | 2;
  if ((uVar10 & 1) == 0) {
    uVar11 = uVar25 & 0x7ffffffd;
  }
  *(int *)(*puVar20 + 0x37) = uVar11 << 1;
  uVar25 = *(int *)(*puVar20 + 0x37) >> 1;
  uVar11 = uVar25 | 0x20;
  if ((uVar9 & 1) == 0) {
    uVar11 = uVar25 & 0x7fffffdf;
  }
  *(int *)(*puVar20 + 0x37) = uVar11 << 1;
  uVar24 = *puVar20;
  uVar22 = (**(code **)(*(long *)this_00 + 0xa0))(this_00);
  uVar25 = *(int *)(uVar24 + 0x37) >> 1;
  uVar11 = uVar25 | 0x40;
  if ((uVar22 & 1) == 0) {
    uVar11 = uVar25 & 0x7fffffbf;
  }
  *(int *)(uVar24 + 0x37) = uVar11 << 1;
  uVar24 = *puVar20;
  uVar22 = (**(code **)(*(long *)this_00 + 0xa8))(this_00);
  uVar25 = *(int *)(uVar24 + 0x37) >> 1;
  uVar11 = uVar25 | 0x80;
  if ((uVar22 & 1) == 0) {
    uVar11 = uVar25 & 0x7fffff7f;
  }
  *(int *)(uVar24 + 0x37) = uVar11 << 1;
  uVar22 = *puVar20;
  iVar5 = (**(code **)(*(long *)this_00 + 0x80))(this_00);
  *(int *)(uVar22 + 0xb) = iVar5 << 1;
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar20;
}

