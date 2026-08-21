
/* spine::Skin::AttachmentMap::put(unsigned long, spine::String const&, spine::Attachment*) */

void __thiscall
spine::Skin::AttachmentMap::put
          (AttachmentMap *this,ulong param_1,String *param_2,Attachment *param_3)

{
  long lVar1;
  void *pvVar2;
  int iVar3;
  long *plVar4;
  Vector<spine::Skin::AttachmentMap::Entry> *pVVar5;
  char *__s1;
  ulong uVar6;
  uint uVar7;
  Vector<spine::Skin::AttachmentMap::Entry> *pVVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  Attachment *this_00;
  undefined8 uVar12;
  char *__s2;
  ulong uVar13;
  undefined **local_90;
  undefined **local_88;
  long local_80;
  void *local_78;
  Attachment *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar13 = *(ulong *)(this + 0x10);
  if (uVar13 <= param_1) {
    local_80 = 0;
    local_78 = (void *)0x0;
    local_90 = &PTR__Vector_01c8f6b0;
    local_88 = (undefined **)0x0;
    uVar6 = param_1 + 1;
    *(ulong *)(this + 0x10) = uVar6;
    if (*(ulong *)(this + 0x18) < uVar6) {
      uVar7 = (uint)((float)uVar6 * 1.75);
      uVar12 = *(undefined8 *)(this + 0x20);
      if (uVar7 < 9) {
        uVar7 = 8;
      }
      *(long *)(this + 0x18) = (long)(int)uVar7;
      plVar4 = (long *)SpineExtension::getInstance();
      uVar12 = (**(code **)(*plVar4 + 0x20))
                         (plVar4,uVar12,
                          -(ulong)(uVar7 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar7 << 5,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                          ,0x52);
      uVar6 = *(ulong *)(this + 0x10);
      *(undefined8 *)(this + 0x20) = uVar12;
    }
    if (uVar13 < uVar6) {
      lVar9 = uVar13 << 5;
      do {
        pVVar5 = SpineObject::operator_new(0x20,(void *)(*(long *)(this + 0x20) + lVar9));
        Vector<spine::Skin::AttachmentMap::Entry>::Vector(pVVar5,(Vector *)&local_90);
        uVar13 = uVar13 + 1;
        lVar9 = lVar9 + 0x20;
      } while (uVar13 < *(ulong *)(this + 0x10));
    }
    Vector<spine::Skin::AttachmentMap::Entry>::~Vector
              ((Vector<spine::Skin::AttachmentMap::Entry> *)&local_90);
  }
  pVVar5 = (Vector<spine::Skin::AttachmentMap::Entry> *)(*(long *)(this + 0x20) + param_1 * 0x20);
  uVar13 = *(ulong *)(pVVar5 + 8);
  if (uVar13 != 0) {
    pVVar8 = pVVar5 + 0x18;
    lVar9 = 0;
    uVar6 = 0;
    __s2 = *(char **)(param_2 + 0x10);
    puVar11 = (undefined8 *)(*(long *)pVVar8 + 0x18);
    lVar10 = *(long *)(param_2 + 8);
    do {
      __s1 = (char *)*puVar11;
      if ((__s1 == __s2) ||
         ((((__s2 != (char *)0x0 && (__s1 != (char *)0x0)) && (puVar11[-1] == lVar10)) &&
          (iVar3 = strcmp(__s1,__s2), iVar3 == 0)))) {
        Attachment::reference(param_3);
        if ((int)uVar6 < 0) goto LAB_00d08e58;
        this_00 = *(Attachment **)(*(long *)pVVar8 + (lVar9 >> 0x20) * 0x28 + 0x20);
        if (this_00 != (Attachment *)0x0) {
          Attachment::dereference(this_00);
          iVar3 = Attachment::getRefCount(this_00);
          if (iVar3 == 0) {
            (**(code **)(*(long *)this_00 + 8))(this_00);
          }
        }
        *(Attachment **)(*(long *)pVVar8 + (lVar9 >> 0x20) * 0x28 + 0x20) = param_3;
        goto LAB_00d08f10;
      }
      uVar6 = uVar6 + 1;
      lVar9 = lVar9 + 0x100000000;
      puVar11 = puVar11 + 5;
    } while (uVar6 < uVar13);
  }
  Attachment::reference(param_3);
LAB_00d08e58:
  local_88 = &PTR__String_01c67868;
  local_90 = (undefined **)param_1;
  if (*(long *)(param_2 + 0x10) == 0) {
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  else {
    local_80 = *(long *)(param_2 + 8);
    lVar9 = local_80 + 1;
    plVar4 = (long *)SpineExtension::getInstance();
    local_78 = (void *)(**(code **)(*plVar4 + 0x18))
                                 (plVar4,lVar9,
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                  ,0x47);
    memcpy(local_78,*(void **)(param_2 + 0x10),*(long *)(param_2 + 8) + 1);
  }
  local_70 = param_3;
  Vector<spine::Skin::AttachmentMap::Entry>::add(pVVar5,(Entry *)&local_90);
  pvVar2 = local_78;
  local_88 = &PTR__String_01c67868;
  if (local_78 != (void *)0x0) {
    plVar4 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar4 + 0x28))
              (plVar4,pvVar2,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",0xc9
              );
  }
  SpineObject::~SpineObject((SpineObject *)&local_88);
LAB_00d08f10:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

