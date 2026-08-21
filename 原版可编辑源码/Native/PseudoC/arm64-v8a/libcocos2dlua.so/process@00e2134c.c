
/* cocos2d::PUAffector::process(cocos2d::PUParticle3D*, float, bool) */

void __thiscall
cocos2d::PUAffector::process(PUAffector *this,PUParticle3D *param_1,float param_2,bool param_3)

{
  byte *__s2;
  size_t sVar1;
  byte *pbVar2;
  byte bVar3;
  long lVar4;
  size_t __n;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  size_t sVar8;
  byte *__s1;
  byte *pbVar9;
  byte *pbVar10;
  undefined4 in_register_00005004;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [8];
  size_t local_78;
  byte *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (param_3) {
    (**(code **)(*(long *)this + 0x68))(CONCAT44(in_register_00005004,param_2),this,param_1);
  }
  if ((*(long *)(this + 0x78) != *(long *)(this + 0x80)) && (*(long *)(param_1 + 0x80) != 0)) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(local_80,(basic_string *)(*(long *)(param_1 + 0x80) + 0x90));
    pbVar9 = *(byte **)(this + 0x78);
    pbVar2 = *(byte **)(this + 0x80);
    pbVar10 = pbVar9;
    if (pbVar9 != pbVar2) {
      __n = (ulong)((byte)local_80[0] >> 1);
      __s2 = (byte *)((ulong)local_80 | 1);
      if (((byte)local_80[0] & 1) != 0) {
        __n = local_78;
        __s2 = local_70;
      }
      do {
        bVar3 = *pbVar9;
        sVar8 = (size_t)(bVar3 >> 1);
        sVar1 = sVar8;
        if ((bVar3 & 1) != 0) {
          sVar1 = *(size_t *)(pbVar9 + 8);
        }
        if (sVar1 == __n) {
          __s1 = *(byte **)(pbVar9 + 0x10);
          if ((bVar3 & 1) == 0) {
            __s1 = pbVar9 + 1;
          }
          pbVar5 = pbVar9;
          pbVar6 = __s2;
          sVar1 = __n;
          pbVar10 = pbVar9;
          if ((bVar3 & 1) == 0) {
            while( true ) {
              if (sVar1 == 0) goto LAB_00e21474;
              if (pbVar5[1] != *pbVar6) break;
              sVar8 = sVar8 - 1;
              pbVar5 = pbVar5 + 1;
              pbVar6 = pbVar6 + 1;
              sVar1 = sVar8;
            }
          }
          else if ((__n == 0) || (iVar7 = memcmp(__s1,__s2,__n), iVar7 == 0)) break;
        }
        pbVar9 = pbVar9 + 0x18;
        pbVar10 = pbVar2;
      } while (pbVar9 != pbVar2);
    }
LAB_00e21474:
    if (((byte)local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    if (pbVar10 != pbVar2) goto LAB_00e214a0;
  }
  (**(code **)(*(long *)this + 0x58))(CONCAT44(in_register_00005004,param_2),this,param_1);
LAB_00e214a0:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

