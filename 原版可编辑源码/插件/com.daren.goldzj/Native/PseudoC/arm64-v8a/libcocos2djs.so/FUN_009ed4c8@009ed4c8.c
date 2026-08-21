
void FUN_009ed4c8(long param_1)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0;
  local_40 = 0;
  local_38 = *(undefined1 *)(param_1 + 0x20);
  local_50 = **(undefined8 **)(param_1 + 0x10);
  local_48 = *(undefined8 *)(param_1 + 0x18);
  if ((**(byte **)(param_1 + 0x28) & 1) == 0) {
    plVar2 = (long *)(*(undefined8 **)(param_1 + 8))[0x17];
    (**(code **)(*plVar2 + 0x18))(plVar2,**(undefined8 **)(param_1 + 8),&local_50);
  }
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  if (puVar4 != (undefined8 *)0x0) {
                    /* catch() { ... } // from try @ 009ed270 with catch @ 009ed538 */
    pvVar3 = (void *)*puVar4;
                    /* catch() { ... } // from try @ 009ed264 with catch @ 009ed53c */
    if (pvVar3 != (void *)0x0) {
                    /* catch() { ... } // from try @ 009ed4b4 with catch @ 009ed540 */
      puVar4[1] = pvVar3;
      operator_delete(pvVar3);
    }
                    /* catch() { ... } // from try @ 009ed244 with catch @ 009ed548 */
    operator_delete(puVar4);
  }
                    /* catch() { ... } // from try @ 009ed290 with catch @ 009ed558 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

