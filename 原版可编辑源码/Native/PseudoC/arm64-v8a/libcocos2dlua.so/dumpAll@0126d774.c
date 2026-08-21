
/* CProfileManager::dumpAll() */

void CProfileManager::dumpAll(void)

{
  undefined8 uVar1;
  CProfileIterator *pCVar2;
  
  pCVar2 = operator_new(0x10);
  uVar1 = DAT_01795bb0;
  *(undefined8 **)pCVar2 = &Root;
  *(undefined8 *)(pCVar2 + 8) = uVar1;
  dumpRecursive(pCVar2,0);
  operator_delete(pCVar2);
  return;
}

