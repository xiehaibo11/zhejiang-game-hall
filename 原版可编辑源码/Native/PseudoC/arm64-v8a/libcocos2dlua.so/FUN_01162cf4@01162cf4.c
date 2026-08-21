
bool FUN_01162cf4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  
  cVar1 = cpArbiterCallWildcardBeginA();
  cVar2 = cpArbiterCallWildcardBeginB(param_1,param_2);
  return cVar1 != '\0' && cVar2 != '\0';
}

