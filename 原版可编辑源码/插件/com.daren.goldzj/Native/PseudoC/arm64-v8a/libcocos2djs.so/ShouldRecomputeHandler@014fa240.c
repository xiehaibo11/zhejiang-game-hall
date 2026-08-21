
/* v8::internal::IC::ShouldRecomputeHandler(v8::internal::Handle<v8::internal::String>) */

undefined8 __thiscall v8::internal::IC::ShouldRecomputeHandler(IC *this,ulong *param_2)

{
  int iVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  undefined8 uVar4;
  long extraout_x1;
  uint uVar5;
  ulong uVar6;
  
  uVar5 = *(uint *)(this + 0x1c);
  if ((uVar5 < 0xf) && ((1 << (ulong)(uVar5 & 0x1f) & 0x6308U) != 0)) {
    uVar6 = *param_2;
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    if (0x40 < *(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1))) {
      return 0;
    }
    iVar1 = FeedbackNexus::GetName((FeedbackNexus *)(this + 0x50));
    if ((int)*param_2 != iVar1) {
      return 0;
    }
    uVar5 = *(uint *)(this + 0x1c);
  }
  if ((uVar5 | 1) != 7) {
    if (uVar5 == 1) {
      return 1;
    }
    if (uVar5 == 10) {
      return 1;
    }
    FeedbackNexus::FindHandlerForMap((FeedbackNexus *)(this + 0x50),*(undefined8 *)(this + 0x20));
    if (extraout_x1 == 0) {
      if (0xa9 < *(ushort *)(**(long **)(this + 0x20) + 7)) {
        if (this[0x40] == (IC)0x0) {
          this[0x40] = (IC)0x1;
          FeedbackNexus::ExtractMaps((FeedbackNexus *)(this + 0x50),(vector *)(this + 0x28));
        }
        if ((*(undefined8 **)(this + 0x28) != *(undefined8 **)(this + 0x30)) &&
           (uVar6 = *(ulong *)**(undefined8 **)(this + 0x28), (int)uVar6 != 0)) {
          pIVar2 = *(Isolate **)(this + 8);
          if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar3 = *(ulong **)(pIVar2 + 0x95a0);
            if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
              puVar3 = (ulong *)HandleScope::Extend(pIVar2);
            }
            *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
            *puVar3 = uVar6;
            uVar5 = *(uint *)(uVar6 + 0xb);
          }
          else {
            puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar6);
            uVar6 = *puVar3;
            uVar5 = *(uint *)(uVar6 + 0xb);
          }
          if ((uVar5 >> 0x18 & 1) != 0) {
            return 1;
          }
          uVar4 = IsMoreGeneralElementsKindTransition
                            (*(byte *)(uVar6 + 10) >> 3,
                             *(byte *)(**(long **)(this + 0x20) + 10) >> 3);
          return uVar4;
        }
      }
      return 0;
    }
  }
  return 1;
}

