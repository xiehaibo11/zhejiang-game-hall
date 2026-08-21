
/* v8::internal::ObjectLiteral::BuildBoilerplateDescription(v8::internal::Isolate*) */

void __thiscall
v8::internal::ObjectLiteral::BuildBoilerplateDescription(ObjectLiteral *this,Isolate *param_1)

{
  Isolate *pIVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  ObjectLiteral *this_00;
  ulong uVar5;
  Literal *this_01;
  double dVar6;
  int iVar7;
  ulong *puVar8;
  ulong uVar9;
  Isolate *pIVar10;
  int iVar11;
  bool bVar12;
  long lVar13;
  undefined8 *puVar14;
  long local_70;
  uint local_64;
  
  if (*(long *)(this + 0x10) == 0) {
    iVar7 = *(int *)(this + 0x24);
    if (iVar7 < 1) {
      bVar12 = false;
      iVar11 = 0;
    }
    else {
      lVar13 = 0;
      iVar11 = 0;
      bVar12 = false;
      do {
        puVar8 = *(ulong **)(*(long *)(this + 0x18) + lVar13 * 8);
        if ((char)puVar8[2] == '\x05') {
          bVar12 = true;
        }
        else {
          uVar9 = *puVar8;
          if ((uVar9 & 3) == 0) {
            uVar9 = uVar9 & 0xfffffffffffffffc;
            if ((*(uint *)(uVar9 + 4) & 0x3f) != 0x29) {
              uVar9 = 0;
            }
            if ((*(uint *)(uVar9 + 4) & 0x780) == 0x180) {
              uVar3 = AstRawString::AsArrayIndex(*(AstRawString **)(uVar9 + 8),(uint *)&local_70);
              iVar7 = *(int *)(this + 0x24);
              iVar11 = iVar11 + (uVar3 & 1);
            }
            else {
              iVar11 = iVar11 + 1;
            }
          }
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 < iVar7);
    }
    plVar4 = (long *)Factory::NewObjectBoilerplateDescription
                               ((Factory *)param_1,*(int *)(this + 0xc),iVar7,iVar11,bVar12);
    iVar7 = *(int *)(this + 0x24);
    if (0 < iVar7) {
      lVar13 = 0;
      iVar11 = 0;
      pIVar1 = param_1 + 0x98;
      do {
        puVar8 = *(ulong **)(*(long *)(this + 0x18) + lVar13 * 8);
        if ((char)puVar8[2] != '\x05') {
          if (iVar11 == *(int *)(this + 0xc)) break;
          this_00 = (ObjectLiteral *)puVar8[1];
          if ((this_00 != (ObjectLiteral *)0x0) && ((*(uint *)(this_00 + 4) + 0x2b & 0x3f) < 3)) {
            uVar3 = *(uint *)(this_00 + 4) & 0x3f;
            if (uVar3 == 0x16) {
              BuildBoilerplateDescription(this_00,param_1);
            }
            else if (uVar3 == 0x17) {
              ArrayLiteral::BuildBoilerplateDescription((ArrayLiteral *)this_00,param_1);
            }
          }
          uVar9 = *puVar8 & 0xfffffffffffffffc;
          local_64 = 0;
          if ((*(uint *)(uVar9 + 4) & 0x3f) != 0x29) {
            uVar9 = 0;
          }
          uVar3 = *(uint *)(uVar9 + 4) >> 7 & 0xf;
          if (uVar3 == 0) {
            uVar3 = *(uint *)(uVar9 + 8);
            uVar2 = uVar3;
            if ((int)uVar3 < 0) goto LAB_01497688;
LAB_01497678:
            local_64 = uVar2;
            puVar14 = (undefined8 *)Factory::NewNumberFromUint((Factory *)param_1,uVar3);
          }
          else {
            if (uVar3 == 1) {
              dVar6 = *(double *)(uVar9 + 8) + 4503599627370496.0;
              if (((ulong)dVar6 >> 0x20 == 0x43300000) &&
                 (local_64 = SUB84(dVar6,0),
                 *(double *)(uVar9 + 8) == (double)((ulong)dVar6 & 0xffffffff)))
              goto joined_r0x01497674;
            }
            else if ((uVar3 == 3) &&
                    (uVar5 = AstRawString::AsArrayIndex(*(AstRawString **)(uVar9 + 8),&local_64),
                    (uVar5 & 1) != 0)) {
              dVar6 = (double)(ulong)local_64;
joined_r0x01497674:
              uVar3 = SUB84(dVar6,0);
              uVar2 = local_64;
              if (local_64 != 0xffffffff) goto LAB_01497678;
            }
LAB_01497688:
            puVar14 = (undefined8 *)**(undefined8 **)(uVar9 + 8);
          }
          this_01 = (Literal *)puVar8[1];
          uVar2 = *(uint *)(this_01 + 4);
          uVar3 = uVar2 & 0x3f;
          if (uVar3 == 0x29) {
            pIVar10 = (Isolate *)Literal::BuildValue(this_01,param_1);
          }
          else {
            pIVar10 = pIVar1;
            if (((uVar2 + 0x2b & 0x3f) < 3) &&
               (((uVar3 == 0x16 || (uVar3 == 0x17)) && ((uVar2 >> 8 & 1) != 0)))) {
              pIVar10 = *(Isolate **)(this_01 + 0x10);
            }
          }
          local_70 = *plVar4;
          ObjectBoilerplateDescription::set_key_value
                    ((ObjectBoilerplateDescription *)&local_70,iVar11,*puVar14,
                     *(undefined8 *)pIVar10);
          iVar7 = *(int *)(this + 0x24);
          iVar11 = iVar11 + 1;
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 < iVar7);
    }
    *(uint *)(*plVar4 + 7) = *(uint *)(this + 4) >> 7 & 0x30;
    *(long **)(this + 0x10) = plVar4;
  }
  return;
}

