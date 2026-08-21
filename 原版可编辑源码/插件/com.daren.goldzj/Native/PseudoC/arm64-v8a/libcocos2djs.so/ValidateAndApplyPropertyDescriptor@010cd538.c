
/* v8::internal::JSReceiver::ValidateAndApplyPropertyDescriptor(v8::internal::Isolate*,
   v8::internal::LookupIterator*, bool, v8::internal::PropertyDescriptor*,
   v8::internal::PropertyDescriptor*, v8::Maybe<v8::internal::ShouldThrow>,
   v8::internal::Handle<v8::internal::Name>) */

undefined2
v8::internal::JSReceiver::ValidateAndApplyPropertyDescriptor
          (Factory *param_1,long param_2,ulong param_3,byte *param_4,byte *param_5,
          undefined8 param_6,long param_7)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  undefined2 uVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  uint uVar11;
  Factory *pFVar12;
  Factory *pFVar13;
  uint uVar14;
  uint uVar15;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_48;
  
  pFVar12 = *(Factory **)(param_4 + 8);
  if (pFVar12 == (Factory *)0x0) {
    uVar14 = *param_4 >> 5 & 1;
    pFVar13 = *(Factory **)(param_4 + 0x10);
    if (pFVar13 == (Factory *)0x0) goto LAB_010cd5a0;
LAB_010cd584:
    uVar15 = 0;
    bVar5 = true;
  }
  else {
    uVar14 = 1;
    pFVar13 = *(Factory **)(param_4 + 0x10);
    if (pFVar13 != (Factory *)0x0) goto LAB_010cd584;
LAB_010cd5a0:
    bVar5 = *(long *)(param_4 + 0x18) != 0;
    if (*(long *)(param_4 + 0x18) == 0 && pFVar12 == (Factory *)0x0) {
      bVar5 = false;
      uVar15 = (uint)((*param_4 & 0x20) == 0);
    }
    else {
      uVar15 = 0;
    }
  }
  bVar1 = *param_5;
  if (((((bVar1 & 0x2a) == 0) && (*(long *)(param_5 + 8) == 0)) && (*(long *)(param_5 + 0x10) == 0))
     && (*(long *)(param_5 + 0x18) == 0)) {
    if ((param_3 & 1) == 0) {
      iVar7 = GetShouldThrow(param_1,param_6);
      if (iVar7 == 1) {
        return 1;
      }
      if ((param_2 != 0) && (param_7 = *(long *)(param_2 + 0x20), param_7 == 0)) {
        param_7 = Factory::SizeToString
                            (*(Factory **)(param_2 + 0x18),*(ulong *)(param_2 + 0x48),true);
        *(long *)(param_2 + 0x20) = param_7;
      }
      uVar10 = 0x30;
      goto LAB_010cd740;
    }
    if (!bVar5) {
      if (param_2 == 0) {
        return 0x101;
      }
      bVar1 = *param_4;
      uVar14 = bVar1 & 0xffffffcf | 0x20;
      if ((bVar1 & 0x20) != 0) {
        uVar14 = (uint)bVar1;
      }
      uVar15 = uVar14 & 0xfc | 2;
      if ((uVar14 & 2) != 0) {
        uVar15 = uVar14;
      }
      uVar4 = uVar15 & 0xfffffff3 | 8;
      if ((uVar15 & 8) != 0) {
        uVar4 = uVar15;
      }
      if ((((bVar1 >> 5 & 1) == 0) || ((uVar14 >> 1 & 1) == 0)) || ((uVar15 >> 3 & 1) == 0)) {
        *param_4 = (byte)uVar4;
      }
      pFVar13 = param_1 + 0xa0;
      if (pFVar12 != (Factory *)0x0) {
        pFVar13 = pFVar12;
      }
      uVar8 = JSObject::DefineOwnPropertyIgnoreAttributes
                        (param_2,pFVar13,
                         ~uVar4 & uVar4 >> 1 & 4 | uVar4 & (uVar4 << 1 ^ 0xffffffff) & 2 |
                         uVar4 >> 5 & (uVar4 >> 4 ^ 0xffffffff) & 1,1,1);
      uVar8 = uVar8 & 0xff;
      goto LAB_010cd8c0;
    }
    if (param_2 == 0) {
      return 0x101;
    }
    bVar1 = *param_4;
    uVar14 = bVar1 & 0xfc | 2;
    if ((bVar1 & 2) != 0) {
      uVar14 = (uint)bVar1;
    }
    uVar15 = uVar14 & 0xfffffff3 | 8;
    if ((uVar14 & 8) != 0) {
      uVar15 = uVar14;
    }
    if (((bVar1 >> 1 & 1) == 0) || ((uVar14 >> 3 & 1) == 0)) {
      *param_4 = (byte)uVar15;
    }
    pFVar12 = param_1 + 0xb0;
    if (pFVar13 != (Factory *)0x0) {
      pFVar12 = pFVar13;
    }
    pFVar13 = param_1 + 0xb0;
    if (*(Factory **)(param_4 + 0x18) != (Factory *)0x0) {
      pFVar13 = *(Factory **)(param_4 + 0x18);
    }
    uVar11 = ~uVar15 & uVar15 >> 1 & 4 | uVar15 & (uVar15 << 1 ^ 0xffffffff) & 2 |
             uVar15 >> 5 & (uVar15 >> 4 ^ 0xffffffff) & 1;
  }
  else {
    bVar2 = *param_4;
    if ((((bVar2 >> 1 & 1) == 0) || (((bVar1 ^ bVar2) & 1) == 0)) &&
       (((bVar2 >> 3 & 1) == 0 || (((bVar1 ^ bVar2) >> 2 & 1) == 0)))) {
      if (pFVar12 == (Factory *)0x0) {
LAB_010cd638:
        if (((bVar2 >> 5 & 1) == 0) ||
           (((*param_5 >> 5 & 1) != 0 && (((bVar2 ^ *param_5) >> 4 & 1) == 0)))) {
          if (*(undefined8 **)(param_4 + 0x10) == (undefined8 *)0x0) {
LAB_010cd664:
            if (*(undefined8 **)(param_4 + 0x18) == (undefined8 *)0x0) {
              return 0x101;
            }
            if (*(undefined8 **)(param_5 + 0x18) != (undefined8 *)0x0) {
              local_70 = **(undefined8 **)(param_5 + 0x18);
              uVar8 = Object::SameValue((Object *)&local_70,**(undefined8 **)(param_4 + 0x18));
              if ((uVar8 & 1) != 0) {
                return 0x101;
              }
            }
          }
          else if (*(undefined8 **)(param_5 + 0x10) != (undefined8 *)0x0) {
            local_68 = **(undefined8 **)(param_5 + 0x10);
            uVar8 = Object::SameValue((Object *)&local_68,**(undefined8 **)(param_4 + 0x10));
            if ((uVar8 & 1) != 0) goto LAB_010cd664;
          }
        }
      }
      else if (*(undefined8 **)(param_5 + 8) != (undefined8 *)0x0) {
        local_48 = **(undefined8 **)(param_5 + 8);
        uVar8 = Object::SameValue((Object *)&local_48,*(undefined8 *)pFVar12);
        if ((uVar8 & 1) != 0) {
          bVar2 = *param_4;
          goto LAB_010cd638;
        }
      }
    }
    bVar1 = *param_5;
    if (((bVar1 >> 2 & 1) == 0) &&
       ((bVar2 = *param_4, (~bVar2 & 0xc) == 0 ||
        (((bVar2 >> 1 & 1) != 0 && ((bVar1 & 1) != (bVar2 & 1))))))) {
LAB_010cd6e4:
      iVar7 = GetShouldThrow(param_1,param_6);
      if (iVar7 == 1) {
        return 1;
      }
      if ((param_2 != 0) && (param_7 = *(long *)(param_2 + 0x20), param_7 == 0)) {
        param_7 = Factory::SizeToString
                            (*(Factory **)(param_2 + 0x18),*(ulong *)(param_2 + 0x48),true);
        *(long *)(param_2 + 0x20) = param_7;
      }
      uVar10 = 0x96;
LAB_010cd740:
      puVar9 = (undefined8 *)Factory::NewTypeError(param_1,uVar10,param_7,0,0);
      Isolate::Throw((Isolate *)param_1,*puVar9,0);
      return 0;
    }
    uVar4 = (uint)(*(undefined8 **)(param_5 + 8) != (undefined8 *)0x0) | (bVar1 & 0x20) >> 5;
    if (uVar15 == 0) {
      if ((uVar14 ^ uVar4) == 1) {
        if ((bVar1 >> 2 & 1) == 0) goto LAB_010cd6e4;
      }
      else if ((uVar14 & uVar4) == 1) {
        if ((bVar1 & 0x14) == 0) {
          if ((~*param_4 & 0x30) == 0) goto LAB_010cd6e4;
          if (*(undefined8 **)(param_4 + 8) != (undefined8 *)0x0) {
            local_48 = **(undefined8 **)(param_4 + 8);
            uVar8 = Object::SameValue((Object *)&local_48,**(undefined8 **)(param_5 + 8));
            goto joined_r0x010cd800;
          }
        }
      }
      else if ((bVar1 >> 2 & 1) == 0) {
        if (*(undefined8 **)(param_4 + 0x18) != (undefined8 *)0x0) {
          local_48 = **(undefined8 **)(param_4 + 0x18);
          uVar8 = Object::SameValue((Object *)&local_48,**(undefined8 **)(param_5 + 0x18));
          if ((uVar8 & 1) == 0) goto LAB_010cd6e4;
        }
        if (*(undefined8 **)(param_4 + 0x10) != (undefined8 *)0x0) {
          local_48 = **(undefined8 **)(param_4 + 0x10);
          uVar8 = Object::SameValue((Object *)&local_48,**(undefined8 **)(param_5 + 0x10));
joined_r0x010cd800:
          if ((uVar8 & 1) == 0) goto LAB_010cd6e4;
        }
      }
    }
    if (param_2 == 0) {
      return 0x101;
    }
    bVar2 = *param_4;
    bVar1 = bVar2;
    if ((bVar2 >> 1 & 1) == 0) {
      bVar1 = *param_5;
    }
    bVar3 = bVar2;
    if ((bVar2 >> 3 & 1) == 0) {
      bVar3 = *param_5;
    }
    uVar11 = (bVar3 & 4 | (bVar1 & 1) << 1) ^ 6;
    if ((uVar14 | uVar15 & uVar4) == 1) {
      if ((bVar2 >> 5 & 1) == 0) {
        bVar2 = *param_5;
      }
      pFVar12 = *(Factory **)(param_4 + 8);
      if (*(Factory **)(param_4 + 8) == (Factory *)0x0) {
        pFVar12 = param_1 + 0xa0;
        if (*(Factory **)(param_5 + 8) != (Factory *)0x0) {
          pFVar12 = *(Factory **)(param_5 + 8);
        }
      }
      uVar6 = JSObject::DefineOwnPropertyIgnoreAttributes
                        (param_2,pFVar12,(bVar2 >> 4 & 1 | uVar11) ^ 1,param_6,1);
      return uVar6;
    }
    pFVar12 = *(Factory **)(param_4 + 0x10);
    if (*(Factory **)(param_4 + 0x10) == (Factory *)0x0) {
      pFVar12 = param_1 + 0xb0;
      if (*(Factory **)(param_5 + 0x10) != (Factory *)0x0) {
        pFVar12 = *(Factory **)(param_5 + 0x10);
      }
    }
    pFVar13 = *(Factory **)(param_4 + 0x18);
    if (*(Factory **)(param_4 + 0x18) == (Factory *)0x0) {
      pFVar13 = param_1 + 0xb0;
      if (*(Factory **)(param_5 + 0x18) != (Factory *)0x0) {
        pFVar13 = *(Factory **)(param_5 + 0x18);
      }
    }
  }
  uVar8 = JSObject::DefineAccessor(param_2,pFVar12,pFVar13,uVar11);
LAB_010cd8c0:
  if (uVar8 != 0) {
    return 0x101;
  }
  return 0;
}

