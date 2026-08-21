
BIO * cms_content_bio(undefined8 *param_1)

{
  int iVar1;
  BIO_METHOD *type;
  BIO *pBVar2;
  int *piVar3;
  long lVar4;
  
  iVar1 = OBJ_obj2nid((ASN1_OBJECT *)*param_1);
  switch(iVar1) {
  case 0x15:
    piVar3 = (int *)param_1[1];
    goto joined_r0x00b8fcf8;
  case 0x16:
  case 0x19:
    piVar3 = *(int **)(param_1[1] + 0x10);
    break;
  case 0x17:
    lVar4 = *(long *)(param_1[1] + 0x18);
    goto LAB_00b8fcf0;
  case 0x18:
switchD_00b8fc64_caseD_18:
    piVar3 = (int *)param_1[1];
    if (*piVar3 != 4) {
      ERR_put_error(0x2e,0x81,0x98,"crypto/cms/cms_lib.c",0xb8);
      return (BIO *)0x0;
    }
    break;
  case 0x1a:
    lVar4 = *(long *)(param_1[1] + 8);
LAB_00b8fcf0:
    piVar3 = *(int **)(lVar4 + 0x10);
joined_r0x00b8fcf8:
    if (piVar3 != (int *)0x0) goto LAB_00b8fd18;
    goto LAB_00b8fcfc;
  default:
    if (iVar1 == 0xcd) {
      piVar3 = *(int **)(param_1[1] + 0x28);
    }
    else {
      if (iVar1 != 0x312) goto switchD_00b8fc64_caseD_18;
      piVar3 = *(int **)(param_1[1] + 0x18);
    }
  }
  piVar3 = *(int **)(piVar3 + 2);
  if (piVar3 == (int *)0x0) {
LAB_00b8fcfc:
    type = BIO_s_null();
  }
  else {
LAB_00b8fd18:
    if (*(long *)(piVar3 + 4) != 0x20) {
      pBVar2 = BIO_new_mem_buf(*(void **)(piVar3 + 2),*piVar3);
      return pBVar2;
    }
    type = BIO_s_mem();
  }
  pBVar2 = BIO_new(type);
  return pBVar2;
}

