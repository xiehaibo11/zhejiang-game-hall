
/* v8::internal::wasm::LocalDeclEncoder::Emit(unsigned char*) const */

long __thiscall v8::internal::wasm::LocalDeclEncoder::Emit(LocalDeclEncoder *this,uchar *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  uint uVar11;
  
  uVar8 = (ulong)(*(long *)(this + 0x10) - *(long *)(this + 8)) >> 3;
  uVar7 = (uint)uVar8;
  pbVar5 = param_1;
  if (0x7f < uVar7) {
    pbVar6 = param_1;
    uVar9 = uVar8 & 0xffffffff;
    do {
      bVar10 = (byte)uVar8;
      uVar8 = uVar9 >> 7;
      uVar7 = (uint)uVar8;
      uVar4 = uVar9 >> 0xe;
      pbVar5 = pbVar6 + 1;
      *pbVar6 = bVar10 | 0x80;
      pbVar6 = pbVar5;
      uVar9 = uVar8;
    } while (uVar4 != 0);
  }
  pbVar6 = pbVar5 + 1;
  *pbVar5 = (byte)uVar7 & 0x7f;
  puVar2 = *(uint **)(this + 0x10);
  for (puVar1 = *(uint **)(this + 8); puVar1 != puVar2; puVar1 = puVar1 + 2) {
    uVar7 = *puVar1;
    pbVar5 = pbVar6;
    uVar11 = uVar7;
    if (0x7f < uVar7) {
      do {
        uVar7 = uVar11 >> 7;
        uVar3 = uVar11 >> 0xe;
        pbVar6 = pbVar5 + 1;
        *pbVar5 = (byte)uVar11 | 0x80;
        pbVar5 = pbVar6;
        uVar11 = uVar7;
      } while (uVar3 != 0);
    }
    *pbVar6 = (byte)uVar7 & 0x7f;
    bVar10 = 0x7f;
    switch((char)puVar1[1]) {
    case '\0':
      bVar10 = 0x40;
      break;
    case '\x01':
      break;
    case '\x02':
      bVar10 = 0x7e;
      break;
    case '\x03':
      bVar10 = 0x7d;
      break;
    case '\x04':
      bVar10 = 0x7c;
      break;
    case '\x05':
      bVar10 = 0x7b;
      break;
    case '\x06':
      bVar10 = 0x6f;
      break;
    case '\a':
      bVar10 = 0x70;
      break;
    default:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    case '\t':
      bVar10 = 0x68;
    }
    pbVar6[1] = bVar10;
    pbVar6 = pbVar6 + 2;
  }
  return (long)pbVar6 - (long)param_1;
}

