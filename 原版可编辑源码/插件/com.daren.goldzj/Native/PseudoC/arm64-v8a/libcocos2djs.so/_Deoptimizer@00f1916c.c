
/* v8::internal::Deoptimizer::~Deoptimizer() */

void __thiscall v8::internal::Deoptimizer::~Deoptimizer(Deoptimizer *this)

{
  int iVar1;
  void *pvVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(this + 0x110);
  if (plVar3 != (long *)0x0) {
    if (FLAG_redirect_code_traces != '\0') {
      lVar4 = *plVar3;
      iVar1 = *(int *)(lVar4 + 0x98) + -1;
      *(int *)(lVar4 + 0x98) = iVar1;
      if (iVar1 == 0) {
        fclose(*(FILE **)(lVar4 + 0x90));
        *(undefined8 *)(lVar4 + 0x90) = 0;
      }
    }
    operator_delete(plVar3);
  }
  pvVar2 = *(void **)(this + 0xf8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x100) = pvVar2;
    operator_delete(pvVar2);
  }
  TranslatedState::~TranslatedState((TranslatedState *)(this + 0x80));
  return;
}

