
ushort FUN_01114388(undefined8 *param_1,undefined8 param_2,long *param_3,ulong *param_4)

{
  long lVar1;
  undefined2 *__dest;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  undefined2 *puVar8;
  ushort uVar9;
  undefined8 *puVar10;
  uint local_58;
  undefined4 uStack_54;
  ushort local_44 [2];
  
  param_1[3] = param_2;
  if (param_4 != (ulong *)0x0) {
    *param_4 = 0;
  }
  if ((*(uint *)(param_1 + 2) >> 0xb & 1) == 0) {
    lVar1 = (*(code *)param_1[0x7a])(param_1[0x77],param_1[3],0);
    if (lVar1 != param_1[3]) {
      uVar3 = param_1[0x77];
      uVar5 = *param_1;
      pcVar4 = "%s: Seek error accessing TIFF directory";
      goto LAB_0111462c;
    }
    if ((*(byte *)((long)param_1 + 0x12) >> 3 & 1) == 0) {
      lVar1 = (*(code *)param_1[0x78])(param_1[0x77],local_44,2);
      if (lVar1 != 2) {
LAB_01114614:
        uVar3 = param_1[0x77];
        uVar5 = *param_1;
        pcVar4 = "%s: Can not read TIFF directory count";
LAB_0111462c:
        TIFFErrorExt(uVar3,"TIFFFetchDirectory",pcVar4,uVar5);
        return 0;
      }
      if (*(char *)(param_1 + 2) < '\0') {
        TIFFSwabShort(local_44);
      }
      uVar7 = (ulong)local_44[0];
      if (0x1000 < local_44[0]) goto LAB_01114664;
      lVar1 = 0xc;
    }
    else {
      lVar1 = (*(code *)param_1[0x78])(param_1[0x77],&local_58,8);
      if (lVar1 != 8) goto LAB_01114614;
      if (*(char *)(param_1 + 2) < '\0') {
        TIFFSwabLong8(&local_58);
      }
      uVar7 = CONCAT44(uStack_54,local_58);
      if (0x1000 < uVar7) goto LAB_01114664;
      lVar1 = 0x14;
      local_44[0] = (ushort)local_58;
    }
    __dest = (undefined2 *)
             _TIFFCheckMalloc(param_1,(uint)uVar7 & 0xffff,lVar1,"to read TIFF directory");
    if (__dest == (undefined2 *)0x0) {
      return 0;
    }
    lVar2 = (*(code *)param_1[0x78])(param_1[0x77],__dest,lVar1 * (ulong)local_44[0]);
    if (lVar2 != lVar1 * (ulong)local_44[0]) {
      TIFFErrorExt(param_1[0x77],"TIFFFetchDirectory","%.100s: Can not read TIFF directory",*param_1
                  );
      goto LAB_01114848;
    }
    if (param_4 != (ulong *)0x0) {
      if ((*(byte *)((long)param_1 + 0x12) >> 3 & 1) == 0) {
        lVar1 = (*(code *)param_1[0x78])(param_1[0x77],&local_58,4);
        if (lVar1 != 4) {
          local_58 = 0;
        }
        if (*(char *)(param_1 + 2) < '\0') {
LAB_01114600:
          TIFFSwabLong(&local_58);
        }
LAB_01114608:
        *param_4 = (ulong)local_58;
      }
      else {
        lVar1 = (*(code *)param_1[0x78])(param_1[0x77],param_4,8);
        if (lVar1 != 8) {
          *param_4 = 0;
        }
        if (*(char *)(param_1 + 2) < '\0') {
LAB_01114764:
          TIFFSwabLong8(param_4);
        }
      }
    }
LAB_0111476c:
    lVar1 = _TIFFCheckMalloc(param_1,local_44[0],0x18,"to read TIFF directory");
    if (lVar1 != 0) {
      if (local_44[0] != 0) {
        uVar9 = 0;
        puVar10 = (undefined8 *)(lVar1 + 0x10);
        puVar8 = __dest;
        do {
          uVar6 = *(uint *)(param_1 + 2);
          if ((uVar6 >> 7 & 1) != 0) {
            TIFFSwabShort(puVar8);
            uVar6 = *(uint *)(param_1 + 2);
          }
          *(undefined2 *)(puVar10 + -2) = *puVar8;
          if ((uVar6 >> 7 & 1) != 0) {
            TIFFSwabShort(puVar8 + 1);
            uVar6 = *(uint *)(param_1 + 2);
          }
          *(undefined2 *)((long)puVar10 + -0xe) = puVar8[1];
          if ((uVar6 >> 0x13 & 1) == 0) {
            if ((uVar6 >> 7 & 1) != 0) {
              TIFFSwabLong();
            }
            puVar10[-1] = (ulong)*(uint *)(puVar8 + 2);
            *(undefined4 *)puVar10 = *(undefined4 *)(puVar8 + 4);
            lVar2 = 0xc;
          }
          else {
            if ((uVar6 >> 7 & 1) != 0) {
              TIFFSwabLong8(puVar8 + 2);
            }
            puVar10[-1] = *(undefined8 *)(puVar8 + 2);
            *puVar10 = *(undefined8 *)(puVar8 + 6);
            lVar2 = 0x14;
          }
          uVar9 = uVar9 + 1;
          puVar8 = (undefined2 *)((long)puVar8 + lVar2);
          puVar10 = puVar10 + 3;
        } while (uVar9 < local_44[0]);
      }
      _TIFFfree(__dest);
      *param_3 = lVar1;
      return local_44[0];
    }
LAB_01114848:
    _TIFFfree(__dest);
    return 0;
  }
  lVar1 = param_1[3];
  if ((*(uint *)(param_1 + 2) >> 0x13 & 1) == 0) {
    if (((lVar1 < 0x7ffffffffffffffe) && (lVar2 = lVar1 + 2, 1 < lVar2)) &&
       (lVar2 <= (long)param_1[0x74])) {
      _TIFFmemcpy(local_44,(void *)(param_1[0x73] + lVar1),2);
      if (*(char *)(param_1 + 2) < '\0') {
        TIFFSwabShort(local_44);
      }
      uVar6 = (uint)local_44[0];
      if (local_44[0] < 0x1001) {
        lVar1 = 0xc;
        if (local_44[0] == 0) goto LAB_011146ac;
        goto LAB_0111449c;
      }
LAB_01114664:
      uVar3 = param_1[0x77];
      pcVar4 = "Sanity check on directory count failed, this is probably not a valid IFD offset";
      goto LAB_01114678;
    }
  }
  else if (((lVar1 < 0x7ffffffffffffff8) && (lVar2 = lVar1 + 8, 7 < lVar2)) &&
          (lVar2 <= (long)param_1[0x74])) {
    _TIFFmemcpy(&local_58,(void *)(param_1[0x73] + lVar1),8);
    if (*(char *)(param_1 + 2) < '\0') {
      TIFFSwabLong8(&local_58);
    }
    if (0x1000 < CONCAT44(uStack_54,local_58)) goto LAB_01114664;
    lVar1 = 0x14;
    local_44[0] = (ushort)local_58;
    uVar6 = local_58 & 0xffff;
    if ((local_58 & 0xffff) == 0) {
LAB_011146ac:
      uVar3 = param_1[0x77];
      pcVar4 = "Sanity check on directory count failed, zero tag directories not supported";
      goto LAB_01114678;
    }
LAB_0111449c:
    __dest = (undefined2 *)_TIFFCheckMalloc(param_1,uVar6,lVar1,"to read TIFF directory");
    if (__dest == (undefined2 *)0x0) {
      return 0;
    }
    if ((lVar2 < 0) || ((long)param_1[0x74] < (long)(lVar2 + lVar1 * (ulong)local_44[0]))) {
      TIFFErrorExt(param_1[0x77],"TIFFFetchDirectory","Can not read TIFF directory");
      goto LAB_01114848;
    }
    _TIFFmemcpy(__dest,(void *)(param_1[0x73] + lVar2),lVar1 * (ulong)local_44[0]);
    if (param_4 != (ulong *)0x0) {
      uVar6 = *(uint *)(param_1 + 2);
      lVar2 = lVar2 + lVar1 * (ulong)local_44[0];
      if ((uVar6 >> 0x13 & 1) != 0) {
        if (((lVar2 < 0x7ffffffffffffff8) && (7 < lVar2 + 8)) && (lVar2 + 8 <= (long)param_1[0x74]))
        {
          _TIFFmemcpy(param_4,(void *)(param_1[0x73] + lVar2),8);
          uVar6 = *(uint *)(param_1 + 2);
        }
        else {
          *param_4 = 0;
        }
        if ((uVar6 >> 7 & 1) == 0) goto LAB_0111476c;
        goto LAB_01114764;
      }
      if (((lVar2 < 0x7ffffffffffffffc) && (3 < lVar2 + 4)) && (lVar2 + 4 <= (long)param_1[0x74])) {
        _TIFFmemcpy(&local_58,(void *)(param_1[0x73] + lVar2),4);
        uVar6 = *(uint *)(param_1 + 2);
      }
      else {
        local_58 = 0;
      }
      if ((uVar6 >> 7 & 1) != 0) goto LAB_01114600;
      goto LAB_01114608;
    }
    goto LAB_0111476c;
  }
  uVar3 = param_1[0x77];
  pcVar4 = "Can not read TIFF directory count";
LAB_01114678:
  TIFFErrorExt(uVar3,"TIFFFetchDirectory",pcVar4);
  return 0;
}

