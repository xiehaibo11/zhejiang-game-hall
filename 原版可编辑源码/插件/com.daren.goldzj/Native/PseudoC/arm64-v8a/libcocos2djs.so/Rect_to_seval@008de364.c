
/* Rect_to_seval(cocos2d::renderer::Rect const&, se::Value*) */

undefined8 Rect_to_seval(Rect *param_1,Value *param_2)

{
  long lVar1;
  Object *pOVar2;
  Object *local_50;
  Value aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pOVar2 = (Object *)se::Object::createPlainObject();
  se::HandleObject::HandleObject((HandleObject *)&local_50,pOVar2);
  pOVar2 = local_50;
  se::Value::Value(aVStack_48,*(float *)param_1);
  se::Object::setProperty(pOVar2,"x",aVStack_48);
  se::Value::~Value(aVStack_48);
  pOVar2 = local_50;
  se::Value::Value(aVStack_48,*(float *)(param_1 + 4));
  se::Object::setProperty(pOVar2,"y",aVStack_48);
  se::Value::~Value(aVStack_48);
  pOVar2 = local_50;
  se::Value::Value(aVStack_48,*(float *)(param_1 + 8));
  se::Object::setProperty(pOVar2,"w",aVStack_48);
  se::Value::~Value(aVStack_48);
  se::Value::Value(aVStack_48,*(float *)(param_1 + 0xc));
  se::Object::setProperty(local_50,"h",aVStack_48);
  se::Value::~Value(aVStack_48);
  se::Value::setObject(param_2,(HandleObject *)&local_50,false);
  se::HandleObject::~HandleObject((HandleObject *)&local_50);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

