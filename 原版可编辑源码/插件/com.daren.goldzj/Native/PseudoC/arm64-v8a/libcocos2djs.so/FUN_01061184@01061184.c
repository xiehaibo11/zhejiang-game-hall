
int FUN_01061184(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  ulong local_60;
  HeapObjectIterator aHStack_58 [40];
  
  v8::internal::HeapObjectIterator::HeapObjectIterator(aHStack_58,param_1,0);
  uVar3 = v8::internal::HeapObjectIterator::Next(aHStack_58);
  iVar10 = 0;
  iVar2 = (int)uVar3;
  do {
    if (iVar2 == 0) {
      v8::internal::HeapObjectIterator::~HeapObjectIterator(aHStack_58);
      return iVar10;
    }
    uVar4 = uVar3 & 0xffffffff00000000;
    uVar6 = uVar4 | 7;
    if (*(short *)(uVar6 + *(uint *)(uVar3 - 1)) == 0xa6) {
      uVar1 = *(uint *)(uVar3 + 3);
      local_60 = uVar3;
      if ((uVar1 != 0x84) &&
         (((uVar1 & 1) == 0 || (1 < *(ushort *)(uVar6 + *(uint *)((uVar4 | uVar1) - 1)) - 0x95)))) {
        uVar6 = uVar3 & 0xffffffff00000000;
        uVar7 = uVar6 | *(uint *)(uVar3 + 0xf);
        uVar5 = uVar6 | 7;
        uVar4 = uVar7;
        if (*(short *)(uVar5 + *(uint *)(uVar7 - 1)) == 0x5b) {
          uVar4 = uVar6 | *(uint *)(uVar7 + 0xb);
        }
        if (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x65) {
          if (*(short *)(uVar5 + *(uint *)(uVar7 - 1)) == 0x5b) {
            uVar7 = uVar6 | *(uint *)(uVar7 + 0xb);
          }
          if ((*(uint *)(uVar7 + 3) & 1) != 0) {
            uVar8 = uVar7 & 0xffffffff00000000;
            uVar4 = uVar8 | *(uint *)(uVar7 + 3);
            uVar7 = uVar8 | 7;
            if (((*(ushort *)(uVar7 + *(uint *)(uVar4 - 1)) < 0x40) &&
                ((*(ushort *)((uVar8 | *(uint *)(uVar4 - 1)) + 7) & 7) == 2)) &&
               ((((*(byte *)(uVar7 + *(uint *)(uVar4 - 1)) >> 3 & 1) != 0 ||
                 ((*(byte *)(uVar7 + *(uint *)(uVar4 - 1)) >> 3 & 1) == 0)) &&
                (*(long *)(uVar4 + 0xb) == 0)))) goto LAB_010611e8;
          }
        }
        uVar7 = uVar3;
        if ((((*(uint *)(uVar3 + 3) & 1) == 0) ||
            (*(short *)(uVar5 + *(uint *)((uVar6 | *(uint *)(uVar3 + 3)) - 1)) != 0x86)) &&
           (((*(uint *)(uVar3 + 3) & 1) == 0 ||
            (*(short *)((uVar3 & 0xffffffff00000000 | 7) +
                       (ulong)*(uint *)((uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 3)) -
                                       1)) != 0x61)))) {
          uVar4 = v8::internal::SharedFunctionInfo::GetCode((SharedFunctionInfo *)&local_60);
        }
        else {
          uVar4 = uVar3 & 0xffffffff00000000;
          uVar5 = uVar4 | *(uint *)(uVar3 + 0xf);
          uVar6 = uVar4 | 7;
          if ((*(short *)(uVar6 + *(uint *)(uVar5 - 1)) == 0x5b) &&
             (*(short *)(uVar6 + *(uint *)((uVar4 | *(uint *)(uVar5 + 0x13)) - 1)) == 0x86)) {
            uVar4 = uVar4 | *(uint *)(uVar5 + 0xf);
          }
          else if (((*(uint *)(uVar3 + 3) & 1) == 0) ||
                  (*(short *)(uVar6 + *(uint *)((uVar4 | *(uint *)(uVar3 + 3)) - 1)) != 0x86)) {
            uVar4 = uVar3 & 0xffffffff00000000 |
                    (ulong)*(uint *)((uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 3)) + 3)
            ;
          }
          else {
            uVar4 = uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 3);
          }
        }
LAB_010611d4:
        FUN_01061d30(uVar7,uVar4,param_2,param_3,iVar10);
        iVar10 = iVar10 + 1;
      }
    }
    else if (*(short *)(uVar6 + *(uint *)(uVar3 - 1)) == 0x439) {
      uVar7 = uVar4 | *(uint *)(uVar3 + 0xb);
      uVar5 = uVar4 | *(uint *)(uVar7 + 0xf);
      if (*(short *)(uVar6 + *(uint *)(uVar5 - 1)) == 0x5b) {
        uVar5 = uVar4 | *(uint *)(uVar5 + 0xb);
      }
      if ((uVar5 & 1) != 0) {
        uVar9 = uVar5 & 0xffffffff00000000;
        uVar8 = uVar9 | 7;
        if (((((*(short *)(uVar8 + *(uint *)(uVar5 - 1)) == 0x65) &&
              ((*(uint *)(uVar5 + 3) & 1) != 0)) &&
             (uVar5 = uVar9 | *(uint *)(uVar5 + 3), *(ushort *)(uVar8 + *(uint *)(uVar5 - 1)) < 0x40
             )) && ((*(ushort *)((uVar9 | *(uint *)(uVar5 - 1)) + 7) & 7) == 2)) &&
           ((((*(byte *)(uVar8 + *(uint *)(uVar5 - 1)) >> 3 & 1) != 0 ||
             ((*(byte *)(uVar8 + *(uint *)(uVar5 - 1)) >> 3 & 1) == 0)) &&
            (*(long *)(uVar5 + 0xb) == 0)))) goto LAB_010611e8;
      }
      if (*(int *)((uVar4 | *(uint *)(uVar3 + 0x17)) + 0x27) != 0x42) {
        uVar1 = *(uint *)((uVar4 | *(uint *)(uVar3 + 0xb)) + 3);
        if (((uVar1 != 0x84) &&
            (((uVar1 & 1) == 0 || (1 < *(ushort *)(uVar6 + *(uint *)((uVar4 | uVar1) - 1)) - 0x95)))
            ) && (((*(byte *)((uVar4 | *(uint *)(uVar3 + 0x17)) + 0x17) & 0x3e) == 0 &&
                  ((*(uint *)((uVar4 | *(uint *)((uVar4 | *(uint *)(uVar3 + 0x17)) + 0xf)) + 7) & 1)
                   == 0)))) {
          uVar4 = uVar4 | *(uint *)(uVar3 + 0x17);
          goto LAB_010611d4;
        }
      }
    }
LAB_010611e8:
    uVar3 = v8::internal::HeapObjectIterator::Next(aHStack_58);
    iVar2 = (int)uVar3;
  } while( true );
}

