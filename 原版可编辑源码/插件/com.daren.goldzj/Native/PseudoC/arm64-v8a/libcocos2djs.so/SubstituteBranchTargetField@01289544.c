
/* v8::internal::DisassemblingDecoder::SubstituteBranchTargetField(v8::internal::Instruction*, char
   const*) */

undefined8 __thiscall
v8::internal::DisassemblingDecoder::SubstituteBranchTargetField
          (DisassemblingDecoder *this,Instruction *param_1,char *param_2)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  
  lVar4 = 6;
  iVar3 = 6;
  switch(param_2[5]) {
  case 'e':
    iVar3 = 0x12;
    lVar4 = 0xd;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 'm':
  case 'o':
    iVar3 = 0xd;
    lVar4 = 8;
    break;
  case 'n':
    break;
  }
  uVar1 = (*(int *)param_1 << lVar4) >> iVar3;
  uVar5 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
  uVar6 = 0x2d;
  if (-1 < (int)uVar1) {
    uVar6 = 0x2b;
  }
  uVar2 = -uVar5;
  if (-1 < (long)uVar5) {
    uVar2 = uVar5;
  }
  AppendToOutput((char *)this,"#%c0x%lx (addr %p)",(ulong)uVar6,uVar2,param_1 + uVar5,0);
  return 8;
}

