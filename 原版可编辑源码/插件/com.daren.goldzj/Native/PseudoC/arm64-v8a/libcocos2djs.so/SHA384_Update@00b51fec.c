
int SHA384_Update(SHA512_CTX *c,void *data,size_t len)

{
  _union_314 *__dest;
  void *__dest_00;
  uint uVar1;
  ulonglong uVar2;
  ulong uVar3;
  
  if (len != 0) {
    uVar2 = c->Nh;
    __dest = &c->u;
    if (CARRY8(c->Nl,len * 8)) {
      uVar2 = uVar2 + 1;
      c->Nh = uVar2;
    }
    uVar1 = c->num;
    c->Nl = c->Nl + len * 8;
    c->Nh = uVar2 + (len >> 0x3d);
    if (uVar1 != 0) {
      uVar3 = 0x80 - (ulong)uVar1;
      __dest_00 = (void *)((long)__dest + (ulong)uVar1);
      if (len < uVar3) {
        memcpy(__dest_00,data,len);
        c->num = c->num + (int)len;
        return 1;
      }
      memcpy(__dest_00,data,uVar3);
      c->num = 0;
      len = len - uVar3;
      data = (void *)((long)data + uVar3);
      sha512_block_data_order(c,__dest,1);
    }
    uVar3 = len;
    if (0x7f < len) {
      sha512_block_data_order(c,data,len >> 7);
      uVar3 = len & 0x7f;
      data = (void *)((long)data + (len - uVar3));
    }
    if (uVar3 != 0) {
      memcpy(__dest,data,uVar3);
      c->num = (uint)uVar3;
    }
  }
  return 1;
}

