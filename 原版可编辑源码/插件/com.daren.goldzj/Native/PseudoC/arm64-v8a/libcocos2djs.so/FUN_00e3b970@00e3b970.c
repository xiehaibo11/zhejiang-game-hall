
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00e3b970(long param_1,ulong *param_2,uint param_3,undefined4 param_4,undefined8 param_5)

{
  undefined1 (*pauVar1) [16];
  uint *puVar2;
  uint *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  bool bVar7;
  ushort uVar8;
  bool bVar9;
  byte bVar10;
  char cVar11;
  byte bVar12;
  short sVar13;
  undefined2 uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined8 *__s;
  size_t sVar26;
  size_t sVar27;
  undefined2 *puVar28;
  void *pvVar29;
  undefined8 uVar30;
  char *pcVar31;
  undefined *puVar32;
  char cVar33;
  undefined4 uVar34;
  int iVar35;
  long lVar36;
  ushort *puVar37;
  ulong uVar38;
  long lVar39;
  undefined1 (*pauVar40) [16];
  char *pcVar41;
  ulong uVar42;
  ulong uVar43;
  long *plVar44;
  uint uVar45;
  char *pcVar46;
  undefined8 *puVar47;
  ulong uVar48;
  uint uVar49;
  undefined8 uVar50;
  ulong uVar51;
  char *pcVar52;
  ulong *puVar53;
  uint uVar54;
  undefined8 uVar55;
  ushort uVar56;
  short sVar58;
  short sVar59;
  short sVar60;
  short sVar61;
  short sVar62;
  short sVar63;
  undefined1 auVar57 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  long lVar66;
  long lVar67;
  ulong local_188;
  ulong local_178;
  ulong local_170;
  long local_168;
  long *local_160;
  ulong local_158;
  short local_150;
  short sStack_14e;
  short sStack_14c;
  short sStack_14a;
  short sStack_148;
  short sStack_146;
  short sStack_144;
  short sStack_142;
  long *local_138;
  uint local_104;
  void *local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  long local_c8;
  ulong *local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long local_88 [2];
  uint local_78;
  int local_74;
  uint local_70;
  undefined4 uStack_6c;
  
  uVar50 = *(undefined8 *)(param_2[0x16] + 8);
  lVar21 = FUN_00e19584(uVar50,&DAT_01975980);
  if (lVar21 == 0) {
    return 0xb;
  }
  lVar22 = FUN_00e19608(param_2[0x16],"postscript-cmaps",1);
  uVar23 = FUN_00e19584(uVar50,"pshinter");
  uVar24 = FUN_00e19584(uVar50,"psaux");
  if (uVar24 == 0) {
    return 0xb;
  }
  param_2[0x72] = uVar24;
  uVar25 = FUN_00e19608(param_2[0x16],"cff-load",1);
  local_104 = FUN_00e1bb5c(param_1,0);
  if (local_104 != 0) {
    return local_104;
  }
  local_104 = (**(code **)(lVar21 + 8))(param_1,param_2,param_3,param_4,param_5);
  if (local_104 == 0) {
    if (param_2[0x23] != 0x4f54544f) {
      return 2;
    }
    if ((int)param_3 < 0) {
      return 0;
    }
    local_104 = (*(code *)param_2[0x68])(param_2,0x68656164,param_1,0);
    if (local_104 == 0) {
      uVar15 = (**(code **)(lVar21 + 0x10))(param_1,param_2,param_3,param_4,param_5);
      if (uVar15 != 0) {
        return uVar15;
      }
      bVar7 = false;
    }
    else {
      uVar15 = (**(code **)(lVar21 + 0x40))(param_2,param_1);
      if (uVar15 != 0) {
        return uVar15;
      }
      bVar7 = true;
    }
    local_104 = 0;
    local_104 = (*(code *)param_2[0x68])(param_2,0x43464632,param_1,0);
    if (local_104 == 0) {
      bVar9 = true;
      *(undefined1 *)(param_2 + 0x97) = 1;
      cVar33 = '\x01';
    }
    else {
      if ((local_104 & 0xff) != 0x8e) {
        return local_104;
      }
      uVar15 = (*(code *)param_2[0x68])(param_2,0x43464620,param_1,0);
      if (uVar15 != 0) {
        return uVar15;
      }
      cVar33 = '\0';
      bVar9 = true;
    }
  }
  else {
    uVar15 = FUN_00e1bb5c(param_1,0);
    if (uVar15 != 0) {
      return uVar15;
    }
    cVar33 = '\0';
    bVar7 = true;
    bVar9 = false;
  }
  local_104 = 0;
  uVar24 = param_2[0x17];
  __s = (undefined8 *)FUN_00e1388c(uVar24,0x13c0,&local_104);
  if (local_104 != 0) {
    return local_104;
  }
  param_2[0x92] = (ulong)__s;
  uVar55 = *(undefined8 *)(param_1 + 0x38);
  memset(__s,0,0x13c0);
  uStack_98 = 0;
  local_a0 = 0;
  local_88[0] = 0;
  local_90 = 0;
  uStack_b8 = 0;
  local_c0 = (ulong *)0x0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  lVar21 = FUN_00e1d4a0(param_1);
  *__s = uVar50;
  __s[1] = param_1;
  __s[2] = uVar55;
  __s[3] = lVar21;
  *(char *)(__s + 6) = cVar33;
  local_78 = FUN_00e1dd74(param_1,&DAT_01976ce0,__s);
  uVar15 = local_78;
  if (local_78 == 0) {
    if (cVar33 == '\0') {
      bVar10 = FUN_00e1dabc(param_1,&local_78);
      uVar15 = local_78;
      if (local_78 == 0) {
        if (((*(char *)(__s + 5) == '\x01') && (bVar10 < 5)) &&
           (bVar10 = *(byte *)((long)__s + 0x2a), 3 < bVar10)) goto LAB_00e3bc9c;
        goto LAB_00e3bcb8;
      }
    }
    else if ((*(char *)(__s + 5) == '\x02') && (4 < *(byte *)((long)__s + 0x2a))) {
      uVar15 = FUN_00e1bcf8(param_1,&local_78);
      *(uint *)((long)__s + 0x2c) = uVar15 & 0xffff;
      uVar15 = local_78;
      if (local_78 != 0) goto joined_r0x00e3d5bc;
      bVar10 = *(byte *)((long)__s + 0x2a);
LAB_00e3bc9c:
      local_78 = FUN_00e1bb5c(param_1,lVar21 + (ulong)bVar10);
      if (local_78 == 0) {
        if (cVar33 == '\0') {
          local_78 = FUN_00e42ef0(__s + 7,param_1,0,0);
          if (local_78 != 0) goto LAB_00e3bcb0;
          if ((*(uint *)((long)__s + 0x4c) < 2) ||
             ((ulong)*(uint *)((long)__s + 0x4c) <= (ulong)__s[0xc])) {
            local_78 = FUN_00e42ef0(__s + 0xaf,param_1,0,0);
            uVar15 = local_78;
            if ((local_78 == 0) &&
               (((local_78 = FUN_00e42ef0(&local_c0,param_1,1,0), uVar15 = local_78, local_78 == 0
                 && (local_78 = FUN_00e42ef0(__s + 0x17,param_1,1,0), uVar15 = local_78,
                    local_78 == 0)) &&
                (local_78 = FUN_00e430a8(&local_c0,__s + 0xca,__s + 0xcb,__s + 0xcc),
                uVar15 = local_78, local_78 == 0)))) {
              if (*(uint *)((long)__s + 0x4c) <= *(uint *)((long)__s + 0x58c)) goto LAB_00e3c19c;
              goto LAB_00e3c964;
            }
          }
          else {
            uVar15 = 2;
            if (!bVar7) {
              uVar15 = 3;
            }
          }
        }
        else {
          __s[0xb6] = 0;
          __s[0xb5] = 0;
          __s[0xb4] = 0;
          __s[0xb3] = 0;
          __s[0xb2] = 0;
          __s[0xb1] = 0;
          __s[0xb0] = 0;
          __s[0xaf] = 0;
          uVar50 = FUN_00e1d4a0(param_1);
          __s[0xb3] = uVar50;
          __s[0xb4] = (ulong)*(uint *)((long)__s + 0x2c);
          local_78 = FUN_00e1bc6c(param_1);
          uVar15 = local_78;
          if ((local_78 == 0) &&
             (local_78 = FUN_00e42ef0(__s + 0x17,param_1,1,cVar33), uVar15 = local_78, local_78 == 0
             )) {
LAB_00e3c19c:
            *(undefined4 *)(__s + 0xc9) = uStack_b0._4_4_;
            if (bVar7) {
              uVar45 = param_3 & 0xffff;
              if (((int)param_3 < 1) || (uVar45 < *(uint *)((long)__s + 0x4c))) {
                *(uint *)(__s + 4) = *(uint *)((long)__s + 0x4c);
                goto joined_r0x00e3c984;
              }
              local_78 = 6;
              uVar15 = local_78;
            }
            else if (*(uint *)((long)__s + 0x4c) < 2) {
              uVar45 = 0;
joined_r0x00e3c984:
              uVar15 = local_78;
              if (-1 < (int)param_3) {
                uVar34 = 0x3000;
                if (cVar33 == '\0') {
                  uVar34 = 0x1000;
                }
                local_78 = FUN_00e43430(__s + 0xcd,__s + 0xaf,uVar45,param_1,lVar21,uVar34,__s,
                                        param_2);
                uVar15 = local_78;
                if (((local_78 == 0) &&
                    (local_78 = FUN_00e1bb5c(param_1,__s[0xe5] + lVar21), uVar15 = local_78,
                    local_78 == 0)) &&
                   (local_78 = FUN_00e42ef0(__s + 0xa7,param_1,0,cVar33), uVar15 = local_78,
                   local_78 == 0)) {
                  if ((cVar33 == '\0') && (*(int *)((long)__s + 0x74c) == 0xffff)) {
                    *(undefined4 *)(__s + 0x166) = 0;
                    local_78 = 0;
                  }
                  else {
                    uVar50 = *(undefined8 *)(param_1 + 0x38);
                    puVar2 = (uint *)(__s + 0x273);
                    local_70 = 3;
                    if (__s[0xf4] == 0) {
                      local_138 = (long *)0x0;
LAB_00e3cb3c:
                      local_70 = 0;
                      FUN_00e139fc(uVar50,local_138);
joined_r0x00e3cb4c:
                      if (local_70 != 0) goto LAB_00e3d090;
LAB_00e3cb30:
                      local_78 = 0;
                    }
                    else {
                      local_70 = FUN_00e1bb5c(param_1,__s[0xf4] + lVar21);
                      if ((local_70 == 0) && (local_70 = FUN_00e1bc6c(param_1,2), local_70 == 0)) {
                        uVar51 = FUN_00e1d4a0(param_1);
                        sVar13 = FUN_00e1bcf8(param_1,&local_70);
                        if (local_70 == 0) {
                          if (sVar13 != 1) {
                            local_138 = (long *)0x0;
                            local_70 = 3;
LAB_00e3d080:
                            FUN_00e139fc(uVar50,local_138);
                            goto joined_r0x00e3cb4c;
                          }
                          lVar39 = FUN_00e1c3a4(param_1,&local_70);
                          if (local_70 == 0) {
                            uVar56 = FUN_00e1bcf8(param_1,&local_70);
                            *puVar2 = (uint)uVar56;
                            if (local_70 == 0) {
                              local_138 = (long *)FUN_00e13bcc(uVar50,8,0,uVar56,0,&local_70);
                              if (local_70 == 0) {
                                if (*puVar2 != 0) {
                                  uVar38 = 0;
                                  do {
                                    lVar36 = FUN_00e1c3a4(param_1,&local_70);
                                    local_138[uVar38] = lVar36;
                                    if (local_70 != 0) goto LAB_00e3d080;
                                    uVar38 = uVar38 + 1;
                                  } while (uVar38 < *puVar2);
                                }
                                uVar51 = uVar51 & 0xffffffff;
                                local_70 = FUN_00e1bb5c(param_1,lVar39 + uVar51);
                                if (local_70 == 0) {
                                  uVar14 = FUN_00e1bcf8(param_1,&local_70);
                                  *(undefined2 *)(__s + 0x275) = uVar14;
                                  if (local_70 == 0) {
                                    uVar56 = FUN_00e1bcf8(param_1,&local_70);
                                    *(uint *)((long)__s + 0x13ac) = (uint)uVar56;
                                    if (local_70 == 0) {
                                      local_160 = (long *)FUN_00e13bcc(uVar50,8,0,uVar56,0,&local_70
                                                                      );
                                      __s[0x276] = local_160;
                                      if (local_70 == 0) {
                                        if (*(int *)((long)__s + 0x13ac) == 0) {
LAB_00e3da68:
                                          local_158 = FUN_00e13bcc(uVar50,0x10,0,
                                                                   *(undefined4 *)(__s + 0x273),0,
                                                                   &local_70);
                                          __s[0x274] = local_158;
                                          if (local_70 == 0) {
                                            if (*puVar2 == 0) goto LAB_00e3cb3c;
                                            local_70 = FUN_00e1bb5c(param_1,*local_138 + uVar51);
                                            if (local_70 == 0) {
                                              local_170 = 0;
                                              local_70 = 0;
                                              do {
                                                local_70 = FUN_00e1bc6c(param_1,4);
                                                if (local_70 != 0) break;
                                                uVar56 = FUN_00e1bcf8(param_1,&local_70);
                                                puVar3 = (uint *)(local_158 + local_170 * 0x10);
                                                *puVar3 = (uint)uVar56;
                                                if (local_70 != 0) break;
                                                uVar30 = FUN_00e13bcc(uVar50,4,0,uVar56,0,&local_70)
                                                ;
                                                *(undefined8 *)(puVar3 + 2) = uVar30;
                                                if (local_70 != 0) break;
                                                if (*puVar3 != 0) {
                                                  local_158 = 0;
                                                  do {
                                                    uVar15 = FUN_00e1bcf8(param_1,&local_70);
                                                    *(uint *)(*(long *)(puVar3 + 2) + local_158 * 4)
                                                         = uVar15 & 0xffff;
                                                    if (local_70 != 0) goto LAB_00e3d080;
                                                    local_158 = local_158 + 1;
                                                  } while (local_158 < *puVar3);
                                                }
                                                local_170 = local_170 + 1;
                                                if (*puVar2 <= local_170) goto LAB_00e3cb3c;
                                                local_158 = __s[0x274];
                                                local_70 = FUN_00e1bb5c(param_1,local_138[local_170]
                                                                                + uVar51);
                                              } while (local_70 == 0);
                                            }
                                          }
                                        }
                                        else {
                                          local_168 = FUN_00e13bcc(uVar50,0x18,0,
                                                                   *(undefined2 *)(__s + 0x275),0,
                                                                   &local_70);
                                          *local_160 = local_168;
                                          if (local_70 == 0) {
                                            local_188 = 0;
                                            do {
                                              if (*(short *)(__s + 0x275) == 0) {
                                                uVar38 = 0;
                                              }
                                              else {
                                                local_178 = FUN_00e1bcf8(param_1,&local_70);
                                                if (local_70 != 0) break;
                                                local_158 = 0;
                                                local_170 = 0;
                                                while( true ) {
                                                  uVar38 = FUN_00e1bcf8(param_1,&local_70);
                                                  if ((local_70 != 0) ||
                                                     (uVar42 = FUN_00e1bcf8(param_1,&local_70),
                                                     local_70 != 0)) goto LAB_00e3d080;
                                                  puVar53 = (ulong *)(local_168 + local_158);
                                                  puVar53[2] = -(uVar42 >> 0xf & 1) &
                                                               0xfffffffffffc0000 |
                                                               (uVar42 & 0xffff) << 2;
                                                  *puVar53 = -(local_178 >> 0xf & 1) &
                                                             0xfffffffffffc0000 |
                                                             (local_178 & 0xffff) << 2;
                                                  puVar53[1] = -(uVar38 >> 0xf & 1) &
                                                               0xfffffffffffc0000 |
                                                               (uVar38 & 0xffff) << 2;
                                                  uVar38 = (ulong)*(ushort *)(__s + 0x275);
                                                  local_170 = local_170 + 1;
                                                  if (uVar38 <= local_170) break;
                                                  local_168 = *local_160;
                                                  local_158 = local_158 + 0x18;
                                                  local_178 = FUN_00e1bcf8(param_1,&local_70);
                                                  if (local_70 != 0) goto LAB_00e3d080;
                                                }
                                              }
                                              local_188 = local_188 + 1;
                                              if (*(uint *)((long)__s + 0x13ac) <= local_188)
                                              goto LAB_00e3da68;
                                              lVar39 = __s[0x276];
                                              local_168 = FUN_00e13bcc(uVar50,0x18,0,uVar38,0,
                                                                       &local_70);
                                              local_160 = (long *)(lVar39 + local_188 * 8);
                                              *local_160 = local_168;
                                            } while (local_70 == 0);
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                              goto LAB_00e3d080;
                            }
                          }
                        }
                      }
                      FUN_00e139fc(uVar50,0);
                      if (local_70 == 0) goto LAB_00e3cb30;
LAB_00e3d090:
                      FUN_00e437bc(puVar2,uVar50);
                      local_78 = local_70;
                      uVar15 = local_70;
                      if (local_70 != 0) goto joined_r0x00e3d5bc;
                    }
                    local_78 = FUN_00e1bb5c(param_1,__s[0xf1] + lVar21);
                    uVar15 = local_78;
                    if ((local_78 != 0) ||
                       (local_78 = FUN_00e42ef0(&local_100,param_1,0,cVar33), uVar15 = local_78,
                       local_78 != 0)) goto joined_r0x00e3d5bc;
                    if (uStack_f0._4_4_ < 0x101) {
                      *(uint *)(__s + 0x166) = uStack_f0._4_4_;
                      lVar39 = FUN_00e13bcc(uVar55,0x4c8,0,uStack_f0._4_4_,0,&local_78);
                      uVar17 = local_78;
                      uVar15 = local_78;
                      if (local_78 == 0) {
                        uVar51 = (ulong)uStack_f0._4_4_;
                        uVar15 = 0;
                        if (uStack_f0._4_4_ != 0) {
                          if (uStack_f0._4_4_ < 4) {
                            uVar42 = 0;
LAB_00e3d438:
                            lVar36 = uVar51 - uVar42;
                            lVar39 = lVar39 + uVar42 * 0x4c8;
                            plVar44 = __s + uVar42 + 0x167;
                            do {
                              *plVar44 = lVar39;
                              lVar36 = lVar36 + -1;
                              lVar39 = lVar39 + 0x4c8;
                              plVar44 = plVar44 + 1;
                            } while (lVar36 != 0);
                          }
                          else {
                            uVar42 = uVar51 & 0xfffffffc;
                            plVar44 = __s + 0x169;
                            uVar38 = uVar42;
                            auVar57 = _DAT_01852f10;
                            do {
                              lVar36 = auVar57._8_8_;
                              lVar66 = lVar39 + auVar57._0_8_ * 0x4c8;
                              lVar67 = lVar39 + lVar36 * 0x4c8;
                              auVar57._0_8_ = auVar57._0_8_ + 4;
                              auVar57._8_8_ = lVar36 + 4;
                              uVar38 = uVar38 - 4;
                              plVar44[-1] = lVar67;
                              plVar44[-2] = lVar66;
                              plVar44[1] = lVar67 + 0x990;
                              *plVar44 = lVar66 + 0x990;
                              plVar44 = plVar44 + 4;
                            } while (uVar38 != 0);
                            if (uVar42 != uVar51) goto LAB_00e3d438;
                          }
                          uVar34 = 0x4000;
                          if (cVar33 == '\0') {
                            uVar34 = 0x1000;
                          }
                          uVar51 = 0;
                          do {
                            local_78 = uVar17;
                            local_78 = FUN_00e43430(__s[uVar51 + 0x167],&local_100,
                                                    uVar51 & 0xffffffff,param_1,lVar21,uVar34,__s,
                                                    param_2);
                            uVar17 = local_78;
                            uVar15 = local_78;
                            if (local_78 != 0) goto joined_r0x00e3d510;
                            uVar51 = uVar51 + 1;
                            uVar15 = uStack_f0._4_4_;
                            uVar17 = 0;
                          } while (uVar51 < uStack_f0._4_4_);
                        }
                        if ((uVar15 < 2) && (cVar33 != '\0')) goto LAB_00e3d0ec;
                        iVar16 = *(int *)((long)__s + 0x54c);
                        local_70 = FUN_00e1bb5c(param_1,__s[0xf2] + lVar21);
                        uVar17 = local_70;
                        uVar15 = local_70;
                        if ((local_70 == 0) &&
                           (cVar11 = FUN_00e1dabc(param_1,&local_70), uVar17 = local_70,
                           uVar15 = local_70, local_70 == 0)) {
                          *(char *)(__s + 0x267) = cVar11;
                          *(undefined4 *)(__s + 0x26a) = 0;
                          if (cVar11 == '\0') {
LAB_00e3d6d4:
                            *(int *)(__s + 0x269) = iVar16;
                            local_70 = FUN_00e1d5c4(param_1,iVar16,__s + 0x268);
                            uVar17 = local_70;
                            uVar15 = local_70;
                          }
                          else {
                            if (cVar11 == '\x03') {
                              uVar18 = FUN_00e1bcf8(param_1,&local_70);
                              uVar17 = local_70;
                              uVar15 = local_70;
                              if (local_70 != 0) goto joined_r0x00e3d510;
                              if ((uVar18 & 0xffff) != 0) {
                                iVar16 = (uVar18 & 0xffff) * 3 + 2;
                                goto LAB_00e3d6d4;
                              }
                            }
                            local_70 = 3;
                            local_78 = 3;
                            uVar17 = 3;
                            uVar15 = local_78;
                          }
                        }
                      }
                    }
                    else {
LAB_00e3d0ec:
                      uVar17 = 0;
                      uVar15 = local_78;
                    }
joined_r0x00e3d510:
                    local_78 = uVar15;
                    if (local_100 != (void *)0x0) {
                      uVar50 = *(undefined8 *)((long)local_100 + 0x38);
                      if (local_c8 != 0) {
                        FUN_00e1d86c(local_100,&local_c8);
                      }
                      FUN_00e139fc(uVar50,local_d0);
                      uStack_d8 = 0;
                      local_e0 = 0;
                      local_c8 = 0;
                      local_d0 = 0;
                      uStack_f8 = 0;
                      local_100 = (void *)0x0;
                      uStack_e8 = 0;
                      uStack_f0 = 0;
                      uVar17 = local_78;
                    }
                    uVar15 = local_78;
                    if (uVar17 != 0) goto joined_r0x00e3d5bc;
                  }
                  if (__s[0xe5] == 0) goto LAB_00e3c964;
                  *(undefined4 *)((long)__s + 0x24) = *(undefined4 *)((long)__s + 0x54c);
                  local_78 = FUN_00e430a8(__s + 0x17,__s + 200,0,0);
                  uVar15 = local_78;
                  if (local_78 != 0) goto joined_r0x00e3d5bc;
                  if (cVar33 == '\0') {
                    uVar15 = *(uint *)((long)__s + 0x24);
                    uVar51 = (ulong)uVar15;
                    if (uVar15 == 0) goto LAB_00e3ca4c;
                    uVar38 = __s[0xe3];
                    iVar16 = *(int *)((long)__s + 0x74c);
                    uVar50 = *(undefined8 *)(param_1 + 0x38);
                    local_70 = 0;
                    if (uVar38 < 3) {
                      iVar35 = (int)uVar38;
                      __s[0xa3] = uVar38;
                      if (iVar35 == 2) {
                        if (0x57 < uVar15) goto LAB_00e3d1c4;
                        pvVar29 = (void *)FUN_00e13bcc(uVar50,2,0,uVar51,0,&local_70);
                        __s[0xa4] = pvVar29;
                        if (local_70 == 0) {
                          puVar32 = &DAT_0197700a;
                          goto LAB_00e3d54c;
                        }
                      }
                      else if (iVar35 == 1) {
                        if (0xa6 < uVar15) goto LAB_00e3d1c4;
                        pvVar29 = (void *)FUN_00e13bcc(uVar50,2,0,uVar51,0,&local_70);
                        __s[0xa4] = pvVar29;
                        if (local_70 == 0) {
                          puVar32 = &DAT_01976ebe;
                          goto LAB_00e3d54c;
                        }
                      }
                      else if ((iVar35 == 0) && (uVar15 < 0xe6)) {
                        pvVar29 = (void *)FUN_00e13bcc(uVar50,2,0,uVar51,0,&local_70);
                        __s[0xa4] = pvVar29;
                        if (local_70 == 0) {
                          puVar32 = &DAT_01976cf4;
LAB_00e3d54c:
                          memcpy(pvVar29,puVar32,uVar51 << 1);
                          goto joined_r0x00e3d754;
                        }
                      }
                      else {
LAB_00e3d1c4:
                        local_70 = 3;
                      }
LAB_00e3d1cc:
                      FUN_00e139fc(uVar50,__s[0xa4]);
                      __s[0xa4] = 0;
                      FUN_00e139fc(uVar50,__s[0xa5]);
                      __s[0xa5] = 0;
                      *(undefined4 *)(__s + 0xa2) = 0;
                      __s[0xa4] = 0;
                      __s[0xa3] = 0;
                      uVar15 = local_70;
                      if (local_70 != 0) goto joined_r0x00e3d5bc;
                      iVar16 = *(int *)((long)__s + 0x74c);
                      local_78 = local_70;
                    }
                    else {
                      __s[0xa3] = uVar38 + lVar21;
                      local_70 = FUN_00e1bb5c(param_1);
                      if (local_70 != 0) goto LAB_00e3d1cc;
                      uVar17 = FUN_00e1dabc(param_1,&local_70);
                      *(uint *)(__s + 0xa2) = uVar17 & 0xff;
                      if (local_70 != 0) goto LAB_00e3d1cc;
                      puVar28 = (undefined2 *)FUN_00e13bcc(uVar50,2,0,uVar51,0,&local_70);
                      __s[0xa4] = puVar28;
                      if (local_70 != 0) goto LAB_00e3d1cc;
                      *puVar28 = 0;
                      auVar57 = _DAT_01976a40;
                      if (*(int *)(__s + 0xa2) - 1U < 2) {
                        if (1 < uVar15) {
                          uVar38 = 1;
                          do {
                            uVar17 = FUN_00e1bcf8(param_1,&local_70);
                            if (local_70 != 0) goto LAB_00e3d1cc;
                            if (*(int *)(__s + 0xa2) == 2) {
                              uVar18 = FUN_00e1bcf8();
                              if (local_70 != 0) goto LAB_00e3d1cc;
                              uVar18 = uVar18 & 0xffff;
                            }
                            else {
                              uVar18 = FUN_00e1dabc(param_1,&local_70);
                              if (local_70 != 0) goto LAB_00e3d1cc;
                              uVar18 = uVar18 & 0xff;
                            }
                            uVar54 = ~uVar17 & 0xffff;
                            if ((uVar17 & 0xffff) <= (uVar18 ^ 0xffff)) {
                              uVar54 = uVar18;
                            }
                            if ((uint)uVar38 < uVar15) {
                              uVar38 = uVar38 & 0xffffffff;
                              uVar42 = uVar38 - uVar51;
                              lVar39 = __s[0xa4];
                              if (uVar42 <= ~(ulong)uVar54) {
                                uVar42 = ~(ulong)uVar54;
                              }
                              uVar42 = -uVar42;
                              sVar13 = (short)uVar17;
                              if (uVar42 < 0x10) {
                                uVar43 = 0;
                                *(short *)(lVar39 + uVar38 * 2) = sVar13;
                                while (uVar38 = uVar38 + 1, uVar38 < uVar51) {
                                  uVar18 = (uint)uVar43;
                                  uVar43 = (ulong)(uVar18 + 1);
                                  uVar17 = uVar17 + 1;
                                  if (uVar54 <= uVar18) break;
LAB_00e3cd04:
                                  *(short *)(lVar39 + uVar38 * 2) = (short)uVar17;
                                }
                              }
                              else {
                                local_150 = auVar57._0_2_;
                                sStack_14e = auVar57._2_2_;
                                sStack_14c = auVar57._4_2_;
                                sStack_14a = auVar57._6_2_;
                                sStack_148 = auVar57._8_2_;
                                sStack_146 = auVar57._10_2_;
                                sStack_144 = auVar57._12_2_;
                                sStack_142 = auVar57._14_2_;
                                uVar43 = uVar42 & 0x1fffffff0;
                                lVar36 = uVar38 * 2;
                                uVar38 = uVar43 + uVar38;
                                uVar17 = uVar17 + (int)uVar43;
                                auVar65._0_2_ = sVar13 + local_150;
                                auVar65._2_2_ = sVar13 + sStack_14e;
                                auVar65._4_2_ = sVar13 + sStack_14c;
                                auVar65._6_2_ = sVar13 + sStack_14a;
                                auVar65._8_2_ = sVar13 + sStack_148;
                                auVar65._10_2_ = sVar13 + sStack_146;
                                auVar65._12_2_ = sVar13 + sStack_144;
                                auVar65._14_2_ = sVar13 + sStack_142;
                                puVar47 = (undefined8 *)(lVar39 + lVar36 + 0x10);
                                uVar48 = uVar43;
                                do {
                                  sVar13 = auVar65._2_2_;
                                  sVar58 = auVar65._4_2_;
                                  sVar59 = auVar65._6_2_;
                                  auVar64._0_8_ =
                                       CONCAT26(sVar59 + 8,
                                                CONCAT24(sVar58 + 8,
                                                         CONCAT22(sVar13 + 8,auVar65._0_2_ + 8)));
                                  sVar60 = auVar65._8_2_;
                                  auVar64._8_2_ = sVar60 + 8;
                                  sVar61 = auVar65._10_2_;
                                  auVar64._10_2_ = sVar61 + 8;
                                  sVar62 = auVar65._12_2_;
                                  auVar64._12_2_ = sVar62 + 8;
                                  sVar63 = auVar65._14_2_;
                                  auVar64._14_2_ = sVar63 + 8;
                                  puVar47[-1] = auVar65._8_8_;
                                  puVar47[-2] = auVar65._0_8_;
                                  puVar47[1] = auVar64._8_8_;
                                  *puVar47 = auVar64._0_8_;
                                  auVar65._0_2_ = auVar65._0_2_ + 0x10;
                                  auVar65._2_2_ = sVar13 + 0x10;
                                  auVar65._4_2_ = sVar58 + 0x10;
                                  auVar65._6_2_ = sVar59 + 0x10;
                                  auVar65._8_2_ = sVar60 + 0x10;
                                  auVar65._10_2_ = sVar61 + 0x10;
                                  auVar65._12_2_ = sVar62 + 0x10;
                                  auVar65._14_2_ = sVar63 + 0x10;
                                  uVar48 = uVar48 - 0x10;
                                  puVar47 = puVar47 + 4;
                                } while (uVar48 != 0);
                                if (uVar43 != uVar42) goto LAB_00e3cd04;
                              }
                            }
                          } while ((uint)uVar38 < uVar15);
                        }
                      }
                      else {
                        if (*(int *)(__s + 0xa2) != 0) goto LAB_00e3d1c4;
                        local_70 = FUN_00e1d718(param_1,uVar15 * 2 + -2);
                        if (local_70 != 0) goto LAB_00e3d1cc;
                        if (1 < uVar15) {
                          uVar38 = 1;
                          do {
                            uVar14 = FUN_00e1d970(param_1);
                            *(undefined2 *)(__s[0xa4] + uVar38 * 2) = uVar14;
                            uVar38 = uVar38 + 1;
                          } while (uVar51 != uVar38);
                        }
                        FUN_00e1d90c(param_1);
                      }
joined_r0x00e3d754:
                      uVar17 = local_70;
                      if ((bVar7) && (iVar16 != 0xffff)) {
                        local_100 = (void *)((ulong)local_100 & 0xffffffff00000000);
                        uVar17 = 0;
                        if (*(int *)(__s + 0xa6) == 0) {
                          if (uVar15 < 0x10) {
                            uVar42 = 0;
                            uVar56 = 0;
LAB_00e3d7a4:
                            lVar39 = uVar51 - uVar42;
                            puVar37 = (ushort *)(__s[0xa4] + uVar42 * 2);
                            do {
                              uVar8 = *puVar37;
                              if (*puVar37 <= uVar56) {
                                uVar8 = uVar56;
                              }
                              uVar56 = uVar8;
                              lVar39 = lVar39 + -1;
                              puVar37 = puVar37 + 1;
                            } while (lVar39 != 0);
                          }
                          else {
                            uVar42 = uVar51 & 0xfffffff0;
                            pauVar40 = (undefined1 (*) [16])(__s[0xa4] + 0x10);
                            auVar57 = ZEXT816(0);
                            auVar65 = ZEXT816(0);
                            uVar38 = uVar42;
                            do {
                              pauVar1 = pauVar40 + -1;
                              uVar55 = *(undefined8 *)(pauVar40[-1] + 8);
                              auVar64 = *pauVar40;
                              uVar38 = uVar38 - 0x10;
                              pauVar40 = pauVar40 + 2;
                              auVar5._10_2_ = (short)((ulong)uVar55 >> 0x10);
                              auVar5._0_10_ = *(unkbyte10 *)*pauVar1;
                              auVar5._12_2_ = (short)((ulong)uVar55 >> 0x20);
                              auVar5._14_2_ = (short)((ulong)uVar55 >> 0x30);
                              auVar57 = NEON_umax(auVar5,auVar57,2);
                              auVar65 = NEON_umax(auVar64,auVar65,2);
                            } while (uVar38 != 0);
                            auVar57 = NEON_umax(auVar57,auVar65,2);
                            uVar56 = NEON_umaxv(auVar57,2);
                            if (uVar42 != uVar51) goto LAB_00e3d7a4;
                          }
                          lVar39 = FUN_00e13bcc(uVar50,2,0,uVar56 + 1,0,&local_100);
                          __s[0xa5] = lVar39;
                          uVar17 = (uint)local_100;
                          if ((uint)local_100 == 0) {
                            lVar36 = __s[0xa4];
                            do {
                              uVar51 = uVar51 - 1;
                              *(short *)(lVar39 + (ulong)*(ushort *)(lVar36 + uVar51 * 2) * 2) =
                                   (short)uVar51;
                            } while (0 < (long)uVar51);
                            *(uint *)(__s + 0xa6) = (uint)uVar56;
                            *(uint *)((long)__s + 0x534) = uVar15;
                            uVar17 = 0;
                          }
                        }
                      }
                      local_70 = uVar17;
                      if (local_70 != 0) goto LAB_00e3d1cc;
                      local_78 = 0;
                      iVar16 = *(int *)((long)__s + 0x74c);
                    }
                    if (iVar16 != 0xffff) goto LAB_00e3ca4c;
                    uVar17 = *(uint *)((long)__s + 0x24);
                    uVar51 = (ulong)uVar17;
                    uVar38 = __s[0xe4];
                    local_70 = 0;
                    lVar39 = __s[0xa4];
                    if (lVar39 == 0) {
LAB_00e3d5a8:
                      local_70 = 3;
                      uVar15 = local_70;
                      goto joined_r0x00e3d5bc;
                    }
                    memset((void *)((long)__s + 0x10c),0,0x400);
                    if (1 < uVar38) {
                      __s[0x20] = uVar38 + lVar21;
                      local_70 = FUN_00e1bb5c(param_1);
                      uVar15 = local_70;
                      if (local_70 == 0) {
                        uVar15 = FUN_00e1dabc(param_1,&local_70);
                        *(uint *)(__s + 0x1f) = uVar15 & 0xff;
                        uVar15 = local_70;
                        if ((local_70 == 0) &&
                           (uVar18 = FUN_00e1dabc(param_1,&local_70), uVar15 = local_70,
                           local_70 == 0)) {
                          uVar18 = uVar18 & 0xff;
                          if ((*(uint *)(__s + 0x1f) & 0x7f) == 1) {
                            *(undefined4 *)(__s + 0x21) = 0;
                            if (uVar18 != 0) {
                              uVar54 = 0;
                              uVar49 = 1;
                              do {
                                uVar19 = FUN_00e1dabc(param_1,&local_70);
                                uVar15 = local_70;
                                if ((local_70 != 0) ||
                                   (uVar20 = FUN_00e1dabc(param_1,&local_70), uVar15 = local_70,
                                   local_70 != 0)) goto joined_r0x00e3d5bc;
                                uVar15 = (uVar20 & 0xff) + 1;
                                uVar6 = *(uint *)(__s + 0x21);
                                if (*(uint *)(__s + 0x21) <= (uVar20 & 0xff)) {
                                  *(uint *)(__s + 0x21) = uVar15;
                                  uVar6 = uVar15;
                                }
                                uVar15 = uVar15 + uVar49;
                                if (uVar49 < uVar15) {
                                  uVar19 = uVar19 & 0xff;
                                  uVar38 = (ulong)uVar49;
                                  do {
                                    if ((uVar38 < uVar51) && (uVar19 < 0x100)) {
                                      *(short *)((long)__s + (ulong)uVar19 * 2 + 0x30c) =
                                           (short)uVar38;
                                      *(undefined2 *)((long)__s + (ulong)uVar19 * 2 + 0x10c) =
                                           *(undefined2 *)(__s[0xa4] + uVar38 * 2);
                                    }
                                    uVar38 = uVar38 + 1;
                                    uVar19 = uVar19 + 1;
                                  } while (uVar15 != uVar38);
                                }
                                uVar54 = uVar54 + 1;
                                uVar49 = uVar15;
                              } while (uVar54 < uVar18);
                              if (0x100 < uVar6) {
                                *(undefined4 *)(__s + 0x21) = 0x100;
                              }
                            }
                            cVar33 = *(char *)(__s + 0x1f);
                          }
                          else {
                            if ((*(uint *)(__s + 0x1f) & 0x7f) != 0) goto LAB_00e3d5a8;
                            *(uint *)(__s + 0x21) = uVar18 + 1;
                            local_70 = FUN_00e1d718(param_1);
                            uVar15 = local_70;
                            if (local_70 != 0) goto joined_r0x00e3d5bc;
                            if (uVar18 != 0) {
                              lVar21 = *(long *)(param_1 + 0x40);
                              uVar38 = 0;
                              do {
                                uVar42 = uVar38 + 1;
                                if (uVar42 < uVar51) {
                                  bVar10 = *(byte *)(lVar21 + uVar38);
                                  *(short *)((long)__s + (ulong)bVar10 * 2 + 0x30c) = (short)uVar42;
                                  *(undefined2 *)((long)__s + (ulong)bVar10 * 2 + 0x10c) =
                                       *(undefined2 *)(__s[0xa4] + uVar38 * 2 + 2);
                                }
                                uVar38 = uVar42;
                              } while ((ulong)(uVar18 + 1) - 1 != uVar42);
                            }
                            FUN_00e1d90c(param_1);
                            cVar33 = *(char *)(__s + 0x1f);
                          }
                          if (cVar33 < '\0') {
                            bVar10 = FUN_00e1dabc(param_1,&local_70);
                            if ((bVar10 != 0) && (local_70 == 0)) {
                              if (uVar17 == 0) {
                                uVar17 = 0;
                                do {
                                  bVar12 = FUN_00e1dabc(param_1,&local_70);
                                  uVar15 = local_70;
                                  if ((local_70 != 0) ||
                                     (uVar14 = FUN_00e1bcf8(param_1,&local_70), uVar15 = local_70,
                                     local_70 != 0)) goto joined_r0x00e3d5bc;
                                  uVar17 = uVar17 + 1;
                                  *(undefined2 *)((long)__s + (ulong)bVar12 * 2 + 0x10c) = uVar14;
                                } while (uVar17 < bVar10);
                              }
                              else {
                                uVar18 = 0;
                                do {
                                  uVar51 = FUN_00e1dabc(param_1,&local_70);
                                  uVar15 = local_70;
                                  if ((local_70 != 0) ||
                                     (sVar13 = FUN_00e1bcf8(param_1,&local_70), uVar15 = local_70,
                                     local_70 != 0)) goto joined_r0x00e3d5bc;
                                  *(short *)((long)__s + (uVar51 & 0xff) * 2 + 0x10c) = sVar13;
                                  uVar15 = 0;
                                  do {
                                    if (*(short *)(__s[0xa4] + (ulong)uVar15 * 2) == sVar13) {
                                      *(short *)((long)__s + (uVar51 & 0xff) * 2 + 0x30c) =
                                           (short)uVar15;
                                      break;
                                    }
                                    uVar15 = uVar15 + 1;
                                  } while (uVar15 < uVar17);
                                  uVar18 = uVar18 + 1;
                                } while (uVar18 < bVar10);
                              }
                              goto LAB_00e3d64c;
                            }
                          }
                          local_78 = local_70;
                          uVar15 = local_70;
                          if (local_70 == 0) goto LAB_00e3ca4c;
                        }
                      }
                      goto joined_r0x00e3d5bc;
                    }
                    if ((int)uVar38 == 1) {
                      puVar32 = &DAT_019770b8;
                    }
                    else {
                      if ((int)uVar38 != 0) goto LAB_00e3d5a8;
                      puVar32 = &DAT_01976a90;
                    }
                    memcpy((void *)((long)__s + 0x10c),puVar32,0x200);
                    *(undefined4 *)(__s + 0x21) = 0;
                    local_100 = (void *)((ulong)local_100 & 0xffffffff00000000);
                    uVar15 = *(uint *)(__s + 0xa6);
                    if (uVar15 == 0) {
                      if (uVar17 == 0) {
                        uVar56 = 0;
                      }
                      else {
                        if (uVar17 < 0x10) {
                          uVar42 = 0;
                          uVar56 = 0;
                        }
                        else {
                          pauVar40 = (undefined1 (*) [16])(lVar39 + 0x10);
                          auVar57 = ZEXT816(0);
                          auVar65 = ZEXT816(0);
                          uVar42 = uVar51 & 0xfffffff0;
                          uVar38 = uVar42;
                          do {
                            pauVar1 = pauVar40 + -1;
                            uVar50 = *(undefined8 *)(pauVar40[-1] + 8);
                            auVar64 = *pauVar40;
                            uVar38 = uVar38 - 0x10;
                            pauVar40 = pauVar40 + 2;
                            auVar4._10_2_ = (short)((ulong)uVar50 >> 0x10);
                            auVar4._0_10_ = *(unkbyte10 *)*pauVar1;
                            auVar4._12_2_ = (short)((ulong)uVar50 >> 0x20);
                            auVar4._14_2_ = (short)((ulong)uVar50 >> 0x30);
                            auVar57 = NEON_umax(auVar4,auVar57,2);
                            auVar65 = NEON_umax(auVar64,auVar65,2);
                          } while (uVar38 != 0);
                          auVar57 = NEON_umax(auVar57,auVar65,2);
                          uVar56 = NEON_umaxv(auVar57,2);
                          if (uVar42 == uVar51) goto LAB_00e3d8c4;
                        }
                        lVar21 = uVar51 - uVar42;
                        puVar37 = (ushort *)(lVar39 + uVar42 * 2);
                        do {
                          uVar8 = *puVar37;
                          if (*puVar37 <= uVar56) {
                            uVar8 = uVar56;
                          }
                          uVar56 = uVar8;
                          lVar21 = lVar21 + -1;
                          puVar37 = puVar37 + 1;
                        } while (lVar21 != 0);
                      }
LAB_00e3d8c4:
                      lVar21 = FUN_00e13bcc(*(undefined8 *)(param_1 + 0x38),2,0,uVar56 + 1,0,
                                            &local_100);
                      __s[0xa5] = lVar21;
                      uVar15 = (uint)local_100;
                      local_70 = (uint)local_100;
                      if ((uint)local_100 != 0) goto joined_r0x00e3d5bc;
                      if (uVar17 != 0) {
                        lVar39 = __s[0xa4];
                        do {
                          uVar51 = uVar51 - 1;
                          *(short *)(lVar21 + (ulong)*(ushort *)(lVar39 + uVar51 * 2) * 2) =
                               (short)uVar51;
                        } while (0 < (long)uVar51);
                      }
                      uVar15 = (uint)uVar56;
                      *(uint *)(__s + 0xa6) = uVar15;
                      *(uint *)((long)__s + 0x534) = uVar17;
                    }
                    local_70 = 0;
                    lVar21 = 0;
                    do {
                      while( true ) {
                        uVar56 = *(ushort *)((long)__s + lVar21 * 2 + 0x10c);
                        if (((uVar56 == 0) || (uVar15 < uVar56)) ||
                           (sVar13 = *(short *)(__s[0xa5] + (ulong)uVar56 * 2), sVar13 == 0)) break;
                        lVar39 = lVar21 + 1;
                        *(short *)((long)__s + lVar21 * 2 + 0x30c) = sVar13;
                        *(int *)(__s + 0x21) = (int)lVar39;
                        lVar21 = lVar39;
                        if (lVar39 == 0x100) goto LAB_00e3d64c;
                      }
                      lVar39 = lVar21 + 1;
                      *(undefined2 *)((long)__s + lVar21 * 2 + 0x30c) = 0;
                      *(undefined2 *)((long)__s + lVar21 * 2 + 0x10c) = 0;
                      lVar21 = lVar39;
                    } while (lVar39 != 0x100);
LAB_00e3d64c:
                    local_78 = 0;
                    lVar21 = __s[7];
                  }
                  else {
LAB_00e3ca4c:
                    lVar21 = __s[7];
                  }
                  if (lVar21 == 0) {
                    pvVar29 = (void *)0x0;
LAB_00e3d660:
                    __s[199] = pvVar29;
                    uVar15 = local_78;
                  }
                  else {
                    uVar50 = *(undefined8 *)(lVar21 + 0x38);
                    local_74 = FUN_00e428e8(__s + 7,uVar45,&local_100,&local_70);
                    if (local_74 == 0) {
                      sVar26 = CONCAT44(uStack_6c,local_70);
                      pvVar29 = (void *)FUN_00e1388c(uVar50,sVar26 + 1,&local_74);
                      if (local_74 == 0) {
                        if (sVar26 != 0) {
                          memcpy(pvVar29,local_100,sVar26);
                        }
                        *(undefined1 *)((long)pvVar29 + sVar26) = 0;
                      }
                      if (__s[0xe] != 0) goto LAB_00e3d660;
                      FUN_00e1d86c(__s[7],&local_100);
                      __s[199] = pvVar29;
                      uVar15 = local_78;
                    }
                    else {
                      __s[199] = 0;
                      uVar15 = local_78;
                    }
                  }
                }
              }
            }
            else {
LAB_00e3c964:
              local_78 = 3;
              uVar15 = local_78;
            }
          }
        }
      }
      else {
LAB_00e3bcb0:
        uVar15 = local_78;
        if (bVar7) goto LAB_00e3bcb8;
      }
    }
    else {
LAB_00e3bcb8:
      local_78 = 2;
      uVar15 = local_78;
    }
  }
joined_r0x00e3d5bc:
  local_78 = uVar15;
  if (local_c0 != (ulong *)0x0) {
    uVar51 = local_c0[7];
    if (local_88[0] != 0) {
      FUN_00e1d86c(local_c0,local_88);
    }
    FUN_00e139fc(uVar51,local_90);
    uStack_98 = 0;
    local_a0 = 0;
    local_88[0] = 0;
    local_90 = 0;
    uStack_b8 = 0;
    local_c0 = (ulong *)0x0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  local_104 = local_78;
  if (local_78 != 0) {
    return local_78;
  }
  if ((int)param_3 < 0) {
    *param_2 = (ulong)*(uint *)(__s + 4);
    return 0;
  }
  __s[0x26b] = uVar23;
  __s[0x26c] = lVar22;
  __s[0x26d] = uVar25;
  param_2[1] = (ulong)(param_3 & 0xffff);
  param_2[4] = (ulong)*(uint *)((long)__s + 0x24);
  if ((lVar22 == 0) && (*(int *)((long)__s + 0x74c) == 0xffff)) {
    return 0xb;
  }
  if (((param_3 >> 0x10 != 0) && (param_2[0x70] != 0)) && (((uint)param_2[2] >> 8 & 1) != 0)) {
    uVar51 = param_2[0x71];
    local_104 = (**(code **)(param_2[0x70] + 0x38))(param_2);
    if (local_104 != 0) {
      return local_104;
    }
    if (uVar51 != 0) {
      (**(code **)(uVar51 + 0x38))(param_2);
    }
  }
  if (*(char *)(__s + 0xd9) == '\0') {
    if (bVar7) {
      __s[0xda] = 1000;
      lVar21 = __s[0xd8];
    }
    else {
      __s[0xda] = (ulong)(ushort)param_2[0x11];
      lVar21 = __s[0xd8];
    }
  }
  else {
    lVar21 = __s[0xd8];
  }
  if (lVar21 == 0) {
    lVar21 = __s[0xd7];
  }
  puVar53 = __s + 0xda;
  lVar22 = -lVar21;
  if (-1 < lVar21) {
    lVar22 = lVar21;
  }
  if (lVar22 == 0x10000) {
    lVar21 = __s[0xdc];
  }
  else {
    uVar50 = FT_DivFix(__s[0xda],lVar22);
    __s[0xda] = uVar50;
    uVar50 = FT_DivFix(__s[0xd5],lVar22);
    __s[0xd5] = uVar50;
    uVar50 = FT_DivFix(__s[0xd7],lVar22);
    __s[0xd7] = uVar50;
    uVar50 = FT_DivFix(__s[0xd6],lVar22);
    __s[0xd6] = uVar50;
    uVar50 = FT_DivFix(__s[0xd8],lVar22);
    __s[0xd8] = uVar50;
    uVar50 = FT_DivFix(__s[0xdb],lVar22);
    __s[0xdb] = uVar50;
    lVar21 = FT_DivFix(__s[0xdc],lVar22);
    __s[0xdc] = lVar21;
  }
  iVar16 = *(int *)(__s + 0x166);
  __s[0xdc] = lVar21 >> 0x10;
  __s[0xdb] = (long)__s[0xdb] >> 0x10;
  if (iVar16 != 0) {
    puVar47 = __s + 0xd5;
    plVar44 = __s + (ulong)(iVar16 - 1) + 0x167;
    do {
      lVar21 = *plVar44;
      if (*(char *)(lVar21 + 0x60) == '\0') {
        uVar50 = *puVar47;
        auVar57 = *(undefined1 (*) [16])(__s + 0xd7);
        *(undefined8 *)(lVar21 + 0x48) = __s[0xd6];
        *(undefined8 *)(lVar21 + 0x40) = uVar50;
        *(long *)(lVar21 + 0x58) = auVar57._8_8_;
        *(long *)(lVar21 + 0x50) = auVar57._0_8_;
        auVar57 = *(undefined1 (*) [16])(__s + 0xdb);
        *(long *)(lVar21 + 0x78) = auVar57._8_8_;
        *(long *)(lVar21 + 0x70) = auVar57._0_8_;
        *(ulong *)(lVar21 + 0x68) = *puVar53;
        lVar22 = *(long *)(lVar21 + 0x58);
        if (lVar22 == 0) goto LAB_00e3bf00;
LAB_00e3bf58:
        lVar39 = -lVar22;
        if (-1 < lVar22) {
          lVar39 = lVar22;
        }
        if (lVar39 == 0x10000) goto LAB_00e3bf68;
LAB_00e3bf74:
        uVar50 = FT_DivFix(*(undefined8 *)(lVar21 + 0x68),lVar39);
        *(undefined8 *)(lVar21 + 0x68) = uVar50;
        uVar50 = FT_DivFix(*(undefined8 *)(lVar21 + 0x40),lVar39);
        *(undefined8 *)(lVar21 + 0x40) = uVar50;
        uVar50 = FT_DivFix(*(undefined8 *)(lVar21 + 0x50),lVar39);
        *(undefined8 *)(lVar21 + 0x50) = uVar50;
        uVar50 = FT_DivFix(*(undefined8 *)(lVar21 + 0x48),lVar39);
        *(undefined8 *)(lVar21 + 0x48) = uVar50;
        uVar50 = FT_DivFix(*(undefined8 *)(lVar21 + 0x58),lVar39);
        *(undefined8 *)(lVar21 + 0x58) = uVar50;
        uVar50 = FT_DivFix(*(undefined8 *)(lVar21 + 0x70),lVar39);
        *(undefined8 *)(lVar21 + 0x70) = uVar50;
        lVar22 = FT_DivFix(*(long *)(lVar21 + 0x78),lVar39);
        *(long *)(lVar21 + 0x78) = lVar22;
      }
      else {
        if (*(char *)(__s + 0xd9) != '\0') {
          uVar51 = *puVar53;
          if ((uVar51 < 2) || (uVar38 = *(ulong *)(lVar21 + 0x68), uVar38 < 2)) {
            uVar51 = 1;
          }
          else if (uVar38 <= uVar51) {
            uVar51 = uVar38;
          }
          FUN_00e12ef0(puVar47,lVar21 + 0x40,uVar51);
          FUN_00e1332c(lVar21 + 0x70,puVar47,uVar51);
          uVar50 = FT_MulDiv(*(undefined8 *)(lVar21 + 0x68),*puVar53,uVar51);
          *(undefined8 *)(lVar21 + 0x68) = uVar50;
        }
        lVar22 = *(long *)(lVar21 + 0x58);
        if (lVar22 != 0) goto LAB_00e3bf58;
LAB_00e3bf00:
        lVar22 = *(long *)(lVar21 + 0x50);
        lVar39 = -lVar22;
        if (-1 < lVar22) {
          lVar39 = lVar22;
        }
        if (lVar39 != 0x10000) goto LAB_00e3bf74;
LAB_00e3bf68:
        lVar22 = *(long *)(lVar21 + 0x78);
      }
      iVar16 = iVar16 + -1;
      plVar44 = plVar44 + -1;
      *(long *)(lVar21 + 0x70) = *(long *)(lVar21 + 0x70) >> 0x10;
      *(long *)(lVar21 + 0x78) = lVar22 >> 0x10;
    } while (iVar16 != 0);
  }
  if (!bVar7) goto LAB_00e3c3bc;
  *param_2 = (ulong)*(uint *)(__s + 4);
  if (*(int *)((long)__s + 0x74c) == 0xffff) {
    uVar15 = *(uint *)((long)__s + 0x54c);
  }
  else {
    uVar15 = *(int *)(__s + 0xa6) + 1;
  }
  param_2[4] = (ulong)uVar15;
  param_2[0xd] = (long)__s[0xde] >> 0x10;
  lVar21 = __s[0xdf];
  param_2[0xe] = lVar21 >> 0x10;
  param_2[0xf] = __s[0xe0] + 0xffff >> 0x10;
  lVar22 = __s[0xe1];
  param_2[0x10] = lVar22 + 0xffff >> 0x10;
  uVar50 = __s[0xda];
  sVar13 = (short)((ulong)(lVar22 + 0xffff) >> 0x10);
  *(short *)((long)param_2 + 0x8a) = sVar13;
  sVar58 = (short)((ulong)lVar21 >> 0x10);
  *(short *)((long)param_2 + 0x8c) = sVar58;
  uVar45 = (uint)uVar50;
  *(short *)(param_2 + 0x11) = (short)uVar50;
  uVar15 = (int)sVar13 - (int)sVar58;
  uVar45 = (((uVar45 & 0xffff) + (uVar45 & 0xffff) * 2) * 4) / 10;
  if ((int)uVar15 <= (int)(short)uVar45) {
    uVar15 = uVar45;
  }
  *(short *)((long)param_2 + 0x8e) = (short)uVar15;
  *(short *)((long)param_2 + 0x94) = (short)((ulong)__s[0xd2] >> 0x10);
  *(short *)((long)param_2 + 0x96) = (short)((ulong)__s[0xd3] >> 0x10);
  uVar15 = *(uint *)(__s + 0xcf);
  if ((uVar15 != 0) && (uVar15 != 0xffff)) {
    if (uVar15 < 0x187) {
      if (__s[0x26c] != 0) {
        lVar21 = (**(code **)(__s[0x26c] + 0x28))();
        goto joined_r0x00e3c214;
      }
    }
    else if (uVar15 - 0x187 < *(uint *)(__s + 0xc9)) {
      lVar21 = *(long *)(__s[0xca] + (ulong)(uVar15 - 0x187) * 8);
joined_r0x00e3c214:
      if (lVar21 != 0) {
        uVar51 = FUN_00e1eb6c(uVar24,lVar21,&local_c0);
        param_2[5] = uVar51;
      }
    }
  }
  pcVar52 = (char *)param_2[5];
  if (pcVar52 != (char *)0x0) goto LAB_00e3c230;
  plVar44 = __s + 7;
  if (*plVar44 == 0) {
LAB_00e3c360:
    param_2[5] = 0;
LAB_00e3c798:
    uVar15 = *(uint *)(__s + 0xf3);
    if (uVar15 != 0xffff) {
      if (uVar15 < 0x187) {
        if (__s[0x26c] != 0) {
          lVar21 = (**(code **)(__s[0x26c] + 0x28))();
          goto joined_r0x00e3c7e8;
        }
      }
      else if (uVar15 - 0x187 < *(uint *)(__s + 0xc9)) {
        lVar21 = *(long *)(__s[0xca] + (ulong)(uVar15 - 0x187) * 8);
joined_r0x00e3c7e8:
        if (lVar21 != 0) {
          uVar51 = FUN_00e1eb6c(uVar24,lVar21,&local_c0);
          param_2[5] = uVar51;
        }
      }
    }
  }
  else {
    uVar50 = *(undefined8 *)(*plVar44 + 0x38);
    local_70 = FUN_00e428e8(plVar44,(ulong)(param_3 & 0xffff),&local_c0,&local_100);
    pvVar29 = local_100;
    if (local_70 != 0) goto LAB_00e3c360;
    pcVar52 = (char *)FUN_00e1388c(uVar50,(long)local_100 + 1,&local_70);
    if (local_70 == 0) {
      if (pvVar29 != (void *)0x0) {
        memcpy(pcVar52,local_c0,(size_t)pvVar29);
      }
      pcVar52[(long)pvVar29] = '\0';
    }
    if (__s[0xe] == 0) {
      FUN_00e1d86c(*plVar44,&local_c0);
    }
    param_2[5] = (ulong)pcVar52;
    if (pcVar52 == (char *)0x0) goto LAB_00e3c798;
    sVar26 = strlen(pcVar52);
    iVar16 = (int)sVar26;
    if (5 < iVar16) {
      iVar35 = 0;
      uVar15 = iVar16 + 0x1a;
      uVar45 = iVar16 + 1U;
      do {
        if (((((pcVar52[6] != '+') || (0x19 < (byte)pcVar52[5] - 0x41)) ||
             (0x19 < (byte)(pcVar52[4] + 0xbfU))) ||
            ((0x19 < (byte)(pcVar52[3] + 0xbfU) || (0x19 < (byte)(pcVar52[2] + 0xbfU))))) ||
           ((0x19 < (byte)(*pcVar52 + 0xbfU) || (0x19 < (byte)(pcVar52[1] + 0xbfU))))) break;
        if (7 < (int)uVar45) {
          uVar17 = iVar16 + 1U + iVar35 * -7;
          uVar51 = (ulong)uVar17 - 7;
          if (uVar51 < 0x20) {
            lVar21 = 7;
          }
          else {
            uVar17 = uVar17 + 0x19 & 0x1f;
            lVar22 = ((ulong)uVar45 - 7) - ((ulong)uVar15 & 0x1f);
            lVar21 = (uVar51 - uVar17) + 7;
            pcVar31 = pcVar52 + 0x10;
            do {
              lVar22 = lVar22 + -0x20;
              *(undefined8 *)(pcVar31 + -8) = *(undefined8 *)(pcVar31 + -1);
              *(undefined8 *)(pcVar31 + -0x10) = *(undefined8 *)(pcVar31 + -9);
              *(long *)(pcVar31 + 8) = SUB168(*(undefined1 (*) [16])(pcVar31 + 7),8);
              *(long *)pcVar31 = SUB168(*(undefined1 (*) [16])(pcVar31 + 7),0);
              pcVar31 = pcVar31 + 0x20;
            } while (lVar22 != 0);
            if (uVar17 == 0) goto LAB_00e3c77c;
          }
          lVar22 = (ulong)uVar45 - lVar21;
          pcVar31 = pcVar52 + lVar21 + -7;
          do {
            lVar22 = lVar22 + -1;
            *pcVar31 = pcVar31[7];
            pcVar31 = pcVar31 + 1;
          } while (lVar22 != 0);
        }
LAB_00e3c77c:
        uVar45 = uVar45 - 7;
        iVar35 = iVar35 + 1;
        uVar15 = uVar15 + 0x19;
      } while (6 < (int)uVar45);
      pcVar52 = (char *)param_2[5];
      if (pcVar52 == (char *)0x0) goto LAB_00e3c798;
    }
LAB_00e3c230:
    uVar15 = *(uint *)((long)__s + 0x674);
    if (uVar15 != 0xffff) {
      if (uVar15 < 0x187) {
        if (__s[0x26c] != 0) {
          pcVar31 = (char *)(**(code **)(__s[0x26c] + 0x28))();
          pcVar52 = (char *)param_2[5];
          goto joined_r0x00e3c544;
        }
      }
      else if (uVar15 - 0x187 < *(uint *)(__s + 0xc9)) {
        pcVar31 = *(char **)(__s[0xca] + (ulong)(uVar15 - 0x187) * 8);
joined_r0x00e3c544:
        if ((pcVar31 != (char *)0x0) && (pcVar52 != (char *)0x0)) {
          cVar33 = *pcVar31;
joined_r0x00e3c550:
          if (cVar33 != '\0') {
            do {
              cVar11 = *pcVar52;
              if (cVar11 == cVar33) {
                pcVar52 = pcVar52 + 1;
              }
              else if ((cVar33 != ' ') && (cVar33 != '-')) goto code_r0x00e3c574;
              pcVar31 = pcVar31 + 1;
              cVar33 = *pcVar31;
              if (cVar33 == '\0') break;
            } while( true );
          }
        }
      }
    }
  }
LAB_00e3c240:
  pcVar52 = (char *)FUN_00e1eb6c(uVar24,"Regular",&local_c0);
  goto LAB_00e3c258;
code_r0x00e3c574:
  if ((cVar11 != ' ') && (cVar11 != '-')) {
    if (cVar11 == '\0') {
      pcVar52 = (char *)FUN_00e1eb6c(uVar24,pcVar31,&local_c0);
      pcVar31 = (char *)param_2[5];
      sVar26 = strlen(pcVar31);
      sVar27 = strlen(pcVar52);
      uVar15 = (uint)sVar27;
      iVar16 = (int)sVar26;
      if (iVar16 <= (int)uVar15) goto LAB_00e3caa0;
      if ((int)uVar15 < 1) goto LAB_00e3c878;
      pcVar41 = pcVar52 + (int)uVar15;
      pcVar46 = pcVar31 + iVar16;
      lVar21 = 0;
      goto LAB_00e3c854;
    }
    goto LAB_00e3c240;
  }
  pcVar52 = pcVar52 + 1;
  goto joined_r0x00e3c550;
  while (lVar21 = lVar21 + 1, lVar21 < (int)uVar15) {
LAB_00e3c854:
    pcVar46 = pcVar46 + -1;
    pcVar41 = pcVar41 + -1;
    if (*pcVar46 != *pcVar41) goto LAB_00e3c258;
  }
LAB_00e3c878:
  if (0 < (int)(~uVar15 + iVar16)) {
    lVar22 = (long)(int)(~uVar15 + iVar16);
    lVar21 = (lVar22 << 0x20) + 0x100000000;
    do {
      if ((0x3f < (byte)pcVar31[lVar22] - 0x20) ||
         ((1L << ((ulong)((byte)pcVar31[lVar22] - 0x20) & 0x3f) & 0x8000000000002801U) == 0)) {
        pcVar31[lVar21 >> 0x20] = '\0';
        break;
      }
      lVar22 = lVar22 + -1;
      lVar21 = lVar21 + -0x100000000;
    } while (0 < lVar22);
  }
LAB_00e3caa0:
  if (pcVar52 == (char *)0x0) goto LAB_00e3c240;
LAB_00e3c258:
  param_2[6] = (ulong)pcVar52;
  uVar15 = 0x811;
  if (bVar9) {
    uVar15 = 0x819;
  }
  if (*(char *)(__s + 0xd0) != '\0') {
    uVar15 = uVar15 | 4;
  }
  param_2[2] = param_2[2] | (ulong)uVar15;
  uVar15 = *(uint *)((long)__s + 0x67c);
  bVar9 = __s[0xd1] != 0;
  uVar24 = (ulong)bVar9;
  if (uVar15 == 0xffff) {
LAB_00e3c2a8:
                    /* WARNING: Read-only address (ram,0x01852f10) is written */
                    /* WARNING: Read-only address (ram,0x01976a40) is written */
    pcVar52 = (char *)param_2[6];
    if ((pcVar52 != (char *)0x0) &&
       ((iVar16 = strncmp(pcVar52,"Bold",4), iVar16 == 0 ||
        (iVar16 = strncmp(pcVar52,"Black",5), iVar16 == 0)))) {
      uVar24 = (ulong)(bVar9 | 2);
    }
  }
  else {
    if (0x186 < uVar15) {
      if ((uVar15 - 0x187 < *(uint *)(__s + 0xc9)) &&
         (pcVar52 = *(char **)(__s[0xca] + (ulong)(uVar15 - 0x187) * 8), pcVar52 != (char *)0x0))
      goto LAB_00e3c388;
      goto LAB_00e3c2a8;
    }
    if ((__s[0x26c] == 0) ||
       (pcVar52 = (char *)(**(code **)(__s[0x26c] + 0x28))(), pcVar52 == (char *)0x0))
    goto LAB_00e3c2a8;
LAB_00e3c388:
    iVar16 = strcmp(pcVar52,"Bold");
    if ((iVar16 != 0) && (iVar16 = strcmp(pcVar52,"Black"), iVar16 != 0)) goto LAB_00e3c2a8;
    uVar24 = (ulong)(bVar9 | 2);
  }
  param_2[3] = uVar24;
LAB_00e3c3bc:
  if ((*(int *)((long)__s + 0x74c) == 0xffff) || (bVar7)) {
    uVar24 = 0x200;
    if (*(int *)((long)__s + 0x74c) != 0xffff) {
      uVar24 = 0x1000;
    }
    param_2[2] = param_2[2] | uVar24;
  }
  uVar15 = (uint)param_2[9];
  if (uVar15 != 0) {
    uVar45 = 0;
    do {
      lVar21 = *(long *)(param_2[10] + (ulong)uVar45 * 8);
      sVar13 = *(short *)(lVar21 + 0xc);
      if (sVar13 == 3) {
        if (*(short *)(lVar21 + 0xe) == 1) goto LAB_00e3c4ac;
      }
      else if (sVar13 == 0) goto LAB_00e3c4ac;
      uVar45 = uVar45 + 1;
    } while (uVar45 < uVar15);
  }
  if ((!bVar7) || (*(int *)((long)__s + 0x74c) == 0xffff)) {
    uStack_b8 = 0x10003756e6963;
    local_c0 = param_2;
    local_104 = FUN_00e17cf8(&DAT_01c93600,0,&local_c0,0);
    if ((local_104 == 0) || (((local_104 & 0xff) == 0xa3 || ((local_104 & 0xff) == 7)))) {
      local_104 = 0;
      if ((param_2[0x15] == 0) && (uVar15 != (uint)param_2[9])) {
        param_2[0x15] = *(ulong *)(param_2[10] + (ulong)uVar15 * 8);
      }
LAB_00e3c4ac:
      if (*(int *)(__s + 0x21) != 0) {
        uStack_b8._4_4_ = 7;
        if (__s[0x20] == 0) {
          uVar34 = 0x41444f42;
        }
        else {
          uVar34 = 0x41444243;
          if (__s[0x20] == 1) {
            uStack_b8._4_4_ = 0x10007;
            uVar34 = 0x41444245;
          }
          else {
            uStack_b8._4_4_ = 0x20007;
          }
        }
        uStack_b8 = CONCAT44(uStack_b8._4_4_,uVar34);
        local_c0 = param_2;
        local_104 = FUN_00e17cf8(&DAT_01c935b0,0,&local_c0,0);
      }
    }
  }
                    /* WARNING: Read-only address (ram,0x01852f10) is written */
                    /* WARNING: Read-only address (ram,0x01976a40) is written */
  return local_104;
}

