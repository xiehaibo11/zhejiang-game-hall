
/* universe::JniAssistant::setJavaVM(_JavaVM*) */

int universe::JniAssistant::setJavaVM(_JavaVM *param_1)

{
  int iVar1;
  
  DAT_01782240 = param_1;
  iVar1 = pthread_key_create(&DAT_01782248,FUN_009dd540);
  return iVar1;
}

