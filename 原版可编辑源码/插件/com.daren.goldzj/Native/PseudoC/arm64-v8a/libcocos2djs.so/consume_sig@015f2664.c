
/* v8::internal::wasm::ModuleDecoderImpl::consume_sig(v8::internal::Zone*) */

ulong * __thiscall
v8::internal::wasm::ModuleDecoderImpl::consume_sig(ModuleDecoderImpl *this,Zone *param_1)

{
  byte bVar1;
  ModuleDecoderImpl MVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  uint uVar5;
  ulong uVar6;
  void *pvVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  uint uVar16;
  byte *pbVar17;
  void *__dest;
  char *pcVar18;
  ulong *puVar19;
  void *__src;
  size_t sVar20;
  undefined1 *puVar21;
  uint uVar22;
  undefined1 *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  pbVar17 = *(byte **)(this + 0x10);
  if (*(int *)(this + 0x18) == (int)pbVar17) {
    Decoder::errorf((uchar *)this,(char *)pbVar17,"expected %u bytes, fell off end",1);
    uVar8 = 0;
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(this + 0x18);
LAB_015f2b2c:
    Decoder::errorf((uchar *)this,(char *)pbVar17,"expected %s 0x%02x, got 0x%02x","type form",0x60,
                    uVar8);
    return (ulong *)0x0;
  }
  bVar1 = *pbVar17;
  uVar8 = (ulong)bVar1;
  *(byte **)(this + 0x10) = pbVar17 + 1;
  if (bVar1 != 0x60) goto LAB_015f2b2c;
  uVar5 = Decoder::consume_u32v((Decoder *)this,"param count");
  if (1000 < uVar5) {
    Decoder::errorf((uchar *)this,(char *)(pbVar17 + 1),"%s of %u exceeds internal limit of %zu",
                    "param count",(ulong)uVar5,1000);
    uVar5 = 1000;
  }
  MVar2 = this[0x30];
  if (((byte)MVar2 & 1) == 0) {
    if ((byte)MVar2 >> 1 != 0) {
      return (ulong *)0x0;
    }
  }
  else if (*(long *)(this + 0x38) != 0) {
    return (ulong *)0x0;
  }
  puVar21 = (undefined1 *)0x0;
  puVar23 = (undefined1 *)0x0;
  __dest = (void *)0x0;
  uVar16 = 0;
  if (((byte)MVar2 & 1) == 0) goto LAB_015f27d8;
  while (uVar8 = *(ulong *)(this + 0x38), pvVar7 = __dest, uVar16 < uVar5) {
    while( true ) {
      __dest = pvVar7;
      if (uVar8 != 0) goto LAB_015f27e4;
      uVar4 = consume_value_type(this);
      if (puVar23 == puVar21) {
        sVar20 = (long)puVar23 - (long)pvVar7;
        uVar8 = sVar20 + 1;
        if ((long)uVar8 < 0) goto LAB_015f2b9c;
        uVar12 = ((long)puVar21 - (long)pvVar7) * 2;
        if (uVar8 <= uVar12) {
          uVar8 = uVar12;
        }
        if (0x3ffffffffffffffe < (ulong)((long)puVar21 - (long)pvVar7)) {
          uVar8 = 0x7fffffffffffffff;
        }
        if (uVar8 == 0) {
          __dest = (void *)0x0;
        }
        else {
          __dest = operator_new(uVar8);
        }
        puVar23 = (undefined1 *)((long)__dest + sVar20);
        puVar21 = (undefined1 *)((long)__dest + uVar8);
        *puVar23 = uVar4;
        if (0 < (long)sVar20) {
          memcpy(__dest,pvVar7,sVar20);
        }
        if (pvVar7 != (void *)0x0) {
          operator_delete(pvVar7);
        }
      }
      else {
        *puVar23 = uVar4;
      }
      puVar23 = puVar23 + 1;
      MVar2 = this[0x30];
      uVar16 = uVar16 + 1;
      if (((byte)MVar2 & 1) != 0) break;
LAB_015f27d8:
      uVar8 = (ulong)((byte)MVar2 >> 1);
      pvVar7 = __dest;
      if (uVar5 <= uVar16) goto LAB_015f27e4;
    }
  }
LAB_015f27e4:
  pcVar18 = *(char **)(this + 0x10);
  uVar8 = 1000;
  if ((*(uint *)(this + 0x48) & 0x80) == 0) {
    uVar8 = 1;
  }
  uVar6 = Decoder::consume_u32v((Decoder *)this,"return count");
  uVar12 = uVar6 & 0xffffffff;
  if (uVar8 < (uVar6 & 0xffffffff)) {
    Decoder::errorf((uchar *)this,pcVar18,"%s of %u exceeds internal limit of %zu","return count",
                    uVar6 & 0xffffffff,uVar8);
    uVar12 = uVar8;
  }
  MVar2 = this[0x30];
  uVar8 = (ulong)(byte)MVar2;
  if (((byte)MVar2 & 1) == 0) {
    puVar19 = (ulong *)0x0;
    if ((byte)MVar2 >> 1 != 0) goto LAB_015f2964;
  }
  else {
    puVar19 = (ulong *)0x0;
    if (*(long *)(this + 0x38) != 0) goto LAB_015f2964;
  }
  pvVar7 = (void *)0x0;
  puVar23 = (undefined1 *)0x0;
  puVar21 = (undefined1 *)0x0;
  uVar16 = 0;
  uVar22 = (uint)uVar12;
  if (((byte)MVar2 & 1) == 0) goto LAB_015f2894;
LAB_015f2874:
  uVar6 = *(ulong *)(this + 0x38);
  __src = pvVar7;
  if (uVar16 < uVar22) {
    do {
      pvVar7 = __src;
      if (uVar6 != 0) break;
      uVar4 = consume_value_type(this);
      if (puVar23 == puVar21) {
        sVar20 = (long)puVar23 - (long)__src;
        uVar8 = sVar20 + 1;
        if ((long)uVar8 < 0) {
LAB_015f2b9c:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar6 = ((long)puVar21 - (long)__src) * 2;
        if (uVar8 <= uVar6) {
          uVar8 = uVar6;
        }
        if (0x3ffffffffffffffe < (ulong)((long)puVar21 - (long)__src)) {
          uVar8 = 0x7fffffffffffffff;
        }
        if (uVar8 == 0) {
          pvVar7 = (void *)0x0;
        }
        else {
          pvVar7 = operator_new(uVar8);
        }
        puVar23 = (undefined1 *)((long)pvVar7 + sVar20);
        puVar21 = (undefined1 *)((long)pvVar7 + uVar8);
        *puVar23 = uVar4;
        if (0 < (long)sVar20) {
          memcpy(pvVar7,__src,sVar20);
        }
        if (__src != (void *)0x0) {
          operator_delete(__src);
        }
      }
      else {
        *puVar23 = uVar4;
      }
      puVar23 = puVar23 + 1;
      uVar8 = (ulong)(byte)this[0x30];
      uVar16 = uVar16 + 1;
      if (((byte)this[0x30] & 1) != 0) goto LAB_015f2874;
LAB_015f2894:
      uVar6 = uVar8 >> 1;
      __src = pvVar7;
      if (uVar22 <= uVar16) break;
    } while( true );
  }
  if ((uVar8 & 1) == 0) {
    if ((uint)uVar8 >> 1 != 0) goto LAB_015f2950;
LAB_015f2980:
    uVar8 = *(ulong *)(param_1 + 0x10);
    uVar6 = (ulong)(uVar22 + uVar5) + 7 & 0x1fffffff8;
    if (*(long *)(param_1 + 0x18) - uVar8 < uVar6) {
      uVar8 = Zone::NewExpand(param_1,uVar6);
    }
    else {
      *(ulong *)(param_1 + 0x10) = uVar8 + uVar6;
    }
    if (uVar22 != 0) {
      if ((uVar22 < 0x20) ||
         ((uVar8 < (long)pvVar7 + uVar12 && (pvVar7 < (void *)(uVar8 + uVar12))))) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar12 & 0xffffffe0;
        puVar13 = (undefined8 *)((long)pvVar7 + 0x10);
        puVar14 = (undefined8 *)(uVar8 + 0x10);
        uVar10 = uVar6;
        do {
          puVar3 = puVar13 + -1;
          uVar24 = puVar13[-2];
          uVar26 = puVar13[1];
          uVar25 = *puVar13;
          puVar13 = puVar13 + 4;
          uVar10 = uVar10 - 0x20;
          puVar14[-1] = *puVar3;
          puVar14[-2] = uVar24;
          puVar14[1] = uVar26;
          *puVar14 = uVar25;
          puVar14 = puVar14 + 4;
        } while (uVar10 != 0);
        if (uVar6 == uVar12) goto LAB_015f29ec;
      }
      lVar9 = uVar12 - uVar6;
      puVar23 = (undefined1 *)(uVar8 + uVar6);
      puVar21 = (undefined1 *)((long)pvVar7 + uVar6);
      do {
        lVar9 = lVar9 + -1;
        *puVar23 = *puVar21;
        puVar23 = puVar23 + 1;
        puVar21 = puVar21 + 1;
      } while (lVar9 != 0);
    }
LAB_015f29ec:
    if (uVar5 != 0) {
      uVar10 = (ulong)uVar5;
      uVar6 = uVar12;
      if (uVar5 < 0x20) {
LAB_015f2a00:
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        if (~uVar22 < (uint)(uVar10 - 1)) goto LAB_015f2a00;
        if (uVar10 - 1 >> 0x20 == 0) {
          if ((__dest < (void *)(uVar8 + uVar12 + uVar10)) &&
             (uVar8 + uVar12 < (long)__dest + uVar10)) goto LAB_015f2a00;
          uVar11 = uVar10 & 0xffffffe0;
          uVar6 = (ulong)(uVar22 + (int)uVar11);
          puVar13 = (undefined8 *)((long)__dest + 0x10);
          uVar15 = uVar11;
          do {
            puVar3 = puVar13 + -1;
            uVar24 = puVar13[-2];
            uVar26 = puVar13[1];
            uVar25 = *puVar13;
            puVar14 = (undefined8 *)(uVar8 + uVar22);
            puVar13 = puVar13 + 4;
            uVar15 = uVar15 - 0x20;
            uVar22 = uVar22 + 0x20;
            puVar14[1] = *puVar3;
            *puVar14 = uVar24;
            puVar14[3] = uVar26;
            puVar14[2] = uVar25;
          } while (uVar15 != 0);
          if (uVar11 == uVar10) goto LAB_015f2a20;
        }
      }
      do {
        puVar23 = (undefined1 *)((long)__dest + uVar11);
        uVar11 = uVar11 + 1;
        *(undefined1 *)(uVar8 + uVar6) = *puVar23;
        uVar6 = (ulong)((int)uVar6 + 1);
      } while (uVar11 < uVar10);
    }
LAB_015f2a20:
    puVar19 = *(ulong **)(param_1 + 0x10);
    if ((ulong)(*(long *)(param_1 + 0x18) - (long)puVar19) < 0x18) {
      puVar19 = (ulong *)Zone::NewExpand(param_1,0x18);
    }
    else {
      *(ulong **)(param_1 + 0x10) = puVar19 + 3;
    }
    *puVar19 = uVar12;
    puVar19[1] = (ulong)uVar5;
    puVar19[2] = uVar8;
  }
  else {
    if (*(long *)(this + 0x38) == 0) goto LAB_015f2980;
LAB_015f2950:
    puVar19 = (ulong *)0x0;
  }
  if (pvVar7 != (void *)0x0) {
    operator_delete(pvVar7);
  }
LAB_015f2964:
  if (__dest != (void *)0x0) {
    operator_delete(__dest);
    return puVar19;
  }
  return puVar19;
}

