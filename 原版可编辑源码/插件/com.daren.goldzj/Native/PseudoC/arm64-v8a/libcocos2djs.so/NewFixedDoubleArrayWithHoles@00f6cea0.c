
/* v8::internal::Factory::NewFixedDoubleArrayWithHoles(int) */

void __thiscall v8::internal::Factory::NewFixedDoubleArrayWithHoles(Factory *this,int param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)NewFixedDoubleArray(this,param_1);
  if (0 < param_1) {
    lVar4 = *plVar1;
    lVar3 = 0;
    do {
      iVar2 = (int)lVar3;
      lVar3 = lVar3 + 8;
      *(undefined8 *)(lVar4 + (iVar2 + 7)) = 0xfff7fffffff7ffff;
    } while ((ulong)(uint)param_1 * 8 - lVar3 != 0);
  }
  return;
}

