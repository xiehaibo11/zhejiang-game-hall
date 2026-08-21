
undefined8
ssl_parse_serverhello_renegotiate_ext(long param_1,undefined8 *param_2,undefined4 *param_3)

{
  uint uVar1;
  byte *__s1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  int iVar5;
  byte *__s1_00;
  ulong __n;
  int line;
  undefined4 uVar6;
  ulong uVar7;
  ulong __n_00;
  long lVar8;
  
  lVar8 = *(long *)(param_1 + 0x90);
  bVar2 = *(byte *)(lVar8 + 0x380);
  __n = (ulong)bVar2;
  bVar3 = *(byte *)(lVar8 + 0x3c1);
  __n_00 = (ulong)bVar3;
  uVar1 = (uint)bVar3 + (uint)bVar2;
  if (uVar1 != 0) {
    if (bVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: !expected_len || s->s3->previous_client_finished_len",
                  "ssl/t1_reneg.c",0x76);
    }
    if (bVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: !expected_len || s->s3->previous_server_finished_len",
                  "ssl/t1_reneg.c",0x77);
    }
  }
  if (param_2[1] == 0) {
    iVar5 = 0x150;
    line = 0x7c;
  }
  else {
    uVar7 = param_2[1] - 1;
    __s1_00 = (byte *)*param_2 + 1;
    bVar2 = *(byte *)*param_2;
    *param_2 = __s1_00;
    param_2[1] = uVar7;
    if (uVar7 == bVar2) {
      if (uVar1 == bVar2) {
        uVar4 = uVar7 - __n;
        if (__n <= uVar7) {
          __s1 = __s1_00 + __n;
          *param_2 = __s1;
          param_2[1] = uVar4;
          iVar5 = memcmp(__s1_00,(void *)(lVar8 + 0x340),__n);
          if (iVar5 == 0) {
            if (__n_00 <= uVar4) {
              *param_2 = __s1 + __n_00;
              param_2[1] = uVar4 - __n_00;
              iVar5 = memcmp(__s1,(void *)(lVar8 + 0x381),__n_00);
              if (iVar5 == 0) {
                *(undefined4 *)(lVar8 + 0x3c4) = 1;
                return 1;
              }
            }
            iVar5 = 0x151;
            line = 0x9e;
            goto LAB_00af0ff0;
          }
        }
        iVar5 = 0x95;
      }
      else {
        iVar5 = 0x8c;
      }
      ERR_put_error(0x14,0x12d,0x151,"ssl/t1_reneg.c",iVar5);
      uVar6 = 0x28;
      goto LAB_00af101c;
    }
    iVar5 = 0x150;
    line = 0x84;
  }
LAB_00af0ff0:
  ERR_put_error(0x14,0x12d,iVar5,"ssl/t1_reneg.c",line);
  uVar6 = 0x2f;
LAB_00af101c:
  *param_3 = uVar6;
  return 0;
}

