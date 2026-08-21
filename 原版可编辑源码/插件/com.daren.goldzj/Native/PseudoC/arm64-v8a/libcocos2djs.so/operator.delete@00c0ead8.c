
/* spine::SpineObject::operator delete(void*, char const*, int) */

void spine::SpineObject::operator_delete(void *param_1,char *param_2,int param_3)

{
  long *plVar1;
  
  plVar1 = (long *)SpineExtension::getInstance();
                    /* WARNING: Could not recover jumptable at 0x00c0eb18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1,param_2,param_3);
  return;
}

