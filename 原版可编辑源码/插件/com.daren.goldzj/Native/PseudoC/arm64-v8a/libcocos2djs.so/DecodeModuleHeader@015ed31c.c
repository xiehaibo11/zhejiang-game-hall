
/* v8::internal::wasm::ModuleDecoderImpl::DecodeModuleHeader(v8::internal::Vector<unsigned char
   const>, unsigned char) */

void v8::internal::wasm::ModuleDecoderImpl::DecodeModuleHeader
               (uchar *param_1,long param_2,long param_3,uint param_4)

{
  uint *puVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  uint *puVar7;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  bVar2 = param_1[0x30];
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) goto LAB_015ed48c;
  }
  else if (*(long *)(param_1 + 0x38) != 0) goto LAB_015ed48c;
  *(long *)(param_1 + 8) = param_2;
  *(long *)(param_1 + 0x10) = param_2;
  *(long *)(param_1 + 0x18) = param_2 + param_3;
  *(uint *)(param_1 + 0x20) = param_4 & 0xff;
  param_1[0x28] = '\0';
  param_1[0x29] = '\0';
  param_1[0x2a] = '\0';
  param_1[0x2b] = '\0';
  if ((bVar2 & 1) == 0) {
    param_1[0x30] = '\0';
    param_1[0x31] = '\0';
  }
  else {
    **(undefined1 **)(param_1 + 0x40) = 0;
    param_1[0x38] = '\0';
    param_1[0x39] = '\0';
    param_1[0x3a] = '\0';
    param_1[0x3b] = '\0';
    param_1[0x3c] = '\0';
    param_1[0x3d] = '\0';
    param_1[0x3e] = '\0';
    param_1[0x3f] = '\0';
    if ((param_1[0x30] & 1) != 0) {
      operator_delete(*(void **)(param_1 + 0x40));
      param_1[0x30] = '\0';
      param_1[0x31] = '\0';
      param_1[0x32] = '\0';
      param_1[0x33] = '\0';
      param_1[0x34] = '\0';
      param_1[0x35] = '\0';
      param_1[0x36] = '\0';
      param_1[0x37] = '\0';
    }
  }
  puVar1 = *(uint **)(param_1 + 0x10);
  param_1[0x30] = '\0';
  iVar4 = (int)*(undefined8 *)(param_1 + 0x18);
  param_1[0x38] = '\0';
  param_1[0x39] = '\0';
  param_1[0x3a] = '\0';
  param_1[0x3b] = '\0';
  param_1[0x3c] = '\0';
  param_1[0x3d] = '\0';
  param_1[0x3e] = '\0';
  param_1[0x3f] = '\0';
  param_1[0x40] = '\0';
  param_1[0x41] = '\0';
  param_1[0x42] = '\0';
  param_1[0x43] = '\0';
  param_1[0x44] = '\0';
  param_1[0x45] = '\0';
  param_1[0x46] = '\0';
  param_1[0x47] = '\0';
  param_1[0x31] = '\0';
  param_1[0x32] = '\0';
  param_1[0x33] = '\0';
  param_1[0x34] = '\0';
  param_1[0x35] = '\0';
  param_1[0x36] = '\0';
  param_1[0x37] = '\0';
  param_1[0x38] = '\0';
  if ((uint)(iVar4 - (int)puVar1) < 4) {
    Decoder::errorf(param_1,(char *)puVar1,"expected %u bytes, fell off end",4);
    uVar6 = 0;
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x18);
LAB_015ed3e8:
    Decoder::errorf(param_1,(char *)puVar1,
                    "expected magic word %02x %02x %02x %02x, found %02x %02x %02x %02x",0,0x61,0x73
                    ,0x6d,(ulong)(uVar6 & 0xff),uVar6 >> 8 & 0xff,uVar6 >> 0x10 & 0xff,uVar6 >> 0x18
                   );
    puVar7 = *(uint **)(param_1 + 0x10);
    iVar4 = (int)*(undefined8 *)(param_1 + 0x18);
  }
  else {
    puVar7 = puVar1 + 1;
    uVar6 = *puVar1;
    *(uint **)(param_1 + 0x10) = puVar7;
    if (uVar6 != 0x6d736100) goto LAB_015ed3e8;
  }
  if ((uint)(iVar4 - (int)puVar7) < 4) {
    Decoder::errorf(param_1,(char *)puVar7,"expected %u bytes, fell off end",4);
    uVar6 = 0;
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x18);
  }
  else {
    uVar6 = *puVar7;
    *(uint **)(param_1 + 0x10) = puVar7 + 1;
    if (uVar6 == 1) goto LAB_015ed48c;
  }
  Decoder::errorf(param_1,(char *)puVar7,
                  "expected version %02x %02x %02x %02x, found %02x %02x %02x %02x",1,0,0,0,
                  (ulong)(uVar6 & 0xff),uVar6 >> 8 & 0xff,uVar6 >> 0x10 & 0xff,uVar6 >> 0x18);
LAB_015ed48c:
  if (*(long *)(lVar3 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

