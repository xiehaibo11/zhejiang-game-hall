
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
  local_40 = pthread_getspecific(DAT_01d38a08);
                    /* try { // try from 009fab1c to 00afab23 has its CatchHandler @ 009fabac */
  pvVar3 = local_40;
  if (local_40 != (void *)0x0) goto LAB_009fabbc;
  iVar2 = (**(code **)(*DAT_01d38a00 + 0x30))(DAT_01d38a00,&local_40,0x10004);
  if (iVar2 == -3) {
    __android_log_print(6,"JniAssistant","JNI interface version 1.4 not supported");
LAB_009fab70:
    pcVar4 = "Failed to get the environment using getEnv()";
LAB_009fab80:
    __android_log_print(6,"JniAssistant",pcVar4);
    pvVar3 = (void *)0x0;
  }
  else {
    if (iVar2 == -2) {
                    /* try { // try from 009fab9c to 00afaba3 has its CatchHandler @ 009faba8 */
                    /* try { // try from 009faba4 to 00afac23 has its CatchHandler @ 009fa948 */
      iVar2 = (**(code **)(*DAT_01d38a00 + 0x20))(DAT_01d38a00,&local_40,0);
                    /* catch() { ... } // from try @ 009fab9c with catch @ 009faba8 */
      if (iVar2 < 0) {
        pcVar4 = "Failed to get the environment using AttachCurrentThread()";
        goto LAB_009fab80;
      }
    }
    else if (iVar2 != 0) goto LAB_009fab70;
                    /* catch() { ... } // from try @ 009fab1c with catch @ 009fabac */
                    /* catch() { ... } // from try @ 009faa70 with catch @ 009fabb0 */
    pthread_setspecific(DAT_01d38a08,local_40);
    pvVar3 = local_40;
  }
LAB_009fabbc:
                    /* catch() { ... } // from try @ 009faad0 with catch @ 009fabc0 */
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pvVar3);
  }
  return;
}

