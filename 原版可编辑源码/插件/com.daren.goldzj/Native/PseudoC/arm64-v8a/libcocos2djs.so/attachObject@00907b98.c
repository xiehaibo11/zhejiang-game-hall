
/* se::Object::attachObject(se::Object*) */

undefined4 __thiscall se::Object::attachObject(Object *this,Object *param_1)

{
  long lVar1;
  Value *pVVar2;
  Value *pVVar3;
  ScriptEngine *this_00;
  Object *this_01;
  ulong uVar4;
  Object *pOVar5;
  undefined4 uVar6;
  Value *local_90;
  Value *local_88;
  Value *local_80;
  Value aVStack_78 [16];
  Value aVStack_68 [16];
  Value aVStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this_00 = (ScriptEngine *)ScriptEngine::getInstance();
  this_01 = (Object *)ScriptEngine::getGlobalObject(this_00);
  se::Value::Value(aVStack_58);
  uVar4 = getProperty(this_01,"jsb",aVStack_58);
  if ((uVar4 & 1) == 0) {
    uVar6 = 0;
  }
  else {
    pOVar5 = (Object *)se::Value::toObject(aVStack_58);
    se::Value::Value(aVStack_68);
    uVar4 = getProperty(pOVar5,"registerNativeRef",aVStack_68);
    if ((uVar4 & 1) == 0) {
      uVar6 = 0;
    }
    else {
      local_90 = (Value *)0x0;
      local_88 = (Value *)0x0;
      local_80 = (Value *)0x0;
      se::Value::Value(aVStack_78,this,false);
      if (local_88 < local_80) {
        se::Value::Value(local_88,aVStack_78);
        local_88 = local_88 + 0x10;
      }
      else {
        std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::
        __push_back_slow_path<se::Value>
                  ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_90,aVStack_78);
      }
      se::Value::~Value(aVStack_78);
      se::Value::Value(aVStack_78,param_1,false);
      if (local_88 < local_80) {
        se::Value::Value(local_88,aVStack_78);
        local_88 = local_88 + 0x10;
      }
      else {
        std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::
        __push_back_slow_path<se::Value>
                  ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_90,aVStack_78);
      }
      se::Value::~Value(aVStack_78);
      pOVar5 = (Object *)se::Value::toObject(aVStack_68);
      call(pOVar5,(vector *)&local_90,this_01,(Value *)0x0);
      pVVar3 = local_90;
      pVVar2 = local_88;
      if (local_90 != (Value *)0x0) {
        while (pVVar2 != pVVar3) {
          se::Value::~Value(pVVar2 + -0x10);
          pVVar2 = pVVar2 + -0x10;
        }
        local_88 = pVVar3;
        operator_delete(local_90);
      }
      uVar6 = 1;
    }
    se::Value::~Value(aVStack_68);
  }
  se::Value::~Value(aVStack_58);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}

