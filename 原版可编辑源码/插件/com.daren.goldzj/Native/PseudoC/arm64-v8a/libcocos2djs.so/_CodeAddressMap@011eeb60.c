
/* v8::internal::CodeAddressMap::~CodeAddressMap() */

void __thiscall v8::internal::CodeAddressMap::~CodeAddressMap(CodeAddressMap *this)

{
  long *plVar1;
  long *__ptr;
  void *pvVar2;
  long *plVar3;
  ulong uVar4;
  
  *(undefined ***)this = &PTR__CodeAddressMap_01cbbab0;
  Logger::RemoveCodeEventListener
            (*(Logger **)(*(long *)(this + 8) + 0x9558),(CodeEventListener *)this);
  __ptr = *(long **)(this + 0x18);
  uVar4 = (ulong)*(uint *)(this + 0x20);
  plVar1 = __ptr;
  do {
    plVar3 = plVar1;
    if (__ptr + uVar4 * 3 <= plVar3) {
LAB_011eec08:
      free(__ptr);
      CodeEventLogger::~CodeEventLogger((CodeEventLogger *)this);
      return;
    }
    plVar1 = plVar3 + 3;
  } while (*plVar3 == 0);
  pvVar2 = (void *)plVar3[1];
  do {
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
      __ptr = *(long **)(this + 0x18);
      uVar4 = (ulong)*(uint *)(this + 0x20);
    }
    do {
      plVar1 = plVar3;
      plVar3 = plVar1 + 3;
      if (__ptr + uVar4 * 3 <= plVar3) goto LAB_011eec08;
    } while (*plVar3 == 0);
    pvVar2 = (void *)plVar1[4];
  } while( true );
}

