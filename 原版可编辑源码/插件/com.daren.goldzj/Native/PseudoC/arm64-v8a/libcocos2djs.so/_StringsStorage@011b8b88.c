
/* v8::internal::StringsStorage::~StringsStorage() */

void __thiscall v8::internal::StringsStorage::~StringsStorage(StringsStorage *this)

{
  long *plVar1;
  long *__ptr;
  void *pvVar2;
  long *plVar3;
  ulong uVar4;
  
  __ptr = *(long **)this;
  uVar4 = (ulong)*(uint *)(this + 8);
  plVar1 = __ptr;
  do {
    plVar3 = plVar1;
    if (__ptr + uVar4 * 3 <= plVar3) {
LAB_011b8c0c:
      free(__ptr);
      return;
    }
    plVar1 = plVar3 + 3;
  } while (*plVar3 == 0);
  pvVar2 = (void *)plVar3[1];
  do {
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
      __ptr = *(long **)this;
      uVar4 = (ulong)*(uint *)(this + 8);
    }
    do {
      plVar1 = plVar3;
      plVar3 = plVar1 + 3;
      if (__ptr + uVar4 * 3 <= plVar3) goto LAB_011b8c0c;
    } while (*plVar3 == 0);
    pvVar2 = (void *)plVar1[4];
  } while( true );
}

