
/* v8::internal::wasm::CreateWasmScript(v8::internal::Isolate*, v8::internal::wasm::ModuleWireBytes
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, v8::internal::wasm::WireBytesRef) */

ulong * v8::internal::wasm::CreateWasmScript
                  (Isolate *param_1,undefined8 *param_2,byte *param_3,undefined8 param_4)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  byte **__s;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  byte **local_98;
  size_t sStack_90;
  byte *local_88;
  undefined8 uStack_80;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  puVar5 = (ulong *)Factory::NewScript(param_1,param_1 + 200);
  uVar12 = *puVar5;
  uVar10 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  uVar10 = uVar10 | *(uint *)((uVar10 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(param_1 + 0x95a0);
    if (puVar6 == *(ulong **)(param_1 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar10;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar10);
    uVar10 = *puVar6;
  }
  uVar3 = *(uint *)(uVar10 + 0xab);
  *(uint *)(uVar12 + 0x13) = uVar3;
  if ((uVar3 & 1) != 0) {
    uVar13 = uVar10 & 0xffffffff00000000 | (ulong)uVar3;
    uVar11 = uVar10 & 0xffffffff00000000 | (ulong)uVar3 & 0xfffffffffffc0000;
    uVar10 = *(ulong *)(uVar11 + 8);
    if (((uint)uVar10 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar12,uVar12 + 0x13,uVar13);
      uVar10 = *(ulong *)(uVar11 | 8);
    }
    if (((uVar10 & 0x18) != 0) && ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar12,uVar12 + 0x13,uVar13);
    }
  }
  *(undefined4 *)(*puVar5 + 0x17) = 6;
  uVar3 = StringHasher::HashSequentialString<char>((char *)*param_2,*(int *)(param_2 + 1),0);
  local_88 = &BYTE_01a54440;
  uStack_80 = 0xc;
  uVar7 = Factory::InternalizeString<unsigned_char>((Factory *)param_1,(Vector *)&local_88,false);
  local_98 = &local_88;
  if ((int)param_4 == 0) {
    iVar4 = SNPrintF(&local_88,0x20,"%08x",uVar3);
    sStack_90 = (size_t)iVar4;
    puVar6 = (ulong *)Factory::NewStringFromOneByte(param_1,&local_98,1);
  }
  else {
    iVar4 = SNPrintF(&local_88,0x20,&BYTE_01a5444d,uVar3);
    sStack_90 = (size_t)iVar4;
    lVar8 = Factory::NewStringFromOneByte(param_1,&local_98,1);
    if ((lVar8 == 0) ||
       (lVar9 = WasmModuleObject::ExtractUtf8StringFromModuleBytes
                          ((WasmModuleObject *)param_1,*param_2,param_2[1],param_4), lVar9 == 0))
    goto LAB_015e2f8c;
    puVar6 = (ulong *)Factory::NewConsString((Factory *)param_1,lVar9,lVar8);
  }
  if (puVar6 != (ulong *)0x0) {
    uVar12 = *puVar5;
    uVar10 = *puVar6;
    *(int *)(uVar12 + 7) = (int)uVar10;
    if ((uVar10 & 1) != 0) {
      uVar11 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar11 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar12,uVar12 + 7,uVar10);
        uVar11 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar11 & 0x18) != 0) && ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar12,uVar12 + 7,uVar10);
      }
    }
    puVar6 = (ulong *)Factory::NewConsString((Factory *)param_1,uVar7,puVar6);
    if (puVar6 != (ulong *)0x0) {
      uVar10 = *puVar5;
      uVar12 = *puVar6;
      *(int *)(uVar10 + 0x33) = (int)uVar12;
      if ((uVar12 & 1) != 0) {
        uVar11 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar11 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar10,uVar10 + 0x33,uVar12);
          uVar11 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar11 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar10,uVar10 + 0x33,uVar12);
        }
      }
      bVar2 = (*param_3 & 1) != 0;
      uVar10 = (ulong)(*param_3 >> 1);
      if (bVar2) {
        uVar10 = *(ulong *)(param_3 + 8);
      }
      if (uVar10 != 0) {
        __s = *(byte ***)(param_3 + 0x10);
        if (!bVar2) {
          __s = (byte **)(param_3 + 1);
        }
        sStack_90 = strlen((char *)__s);
        local_98 = __s;
        puVar6 = (ulong *)Factory::NewStringFromUtf8((Factory *)param_1,&local_98,1);
        if (puVar6 == (ulong *)0x0) goto LAB_015e2f8c;
        uVar10 = *puVar5;
        uVar12 = *puVar6;
        *(int *)(uVar10 + 0x37) = (int)uVar12;
        if ((uVar12 & 1) != 0) {
          uVar11 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar11 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar10,uVar10 + 0x37,uVar12);
            uVar11 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar11 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            Heap_GenerationalBarrierSlow(uVar10,uVar10 + 0x37,uVar12);
          }
        }
      }
      if (*(long *)(lVar1 + 0x28) == local_68) {
        return puVar5;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
LAB_015e2f8c:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(location_) != nullptr");
}

