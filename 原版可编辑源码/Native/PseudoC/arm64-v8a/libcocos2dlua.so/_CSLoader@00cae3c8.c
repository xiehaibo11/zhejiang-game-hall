
/* WARNING: Type propagation algorithm not settling */
/* cocos2d::CSLoader::~CSLoader() */

void __thiscall cocos2d::CSLoader::~CSLoader(CSLoader *this)

{
  CSLoader CVar1;
  void *pvVar2;
  long *plVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (((byte)this[0xa8] & 1) != 0) {
    operator_delete(*(void **)(this + 0xb8));
  }
  puVar5 = *(undefined8 **)(this + 0x90);
  puVar6 = *(undefined8 **)(this + 0x98);
  if (puVar5 != puVar6) {
    do {
      Ref::release((Ref *)*puVar5);
      puVar5 = puVar5 + 1;
    } while (puVar6 != puVar5);
    puVar5 = *(undefined8 **)(this + 0x90);
  }
  *(undefined8 **)(this + 0x98) = puVar5;
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x98) = puVar5;
    operator_delete(puVar5);
  }
  if (((byte)this[0x70] & 1) == 0) {
    CVar1 = this[0x58];
  }
  else {
    operator_delete(*(void **)(this + 0x80));
    CVar1 = this[0x58];
  }
  if (((byte)CVar1 & 1) == 0) {
    puVar5 = *(undefined8 **)(this + 0x38);
  }
  else {
    operator_delete(*(void **)(this + 0x68));
    puVar5 = *(undefined8 **)(this + 0x38);
  }
  while (puVar5 != (void *)0x0) {
    plVar3 = (long *)puVar5[10];
    pvVar2 = (void *)*puVar5;
    if (puVar5 + 6 == plVar3) {
      pcVar4 = *(code **)(*plVar3 + 0x20);
LAB_00cae4a8:
      (*pcVar4)();
    }
    else if (plVar3 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar3 + 0x28);
      goto LAB_00cae4a8;
    }
    if ((*(byte *)(puVar5 + 2) & 1) != 0) {
      operator_delete((void *)puVar5[4]);
    }
    operator_delete(puVar5);
    puVar5 = pvVar2;
  }
  pvVar2 = *(void **)(this + 0x28);
  *(undefined8 *)(this + 0x28) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  puVar5 = *(void **)(this + 0x10);
  do {
    if (puVar5 == (void *)0x0) {
      pvVar2 = *(void **)this;
      *(undefined8 *)this = 0;
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
        return;
      }
      return;
    }
    plVar3 = (long *)puVar5[10];
    pvVar2 = (void *)*puVar5;
    if (puVar5 + 6 == plVar3) {
      pcVar4 = *(code **)(*plVar3 + 0x20);
LAB_00cae518:
      (*pcVar4)();
    }
    else if (plVar3 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar3 + 0x28);
      goto LAB_00cae518;
    }
    if ((*(byte *)(puVar5 + 2) & 1) != 0) {
      operator_delete((void *)puVar5[4]);
    }
    operator_delete(puVar5);
    puVar5 = pvVar2;
  } while( true );
}

