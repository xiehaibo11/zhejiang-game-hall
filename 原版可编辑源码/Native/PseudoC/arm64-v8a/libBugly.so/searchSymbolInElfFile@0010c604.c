
void searchSymbolInElfFile(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = createSymbolTable();
  if (lVar1 != 0) {
    searchSymbolTable(lVar1,param_2);
    return;
  }
  return;
}

