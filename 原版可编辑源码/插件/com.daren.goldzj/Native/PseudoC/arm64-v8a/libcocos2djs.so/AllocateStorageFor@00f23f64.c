
/* v8::internal::TranslatedState::AllocateStorageFor(v8::internal::TranslatedValue*) */

void __thiscall
v8::internal::TranslatedState::AllocateStorageFor(TranslatedState *this,TranslatedValue *param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (*param_1 == (TranslatedValue)0x8) {
    iVar2 = *(int *)(param_1 + 0x1c) * 4 + -8;
  }
  else {
    iVar2 = -8;
  }
  plVar1 = (long *)Factory::NewByteArray(*(Factory **)(this + 0x18),iVar2,1);
  lVar3 = *plVar1;
  if (1 < *(int *)(lVar3 + 3)) {
    lVar4 = 7;
    do {
      *(undefined1 *)(lVar3 + lVar4) = 0;
      lVar3 = *plVar1;
      lVar5 = lVar4 + -6;
      lVar4 = lVar4 + 1;
    } while (lVar5 < *(int *)(lVar3 + 3) >> 1);
  }
  return;
}

