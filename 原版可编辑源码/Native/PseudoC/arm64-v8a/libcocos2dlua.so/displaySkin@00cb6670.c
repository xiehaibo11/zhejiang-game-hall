
/* cocostudio::timeline::BoneNode::displaySkin(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool) */

void __thiscall
cocostudio::timeline::BoneNode::displaySkin(BoneNode *this,basic_string *param_1,bool param_2)

{
  size_t __n;
  size_t sVar1;
  basic_string *__s1;
  basic_string bVar2;
  byte bVar3;
  basic_string *pbVar4;
  int iVar5;
  long *plVar6;
  byte *pbVar7;
  undefined8 uVar8;
  size_t sVar9;
  basic_string *__s2;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  puVar10 = *(undefined8 **)(this + 0x390);
  puVar11 = *(undefined8 **)(this + 0x398);
  if (puVar10 != puVar11) {
    do {
      pbVar7 = (byte *)(**(code **)(*(long *)*puVar10 + 0x2c8))();
      bVar2 = *param_1;
      bVar3 = *pbVar7;
      sVar9 = (size_t)((byte)bVar2 >> 1);
      __n = sVar9;
      if (((byte)bVar2 & 1) != 0) {
        __n = *(size_t *)(param_1 + 8);
      }
      sVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        sVar1 = *(size_t *)(pbVar7 + 8);
      }
      if (__n == sVar1) {
        __s2 = *(basic_string **)(pbVar7 + 0x10);
        __s1 = param_1 + 1;
        if (((byte)bVar2 & 1) != 0) {
          __s1 = *(basic_string **)(param_1 + 0x10);
        }
        if ((bVar3 & 1) == 0) {
          __s2 = (basic_string *)(pbVar7 + 1);
        }
        pbVar4 = param_1 + 1;
        if (((byte)bVar2 & 1) == 0) {
          while (__n != 0) {
            if (*pbVar4 != *__s2) goto LAB_00cb675c;
            __s2 = __s2 + 1;
            sVar9 = sVar9 - 1;
            pbVar4 = pbVar4 + 1;
            __n = sVar9;
          }
        }
        else if ((__n != 0) && (iVar5 = memcmp(__s1,__s2,__n), iVar5 != 0)) goto LAB_00cb675c;
        plVar6 = (long *)*puVar10;
        uVar8 = 1;
LAB_00cb66ac:
        (**(code **)(*plVar6 + 0x170))(plVar6,uVar8);
      }
      else {
LAB_00cb675c:
        if (param_2) {
          plVar6 = (long *)*puVar10;
          uVar8 = 0;
          goto LAB_00cb66ac;
        }
      }
      puVar10 = puVar10 + 1;
    } while (puVar10 != puVar11);
  }
  return;
}

