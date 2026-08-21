
/* v8::internal::TranslatedFrame::Handlify() */

void __thiscall v8::internal::TranslatedFrame::Handlify(TranslatedFrame *this)

{
  long lVar1;
  ulong *puVar2;
  Isolate *pIVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  char *pcVar8;
  
  uVar6 = *(ulong *)(this + 8);
  if ((int)uVar6 != 0) {
    pIVar3 = (Isolate *)(uVar6 & 0xffffffff00000000);
    if (*(CanonicalHandleScope **)((ulong)pIVar3 | 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(pIVar3 + 0x95a0);
      if (puVar2 == *(ulong **)(pIVar3 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(pIVar3);
      }
      *(ulong **)(pIVar3 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar6;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)((ulong)pIVar3 | 0x95b8),uVar6);
    }
    *(undefined8 *)(this + 8) = 0;
    *(ulong **)(this + 0x10) = puVar2;
  }
  lVar4 = *(long *)(this + 0x30);
  if (*(long *)(this + 0x38) != lVar4) {
    uVar6 = *(ulong *)(this + 0x48);
    lVar1 = *(long *)(this + 0x50);
    plVar7 = (long *)(lVar4 + (uVar6 >> 4 & 0xffffffffffffff8));
    lVar4 = *(long *)(lVar4 + (lVar1 + uVar6 >> 4 & 0xffffffffffffff8));
    pcVar8 = (char *)(*plVar7 + (uVar6 & 0x7f) * 0x20);
    while ((char *)(lVar4 + (lVar1 + uVar6 & 0x7f) * 0x20) != pcVar8) {
      if (*pcVar8 == '\x01') {
        uVar5 = *(ulong *)(pcVar8 + 0x18);
        pIVar3 = *(Isolate **)(*(long *)(pcVar8 + 8) + 0x18);
        if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar2 = *(ulong **)(pIVar3 + 0x95a0);
          if (puVar2 == *(ulong **)(pIVar3 + 0x95a8)) {
            puVar2 = (ulong *)HandleScope::Extend(pIVar3);
          }
          *(ulong **)(pIVar3 + 0x95a0) = puVar2 + 1;
          *puVar2 = uVar5;
        }
        else {
          puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar5);
        }
        pcVar8[1] = '\x02';
        *(ulong **)(pcVar8 + 0x10) = puVar2;
        pcVar8[0x18] = '\0';
        pcVar8[0x19] = '\0';
        pcVar8[0x1a] = '\0';
        pcVar8[0x1b] = '\0';
        pcVar8[0x1c] = '\0';
        pcVar8[0x1d] = '\0';
        pcVar8[0x1e] = '\0';
        pcVar8[0x1f] = '\0';
      }
      pcVar8 = pcVar8 + 0x20;
      if ((long)pcVar8 - *plVar7 == 0x1000) {
        plVar7 = plVar7 + 1;
        pcVar8 = (char *)*plVar7;
      }
    }
  }
  return;
}

