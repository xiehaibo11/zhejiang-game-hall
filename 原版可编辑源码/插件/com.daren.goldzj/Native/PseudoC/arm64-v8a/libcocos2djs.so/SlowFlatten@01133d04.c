
/* v8::internal::String::SlowFlatten(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::ConsString>, v8::internal::AllocationType) */

ulong * v8::internal::String::SlowFlatten(Isolate *param_1,ulong *param_2,undefined4 param_3)

{
  Isolate *pIVar1;
  undefined4 uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = *param_2;
  uVar4 = uVar6 & 0xffffffff00000000;
  if (*(int *)((uVar4 | *(uint *)(uVar6 + 0xb)) + 7) == 0) {
    pIVar1 = param_1 + 0x95a0;
    do {
      uVar6 = uVar4 | *(uint *)(uVar6 + 0xf);
      if ((((0x3f < *(ushort *)((uVar4 | 7) + (ulong)*(uint *)(uVar6 - 1))) ||
           ((*(ushort *)((uVar4 | 7) + (ulong)*(uint *)(uVar6 - 1)) & 7) != 1)) ||
          ((*(ushort *)((uVar4 | *(uint *)(uVar6 - 1)) + 7) & 7) != 1)) ||
         (*(int *)((uVar4 | *(uint *)(uVar6 + 0xf)) + 7) == 0)) {
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar3 = *(ulong **)pIVar1;
          if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
            puVar3 = (ulong *)HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar1 = puVar3 + 1;
          *puVar3 = uVar6;
        }
        else {
          puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar6);
        }
        puVar3 = (ulong *)Flatten(param_1,puVar3,0);
        return puVar3;
      }
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        param_2 = *(ulong **)pIVar1;
        if (param_2 == *(ulong **)(param_1 + 0x95a8)) {
          param_2 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = param_2 + 1;
        *param_2 = uVar6;
      }
      else {
        param_2 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar6);
      }
      uVar6 = *param_2;
      uVar4 = uVar6 & 0xffffffff00000000;
    } while (*(int *)((uVar4 | *(uint *)(uVar6 + 0xb)) + 7) == 0);
  }
  uVar2 = *(undefined4 *)(uVar6 + 7);
  if ((uVar6 & 1) == 0) {
    param_3 = 1;
  }
  else if ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0) {
    param_3 = 1;
  }
  if ((*(byte *)((uVar4 | 7) + (ulong)*(uint *)(uVar6 - 1)) >> 3 & 1) == 0) {
    puVar3 = (ulong *)Factory::NewRawTwoByteString((Factory *)param_1,uVar2);
    if (puVar3 == (ulong *)0x0) {
LAB_01133fbc:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    WriteToFlat<unsigned_short>(*param_2,*puVar3 + 0xb,0,uVar2);
  }
  else {
    puVar3 = (ulong *)Factory::NewRawOneByteString((Factory *)param_1,uVar2,param_3);
    if (puVar3 == (ulong *)0x0) goto LAB_01133fbc;
    WriteToFlat<unsigned_char>(*param_2,*puVar3 + 0xb,0,uVar2);
  }
  uVar6 = *param_2;
  uVar4 = *puVar3;
  *(int *)(uVar6 + 0xb) = (int)uVar4;
  if ((uVar4 & 1) != 0) {
    uVar5 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar6,uVar6 + 0xb,uVar4);
      uVar5 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar6,uVar6 + 0xb,uVar4);
    }
  }
  uVar6 = *param_2;
  uVar4 = *(ulong *)(param_1 + 200);
  *(int *)(uVar6 + 0xf) = (int)uVar4;
  if ((uVar4 & 1) != 0) {
    uVar5 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar6,uVar6 + 0xf,uVar4);
      uVar5 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar6,uVar6 + 0xf,uVar4);
    }
  }
  return puVar3;
}

