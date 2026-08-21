
undefined8 * TT_New_Context(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int local_28;
  int local_24;
  
  if (param_1 != 0) {
    if (*(undefined8 **)(param_1 + 0x38) != (undefined8 *)0x0) {
      return *(undefined8 **)(param_1 + 0x38);
    }
    uVar2 = *(undefined8 *)(param_1 + 0x10);
                    /* try { // try from 0106dd80 to 0116dd87 has its CatchHandler @ 0106e110 */
    puVar1 = (undefined8 *)ft_mem_alloc(uVar2,0x428,&local_28);
                    /* try { // try from 0106dd88 to 0116dde3 has its CatchHandler @ 0106dce8 */
    if (local_28 == 0) {
      puVar1[2] = uVar2;
      *(undefined4 *)((long)puVar1 + 0x2ec) = 0x20;
      uVar2 = ft_mem_realloc(uVar2,0x20,0,0x20,0,&local_24);
      puVar1[0x5e] = uVar2;
      if (local_24 == 0) {
        *(undefined4 *)(puVar1 + 0x5f) = 0;
        *(undefined4 *)(puVar1 + 5) = 0;
        *(undefined4 *)(puVar1 + 0x56) = 0;
        puVar1[6] = 0;
        puVar1[0x57] = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
      }
      else {
        uVar2 = puVar1[2];
                    /* try { // try from 0106dde4 to 0116ddeb has its CatchHandler @ 0106e0f4 */
        *(undefined4 *)(puVar1 + 0x5f) = 0;
                    /* try { // try from 0106ddec to 0116ddef has its CatchHandler @ 0106e1c0 */
        ft_mem_free(uVar2,puVar1[6]);
        puVar1[6] = 0;
        *(undefined4 *)(puVar1 + 5) = 0;
        ft_mem_free(uVar2,puVar1[0x5e]);
        puVar1[0x5e] = 0;
        puVar1[0x5d] = 0;
        ft_mem_free(uVar2,puVar1[0x57]);
        puVar1[0x57] = 0;
        *(undefined4 *)(puVar1 + 0x56) = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
        ft_mem_free(uVar2,puVar1);
        if (local_24 != 0) {
          return (undefined8 *)0x0;
        }
      }
      *(undefined8 **)(param_1 + 0x38) = puVar1;
      return puVar1;
                    /* try { // try from 0106de68 to 0116de6f has its CatchHandler @ 0106e108 */
    }
  }
  return (undefined8 *)0x0;
}

