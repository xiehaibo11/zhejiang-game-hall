
undefined8 CMS_RecipientInfo_get0_pkey_ctx(int *param_1)

{
                    /* try { // try from 00b9c3c8 to 00c9c3d3 has its CatchHandler @ 00b9c728 */
  if (*param_1 == 1) {
    return *(undefined8 *)(*(long *)(param_1 + 2) + 0x28);
  }
  if (*param_1 == 0) {
    return *(undefined8 *)(*(long *)(param_1 + 2) + 0x30);
  }
  return 0;
}

