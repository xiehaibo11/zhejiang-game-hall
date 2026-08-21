
/* v8::internal::RegExpMacroAssembler::LoadCurrentCharacter(int, v8::internal::Label*, bool, int,
   int) */

void v8::internal::RegExpMacroAssembler::LoadCurrentCharacter
               (int param_1,Label *param_2,bool param_3,int param_4,int param_5)

{
  int iVar1;
  int in_w5;
  
  iVar1 = param_5;
  if (in_w5 != -1) {
    iVar1 = in_w5;
  }
                    /* WARNING: Could not recover jumptable at 0x01548008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(ulong)(uint)param_1 + 0x108))
            ((long *)(ulong)(uint)param_1,param_2,param_3,param_4 & 1,param_5,iVar1);
  return;
}

