
/* v8::sampler::SamplerManager::DoSample(v8::RegisterState const&) */

void __thiscall v8::sampler::SamplerManager::DoSample(SamplerManager *this,RegisterState *param_1)

{
  SamplerManager *pSVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  ulong uVar8;
  pthread_t pVar9;
  ulong uVar10;
  ulong uVar11;
  pthread_t pVar12;
  long *plVar13;
  pthread_t pVar14;
  Isolate *this_00;
  undefined2 uVar15;
  undefined8 uVar16;
  
  pSVar1 = this + 0x28;
  do {
    if (*pSVar1 != (SamplerManager)0x0) {
      ClearExclusiveLocal();
      return;
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pSVar1,0x10);
    if (bVar7) {
      *pSVar1 = (SamplerManager)0x1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  pVar9 = pthread_self();
  uVar10 = *(ulong *)(this + 8);
  if (uVar10 != 0) {
    uVar16 = CONCAT17(POPCOUNT((char)(uVar10 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar10 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar10 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar10 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar10 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar10 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar10 
                                                  >> 8)),POPCOUNT((char)uVar10))))))));
    uVar15 = NEON_uaddlv(uVar16,1);
    uVar11 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
    if (uVar11 < 2) {
      pVar12 = uVar10 - 1 & pVar9;
    }
    else {
      pVar12 = pVar9;
      if (uVar10 <= pVar9) {
        uVar8 = 0;
        if (uVar10 != 0) {
          uVar8 = pVar9 / uVar10;
        }
        pVar12 = pVar9 - uVar8 * uVar10;
      }
    }
    plVar13 = *(long **)(*(long *)this + pVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      do {
        pVar14 = plVar13[1];
        if (pVar14 == pVar9) {
          if (plVar13[2] == pVar9) {
            puVar4 = (undefined8 *)plVar13[4];
            for (puVar3 = (undefined8 *)plVar13[3]; puVar3 != puVar4; puVar3 = puVar3 + 1) {
              plVar13 = (long *)*puVar3;
              pbVar2 = (byte *)((long)plVar13 + 0x21);
              do {
                bVar5 = *pbVar2;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(pbVar2,0x10);
                if (bVar7) {
                  *pbVar2 = 0;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (((((bVar5 & 1) != 0) &&
                   (this_00 = (Isolate *)plVar13[3], this_00 != (Isolate *)0x0)) &&
                  (uVar10 = Isolate::IsInUse(this_00), (uVar10 & 1) != 0)) &&
                 ((uVar10 = Locker::IsActive(), (uVar10 & 1) == 0 ||
                  (uVar10 = Locker::IsLocked(this_00), (uVar10 & 1) != 0)))) {
                (**(code **)(*plVar13 + 0x10))(plVar13,param_1);
              }
            }
            break;
          }
        }
        else {
          if (uVar11 < 2) {
            pVar14 = pVar14 & uVar10 - 1;
          }
          else if (uVar10 <= pVar14) {
            uVar8 = 0;
            if (uVar10 != 0) {
              uVar8 = pVar14 / uVar10;
            }
            pVar14 = pVar14 - uVar8 * uVar10;
          }
          if (pVar14 != pVar12) break;
        }
        plVar13 = (long *)*plVar13;
      } while (plVar13 != (long *)0x0);
    }
  }
  *(undefined4 *)pSVar1 = 0;
  return;
}

