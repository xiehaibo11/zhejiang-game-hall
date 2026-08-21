
/* v8::internal::wasm::ModuleDecoderImpl::DecodeGlobalInModule(v8::internal::wasm::WasmModule*,
   unsigned int, v8::internal::wasm::WasmGlobal*) */

void __thiscall
v8::internal::wasm::ModuleDecoderImpl::DecodeGlobalInModule
          (ModuleDecoderImpl *this,WasmModule *param_1,uint param_2,WasmGlobal *param_3)

{
  WasmGlobal WVar1;
  WasmGlobal WVar2;
  byte *pbVar3;
  char *pcVar4;
  char *pcVar5;
  ulong uVar6;
  byte bVar7;
  char *pcVar8;
  undefined1 auVar9 [16];
  
  WVar2 = (WasmGlobal)consume_value_type(this);
  *param_3 = WVar2;
  pbVar3 = *(byte **)(this + 0x10);
  if (*(int *)(this + 0x18) == (int)pbVar3) {
    Decoder::errorf((uchar *)this,(char *)pbVar3,"expected %u bytes, fell off end",1);
    bVar7 = 0;
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(this + 0x18);
  }
  else {
    bVar7 = *pbVar3;
    *(byte **)(this + 0x10) = pbVar3 + 1;
    if (1 < bVar7) {
      Decoder::error((Decoder *)this,pbVar3,"invalid mutability");
    }
  }
  param_3[1] = (WasmGlobal)(bVar7 != 0);
  pcVar8 = *(char **)(this + 0x10);
  auVar9 = consume_init_expr(this,param_1,0);
  uVar6 = auVar9._8_8_;
  *(undefined1 (*) [16])(param_3 + 8) = auVar9;
  WVar2 = (WasmGlobal)0x0;
  switch(auVar9._0_8_ & 0xffffffff) {
  case 0:
    break;
  case 1:
    if (param_2 <= auVar9._8_4_) {
      Decoder::errorf((uchar *)this,pcVar8,
                      "invalid global index in init expression, index %u, other_index %u",
                      (ulong)param_2,uVar6 & 0xffffffff);
      return;
    }
    WVar1 = *(WasmGlobal *)(*(long *)(param_1 + 0x18) + (uVar6 & 0xffffffff) * 0x20);
    WVar2 = *param_3;
    if (WVar1 == WVar2) {
      return;
    }
    if ((byte)WVar2 < 0xb) {
      pcVar4 = (&PTR_s_<stmt>_01cc9f80)[(char)WVar2];
    }
    else {
      pcVar4 = "<unknown>";
    }
    if ((byte)WVar1 < 0xb) {
      pcVar5 = (&PTR_s_<stmt>_01cc9f80)[(char)WVar1];
    }
    else {
      pcVar5 = "<unknown>";
    }
    Decoder::errorf((uchar *)this,pcVar8,
                    "type mismatch in global initialization (from global #%u), expected %s, got %s",
                    uVar6 & 0xffffffff,pcVar4,pcVar5);
    return;
  case 2:
    WVar2 = (WasmGlobal)0x1;
    break;
  case 3:
    WVar2 = (WasmGlobal)0x2;
    break;
  case 4:
    WVar2 = (WasmGlobal)0x3;
    break;
  case 5:
    WVar2 = (WasmGlobal)0x4;
    break;
  case 6:
    WVar2 = (WasmGlobal)0x8;
    break;
  case 7:
    WVar2 = (WasmGlobal)0x7;
    break;
  default:
    goto switchD_015f368c_default;
  }
  WVar1 = *param_3;
  if (WVar1 != WVar2) {
    if (((WVar2 != (WasmGlobal)0x8 || WVar1 != (WasmGlobal)0x9) &&
        (WVar1 != (WasmGlobal)0x6 || 2 < (byte)((char)WVar2 - 7U))) &&
       (WVar2 != (WasmGlobal)0x8 || WVar1 != (WasmGlobal)0x7)) {
      if ((byte)WVar1 < 0xb) {
        pcVar4 = (&PTR_s_<stmt>_01cc9f80)[(char)WVar1];
      }
      else {
        pcVar4 = "<unknown>";
      }
      if (7 < auVar9._0_4_) {
switchD_015f368c_default:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      pcVar5 = "i32";
      switch(auVar9._0_8_ & 0xffffffff) {
      case 1:
        if ((uVar6 & 0xffffffff) <
            (ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18) >> 5)) {
          uVar6 = (ulong)*(char *)(*(long *)(param_1 + 0x18) + (uVar6 & 0xffffffff) * 0x20);
          if (uVar6 < 0xb) {
            pcVar5 = (&PTR_s_<stmt>_01cc9f80)[uVar6];
          }
          else {
            pcVar5 = "<unknown>";
          }
          break;
        }
      case 0:
        pcVar5 = "<stmt>";
        break;
      case 3:
        pcVar5 = "i64";
        break;
      case 4:
        pcVar5 = "f32";
        break;
      case 5:
        pcVar5 = "f64";
        break;
      case 6:
        pcVar5 = "nullref";
        break;
      case 7:
        pcVar5 = "funcref";
      }
      Decoder::errorf((uchar *)this,pcVar8,
                      "type error in global initialization, expected %s, got %s",pcVar4,pcVar5);
      return;
    }
  }
  return;
}

