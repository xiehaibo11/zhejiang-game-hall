
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* v8::internal::RegisterConfiguration::Default() */

undefined8 * v8::internal::RegisterConfiguration::Default(void)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  
  if (((DAT_01d46948 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_01d46948), iVar3 != 0)) {
    DAT_01d46808 = 0x2000000020;
    DAT_01d46810 = 0x1c00000019;
    DAT_01d46818 = 0x1c;
    _DAT_01d46824 = 0x1fff7fff00000000;
    DAT_01d46830 = &DAT_01a47ba0;
    DAT_01d468b8 = &DAT_01a47c04;
    DAT_01d4681c = 0x1bf8ffff0000001c;
    DAT_01d468d0 = 4;
    DAT_01d46848 = 4;
    DAT_01d46940 = 0;
    DAT_01d46800 = 0x2000000020;
    DAT_01d468c0 = 0x100000000;
    DAT_01d468c8 = 0x300000002;
    DAT_01d46838 = 0x100000000;
    DAT_01d46840 = 0x300000002;
    lVar4 = 0;
    do {
      uVar2 = *(undefined4 *)(DAT_01d468b8 + lVar4 + 0x14);
      lVar1 = lVar4 + 4;
      *(undefined4 *)((long)&DAT_01d468d4 + lVar4) = uVar2;
      *(undefined4 *)((long)&DAT_01d4684c + lVar4) = uVar2;
      lVar4 = lVar1;
    } while (lVar1 != 0x5c);
    DAT_01d4682c = 0x1fff7fff;
    _DAT_01d46824 = CONCAT44(DAT_01d46824_4,0x1fff7fff);
    DAT_01d467f8 = &PTR__RegisterConfiguration_01cc6838;
    __cxa_guard_release(&DAT_01d46948);
  }
  return &DAT_01d467f8;
}

