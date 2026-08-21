
/* v8::internal::Property::GetAssignType(v8::internal::Property*) */

undefined4 v8::internal::Property::GetAssignType(Property *param_1)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined4 uVar6;
  
  uVar4 = 0;
  if (param_1 != (Property *)0x0) {
    uVar3 = Expression::IsPrivateName(*(Expression **)(param_1 + 0x10));
    if ((uVar3 & 1) == 0) {
      uVar1 = *(uint *)(*(long *)(param_1 + 8) + 4);
      uVar3 = Expression::IsPropertyName(*(Expression **)(param_1 + 0x10));
      bVar2 = (uVar1 & 0x3f) != 0x30;
      uVar4 = 3;
      if (bVar2) {
        uVar4 = 1;
      }
      uVar6 = 4;
      if (bVar2) {
        uVar6 = 2;
      }
      if ((uVar3 & 1) == 0) {
        uVar4 = uVar6;
      }
    }
    else {
      lVar5 = *(long *)(param_1 + 0x10);
      if ((*(uint *)(lVar5 + 4) & 0x3f) != 0x35) {
        lVar5 = 0;
      }
      uVar4 = 5;
      switch(*(ushort *)(*(long *)(lVar5 + 8) + 0x28) & 0xf) {
      case 1:
        uVar4 = 2;
        break;
      default:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      case 7:
        break;
      case 8:
        uVar4 = 7;
        break;
      case 9:
        uVar4 = 6;
        break;
      case 10:
        uVar4 = 8;
      }
    }
  }
  return uVar4;
}

