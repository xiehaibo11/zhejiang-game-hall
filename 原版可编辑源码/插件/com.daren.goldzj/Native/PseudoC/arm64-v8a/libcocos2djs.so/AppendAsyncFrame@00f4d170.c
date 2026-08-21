
/* v8::internal::FrameArrayBuilder::AppendAsyncFrame(v8::internal::Handle<v8::internal::JSGeneratorObject>)
    */

void __thiscall
v8::internal::FrameArrayBuilder::AppendAsyncFrame(FrameArrayBuilder *this,ulong *param_2)

{
  long lVar1;
  int iVar2;
  ushort uVar3;
  Isolate *pIVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  Factory *pFVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  
  if (*(int *)(**(long **)(this + 0x20) + 7) >> 1 < *(int *)(this + 0xc)) {
    pIVar4 = *(Isolate **)this;
    uVar13 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb);
    if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)(pIVar4 + 0x95a0);
      if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(pIVar4);
      }
      *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
      *puVar5 = uVar13;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar13);
    }
    uVar13 = IsVisibleInStackTrace(this,puVar5);
    if ((uVar13 & 1) != 0) {
      if ((this[0x19] == (FrameArrayBuilder)0x0) &&
         (uVar10 = *(uint *)((*puVar5 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar5 + 0xb)) + 0x1b
                            ), this[0x19] = (FrameArrayBuilder)((byte)(uVar10 >> 6) & 1),
         (uVar10 >> 6 & 1) == 0)) {
        uVar14 = 0x40;
      }
      else {
        uVar14 = 0x48;
      }
      pIVar4 = *(Isolate **)this;
      uVar13 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x13);
      if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar6 = *(ulong **)(pIVar4 + 0x95a0);
        if (puVar6 == *(ulong **)(pIVar4 + 0x95a8)) {
          puVar6 = (ulong *)HandleScope::Extend(pIVar4);
        }
        *(ulong **)(pIVar4 + 0x95a0) = puVar6 + 1;
        *puVar6 = uVar13;
      }
      else {
        puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar13);
      }
      uVar9 = *puVar5 & 0xffffffff00000000;
      uVar13 = uVar9 | *(uint *)(*puVar5 + 0xb);
      uVar12 = uVar9 | *(uint *)(uVar13 + 0xf);
      uVar11 = uVar9 | 7;
      if ((*(short *)(uVar11 + *(uint *)(uVar12 - 1)) == 0x5b) &&
         (*(short *)(uVar11 + *(uint *)((uVar9 | *(uint *)(uVar12 + 0x13)) - 1)) == 0x86)) {
        uVar10 = *(uint *)(uVar12 + 0xf);
      }
      else {
        uVar10 = *(uint *)(uVar13 + 3);
        if (((uVar10 & 1) == 0) || (*(short *)(uVar11 + *(uint *)((uVar9 | uVar10) - 1)) != 0x86)) {
          uVar10 = *(uint *)((uVar9 | *(uint *)(uVar13 + 3)) + 3);
        }
        else {
          uVar10 = *(uint *)(uVar13 + 3);
        }
      }
      pIVar4 = *(Isolate **)this;
      if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar7 = *(ulong **)(pIVar4 + 0x95a0);
        if (puVar7 == *(ulong **)(pIVar4 + 0x95a8)) {
          puVar7 = (ulong *)HandleScope::Extend(pIVar4);
        }
        *(ulong **)(pIVar4 + 0x95a0) = puVar7 + 1;
        *puVar7 = uVar9 | uVar10;
      }
      else {
        puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar9 | uVar10);
      }
      iVar2 = *(int *)(*param_2 + 0x17);
      if (FLAG_detailed_error_stack_trace == '\0') {
        pFVar8 = *(Factory **)this + 0x168;
      }
      else {
        uVar3 = *(ushort *)((*puVar5 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar5 + 0xb)) + 0x15)
        ;
        pFVar8 = (Factory *)Factory::NewFixedArray(*(Factory **)this,(ulong)uVar3,0);
        if (uVar3 != 0) {
          lVar15 = 0;
          do {
            uVar9 = *(ulong *)pFVar8;
            uVar13 = *param_2 & 0xffffffff00000000;
            uVar10 = *(uint *)(lVar15 + (uVar13 | *(uint *)(*param_2 + 0x23)) + 7);
            *(uint *)(lVar15 + uVar9 + 7) = uVar10;
            if ((uVar10 & 1) != 0) {
              uVar12 = uVar13 | uVar10;
              uVar13 = uVar13 | (ulong)uVar10 & 0xfffffffffffc0000;
              uVar11 = *(ulong *)(uVar13 + 8);
              lVar1 = lVar15 + uVar9 + 7;
              if (((uint)uVar11 >> 0x12 & 1) != 0) {
                Heap_MarkingBarrierSlow(uVar9,lVar1,uVar12);
                uVar11 = *(ulong *)(uVar13 | 8);
              }
              if (((uVar11 & 0x18) != 0) &&
                 ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                Heap_GenerationalBarrierSlow(uVar9,lVar1,uVar12);
              }
            }
            lVar15 = lVar15 + 4;
          } while ((ulong)uVar3 << 2 != lVar15);
        }
      }
      uVar14 = FrameArray::AppendJSFrame
                         (*(undefined8 *)(this + 0x20),puVar6,puVar5,puVar7,(iVar2 >> 1) + -0x21,
                          uVar14,pFVar8);
      *(undefined8 *)(this + 0x20) = uVar14;
    }
  }
  return;
}

