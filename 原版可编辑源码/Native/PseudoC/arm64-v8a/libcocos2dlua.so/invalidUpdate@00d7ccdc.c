
/* dragonBones::Armature::invalidUpdate(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool) */

void __thiscall
dragonBones::Armature::invalidUpdate(Armature *this,basic_string *param_1,bool param_2)

{
  long *plVar1;
  size_t __n;
  size_t sVar2;
  long *plVar3;
  byte bVar4;
  basic_string bVar5;
  int iVar6;
  ulong uVar7;
  basic_string *__s2;
  long lVar8;
  basic_string *pbVar9;
  ulong uVar10;
  long *plVar11;
  basic_string *pbVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  
  bVar5 = *param_1;
  plVar11 = *(long **)(this + 0x60);
  plVar3 = *(long **)(this + 0x68);
  __n = (ulong)((byte)bVar5 >> 1);
  if (((byte)bVar5 & 1) != 0) {
    __n = *(size_t *)(param_1 + 8);
  }
  if (__n != 0) {
    if (plVar11 == plVar3) {
      return;
    }
    __s2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar5 & 1) == 0) {
      __s2 = param_1 + 1;
    }
    do {
      lVar15 = *plVar11;
      lVar8 = *(long *)(lVar15 + 0xa8);
      bVar4 = *(byte *)(lVar8 + 0x18);
      uVar7 = (ulong)(bVar4 >> 1);
      sVar2 = uVar7;
      if ((bVar4 & 1) != 0) {
        sVar2 = *(size_t *)(lVar8 + 0x20);
      }
      if (sVar2 == __n) {
        if ((bVar4 & 1) == 0) {
          pbVar9 = (basic_string *)(lVar8 + 0x19);
          pbVar12 = __s2;
          while (*pbVar9 == *pbVar12) {
            uVar7 = uVar7 - 1;
            pbVar9 = pbVar9 + 1;
            pbVar12 = pbVar12 + 1;
            if (uVar7 == 0) goto LAB_00d7cda8;
          }
        }
        else {
          iVar6 = memcmp(*(void **)(lVar8 + 0x28),__s2,__n);
          if (iVar6 == 0) {
LAB_00d7cda8:
            if (lVar15 == 0) {
              return;
            }
            *(undefined1 *)(lVar15 + 0x90) = 1;
            if (!param_2) {
              return;
            }
            plVar3 = *(long **)(this + 0x80);
            for (plVar11 = *(long **)(this + 0x78); plVar11 != plVar3; plVar11 = plVar11 + 1) {
              lVar8 = *plVar11;
              if (*(long *)(lVar8 + 0x180) == lVar15) {
                *(undefined1 *)(lVar8 + 0xf8) = 1;
                *(undefined1 *)(lVar8 + 0xfc) = 1;
              }
            }
            return;
          }
        }
      }
      plVar11 = plVar11 + 1;
      if (plVar11 == plVar3) {
        return;
      }
    } while( true );
  }
  if (plVar11 != plVar3) {
    uVar7 = ((ulong)((long)plVar3 + (-8 - (long)plVar11)) >> 3) + 1;
    if (1 < uVar7) {
      uVar10 = uVar7 & 0x3ffffffffffffffe;
      plVar13 = plVar11 + 1;
      plVar11 = plVar11 + uVar10;
      uVar14 = uVar10;
      do {
        plVar1 = plVar13 + -1;
        lVar8 = *plVar13;
        uVar14 = uVar14 - 2;
        plVar13 = plVar13 + 2;
        *(undefined1 *)(*plVar1 + 0x90) = 1;
        *(undefined1 *)(lVar8 + 0x90) = 1;
      } while (uVar14 != 0);
      if (uVar7 == uVar10) goto LAB_00d7ce5c;
    }
    do {
      plVar13 = plVar11 + 1;
      *(undefined1 *)(*plVar11 + 0x90) = 1;
      plVar11 = plVar13;
    } while (plVar3 != plVar13);
  }
LAB_00d7ce5c:
  if (param_2) {
    plVar11 = *(long **)(this + 0x78);
    plVar3 = *(long **)(this + 0x80);
    if (plVar11 != plVar3) {
      uVar7 = ((ulong)((long)plVar3 + (-8 - (long)plVar11)) >> 3) + 1;
      if (1 < uVar7) {
        uVar10 = uVar7 & 0x3ffffffffffffffe;
        plVar13 = plVar11 + 1;
        plVar11 = plVar11 + uVar10;
        uVar14 = uVar10;
        do {
          lVar8 = plVar13[-1];
          lVar15 = *plVar13;
          uVar14 = uVar14 - 2;
          plVar13 = plVar13 + 2;
          *(undefined1 *)(lVar8 + 0xf8) = 1;
          *(undefined1 *)(lVar15 + 0xf8) = 1;
          *(undefined1 *)(lVar8 + 0xfc) = 1;
          *(undefined1 *)(lVar15 + 0xfc) = 1;
        } while (uVar14 != 0);
        if (uVar7 == uVar10) {
          return;
        }
      }
      do {
        plVar13 = plVar11 + 1;
        lVar8 = *plVar11;
        *(undefined1 *)(lVar8 + 0xf8) = 1;
        *(undefined1 *)(lVar8 + 0xfc) = 1;
        plVar11 = plVar13;
      } while (plVar3 != plVar13);
    }
  }
  return;
}

