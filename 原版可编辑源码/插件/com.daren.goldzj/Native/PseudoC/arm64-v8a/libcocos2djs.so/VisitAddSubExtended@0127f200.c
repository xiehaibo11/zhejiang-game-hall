
/* v8::internal::DisassemblingDecoder::VisitAddSubExtended(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitAddSubExtended
          (DisassemblingDecoder *this,Instruction *param_1)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  bool bVar5;
  char *pcVar6;
  char *pcVar7;
  
  uVar3 = *(uint *)param_1;
  bVar5 = (uVar3 >> 0xd & 3 | 4) != 7;
  pcVar2 = "\'Rds, \'Rns, \'Xm\'Ext";
  if (bVar5) {
    pcVar2 = "\'Rds, \'Rns, \'Wm\'Ext";
  }
  pcVar4 = "\'Rds, \'Rns, \'Xm\'Ext";
  if (bVar5) {
    pcVar4 = "\'Rds, \'Rns, \'Wm\'Ext";
  }
  uVar1 = uVar3 + 0x74e00000 >> 0x1d | (uVar3 + 0x74e00000) * 8 & 0xff000007;
  if (7 < uVar1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  pcVar6 = "add";
  switch(uVar1) {
  case 1:
  case 5:
    pcVar6 = "adds";
    pcVar7 = "cmn";
    break;
  case 2:
  case 6:
    pcVar6 = "sub";
  default:
    Format(this,param_1,pcVar6,pcVar2);
    return;
  case 3:
  case 7:
    pcVar6 = "subs";
    pcVar7 = "cmp";
  }
  pcVar4 = pcVar4 + 6;
  if ((uVar3 & 0x1f) != 0x1f) {
    pcVar7 = pcVar6;
    pcVar4 = pcVar2;
  }
  Format(this,param_1,pcVar7,pcVar4);
  return;
}

