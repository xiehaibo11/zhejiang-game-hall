
long * FUN_010291f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  byte bVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  
  plVar3 = (long *)v8::internal::Map::Copy(param_1,param_2,param_4);
  lVar5 = *plVar3;
  if (*(char *)(lVar5 + 9) < '\0') {
LAB_010292e4:
    *(byte *)(*plVar3 + 9) = *(byte *)(*plVar3 + 9) & 0xbf;
    v8::internal::Map::SetPrototype(param_1,plVar3,param_3,1);
    return plVar3;
  }
  bVar2 = *(byte *)(lVar5 + 5);
  uVar4 = (uint)bVar2;
  if (2 < bVar2) {
    uVar4 = (uint)*(byte *)(lVar5 + 3) - (uint)bVar2;
  }
  uVar1 = (uint)*(byte *)(lVar5 + 3) * 4 + 4;
  if (uVar1 < 0x400) {
    *(char *)(lVar5 + 3) = (char)(uVar1 >> 2);
    lVar5 = *plVar3;
    if (*(ushort *)(lVar5 + 7) < 0xaa) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsJSObjectMap()");
    }
    uVar1 = *(byte *)(lVar5 + 4) + 1;
    if (uVar1 < 0x100) {
      *(char *)(lVar5 + 4) = (char)uVar1;
      *(byte *)(*plVar3 + 9) = *(byte *)(*plVar3 + 9) | 0x80;
      lVar5 = *plVar3;
      if (*(ushort *)(lVar5 + 7) < 0xaa) {
        if (uVar4 != 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","0 == value");
        }
        *(undefined1 *)(lVar5 + 5) = 0;
      }
      else {
        if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","0 <= value");
        }
        uVar4 = ((*(byte *)(lVar5 + 3) - uVar4) - (uint)*(byte *)(lVar5 + 4)) +
                (uint)*(byte *)(lVar5 + 4);
        if (0xff < uVar4) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","static_cast<unsigned>(value) <= 255");
        }
        *(char *)(lVar5 + 5) = (char)uVar4;
      }
      goto LAB_010292e4;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","static_cast<unsigned>(value) < 256");
}

