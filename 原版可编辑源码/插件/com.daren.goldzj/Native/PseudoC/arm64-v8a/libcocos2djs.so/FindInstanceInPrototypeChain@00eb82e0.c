
/* v8::Object::FindInstanceInPrototypeChain(v8::Local<v8::FunctionTemplate>) */

void __thiscall v8::Object::FindInstanceInPrototypeChain(Object *this,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  Isolate *pIVar5;
  undefined8 local_68;
  Isolate *local_60;
  ulong local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  char local_44;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_58 = *(ulong *)this;
  local_48 = 0;
  local_44 = '\0';
  local_40 = 0;
  pIVar5 = (Isolate *)(local_58 & 0xffffffff00000000);
  uStack_50 = 0;
  local_68 = *param_2;
  local_60 = pIVar5;
  do {
    uVar3 = internal::FunctionTemplateInfo::IsTemplateFor
                      ((FunctionTemplateInfo *)&local_68,
                       local_58 & 0xffffffff00000000 | (ulong)*(uint *)(local_58 - 1));
    uVar2 = local_58;
    if ((uVar3 & 1) != 0) {
      if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar4 = *(ulong **)(pIVar5 + 0x95a0);
        if (puVar4 == *(ulong **)(pIVar5 + 0x95a8)) {
          puVar4 = (ulong *)internal::HandleScope::Extend(pIVar5);
        }
        *(ulong **)(pIVar5 + 0x95a0) = puVar4 + 1;
        *puVar4 = uVar2;
      }
      else {
        puVar4 = (ulong *)internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),local_58);
      }
      goto LAB_00eb83b4;
    }
    internal::PrototypeIterator::Advance((PrototypeIterator *)&local_60);
  } while ((local_44 == '\0') &&
          (0xa9 < *(ushort *)((local_58 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_58 - 1)))
          );
  puVar4 = (ulong *)0x0;
LAB_00eb83b4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4);
}

