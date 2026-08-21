
/* void std::__ndk1::vector<v8::base::OS::SharedLibraryAddress,
   std::__ndk1::allocator<v8::base::OS::SharedLibraryAddress>
   >::__push_back_slow_path<v8::base::OS::SharedLibraryAddress>(v8::base::OS::SharedLibraryAddress&&)
    */

void __thiscall
std::__ndk1::
vector<v8::base::OS::SharedLibraryAddress,std::__ndk1::allocator<v8::base::OS::SharedLibraryAddress>>
::__push_back_slow_path<v8::base::OS::SharedLibraryAddress>
          (vector<v8::base::OS::SharedLibraryAddress,std::__ndk1::allocator<v8::base::OS::SharedLibraryAddress>>
           *this,SharedLibraryAddress *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  byte bVar3;
  byte *pbVar4;
  void *pvVar5;
  byte *pbVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar10 = *(long *)(this + 8) - *(long *)this >> 4;
  uVar1 = lVar10 * -0x5555555555555555 + 1;
  if (uVar1 < 0x555555555555556) {
    lVar7 = *(long *)(this + 0x10) - *(long *)this >> 4;
    uVar8 = lVar7 * 0x5555555555555556;
    if (uVar1 <= uVar8) {
      uVar1 = uVar8;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar7 * -0x5555555555555555)) {
      uVar1 = 0x555555555555555;
    }
    if (uVar1 == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      if (0x555555555555555 < uVar1) goto LAB_01478594;
      pvVar5 = operator_new(uVar1 * 0x30);
    }
    uVar14 = *(undefined8 *)(param_1 + 8);
    uVar13 = *(undefined8 *)param_1;
    puVar9 = (undefined8 *)((long)pvVar5 + lVar10 * 0x10);
    puVar9[2] = *(undefined8 *)(param_1 + 0x10);
    puVar9[1] = uVar14;
    *puVar9 = uVar13;
    uVar14 = *(undefined8 *)(param_1 + 0x20);
    uVar13 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)param_1 = 0;
    puVar9[5] = *(undefined8 *)(param_1 + 0x28);
    puVar9[4] = uVar14;
    puVar9[3] = uVar13;
    pbVar6 = *(byte **)this;
    pbVar11 = *(byte **)(this + 8);
    puVar2 = puVar9 + 6;
    pbVar12 = pbVar6;
    if (pbVar11 != pbVar6) {
      do {
        uVar14 = *(undefined8 *)(pbVar11 + -0x28);
        uVar13 = *(undefined8 *)(pbVar11 + -0x30);
        puVar9[-4] = *(undefined8 *)(pbVar11 + -0x20);
        puVar9[-5] = uVar14;
        puVar9[-6] = uVar13;
        pbVar12 = pbVar11 + -8;
        uVar14 = *(undefined8 *)(pbVar11 + -0x10);
        uVar13 = *(undefined8 *)(pbVar11 + -0x18);
        pbVar11[-0x28] = 0;
        pbVar11[-0x27] = 0;
        pbVar11[-0x26] = 0;
        pbVar11[-0x25] = 0;
        pbVar11[-0x24] = 0;
        pbVar11[-0x23] = 0;
        pbVar11[-0x22] = 0;
        pbVar11[-0x21] = 0;
        pbVar11[-0x20] = 0;
        pbVar11[-0x1f] = 0;
        pbVar11[-0x1e] = 0;
        pbVar11[-0x1d] = 0;
        pbVar11[-0x1c] = 0;
        pbVar11[-0x1b] = 0;
        pbVar11[-0x1a] = 0;
        pbVar11[-0x19] = 0;
        pbVar11[-0x30] = 0;
        pbVar11[-0x2f] = 0;
        pbVar11[-0x2e] = 0;
        pbVar11[-0x2d] = 0;
        pbVar11[-0x2c] = 0;
        pbVar11[-0x2b] = 0;
        pbVar11[-0x2a] = 0;
        pbVar11[-0x29] = 0;
        pbVar11 = pbVar11 + -0x30;
        puVar9[-1] = *(undefined8 *)pbVar12;
        puVar9[-2] = uVar14;
        puVar9[-3] = uVar13;
        puVar9 = puVar9 + -6;
      } while (pbVar6 != pbVar11);
      pbVar6 = *(byte **)(this + 8);
      pbVar12 = *(byte **)this;
    }
    *(undefined8 **)this = puVar9;
    *(undefined8 **)(this + 8) = puVar2;
    *(void **)(this + 0x10) = (void *)((long)pvVar5 + uVar1 * 0x30);
    if (pbVar6 != pbVar12) {
      bVar3 = pbVar6[-0x30];
      pbVar11 = pbVar6 + -0x30;
      while( true ) {
        pbVar4 = pbVar11;
        if ((bVar3 & 1) != 0) {
          operator_delete(*(void **)(pbVar6 + -0x20));
        }
        if (pbVar12 == pbVar4) break;
        bVar3 = pbVar4[-0x30];
        pbVar11 = pbVar4 + -0x30;
        pbVar6 = pbVar4;
      }
    }
    if (pbVar12 != (byte *)0x0) {
      operator_delete(pbVar12);
      return;
    }
    return;
  }
LAB_01478594:
                    /* WARNING: Subroutine does not return */
  abort();
}

