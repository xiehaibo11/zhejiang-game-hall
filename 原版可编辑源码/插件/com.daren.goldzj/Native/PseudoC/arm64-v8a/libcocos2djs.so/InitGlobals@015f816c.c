
/* v8::internal::wasm::InstanceBuilder::InitGlobals(v8::internal::Handle<v8::internal::WasmInstanceObject>)
    */

void __thiscall
v8::internal::wasm::InstanceBuilder::InitGlobals(InstanceBuilder *this,undefined8 param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  size_t __n;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  ulong *puVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined4 *puVar14;
  
  puVar14 = *(undefined4 **)(*(long *)(this + 0x10) + 0x18);
  puVar3 = *(undefined4 **)(*(long *)(this + 0x10) + 0x20);
  if (puVar14 != puVar3) {
    puVar14 = puVar14 + 2;
    do {
      puVar1 = puVar14 + 2;
      iVar4 = puVar14[4];
      lVar12 = (long)iVar4;
      if ((*(char *)((long)puVar14 + -7) == '\0') || (*(char *)(puVar14 + 5) == '\0')) {
        switch(*puVar14) {
        case 0:
          break;
        case 1:
          iVar5 = *(int *)(*(long *)(*(long *)(this + 0x10) + 0x18) + (ulong)*puVar1 * 0x20 + 0x18);
          uVar7 = (uint)*(byte *)(puVar14 + -2);
          if ((*(byte *)(puVar14 + -2) < 10) && ((1 << (ulong)(uVar7 & 0x1f) & 0x2c0U) != 0)) {
            uVar10 = **(ulong **)(this + 0x48);
            uVar7 = *(uint *)(uVar10 + 7 + (long)(iVar5 << 2));
            puVar1 = (uint *)(uVar10 + 7 + (long)(iVar4 << 2));
            *puVar1 = uVar7;
            if ((uVar7 & 1) != 0) {
              uVar13 = uVar10 & 0xffffffff00000000 | (ulong)uVar7;
              uVar8 = uVar10 & 0xffffffff00000000 | (ulong)uVar7 & 0xfffffffffffc0000;
              uVar11 = *(ulong *)(uVar8 + 8);
              if (((uint)uVar11 >> 0x12 & 1) != 0) {
                Heap_MarkingBarrierSlow(uVar10,puVar1,uVar13);
                uVar11 = *(ulong *)(uVar8 | 8);
              }
              if (((uVar11 & 0x18) != 0) &&
                 ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                Heap_GenerationalBarrierSlow(uVar10,puVar1,uVar13);
              }
            }
          }
          else {
            if (*(long **)(this + 0x40) == (long *)0x0) goto LAB_015f8404;
            lVar9 = *(long *)(**(long **)(this + 0x40) + 0x13);
            __n = 8;
            if (uVar7 != 4 && uVar7 != 2) {
              __n = 4;
            }
            memcpy((void *)(lVar9 + lVar12),(void *)(lVar9 + iVar5),__n);
          }
          break;
        case 2:
        case 4:
          if (*(long **)(this + 0x40) == (long *)0x0) {
LAB_015f8404:
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","(location_) != nullptr");
          }
          *(uint *)(*(long *)(**(long **)(this + 0x40) + 0x13) + lVar12) = *puVar1;
          break;
        case 3:
          if (*(long **)(this + 0x40) == (long *)0x0) goto LAB_015f8404;
          *(undefined8 *)(*(long *)(**(long **)(this + 0x40) + 0x13) + lVar12) =
               *(undefined8 *)puVar1;
          break;
        case 5:
          if (*(long **)(this + 0x40) == (long *)0x0) goto LAB_015f8404;
          *(undefined8 *)(*(long *)(**(long **)(this + 0x40) + 0x13) + lVar12) =
               *(undefined8 *)puVar1;
          break;
        case 6:
          if (*(char *)(puVar14 + 5) == '\0') {
            *(undefined4 *)(**(long **)(this + 0x48) + (long)(iVar4 << 2) + 7) =
                 *(undefined4 *)(*(long *)this + 0xb0);
          }
          break;
        case 7:
          puVar6 = (ulong *)WasmInstanceObject::GetOrCreateWasmExternalFunction
                                      (*(undefined8 *)this,param_2);
          uVar10 = *puVar6;
          uVar11 = **(ulong **)(this + 0x48);
          lVar12 = uVar11 + (long)(iVar4 << 2);
          *(int *)(lVar12 + 7) = (int)uVar10;
          if ((uVar10 & 1) != 0) {
            uVar8 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
            lVar12 = lVar12 + 7;
            if (((uint)uVar8 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(uVar11,lVar12,uVar10);
              uVar8 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar8 & 0x18) != 0) &&
               ((*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              Heap_GenerationalBarrierSlow(uVar11,lVar12,uVar10);
            }
          }
          break;
        default:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
      }
      puVar2 = puVar14 + 6;
      puVar14 = puVar14 + 8;
    } while (puVar2 != puVar3);
  }
  return;
}

