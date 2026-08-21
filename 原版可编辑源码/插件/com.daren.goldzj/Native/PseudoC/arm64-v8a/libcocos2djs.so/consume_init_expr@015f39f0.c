
/* v8::internal::wasm::ModuleDecoderImpl::consume_init_expr(v8::internal::wasm::WasmModule*,
   v8::internal::wasm::ValueType) */

uint __thiscall
v8::internal::wasm::ModuleDecoderImpl::consume_init_expr
          (ModuleDecoderImpl *this,long param_1,char param_3)

{
  long lVar1;
  char *pcVar2;
  char cVar3;
  byte bVar4;
  long lVar5;
  uint uVar6;
  ulong *puVar7;
  ulong uVar8;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  ulong *puVar12;
  byte *pbVar13;
  ulong uVar14;
  undefined8 local_80;
  ulong local_78;
  uint local_70 [2];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  pcVar2 = *(char **)(this + 0x10);
  puVar12 = *(ulong **)(this + 0x18);
  iVar11 = (int)puVar12;
  if (iVar11 == (int)pcVar2) {
    Decoder::errorf((uchar *)this,pcVar2,"expected %u bytes, fell off end",1);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(this + 0x18);
switchD_015f3a60_caseD_24:
    Decoder::error((Decoder *)this,"invalid opcode in initialization expression");
    puVar7 = *(ulong **)(this + 0x10);
    puVar12 = *(ulong **)(this + 0x18);
    uVar8 = 0;
    uVar6 = 0;
    uVar14 = 0;
LAB_015f3d04:
    pbVar13 = (byte *)((long)puVar7 + uVar8);
    *(byte **)(this + 0x10) = pbVar13;
    if ((int)puVar12 == (int)pbVar13) goto LAB_015f3f14;
    bVar4 = *pbVar13;
    uVar8 = (ulong)bVar4;
    *(byte **)(this + 0x10) = pbVar13 + 1;
    if (bVar4 != 0xb) goto LAB_015f3d28;
  }
  else {
    puVar7 = (ulong *)(pcVar2 + 1);
    cVar3 = *pcVar2;
    *(ulong **)(this + 0x10) = puVar7;
    switch(cVar3) {
    case '#':
      local_80._0_5_ = (uint5)(uint)local_80;
      local_78 = 0;
      if (puVar7 < puVar12) {
        uVar6 = (byte)*puVar7 & 0x7f;
        uVar14 = (ulong)uVar6;
        if ((char)(byte)*puVar7 < '\0') {
          uVar6 = Decoder::
                  read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                            ((Decoder *)this,(uchar *)(pcVar2 + 2),local_70,"global index",uVar6);
          uVar14 = (ulong)uVar6;
        }
        else {
          local_70[0] = 1;
        }
      }
      else {
        local_70[0] = 0;
        Decoder::errorf((uchar *)this,(char *)puVar7,"expected %s","global index");
        uVar14 = 0;
      }
      local_80 = CONCAT44(local_80._4_4_,(int)uVar14);
      if (uVar14 < (ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18) >> 5)) {
        lVar1 = *(long *)(param_1 + 0x18) + uVar14 * 0x20;
        if ((*(char *)(lVar1 + 1) == '\0') && (*(char *)(lVar1 + 0x1c) != '\0')) {
          uVar8 = (ulong)local_70[0];
          uVar6 = 1;
          break;
        }
        pcVar9 = "only immutable imported globals can be used in initializer expressions";
      }
      else {
        pcVar9 = "global index is out of bounds";
      }
      Decoder::error((Decoder *)this,pcVar9);
      uVar14 = 0;
LAB_015f3cec:
      uVar6 = 0;
      uVar8 = 0;
      break;
    case '$':
    case '%':
    case '&':
    case '\'':
    case '(':
    case ')':
    case '*':
    case '+':
    case ',':
    case '-':
    case '.':
    case '/':
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
    case ':':
    case ';':
    case '<':
    case '=':
    case '>':
    case '?':
    case '@':
      goto switchD_015f3a60_caseD_24;
    case 'A':
      uVar6 = Decoder::read_i32v<(v8::internal::wasm::Decoder::ValidateFlag)1>
                        ((Decoder *)this,(uchar *)puVar7,(uint *)((ulong)&local_80 | 4),"immi32");
      uVar14 = (ulong)uVar6;
      uVar8 = local_80 >> 0x20;
      uVar6 = 2;
      break;
    case 'B':
      uVar14 = Decoder::read_i64v<(v8::internal::wasm::Decoder::ValidateFlag)1>
                         ((Decoder *)this,(uchar *)puVar7,(uint *)&local_78,"immi64");
      uVar8 = local_78 & 0xffffffff;
      uVar6 = 3;
      break;
    case 'C':
      if ((puVar12 < puVar7) || ((uint)(iVar11 - (int)puVar7) < 4)) {
        Decoder::error((Decoder *)this,(uchar *)puVar7,"immf32");
        uVar6 = 0;
      }
      else {
        uVar6 = (uint)*puVar7;
      }
      uVar14 = (ulong)uVar6;
      uVar6 = 4;
      uVar8 = 4;
      break;
    case 'D':
      if ((puVar12 < puVar7) || ((uint)(iVar11 - (int)puVar7) < 8)) {
        Decoder::error((Decoder *)this,(uchar *)puVar7,"immf64");
        uVar14 = 0;
      }
      else {
        uVar14 = *puVar7;
      }
      uVar8 = 8;
      uVar6 = 5;
      break;
    default:
      if (cVar3 != -0x30) {
        if (cVar3 == -0x2e) {
          uVar6 = *(uint *)(this + 0x48);
          goto LAB_015f3b68;
        }
        goto switchD_015f3a60_caseD_24;
      }
      uVar6 = *(uint *)(this + 0x48);
      if ((uVar6 & 0x21) == 0) {
LAB_015f3b68:
        if ((uVar6 >> 5 & 1) == 0) goto switchD_015f3a60_caseD_24;
        local_80 = 0x100000000;
        if (puVar7 < puVar12) {
          uVar6 = (byte)*puVar7 & 0x7f;
          uVar14 = (ulong)uVar6;
          if ((char)(byte)*puVar7 < '\0') {
            uVar6 = Decoder::
                    read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                              ((Decoder *)this,(uchar *)(pcVar2 + 2),(uint *)((ulong)&local_80 | 4),
                               "function index",uVar6);
            uVar14 = (ulong)uVar6;
          }
          else {
            local_80 = 0x100000000;
          }
        }
        else {
          local_80 = 0;
          Decoder::errorf((uchar *)this,(char *)puVar7,"expected %s","function index");
          uVar14 = 0;
        }
        local_80 = CONCAT44(local_80._4_4_,(int)uVar14);
        if (uVar14 < (ulong)(*(long *)(param_1 + 0x90) - *(long *)(param_1 + 0x88) >> 5)) {
          uVar8 = (ulong)local_80._4_4_;
          uVar6 = 7;
          break;
        }
        Decoder::errorf((uchar *)this,(char *)(*(long *)(this + 0x10) + -1),
                        "invalid function index: %u",uVar14);
        goto LAB_015f3cec;
      }
      uVar8 = 0;
      uVar14 = 0;
      uVar6 = 6;
      goto LAB_015f3d04;
    }
    puVar7 = *(ulong **)(this + 0x10);
    puVar12 = *(ulong **)(this + 0x18);
    if ((uint)uVar8 <= (uint)((int)puVar12 - (int)puVar7)) goto LAB_015f3d04;
    Decoder::errorf((uchar *)this,(char *)puVar7,"expected %u bytes, fell off end");
    pbVar13 = *(byte **)(this + 0x18);
    *(byte **)(this + 0x10) = pbVar13;
LAB_015f3f14:
    Decoder::errorf((uchar *)this,(char *)pbVar13,"expected %u bytes, fell off end",1);
    uVar8 = 0;
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(this + 0x18);
LAB_015f3d28:
    Decoder::errorf((uchar *)this,(char *)pbVar13,"expected %s 0x%02x, got 0x%02x","end opcode",0xb,
                    uVar8);
    uVar6 = 0;
  }
  if (param_3 == '\0') goto switchD_015f3d70_caseD_2;
  switch(uVar6) {
  case 0:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
    break;
  case 1:
    if (((uVar14 & 0xffffffff) < (ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18) >> 5)
        ) && (*(char *)(*(long *)(param_1 + 0x18) + (uVar14 & 0xffffffff) * 0x20) == '\x01'))
    goto switchD_015f3d70_caseD_2;
    break;
  case 2:
    goto switchD_015f3d70_caseD_2;
  default:
    goto switchD_015f3d70_default;
  }
  if ((byte)(param_3 - 1U) < 10) {
    pcVar9 = (&PTR_s_i32_019f15a8_0x10_01cc9f30)[(char)(param_3 - 1U)];
  }
  else {
    pcVar9 = "<unknown>";
  }
  if (7 < uVar6) {
switchD_015f3d70_default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  pcVar10 = "i32";
  switch(uVar6) {
  case 0:
switchD_015f3dcc_caseD_0:
    pcVar10 = "<stmt>";
    break;
  case 1:
    if ((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18) >> 5) <= (uVar14 & 0xffffffff)
       ) goto switchD_015f3dcc_caseD_0;
    uVar14 = (ulong)*(char *)(*(long *)(param_1 + 0x18) + (uVar14 & 0xffffffff) * 0x20);
    if (uVar14 < 0xb) {
      pcVar10 = (&PTR_s_<stmt>_01cc9f80)[uVar14];
    }
    else {
      pcVar10 = "<unknown>";
    }
    break;
  case 3:
    pcVar10 = "i64";
    break;
  case 4:
    pcVar10 = "f32";
    break;
  case 5:
    pcVar10 = "f64";
    break;
  case 6:
    pcVar10 = "nullref";
    break;
  case 7:
    pcVar10 = "funcref";
  }
  Decoder::errorf((uchar *)this,pcVar2,"type error in init expression, expected %s, got %s",pcVar9,
                  pcVar10);
switchD_015f3d70_caseD_2:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}

