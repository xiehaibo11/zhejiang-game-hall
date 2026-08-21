
/* jsb_set_extend_property(char const*, char const*) */

uint jsb_set_extend_property(char *param_1,char *param_2)

{
  long lVar1;
  uint uVar2;
  ScriptEngine *this;
  Object *pOVar3;
  ulong uVar4;
  Value aVStack_88 [8];
  char local_80;
  Value aVStack_78 [8];
  char local_70;
  Value aVStack_68 [8];
  char local_60;
  Value aVStack_58 [8];
  char local_50;
  Value aVStack_48 [8];
  char local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ScriptEngine *)se::ScriptEngine::getInstance();
  pOVar3 = (Object *)se::ScriptEngine::getGlobalObject(this);
  se::Value::Value(aVStack_48);
  uVar4 = se::Object::getProperty(pOVar3,param_1,aVStack_48);
  if (((uVar4 & 1) != 0) && (local_40 == '\x05')) {
    se::Value::Value(aVStack_58);
    uVar4 = se::Object::getProperty(pOVar3,"cc",aVStack_58);
    if (((uVar4 & 1) != 0) && (local_50 == '\x05')) {
      se::Value::Value(aVStack_68);
      pOVar3 = (Object *)se::Value::toObject(aVStack_58);
      uVar4 = se::Object::getProperty(pOVar3,"Class",aVStack_68);
      if (((uVar4 & 1) != 0) && (local_60 == '\x05')) {
        se::Value::Value(aVStack_78);
        pOVar3 = (Object *)se::Value::toObject(aVStack_68);
        uVar4 = se::Object::getProperty(pOVar3,"extend",aVStack_78);
        if (((uVar4 & 1) != 0) && (local_70 == '\x05')) {
          pOVar3 = (Object *)se::Value::toObject(aVStack_78);
          uVar4 = se::Object::isFunction(pOVar3);
          if ((uVar4 & 1) != 0) {
            se::Value::Value(aVStack_88);
            pOVar3 = (Object *)se::Value::toObject(aVStack_48);
            uVar4 = se::Object::getProperty(pOVar3,param_2,aVStack_88);
            if (((uVar4 & 1) != 0) && (local_80 == '\x05')) {
              pOVar3 = (Object *)se::Value::toObject(aVStack_88);
              uVar2 = se::Object::setProperty(pOVar3,"extend",aVStack_78);
              se::Value::~Value(aVStack_88);
              se::Value::~Value(aVStack_78);
              se::Value::~Value(aVStack_68);
              se::Value::~Value(aVStack_58);
              goto LAB_008eb82c;
            }
            se::Value::~Value(aVStack_88);
          }
        }
        se::Value::~Value(aVStack_78);
      }
      se::Value::~Value(aVStack_68);
    }
    se::Value::~Value(aVStack_58);
  }
  uVar2 = 0;
LAB_008eb82c:
  se::Value::~Value(aVStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

