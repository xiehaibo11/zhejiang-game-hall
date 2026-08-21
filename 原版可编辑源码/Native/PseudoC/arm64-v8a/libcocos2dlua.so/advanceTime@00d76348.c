
/* dragonBones::AnimationState::advanceTime(float, float) */

void __thiscall
dragonBones::AnimationState::advanceTime(AnimationState *this,float param_1,float param_2)

{
  size_t sVar1;
  undefined8 *puVar2;
  long *plVar3;
  byte bVar4;
  AnimationState AVar5;
  long lVar6;
  size_t sVar7;
  bool bVar8;
  int iVar9;
  long *plVar10;
  int iVar11;
  AnimationState *pAVar12;
  long lVar13;
  AnimationState *pAVar14;
  uint uVar15;
  void *pvVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  BoneTimelineState *this_00;
  BaseObject *this_01;
  long *plVar20;
  undefined8 *puVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  
  if ((*(int *)(this + 100) != 0) || (*(int *)(this + 0x68) != 0)) {
    _advanceFadeTime(this,param_1);
  }
  if (*(int *)(this + 0x60) == 3) {
    fVar22 = *(float *)(this + 0x1c) * param_1;
    if (*(float *)(this + 0x1c) == 1.0) {
      fVar22 = param_1;
    }
    *(float *)(this + 0x98) = *(float *)(this + 0x98) + fVar22;
  }
  if (*(int *)(this + 0x90) != 0) {
    if (*(int *)(this + 0x90) == 2) {
      _updateTimelines(this);
    }
    *(undefined4 *)(this + 0x90) = 0;
    _updateBoneAndSlotTimelines(this);
  }
  if (*(float *)(this + 0x20) == 0.0) {
    return;
  }
  uVar25 = *(undefined4 *)(this + 0x98);
  *(float *)(this + 0x78) = *(float *)(this + 0x20) * *(float *)(this + 0x74);
  bVar8 = *(int *)(this + 100) == 0;
  if ((int)(*(long **)(this + 0x88))[2] < 1) {
    (**(code **)(**(long **)(this + 0x88) + 0x40))(uVar25);
    if (0.0 < param_2 && bVar8) goto LAB_00d7644c;
LAB_00d7642c:
    plVar10 = *(long **)(this + 0x138);
    if (plVar10 == (long *)0x0) goto LAB_00d76480;
LAB_00d76474:
    if (0 < (int)plVar10[2]) goto LAB_00d76480;
    (**(code **)(*plVar10 + 0x40))(uVar25);
    if (0.0 < param_2 && bVar8) goto LAB_00d76484;
LAB_00d764ec:
    lVar13 = *(long *)(this + 0xb8);
    if (*(long *)(this + 0xc0) - lVar13 != 0) {
      uVar19 = *(long *)(this + 0xc0) - lVar13 >> 3;
      uVar18 = 0;
                    /* try { // try from 00d76504 to 00e7650b has its CatchHandler @ 00d76544 */
      do {
        this_00 = *(BoneTimelineState **)(lVar13 + uVar18 * 8);
                    /* try { // try from 00d7650c to 00e7655f has its CatchHandler @ 00d764d4 */
        if (*(int *)(this_00 + 0x10) < 1) {
          (**(code **)(*(long *)this_00 + 0x40))(uVar25,this_00);
        }
        lVar13 = *(long *)(this_00 + 0xb8);
                    /* catch() { ... } // from try @ 00d76504 with catch @ 00d76544 */
        if ((uVar19 - 1 == uVar18) ||
           (lVar13 != *(long *)(*(long *)(*(long *)(this + 0xb8) + uVar18 * 8 + 8) + 0xb8))) {
          fVar22 = *(float *)(this + 0x78);
          iVar9 = *(int *)(this + 0x18);
          if (*(char *)(lVar13 + 0x94) == '\0') {
            iVar11 = 1;
            *(float *)(lVar13 + 0xa0) = fVar22;
            *(undefined1 *)(lVar13 + 0x94) = 1;
            *(int *)(lVar13 + 0x98) = iVar9;
            *(undefined4 *)(lVar13 + 0x9c) = 0x3f800000;
          }
          else {
                    /* catch() { ... } // from try @ 00d76598 with catch @ 00d76560 */
            fVar23 = *(float *)(lVar13 + 0x9c);
            if (fVar23 <= 0.0) goto LAB_00d765c8;
            fVar24 = *(float *)(lVar13 + 0xa0);
            if (*(int *)(lVar13 + 0x98) != iVar9) {
              if (fVar23 <= fVar24) {
                *(undefined4 *)(lVar13 + 0x9c) = 0;
                goto LAB_00d765c8;
              }
              fVar23 = fVar23 - fVar24;
              fVar24 = 0.0;
              *(int *)(lVar13 + 0x98) = iVar9;
                    /* try { // try from 00d76590 to 00e76597 has its CatchHandler @ 00d765d0 */
              *(undefined4 *)(lVar13 + 0xa0) = 0;
              *(float *)(lVar13 + 0x9c) = fVar23;
            }
                    /* try { // try from 00d76598 to 00e765eb has its CatchHandler @ 00d76560 */
            fVar22 = fVar22 * fVar23;
            *(float *)(lVar13 + 0xa0) = fVar24 + fVar22;
            iVar11 = 2;
          }
          *(float *)(lVar13 + 0xa4) = fVar22;
          BoneTimelineState::blend(this_00,iVar11);
        }
LAB_00d765c8:
        uVar18 = uVar18 + 1;
                    /* catch() { ... } // from try @ 00d76590 with catch @ 00d765d0 */
        if (uVar19 <= uVar18) break;
        lVar13 = *(long *)(this + 0xb8);
      } while( true );
    }
  }
  else {
    if (0.0 >= param_2 || !bVar8) goto LAB_00d7642c;
LAB_00d7644c:
    *(float *)(*(long *)(this + 0x88) + 0x18) =
         (float)(uint)(int)((param_2 + param_2) * *(float *)(*(long *)(this + 0x88) + 0x18)) /
         (param_2 + param_2);
    plVar10 = *(long **)(this + 0x138);
    if (plVar10 != (long *)0x0) goto LAB_00d76474;
LAB_00d76480:
    if (param_2 <= 0.0 || !bVar8) goto LAB_00d764ec;
LAB_00d76484:
    uVar15 = (uint)(*(float *)(*(long *)(this + 0x88) + 0x18) * param_2);
    if (*(uint *)(*(long *)(this + 0x130) + 0x18) == uVar15) goto LAB_00d767b0;
    *(uint *)(*(long *)(this + 0x130) + 0x18) = uVar15;
    uVar19 = 1L << ((ulong)uVar15 & 0x3f);
    uVar18 = *(ulong *)(*(long *)(*(long *)(this + 0x80) + 0x50) + (ulong)(uVar15 >> 6) * 8);
    if ((uVar18 & uVar19) == 0) {
      *(ulong *)(*(long *)(*(long *)(this + 0x80) + 0x50) + (ulong)(uVar15 >> 6) * 8) =
           uVar18 | uVar19;
                    /* catch() { ... } // from try @ 00d7650c with catch @ 00d764d4 */
      goto LAB_00d764ec;
    }
  }
  if (this[0xf] != (AnimationState)0x0) {
    lVar13 = *(long *)(this + 0xd0);
    lVar6 = *(long *)(this + 0xd8) - lVar13;
    if (lVar6 != 0) {
      uVar18 = 0;
      do {
        plVar10 = *(long **)(lVar13 + uVar18 * 8);
        lVar13 = plVar10[0x17];
        bVar4 = *(byte *)(lVar13 + 0x78);
        if ((bVar4 & 1) == 0) {
          if (bVar4 >> 1 == 0) goto LAB_00d76734;
LAB_00d76634:
          AVar5 = this[0x30];
          uVar19 = (ulong)(bVar4 >> 1);
          sVar7 = uVar19;
          if ((bVar4 & 1) != 0) {
            sVar7 = *(size_t *)(lVar13 + 0x80);
          }
          sVar1 = (ulong)((byte)AVar5 >> 1);
          if (((byte)AVar5 & 1) != 0) {
            sVar1 = *(size_t *)(this + 0x38);
          }
          if (sVar7 == sVar1) {
            pvVar16 = *(void **)(lVar13 + 0x88);
            if ((bVar4 & 1) == 0) {
              pvVar16 = (void *)(lVar13 + 0x79);
            }
            pAVar12 = this + 0x31;
            if (((byte)AVar5 & 1) != 0) {
              pAVar12 = *(AnimationState **)(this + 0x40);
            }
            if ((bVar4 & 1) == 0) {
              if (sVar7 != 0) {
                pAVar14 = (AnimationState *)(lVar13 + 0x79);
                uVar17 = uVar19;
                do {
                  if (*pAVar14 != *pAVar12) goto LAB_00d766bc;
                  uVar17 = uVar17 - 1;
                  pAVar14 = pAVar14 + 1;
                  pAVar12 = pAVar12 + 1;
                } while (uVar17 != 0);
              }
            }
            else if ((sVar7 != 0) && (iVar9 = memcmp(pvVar16,pAVar12,sVar7), iVar9 != 0))
            goto LAB_00d766bc;
            goto LAB_00d76734;
          }
LAB_00d766bc:
          AVar5 = this[0x48];
          sVar1 = (ulong)((byte)AVar5 >> 1);
          if (((byte)AVar5 & 1) != 0) {
            sVar1 = *(size_t *)(this + 0x50);
          }
          if (sVar7 == sVar1) {
            pvVar16 = *(void **)(lVar13 + 0x88);
            if ((bVar4 & 1) == 0) {
              pvVar16 = (void *)(lVar13 + 0x79);
            }
            pAVar12 = this + 0x49;
                    /* try { // try from 00d766ec to 00e767a3 has its CatchHandler @ 00d766ec
                       catch() { ... } // from try @ 00d766ec with catch @ 00d766ec
                       catch() { ... } // from try @ 00d773f0 with catch @ 00d766ec
                       catch() { ... } // from try @ 00d77d98 with catch @ 00d766ec
                       catch() { ... } // from try @ 00d77fc8 with catch @ 00d766ec */
            if (((byte)AVar5 & 1) != 0) {
              pAVar12 = *(AnimationState **)(this + 0x58);
            }
            if ((bVar4 & 1) == 0) {
              if (sVar7 != 0) {
                pAVar14 = (AnimationState *)(lVar13 + 0x79);
                do {
                  if (*pAVar14 != *pAVar12) goto LAB_00d76754;
                  uVar19 = uVar19 - 1;
                  pAVar14 = pAVar14 + 1;
                  pAVar12 = pAVar12 + 1;
                } while (uVar19 != 0);
              }
            }
            else if ((sVar7 != 0) && (iVar9 = memcmp(pvVar16,pAVar12,sVar7), iVar9 != 0))
            goto LAB_00d76754;
            goto LAB_00d76734;
          }
        }
        else {
          if (*(long *)(lVar13 + 0x80) != 0) goto LAB_00d76634;
LAB_00d76734:
          if ((int)plVar10[2] < 1) {
            (**(code **)(*plVar10 + 0x40))(uVar25,plVar10);
          }
        }
LAB_00d76754:
        uVar18 = uVar18 + 1;
        if ((ulong)(lVar6 >> 3) <= uVar18) break;
        lVar13 = *(long *)(this + 0xd0);
      } while( true );
    }
  }
  lVar13 = *(long *)(this + 0xe8);
  lVar6 = *(long *)(this + 0xf0) - lVar13;
  if (lVar6 != 0) {
    uVar18 = 0;
    while( true ) {
      plVar10 = *(long **)(lVar13 + uVar18 * 8);
      if ((int)plVar10[2] < 1) {
        (**(code **)(*plVar10 + 0x40))(uVar25);
      }
      uVar18 = uVar18 + 1;
                    /* try { // try from 00d767a4 to 00e767bb has its CatchHandler @ 00d78184 */
      if ((ulong)(lVar6 >> 3) <= uVar18) break;
      lVar13 = *(long *)(this + 0xe8);
    }
  }
LAB_00d767b0:
  if (*(int *)(this + 100) == 0) {
    if (0 < *(int *)(this + 0x68)) {
      puVar21 = *(undefined8 **)(this + 0x100);
      puVar2 = *(undefined8 **)(this + 0x108);
      *(undefined4 *)(this + 0x68) = 0;
      if (puVar21 != puVar2) {
        do {
          iVar9 = *(int *)(puVar21 + 1);
          this_01 = (BaseObject *)*puVar21;
          if (iVar9 == 2) {
            plVar3 = *(long **)(this + 0xf0);
            plVar10 = *(long **)(this + 0xe8);
            plVar20 = plVar10;
            for (; (plVar10 != plVar3 && (plVar20 = plVar10, (BaseObject *)*plVar10 != this_01));
                plVar10 = plVar10 + 1) {
              plVar20 = plVar3;
            }
            sVar7 = (long)plVar3 - (long)(plVar20 + 1);
            if (sVar7 != 0) {
              memmove(plVar20,plVar20 + 1,sVar7);
            }
            *(long **)(this + 0xf0) = plVar20 + ((long)sVar7 >> 3);
          }
          else if (iVar9 == 1) {
            plVar3 = *(long **)(this + 0xd8);
            plVar10 = *(long **)(this + 0xd0);
            plVar20 = plVar10;
            for (; (plVar10 != plVar3 && (plVar20 = plVar10, (BaseObject *)*plVar10 != this_01));
                plVar10 = plVar10 + 1) {
              plVar20 = plVar3;
            }
            sVar7 = (long)plVar3 - (long)(plVar20 + 1);
            if (sVar7 != 0) {
              memmove(plVar20,plVar20 + 1,sVar7);
            }
            *(long **)(this + 0xd8) = plVar20 + ((long)sVar7 >> 3);
          }
          else if (iVar9 == 0) {
            plVar3 = *(long **)(this + 0xc0);
            plVar10 = *(long **)(this + 0xb8);
            plVar20 = plVar10;
            for (; (plVar10 != plVar3 && (plVar20 = plVar10, (BaseObject *)*plVar10 != this_01));
                plVar10 = plVar10 + 1) {
              plVar20 = plVar3;
            }
            sVar7 = (long)plVar3 - (long)(plVar20 + 1);
            if (sVar7 != 0) {
              memmove(plVar20,plVar20 + 1,sVar7);
            }
            *(long **)(this + 0xc0) = plVar20 + ((long)sVar7 >> 3);
          }
          BaseObject::returnToPool(this_01);
          puVar21 = puVar21 + 2;
        } while (puVar21 != puVar2);
        *(undefined8 *)(this + 0x108) = *(undefined8 *)(this + 0x100);
      }
    }
    if ((0 < *(int *)(*(long *)(this + 0x88) + 0x10)) &&
       (fVar22 = *(float *)(this + 0x24), 0.0 <= fVar22)) {
      if (fVar22 <= 0.0) {
        fVar22 = 0.0;
      }
      *(uint *)(this + 0x60) = *(uint *)(this + 0x60) & 2;
      if (*(int *)(this + 100) < 1) {
        *(undefined8 *)(this + 100) = 0xffffffff00000001;
        if ((fVar22 <= 0.0) || (*(float *)(this + 0x74) <= 0.0)) {
          *(undefined4 *)(this + 0x74) = 0x358637bd;
        }
        puVar2 = *(undefined8 **)(this + 0xc0);
        for (puVar21 = *(undefined8 **)(this + 0xb8); puVar21 != puVar2; puVar21 = puVar21 + 1) {
          (**(code **)(*(long *)*puVar21 + 0x38))();
        }
        puVar2 = *(undefined8 **)(this + 0xd8);
        for (puVar21 = *(undefined8 **)(this + 0xd0); puVar21 != puVar2; puVar21 = puVar21 + 1) {
          (**(code **)(*(long *)*puVar21 + 0x38))();
        }
      }
      else if (*(float *)(this + 0x28) - *(float *)(this + 0x94) < fVar22) {
        return;
      }
      fVar23 = *(float *)(this + 0x74);
      fVar22 = fVar22 / fVar23;
      if (fVar23 <= 1e-06) {
        fVar22 = 0.0;
      }
      this[0xf] = (AnimationState)0x0;
      *(float *)(this + 0x28) = fVar22;
      *(float *)(this + 0x94) = (1.0 - fVar23) * fVar22;
    }
  }
  return;
}

