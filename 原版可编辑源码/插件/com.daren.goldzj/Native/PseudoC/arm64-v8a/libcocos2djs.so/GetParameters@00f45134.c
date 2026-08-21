
/* v8::internal::JavaScriptFrame::GetParameters() const */

ulong * __thiscall v8::internal::JavaScriptFrame::GetParameters(JavaScriptFrame *this)

{
  long lVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  
  if (FLAG_detailed_error_stack_trace == '\x01') {
    uVar2 = (**(code **)(*(long *)this + 0x78))(this);
    puVar3 = (ulong *)Factory::NewFixedArray(*(Factory **)(this + 0x10),(ulong)uVar2,0);
    if (0 < (int)uVar2) {
      iVar8 = 0;
      uVar6 = 0;
      do {
        uVar7 = *puVar3;
        uVar4 = (**(code **)(*(long *)this + 0x70))(this,uVar6 & 0xffffffff);
        *(int *)(uVar7 + (long)iVar8 + 7) = (int)uVar4;
        if ((uVar4 & 1) != 0) {
          uVar5 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
          lVar1 = uVar7 + (long)iVar8 + 7;
          if (((uint)uVar5 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar7,lVar1,uVar4);
            uVar5 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
          {
            Heap_GenerationalBarrierSlow(uVar7,lVar1,uVar4);
          }
        }
        uVar6 = uVar6 + 1;
        iVar8 = iVar8 + 4;
      } while (uVar2 != uVar6);
    }
  }
  else {
    puVar3 = (ulong *)(*(long *)(this + 0x10) + 0x168);
  }
  return puVar3;
}

