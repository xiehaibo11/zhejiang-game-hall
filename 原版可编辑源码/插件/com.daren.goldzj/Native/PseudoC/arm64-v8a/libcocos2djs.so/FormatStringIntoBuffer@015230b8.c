
/* v8::internal::Log::MessageBuilder::FormatStringIntoBuffer(char const*, std::__va_list) */

int __thiscall
v8::internal::Log::MessageBuilder::FormatStringIntoBuffer
          (MessageBuilder *this,undefined8 param_1,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = param_3[1];
  local_40 = *param_3;
  uStack_28 = param_3[3];
  uStack_30 = param_3[2];
  iVar2 = VSNPrintF(*(undefined8 *)(*(long *)this + 0x120),0x800,param_1,&local_40);
  iVar1 = 0x800;
  if (iVar2 != -1) {
    iVar1 = iVar2;
  }
  return iVar1;
}

