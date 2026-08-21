
/* register_all_universe(se::Object*) */

undefined8 register_all_universe(Object *param_1)

{
  long lVar1;
  ulong uVar2;
  Object *pOVar3;
  HandleObject aHStack_40 [8];
  Value aVStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  se::Value::Value(aVStack_38);
  uVar2 = se::Object::getProperty(param_1,"un",aVStack_38);
  if ((uVar2 & 1) == 0) {
    pOVar3 = (Object *)se::Object::createPlainObject();
    se::HandleObject::HandleObject(aHStack_40,pOVar3);
    se::Value::setObject(aVStack_38,aHStack_40,false);
    se::Object::setProperty(param_1,"un",aVStack_38);
    se::HandleObject::~HandleObject(aHStack_40);
  }
  pOVar3 = (Object *)se::Value::toObject(aVStack_38);
  js_register_universe_Example(pOVar3);
  js_register_universe_Http(pOVar3);
  js_register_universe_MergeFile(pOVar3);
  js_register_universe_Downloader(pOVar3);
  js_register_universe_CMD5Checksum(pOVar3);
  js_register_universe_Unzipper(pOVar3);
  js_register_universe_Device(pOVar3);
  js_register_universe_Downloader2(pOVar3);
  js_register_universe_FileInterface(pOVar3);
  se::Value::~Value(aVStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

