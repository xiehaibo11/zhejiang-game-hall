
/* v8::internal::compiler::PersistentMap<v8::internal::compiler::Variable,
   v8::internal::compiler::Node*, v8::base::hash<v8::internal::compiler::Variable>
   >::TEMPNAMEPLACEHOLDERVALUE(v8::internal::compiler::PersistentMap<v8::internal::compiler::Variable,
   v8::internal::compiler::Node*, v8::base::hash<v8::internal::compiler::Variable> > const&) const
    */

void * __thiscall
v8::internal::compiler::
PersistentMap<v8::internal::compiler::Variable,v8::internal::compiler::Node*,v8::base::hash<v8::internal::compiler::Variable>>
::operator==(PersistentMap<v8::internal::compiler::Variable,v8::internal::compiler::Node*,v8::base::hash<v8::internal::compiler::Variable>>
             *this,PersistentMap *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  void *pvVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  int *piVar16;
  int *piVar17;
  uint local_4f8 [2];
  long local_4f0;
  long local_4e8;
  long local_4e0 [32];
  long local_3e0;
  uint local_3d8 [2];
  long local_3d0;
  long local_3c8;
  long local_3c0 [32];
  long local_2c0;
  iterator aiStack_2b8 [8];
  long local_2b0;
  int *local_2a8;
  undefined1 auStack_2a0 [256];
  long local_1a0;
  iterator aiStack_198 [8];
  long local_190;
  int *local_188;
  undefined1 auStack_180 [256];
  long local_80;
  undefined2 local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  lVar6 = *(long *)this;
  lVar13 = *(long *)param_1;
  if (lVar6 == lVar13) {
    pvVar5 = (void *)0x1;
  }
  else {
    lVar12 = *(long *)(this + 8);
    lVar14 = *(long *)(param_1 + 8);
    if (lVar12 == lVar14) {
      local_3d8[0] = 0;
      local_3d0 = 0;
      local_3c8 = 0;
      local_2c0 = lVar12;
      if (lVar6 != 0) {
        if ('\0' < *(char *)(lVar6 + 0x10)) {
          do {
            lVar10 = *(long *)(lVar6 + (long)(int)local_3d8[0] * 8 + 0x20);
            lVar9 = lVar6;
            lVar11 = lVar10;
            if ((*(int *)(lVar6 + 0x14) << (ulong)(local_3d8[0] & 0x1f) < 0) &&
               (lVar9 = lVar10, lVar11 = lVar6, lVar10 == 0)) {
              local_3c0[(int)local_3d8[0]] = 0;
            }
            else {
              local_3c0[(int)local_3d8[0]] = lVar11;
              lVar6 = lVar9;
            }
            local_3d8[0] = local_3d8[0] + 1;
          } while ((int)local_3d8[0] < (int)*(char *)(lVar6 + 0x10));
        }
        plVar8 = *(long **)(lVar6 + 0x18);
        if (plVar8 != (long *)0x0) {
          local_3d0 = *plVar8;
        }
        local_3c8 = lVar6;
        if (lVar6 != 0) {
          plVar7 = (long *)(lVar6 + 8);
          if (plVar8 != (long *)0x0) {
            plVar7 = (long *)(local_3d0 + 0x28);
          }
          while ((*plVar7 == lVar12 && (iterator::operator++((iterator *)local_3d8), local_3c8 != 0)
                 )) {
            plVar7 = (long *)(local_3c8 + 8);
            if (*(long *)(local_3c8 + 0x18) != 0) {
              plVar7 = (long *)(local_3d0 + 0x28);
            }
          }
        }
      }
      local_4f8[0] = 0;
      local_4f0 = 0;
      local_4e8 = 0;
      local_3e0 = lVar14;
      if (lVar13 != 0) {
        local_3e0 = lVar12;
        if ('\0' < *(char *)(lVar13 + 0x10)) {
          do {
            lVar9 = *(long *)(lVar13 + (long)(int)local_4f8[0] * 8 + 0x20);
            lVar6 = lVar9;
            lVar14 = lVar13;
            if ((*(int *)(lVar13 + 0x14) << (ulong)(local_4f8[0] & 0x1f) < 0) &&
               (lVar6 = lVar13, lVar14 = lVar9, lVar9 == 0)) {
              local_4e0[(int)local_4f8[0]] = 0;
            }
            else {
              local_4e0[(int)local_4f8[0]] = lVar6;
              lVar13 = lVar14;
            }
            local_4f8[0] = local_4f8[0] + 1;
          } while ((int)local_4f8[0] < (int)*(char *)(lVar13 + 0x10));
        }
        plVar8 = *(long **)(lVar13 + 0x18);
        if (plVar8 != (long *)0x0) {
          local_4f0 = *plVar8;
        }
        local_4e8 = lVar13;
        if (lVar13 != 0) {
          plVar7 = (long *)(lVar13 + 8);
          if (plVar8 != (long *)0x0) {
            plVar7 = (long *)(local_4f0 + 0x28);
          }
          while ((*plVar7 == lVar12 && (iterator::operator++((iterator *)local_4f8), local_4e8 != 0)
                 )) {
            plVar7 = (long *)(local_4e8 + 8);
            if (*(long *)(local_4e8 + 0x18) != 0) {
              plVar7 = (long *)(local_4f0 + 0x28);
            }
          }
        }
      }
      memcpy(aiStack_2b8,local_3d8,0x120);
      pvVar5 = memcpy(aiStack_198,local_4f8,0x120);
      if ((local_2a8 != (int *)0x0) && (local_188 != (int *)0x0)) {
        if (local_2a8[5] == local_188[5]) {
          if (*(long *)(local_2a8 + 6) == 0) {
            iVar1 = *local_2a8;
            lVar6 = *(long *)(local_188 + 6);
          }
          else {
            iVar1 = *(int *)(local_2b0 + 0x20);
            lVar6 = *(long *)(local_188 + 6);
          }
          if (lVar6 == 0) {
            iVar2 = *local_188;
          }
          else {
            iVar2 = *(int *)(local_190 + 0x20);
          }
          if (iVar1 == iVar2) goto LAB_016bb6e0;
        }
LAB_016bb688:
        if (local_2a8 == (int *)0x0) goto LAB_016bb6c8;
        if (local_188 != (int *)0x0) {
          if (local_2a8[5] == local_188[5]) {
            if (*(long *)(local_2a8 + 6) == 0) {
              iVar1 = *local_2a8;
              lVar6 = *(long *)(local_188 + 6);
            }
            else {
              iVar1 = *(int *)(local_2b0 + 0x20);
              lVar6 = *(long *)(local_188 + 6);
            }
            if (lVar6 == 0) {
              iVar2 = *local_188;
            }
            else {
              iVar2 = *(int *)(local_190 + 0x20);
            }
            if (iVar2 <= iVar1) goto LAB_016bb6c8;
          }
          else if ((uint)local_188[5] <= (uint)local_2a8[5]) {
LAB_016bb6c8:
            bVar4 = false;
            local_78 = 0x100;
            goto LAB_016bb6ec;
          }
        }
        uVar15 = 0;
        bVar4 = true;
        local_78 = 1;
LAB_016bb70c:
        piVar16 = local_188;
        piVar17 = local_2a8;
        if (bVar4) goto LAB_016bb768;
        do {
          lVar6 = local_1a0;
          plVar8 = (long *)(piVar16 + 2);
          if (*(long *)(piVar16 + 6) != 0) {
            plVar8 = (long *)(local_190 + 0x28);
          }
LAB_016bb7cc:
          if (*plVar8 != lVar6) {
            uVar15 = 0;
            goto LAB_016bb908;
          }
          if (bVar4) {
            iterator::operator++(aiStack_2b8);
            uVar15 = (uint)local_78._1_1_;
          }
          if (uVar15 != 0) {
            iterator::operator++(aiStack_198);
          }
          piVar17 = local_2a8;
          lVar6 = local_2b0;
          memcpy(local_3d8,auStack_2a0,0x108);
          piVar16 = local_188;
          lVar13 = local_190;
          memcpy(local_4f8,auStack_180,0x108);
          if ((piVar17 == (int *)0x0) || (piVar16 == (int *)0x0)) {
            if (piVar17 != (int *)0x0 || piVar16 != (int *)0x0) goto LAB_016bb864;
LAB_016bb8a8:
            uVar15 = 1;
LAB_016bb8f4:
            bVar4 = true;
          }
          else {
            if (piVar17[5] == piVar16[5]) {
              if (*(long *)(piVar17 + 6) == 0) {
                iVar1 = *piVar17;
                lVar12 = *(long *)(piVar16 + 6);
              }
              else {
                iVar1 = *(int *)(lVar6 + 0x20);
                lVar12 = *(long *)(piVar16 + 6);
              }
              if (lVar12 == 0) {
                iVar2 = *piVar16;
              }
              else {
                iVar2 = *(int *)(lVar13 + 0x20);
              }
              if (iVar1 == iVar2) goto LAB_016bb8a8;
            }
LAB_016bb864:
            if (piVar17 == (int *)0x0) goto LAB_016bb728;
            if (piVar16 == (int *)0x0) {
LAB_016bb8f0:
              uVar15 = 0;
              goto LAB_016bb8f4;
            }
            if (piVar17[5] == piVar16[5]) {
              if (*(long *)(piVar17 + 6) == 0) {
                iVar1 = *piVar17;
                lVar6 = *(long *)(piVar16 + 6);
              }
              else {
                iVar1 = *(int *)(lVar6 + 0x20);
                lVar6 = *(long *)(piVar16 + 6);
              }
              if (lVar6 == 0) {
                iVar2 = *piVar16;
              }
              else {
                iVar2 = *(int *)(lVar13 + 0x20);
              }
              if (iVar1 < iVar2) goto LAB_016bb8f0;
            }
            else if ((uint)piVar17[5] < (uint)piVar16[5]) goto LAB_016bb8f0;
LAB_016bb728:
            bVar4 = false;
            uVar15 = 1;
          }
          memcpy(auStack_2a0,local_3d8,0x108);
          pvVar5 = memcpy(auStack_180,local_4f8,0x108);
          local_78 = CONCAT11((char)uVar15,bVar4);
          if (piVar17 == (int *)0x0 && piVar16 == (int *)0x0) {
            uVar15 = 1;
            goto LAB_016bb908;
          }
        } while (!bVar4);
LAB_016bb768:
        plVar8 = (long *)(piVar17 + 2);
        if (*(long *)(piVar17 + 6) != 0) {
          plVar8 = (long *)(local_2b0 + 0x28);
        }
        lVar6 = *plVar8;
        plVar8 = &local_80;
        if (uVar15 != 0) {
          if (*(long *)(piVar16 + 6) == 0) {
            plVar8 = (long *)(piVar16 + 2);
          }
          else {
            plVar8 = (long *)(local_190 + 0x28);
          }
        }
        goto LAB_016bb7cc;
      }
      if (local_2a8 != (int *)0x0 || local_188 != (int *)0x0) goto LAB_016bb688;
LAB_016bb6e0:
      local_78 = 0x101;
      bVar4 = true;
LAB_016bb6ec:
      uVar15 = 1;
      if (local_2a8 != (int *)0x0 || local_188 != (int *)0x0) goto LAB_016bb70c;
LAB_016bb908:
      if (*(long *)(lVar3 + 0x28) == local_70) {
        return (void *)(ulong)uVar15;
      }
      goto LAB_016bb444;
    }
    pvVar5 = (void *)0x0;
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return pvVar5;
  }
LAB_016bb444:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pvVar5);
}

