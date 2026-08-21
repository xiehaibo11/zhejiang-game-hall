
/* cocos2d::Material::getTechniqueByName(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::Material::getTechniqueByName(Material *this,basic_string *param_1)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  void *__s1;
  basic_string *__s2;
  undefined8 *puVar3;
  basic_string bVar4;
  long lVar5;
  byte bVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  byte local_80 [8];
  ulong local_78;
  void *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  puVar9 = *(undefined8 **)(this + 0x78);
  puVar3 = *(undefined8 **)(this + 0x80);
  if (puVar9 != puVar3) {
    do {
      Technique::getName();
      bVar6 = local_80[0];
      bVar4 = *param_1;
      uVar1 = (ulong)((byte)bVar4 >> 1);
      if (((byte)bVar4 & 1) != 0) {
        uVar1 = *(ulong *)(param_1 + 8);
      }
      uVar2 = (ulong)(local_80[0] >> 1);
      if ((local_80[0] & 1) != 0) {
        uVar2 = local_78;
      }
      __n = uVar1;
      if (uVar2 <= uVar1) {
        __n = uVar2;
      }
      if (__n == 0) {
LAB_00fe00fc:
        uVar7 = (uint)(uVar1 < uVar2);
        if (uVar2 < uVar1) {
          uVar7 = 0xffffffff;
        }
        if ((bVar6 & 1) == 0) goto LAB_00fe00e8;
LAB_00fe0110:
        operator_delete(local_70);
        uVar8 = *puVar9;
      }
      else {
        __s1 = (void *)((ulong)local_80 | 1);
        if ((local_80[0] & 1) != 0) {
          __s1 = local_70;
        }
        __s2 = param_1 + 1;
        if (((byte)bVar4 & 1) != 0) {
          __s2 = *(basic_string **)(param_1 + 0x10);
        }
        uVar7 = memcmp(__s1,__s2,__n);
        if (uVar7 == 0) goto LAB_00fe00fc;
        if ((bVar6 & 1) != 0) goto LAB_00fe0110;
LAB_00fe00e8:
        uVar8 = *puVar9;
      }
      if (uVar7 == 0) goto LAB_00fe0128;
      puVar9 = puVar9 + 1;
    } while (puVar3 != puVar9);
  }
  uVar8 = 0;
LAB_00fe0128:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00fe0158 to 010e015f has its CatchHandler @ 00fe01d0 */
  __stack_chk_fail(uVar8);
}

