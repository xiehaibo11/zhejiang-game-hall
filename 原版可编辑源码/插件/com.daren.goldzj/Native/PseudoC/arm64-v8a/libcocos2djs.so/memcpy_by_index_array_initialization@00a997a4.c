
long memcpy_by_index_array_initialization(long param_1,ulong param_2,uint param_3,uint param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  undefined2 uVar5;
  uint uVar6;
  
  uVar2 = 0;
  uVar6 = param_4 | param_3;
  if ((param_2 != 0) && (uVar6 != 0)) {
    cVar4 = '\0';
    uVar3 = 0;
    do {
      uVar1 = uVar6 & -uVar6 & param_4;
      if ((uVar1 & param_3) == 0) {
        if (uVar1 == 0) {
          uVar2 = uVar3 + 1;
          *(undefined1 *)(param_1 + uVar3) = 0xff;
        }
        else {
          cVar4 = cVar4 + '\x01';
          uVar2 = uVar3;
        }
      }
      else {
        *(char *)(param_1 + uVar3) = cVar4;
        uVar2 = uVar3 + 1;
        cVar4 = cVar4 + '\x01';
      }
      uVar6 = uVar6 & -uVar6 ^ uVar6;
    } while ((uVar2 < param_2) && (uVar3 = uVar2, uVar6 != 0));
  }
  uVar6 = uVar6 & param_3;
  uVar6 = CONCAT13(POPCOUNT((char)(uVar6 >> 0x18)),
                   CONCAT12(POPCOUNT((char)(uVar6 >> 0x10)),
                            CONCAT11(POPCOUNT((char)(uVar6 >> 8)),POPCOUNT((char)uVar6))));
  uVar5 = NEON_uaddlv((ulong)uVar6,1);
  return uVar2 + CONCAT22((short)(uVar6 >> 0x10),uVar5);
}

