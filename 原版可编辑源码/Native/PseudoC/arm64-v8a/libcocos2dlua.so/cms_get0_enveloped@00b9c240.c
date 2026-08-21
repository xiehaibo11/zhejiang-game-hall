
undefined8 cms_get0_enveloped(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = OBJ_obj2nid((ASN1_OBJECT *)*param_1);
  if (iVar1 == 0x17) {
    uVar2 = param_1[1];
  }
  else {
    ERR_put_error(0x2e,0x83,0x6b,"crypto/cms/cms_env.c",0x1b);
    uVar2 = 0;
  }
  return uVar2;
}

