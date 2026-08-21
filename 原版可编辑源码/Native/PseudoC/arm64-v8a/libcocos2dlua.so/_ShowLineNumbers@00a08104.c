
/* universe::network::ShowLineNumbers::~ShowLineNumbers() */

void __thiscall universe::network::ShowLineNumbers::~ShowLineNumbers(ShowLineNumbers *this)

{
  undefined8 *puVar1;
  long *plVar2;
  void *pvVar3;
  code *pcVar4;
  
  puVar1 = *(void **)(this + 0x10);
  do {
    if (puVar1 == (void *)0x0) {
      pvVar3 = *(void **)this;
      *(undefined8 *)this = 0;
      if (pvVar3 != (void *)0x0) {
        operator_delete(pvVar3);
        return;
      }
      return;
    }
    plVar2 = (long *)puVar1[8];
    pvVar3 = (void *)*puVar1;
    if (puVar1 + 4 == plVar2) {
      pcVar4 = *(code **)(*plVar2 + 0x20);
LAB_00a0812c:
      (*pcVar4)();
    }
    else if (plVar2 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar2 + 0x28);
      goto LAB_00a0812c;
    }
    operator_delete(puVar1);
    puVar1 = pvVar3;
  } while( true );
}

