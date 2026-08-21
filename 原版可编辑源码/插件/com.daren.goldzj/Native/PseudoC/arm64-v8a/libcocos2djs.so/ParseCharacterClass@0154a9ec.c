
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::RegExpParser::ParseCharacterClass(v8::internal::RegExpBuilder const*) */

undefined8 * __thiscall
v8::internal::RegExpParser::ParseCharacterClass(RegExpParser *this,RegExpBuilder *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  RegExpParser RVar4;
  bool bVar5;
  int iVar6;
  Zone *pZVar7;
  long lVar8;
  ZoneList *pZVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  int iVar16;
  char *pcVar17;
  bool bVar18;
  void *pvVar19;
  bool local_80 [4];
  bool local_7c [4];
  int local_78;
  int local_74;
  char *local_70;
  long lStack_68;
  
  Advance(this);
  iVar6 = *(int *)(this + 0x38);
  if (iVar6 == 0x5e) {
    Advance(this);
  }
  pZVar7 = *(Zone **)(this + 8);
  pZVar9 = *(ZoneList **)(pZVar7 + 0x10);
  if ((ulong)(*(long *)(pZVar7 + 0x18) - (long)pZVar9) < 0x10) {
    pZVar9 = (ZoneList *)Zone::NewExpand(pZVar7,0x10);
  }
  else {
    *(ZoneList **)(pZVar7 + 0x10) = pZVar9 + 0x10;
  }
  pZVar7 = *(Zone **)(this + 8);
  lVar8 = *(long *)(pZVar7 + 0x10);
  if ((ulong)(*(long *)(pZVar7 + 0x18) - lVar8) < 0x10) {
    lVar8 = Zone::NewExpand(pZVar7,0x10);
  }
  else {
    *(long *)(pZVar7 + 0x10) = lVar8 + 0x10;
  }
  *(long *)pZVar9 = lVar8;
  *(undefined8 *)(pZVar9 + 8) = 2;
  if (((byte)this[0x3c] >> 4 & 1) == 0) {
    bVar18 = false;
    RVar4 = this[0x4c];
  }
  else {
    bVar18 = (bool)((byte)param_1[0xc] >> 1 & 1);
    RVar4 = this[0x4c];
  }
joined_r0x0154aa90:
  do {
    if (RVar4 == (RegExpParser)0x0) {
LAB_0154af10:
      iVar6 = __strlen_chk("Unterminated character class",0x1d);
      if (this[0x51] == (RegExpParser)0x0) {
        lStack_68 = (long)iVar6;
        this[0x51] = (RegExpParser)0x1;
        local_70 = "Unterminated character class";
        lVar8 = Factory::NewStringFromOneByte(*(undefined8 *)this,&local_70,0);
        if (lVar8 == 0) {
LAB_0154b060:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","(location_) != nullptr");
        }
        **(long **)(this + 0x10) = lVar8;
        *(undefined4 *)(this + 0x38) = 0x200000;
        *(undefined4 *)(this + 0x40) = *(undefined4 *)(*(long *)(this + 0x30) + 0x24);
      }
      return (undefined8 *)0x0;
    }
    if (*(int *)(this + 0x38) == 0x5d) goto LAB_0154aea8;
    ParseClassEscape(this,pZVar9,*(Zone **)(this + 8),bVar18,&local_74,local_7c);
    if (this[0x51] != (RegExpParser)0x0) {
      return (undefined8 *)0x0;
    }
    if (*(int *)(this + 0x38) != 0x2d) {
      if (local_7c[0] == false) {
        uVar14 = *(uint *)(pZVar9 + 8);
        iVar16 = *(int *)(pZVar9 + 0xc);
        iVar2 = local_74;
LAB_0154aca8:
        uVar12 = CONCAT44(iVar2,iVar2);
        if ((int)uVar14 <= iVar16) {
LAB_0154acb8:
          pZVar7 = *(Zone **)(this + 8);
          uVar13 = uVar14 << 1 | 1;
          uVar11 = -(ulong)((uVar14 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar13 << 3
          ;
          pvVar19 = *(void **)(pZVar7 + 0x10);
          if ((ulong)(*(long *)(pZVar7 + 0x18) - (long)pvVar19) < uVar11) {
            pvVar19 = (void *)Zone::NewExpand(pZVar7,uVar11);
          }
          else {
            *(ulong *)(pZVar7 + 0x10) = (long)pvVar19 + uVar11;
          }
          uVar14 = *(uint *)(pZVar9 + 0xc);
          if (0 < (int)uVar14) {
            MemCopy(pvVar19,*(void **)pZVar9,(ulong)uVar14 << 3);
            uVar14 = *(uint *)(pZVar9 + 0xc);
          }
          *(void **)pZVar9 = pvVar19;
          *(uint *)(pZVar9 + 8) = uVar13;
          *(uint *)(pZVar9 + 0xc) = uVar14 + 1;
          *(undefined8 *)((long)pvVar19 + (long)(int)uVar14 * 8) = uVar12;
          RVar4 = this[0x4c];
          goto joined_r0x0154aa90;
        }
        *(int *)(pZVar9 + 0xc) = iVar16 + 1;
        *(undefined8 *)(*(long *)pZVar9 + (long)iVar16 * 8) = uVar12;
      }
LAB_0154aac4:
      RVar4 = this[0x4c];
      goto joined_r0x0154aa90;
    }
    Advance(this);
    if (*(int *)(this + 0x38) == 0x200000) {
LAB_0154aea0:
      if (this[0x4c] != (RegExpParser)0x0) {
LAB_0154aea8:
        Advance(this);
        pZVar7 = *(Zone **)(this + 8);
        puVar10 = *(undefined8 **)(pZVar7 + 0x10);
        if ((ulong)(*(long *)(pZVar7 + 0x18) - (long)puVar10) < 0x20) {
          puVar10 = (undefined8 *)Zone::NewExpand(pZVar7,0x20);
        }
        else {
          *(undefined8 **)(pZVar7 + 0x10) = puVar10 + 4;
        }
        pZVar7 = *(Zone **)(this + 8);
        uVar3 = *(undefined4 *)(param_1 + 0xc);
        *(undefined2 *)(puVar10 + 2) = 0;
        *(undefined4 *)(puVar10 + 3) = uVar3;
        *(uint *)((long)puVar10 + 0x1c) = (uint)(iVar6 == 0x5e);
        *puVar10 = &PTR__RegExpTree_01cc7550;
        puVar10[1] = pZVar9;
        if (*(int *)(pZVar9 + 0xc) != 0) {
          return puVar10;
        }
        uVar14 = *(uint *)(pZVar9 + 8);
        if ((int)uVar14 < 1) {
          pvVar19 = *(void **)(pZVar7 + 0x10);
          uVar13 = uVar14 << 1 | 1;
          uVar11 = -(ulong)((uVar14 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar13 << 3
          ;
          if ((ulong)(*(long *)(pZVar7 + 0x18) - (long)pvVar19) < uVar11) {
            pvVar19 = (void *)Zone::NewExpand(pZVar7,uVar11);
          }
          else {
            *(ulong *)(pZVar7 + 0x10) = (long)pvVar19 + uVar11;
          }
          uVar14 = *(uint *)(pZVar9 + 0xc);
          if (0 < (int)uVar14) {
            MemCopy(pvVar19,*(void **)pZVar9,(ulong)uVar14 << 3);
            uVar14 = *(uint *)(pZVar9 + 0xc);
          }
          puVar15 = (undefined8 *)((long)pvVar19 + (long)(int)uVar14 * 8);
          *(void **)pZVar9 = pvVar19;
          *(uint *)(pZVar9 + 8) = uVar13;
          *(uint *)(pZVar9 + 0xc) = uVar14 + 1;
        }
        else {
          puVar15 = *(undefined8 **)pZVar9;
          *(undefined4 *)(pZVar9 + 0xc) = 1;
        }
        *puVar15 = 0x10ffff00000000;
        *(uint *)((long)puVar10 + 0x1c) = *(uint *)((long)puVar10 + 0x1c) ^ 1;
        return puVar10;
      }
      goto LAB_0154af10;
    }
    if (*(int *)(this + 0x38) == 0x5d) {
      if (local_7c[0] == false) {
        uVar14 = *(uint *)(pZVar9 + 8);
        uVar13 = *(uint *)(pZVar9 + 0xc);
        if ((int)uVar13 < (int)uVar14) {
          pvVar19 = *(void **)pZVar9;
        }
        else {
          pZVar7 = *(Zone **)(this + 8);
          uVar1 = uVar14 << 1 | 1;
          uVar11 = -(ulong)((uVar14 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
          pvVar19 = *(void **)(pZVar7 + 0x10);
          if ((ulong)(*(long *)(pZVar7 + 0x18) - (long)pvVar19) < uVar11) {
            pvVar19 = (void *)Zone::NewExpand(pZVar7,uVar11);
          }
          else {
            *(ulong *)(pZVar7 + 0x10) = (long)pvVar19 + uVar11;
          }
          uVar13 = *(uint *)(pZVar9 + 0xc);
          if (0 < (int)uVar13) {
            MemCopy(pvVar19,*(void **)pZVar9,(ulong)uVar13 << 3);
            uVar13 = *(uint *)(pZVar9 + 0xc);
          }
          *(void **)pZVar9 = pvVar19;
          *(uint *)(pZVar9 + 8) = uVar1;
        }
        *(uint *)(pZVar9 + 0xc) = uVar13 + 1;
        *(ulong *)((long)pvVar19 + (long)(int)uVar13 * 8) = CONCAT44(local_74,local_74);
      }
      uVar14 = *(uint *)(pZVar9 + 8);
      uVar13 = *(uint *)(pZVar9 + 0xc);
      if ((int)uVar13 < (int)uVar14) {
        pvVar19 = *(void **)pZVar9;
      }
      else {
        pZVar7 = *(Zone **)(this + 8);
        uVar1 = uVar14 << 1 | 1;
        uVar11 = -(ulong)((uVar14 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
        pvVar19 = *(void **)(pZVar7 + 0x10);
        if ((ulong)(*(long *)(pZVar7 + 0x18) - (long)pvVar19) < uVar11) {
          pvVar19 = (void *)Zone::NewExpand(pZVar7,uVar11);
        }
        else {
          *(ulong *)(pZVar7 + 0x10) = (long)pvVar19 + uVar11;
        }
        uVar13 = *(uint *)(pZVar9 + 0xc);
        if (0 < (int)uVar13) {
          MemCopy(pvVar19,*(void **)pZVar9,(ulong)uVar13 << 3);
          uVar13 = *(uint *)(pZVar9 + 0xc);
        }
        *(void **)pZVar9 = pvVar19;
        *(uint *)(pZVar9 + 8) = uVar1;
      }
      *(uint *)(pZVar9 + 0xc) = uVar13 + 1;
      *(undefined8 *)((long)pvVar19 + (long)(int)uVar13 * 8) = 0x2d0000002d;
      goto LAB_0154aea0;
    }
    ParseClassEscape(this,pZVar9,*(Zone **)(this + 8),bVar18,&local_78,local_80);
    bVar5 = local_80[0];
    if (this[0x51] != (RegExpParser)0x0) {
      return (undefined8 *)0x0;
    }
    if (local_80[0] != false || local_7c[0] != false) {
      if (((byte)this[0x3c] >> 4 & 1) == 0) {
        if (local_7c[0] == false) {
          uVar14 = *(uint *)(pZVar9 + 8);
          uVar13 = *(uint *)(pZVar9 + 0xc);
          uVar12 = CONCAT44(local_74,local_74);
          if ((int)uVar13 < (int)uVar14) {
            pvVar19 = *(void **)pZVar9;
          }
          else {
            pZVar7 = *(Zone **)(this + 8);
            uVar1 = uVar14 << 1 | 1;
            uVar11 = -(ulong)((uVar14 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 |
                     (ulong)uVar1 << 3;
            pvVar19 = *(void **)(pZVar7 + 0x10);
            if ((ulong)(*(long *)(pZVar7 + 0x18) - (long)pvVar19) < uVar11) {
              pvVar19 = (void *)Zone::NewExpand(pZVar7,uVar11);
            }
            else {
              *(ulong *)(pZVar7 + 0x10) = (long)pvVar19 + uVar11;
            }
            uVar13 = *(uint *)(pZVar9 + 0xc);
            if (0 < (int)uVar13) {
              MemCopy(pvVar19,*(void **)pZVar9,(ulong)uVar13 << 3);
              uVar13 = *(uint *)(pZVar9 + 0xc);
            }
            *(void **)pZVar9 = pvVar19;
            *(uint *)(pZVar9 + 8) = uVar1;
          }
          *(uint *)(pZVar9 + 0xc) = uVar13 + 1;
          *(undefined8 *)((long)pvVar19 + (long)(int)uVar13 * 8) = uVar12;
        }
        uVar14 = *(uint *)(pZVar9 + 8);
        uVar13 = *(uint *)(pZVar9 + 0xc);
        if ((int)uVar13 < (int)uVar14) {
          pvVar19 = *(void **)pZVar9;
        }
        else {
          pZVar7 = *(Zone **)(this + 8);
          uVar1 = uVar14 << 1 | 1;
          uVar11 = -(ulong)((uVar14 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
          pvVar19 = *(void **)(pZVar7 + 0x10);
          if ((ulong)(*(long *)(pZVar7 + 0x18) - (long)pvVar19) < uVar11) {
            pvVar19 = (void *)Zone::NewExpand(pZVar7,uVar11);
          }
          else {
            *(ulong *)(pZVar7 + 0x10) = (long)pvVar19 + uVar11;
          }
          uVar13 = *(uint *)(pZVar9 + 0xc);
          if (0 < (int)uVar13) {
            MemCopy(pvVar19,*(void **)pZVar9,(ulong)uVar13 << 3);
            uVar13 = *(uint *)(pZVar9 + 0xc);
          }
          *(void **)pZVar9 = pvVar19;
          *(uint *)(pZVar9 + 8) = uVar1;
        }
        *(uint *)(pZVar9 + 0xc) = uVar13 + 1;
        *(undefined8 *)((long)pvVar19 + (long)(int)uVar13 * 8) = 0x2d0000002d;
        if (bVar5 == false) {
          uVar14 = *(uint *)(pZVar9 + 8);
          iVar16 = *(int *)(pZVar9 + 0xc);
          iVar2 = local_78;
          goto LAB_0154aca8;
        }
        goto LAB_0154aac4;
      }
      pcVar17 = "Invalid character class";
      uVar12 = 0x18;
LAB_0154ad80:
      iVar6 = __strlen_chk(pcVar17,uVar12);
      if (this[0x51] != (RegExpParser)0x0) {
        return (undefined8 *)0x0;
      }
      lStack_68 = (long)iVar6;
      this[0x51] = (RegExpParser)0x1;
      local_70 = pcVar17;
      lVar8 = Factory::NewStringFromOneByte(*(undefined8 *)this,&local_70,0);
      if (lVar8 != 0) {
        **(long **)(this + 0x10) = lVar8;
        *(undefined4 *)(this + 0x38) = 0x200000;
        *(undefined4 *)(this + 0x40) = *(undefined4 *)(*(long *)(this + 0x30) + 0x24);
        return (undefined8 *)0x0;
      }
      goto LAB_0154b060;
    }
    if (local_78 < local_74) {
      pcVar17 = "Range out of order in character class";
      uVar12 = 0x26;
      goto LAB_0154ad80;
    }
    uVar14 = *(uint *)(pZVar9 + 8);
    iVar16 = *(int *)(pZVar9 + 0xc);
    uVar12 = CONCAT44(local_78,local_74);
    if ((int)uVar14 <= iVar16) goto LAB_0154acb8;
    *(int *)(pZVar9 + 0xc) = iVar16 + 1;
    *(undefined8 *)(*(long *)pZVar9 + (long)iVar16 * 8) = uVar12;
    RVar4 = this[0x4c];
  } while( true );
}

