
/* spine::SkeletonBinary::readCurve(spine::SkeletonBinary::DataInput*, int, spine::CurveTimeline*)
    */

void __thiscall
spine::SkeletonBinary::readCurve
          (SkeletonBinary *this,DataInput *param_1,int param_2,CurveTimeline *param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char *pcVar16;
  
  pcVar16 = *(char **)(param_1 + 8);
  *(char **)(param_1 + 8) = pcVar16 + 1;
  if (*pcVar16 == '\x02') {
    *(char **)(param_1 + 8) = pcVar16 + 2;
    cVar1 = pcVar16[1];
    *(char **)(param_1 + 8) = pcVar16 + 3;
    cVar2 = pcVar16[2];
    *(char **)(param_1 + 8) = pcVar16 + 4;
    cVar3 = pcVar16[3];
    *(char **)(param_1 + 8) = pcVar16 + 5;
    cVar4 = pcVar16[4];
    *(char **)(param_1 + 8) = pcVar16 + 6;
    cVar5 = pcVar16[5];
    *(char **)(param_1 + 8) = pcVar16 + 7;
    cVar6 = pcVar16[6];
    *(char **)(param_1 + 8) = pcVar16 + 8;
    cVar7 = pcVar16[7];
    *(char **)(param_1 + 8) = pcVar16 + 9;
    cVar8 = pcVar16[8];
    *(char **)(param_1 + 8) = pcVar16 + 10;
    cVar9 = pcVar16[9];
    *(char **)(param_1 + 8) = pcVar16 + 0xb;
    cVar10 = pcVar16[10];
    *(char **)(param_1 + 8) = pcVar16 + 0xc;
    cVar11 = pcVar16[0xb];
    *(char **)(param_1 + 8) = pcVar16 + 0xd;
    cVar12 = pcVar16[0xc];
    *(char **)(param_1 + 8) = pcVar16 + 0xe;
    cVar13 = pcVar16[0xd];
    *(char **)(param_1 + 8) = pcVar16 + 0xf;
    cVar14 = pcVar16[0xe];
    *(char **)(param_1 + 8) = pcVar16 + 0x10;
    cVar15 = pcVar16[0xf];
    *(char **)(param_1 + 8) = pcVar16 + 0x11;
    CurveTimeline::setCurve
              (param_3,(long)param_2,(float)CONCAT31(CONCAT21(CONCAT11(cVar1,cVar2),cVar3),cVar4),
               (float)CONCAT31(CONCAT21(CONCAT11(cVar5,cVar6),cVar7),cVar8),
               (float)CONCAT31(CONCAT21(CONCAT11(cVar9,cVar10),cVar11),cVar12),
               (float)CONCAT31(CONCAT21(CONCAT11(cVar13,cVar14),cVar15),pcVar16[0x10]));
    return;
  }
  if (*pcVar16 == '\x01') {
    CurveTimeline::setStepped(param_3,(long)param_2);
    return;
  }
  return;
}

