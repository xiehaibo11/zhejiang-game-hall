
/* se::ScriptEngine::addAfterCleanupHook(std::__ndk1::function<void ()> const&) */

void __thiscall se::ScriptEngine::addAfterCleanupHook(ScriptEngine *this,function *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(this + 0x70);
  if (lVar1 != *(long *)(this + 0x78)) {
    plVar2 = *(long **)(param_1 + 0x20);
    if (plVar2 == (long *)0x0) {
      *(undefined8 *)(lVar1 + 0x20) = 0;
    }
    else if ((long *)param_1 == plVar2) {
      *(long *)(lVar1 + 0x20) = lVar1;
      (**(code **)(**(long **)(param_1 + 0x20) + 0x18))(*(long **)(param_1 + 0x20),lVar1);
    }
    else {
      uVar3 = (**(code **)(*plVar2 + 0x10))();
      *(undefined8 *)(lVar1 + 0x20) = uVar3;
    }
    *(long *)(this + 0x70) = *(long *)(this + 0x70) + 0x30;
    return;
  }
  std::__ndk1::
  vector<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>::
  __push_back_slow_path<std::__ndk1::function<void()>const&>
            ((vector<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>
              *)(this + 0x68),param_1);
  return;
}

