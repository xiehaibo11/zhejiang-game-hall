
/* v8::internal::wasm::SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>::SelectTypeImmediate(v8::internal::wasm::Decoder*,
   unsigned char const*) */

void __thiscall
v8::internal::wasm::SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>::
SelectTypeImmediate(SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *this,
                   Decoder *param_1,uchar *param_2)

{
  byte *pbVar1;
  uchar *puVar2;
  uchar uVar3;
  uint uVar4;
  ulong uVar5;
  char *pcVar6;
  
  pbVar1 = param_2 + 1;
  if (pbVar1 < *(byte **)(param_1 + 0x18)) {
    uVar4 = *pbVar1 & 0x7f;
    if ((char)*pbVar1 < '\0') {
      uVar4 = Decoder::
              read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                        (param_1,param_2 + 2,(uint *)this,"number of select types",uVar4);
    }
    else {
      *(undefined4 *)this = 1;
    }
    if ((uVar4 & 0xff) == 1) {
      uVar4 = *(uint *)this;
      puVar2 = param_2 + (ulong)uVar4 + 1;
      if ((*(uchar **)(param_1 + 0x18) < puVar2) ||
         ((int)*(uchar **)(param_1 + 0x18) == (int)puVar2)) {
        Decoder::error(param_1,puVar2,"select type");
        uVar4 = *(uint *)this;
        uVar3 = '\0';
      }
      else {
        uVar3 = *puVar2;
      }
      *(uint *)this = uVar4 + 1;
      uVar5 = function_body_decoder::decode_local_type(uVar3,this + 4);
      if (((uVar5 & 1) != 0) &&
         (this[4] != (SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0)) {
        return;
      }
      pcVar6 = "invalid select type";
      goto LAB_01333c00;
    }
  }
  else {
    *(undefined4 *)this = 0;
    Decoder::errorf((uchar *)param_1,(char *)pbVar1,"expected %s","number of select types");
  }
  pcVar6 = "Invalid number of types. Select accepts exactly one type";
LAB_01333c00:
  Decoder::error(param_1,pbVar1,pcVar6);
  return;
}

