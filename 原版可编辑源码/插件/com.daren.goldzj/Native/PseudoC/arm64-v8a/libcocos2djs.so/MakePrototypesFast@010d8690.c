
/* v8::internal::JSObject::MakePrototypesFast(v8::internal::Handle<v8::internal::Object>,
   v8::internal::WhereToStart, v8::internal::Isolate*) */

void v8::internal::JSObject::MakePrototypesFast(ulong *param_1,int param_2,Isolate *param_3)

{
  long lVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  Isolate *local_70;
  undefined8 uStack_68;
  ulong *local_60;
  undefined4 local_58;
  char local_54;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar4 = *param_1;
  if (((uVar4 & 1) != 0) &&
     (0xa8 < *(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)))) {
    uStack_68 = 0;
    local_58 = 0;
    local_54 = '\0';
    local_50 = 0;
    local_70 = param_3;
    local_60 = param_1;
    if (param_1 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","!handle_.is_null()");
    }
    if ((param_2 != 1) ||
       (PrototypeIterator::Advance((PrototypeIterator *)&local_70), local_54 == '\0')) {
      do {
        puVar2 = local_60;
        uVar4 = *local_60;
        if ((uVar4 & 1) == 0) break;
        uVar5 = uVar4 & 0xffffffff00000000;
        if (*(ushort *)((uVar5 | 7) + (ulong)*(uint *)(uVar4 - 1)) < 0xaa) break;
        uVar4 = uVar5 | *(uint *)(uVar4 - 1);
        if ((*(uint *)(uVar4 + 0xb) >> 0x14 & 1) != 0) {
          if ((((*(uint *)(uVar4 + 0x23) & 1) != 0) &&
              (uVar6 = uVar5 | *(uint *)(uVar4 + 0x23),
              *(short *)((uVar5 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 100)) &&
             ((*(byte *)(uVar6 + 0x17) >> 1 & 1) != 0)) break;
          if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar3 = *(ulong **)(param_3 + 0x95a0);
            if (puVar3 == *(ulong **)(param_3 + 0x95a8)) {
              puVar3 = (ulong *)HandleScope::Extend(param_3);
            }
            *(ulong **)(param_3 + 0x95a0) = puVar3 + 1;
            *puVar3 = uVar4;
          }
          else {
            puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar4);
          }
          Map::SetShouldBeFastPrototypeMap(puVar3,1,param_3);
          OptimizeAsPrototype(puVar2,1);
        }
        PrototypeIterator::Advance((PrototypeIterator *)&local_70);
      } while (local_54 == '\0');
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

