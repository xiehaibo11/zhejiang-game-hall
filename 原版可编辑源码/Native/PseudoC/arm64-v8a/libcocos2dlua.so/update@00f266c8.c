
/* cocos2d::Node::update(float) */

void __thiscall cocos2d::Node::update(Node *this,float param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ComponentContainer *this_00;
  undefined4 local_58 [2];
  int *local_50;
  int local_48;
  float local_44;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(this + 0x204) != 0) {
    local_50 = &local_48;
    local_40 = 0;
    local_58[0] = 3;
    local_48 = *(int *)(this + 0x204);
    local_44 = param_1;
    puVar2 = (undefined8 *)ScriptEngineManager::getInstance();
    (**(code **)(*(long *)*puVar2 + 0x78))((long *)*puVar2,local_58);
  }
  this_00 = *(ComponentContainer **)(this + 0x210);
  if ((this_00 != (ComponentContainer *)0x0) && (*(long *)(this_00 + 0x18) != 0)) {
    ComponentContainer::visit(this_00,param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

