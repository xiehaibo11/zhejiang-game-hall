
/* se::Object::call(std::__ndk1::vector<se::Value, std::__ndk1::allocator<se::Value> > const&,
   se::Object*, se::Value*) */

undefined4 __thiscall se::Object::call(Object *this,vector *param_1,Object *param_2,Value *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  Isolate *pIVar5;
  ScriptEngine *this_00;
  undefined8 uVar6;
  Object *pOVar7;
  long lVar8;
  ulong uVar9;
  undefined4 uVar10;
  void *local_80;
  void *pvStack_78;
  long local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  plVar4 = (long *)ObjectWrap::persistent((ObjectWrap *)(this + 0x18));
  if (*plVar4 == 0) {
    __android_log_print(3,"jswrapper","Function object is released!\n");
    uVar10 = 0;
    goto LAB_00907448;
  }
  local_80 = (void *)0x0;
  pvStack_78 = (void *)0x0;
  local_70 = 0;
  local_80 = operator_new(0x50);
  local_70 = (long)local_80 + 0x50;
  lVar8 = *(long *)param_1;
  lVar1 = *(long *)(param_1 + 8);
  pvStack_78 = local_80;
  internal::seToJsArgs(DAT_01d371a8,param_1,(vector *)&local_80);
  if (param_2 == (Object *)0x0) {
    pIVar5 = DAT_01d371a8 + 0xa0;
joined_r0x00907358:
    uVar3 = lVar1 - lVar8;
    if (uVar3 != 0) {
      uVar9 = 0;
      do {
        if (*(long *)((long)local_80 + uVar9 * 8) == 0) {
          __android_log_print(3,"jswrapper","%s argv[%d] is released!\n","call");
          goto LAB_00907434;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)((long)uVar3 >> 4));
    }
    this_00 = (ScriptEngine *)ScriptEngine::getInstance();
    uVar6 = ScriptEngine::_getContext(this_00);
    pOVar7 = (Object *)ObjectWrap::handle((ObjectWrap *)(this + 0x18),DAT_01d371a8);
    lVar8 = v8::Object::CallAsFunction(pOVar7,uVar6,pIVar5,uVar3 >> 4,local_80);
    if (lVar8 == 0) {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/jswrapper/v8/Object.cpp, 574): Invoking function (%p) failed!\n"
                          ,this);
      ScriptEngine::getInstance();
      ScriptEngine::clearException();
      goto LAB_00907434;
    }
    if (param_3 != (Value *)0x0) {
      internal::jsToSeValue(DAT_01d371a8,lVar8,param_3);
    }
    uVar10 = 1;
  }
  else {
    plVar4 = (long *)ObjectWrap::persistent((ObjectWrap *)(param_2 + 0x18));
    if (*plVar4 != 0) {
      pIVar5 = (Isolate *)ObjectWrap::handle((ObjectWrap *)(param_2 + 0x18),DAT_01d371a8);
      goto joined_r0x00907358;
    }
    __android_log_print(3,"jswrapper","This object is released!\n");
LAB_00907434:
    uVar10 = 0;
  }
  if (local_80 != (void *)0x0) {
    pvStack_78 = local_80;
    operator_delete(local_80);
  }
LAB_00907448:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

