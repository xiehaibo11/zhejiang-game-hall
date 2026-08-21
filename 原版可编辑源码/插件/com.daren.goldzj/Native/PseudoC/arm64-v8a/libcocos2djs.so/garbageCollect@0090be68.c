
/* se::ScriptEngine::garbageCollect() */

void __thiscall se::ScriptEngine::garbageCollect(ScriptEngine *this)

{
  Isolate *this_00;
  long lVar1;
  Value *pVVar2;
  Value *pVVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  double dVar6;
  Value *local_50;
  Value *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (__objectMap == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = *(undefined4 *)(__objectMap + 0x18);
  }
  uVar4 = NativePtrToObjectMap::size();
  __android_log_print(3,"jswrapper","GC begin ..., (js->native map) size: %d, all objects: %d\n",
                      uVar4,uVar5);
  if (*(Object **)(this + 0xb8) == (Object *)0x0) {
    v8::Isolate::ContextDisposedNotification(*(Isolate **)(this + 0x90),true);
    this_00 = *(Isolate **)(this + 0x90);
    dVar6 = (double)(**(code **)(**(long **)(this + 0x88) + 0x78))();
    v8::Isolate::IdleNotificationDeadline(this_00,dVar6 + 1.0);
    v8::Isolate::LowMemoryNotification(*(Isolate **)(this + 0x90));
  }
  else {
    local_50 = (Value *)0x0;
    local_48 = (Value *)0x0;
    local_40 = 0;
    Object::call(*(Object **)(this + 0xb8),(vector *)&local_50,(Object *)0x0,(Value *)0x0);
    pVVar3 = local_50;
    pVVar2 = local_48;
    if (local_50 != (Value *)0x0) {
      while (pVVar2 != pVVar3) {
        se::Value::~Value(pVVar2 + -0x10);
        pVVar2 = pVVar2 + -0x10;
      }
      local_48 = pVVar3;
      operator_delete(local_50);
    }
  }
  if (__objectMap == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = *(undefined4 *)(__objectMap + 0x18);
  }
  uVar4 = NativePtrToObjectMap::size();
  __android_log_print(3,"jswrapper","GC end ..., (js->native map) size: %d, all objects: %d\n",uVar4
                      ,uVar5);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

