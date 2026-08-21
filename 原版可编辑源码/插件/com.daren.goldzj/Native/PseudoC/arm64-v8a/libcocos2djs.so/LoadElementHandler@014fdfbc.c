
/* v8::internal::KeyedLoadIC::LoadElementHandler(v8::internal::Handle<v8::internal::Map>,
   v8::internal::KeyedAccessLoadMode) */

void __thiscall
v8::internal::KeyedLoadIC::LoadElementHandler(KeyedLoadIC *this,ulong *param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  ushort uVar3;
  byte bVar4;
  CanonicalHandleScope *pCVar5;
  undefined8 *puVar6;
  Builtins *this_00;
  ulong *puVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  Isolate *pIVar11;
  Isolate *pIVar12;
  ulong uVar13;
  undefined8 uVar14;
  
  uVar9 = *param_2;
  if ((*(byte *)(uVar9 + 9) >> 3 & 1) != 0) {
    uVar10 = uVar9 & 0xffffffff00000000;
    uVar13 = uVar10 | *(uint *)(uVar9 + 0x13);
    if ((*(uint *)(uVar9 + 0x13) & 1) != 0) {
      do {
        if (*(short *)((uVar10 | 7) + (ulong)*(uint *)(uVar13 - 1)) != 0xa2) {
          if (((uVar13 & 1) != 0) &&
             (*(short *)((uVar10 | 7) + (ulong)*(uint *)(uVar13 - 1)) == 0x439)) {
            uVar13 = uVar13 & 0xffffffff00000000 |
                     (ulong)*(uint *)((uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 + 0xb))
                                     + 3);
          }
          break;
        }
        puVar1 = (uint *)(uVar13 + 0x13);
        uVar13 = uVar10 | *puVar1;
      } while ((*puVar1 & 1) != 0);
    }
    uVar9 = *(ulong *)(uVar10 + 0xa0);
    if (*(uint *)(uVar13 + 0x23) != (uint)uVar9) {
      uVar9 = uVar10 | *(uint *)((uVar10 | *(uint *)(uVar13 + 0x23)) + 0x13);
    }
    if (((*(uint *)(uVar9 + 3) & 1) == 0) ||
       (*(uint *)(uVar9 + 3) != *(uint *)(*(long *)(this + 8) + 0xa0))) {
LAB_014fe11c:
      uVar2 = *(uint *)(*param_2 + 0x13);
      uVar9 = *param_2 & 0xffffffff00000000;
      uVar10 = uVar9 | uVar2;
      if ((uVar2 & 1) != 0) {
        do {
          if (*(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar10 - 1)) != 0xa2) {
            if (((uVar10 & 1) != 0) &&
               (*(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar10 - 1)) == 0x439)) {
              uVar10 = uVar10 & 0xffffffff00000000 |
                       (ulong)*(uint *)((uVar10 & 0xffffffff00000000 |
                                        (ulong)*(uint *)(uVar10 + 0xb)) + 3);
            }
            break;
          }
          puVar1 = (uint *)(uVar10 + 0x13);
          uVar10 = uVar9 | *puVar1;
        } while ((*puVar1 & 1) != 0);
      }
      uVar13 = *(ulong *)(uVar9 + 0xa0);
      if (*(uint *)(uVar10 + 0x23) != (uint)uVar13) {
        uVar13 = uVar9 | *(uint *)((uVar9 | *(uint *)(uVar10 + 0x23)) + 0x13);
      }
      if ((*(byte *)(uVar13 + 0x23) >> 3 & 1) == 0) {
        if (TracingFlags::runtime_stats != 0) {
          RuntimeCallStats::CorrectCurrentCounterId
                    ((RuntimeCallStats *)(*(long *)(*(long *)(this + 8) + 0x9520) + 0x58a0),0x3fb,0)
          ;
        }
        this_00 = (Builtins *)(*(long *)(this + 8) + 0x9e00);
        if (*(int *)(this + 0x1c) == 9) {
          iVar8 = 0x8c;
        }
        else {
          iVar8 = 0x7d;
        }
        goto LAB_014fe2bc;
      }
    }
    else if (*(int *)(this + 0x1c) == 9) {
      uVar2 = *(uint *)(*param_2 + 0x13);
      uVar9 = *param_2 & 0xffffffff00000000;
      uVar10 = uVar9 | uVar2;
      if ((uVar2 & 1) != 0) {
        do {
          if (*(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar10 - 1)) != 0xa2) {
            if (((uVar10 & 1) != 0) &&
               (*(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar10 - 1)) == 0x439)) {
              uVar10 = uVar10 & 0xffffffff00000000 |
                       (ulong)*(uint *)((uVar10 & 0xffffffff00000000 |
                                        (ulong)*(uint *)(uVar10 + 0xb)) + 3);
            }
            break;
          }
          puVar1 = (uint *)(uVar10 + 0x13);
          uVar10 = uVar9 | *puVar1;
        } while ((*puVar1 & 1) != 0);
      }
      uVar13 = *(ulong *)(uVar9 + 0xa0);
      if (*(uint *)(uVar10 + 0x23) != (uint)uVar13) {
        uVar13 = uVar9 | *(uint *)((uVar9 | *(uint *)(uVar10 + 0x23)) + 0x13);
      }
      if (((*(uint *)(uVar13 + 0xb) & 1) == 0) ||
         (*(uint *)(uVar13 + 0xb) != *(uint *)(*(long *)(this + 8) + 0xa0))) goto LAB_014fe11c;
    }
  }
  uVar3 = *(ushort *)(*param_2 + 7);
  if (uVar3 < 0x40) {
    if (TracingFlags::runtime_stats != 0) {
      RuntimeCallStats::CorrectCurrentCounterId
                ((RuntimeCallStats *)(*(long *)(*(long *)(this + 8) + 0x9520) + 0x58a0),0x3fc,0);
    }
    pIVar11 = *(Isolate **)(this + 8);
    pIVar12 = pIVar11 + 0x95a0;
    if (*(int *)(this + 0x1c) == 9) {
      pCVar5 = *(CanonicalHandleScope **)(pIVar11 + 0x95b8);
      if (pCVar5 == (CanonicalHandleScope *)0x0) {
        puVar6 = *(undefined8 **)pIVar12;
        if (puVar6 == *(undefined8 **)(pIVar11 + 0x95a8)) {
          puVar6 = (undefined8 *)HandleScope::Extend(pIVar11);
        }
        *(undefined8 **)pIVar12 = puVar6 + 1;
        *puVar6 = 0x16;
        return;
      }
LAB_014fe264:
      CanonicalHandleScope::Lookup(pCVar5,0x16);
      return;
    }
    pCVar5 = *(CanonicalHandleScope **)(pIVar11 + 0x95b8);
    uVar9 = 0x82;
    if (param_3 != 1) {
      uVar9 = 2;
    }
    if (pCVar5 != (CanonicalHandleScope *)0x0) goto LAB_014fe288;
    puVar7 = *(ulong **)pIVar12;
    if (puVar7 == *(ulong **)(pIVar11 + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend(pIVar11);
    }
    *(ulong **)pIVar12 = puVar7 + 1;
LAB_014fe470:
    *puVar7 = uVar9;
  }
  else {
    if (uVar3 < 0xa9) {
      if (TracingFlags::runtime_stats != 0) {
        RuntimeCallStats::CorrectCurrentCounterId
                  ((RuntimeCallStats *)(*(long *)(*(long *)(this + 8) + 0x9520) + 0x58a0),0x3fd,0);
      }
      pIVar12 = *(Isolate **)(this + 8);
      pCVar5 = *(CanonicalHandleScope **)(pIVar12 + 0x95b8);
      if (pCVar5 != (CanonicalHandleScope *)0x0) goto LAB_014fe264;
      pIVar11 = pIVar12 + 0x95a0;
      puVar6 = *(undefined8 **)pIVar11;
      if (puVar6 == *(undefined8 **)(pIVar12 + 0x95a8)) {
        puVar6 = (undefined8 *)HandleScope::Extend(pIVar12);
      }
      uVar14 = 0x16;
    }
    else {
      if (uVar3 != 0xa9) {
        bVar4 = *(byte *)(*param_2 + 10) >> 3;
        if ((byte)(bVar4 - 0xd) < 2) {
          if (TracingFlags::runtime_stats != 0) {
            RuntimeCallStats::CorrectCurrentCounterId
                      ((RuntimeCallStats *)(*(long *)(*(long *)(this + 8) + 0x9520) + 0x58a0),0x3f9,
                       0);
          }
          this_00 = (Builtins *)(*(long *)(this + 8) + 0x9e00);
          if (*(int *)(this + 0x1c) == 9) {
            iVar8 = 0x8b;
          }
          else {
            iVar8 = 0x7c;
          }
LAB_014fe2bc:
          Builtins::builtin_handle(this_00,iVar8);
          return;
        }
        if ((bVar4 == 1) || (bVar4 == 3)) {
          uVar10 = FUN_014fe744(*(undefined8 *)(this + 8));
          uVar9 = 0x200;
          if ((uVar10 & 1) == 0) {
            uVar9 = 0;
          }
LAB_014fe40c:
          if (TracingFlags::runtime_stats != 0) {
            RuntimeCallStats::CorrectCurrentCounterId
                      ((RuntimeCallStats *)(*(long *)(*(long *)(this + 8) + 0x9520) + 0x58a0),0x3fa,
                       0);
          }
          pIVar12 = *(Isolate **)(this + 8);
          pCVar5 = *(CanonicalHandleScope **)(pIVar12 + 0x95b8);
          uVar9 = (ulong)(param_3 == 1) << 7 | (ulong)(uVar3 == 0x423) << 8 | (ulong)bVar4 << 10 |
                  uVar9;
        }
        else {
          if (bVar4 != 0xc) {
            uVar9 = 0;
            goto LAB_014fe40c;
          }
          if (TracingFlags::runtime_stats != 0) {
            RuntimeCallStats::CorrectCurrentCounterId
                      ((RuntimeCallStats *)(*(long *)(*(long *)(this + 8) + 0x9520) + 0x58a0),0x3fa,
                       0);
          }
          pIVar12 = *(Isolate **)(this + 8);
          pCVar5 = *(CanonicalHandleScope **)(pIVar12 + 0x95b8);
          uVar9 = (ulong)(param_3 == 1) << 7 | (ulong)(uVar3 == 0x423) << 8 | 0x3000;
        }
        if (pCVar5 != (CanonicalHandleScope *)0x0) {
LAB_014fe288:
          CanonicalHandleScope::Lookup(pCVar5,uVar9);
          return;
        }
        puVar7 = *(ulong **)(pIVar12 + 0x95a0);
        if (puVar7 == *(ulong **)(pIVar12 + 0x95a8)) {
          puVar7 = (ulong *)HandleScope::Extend(pIVar12);
        }
        *(ulong **)(pIVar12 + 0x95a0) = puVar7 + 1;
        goto LAB_014fe470;
      }
      pIVar12 = *(Isolate **)(this + 8);
      if (*(CanonicalHandleScope **)(pIVar12 + 0x95b8) != (CanonicalHandleScope *)0x0) {
        CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(pIVar12 + 0x95b8),0x18);
        return;
      }
      pIVar11 = pIVar12 + 0x95a0;
      puVar6 = *(undefined8 **)pIVar11;
      if (puVar6 == *(undefined8 **)(pIVar12 + 0x95a8)) {
        puVar6 = (undefined8 *)HandleScope::Extend(pIVar12);
      }
      uVar14 = 0x18;
    }
    *(undefined8 **)pIVar11 = puVar6 + 1;
    *puVar6 = uVar14;
  }
  return;
}

