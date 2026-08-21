
/* spine::SpineObject::operator new(unsigned long, char const*, int) */

void * spine::SpineObject::operator_new(ulong param_1,char *param_2,int param_3)

{
  long *plVar1;
  void *pvVar2;
  
  plVar1 = (long *)SpineExtension::getInstance();
                    /* WARNING: Could not recover jumptable at 0x00c0eacc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar2 = (void *)(**(code **)(*plVar1 + 0x18))(plVar1,param_1,param_2,param_3);
  return pvVar2;
}

