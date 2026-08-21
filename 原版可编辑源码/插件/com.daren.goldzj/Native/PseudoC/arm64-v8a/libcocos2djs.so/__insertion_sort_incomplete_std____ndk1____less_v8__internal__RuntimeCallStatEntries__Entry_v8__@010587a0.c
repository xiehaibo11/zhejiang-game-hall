
/* bool 
   std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<v8::internal::RuntimeCallStatEntries::Entry,
   v8::internal::RuntimeCallStatEntries::Entry>&,
   std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<v8::internal::RuntimeCallStatEntries::Entry*>
   > 
   >(std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<v8::internal::RuntimeCallStatEntries::Entry*>
   >, 
   std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<v8::internal::RuntimeCallStatEntries::Entry*>
   >, std::__ndk1::__less<v8::internal::RuntimeCallStatEntries::Entry,
   v8::internal::RuntimeCallStatEntries::Entry>&) */

bool std::__ndk1::
     __insertion_sort_incomplete<std::__ndk1::__less<v8::internal::RuntimeCallStatEntries::Entry,v8::internal::RuntimeCallStatEntries::Entry>&,std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<v8::internal::RuntimeCallStatEntries::Entry*>>>
               (undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
               undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  switch(((long)param_2 - (long)param_4 >> 3) * -0x3333333333333333) {
  case 0:
  case 1:
    break;
  case 2:
    if (((long)param_4[1] < (long)param_2[-4]) ||
       (((long)param_4[1] <= (long)param_2[-4] && ((ulong)param_4[2] < (ulong)param_2[-3])))) {
      uVar8 = param_2[-1];
      uVar18 = param_2[-4];
      uVar16 = param_2[-5];
      uVar15 = param_2[-2];
      uVar13 = param_2[-3];
      uVar14 = *param_4;
      uVar19 = param_4[3];
      uVar17 = param_4[2];
      uVar2 = param_4[4];
      param_2[-4] = param_4[1];
      param_2[-5] = uVar14;
      param_2[-2] = uVar19;
      param_2[-3] = uVar17;
      param_2[-1] = uVar2;
      param_4[1] = uVar18;
      *param_4 = uVar16;
      param_4[3] = uVar15;
      param_4[2] = uVar13;
      param_4[4] = uVar8;
      return true;
    }
    break;
  case 3:
    __sort3<std::__ndk1::__less<v8::internal::RuntimeCallStatEntries::Entry,v8::internal::RuntimeCallStatEntries::Entry>&,std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<v8::internal::RuntimeCallStatEntries::Entry*>>>
              (param_1,param_2,param_2 + -5,param_2 + -5,param_3,param_4 + 5);
    break;
  case 4:
    __sort4<std::__ndk1::__less<v8::internal::RuntimeCallStatEntries::Entry,v8::internal::RuntimeCallStatEntries::Entry>&,std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<v8::internal::RuntimeCallStatEntries::Entry*>>>
              (param_1,param_2,param_2 + -5,param_2 + -5,param_2 + -10,param_2 + -10,param_3,
               param_4 + 5,param_5);
    break;
  case 5:
    FUN_010585c0(param_1,param_2,param_2 + -5,param_2 + -5,param_2 + -10,param_2 + -10,
                 param_2 + -0xf,param_2 + -0xf,param_3,param_4 + 5,param_5);
    break;
  default:
    puVar12 = param_2 + -10;
    __sort3<std::__ndk1::__less<v8::internal::RuntimeCallStatEntries::Entry,v8::internal::RuntimeCallStatEntries::Entry>&,std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<v8::internal::RuntimeCallStatEntries::Entry*>>>
              (param_1,param_2,param_2 + -5,param_2 + -5,puVar12,puVar12);
    if (param_2 + -0xf != param_4) {
      lVar3 = 0;
      iVar4 = 0;
      puVar11 = param_2 + -0xf;
      do {
        puVar1 = puVar11;
        lVar5 = puVar1[-4];
        if (lVar5 < (long)puVar12[-4]) {
          uVar6 = puVar1[-3];
LAB_01058904:
          puVar7 = puVar1 + -5;
          uVar8 = *puVar7;
          uVar14 = puVar1[-1];
          uVar2 = puVar1[-2];
          uVar15 = puVar12[-4];
          uVar13 = puVar12[-5];
          uVar17 = puVar12[-2];
          uVar16 = puVar12[-3];
          puVar1[-1] = puVar12[-1];
          puVar1[-4] = uVar15;
          *puVar7 = uVar13;
          puVar1[-2] = uVar17;
          puVar1[-3] = uVar16;
          lVar9 = lVar3;
          puVar11 = param_2;
          if (puVar12 != param_2) {
            do {
              lVar10 = *(long *)((long)param_2 + lVar9 + -0x48);
              if (lVar10 <= lVar5) {
                puVar11 = puVar12;
                if (lVar10 < lVar5) break;
                if (*(ulong *)((long)param_2 + lVar9 + -0x40) <= uVar6) {
                  puVar11 = (undefined8 *)((long)param_2 + lVar9 + -0x50);
                  break;
                }
              }
              lVar10 = lVar9 + 0x28;
              puVar12 = puVar12 + 5;
              *(undefined8 *)((long)param_2 + lVar9 + -0x70) =
                   *(undefined8 *)((long)param_2 + lVar9 + -0x48);
              *(undefined8 *)((long)param_2 + lVar9 + -0x78) =
                   *(undefined8 *)((long)param_2 + lVar9 + -0x50);
              *(undefined8 *)((long)param_2 + lVar9 + -0x60) =
                   *(undefined8 *)((long)param_2 + lVar9 + -0x38);
              *(undefined8 *)((long)param_2 + lVar9 + -0x68) =
                   *(undefined8 *)((long)param_2 + lVar9 + -0x40);
              *(undefined8 *)((long)param_2 + lVar9 + -0x58) =
                   *(undefined8 *)((long)param_2 + lVar9 + -0x30);
              lVar9 = lVar10;
              puVar11 = param_2;
            } while (lVar10 != 0x50);
          }
          puVar11[-5] = uVar8;
          puVar11[-4] = lVar5;
          puVar11[-3] = uVar6;
          iVar4 = iVar4 + 1;
          puVar11[-1] = uVar14;
          puVar11[-2] = uVar2;
          if (iVar4 == 8) {
            return puVar7 == param_4;
          }
        }
        else if ((lVar5 <= (long)puVar12[-4]) && (uVar6 = puVar1[-3], uVar6 < (ulong)puVar12[-3]))
        goto LAB_01058904;
        lVar3 = lVar3 + -0x28;
        puVar11 = puVar1 + -5;
        puVar12 = puVar1;
      } while (puVar1 + -5 != param_4);
    }
  }
  return true;
}

