
/* v8::internal::wasm::ModuleDecoderImpl::consume_data_segment_header(bool*, unsigned int*,
   v8::internal::wasm::WasmInitExpr*) */

void __thiscall
v8::internal::wasm::ModuleDecoderImpl::consume_data_segment_header
          (ModuleDecoderImpl *this,bool *param_1,uint *param_2,WasmInitExpr *param_3)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  undefined1 auVar4 [16];
  
  pcVar3 = *(char **)(this + 0x10);
  iVar1 = Decoder::consume_u32v((Decoder *)this,"flag");
  if (iVar1 == 0) {
    *param_1 = true;
    *param_2 = 0;
LAB_015f5594:
    auVar4 = consume_init_expr(this,*(undefined8 *)(this + 0x50),1);
    *(undefined1 (*) [16])param_3 = auVar4;
    return;
  }
  if (iVar1 == 2) {
    if ((*(ushort *)(this + 0x48) & 0x220) != 0) {
      *param_1 = true;
      uVar2 = Decoder::consume_u32v((Decoder *)this,"memory index");
      *param_2 = uVar2;
      goto LAB_015f5594;
    }
    pcVar3 = 
    "Element segments with table indices require --experimental-wasm-bulk-memory or --experimental-wasm-anyref"
    ;
  }
  else {
    if (iVar1 != 1) {
      Decoder::errorf((uchar *)this,pcVar3,"illegal flag value %u. Must be 0, 1, or 2");
      return;
    }
    if (((byte)this[0x49] >> 1 & 1) != 0) {
      *param_1 = false;
      return;
    }
    pcVar3 = "Passive element segments require --experimental-wasm-bulk-memory";
  }
  Decoder::error((Decoder *)this,pcVar3);
  return;
}

