
undefined8 insertToJavaObjectArray(long *param_1)

{
  long lVar1;
  
  (**(code **)(*param_1 + 0x570))();
  lVar1 = checkJavaException(param_1);
  if (lVar1 != 0) {
    log2Console(6,"CrashReport-Native","Failed to insert element to Java object array.");
    return 0;
  }
  return 1;
}

