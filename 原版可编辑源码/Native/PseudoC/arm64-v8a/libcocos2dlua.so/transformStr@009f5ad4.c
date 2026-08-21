
/* universe::network::Encryption::transformStr(unsigned char const*, unsigned long, unsigned char**,
   unsigned long*) */

void __thiscall
universe::network::Encryption::transformStr
          (Encryption *this,uchar *param_1,ulong param_2,uchar **param_3,ulong *param_4)

{
  bool bVar1;
  ulong uVar2;
  uchar *puVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar2 = 0;
  if (param_1 != (uchar *)0x0) {
    uVar2 = param_2;
  }
  *param_4 = uVar2 << 1;
  puVar3 = malloc(uVar2 << 1 | 1);
  uVar4 = 0;
  *param_3 = puVar3;
  if (uVar2 != 0) {
    uVar5 = 0;
    uVar4 = 1;
    do {
      FUN_009f5b68(puVar3 + uVar5,0xffffffffffffffff);
      puVar3 = *param_3;
      uVar5 = uVar5 + 2;
      bVar1 = uVar4 < uVar2;
      uVar4 = (ulong)((int)uVar4 + 1);
    } while (bVar1);
    uVar4 = *param_4;
  }
  puVar3[uVar4] = '\0';
  return;
}

