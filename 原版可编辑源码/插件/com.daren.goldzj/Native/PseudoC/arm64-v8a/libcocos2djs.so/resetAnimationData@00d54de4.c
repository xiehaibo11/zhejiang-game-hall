
/* dragonBones::ArmatureCache::resetAnimationData(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
dragonBones::ArmatureCache::resetAnimationData(ArmatureCache *this,basic_string *param_1)

{
  ArmatureCache *pAVar1;
  size_t sVar2;
  size_t __n;
  basic_string *__s2;
  basic_string bVar3;
  int iVar4;
  basic_string *pbVar5;
  ArmatureCache *pAVar6;
  undefined8 *puVar7;
  long lVar8;
  ArmatureCache *pAVar9;
  basic_string *pbVar10;
  FrameData *this_00;
  ulong uVar11;
  ArmatureCache *pAVar12;
  basic_string *pbVar13;
  
  pAVar12 = *(ArmatureCache **)(this + 0x78);
  pAVar1 = this + 0x80;
  if (pAVar1 == pAVar12) {
    return;
  }
  __n = *(size_t *)(param_1 + 8);
  __s2 = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    __s2 = param_1 + 1;
    __n = (ulong)((byte)*param_1 >> 1);
  }
LAB_00d54e20:
  do {
    pbVar13 = *(basic_string **)(pAVar12 + 0x38);
    bVar3 = *pbVar13;
    sVar2 = (ulong)((byte)bVar3 >> 1);
    if (((byte)bVar3 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar13 + 8);
    }
    if (sVar2 == __n) {
      pbVar10 = *(basic_string **)(pbVar13 + 0x10);
      if (((byte)bVar3 & 1) == 0) {
        pbVar10 = pbVar13 + 1;
      }
      if (((byte)bVar3 & 1) == 0) {
        if (__n == 0) {
LAB_00d54ef8:
          puVar7 = *(undefined8 **)(pbVar13 + 0x20);
          lVar8 = *(long *)(pbVar13 + 0x28);
          if (lVar8 - (long)puVar7 != 0) {
            uVar11 = 0;
            this_00 = (FrameData *)*puVar7;
            while( true ) {
              if (this_00 != (FrameData *)0x0) {
                FrameData::~FrameData(this_00);
                operator_delete(this_00);
              }
              uVar11 = uVar11 + 1;
              if ((ulong)(lVar8 - (long)puVar7 >> 3) <= uVar11) break;
              this_00 = *(FrameData **)(*(long *)(pbVar13 + 0x20) + uVar11 * 8);
            }
            puVar7 = *(undefined8 **)(pbVar13 + 0x20);
          }
          *(undefined8 **)(pbVar13 + 0x28) = puVar7;
          pbVar13[0x18] = (basic_string)0x0;
          *(undefined4 *)(pbVar13 + 0x1c) = 0;
          return;
        }
        lVar8 = -(ulong)((byte)bVar3 >> 1);
        pbVar10 = __s2;
        pbVar5 = pbVar13;
        while (pbVar5 = pbVar5 + 1, *pbVar5 == *pbVar10) {
          lVar8 = lVar8 + 1;
          pbVar10 = pbVar10 + 1;
          if (lVar8 == 0) goto LAB_00d54ef8;
        }
      }
      else if ((__n == 0) || (iVar4 = memcmp(pbVar10,__s2,__n), iVar4 == 0)) goto LAB_00d54ef8;
    }
    pAVar6 = *(ArmatureCache **)(pAVar12 + 8);
    if (*(ArmatureCache **)(pAVar12 + 8) == (ArmatureCache *)0x0) {
      pAVar6 = pAVar12 + 0x10;
      pAVar9 = *(ArmatureCache **)pAVar6;
      if (*(ArmatureCache **)pAVar9 == pAVar12) {
        pAVar12 = pAVar9;
        if (pAVar1 == pAVar9) {
          return;
        }
        goto LAB_00d54e20;
      }
      do {
        lVar8 = *(long *)pAVar6;
        pAVar6 = (ArmatureCache *)(lVar8 + 0x10);
        pAVar12 = *(ArmatureCache **)pAVar6;
      } while (*(long *)pAVar12 != lVar8);
    }
    else {
      do {
        pAVar12 = pAVar6;
        pAVar6 = *(ArmatureCache **)pAVar12;
      } while (*(ArmatureCache **)pAVar12 != (ArmatureCache *)0x0);
    }
    if (pAVar1 == pAVar12) {
      return;
    }
  } while( true );
}

