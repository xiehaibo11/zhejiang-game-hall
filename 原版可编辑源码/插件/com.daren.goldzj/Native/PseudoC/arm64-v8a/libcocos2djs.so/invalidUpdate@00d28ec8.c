
/* dragonBones::Armature::invalidUpdate(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool) */

void __thiscall
dragonBones::Armature::invalidUpdate(Armature *this,basic_string *param_1,bool param_2)

{
  long *plVar1;
  ulong uVar2;
  size_t __n;
  size_t sVar3;
  long *plVar4;
  byte bVar5;
  basic_string bVar6;
  int iVar7;
  long lVar8;
  basic_string *pbVar9;
  basic_string *__s2;
  ulong uVar10;
  long *plVar11;
  basic_string *pbVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  
  bVar6 = *param_1;
  plVar11 = *(long **)(this + 0x60);
  plVar4 = *(long **)(this + 0x68);
  __n = (ulong)((byte)bVar6 >> 1);
  if (((byte)bVar6 & 1) != 0) {
    __n = *(size_t *)(param_1 + 8);
  }
  if (__n != 0) {
    if (plVar11 == plVar4) {
      return;
    }
    __s2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar6 & 1) == 0) {
      __s2 = param_1 + 1;
    }
    do {
      lVar15 = *plVar11;
      lVar8 = *(long *)(lVar15 + 0xa8);
      bVar5 = *(byte *)(lVar8 + 0x18);
      sVar3 = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        sVar3 = *(size_t *)(lVar8 + 0x20);
      }
      if (sVar3 == __n) {
        if ((bVar5 & 1) == 0) {
          pbVar9 = (basic_string *)(lVar8 + 0x19);
          lVar8 = -(ulong)(bVar5 >> 1);
          pbVar12 = __s2;
          while (*pbVar9 == *pbVar12) {
            pbVar9 = pbVar9 + 1;
            lVar8 = lVar8 + 1;
            pbVar12 = pbVar12 + 1;
            if (lVar8 == 0) goto LAB_00d29088;
          }
        }
        else {
          iVar7 = memcmp(*(void **)(lVar8 + 0x28),__s2,__n);
          if (iVar7 == 0) {
LAB_00d29088:
            if (lVar15 == 0) {
              return;
            }
            *(undefined1 *)(lVar15 + 0x90) = 1;
            if (!param_2) {
              return;
            }
            plVar4 = *(long **)(this + 0x80);
            for (plVar11 = *(long **)(this + 0x78); plVar11 != plVar4; plVar11 = plVar11 + 1) {
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
      if (plVar11 == plVar4) {
        return;
      }
    } while( true );
  }
  if (plVar11 != plVar4) {
    uVar2 = ((ulong)((long)plVar4 + (-8 - (long)plVar11)) >> 3) + 1;
    if (1 < uVar2) {
      uVar10 = uVar2 & 0x3ffffffffffffffe;
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
      if (uVar2 == uVar10) goto LAB_00d29004;
    }
    do {
      plVar13 = plVar11 + 1;
      *(undefined1 *)(*plVar11 + 0x90) = 1;
      plVar11 = plVar13;
    } while (plVar4 != plVar13);
  }
LAB_00d29004:
  if (param_2) {
    plVar11 = *(long **)(this + 0x78);
    plVar4 = *(long **)(this + 0x80);
    if (plVar11 != plVar4) {
      uVar2 = ((ulong)((long)plVar4 + (-8 - (long)plVar11)) >> 3) + 1;
      if (1 < uVar2) {
        uVar10 = uVar2 & 0x3ffffffffffffffe;
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
        if (uVar2 == uVar10) {
          return;
        }
      }
      do {
        plVar13 = plVar11 + 1;
        lVar8 = *plVar11;
        *(undefined1 *)(lVar8 + 0xf8) = 1;
        *(undefined1 *)(lVar8 + 0xfc) = 1;
        plVar11 = plVar13;
      } while (plVar4 != plVar13);
    }
  }
  return;
}

