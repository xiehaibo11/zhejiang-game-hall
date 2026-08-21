
/* v8::internal::Scanner::ScanImplicitOctalDigits(int, v8::internal::Scanner::NumberKind*) */

undefined8 __thiscall
v8::internal::Scanner::ScanImplicitOctalDigits(Scanner *this,int param_1,NumberKind *param_2)

{
  LiteralBuffer *this_00;
  long lVar1;
  ulong uVar2;
  int iVar3;
  ushort *puVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  
  *(undefined4 *)param_2 = 0;
  uVar6 = *(uint *)(this + 0x20);
  do {
    if ((uVar6 & 0xfffffffe) == 0x38) {
      *(undefined4 *)param_2 = 5;
      return 1;
    }
    if ((uVar6 & 0xfffffff8) != 0x30) {
      lVar5 = *(long *)(this + 0x18);
      lVar8 = *(long *)(lVar5 + 8);
      lVar1 = *(long *)(lVar5 + 0x10);
      iVar3 = *(int *)(lVar5 + 0x20);
      *(undefined4 *)(this + 0x158) = 0x12a;
      *(long *)(this + 0x150) =
           CONCAT44((int)((ulong)(lVar1 - lVar8) >> 1) + iVar3,param_1) + -0x100000000;
      return 1;
    }
    lVar8 = *(long *)(this + 8);
    this_00 = (LiteralBuffer *)(lVar8 + 8);
    if (*(char *)(lVar8 + 0x1c) == '\0') {
LAB_01196834:
      LiteralBuffer::AddTwoByteChar(this_00,uVar6);
    }
    else {
      if (0xff < (int)uVar6) {
        LiteralBuffer::ConvertToTwoByte(this_00);
        goto LAB_01196834;
      }
      iVar3 = *(int *)(lVar8 + 0x18);
      if (*(int *)(lVar8 + 0x10) <= iVar3) {
        LiteralBuffer::ExpandBuffer(this_00);
        iVar3 = *(int *)(lVar8 + 0x18);
      }
      *(char *)(*(long *)(lVar8 + 8) + (long)iVar3) = (char)uVar6;
      *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + 1;
    }
    plVar7 = *(long **)(this + 0x18);
    puVar4 = (ushort *)plVar7[2];
    if (puVar4 < (ushort *)plVar7[3]) {
LAB_01196850:
      uVar6 = (uint)*puVar4;
    }
    else {
      if ((char)plVar7[6] == '\0') {
        uVar2 = (**(code **)(*plVar7 + 0x28))(plVar7);
        puVar4 = (ushort *)plVar7[2];
        if ((uVar2 & 1) != 0) goto LAB_01196850;
      }
      uVar6 = 0xffffffff;
    }
    plVar7[2] = (long)(puVar4 + 1);
    *(uint *)(this + 0x20) = uVar6;
  } while( true );
}

