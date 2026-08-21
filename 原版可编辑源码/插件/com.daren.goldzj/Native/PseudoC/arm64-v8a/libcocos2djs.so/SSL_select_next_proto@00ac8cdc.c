
int SSL_select_next_proto
              (uchar **out,uchar *outlen,uchar *in,uint inlen,uchar *client,uint client_len)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  
  if (inlen != 0) {
    if (client_len != 0) {
      uVar5 = 0;
      do {
        pbVar6 = in + uVar5;
        bVar1 = *pbVar6;
        uVar4 = 0;
        do {
          bVar2 = client[uVar4];
          if (((uint)bVar1 == (uint)bVar2) &&
             (iVar3 = memcmp(in + (uVar5 + 1),client + (uVar4 + 1),(ulong)bVar1), iVar3 == 0)) {
            iVar3 = 1;
            goto LAB_00ac8da4;
          }
          uVar4 = uVar4 + 1 + (uint)bVar2;
        } while (uVar4 < client_len);
        uVar5 = uVar5 + 1 + (uint)bVar1;
      } while (uVar5 < inlen);
      iVar3 = 2;
      pbVar6 = client;
      goto LAB_00ac8da4;
    }
    uVar5 = 0;
    do {
      uVar5 = uVar5 + in[uVar5] + 1;
    } while (uVar5 < inlen);
  }
  iVar3 = 2;
  pbVar6 = client;
LAB_00ac8da4:
  *out = pbVar6 + 1;
  *outlen = *pbVar6;
  return iVar3;
}

