
/* v8::internal::Heap::IterateStrongRoots(v8::internal::RootVisitor*, v8::internal::VisitMode) */

void __thiscall v8::internal::Heap::IterateStrongRoots(Heap *this,RootVisitor *param_1,int param_3)

{
  MicrotaskQueue *pMVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  MicrotaskQueue *this_00;
  Heap *pHVar5;
  MicrotaskQueue *pMVar6;
  undefined **local_50;
  Heap *pHStack_48;
  
  (**(code **)(*(long *)param_1 + 0x10))(param_1,3,0,this + -0x7a38,this + -0x7880);
  (**(code **)(*(long *)param_1 + 0x20))(param_1,3);
  Bootstrapper::Iterate(*(Bootstrapper **)(*(long *)(this + 0x30) + 0x9508),param_1);
  (**(code **)(*(long *)param_1 + 0x20))(param_1,5);
  Isolate::Iterate(*(Isolate **)(this + 0x30),param_1);
  (**(code **)(*(long *)param_1 + 0x20))(param_1,6);
  Relocatable::Iterate(*(Isolate **)(this + 0x30),param_1);
  (**(code **)(*(long *)param_1 + 0x20))(param_1,7);
  Debug::Iterate(*(Debug **)(*(long *)(this + 0x30) + 0xb6c8),param_1);
  (**(code **)(*(long *)param_1 + 0x20))(param_1,8);
  CompilationCache::Iterate(*(CompilationCache **)(*(long *)(this + 0x30) + 0x9518),param_1);
  (**(code **)(*(long *)param_1 + 0x20))(param_1,9);
  local_50 = &PTR__RootVisitor_01ca7a20;
  pHStack_48 = this;
  HandleScopeImplementer::Iterate
            (*(HandleScopeImplementer **)(*(long *)(this + 0x30) + 0x95c0),(RootVisitor *)&local_50)
  ;
  HandleScopeImplementer::Iterate
            (*(HandleScopeImplementer **)(*(long *)(this + 0x30) + 0x95c0),param_1);
  Isolate::IterateDeferredHandles(*(Isolate **)(this + 0x30),(RootVisitor *)&local_50);
  Isolate::IterateDeferredHandles(*(Isolate **)(this + 0x30),param_1);
  (**(code **)(*(long *)param_1 + 0x20))(param_1,10);
  if (param_3 == 1) goto switchD_00f9607c_caseD_1;
  if (param_3 == 2) {
switchD_00f9607c_caseD_2:
    GlobalHandles::IterateAllYoungRoots
              (*(GlobalHandles **)(*(long *)(this + 0x30) + 0x95e0),param_1);
    goto switchD_00f9607c_default;
  }
  if (param_3 == 3) {
switchD_00f9607c_caseD_1:
    GlobalHandles::IterateYoungStrongAndDependentRoots
              (*(GlobalHandles **)(*(long *)(this + 0x30) + 0x95e0),param_1);
  }
  else {
    lVar3 = 0;
    pHVar5 = this + -0x2df8;
    do {
      uVar2 = Builtins::name((int)lVar3);
      (**(code **)(*(long *)param_1 + 0x18))(param_1,0xb,uVar2,pHVar5);
      lVar3 = lVar3 + 1;
      pHVar5 = pHVar5 + 8;
    } while (lVar3 != 0x5bc);
    (**(code **)(*(long *)param_1 + 0x20))(param_1,0xb);
    switch(param_3) {
    case 0:
    case 4:
      GlobalHandles::IterateAllRoots(*(GlobalHandles **)(*(long *)(this + 0x30) + 0x95e0),param_1);
      break;
    case 1:
    case 3:
      goto switchD_00f9607c_caseD_1;
    case 2:
      goto switchD_00f9607c_caseD_2;
    case 5:
      GlobalHandles::IterateStrongRoots
                (*(GlobalHandles **)(*(long *)(this + 0x30) + 0x95e0),param_1);
    }
  }
switchD_00f9607c_default:
  (**(code **)(*(long *)param_1 + 0x20))(param_1,0xc);
  if (param_3 != 6) {
    if (param_3 - 1U < 3) {
      EternalHandles::IterateYoungRoots
                (*(EternalHandles **)(*(long *)(this + 0x30) + 0x95e8),param_1);
    }
    else {
      EternalHandles::IterateAllRoots(*(EternalHandles **)(*(long *)(this + 0x30) + 0x95e8),param_1)
      ;
    }
  }
  (**(code **)(*(long *)param_1 + 0x20))(param_1,0xd);
  ThreadManager::Iterate(*(ThreadManager **)(*(long *)(this + 0x30) + 0x95f0),param_1);
  (**(code **)(*(long *)param_1 + 0x20))(param_1,0xe);
  for (puVar4 = *(undefined8 **)(this + 0x878); puVar4 != (undefined8 *)0x0;
      puVar4 = (undefined8 *)puVar4[2]) {
    (**(code **)(*(long *)param_1 + 0x10))(param_1,0xf,0,*puVar4,puVar4[1]);
  }
  (**(code **)(*(long *)param_1 + 0x20))(param_1,0xf);
  pMVar6 = *(MicrotaskQueue **)(*(long *)(this + 0x30) + 0xb7c0);
  this_00 = pMVar6;
  if (pMVar6 != (MicrotaskQueue *)0x0) {
    do {
      MicrotaskQueue::IterateMicrotasks(this_00,param_1);
      pMVar1 = this_00 + 0x30;
      this_00 = *(MicrotaskQueue **)pMVar1;
    } while (*(MicrotaskQueue **)pMVar1 != pMVar6);
  }
  if (param_3 != 6) {
    SerializerDeserializer::Iterate(*(Isolate **)(this + 0x30),param_1);
    (**(code **)(*(long *)param_1 + 0x20))(param_1,0x12);
  }
  return;
}

