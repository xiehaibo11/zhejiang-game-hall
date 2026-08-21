
/* unsigned int v8::internal::StringHasher::HashSequentialString<char>(char const*, int, unsigned
   long) */

uint v8::internal::StringHasher::HashSequentialString<char>(char *param_1,int param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  ulong uVar5;
  long lVar6;
  
  uVar2 = (uint)param_3;
  if (param_2 < 1) {
    if (param_2 == 0) goto LAB_011a86a4;
    uVar5 = (ulong)param_2;
  }
  else {
    uVar3 = (byte)*param_1 - 0x30;
    if (uVar3 < 10) {
      if (param_2 == 1) {
LAB_011a85dc:
        uVar2 = MakeArrayIndexHash(uVar3,param_2);
        return uVar2;
      }
      if ((byte)*param_1 != 0x30) {
        if (param_2 < 0xb) {
          lVar6 = (ulong)(uint)param_2 - 1;
          pbVar4 = (byte *)param_1;
          do {
            pbVar4 = pbVar4 + 1;
            uVar1 = *pbVar4 - 0x30;
            if ((9 < uVar1) || (0x19999999U - ((int)(*pbVar4 - 0x2d) >> 3) < uVar3))
            goto LAB_011a864c;
            uVar3 = uVar1 + uVar3 * 10;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
          goto LAB_011a85dc;
        }
LAB_011a864c:
        if (param_2 < 0x11) {
          uVar3 = 0;
          if (param_2 != 0) {
            uVar5 = 0;
            lVar6 = (long)param_2;
            uVar2 = (uint)(byte)*param_1;
            do {
              if (uVar2 - 0x30 < 10) {
                uVar5 = (ulong)(uVar2 - 0x30) + uVar5 * 10;
                uVar3 = (uint)(uVar5 >> 0x35 != 0) << 2;
              }
              else {
                uVar3 = 4;
              }
              do {
                uVar2 = ((int)param_3 + uVar2) * 0x401;
                param_1 = param_1 + 1;
                lVar6 = lVar6 + -1;
                uVar2 = uVar2 ^ uVar2 >> 6;
                param_3 = (ulong)uVar2;
                if (lVar6 == 0) goto LAB_011a8718;
                uVar2 = (uint)(byte)*param_1;
              } while (uVar3 != 0);
            } while( true );
          }
LAB_011a8718:
          uVar2 = (uVar2 * 9 ^ uVar2 * 9 >> 0xb) * 0x8001;
          return uVar3 | ((int)((uVar2 & 0x1fffffff) - 1) >> 0x1f & 0x1bU | uVar2) << 3 | 2;
        }
      }
    }
    if (0x3fff < param_2) {
      return param_2 << 2 | 6;
    }
    uVar5 = (ulong)(uint)param_2;
  }
  do {
    uVar5 = uVar5 - 1;
    uVar2 = ((int)param_3 + (uint)(byte)*param_1) * 0x401;
    uVar2 = uVar2 ^ uVar2 >> 6;
    param_3 = (ulong)uVar2;
    param_1 = param_1 + 1;
  } while (uVar5 != 0);
LAB_011a86a4:
  uVar2 = (uVar2 * 9 ^ uVar2 * 9 >> 0xb) * 0x8001;
  return ((int)((uVar2 & 0x1fffffff) - 1) >> 0x1f & 0x1bU | uVar2) << 3 | 6;
}

