
/* v8::internal::Parser::~Parser() */

void __thiscall v8::internal::Parser::~Parser(Parser *this)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x2e8);
  if (pvVar2 != (void *)0x0) {
    pvVar1 = *(void **)((long)pvVar2 + 0x128);
    if (pvVar1 != (void *)0x0) {
      *(void **)((long)pvVar2 + 0x130) = pvVar1;
      operator_delete(pvVar1);
    }
    pvVar1 = *(void **)((long)pvVar2 + 0xb0);
    if (pvVar1 != (void *)0x0) {
      *(void **)((long)pvVar2 + 0xb8) = pvVar1;
      operator_delete(pvVar1);
    }
    pvVar1 = *(void **)((long)pvVar2 + 0x98);
    if (pvVar1 != (void *)0x0) {
      *(void **)((long)pvVar2 + 0xa0) = pvVar1;
      operator_delete(pvVar1);
    }
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x490);
  *(undefined8 *)(this + 0x2e8) = 0;
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x498) = pvVar2;
    operator_delete(pvVar2);
  }
  Zone::~Zone((Zone *)(this + 0x2a8));
  Scanner::~Scanner((Scanner *)(this + 0x140));
  pvVar2 = *(void **)(this + 0xe0);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0xe8) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 200);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0xd0) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x40);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x48) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x28);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x30) = pvVar2;
    operator_delete(pvVar2);
    return;
  }
  return;
}

