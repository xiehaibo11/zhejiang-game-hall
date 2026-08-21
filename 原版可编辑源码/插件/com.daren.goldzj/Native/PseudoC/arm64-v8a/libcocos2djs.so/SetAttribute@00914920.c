
/* tinyxml2::XMLAttribute::SetAttribute(double) */

void tinyxml2::XMLAttribute::SetAttribute(double param_1)

{
  long lVar1;
  long in_x0;
  void *pvVar2;
  size_t sVar3;
  char acStack_110 [200];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  snprintf(acStack_110,200,"%g");
  if (((*(byte *)(in_x0 + 0x21) >> 1 & 1) != 0) &&
     (pvVar2 = *(void **)(in_x0 + 0x28), pvVar2 != (void *)0x0)) {
    operator_delete__(pvVar2);
  }
  *(undefined4 *)(in_x0 + 0x20) = 0;
  *(undefined8 *)(in_x0 + 0x28) = 0;
  *(undefined8 *)(in_x0 + 0x30) = 0;
  sVar3 = strlen(acStack_110);
  pvVar2 = operator_new__(sVar3 + 1);
  *(void **)(in_x0 + 0x28) = pvVar2;
  memcpy(pvVar2,acStack_110,sVar3 + 1);
  *(size_t *)(in_x0 + 0x30) = (long)pvVar2 + sVar3;
  *(undefined4 *)(in_x0 + 0x20) = 0x200;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

