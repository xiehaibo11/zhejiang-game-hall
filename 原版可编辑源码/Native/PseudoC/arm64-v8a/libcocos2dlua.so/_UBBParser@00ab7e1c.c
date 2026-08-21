
/* fairygui::UBBParser::~UBBParser() */

void __thiscall fairygui::UBBParser::~UBBParser(UBBParser *this)

{
  undefined8 *puVar1;
  long *plVar2;
  void *pvVar3;
  code *pcVar4;
  
  *(undefined ***)this = &PTR__UBBParser_016aa878;
  puVar1 = *(void **)(this + 0x50);
  do {
    if (puVar1 == (void *)0x0) {
      pvVar3 = *(void **)(this + 0x40);
      *(undefined8 *)(this + 0x40) = 0;
      if (pvVar3 != (void *)0x0) {
        operator_delete(pvVar3);
      }
      if (((byte)this[0x28] & 1) != 0) {
        operator_delete(*(void **)(this + 0x38));
      }
      if (((byte)this[0x10] & 1) == 0) {
        return;
      }
      operator_delete(*(void **)(this + 0x20));
      return;
    }
    plVar2 = (long *)puVar1[10];
    pvVar3 = (void *)*puVar1;
    if (puVar1 + 6 == plVar2) {
      pcVar4 = *(code **)(*plVar2 + 0x20);
LAB_00ab7e88:
      (*pcVar4)();
    }
    else if (plVar2 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar2 + 0x28);
      goto LAB_00ab7e88;
    }
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    puVar1 = pvVar3;
  } while( true );
}

