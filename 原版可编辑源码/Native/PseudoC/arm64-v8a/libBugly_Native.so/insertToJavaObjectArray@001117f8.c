
bool insertToJavaObjectArray(long *param_1)

{
  long lVar1;
  
  (**(code **)(*param_1 + 0x570))();
  lVar1 = (**(code **)(*param_1 + 0x78))(param_1);
  if (lVar1 != 0) {
    log2Console(5,"eup","A Java exception has been caught.");
    (**(code **)(*param_1 + 0x80))(param_1);
    (**(code **)(*param_1 + 0x88))(param_1);
    log2Console(6,"eup","Failed to insert element to Java object array.");
  }
  return lVar1 == 0;
}

