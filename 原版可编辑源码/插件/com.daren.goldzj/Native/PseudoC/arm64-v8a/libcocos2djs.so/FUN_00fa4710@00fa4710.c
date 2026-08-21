
void FUN_00fa4710(undefined8 param_1,void *param_2)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  undefined8 *puVar4;
  
  if (param_2 != (void *)0x0) {
    v8::base::ConditionVariable::~ConditionVariable((ConditionVariable *)((long)param_2 + 0x45c));
    v8::base::Mutex::~Mutex((Mutex *)((long)param_2 + 0x434));
    puVar4 = *(undefined8 **)((long)param_2 + 0x3c0);
    lVar1 = (long)param_2 + 0x428;
    while( true ) {
      while (puVar4 != (void *)0x0) {
        plVar2 = (long *)puVar4[4];
        pvVar3 = (void *)*puVar4;
        puVar4[4] = 0;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 8))();
        }
        operator_delete(puVar4);
        puVar4 = pvVar3;
      }
      pvVar3 = *(void **)(lVar1 + -0x78);
      *(undefined8 *)(lVar1 + -0x78) = 0;
      if (pvVar3 != (void *)0x0) {
        operator_delete(pvVar3);
      }
      if (lVar1 + -0x80 == (long)param_2 + 0x28) break;
      puVar4 = *(undefined8 **)(lVar1 + -0xe8);
      lVar1 = lVar1 + -0x80;
    }
    operator_delete(param_2);
    return;
  }
  return;
}

