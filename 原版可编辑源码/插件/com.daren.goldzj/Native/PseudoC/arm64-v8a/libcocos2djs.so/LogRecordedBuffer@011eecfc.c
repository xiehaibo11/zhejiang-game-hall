
/* v8::internal::CodeAddressMap::LogRecordedBuffer(v8::internal::AbstractCode,
   v8::internal::SharedFunctionInfo, char const*, int) */

void __thiscall
v8::internal::CodeAddressMap::LogRecordedBuffer
          (CodeAddressMap *this,long param_2,undefined8 param_3,byte *param_4,uint param_5)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  long lVar19;
  byte *pbVar20;
  long *plVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  byte *pbVar25;
  ulong uVar26;
  byte *pbVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  
  lVar19 = NameMap::FindOrCreateEntry((NameMap *)(this + 0x18),param_2 - 1);
  if (*(long *)(lVar19 + 8) != 0) {
    return;
  }
  pbVar20 = operator_new__((long)(int)(param_5 + 1),(nothrow_t *)&std::nothrow);
  if (pbVar20 == (byte *)0x0) {
    plVar21 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar21 + 0x18))();
    pbVar20 = operator_new__((long)(int)(param_5 + 1),(nothrow_t *)&std::nothrow);
    if (pbVar20 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
    }
  }
  if (0 < (int)param_5) {
    uVar22 = (ulong)param_5;
    if (param_5 < 0x10) {
      uVar24 = 0;
    }
    else {
      uVar24 = uVar22 & 0xfffffff0;
      uVar26 = uVar24;
      pbVar25 = pbVar20;
      pbVar27 = param_4;
      do {
        uVar3 = *(undefined8 *)(pbVar27 + 8);
        bVar28 = (byte)((ulong)uVar3 >> 8);
        bVar29 = (byte)((ulong)uVar3 >> 0x10);
        bVar30 = (byte)((ulong)uVar3 >> 0x18);
        bVar31 = (byte)((ulong)uVar3 >> 0x20);
        bVar32 = (byte)((ulong)uVar3 >> 0x28);
        bVar33 = (byte)((ulong)uVar3 >> 0x30);
        bVar34 = (byte)((ulong)uVar3 >> 0x38);
        uVar2 = *(undefined8 *)pbVar27;
        bVar1 = *pbVar27;
        bVar4 = pbVar27[1];
        bVar5 = pbVar27[2];
        bVar6 = pbVar27[3];
        bVar7 = pbVar27[4];
        bVar8 = pbVar27[5];
        bVar9 = pbVar27[6];
        bVar10 = pbVar27[7];
        bVar11 = *pbVar27;
        bVar12 = pbVar27[1];
        bVar13 = pbVar27[2];
        bVar14 = pbVar27[3];
        bVar15 = pbVar27[4];
        bVar16 = pbVar27[5];
        bVar17 = pbVar27[6];
        bVar18 = pbVar27[7];
        uVar26 = uVar26 - 0x10;
        pbVar25[8] = pbVar27[8] ^ (pbVar27[8] ^ 0x20) & -((char)uVar3 == '\0');
        pbVar25[9] = bVar28 ^ (bVar28 ^ 0x20) & -(bVar28 == 0);
        pbVar25[10] = bVar29 ^ (bVar29 ^ 0x20) & -(bVar29 == 0);
        pbVar25[0xb] = bVar30 ^ (bVar30 ^ 0x20) & -(bVar30 == 0);
        pbVar25[0xc] = bVar31 ^ (bVar31 ^ 0x20) & -(bVar31 == 0);
        pbVar25[0xd] = bVar32 ^ (bVar32 ^ 0x20) & -(bVar32 == 0);
        pbVar25[0xe] = bVar33 ^ (bVar33 ^ 0x20) & -(bVar33 == 0);
        pbVar25[0xf] = bVar34 ^ (bVar34 ^ 0x20) & -(bVar34 == 0);
        *pbVar25 = bVar1 ^ (bVar11 ^ 0x20) & -((char)uVar2 == '\0');
        pbVar25[1] = bVar4 ^ (bVar12 ^ 0x20) & -((char)((ulong)uVar2 >> 8) == '\0');
        pbVar25[2] = bVar5 ^ (bVar13 ^ 0x20) & -((char)((ulong)uVar2 >> 0x10) == '\0');
        pbVar25[3] = bVar6 ^ (bVar14 ^ 0x20) & -((char)((ulong)uVar2 >> 0x18) == '\0');
        pbVar25[4] = bVar7 ^ (bVar15 ^ 0x20) & -((char)((ulong)uVar2 >> 0x20) == '\0');
        pbVar25[5] = bVar8 ^ (bVar16 ^ 0x20) & -((char)((ulong)uVar2 >> 0x28) == '\0');
        pbVar25[6] = bVar9 ^ (bVar17 ^ 0x20) & -((char)((ulong)uVar2 >> 0x30) == '\0');
        pbVar25[7] = bVar10 ^ (bVar18 ^ 0x20) & -((char)((ulong)uVar2 >> 0x38) == '\0');
        pbVar25 = pbVar25 + 0x10;
        pbVar27 = pbVar27 + 0x10;
      } while (uVar26 != 0);
      if (uVar24 == uVar22) goto LAB_011eede4;
    }
    lVar23 = uVar22 - uVar24;
    pbVar25 = param_4 + uVar24;
    pbVar27 = pbVar20 + uVar24;
    do {
      bVar1 = 0x20;
      if (*pbVar25 != 0) {
        bVar1 = *pbVar25;
      }
      lVar23 = lVar23 + -1;
      *pbVar27 = bVar1;
      pbVar25 = pbVar25 + 1;
      pbVar27 = pbVar27 + 1;
    } while (lVar23 != 0);
  }
LAB_011eede4:
  pbVar20[(int)param_5] = 0;
  *(byte **)(lVar19 + 8) = pbVar20;
  return;
}

