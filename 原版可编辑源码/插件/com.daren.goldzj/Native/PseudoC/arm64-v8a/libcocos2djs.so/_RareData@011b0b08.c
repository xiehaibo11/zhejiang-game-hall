
/* v8::internal::CodeEntry::RareData::~RareData() */

void __thiscall v8::internal::CodeEntry::RareData::~RareData(RareData *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  void *in_x1;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *extraout_x1_02;
  void *pvVar4;
  RareData *this_00;
  Malloced *this_01;
  
  pvVar2 = *(void **)(this + 0x68);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x70) = pvVar2;
    operator_delete(pvVar2);
    in_x1 = extraout_x1;
  }
  puVar1 = *(void **)(this + 0x50);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)puVar1[2];
    pvVar4 = (void *)*puVar1;
    puVar1[2] = 0;
    if (pvVar2 != (void *)0x0) {
      this_00 = *(RareData **)((long)pvVar2 + 0x38);
      *(undefined8 *)((long)pvVar2 + 0x38) = 0;
      if (this_00 != (RareData *)0x0) {
        ~RareData(this_00);
        operator_delete(this_00);
        in_x1 = extraout_x1_01;
      }
      this_01 = *(Malloced **)((long)pvVar2 + 0x28);
      *(undefined8 *)((long)pvVar2 + 0x28) = 0;
      if (this_01 != (Malloced *)0x0) {
        pvVar3 = *(void **)this_01;
        if (pvVar3 != (void *)0x0) {
          *(void **)(this_01 + 8) = pvVar3;
          operator_delete(pvVar3);
          in_x1 = extraout_x1_02;
        }
        Malloced::operator_delete(this_01,in_x1);
      }
      operator_delete(pvVar2);
    }
    operator_delete(puVar1);
    puVar1 = pvVar4;
    in_x1 = extraout_x1_00;
  }
  pvVar2 = *(void **)(this + 0x40);
  *(undefined8 *)(this + 0x40) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  puVar1 = *(void **)(this + 0x28);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)puVar1[3];
    pvVar4 = (void *)*puVar1;
    if (pvVar2 != (void *)0x0) {
      puVar1[4] = pvVar2;
      operator_delete(pvVar2);
    }
    operator_delete(puVar1);
    puVar1 = pvVar4;
  }
  pvVar2 = *(void **)(this + 0x18);
  *(undefined8 *)(this + 0x18) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
    return;
  }
  return;
}

