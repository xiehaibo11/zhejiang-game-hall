
/* universe::JniAssistant::getEnv() */

void universe::JniAssistant::getEnv(void)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  char *pcVar4;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009dd57c to 00add5d3 has its CatchHandler @ 009dd57c
                       catch() { ... } // from try @ 009dd57c with catch @ 009dd57c
                       catch() { ... } // from try @ 009dd5d8 with catch @ 009dd57c */
  local_40 = pthread_getspecific(DAT_01782248);
  pvVar3 = local_40;
  if (local_40 != (void *)0x0) goto LAB_009dd630;
  iVar2 = (**(code **)(*DAT_01782240 + 0x30))(DAT_01782240,&local_40,0x10004);
  if (iVar2 == -3) {
                    /* try { // try from 009dd5d4 to 00add5d7 has its CatchHandler @ 009dd634 */
                    /* try { // try from 009dd5d8 to 00add64f has its CatchHandler @ 009dd57c */
    __android_log_print(6,"JniAssistant","JNI interface version 1.4 not supported");
LAB_009dd5e4:
    pcVar4 = "Failed to get the environment using getEnv()";
LAB_009dd5f4:
    __android_log_print(6,"JniAssistant",pcVar4);
    pvVar3 = (void *)0x0;
  }
  else {
    if (iVar2 == -2) {
      iVar2 = (**(code **)(*DAT_01782240 + 0x20))(DAT_01782240,&local_40,0);
      if (iVar2 < 0) {
        pcVar4 = "Failed to get the environment using AttachCurrentThread()";
        goto LAB_009dd5f4;
      }
    }
    else if (iVar2 != 0) goto LAB_009dd5e4;
    pthread_setspecific(DAT_01782248,local_40);
    pvVar3 = local_40;
  }
LAB_009dd630:
                    /* catch() { ... } // from try @ 009dd5d4 with catch @ 009dd634 */
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pvVar3);
  }
  return;
}

