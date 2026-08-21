
/* se::ScriptEngine::ScriptEngine() */

void __thiscall se::ScriptEngine::ScriptEngine(ScriptEngine *this)

{
  ulong uVar1;
  char *pcVar2;
  long lVar3;
  long *plVar4;
  Platform *pPVar5;
  Platform *local_58;
  ulong local_50;
  char *local_48;
  long *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  se::Value::Value((Value *)(this + 0xa8));
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined4 *)(this + 0x200) = 0;
  *(undefined8 *)(this + 0x1e8) = 0;
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined8 *)(this + 0x208) = 0;
  local_40 = (long *)0x0;
  v8::platform::NewDefaultPlatform((platform *)&local_58,0,0,0,&local_40);
  plVar4 = local_40;
  pPVar5 = local_58;
  *(Platform **)(this + 0x88) = local_58;
  local_58 = (Platform *)0x0;
  local_40 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))(plVar4);
    pPVar5 = *(Platform **)(this + 0x88);
  }
  v8::V8::InitializePlatform(pPVar5);
  local_58 = (Platform *)0x0;
  local_50 = 0;
  local_48 = (char *)0x0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)&local_58
         ," --expose-gc-as=__jsb_gc__",0x1a);
  uVar1 = (ulong)local_58 >> 1 & 0x7f;
  if (((ulong)local_58 & 1) != 0) {
    uVar1 = local_50;
  }
  if (uVar1 != 0) {
    pcVar2 = (char *)((ulong)&local_58 | 1);
    if (((ulong)local_58 & 1) != 0) {
      pcVar2 = local_48;
    }
    v8::V8::SetFlagsFromString(pcVar2,(long)(int)uVar1);
  }
  v8::V8::Initialize();
  if (((ulong)local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

