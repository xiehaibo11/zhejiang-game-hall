
/* bool v8::internal::String::IsEqualTo<unsigned short>(v8::internal::Vector<unsigned short const>)
    */

bool v8::internal::String::IsEqualTo<unsigned_short>
               (PerThreadAssertScopeDebugOnly *param_1,ushort *param_2,int param_3)

{
  ushort *puVar1;
  bool bVar2;
  ushort *puVar3;
  int iVar4;
  undefined1 auVar5 [16];
  
  iVar4 = *(int *)(*(long *)param_1 + 7);
  if (iVar4 == param_3) {
    auVar5 = GetFlatContent(param_1);
    puVar3 = auVar5._0_8_;
    if (auVar5._8_8_ >> 0x20 == 1) {
      if (0 < iVar4) {
        puVar1 = (ushort *)((long)puVar3 + (long)iVar4);
        do {
          iVar4 = (uint)(byte)*puVar3 - (uint)*param_2;
          if (iVar4 != 0) goto LAB_01138254;
          puVar3 = (ushort *)((long)puVar3 + 1);
          param_2 = param_2 + 1;
        } while (puVar3 < puVar1);
      }
    }
    else if (0 < iVar4) {
      puVar1 = puVar3 + iVar4;
      do {
        iVar4 = (uint)*puVar3 - (uint)*param_2;
        if (iVar4 != 0) goto LAB_01138254;
        puVar3 = puVar3 + 1;
        param_2 = param_2 + 1;
      } while (puVar3 < puVar1);
    }
    iVar4 = 0;
LAB_01138254:
    bVar2 = iVar4 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

