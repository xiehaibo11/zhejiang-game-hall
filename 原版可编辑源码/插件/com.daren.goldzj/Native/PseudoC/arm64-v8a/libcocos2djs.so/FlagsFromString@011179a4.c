
/* v8::internal::JSRegExp::FlagsFromString(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::String>, bool*) */

uint v8::internal::JSRegExp::FlagsFromString(undefined8 param_1,ulong *param_2,undefined1 *param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  byte *pbVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined8 local_30 [2];
  
  uVar7 = *param_2;
  uVar6 = *(uint *)(uVar7 + 7);
  uVar11 = (ulong)uVar6;
  if (uVar6 == 0) {
    *param_3 = 1;
    return 0;
  }
  if (6 < (int)uVar6) {
    return 0;
  }
  uVar9 = uVar7 & 0xffffffff00000000 | 7;
  if (((*(ushort *)(uVar9 + *(uint *)(uVar7 - 1)) < 0x40) &&
      ((*(byte *)(uVar9 + *(uint *)(uVar7 - 1)) & 7) == 0)) &&
     ((*(byte *)(uVar9 + *(uint *)(uVar7 - 1)) >> 3 & 1) != 0)) {
    if (0 < (int)uVar6) {
      pbVar5 = (byte *)(uVar7 + 0xb);
      uVar6 = 0x40;
      do {
        uVar8 = *pbVar5 - 0x67;
        uVar3 = uVar8 * 0x80;
        uVar8 = uVar8 >> 1;
        uVar1 = uVar8 & 0x7f;
        if (((uVar3 & 0xff | uVar1) < 10) && ((0x28bU >> (ulong)(uVar8 & 0x1f) & 1) != 0)) {
          uVar8 = *(uint *)(&DAT_019da468 + (long)(char)((byte)uVar3 | (byte)uVar1) * 4);
        }
        else {
          uVar8 = 0x20;
          if (*pbVar5 != 0x73) {
            uVar8 = 0x40;
          }
        }
        if ((uVar8 & uVar6) != 0) {
          return 0;
        }
        uVar6 = uVar8 | uVar6;
        uVar11 = uVar11 - 1;
        pbVar5 = pbVar5 + 1;
      } while (uVar11 != 0);
      goto LAB_01117b60;
    }
  }
  else {
    puVar4 = (undefined8 *)String::Flatten(param_1,param_2,0);
    local_30[0] = *puVar4;
    auVar12 = String::GetFlatContent((PerThreadAssertScopeDebugOnly *)local_30);
    pbVar5 = auVar12._0_8_;
    if (0 < (int)uVar6) {
      uVar7 = auVar12._8_8_ & 0xffffffff00000000;
      uVar6 = 0x40;
      pbVar10 = pbVar5;
      if (uVar7 != 0x100000000) goto LAB_01117aa4;
      do {
        bVar2 = *pbVar10;
        while( true ) {
          uVar8 = bVar2 - 0x67;
          uVar3 = uVar8 * 0x80;
          uVar8 = uVar8 >> 1;
          uVar1 = uVar8 & 0x7f;
          if (((uVar3 & 0xff | uVar1) < 10) && ((0x28bU >> (ulong)(uVar8 & 0x1f) & 1) != 0)) {
            uVar8 = *(uint *)(&DAT_019da468 + (long)(char)((byte)uVar3 | (byte)uVar1) * 4);
          }
          else {
            uVar8 = 0x20;
            if (bVar2 != 0x73) {
              uVar8 = 0x40;
            }
          }
          if ((uVar8 & uVar6) != 0) {
            return 0;
          }
          uVar6 = uVar8 | uVar6;
          pbVar10 = pbVar10 + 1;
          uVar11 = uVar11 - 1;
          pbVar5 = pbVar5 + 2;
          if (uVar11 == 0) goto LAB_01117b60;
          if (uVar7 == 0x100000000) break;
LAB_01117aa4:
          bVar2 = *pbVar5;
        }
      } while( true );
    }
  }
  uVar6 = 0x40;
LAB_01117b60:
  *param_3 = 1;
  return uVar6 ^ 0x40;
}

