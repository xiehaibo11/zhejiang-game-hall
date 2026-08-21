
/* v8::internal::wasm::ModuleDecoderImpl::consume_element_segment_header(bool*, bool*, unsigned
   int*, v8::internal::wasm::WasmInitExpr*) */

void __thiscall
v8::internal::wasm::ModuleDecoderImpl::consume_element_segment_header
          (ModuleDecoderImpl *this,bool *param_1,bool *param_2,uint *param_3,WasmInitExpr *param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  pbVar6 = *(byte **)(this + 0x10);
  if ((*(ushort *)(this + 0x48) & 0x220) == 0) {
    iVar3 = Decoder::consume_u32v((Decoder *)this,"table index");
    if (iVar3 != 0) {
      pcVar4 = 
      "Element segments with table indices require --experimental-wasm-bulk-memory or --experimental-wasm-anyref"
      ;
      goto LAB_015f4f48;
    }
    uVar8 = 0;
  }
  else {
    if (*(int *)(this + 0x18) == (int)pbVar6) {
      Decoder::errorf((uchar *)this,(char *)pbVar6,"expected %u bytes, fell off end",1);
      pbVar5 = *(byte **)(this + 0x18);
      uVar8 = 0;
    }
    else {
      pbVar5 = pbVar6 + 1;
      uVar8 = (ulong)*pbVar6;
    }
    *(byte **)(this + 0x10) = pbVar5;
  }
  uVar7 = (uint)uVar8;
  uVar2 = uVar7 >> 2 & 1;
  *param_1 = (uVar8 & 1) == 0;
  *param_2 = SUB41(uVar2,0);
  if (((uVar8 & 1) != 0) && (((byte)this[0x49] >> 1 & 1) == 0)) {
    pcVar4 = "Passive element segments require --experimental-wasm-bulk-memory";
LAB_015f4f48:
    Decoder::error((Decoder *)this,pcVar4);
    return;
  }
  if ((uVar2 != 0) && (((byte)this[0x49] >> 1 & 1) == 0)) {
    pcVar4 = "Illegal segment flag. Did you forget --experimental-wasm-bulk-memory?";
    goto LAB_015f4f48;
  }
  if (uVar7 == 0) {
LAB_015f4e64:
    if ((*param_1 != false) || ((uVar7 >> 1 & 1) == 0)) goto LAB_015f4e88;
  }
  else {
    if ((*(ushort *)(this + 0x48) & 0x220) == 0) {
      pcVar4 = 
      "Invalid segment flag. Did you forget --experimental-wasm-bulk-memory or --experimental-wasm-anyref?"
      ;
      goto LAB_015f4f48;
    }
    if (uVar7 < 8) goto LAB_015f4e64;
  }
  Decoder::errorf((uchar *)this,(char *)pbVar6,"illegal flag value %u. Must be 0, 1, 2, 4, 5 or 6",
                  uVar8);
LAB_015f4e88:
  if ((uVar7 >> 1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = Decoder::consume_u32v((Decoder *)this,"table index");
  }
  *param_3 = uVar2;
  if (*param_1 != false) {
    auVar9 = consume_init_expr(this,*(undefined8 *)(this + 0x50),1);
    *(undefined1 (*) [16])param_4 = auVar9;
    if (((uVar7 >> 1 & 1) == 0) && (*param_1 != false)) {
      return;
    }
  }
  if (*param_2 == false) {
    pcVar4 = *(char **)(this + 0x10);
    if (*(int *)(this + 0x18) == (int)pcVar4) {
      Decoder::errorf((uchar *)this,pcVar4,"expected %u bytes, fell off end",1);
      *(undefined8 *)(this + 0x10) = *(undefined8 *)(this + 0x18);
    }
    else {
      cVar1 = *pcVar4;
      *(char **)(this + 0x10) = pcVar4 + 1;
      if (cVar1 != '\0') {
        Decoder::errorf((uchar *)this,(char *)pbVar6,"illegal element kind %x. Must be 0x00");
        return;
      }
    }
  }
  else {
    uVar2 = consume_reference_type(this);
    if ((uVar2 & 0xfe) != 6) {
      Decoder::error((Decoder *)this,(uchar *)(*(long *)(this + 0x10) + -1),
                     "invalid element segment type");
      return;
    }
  }
  return;
}

