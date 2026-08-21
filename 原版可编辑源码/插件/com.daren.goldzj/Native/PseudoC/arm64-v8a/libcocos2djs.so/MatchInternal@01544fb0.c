
/* v8::internal::IrregexpInterpreter::MatchInternal(v8::internal::Isolate*, v8::internal::ByteArray,
   v8::internal::String, int*, int, int, v8::internal::RegExp::CallOrigin, unsigned int) */

void v8::internal::IrregexpInterpreter::MatchInternal
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,void *param_4,ulong param_5
               ,int param_6,undefined4 param_7,undefined4 param_8)

{
  long lVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined1 auVar4 [16];
  undefined8 local_48;
  
  local_48 = param_3;
  memset(param_4,0xff,-(param_5 >> 0x1f & 1) & 0xfffffffc00000000 | (param_5 & 0xffffffff) << 2);
  auVar4 = String::GetFlatContent((PerThreadAssertScopeDebugOnly *)&local_48);
  lVar1 = auVar4._0_8_;
  if (auVar4._8_8_ >> 0x20 == 1) {
    if (param_6 == 0) {
      uVar2 = 10;
    }
    else {
      uVar2 = *(undefined1 *)(lVar1 + param_6 + -1);
    }
    FUN_01545098(param_1,param_2,local_48,lVar1,(long)auVar4._8_4_,param_4,param_6,uVar2,param_7,
                 param_8);
  }
  else {
    if (param_6 == 0) {
      uVar3 = 10;
    }
    else {
      uVar3 = *(undefined2 *)(lVar1 + (long)param_6 * 2 + -2);
    }
    FUN_01546654(param_1,param_2,local_48,lVar1,(long)auVar4._8_4_,param_4,param_6,uVar3,param_7,
                 param_8);
  }
  return;
}

