
undefined8 policy_cache_set_mapping(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  uint *puVar4;
  undefined8 uVar5;
  long *plVar6;
  
  plVar6 = *(long **)(param_1 + 0xf0);
  iVar1 = OPENSSL_sk_num(param_2);
  if (iVar1 == 0) {
LAB_00b67c14:
                    /* try { // try from 00b67c14 to 00c67c1f has its CatchHandler @ 00b67cdc */
    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x800;
                    /* try { // try from 00b67c20 to 00c67d2f has its CatchHandler @ 00b67ba8 */
    uVar5 = 0xffffffff;
  }
  else {
    iVar1 = OPENSSL_sk_num(param_2);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        puVar3 = (undefined8 *)OPENSSL_sk_value(param_2,iVar1);
        iVar2 = OBJ_obj2nid((ASN1_OBJECT *)puVar3[1]);
                    /* catch() { ... } // from try @ 00b67ae4 with catch @ 00b67b5c */
        if ((iVar2 == 0x2ea) || (iVar2 = OBJ_obj2nid((ASN1_OBJECT *)*puVar3), iVar2 == 0x2ea))
        goto LAB_00b67c14;
        puVar4 = (uint *)policy_cache_find_data(plVar6,*puVar3);
        if (puVar4 == (uint *)0x0) {
          if ((uint *)*plVar6 != (uint *)0x0) {
                    /* try { // try from 00b67ba8 to 00c67c13 has its CatchHandler @ 00b67ba8
                       catch() { ... } // from try @ 00b67ba8 with catch @ 00b67ba8
                       catch() { ... } // from try @ 00b67c20 with catch @ 00b67ba8 */
            puVar4 = (uint *)policy_data_new(0,*puVar3,*(uint *)*plVar6 & 0x10);
            if (puVar4 != (uint *)0x0) {
              uVar5 = *(undefined8 *)(*plVar6 + 0x10);
              *puVar4 = *puVar4 | 6;
              *(undefined8 *)(puVar4 + 4) = uVar5;
              iVar2 = OPENSSL_sk_push(plVar6[1],puVar4);
              if (iVar2 != 0) goto LAB_00b67be4;
              policy_data_free(puVar4);
            }
            goto LAB_00b67c54;
          }
        }
        else {
          *puVar4 = *puVar4 | 1;
LAB_00b67be4:
          iVar2 = OPENSSL_sk_push(*(undefined8 *)(puVar4 + 6),puVar3[1]);
          if (iVar2 == 0) {
LAB_00b67c54:
            uVar5 = 0;
            goto LAB_00b67c24;
          }
          puVar3[1] = 0;
        }
        iVar1 = iVar1 + 1;
        iVar2 = OPENSSL_sk_num(param_2);
      } while (iVar1 < iVar2);
    }
    uVar5 = 1;
  }
LAB_00b67c24:
  OPENSSL_sk_pop_free(param_2,POLICY_MAPPING_free);
  return uVar5;
}

