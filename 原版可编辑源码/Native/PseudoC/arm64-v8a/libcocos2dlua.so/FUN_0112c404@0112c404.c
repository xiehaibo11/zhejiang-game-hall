
void FUN_0112c404(long param_1,char *param_2,undefined8 *param_3)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (param_1 != 0) {
                    /* catch() { ... } // from try @ 0112c478 with catch @ 0112c43c
                       catch() { ... } // from try @ 0112c4c4 with catch @ 0112c43c */
    fprintf((FILE *)pthread_rwlock_tryrdlock,"%s: ",param_1);
  }
  uStack_28 = param_3[3];
  local_30 = param_3[2];
  uStack_38 = param_3[1];
  local_40 = *param_3;
  vfprintf((FILE *)pthread_rwlock_tryrdlock,param_2,&local_40);
                    /* try { // try from 0112c474 to 0122c477 has its CatchHandler @ 0112c4c4 */
                    /* try { // try from 0112c478 to 0122c4bb has its CatchHandler @ 0112c43c */
  fwrite(".\n",2,1,(FILE *)pthread_rwlock_tryrdlock);
  return;
}

