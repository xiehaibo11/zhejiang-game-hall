
bool FUN_01162d44(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  
  cVar1 = cpArbiterCallWildcardPreSolveA();
  cVar2 = cpArbiterCallWildcardPreSolveB(param_1,param_2);
  return cVar1 != '\0' && cVar2 != '\0';
}

