
/* cocos2d::Node::addChildHelper(cocos2d::Node*, int, int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool) */

void __thiscall
cocos2d::Node::addChildHelper
          (Node *this,Node *param_1,int param_2,int param_3,basic_string *param_4,bool param_5)

{
  undefined8 *puVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  Node *local_70;
  long local_68;
  
                    /* catch() { ... } // from try @ 00f251a8 with catch @ 00f25248 */
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  puVar4 = *(undefined8 **)(this + 0x178);
  puVar1 = *(undefined8 **)(this + 0x180);
  puVar5 = puVar1;
                    /* try { // try from 00f2528c to 010254df has its CatchHandler @ 00f2528c
                       catch() { ... } // from try @ 00f2528c with catch @ 00f2528c
                       catch() { ... } // from try @ 00f254e8 with catch @ 00f2528c
                       catch() { ... } // from try @ 00f25734 with catch @ 00f2528c */
  if ((puVar4 == puVar1) &&
     (puVar5 = puVar4, (ulong)(*(long *)(this + 0x188) - (long)puVar4 >> 3) < 4)) {
    lVar6 = (long)puVar1 - (long)puVar4;
    pvVar3 = operator_new(0x20);
    if (0 < lVar6) {
      __memcpy_chk(pvVar3,puVar4,lVar6,0x20);
      puVar4 = *(undefined8 **)(this + 0x178);
    }
    *(void **)(this + 0x178) = pvVar3;
    *(undefined8 **)(this + 0x180) = (undefined8 *)((long)pvVar3 + lVar6);
    *(long *)(this + 0x188) = (long)pvVar3 + 0x20;
    puVar5 = (undefined8 *)((long)pvVar3 + lVar6);
    if (puVar4 != (undefined8 *)0x0) {
      operator_delete(puVar4);
      puVar5 = *(undefined8 **)(this + 0x180);
    }
  }
  this[0x161] = (Node)0x1;
  this[0x1fb] = (Node)0x1;
  local_70 = param_1;
  if (puVar5 == *(undefined8 **)(this + 0x188)) {
    std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>::
    __push_back_slow_path<cocos2d::Node*const&>
              ((vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>> *)(this + 0x178),
               &local_70);
  }
  else {
    *puVar5 = param_1;
    *(undefined8 **)(this + 0x180) = puVar5 + 1;
  }
  Ref::retain((Ref *)local_70);
  (**(code **)(*(long *)param_1 + 0x28))(param_1,param_2);
  if (param_5) {
    (**(code **)(*(long *)param_1 + 0x2c0))(param_1,param_3);
  }
  else {
    (**(code **)(*(long *)param_1 + 0x2d0))(param_1,param_4);
  }
  (**(code **)(*(long *)param_1 + 600))(param_1,this);
  s_globalOrderOfArrival = s_globalOrderOfArrival + 1;
  *(int *)(param_1 + 0x168) = s_globalOrderOfArrival;
  if ((this[0x1f8] != (Node)0x0) &&
     ((**(code **)(*(long *)param_1 + 800))(param_1), this[0x1fc] != (Node)0x0)) {
    (**(code **)(*(long *)param_1 + 0x328))(param_1);
  }
  if (this[0x220] != (Node)0x0) {
    (**(code **)(*(long *)this + 0x518))(this);
  }
  if (this[0x221] != (Node)0x0) {
    (**(code **)(*(long *)this + 0x508))(this);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

