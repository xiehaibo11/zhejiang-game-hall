
/* bool spine_Vector_T_to_seval<unsigned short>(spine::Vector<unsigned short> const&, se::Value*) */

bool spine_Vector_T_to_seval<unsigned_short>(Vector *param_1,Value *param_2)

{
  long lVar1;
  ushort *puVar2;
  Object *pOVar3;
  long *plVar4;
  ulong uVar5;
  ushort *puVar6;
  ulong uVar7;
  ushort *puVar8;
  ushort *puVar9;
  ulong uVar10;
  bool bVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined **local_80;
  ulong local_78;
  long local_70;
  ushort *local_68;
  Object *local_60;
  Value aVStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pOVar3 = (Object *)se::Object::createArrayObject(*(ulong *)(param_1 + 8));
  se::HandleObject::HandleObject((HandleObject *)&local_60,pOVar3);
  local_78 = *(ulong *)(param_1 + 8);
  local_80 = &PTR__Vector_01c8d128;
  lVar13 = *(long *)(param_1 + 0x10);
  local_68 = (ushort *)0x0;
  local_70 = lVar13;
  if (lVar13 == 0) {
    iVar12 = (int)local_78;
    uVar10 = local_78;
    pOVar3 = local_60;
joined_r0x00c87ba4:
    local_78 = uVar10;
    if (iVar12 != 0) {
      local_60 = pOVar3;
      se::Value::Value(aVStack_58,*local_68);
      uVar7 = se::Object::setArrayElement(pOVar3,0,aVStack_58);
      se::Value::~Value(aVStack_58);
      if ((uVar7 & 1) != 0) {
        uVar7 = 1;
        do {
          pOVar3 = local_60;
          if ((uVar10 & 0xffffffff) <= uVar7) goto LAB_00c87ca0;
          se::Value::Value(aVStack_58,local_68[uVar7]);
          uVar5 = se::Object::setArrayElement(pOVar3,(uint)uVar7,aVStack_58);
          se::Value::~Value(aVStack_58);
          uVar7 = uVar7 + 1;
        } while ((uVar5 & 1) != 0);
      }
      se::Value::setUndefined(param_2);
      bVar11 = false;
      goto LAB_00c87cb4;
    }
  }
  else {
    plVar4 = (long *)spine::SpineExtension::getInstance();
    local_68 = (ushort *)
               (**(code **)(*plVar4 + 0x18))
                         (plVar4,lVar13 << 1,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                          ,0xc5);
    if (local_78 != 0) {
      puVar6 = *(ushort **)(param_1 + 0x18);
      if (local_78 < 0x10) {
        uVar7 = 0;
      }
      else {
        if ((puVar6 + local_78 <= local_68) || (local_68 + local_78 <= puVar6)) {
          uVar7 = local_78 & 0xfffffffffffffff0;
          puVar8 = local_68 + 8;
          puVar9 = puVar6 + 8;
          uVar10 = uVar7;
          do {
            puVar2 = puVar9 + -4;
            uVar14 = *(undefined8 *)(puVar9 + -8);
            uVar16 = *(undefined8 *)(puVar9 + 4);
            uVar15 = *(undefined8 *)puVar9;
            uVar10 = uVar10 - 0x10;
            puVar9 = puVar9 + 0x10;
            *(undefined8 *)(puVar8 + -4) = *(undefined8 *)puVar2;
            *(undefined8 *)(puVar8 + -8) = uVar14;
            *(undefined8 *)(puVar8 + 4) = uVar16;
            *(undefined8 *)puVar8 = uVar15;
            puVar8 = puVar8 + 0x10;
            if (uVar10 == 0) goto joined_r0x00c87bfc;
          } while( true );
        }
        uVar7 = 0;
      }
      do {
        local_68[uVar7] = puVar6[uVar7];
        uVar7 = uVar7 + 1;
joined_r0x00c87bfc:
      } while (local_78 != uVar7);
      iVar12 = (int)local_78;
      uVar10 = local_78;
      pOVar3 = local_60;
      goto joined_r0x00c87ba4;
    }
  }
LAB_00c87ca0:
  se::Value::setObject(param_2,(HandleObject *)&local_60,false);
  bVar11 = true;
LAB_00c87cb4:
  puVar6 = local_68;
  local_80 = &PTR__Vector_01c8d128;
  local_78 = 0;
  if (local_68 != (ushort *)0x0) {
    plVar4 = (long *)spine::SpineExtension::getInstance();
    (**(code **)(*plVar4 + 0x28))
              (plVar4,puVar6,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  spine::SpineObject::~SpineObject((SpineObject *)&local_80);
  se::HandleObject::~HandleObject((HandleObject *)&local_60);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar11;
}

