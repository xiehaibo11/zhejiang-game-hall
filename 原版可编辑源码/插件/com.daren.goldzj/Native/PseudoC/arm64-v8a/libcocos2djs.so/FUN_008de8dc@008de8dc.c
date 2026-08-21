
void FUN_008de8dc(long param_1,int param_2,Value *param_3)

{
  long lVar1;
  Object *pOVar2;
  char *__format;
  ulong uVar3;
  char local_74 [4];
  Object *local_70;
  Value aVStack_68 [16];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pOVar2 = (Object *)se::Object::createPlainObject();
  se::HandleObject::HandleObject((HandleObject *)&local_70,pOVar2);
  local_74[0] = '\0';
  local_74[1] = '\0';
  local_74[2] = '\0';
  local_74[3] = '\0';
  if (0 < param_2) {
    uVar3 = 0;
    do {
      __format = "m%d";
      if (uVar3 < 10) {
        __format = "m0%d";
      }
      snprintf(local_74,3,__format,uVar3 & 0xffffffff);
      pOVar2 = local_70;
      se::Value::Value(aVStack_68,*(float *)(param_1 + uVar3 * 4));
      se::Object::setProperty(pOVar2,local_74,aVStack_68);
      se::Value::~Value(aVStack_68);
      uVar3 = uVar3 + 1;
    } while ((long)uVar3 < (long)param_2);
  }
  se::Value::setObject(param_3,(HandleObject *)&local_70,false);
  se::HandleObject::~HandleObject((HandleObject *)&local_70);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

