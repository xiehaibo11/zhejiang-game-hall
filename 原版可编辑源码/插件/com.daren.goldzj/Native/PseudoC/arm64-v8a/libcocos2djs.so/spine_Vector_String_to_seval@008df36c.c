
/* spine_Vector_String_to_seval(spine::Vector<spine::String> const&, se::Value*) */

undefined4 spine_Vector_String_to_seval(Vector *param_1,Value *param_2)

{
  long lVar1;
  Object *pOVar2;
  ulong uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  Vector<spine::String> aVStack_80 [8];
  ulong local_78;
  long local_68;
  Object *pOStack_60;
  Value aVStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pOVar2 = (Object *)se::Object::createArrayObject(*(ulong *)(param_1 + 8));
  se::HandleObject::HandleObject((HandleObject *)&pOStack_60,pOVar2);
  spine::Vector<spine::String>::Vector(aVStack_80,param_1);
  if ((int)local_78 != 0) {
    uVar5 = 0;
    lVar6 = 0x10;
    do {
      pOVar2 = pOStack_60;
      se::Value::Value(aVStack_58,*(char **)(local_68 + lVar6));
      uVar3 = se::Object::setArrayElement(pOVar2,(uint)uVar5,aVStack_58);
      se::Value::~Value(aVStack_58);
      if ((uVar3 & 1) == 0) {
        se::Value::setUndefined(param_2);
        uVar4 = 0;
        goto LAB_008df430;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x18;
    } while (uVar5 < (local_78 & 0xffffffff));
  }
  se::Value::setObject(param_2,(HandleObject *)&pOStack_60,false);
  uVar4 = 1;
LAB_008df430:
  spine::Vector<spine::String>::~Vector(aVStack_80);
  se::HandleObject::~HandleObject((HandleObject *)&pOStack_60);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

