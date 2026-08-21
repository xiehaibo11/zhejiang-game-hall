
/* v8::internal::Parser::DeclareVariable(v8::internal::AstRawString const*,
   v8::internal::VariableKind, v8::internal::VariableMode, v8::internal::InitializationFlag,
   v8::internal::Scope*, bool*, int, int) */

undefined8 __thiscall
v8::internal::Parser::DeclareVariable
          (Parser *this,undefined8 param_1,undefined4 param_3,uint param_4,undefined4 param_5,
          long param_6,undefined8 param_7,undefined4 param_8,undefined4 param_9)

{
  Zone *pZVar1;
  undefined4 *puVar2;
  
  if (((param_4 & 0xff) == 2) && ((*(byte *)(param_6 + 0x82) & 1) == 0)) {
    pZVar1 = *(Zone **)(this + 0x68);
    puVar2 = *(undefined4 **)(pZVar1 + 0x10);
    if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)puVar2) < 0x20) {
      puVar2 = (undefined4 *)Zone::NewExpand(pZVar1,0x20);
    }
    else {
      *(undefined4 **)(pZVar1 + 0x10) = puVar2 + 8;
    }
    *puVar2 = param_8;
    puVar2[1] = 0x40;
    *(undefined8 *)(puVar2 + 4) = 0;
    *(long *)(puVar2 + 6) = param_6;
  }
  else {
    pZVar1 = *(Zone **)(this + 0x68);
    puVar2 = *(undefined4 **)(pZVar1 + 0x10);
    if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)puVar2) < 0x18) {
      puVar2 = (undefined4 *)Zone::NewExpand(pZVar1,0x18);
    }
    else {
      *(undefined4 **)(pZVar1 + 0x10) = puVar2 + 6;
    }
    *(undefined8 *)(puVar2 + 4) = 0;
    *puVar2 = param_8;
    puVar2[1] = 0;
  }
  Declare(this,puVar2,param_1,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return *(undefined8 *)(puVar2 + 2);
}

