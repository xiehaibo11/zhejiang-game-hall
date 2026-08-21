
/* v8::internal::JsonStringifier::SerializeJSReceiverSlow(v8::internal::Handle<v8::internal::JSReceiver>)
    */

undefined8 __thiscall
v8::internal::JsonStringifier::SerializeJSReceiverSlow(JsonStringifier *this,undefined8 param_2)

{
  IncrementalStringBuilder *this_00;
  short sVar1;
  int iVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  short *psVar9;
  ulong *puVar10;
  byte bVar11;
  int iVar12;
  LookupIterator aLStack_b8 [88];
  
  puVar10 = *(ulong **)(this + 0x38);
  if ((puVar10 == (ulong *)0x0) &&
     (puVar10 = (ulong *)KeyAccumulator::GetKeys(param_2,0,0x12,0,0,0), puVar10 == (ulong *)0x0)) {
LAB_0104ecd4:
    uVar6 = 2;
  }
  else {
    iVar12 = *(int *)(this + 0x1c);
    this_00 = (IncrementalStringBuilder *)(this + 8);
    lVar7 = **(long **)(this + 0x28);
    *(int *)(this + 0x1c) = iVar12 + 1;
    if (*(int *)(this + 0x10) == 0) {
      *(undefined1 *)(lVar7 + iVar12 + 0xb) = 0x7b;
    }
    else {
      *(undefined2 *)(lVar7 + (long)iVar12 * 2 + 0xb) = 0x7b;
    }
    if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
      IncrementalStringBuilder::Extend(this_00);
    }
    iVar12 = *(int *)(this + 0x50);
    *(int *)(this + 0x50) = iVar12 + 1;
    uVar8 = *puVar10;
    if (*(int *)(uVar8 + 3) < 2) {
      *(int *)(this + 0x50) = iVar12;
    }
    else {
      iVar12 = 0;
      lVar7 = 0;
      bVar11 = 0;
      do {
        pIVar3 = *(Isolate **)this;
        uVar8 = uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + (long)iVar12 + 7);
        if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar4 = *(ulong **)(pIVar3 + 0x95a0);
          if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
            puVar4 = (ulong *)HandleScope::Extend(pIVar3);
          }
          *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
          *puVar4 = uVar8;
        }
        else {
          puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar8);
        }
        LookupIterator::PropertyOrElement(aLStack_b8,*(undefined8 *)this,param_2,puVar4,3);
        lVar5 = Object::GetProperty(aLStack_b8,false);
        if (lVar5 == 0) goto LAB_0104ecd4;
        uVar6 = Serialize_<true>(this,lVar5,bVar11,puVar4);
        if ((int)uVar6 == 2) {
          return uVar6;
        }
        uVar8 = *puVar10;
        lVar7 = lVar7 + 1;
        bVar11 = bVar11 | (int)uVar6 == 1;
        iVar12 = iVar12 + 4;
      } while (lVar7 < *(int *)(uVar8 + 3) >> 1);
      *(int *)(this + 0x50) = *(int *)(this + 0x50) + -1;
      if ((bVar11 != 0) && (*(long *)(this + 0x48) != 0)) {
        iVar12 = *(int *)(this + 0x1c);
        lVar7 = **(long **)(this + 0x28);
        *(int *)(this + 0x1c) = iVar12 + 1;
        if (*(int *)(this + 0x10) == 0) {
          *(undefined1 *)(lVar7 + iVar12 + 0xb) = 10;
        }
        else {
          *(undefined2 *)(lVar7 + (long)iVar12 * 2 + 0xb) = 10;
        }
        if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
          IncrementalStringBuilder::Extend(this_00);
        }
        if (0 < *(int *)(this + 0x50)) {
          iVar12 = 0;
          do {
            psVar9 = *(short **)(this + 0x48);
            sVar1 = *psVar9;
            if (*(int *)(this + 0x10) == 0) {
              while (sVar1 != 0) {
                psVar9 = psVar9 + 1;
                iVar2 = *(int *)(this + 0x1c);
                lVar7 = **(long **)(this + 0x28);
                *(int *)(this + 0x1c) = iVar2 + 1;
                *(char *)(lVar7 + iVar2 + 0xb) = (char)sVar1;
                if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                  IncrementalStringBuilder::Extend(this_00);
                }
                sVar1 = *psVar9;
              }
            }
            else {
              while (sVar1 != 0) {
                psVar9 = psVar9 + 1;
                iVar2 = *(int *)(this + 0x1c);
                lVar7 = **(long **)(this + 0x28);
                *(int *)(this + 0x1c) = iVar2 + 1;
                *(short *)(lVar7 + (long)iVar2 * 2 + 0xb) = sVar1;
                if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                  IncrementalStringBuilder::Extend(this_00);
                }
                sVar1 = *psVar9;
              }
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 < *(int *)(this + 0x50));
        }
      }
    }
    iVar12 = *(int *)(this + 0x1c);
    lVar7 = **(long **)(this + 0x28);
    *(int *)(this + 0x1c) = iVar12 + 1;
    if (*(int *)(this + 0x10) == 0) {
      *(undefined1 *)(lVar7 + iVar12 + 0xb) = 0x7d;
    }
    else {
      *(undefined2 *)(lVar7 + (long)iVar12 * 2 + 0xb) = 0x7d;
    }
    if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
      IncrementalStringBuilder::Extend(this_00);
    }
    uVar6 = 1;
  }
  return uVar6;
}

