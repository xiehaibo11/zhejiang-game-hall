
bool FUN_0153faa0(undefined8 param_1,long param_2,undefined2 param_3,undefined8 param_4,uint param_5
                 ,uint param_6,uint param_7)

{
  bool bVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_2 + 0x28);
  bVar1 = (param_7 & 1) == 0;
  if (bVar1) {
    v8::internal::RegExpMacroAssembler::LoadCurrentCharacter
              ((int)plVar2,(Label *)(ulong)param_5,SUB81(param_4,0),param_6 & 1,1);
  }
  (**(code **)(*plVar2 + 0x90))(plVar2,param_3,param_4);
  return bVar1;
}

