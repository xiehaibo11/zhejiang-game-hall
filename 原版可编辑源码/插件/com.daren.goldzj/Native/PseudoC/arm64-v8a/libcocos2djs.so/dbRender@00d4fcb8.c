
/* dragonBones::CCArmatureDisplay::dbRender() */

void __thiscall dragonBones::CCArmatureDisplay::dbRender(CCArmatureDisplay *this)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  MiddlewareManager *this_00;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  IOTypedArray *pIVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  if ((*(NodeProxy **)(this + 0xa0) != (NodeProxy *)0x0) && (*(long *)(this + 0xa8) != 0)) {
    plVar4 = (long *)cocos2d::renderer::NodeProxy::getAssembler(*(NodeProxy **)(this + 0xa0));
    *(long **)(this + 0xb0) = plVar4;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))();
      *(byte *)(*(long *)(this + 0xb0) + 0x28) = (byte)this[0x68] ^ 1;
      if (*(long *)(*(long *)(this + 0x10) + 0x30) == 0) {
        if (cocos2d::middleware::MiddlewareManager::_instance == (MiddlewareManager *)0x0) {
          this_00 = operator_new(0x50);
          cocos2d::middleware::MiddlewareManager::MiddlewareManager(this_00);
          cocos2d::middleware::MiddlewareManager::_instance = this_00;
        }
        if (*cocos2d::middleware::MiddlewareManager::_instance != (MiddlewareManager)0x0) {
          *(undefined8 *)(this + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(this + 0x60) = 0;
          *(undefined8 *)(this + 0x58) = 0xffffffff;
          *(undefined4 *)(this + 0x50) = 0xffffffff;
          traverseArmature(this,*(Armature **)(this + 0x10),1.0);
          if (*(int *)(this + 0x58) != -1) {
            (**(code **)(**(long **)(this + 0xb0) + 0x28))
                      (*(long **)(this + 0xb0),(long)*(int *)(this + 100) + -1,*(int *)(this + 0x58)
                       ,*(undefined4 *)(this + 0x5c));
          }
          if (*(RealTimeAttachUtil **)(this + 0xb8) != (RealTimeAttachUtil *)0x0) {
            RealTimeAttachUtil::syncAttachedNode
                      (*(RealTimeAttachUtil **)(this + 0xb8),*(NodeProxy **)(this + 0xa0));
          }
          if (this[0xc] != (CCArmatureDisplay)0x0) {
            pIVar12 = *(IOTypedArray **)(this + 0x30);
            if (pIVar12 == (IOTypedArray *)0x0) {
              pIVar12 = operator_new(0xc0);
              cocos2d::middleware::IOTypedArray::IOTypedArray(pIVar12,8,0x64000,0);
              *(IOTypedArray **)(this + 0x30) = pIVar12;
            }
            *(undefined8 *)(pIVar12 + 0x18) = 0;
            *(undefined8 *)(pIVar12 + 0x20) = 0;
            lVar5 = *(long *)(this + 0x30);
            uVar2 = *(ulong *)(lVar5 + 0x10);
            uVar8 = *(ulong *)(lVar5 + 0x18);
            lVar3 = *(long *)(*(long *)(this + 0x10) + 0x60);
            uVar9 = uVar8 + 4;
            lVar10 = *(long *)(*(long *)(this + 0x10) + 0x68) - lVar3;
            if (uVar2 < uVar9) {
              *(undefined1 *)(lVar5 + 0x28) = 1;
            }
            else {
              *(float *)(*(long *)(lVar5 + 8) + uVar8) = (float)(ulong)(lVar10 >> 1);
              *(ulong *)(lVar5 + 0x18) = uVar9;
              uVar8 = uVar9;
            }
            if (lVar10 != 0) {
              uVar9 = 0;
              do {
                lVar11 = *(long *)(lVar3 + uVar9 * 8);
                fVar15 = *(float *)(lVar11 + 0x20);
                fVar13 = *(float *)(lVar11 + 0x24);
                fVar16 = *(float *)(lVar11 + 0x10);
                fVar14 = *(float *)(lVar11 + 0x14);
                fVar17 = *(float *)(*(long *)(lVar11 + 0xa8) + 0x14);
                uVar1 = uVar8 + 4;
                if (uVar2 < uVar1) {
                  *(undefined1 *)(lVar5 + 0x28) = 1;
                  uVar6 = uVar8;
                  uVar7 = uVar1;
                  if (uVar1 <= uVar2) goto LAB_00d4fe74;
LAB_00d4fea8:
                  *(undefined1 *)(lVar5 + 0x28) = 1;
                }
                else {
                  *(float *)(*(long *)(lVar5 + 8) + uVar8) = fVar15;
                  uVar7 = uVar8 + 8;
                  *(ulong *)(lVar5 + 0x18) = uVar1;
                  uVar8 = uVar1;
                  uVar6 = uVar1;
                  if (uVar2 < uVar7) goto LAB_00d4fea8;
LAB_00d4fe74:
                  uVar8 = uVar7;
                  *(float *)(*(long *)(lVar5 + 8) + uVar6) = fVar13;
                  uVar7 = uVar8 + 4;
                  *(ulong *)(lVar5 + 0x18) = uVar8;
                }
                if (fVar17 <= 5.0) {
                  fVar17 = 5.0;
                }
                if (uVar2 < uVar7) {
                  *(undefined1 *)(lVar5 + 0x28) = 1;
                  uVar7 = uVar8;
                }
                else {
                  *(float *)(*(long *)(lVar5 + 8) + uVar8) = fVar15 + fVar17 * fVar16;
                  *(ulong *)(lVar5 + 0x18) = uVar7;
                }
                uVar8 = uVar7 + 4;
                if (uVar2 < uVar8) {
                  *(undefined1 *)(lVar5 + 0x28) = 1;
                  uVar8 = uVar7;
                }
                else {
                  *(float *)(*(long *)(lVar5 + 8) + uVar7) = fVar13 + fVar17 * fVar14;
                  *(ulong *)(lVar5 + 0x18) = uVar8;
                }
                uVar9 = uVar9 + 1;
              } while (uVar9 < (ulong)(lVar10 >> 3));
            }
            if (*(char *)(lVar5 + 0x28) != '\0') {
              if (uVar2 < 4) {
                *(undefined1 *)(lVar5 + 0x28) = 1;
              }
              else {
                **(undefined4 **)(lVar5 + 8) = 0;
              }
              cocos2d::log(
                          "Dragonbones debug data is too large,debug buffer has no space to put in it!!!!!!!!!!"
                          );
              cocos2d::log("You can adjust MAX_DEBUG_BUFFER_SIZE in MiddlewareMacro");
              return;
            }
          }
        }
      }
    }
  }
  return;
}

