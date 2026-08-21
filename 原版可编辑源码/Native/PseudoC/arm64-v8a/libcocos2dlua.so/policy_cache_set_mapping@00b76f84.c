
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
LAB_00b77094:
    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x800;
    uVar5 = 0xffffffff;
  }
  else {
    iVar1 = OPENSSL_sk_num(param_2);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        puVar3 = (undefined8 *)OPENSSL_sk_value(param_2,iVar1);
        iVar2 = OBJ_obj2nid((ASN1_OBJECT *)puVar3[1]);
        if ((iVar2 == 0x2ea) || (iVar2 = OBJ_obj2nid((ASN1_OBJECT *)*puVar3), iVar2 == 0x2ea))
        goto LAB_00b77094;
        puVar4 = (uint *)policy_cache_find_data(plVar6,*puVar3);
        if (puVar4 == (uint *)0x0) {
          if ((uint *)*plVar6 != (uint *)0x0) {
            puVar4 = (uint *)policy_data_new(0,*puVar3,*(uint *)*plVar6 & 0x10);
            if (puVar4 != (uint *)0x0) {
              uVar5 = *(undefined8 *)(*plVar6 + 0x10);
              *puVar4 = *puVar4 | 6;
              *(undefined8 *)(puVar4 + 4) = uVar5;
              iVar2 = OPENSSL_sk_push(plVar6[1],puVar4);
              if (iVar2 != 0) goto LAB_00b77064;
              policy_data_free(puVar4);
            }
            goto LAB_00b770d4;
          }
        }
        else {
          *puVar4 = *puVar4 | 1;
LAB_00b77064:
          iVar2 = OPENSSL_sk_push(*(undefined8 *)(puVar4 + 6),puVar3[1]);
          if (iVar2 == 0) {
LAB_00b770d4:
                    /* try { // try from 00b770d4 to 00c77103 has its CatchHandler @ 00b770d4
                       catch() { ... } // from try @ 00b770d4 with catch @ 00b770d4
                       catch() { ... } // from try @ 00b77110 with catch @ 00b770d4
                       catch() { ... } // from try @ 00b77140 with catch @ 00b770d4 */
            uVar5 = 0;
            goto LAB_00b770a4;
          }
          puVar3[1] = 0;
        }
        iVar1 = iVar1 + 1;
        iVar2 = OPENSSL_sk_num(param_2);
      } while (iVar1 < iVar2);
    }
    uVar5 = 1;
  }
LAB_00b770a4:
  OPENSSL_sk_pop_free(param_2,POLICY_MAPPING_free);
  return uVar5;
}

