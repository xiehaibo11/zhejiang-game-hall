
/* v8::internal::Genesis::GetThrowTypeErrorIntrinsic() */

ulong * __thiscall v8::internal::Genesis::GetThrowTypeErrorIntrinsic(Genesis *this)

{
  long lVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  NewFunctionArgs aNStack_88 [64];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar4 = *(ulong **)(this + 0x30);
  if (puVar4 == (ulong *)0x0) {
    NewFunctionArgs::ForBuiltinWithoutPrototype(aNStack_88,*(long *)this + 200,0x98,1);
    puVar4 = (ulong *)Factory::NewFunction(*(Factory **)this,aNStack_88);
    *(undefined2 *)((*puVar4 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar4 + 0xb)) + 0x15) =
         0xffff;
    JSReceiver::DeleteProperty(puVar4,*(long *)this + 0x820,0);
    pIVar2 = *(Isolate **)this;
    uVar5 = (ulong)*(ushort *)
                    ((*puVar4 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar4 + 0xb)) + 0x13) << 1;
    if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(pIVar2 + 0x95a0);
      if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(pIVar2);
      }
      *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar5;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar5);
    }
    JSObject::SetOwnPropertyIgnoreAttributes(puVar4,*(long *)this + 0x7b8,puVar3,7);
    JSObject::PreventExtensions(puVar4,0);
    JSObject::MigrateSlowToFast(puVar4,0,"Bootstrapping");
    *(ulong **)(this + 0x30) = puVar4;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

