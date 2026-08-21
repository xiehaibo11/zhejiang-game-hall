
/* v8::internal::ScannerStream::For(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::String>, int, int) */

undefined8 *
v8::internal::ScannerStream::For(Isolate *param_1,ulong *param_2,int param_3,int param_4)

{
  ulong *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar7 = *param_2;
  uVar5 = uVar7 & 0xffffffff00000000;
  uVar6 = uVar5 | 7;
  if ((*(ushort *)(uVar6 + *(uint *)(uVar7 - 1)) < 0x40) &&
     ((*(ushort *)(uVar6 + *(uint *)(uVar7 - 1)) & 7) == 3)) {
    uVar8 = uVar5 | *(uint *)(uVar7 + 0xb);
    lVar9 = (long)((ulong)*(uint *)(uVar7 + 0xf) << 0x20) >> 0x21;
    if ((*(ushort *)(uVar6 + *(uint *)(uVar8 - 1)) < 0x40) &&
       ((*(ushort *)(uVar6 + *(uint *)(uVar8 - 1)) & 7) == 5)) {
      uVar8 = uVar5 | *(uint *)(uVar8 + 0xb);
    }
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar1 = *(ulong **)(param_1 + 0x95a0);
      if (puVar1 == *(ulong **)(param_1 + 0x95a8)) {
        puVar1 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar1 + 1;
      *puVar1 = uVar8;
    }
    else {
      puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar8);
    }
  }
  else {
    puVar1 = (ulong *)String::Flatten(param_1,param_2,0);
    lVar9 = 0;
  }
  uVar5 = *puVar1;
  uVar6 = uVar5 & 0xffffffff00000000 | 7;
  if (((*(ushort *)(uVar6 + *(uint *)(uVar5 - 1)) < 0x40) &&
      ((*(ushort *)(uVar6 + *(uint *)(uVar5 - 1)) & 7) == 2)) &&
     ((*(byte *)(uVar6 + *(uint *)(uVar5 - 1)) >> 3 & 1) != 0)) {
    puVar2 = operator_new(0x450);
    uVar5 = *puVar1;
    *(undefined1 *)(puVar2 + 6) = 0;
    puVar2[4] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[1] = 0;
    *puVar2 = &PTR__BufferedCharacterStream_01cb55c0;
    plVar3 = *(long **)(uVar5 + 0xb);
    puVar2[0x87] = plVar3;
    (**(code **)(*plVar3 + 0x20))();
    lVar4 = (**(code **)(**(long **)(uVar5 + 0xb) + 0x30))();
    puVar2[0x89] = (long)param_4;
    puVar2[0x88] = lVar4 + lVar9;
    puVar2[4] = (long)param_3;
  }
  else if (((*(ushort *)(uVar6 + *(uint *)(uVar5 - 1)) < 0x40) &&
           ((*(ushort *)(uVar6 + *(uint *)(uVar5 - 1)) & 7) == 2)) &&
          ((*(byte *)(uVar6 + *(uint *)(uVar5 - 1)) >> 3 & 1) == 0)) {
    puVar2 = operator_new(0x50);
    uVar5 = *puVar1;
    *(undefined1 *)(puVar2 + 6) = 0;
    puVar2[4] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[1] = 0;
    *puVar2 = &PTR__UnbufferedCharacterStream_01cb5600;
    plVar3 = *(long **)(uVar5 + 0xb);
    puVar2[7] = plVar3;
    (**(code **)(*plVar3 + 0x20))();
    lVar4 = (**(code **)(**(long **)(uVar5 + 0xb) + 0x30))();
    puVar2[8] = lVar4 + lVar9 * 2;
    puVar2[9] = (long)param_4;
    puVar2[4] = (long)param_3;
  }
  else if (((*(ushort *)(uVar6 + *(uint *)(uVar5 - 1)) < 0x40) &&
           ((*(byte *)(uVar6 + *(uint *)(uVar5 - 1)) & 7) == 0)) &&
          ((*(byte *)(uVar6 + *(uint *)(uVar5 - 1)) >> 3 & 1) != 0)) {
    puVar2 = operator_new(0x450);
    *(undefined1 *)(puVar2 + 6) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[0x87] = puVar1;
    puVar2[0x88] = lVar9;
    puVar2[0x89] = (long)param_4;
    *puVar2 = &PTR__Utf16CharacterStream_01cb5640;
    puVar2[1] = 0;
    puVar2[4] = (long)param_3;
  }
  else {
    if (((0x3f < *(ushort *)(uVar6 + *(uint *)(uVar5 - 1))) ||
        ((*(byte *)(uVar6 + *(uint *)(uVar5 - 1)) & 7) != 0)) ||
       ((*(byte *)(uVar6 + *(uint *)(uVar5 - 1)) >> 3 & 1) != 0)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    puVar2 = operator_new(0x58);
    *(undefined1 *)(puVar2 + 6) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[7] = puVar1;
    puVar2[8] = lVar9;
    puVar2[4] = (long)param_3;
    puVar2[9] = (long)param_4;
    puVar2[10] = param_1;
    *puVar2 = &PTR__RelocatingCharacterStream_01cb5680;
    puVar2[1] = 0;
    Heap::AddGCEpilogueCallback
              ((Heap *)(param_1 + 0x8850),RelocatingCharacterStream::UpdateBufferPointersCallback,
               0xf,puVar2);
  }
  return puVar2;
}

