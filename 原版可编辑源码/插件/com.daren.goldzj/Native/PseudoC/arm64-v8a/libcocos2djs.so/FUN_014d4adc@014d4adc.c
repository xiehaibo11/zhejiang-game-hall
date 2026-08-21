
ulong FUN_014d4adc(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  undefined8 uVar2;
  long lVar3;
  ulong *puVar4;
  Isolate *pIVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  char *local_60;
  undefined8 uStack_58;
  
  uVar2 = *(undefined8 *)(param_3 + 0x95a0);
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar8 = *param_2;
  if ((uVar8 & 1) != 0) {
    if (((int)uVar8 != *(int *)(param_3 + 0xb0)) && ((int)uVar8 != *(int *)(param_3 + 0xa0))) {
      if (0x3f < *(ushort *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)))
      goto LAB_014d4b24;
      puVar4 = param_2;
      if (param_2 != (ulong *)0x0) goto LAB_014d4b38;
      goto LAB_014d4dcc;
    }
    uStack_58 = __strlen_chk("String.prototype.normalize",0x1b);
    local_60 = "String.prototype.normalize";
    lVar6 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_60,0);
    if (lVar6 == 0) goto LAB_014d4e34;
    puVar7 = (undefined8 *)v8::internal::Factory::NewTypeError((Factory *)param_3,0x1a,lVar6,0,0);
LAB_014d4d80:
    uVar8 = v8::internal::Isolate::Throw(param_3,*puVar7,0);
    goto LAB_014d4dd0;
  }
LAB_014d4b24:
  puVar4 = (ulong *)v8::internal::Object::ConvertToString(param_3,param_2);
  if (puVar4 == (ulong *)0x0) {
LAB_014d4dcc:
    uVar8 = *(ulong *)(param_3 + 0x180);
  }
  else {
LAB_014d4b38:
    pIVar5 = (Isolate *)(param_2 + -1);
    if (param_1 < 6) {
      pIVar5 = param_3 + 0xa0;
    }
    uVar8 = *(ulong *)pIVar5;
    if ((uVar8 & 1) == 0) {
LAB_014d4b50:
      pIVar5 = (Isolate *)v8::internal::Object::ConvertToString(param_3,pIVar5);
LAB_014d4b60:
      if (pIVar5 == (Isolate *)0x0) goto LAB_014d4dcc;
      pIVar1 = param_3 + 0x850;
      if (((((pIVar1 != pIVar5) && (uVar8 = *(ulong *)pIVar5, uVar8 != *(ulong *)pIVar1)) &&
           (((*(ushort *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) < 0x20 &&
             (*(ushort *)
               ((*(ulong *)pIVar1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*(ulong *)pIVar1 - 1)
               ) < 0x20)) ||
            (uVar8 = v8::internal::String::SlowEquals(param_3,pIVar5), (uVar8 & 1) == 0)))) &&
          ((pIVar1 = param_3 + 0x858, pIVar1 != pIVar5 &&
           (uVar8 = *(ulong *)pIVar5, uVar8 != *(ulong *)pIVar1)))) &&
         ((((*(ushort *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) < 0x20 &&
            (*(ushort *)
              ((*(ulong *)pIVar1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*(ulong *)pIVar1 - 1))
             < 0x20)) ||
           (uVar8 = v8::internal::String::SlowEquals(param_3,pIVar5), (uVar8 & 1) == 0)) &&
          (((pIVar1 = param_3 + 0x860, pIVar1 != pIVar5 &&
            (uVar8 = *(ulong *)pIVar5, uVar8 != *(ulong *)pIVar1)) &&
           ((((*(ushort *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) < 0x20 &&
              (*(ushort *)
                ((*(ulong *)pIVar1 & 0xffffffff00000000 | 7) +
                (ulong)*(uint *)(*(ulong *)pIVar1 - 1)) < 0x20)) ||
             (uVar8 = v8::internal::String::SlowEquals(param_3,pIVar5), (uVar8 & 1) == 0)) &&
            (((pIVar1 = param_3 + 0x868, pIVar1 != pIVar5 &&
              (uVar8 = *(ulong *)pIVar5, uVar8 != *(ulong *)pIVar1)) &&
             (((*(ushort *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) < 0x20
               && (*(ushort *)
                    ((*(ulong *)pIVar1 & 0xffffffff00000000 | 7) +
                    (ulong)*(uint *)(*(ulong *)pIVar1 - 1)) < 0x20)) ||
              (uVar8 = v8::internal::String::SlowEquals(param_3,pIVar5), (uVar8 & 1) == 0)))))))))))
         ) {
        local_60 = "NFC, NFD, NFKC, NFKD";
        uStack_58 = 0x14;
        lVar6 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_60,0);
        if (lVar6 == 0) {
LAB_014d4e34:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","(location_) != nullptr");
        }
        puVar7 = (undefined8 *)
                 v8::internal::Factory::NewRangeError((Factory *)param_3,0xd2,lVar6,0,0);
        goto LAB_014d4d80;
      }
    }
    else if ((int)uVar8 != *(int *)(param_3 + 0xa0)) {
      if (0x3f < *(ushort *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)))
      goto LAB_014d4b50;
      goto LAB_014d4b60;
    }
    uVar8 = *puVar4;
  }
LAB_014d4dd0:
  *(undefined8 *)(param_3 + 0x95a0) = uVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar3) {
    *(long *)(param_3 + 0x95a8) = lVar3;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar8;
}

