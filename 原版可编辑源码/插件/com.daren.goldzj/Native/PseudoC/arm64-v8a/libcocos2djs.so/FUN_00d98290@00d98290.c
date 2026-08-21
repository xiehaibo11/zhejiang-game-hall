
void FUN_00d98290(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = *(long *)(param_1 + 0x218);
  lVar2 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x4000);
  lVar7 = 1;
  lVar6 = 0;
  lVar3 = 0;
  *(long *)(lVar5 + 0x10) = lVar2;
  do {
    plVar1 = (long *)(lVar2 + lVar3);
    plVar1[0x501] = lVar7 * 0x8000 + 0x807fff;
    plVar1[0x500] = lVar6 * 0x8000 + 0x807fff;
    plVar1[1] = lVar7 * 0x4c8b;
    *plVar1 = lVar6 * 0x4c8b;
    plVar1[0x101] = lVar7 * 0x9646;
    plVar1[0x100] = lVar6 * 0x9646;
    plVar1[0x301] = lVar7 * -0x2b32;
    plVar1[0x300] = lVar6 * -0x2b32;
    plVar1[0x401] = lVar7 * -0x54ce;
    plVar1[0x400] = lVar6 * -0x54ce;
    lVar4 = lVar6 * 0x1d2f;
    lVar5 = lVar7 * 0x1d2f;
    plVar1[0x601] = lVar7 * -0x6b2f;
    plVar1[0x600] = lVar6 * -0x6b2f;
    plVar1[0x701] = lVar7 * -0x14d1;
    plVar1[0x700] = lVar6 * -0x14d1;
    lVar3 = lVar3 + 0x10;
    lVar6 = lVar6 + 2;
    lVar7 = lVar7 + 2;
    plVar1[0x201] = lVar5 + 0x8000;
    plVar1[0x200] = lVar4 + 0x8000;
  } while (lVar3 != 0x800);
  return;
}

