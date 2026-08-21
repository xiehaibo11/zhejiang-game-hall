
/* v8::internal::ValueDeserializer::ReadObject() */

ulong * __thiscall v8::internal::ValueDeserializer::ReadObject(ValueDeserializer *this)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  char *pcVar6;
  Factory *pFVar7;
  long lVar8;
  ulong *puVar9;
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false> aPStack_48 [16];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::PerIsolateAssertScope
            (aPStack_48,*(Isolate **)this);
  lVar8 = *(long *)this;
  uVar3 = GetCurrentStackPosition();
  if (uVar3 < *(ulong *)(lVar8 + 0x58)) {
    Isolate::StackOverflow(*(Isolate **)this);
  }
  else {
    puVar9 = (ulong *)ReadObjectInternal(this);
    if (puVar9 != (ulong *)0x0) {
      uVar3 = *puVar9;
      if (((uVar3 & 1) == 0) ||
         (*(short *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) != 0x424))
      goto LAB_011441a0;
      pcVar5 = *(char **)(this + 0x10);
      pcVar6 = pcVar5;
      do {
        if (*(char **)(this + 0x18) <= pcVar6) goto LAB_0114424c;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 == '\0');
      if (cVar1 == 'V') {
        do {
          if (*(char **)(this + 0x18) <= pcVar5) {
            v8::V8::FromJustIsNothing();
            break;
          }
          cVar1 = *pcVar5;
          *(char **)(this + 0x10) = pcVar5 + 1;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 == '\0');
        puVar9 = (ulong *)ReadJSArrayBufferView(this,puVar9);
      }
LAB_0114424c:
      if (puVar9 != (ulong *)0x0) goto LAB_011441a0;
    }
    pFVar7 = *(Factory **)this;
    if (((*(ulong *)(pFVar7 + 0x2bd8) & 1) != 0) &&
       ((int)*(ulong *)(pFVar7 + 0x2bd8) == *(int *)(pFVar7 + 0xa8))) {
      puVar4 = (undefined8 *)Factory::NewError(pFVar7,0x16c,0,0,0);
      Isolate::Throw((Isolate *)pFVar7,*puVar4,0);
    }
  }
  puVar9 = (ulong *)0x0;
LAB_011441a0:
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::~PerIsolateAssertScope
            (aPStack_48);
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar9;
}

