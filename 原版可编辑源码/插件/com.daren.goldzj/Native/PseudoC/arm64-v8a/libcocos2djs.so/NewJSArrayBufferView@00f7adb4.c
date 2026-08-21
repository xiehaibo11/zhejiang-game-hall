
/* v8::internal::Factory::NewJSArrayBufferView(v8::internal::Handle<v8::internal::Map>,
   v8::internal::Handle<v8::internal::FixedArrayBase>,
   v8::internal::Handle<v8::internal::JSArrayBuffer>, unsigned long, unsigned long) */

ulong * __thiscall
v8::internal::Factory::NewJSArrayBufferView
          (Factory *this,long *param_2,ulong *param_3,ulong *param_4,ulong param_5,ulong param_6)

{
  undefined4 *puVar1;
  long lVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  
  uVar9 = *(ulong *)(*param_4 + 0xb);
  if (uVar9 < param_6) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","byte_length <= buffer->byte_length()");
  }
  if (param_5 <= uVar9) {
    if (param_6 + param_5 <= uVar9) {
      lVar10 = *(long *)(this + 0x8938);
      lVar2 = *(long *)(lVar10 + 0x68);
      uVar9 = (ulong)*(byte *)(*param_2 + 3) * 4;
      if ((((ulong)(*(long *)(lVar10 + 0x70) - lVar2) < uVar9) || (FLAG_inline_new == '\0')) ||
         (FLAG_gc_interval != 0)) {
        uVar7 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),uVar9,0,1,0);
      }
      else {
        uVar7 = lVar2 + 1;
        *(ulong *)(lVar10 + 0x68) = lVar2 + uVar9;
        Heap::CreateFillerObjectAt((Heap *)(this + 0x8850),lVar2,uVar9,1,1);
      }
      *(int *)(uVar7 - 1) = (int)*param_2;
      if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar8 = *(ulong **)(this + 0x95a0);
        if (puVar8 == *(ulong **)(this + 0x95a8)) {
          puVar8 = (ulong *)HandleScope::Extend((Isolate *)this);
        }
        *(ulong **)(this + 0x95a0) = puVar8 + 1;
        *puVar8 = uVar7;
      }
      else {
        puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(this + 0x95b8),uVar7);
      }
      InitializeJSObjectFromMap(this,puVar8,this + 0x168,param_2);
      uVar7 = *puVar8;
      uVar9 = *param_3;
      *(int *)(uVar7 + 7) = (int)uVar9;
      if ((uVar9 & 1) != 0) {
        uVar11 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar11 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar7,uVar7 + 7,uVar9);
          uVar11 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar11 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar7,uVar7 + 7,uVar9);
        }
      }
      uVar7 = *puVar8;
      uVar9 = *param_4;
      *(int *)(uVar7 + 0xb) = (int)uVar9;
      if ((uVar9 & 1) != 0) {
        uVar11 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar11 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar7,uVar7 + 0xb,uVar9);
          uVar11 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar11 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar7,uVar7 + 0xb,uVar9);
        }
      }
      *(ulong *)(*puVar8 + 0xf) = param_5;
      *(ulong *)(*puVar8 + 0x17) = param_6;
      uVar9 = *puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar8 - 1);
      bVar3 = *(byte *)(uVar9 + 3);
      if (bVar3 != 0) {
        if (*(short *)(uVar9 + 7) == 0x421) {
          iVar5 = 0xc;
        }
        else {
          iVar5 = JSObject::GetHeaderSize(*(short *)(uVar9 + 7),*(char *)(uVar9 + 9) < '\0');
        }
        iVar5 = (((int)((uint)bVar3 * 4 - iVar5) >> 2) - (uint)*(byte *)(uVar9 + 3)) +
                (uint)*(byte *)(uVar9 + 4);
        iVar12 = iVar5;
        if (iVar5 < 0) {
          iVar12 = iVar5 + 1;
        }
        if (1 < iVar5) {
          iVar5 = 0;
          iVar12 = iVar12 >> 1;
          do {
            uVar7 = *puVar8;
            uVar9 = uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 - 1);
            sVar4 = *(short *)(uVar9 + 7);
            if (sVar4 == 0x421) {
              iVar6 = 0xc;
            }
            else {
              iVar6 = JSObject::GetHeaderSize(sVar4,*(char *)(uVar9 + 9) < '\0');
            }
            iVar12 = iVar12 + -1;
            puVar1 = (undefined4 *)((uVar7 - 1) + (long)(iVar6 + iVar5));
            iVar5 = iVar5 + 8;
            *puVar1 = 0;
            puVar1[1] = 0;
          } while (iVar12 != 0);
        }
      }
      return puVar8;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","byte_offset + byte_length <= buffer->byte_length()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","byte_offset <= buffer->byte_length()");
}

