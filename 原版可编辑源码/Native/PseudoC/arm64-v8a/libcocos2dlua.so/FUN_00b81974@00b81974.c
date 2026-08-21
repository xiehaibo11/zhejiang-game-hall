
undefined8 FUN_00b81974(undefined8 param_1,undefined8 *param_2,BIO *param_3,uint param_4)

{
  BIO_printf(param_3,"%*sPath Length Constraint: ",(ulong)param_4,&DAT_013c996e);
  if ((ASN1_INTEGER *)*param_2 == (ASN1_INTEGER *)0x0) {
    BIO_printf(param_3,"infinite");
  }
  else {
    i2a_ASN1_INTEGER(param_3,(ASN1_INTEGER *)*param_2);
  }
  BIO_puts(param_3,"\n");
  BIO_printf(param_3,"%*sPolicy Language: ",(ulong)param_4,&DAT_013c996e);
  i2a_ASN1_OBJECT(param_3,*(ASN1_OBJECT **)param_2[1]);
  BIO_puts(param_3,"\n");
  if ((*(long *)(param_2[1] + 8) != 0) && (*(long *)(*(long *)(param_2[1] + 8) + 8) != 0)) {
    BIO_printf(param_3,"%*sPolicy Text: %s\n",(ulong)param_4,&DAT_013c996e);
  }
  return 1;
}

