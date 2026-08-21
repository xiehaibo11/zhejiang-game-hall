
void FUN_0112c354(long param_1,char *param_2,undefined8 *param_3)

{
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (param_1 != 0) {
                    /* try { // try from 0112c390 to 0122c3b3 has its CatchHandler @ 0112c390
                       catch() { ... } // from try @ 0112c390 with catch @ 0112c390
                       catch() { ... } // from try @ 0112c3bc with catch @ 0112c390 */
    fprintf((FILE *)pthread_rwlock_tryrdlock,"%s: ",param_1);
  }
                    /* try { // try from 0112c3b4 to 0122c3bb has its CatchHandler @ 0112c3e4 */
  fwrite("Warning, ",9,1,(FILE *)pthread_rwlock_tryrdlock);
  uStack_38 = param_3[3];
  local_40 = param_3[2];
                    /* try { // try from 0112c3bc to 0122c3f7 has its CatchHandler @ 0112c390 */
  uStack_48 = param_3[1];
  local_50 = *param_3;
  vfprintf((FILE *)pthread_rwlock_tryrdlock,param_2,&local_50);
                    /* catch() { ... } // from try @ 0112c3b4 with catch @ 0112c3e4 */
  fwrite(".\n",2,1,(FILE *)pthread_rwlock_tryrdlock);
  return;
}

