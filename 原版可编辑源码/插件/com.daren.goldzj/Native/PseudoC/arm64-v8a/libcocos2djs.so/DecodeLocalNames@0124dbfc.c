
/* v8::internal::wasm::DecodeLocalNames(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::WasmModuleObject>) */

ulong * v8::internal::wasm::DecodeLocalNames(Factory *param_1,ulong *param_2)

{
  long lVar1;
  int *piVar2;
  uchar *puVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  void *pvVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  int local_80 [2];
  int *local_78;
  int *local_70;
  undefined8 local_68;
  
  puVar11 = *(undefined8 **)
             (**(long **)(*(long *)((*param_2 & 0xffffffff00000000 |
                                    (ulong)*(uint *)(*param_2 + 0xb)) + 3) + 0x18) + 0xe0);
  puVar3 = (uchar *)*puVar11;
  local_80[0] = -1;
  local_78 = (int *)0x0;
  local_70 = (int *)0x0;
  local_68 = 0;
  DecodeLocalNames(puVar3,puVar3 + puVar11[1],(LocalNames *)local_80);
  puVar7 = (ulong *)Factory::NewFixedArray(param_1,local_80[0] + 1,0);
  piVar6 = local_70;
  piVar2 = local_78;
  piVar4 = local_78;
  do {
    local_78 = piVar4;
    if (piVar2 == piVar6) {
      piVar2 = local_70;
      if (piVar4 != (int *)0x0) {
        while (piVar6 = piVar2, piVar6 != piVar4) {
          pvVar10 = *(void **)(piVar6 + -6);
          piVar2 = piVar6 + -8;
          if (pvVar10 != (void *)0x0) {
            *(void **)(piVar6 + -4) = pvVar10;
            operator_delete(pvVar10);
          }
        }
        local_70 = piVar4;
        operator_delete(local_78);
      }
      return puVar7;
    }
    puVar8 = (ulong *)Factory::NewFixedArray(param_1,piVar2[1] + 1,0);
    uVar13 = *puVar8;
    uVar14 = *puVar7;
    lVar1 = uVar14 + (long)(*piVar2 << 2);
    *(int *)(lVar1 + 7) = (int)uVar13;
    if ((uVar13 & 1) != 0) {
      uVar12 = *(ulong *)((uVar13 & 0xfffffffffffc0000) + 8);
      lVar1 = lVar1 + 7;
      if (((uint)uVar12 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar14,lVar1,uVar13);
        uVar12 = *(ulong *)(uVar13 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar14,lVar1,uVar13);
      }
    }
    piVar5 = *(int **)(piVar2 + 4);
    for (piVar4 = *(int **)(piVar2 + 2); piVar4 != piVar5; piVar4 = piVar4 + 3) {
      puVar9 = (ulong *)WasmModuleObject::ExtractUtf8StringFromModuleBytes
                                  (param_1,param_2,*(undefined8 *)(piVar4 + 1));
      if (puVar9 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","(location_) != nullptr");
      }
      uVar14 = *puVar8;
      uVar13 = *puVar9;
      lVar1 = uVar14 + (long)(*piVar4 << 2);
      *(int *)(lVar1 + 7) = (int)uVar13;
      if ((uVar13 & 1) != 0) {
        uVar12 = *(ulong *)((uVar13 & 0xfffffffffffc0000) + 8);
        lVar1 = lVar1 + 7;
        if (((uint)uVar12 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar14,lVar1,uVar13);
          uVar12 = *(ulong *)(uVar13 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar14,lVar1,uVar13);
        }
      }
    }
    piVar2 = piVar2 + 8;
    piVar4 = local_78;
  } while( true );
}

