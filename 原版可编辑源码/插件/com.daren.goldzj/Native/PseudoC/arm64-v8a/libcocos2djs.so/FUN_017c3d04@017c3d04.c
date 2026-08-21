
void FUN_017c3d04(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  
  lVar4 = param_1[0x9b];
  *param_1 = &PTR_FUN_01cdafc8;
  if (lVar4 != 0) {
    lVar3 = param_1[0x9c];
    while (lVar3 != lVar4) {
      lVar3 = lVar3 + -0x1e0;
      FUN_017c3e78(lVar3);
    }
    param_1[0x9c] = lVar4;
  }
  if (param_1[0x97] != 0) {
    param_1[0x98] = param_1[0x97];
  }
  if (param_1[0x93] != 0) {
    param_1[0x94] = param_1[0x93];
  }
  pvVar1 = (void *)param_1[0x88];
  if (pvVar1 != (void *)0x0) {
    param_1[0x89] = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0x82];
  if (pvVar1 != (void *)0x0) {
    param_1[0x83] = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0x7e];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    pvVar5 = (void *)param_1[0x7f];
    if ((void *)param_1[0x7f] != pvVar1) {
      do {
        pvVar2 = *(void **)((long)pvVar5 + -0x20);
        *(undefined8 *)((long)pvVar5 + -0x20) = 0;
        if (pvVar2 != (void *)0x0) {
          operator_delete(pvVar2);
        }
        pvVar2 = *(void **)((long)pvVar5 + -0x28);
        pvVar6 = (void *)((long)pvVar5 + -0x28);
        *(undefined8 *)((long)pvVar5 + -0x28) = 0;
        if (pvVar2 != (void *)0x0) {
          operator_delete(pvVar2);
        }
        pvVar5 = pvVar6;
      } while (pvVar1 != pvVar6);
      pvVar2 = (void *)param_1[0x7e];
    }
    param_1[0x7f] = pvVar1;
    operator_delete(pvVar2);
  }
  v8::internal::wasm::LiftoffAssembler::~LiftoffAssembler((LiftoffAssembler *)(param_1 + 0xf));
  *param_1 = &PTR__Decoder_01cbc3a8;
  if ((*(byte *)(param_1 + 6) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[8]);
  return;
}

