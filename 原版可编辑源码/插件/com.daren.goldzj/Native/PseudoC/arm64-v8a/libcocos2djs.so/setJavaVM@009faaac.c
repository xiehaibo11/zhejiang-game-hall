
/* universe::JniAssistant::setJavaVM(_JavaVM*) */

int universe::JniAssistant::setJavaVM(_JavaVM *param_1)

{
  int iVar1;
  
  DAT_01d38a00 = param_1;
  iVar1 = pthread_key_create(&DAT_01d38a08,FUN_009faacc);
  return iVar1;
}

