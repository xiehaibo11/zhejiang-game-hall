
/* v8::internal::wasm::InstanceBuilder::LoadDataSegments(v8::internal::Handle<v8::internal::WasmInstanceObject>)
    */

void __thiscall
v8::internal::wasm::InstanceBuilder::LoadDataSegments(InstanceBuilder *this,ulong *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint *puVar6;
  int *piVar7;
  long lVar8;
  ulong local_48;
  
  piVar7 = *(int **)(*(long *)(this + 0x10) + 0xa0);
  piVar1 = *(int **)(*(long *)(this + 0x10) + 0xa8);
  if (piVar7 != piVar1) {
    lVar8 = **(long **)(**(long **)(*(long *)((**(ulong **)(this + 0x20) & 0xffffffff00000000 |
                                              (ulong)*(uint *)(**(ulong **)(this + 0x20) + 0xb)) + 3
                                             ) + 0x18) + 0xe0);
    do {
      uVar2 = piVar7[5];
      if (((byte)this[9] >> 1 & 1) == 0) {
        if (uVar2 != 0) {
          if (*piVar7 == 1) {
            local_48 = *param_2;
            lVar4 = WasmInstanceObject::module((WasmInstanceObject *)&local_48);
            uVar5 = *param_2;
            puVar6 = (uint *)(*(long *)((uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 0x7f)
                                        ) + 0x13) +
                             (ulong)*(uint *)(*(long *)(lVar4 + 0x18) +
                                              (ulong)(uint)piVar7[2] * 0x20 + 0x18));
          }
          else {
            if (*piVar7 != 2) {
LAB_015f93a4:
                    /* WARNING: Subroutine does not return */
              V8_Fatal("unreachable code");
            }
            uVar5 = *param_2;
            puVar6 = (uint *)(piVar7 + 2);
          }
          memcpy((void *)(*(long *)(uVar5 + 0xb) + (ulong)*puVar6),
                 (void *)(lVar8 + (ulong)(uint)piVar7[4]),(ulong)uVar2);
        }
      }
      else if ((char)piVar7[6] != '\0') {
        if (*piVar7 == 1) {
          local_48 = *param_2;
          lVar4 = WasmInstanceObject::module((WasmInstanceObject *)&local_48);
          uVar5 = *param_2;
          puVar6 = (uint *)(*(long *)((uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 0x7f))
                                     + 0x13) +
                           (ulong)*(uint *)(*(long *)(lVar4 + 0x18) + (ulong)(uint)piVar7[2] * 0x20
                                           + 0x18));
        }
        else {
          if (*piVar7 != 2) goto LAB_015f93a4;
          uVar5 = *param_2;
          puVar6 = (uint *)(piVar7 + 2);
        }
        uVar3 = *puVar6;
        if ((*(uint *)(uVar5 + 0x13) < uVar3) || (*(uint *)(uVar5 + 0x13) - uVar3 < uVar2)) {
          ErrorThrower::RuntimeError(*(char **)(this + 0x18),"data segment is out of bounds");
          return;
        }
        if (uVar2 != 0) {
          memory_copy_wrapper(*(long *)(uVar5 + 0xb) + (ulong)uVar3,lVar8 + (ulong)(uint)piVar7[4],
                              uVar2);
        }
      }
      piVar7 = piVar7 + 8;
    } while (piVar1 != piVar7);
  }
  return;
}

