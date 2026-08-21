
/* v8::internal::IntToCString(int, v8::internal::Vector<char>) */

long __thiscall v8::internal::IntToCString(int param_1,long param_2,long param_3)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  int iVar6;
  
  lVar3 = (param_3 << 0x20) + -0x100000000;
  pcVar5 = (char *)(param_2 + (lVar3 >> 0x20));
  iVar6 = -param_1;
  if (param_1 < 0) {
    iVar6 = param_1;
  }
  *pcVar5 = '\0';
  do {
    lVar4 = lVar3;
    pcVar5 = pcVar5 + -1;
    cVar2 = (char)iVar6;
    uVar1 = iVar6 + 9;
    iVar6 = iVar6 / 10;
    *pcVar5 = ((char)iVar6 * '\n' - cVar2) + '0';
    lVar3 = lVar4 + -0x100000000;
  } while (0x12 < uVar1);
  if (-1 < param_1) {
    return param_2 + (lVar3 >> 0x20);
  }
  lVar3 = lVar4 + -0x200000000 >> 0x20;
  *(undefined1 *)(param_2 + lVar3) = 0x2d;
  return param_2 + lVar3;
}

