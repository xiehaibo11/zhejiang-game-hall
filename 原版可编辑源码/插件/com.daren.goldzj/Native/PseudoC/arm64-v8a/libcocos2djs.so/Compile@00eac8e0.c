
/* v8::Script::Compile(v8::Local<v8::Context>, v8::Local<v8::String>, v8::ScriptOrigin*) */

void v8::Script::Compile(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if (param_3 == (undefined8 *)0x0) {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    uStack_20 = 0;
  }
  else {
    uStack_40 = param_3[1];
    local_48 = *param_3;
    local_38 = param_3[2];
    local_30 = *(undefined4 *)(param_3 + 3);
    uStack_20 = param_3[6];
    local_28 = param_3[5];
  }
  local_18 = 0;
  local_50 = param_2;
  ScriptCompiler::Compile(param_1,&local_50,0,0);
  return;
}

