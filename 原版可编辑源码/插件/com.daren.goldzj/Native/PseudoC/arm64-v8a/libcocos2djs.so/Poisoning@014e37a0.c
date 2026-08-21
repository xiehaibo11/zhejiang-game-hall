
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* v8::internal::RegisterConfiguration::Poisoning() */

undefined8 * v8::internal::RegisterConfiguration::Poisoning(void)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  
  if (((DAT_01d46aa0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_01d46aa0), iVar3 != 0)) {
    lVar4 = 0;
    iVar3 = 0;
    do {
      (&DAT_01d46aa8)[iVar3] = *(undefined4 *)((long)&DAT_01a47ba0 + lVar4);
      iVar3 = iVar3 + 1;
      do {
        lVar4 = lVar4 + 4;
        if (lVar4 == 100) {
          DAT_01d46960 = 0x20;
          DAT_01d46964 = 0x20;
          DAT_01d46958 = 0x20;
          DAT_01d4695c = 0x20;
          DAT_01d46968 = 0x18;
          DAT_01d4696c = 0x1c;
          DAT_01d46988 = &DAT_01d46aa8;
          DAT_01d46a10 = &DAT_01a47c04;
          DAT_01d46970 = 0x1c;
          DAT_01d46974 = 0x1c;
          DAT_01d46978 = 1 << (ulong)(DAT_01d46aac & 0x1f) | 1 << (ulong)(DAT_01d46aa8 & 0x1f) |
                         1 << (ulong)(DAT_01d46ab0 & 0x1f) | 1 << (ulong)(DAT_01d46ab4 & 0x1f) |
                         1 << (ulong)(DAT_01d46ab8 & 0x1f) | 1 << (ulong)(DAT_01d46abc & 0x1f) |
                         1 << (ulong)(DAT_01d46ac0 & 0x1f) | 1 << (ulong)(DAT_01d46ac4 & 0x1f) |
                         1 << (ulong)(DAT_01d46ac8 & 0x1f) | 1 << (ulong)(DAT_01d46acc & 0x1f) |
                         1 << (ulong)(DAT_01d46ad0 & 0x1f) | 1 << (ulong)(DAT_01d46ad4 & 0x1f) |
                         1 << (ulong)(DAT_01d46ad8 & 0x1f) | 1 << (ulong)(DAT_01d46adc & 0x1f) |
                         1 << (ulong)(DAT_01d46ae0 & 0x1f) | 1 << (ulong)(DAT_01d46ae4 & 0x1f) |
                         1 << (ulong)(DAT_01d46ae8 & 0x1f) | 1 << (ulong)(DAT_01d46aec & 0x1f) |
                         1 << (ulong)(DAT_01d46af0 & 0x1f) | 1 << (ulong)(DAT_01d46af4 & 0x1f) |
                         1 << (ulong)(DAT_01d46af8 & 0x1f) | 1 << (ulong)(DAT_01d46afc & 0x1f) |
                         1 << (ulong)(DAT_01d46b00 & 0x1f) | 1 << (ulong)(DAT_01d46b04 & 0x1f);
          _DAT_01d4697c = 0x1fff7fff00000000;
          DAT_01d46a98 = 0;
          DAT_01d46a28 = 4;
          DAT_01d46a18 = 0x100000000;
          DAT_01d46a20 = 0x300000002;
          DAT_01d46990 = 0x100000000;
          DAT_01d46998 = 0x300000002;
          DAT_01d469a0 = 4;
          lVar4 = 0;
          do {
            uVar2 = *(undefined4 *)(DAT_01d46a10 + lVar4 + 0x14);
            lVar1 = lVar4 + 4;
            *(undefined4 *)((long)&DAT_01d46a2c + lVar4) = uVar2;
            *(undefined4 *)((long)&DAT_01d469a4 + lVar4) = uVar2;
            lVar4 = lVar1;
          } while (lVar1 != 0x5c);
          DAT_01d46984 = 0x1fff7fff;
          _DAT_01d4697c = CONCAT44(_DAT_01d46980,0x1fff7fff);
          DAT_01d46950 = &PTR__RegisterConfiguration_01cc6858;
          __cxa_guard_release(&DAT_01d46aa0);
          return &DAT_01d46950;
        }
      } while (lVar4 == 0x50);
    } while( true );
  }
  return &DAT_01d46950;
}

