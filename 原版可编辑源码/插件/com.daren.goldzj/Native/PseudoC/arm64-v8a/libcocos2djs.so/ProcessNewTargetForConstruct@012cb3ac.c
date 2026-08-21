
/* v8::internal::compiler::SerializerForBackgroundCompilation::ProcessNewTargetForConstruct(v8::internal::compiler::Hints
   const&, v8::internal::compiler::Hints*) */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::ProcessNewTargetForConstruct
          (SerializerForBackgroundCompilation *this,Hints *param_1,Hints *param_2)

{
  short sVar1;
  ulong *puVar2;
  long lVar3;
  undefined8 *puVar4;
  Isolate *pIVar5;
  ulong uVar6;
  ulong uVar7;
  Hints *pHVar8;
  undefined8 *puVar9;
  
  puVar4 = *(undefined8 **)param_1;
  if (puVar4 != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)*puVar4;
    if (puVar9 != (undefined8 *)0x0) {
      do {
        puVar2 = (ulong *)*puVar9;
        uVar6 = *puVar2;
        if ((uVar6 & 1) != 0) {
          uVar7 = uVar6 & 0xffffffff00000000;
          if (*(short *)((uVar7 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0x438) {
            sVar1 = *(short *)((uVar7 | 7) + (ulong)*(uint *)(uVar6 - 1));
            while (sVar1 == 0x438) {
              pIVar5 = (Isolate *)**(undefined8 **)this;
              uVar7 = uVar7 | *(uint *)(uVar6 + 0xb);
              if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                puVar2 = *(ulong **)(pIVar5 + 0x95a0);
                if (puVar2 == *(ulong **)(pIVar5 + 0x95a8)) {
                  puVar2 = (ulong *)HandleScope::Extend(pIVar5);
                }
                *(ulong **)(pIVar5 + 0x95a0) = puVar2 + 1;
                *puVar2 = uVar7;
                uVar6 = *puVar2;
              }
              else {
                puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                            (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar7);
                uVar6 = *puVar2;
              }
              if ((uVar6 & 1) == 0) break;
              uVar7 = uVar6 & 0xffffffff00000000;
              sVar1 = *(short *)((uVar7 | 7) + (ulong)*(uint *)(uVar6 - 1));
            }
          }
        }
        uVar6 = *puVar2;
        if ((uVar6 & 1) != 0) {
          uVar7 = uVar6 & 0xffffffff00000000;
          if (((*(short *)((uVar7 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0x439) &&
              (pIVar5 = (Isolate *)**(undefined8 **)this,
              *(char *)(((ulong)pIVar5 | 9) + (ulong)*(uint *)(uVar6 - 1)) < '\0')) &&
             (*(short *)((uVar7 | 7) + (ulong)*(uint *)(uVar7 + *(uint *)(uVar6 + 0x1b) + -1)) ==
              0xa2)) {
            uVar7 = uVar7 | *(uint *)(uVar6 + 0x1b);
            if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar2 = *(ulong **)(pIVar5 + 0x95a0);
              if (puVar2 == *(ulong **)(pIVar5 + 0x95a8)) {
                puVar2 = (ulong *)HandleScope::Extend(pIVar5);
              }
              *(ulong **)(pIVar5 + 0x95a0) = puVar2 + 1;
              *puVar2 = uVar7;
              lVar3 = *(long *)(this + 0x20);
            }
            else {
              puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                          (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar7);
              lVar3 = *(long *)(this + 0x20);
            }
            if (lVar3 == 0) {
              lVar3 = ZoneStats::NewEmptyZone(*(ZoneStats **)(this + 0x18),*(char **)(this + 0x10));
              *(long *)(this + 0x20) = lVar3;
            }
            Hints::AddMap(param_2,puVar2,lVar3,1);
          }
        }
        puVar9 = (undefined8 *)puVar9[1];
      } while (puVar9 != (undefined8 *)0x0);
      puVar4 = *(undefined8 **)param_1;
      if (puVar4 == (undefined8 *)0x0) {
        return;
      }
    }
    for (pHVar8 = (Hints *)puVar4[4]; pHVar8 != (Hints *)0x0; pHVar8 = *(Hints **)(pHVar8 + 0x28)) {
      ProcessNewTargetForConstruct(this,pHVar8,param_2);
    }
  }
  return;
}

