
void FUN_011b5114(undefined8 *param_1,void *param_2)

{
  void *pvVar1;
  void *extraout_x1;
  void *extraout_x1_00;
  void *pvVar2;
  RareData *this;
  Malloced *this_00;
  
  pvVar2 = (void *)*param_1;
  *param_1 = param_2;
  if (pvVar2 != (void *)0x0) {
    this = *(RareData **)((long)pvVar2 + 0x38);
    *(undefined8 *)((long)pvVar2 + 0x38) = 0;
    if (this != (RareData *)0x0) {
      v8::internal::CodeEntry::RareData::~RareData(this);
      operator_delete(this);
      param_2 = extraout_x1;
    }
    this_00 = *(Malloced **)((long)pvVar2 + 0x28);
    *(undefined8 *)((long)pvVar2 + 0x28) = 0;
    if (this_00 != (Malloced *)0x0) {
      pvVar1 = *(void **)this_00;
      if (pvVar1 != (void *)0x0) {
        *(void **)(this_00 + 8) = pvVar1;
        operator_delete(pvVar1);
        param_2 = extraout_x1_00;
      }
      v8::internal::Malloced::operator_delete(this_00,param_2);
    }
    operator_delete(pvVar2);
    return;
  }
  return;
}

