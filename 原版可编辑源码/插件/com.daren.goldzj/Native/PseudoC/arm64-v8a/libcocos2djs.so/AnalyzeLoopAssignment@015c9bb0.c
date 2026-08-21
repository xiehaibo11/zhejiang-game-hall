
/* v8::internal::wasm::WasmDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1>::AnalyzeLoopAssignment(v8::internal::wasm::Decoder*,
   unsigned char const*, unsigned int, v8::internal::Zone*) */

uint * v8::internal::wasm::WasmDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1>::
       AnalyzeLoopAssignment(Decoder *param_1,uchar *param_2,uint param_3,Zone *param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  uint local_68 [2];
  
  if ((param_2 < *(uchar **)(param_1 + 0x18)) && (*param_2 == '\x03')) {
    puVar4 = *(uint **)(param_4 + 0x10);
    if ((ulong)(*(long *)(param_4 + 0x18) - (long)puVar4) < 0x10) {
      puVar4 = (uint *)Zone::NewExpand(param_4,0x10);
    }
    else {
      *(uint **)(param_4 + 0x10) = puVar4 + 4;
    }
    *puVar4 = param_3;
    if ((int)param_3 < 0x41) {
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[1] = 1;
      iVar9 = param_3 + 0x3e;
      if (-1 < (int)(param_3 - 1)) {
        iVar9 = param_3 - 1;
      }
      iVar9 = iVar9 >> 6;
    }
    else {
      iVar9 = param_3 + 0x3e;
      if (-1 < (int)(param_3 - 1)) {
        iVar9 = param_3 - 1;
      }
      iVar9 = iVar9 >> 6;
      puVar10 = puVar4 + 2;
      puVar10[0] = 0;
      puVar10[1] = 0;
      uVar3 = iVar9 + 1;
      puVar4[1] = uVar3;
      puVar5 = *(undefined8 **)(param_4 + 0x10);
      uVar8 = (ulong)uVar3 * 8;
      if (uVar8 < (ulong)(*(long *)(param_4 + 0x18) - (long)puVar5) ||
          uVar8 - (*(long *)(param_4 + 0x18) - (long)puVar5) == 0) {
        *(undefined8 **)(param_4 + 0x10) = puVar5 + uVar3;
      }
      else {
        puVar5 = (undefined8 *)Zone::NewExpand(param_4,uVar8);
      }
      *(undefined8 **)(puVar4 + 2) = puVar5;
      if (puVar4[1] == 1) {
        puVar10[0] = 0;
        puVar10[1] = 0;
      }
      else if ((0 < (int)puVar4[1]) && (*puVar5 = 0, 1 < (int)puVar4[1])) {
        lVar6 = 1;
        do {
          *(undefined8 *)(*(long *)(puVar4 + 2) + lVar6 * 8) = 0;
          lVar6 = lVar6 + 1;
        } while (lVar6 < (int)puVar4[1]);
      }
    }
    iVar11 = 0;
    do {
      if (*(byte **)(param_1 + 0x18) <= param_2) break;
      if (((byte)param_1[0x30] & 1) == 0) {
        if ((byte)param_1[0x30] >> 1 != 0) break;
      }
      else if (*(long *)(param_1 + 0x38) != 0) break;
      switch(*param_2) {
      case '\x02':
      case '\x03':
      case '\x04':
      case '\x06':
        uVar8 = OpcodeLength(param_1,param_2);
        iVar11 = iVar11 + 1;
        break;
      case '\v':
        iVar11 = iVar11 + -1;
        uVar8 = 1;
        break;
      case '\x10':
      case '\x11':
      case '\x12':
      case '\x13':
      case '@':
        puVar7 = (ulong *)(puVar4 + 2);
        if (puVar4[1] != 1) {
          puVar7 = (ulong *)(*(long *)(puVar4 + 2) + (long)iVar9 * 8);
        }
        *puVar7 = *puVar7 | 1L << ((ulong)(param_3 - 1) & 0x3f);
      default:
        uVar8 = OpcodeLength(param_1,param_2);
        break;
      case '!':
      case '\"':
        pbVar1 = param_2 + 1;
        if (pbVar1 < *(byte **)(param_1 + 0x18)) {
          uVar3 = *pbVar1 & 0x7f;
          uVar8 = (ulong)uVar3;
          if ((char)*pbVar1 < '\0') {
            uVar3 = Decoder::
                    read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                              (param_1,param_2 + 2,local_68,"local index",uVar3);
            uVar8 = (ulong)uVar3;
          }
          else {
            local_68[0] = 1;
          }
        }
        else {
          local_68[0] = 0;
          Decoder::errorf((uchar *)param_1,(char *)pbVar1,"expected %s","local index");
          uVar8 = 0;
        }
        uVar3 = (uint)uVar8;
        if ((0 < (int)*puVar4) && (uVar3 < *puVar4)) {
          puVar7 = (ulong *)(puVar4 + 2);
          if (puVar4[1] != 1) {
            uVar2 = uVar3 + 0x3f;
            if (-1 < (int)uVar3) {
              uVar2 = uVar3;
            }
            puVar7 = (ulong *)(*(long *)(puVar4 + 2) + (long)((int)uVar2 >> 6) * 8);
          }
          *puVar7 = *puVar7 | 1L << (uVar8 & 0x3f);
        }
        uVar8 = (ulong)(local_68[0] + 1);
      }
      param_2 = param_2 + (uVar8 & 0xffffffff);
    } while (0 < iVar11);
    if (((byte)param_1[0x30] & 1) == 0) {
      uVar8 = (ulong)((byte)param_1[0x30] >> 1);
    }
    else {
      uVar8 = *(ulong *)(param_1 + 0x38);
    }
    if (uVar8 != 0) {
      puVar4 = (uint *)0x0;
    }
  }
  else {
    puVar4 = (uint *)0x0;
  }
  return puVar4;
}

