
/* v8::internal::compiler::JSGraph::GetCachedNodes(v8::internal::ZoneVector<v8::internal::compiler::Node*>*)
    */

void __thiscall v8::internal::compiler::JSGraph::GetCachedNodes(JSGraph *this,ZoneVector *param_1)

{
  long lVar1;
  
  CommonNodeCache::GetCachedNodes((CommonNodeCache *)(this + 0x18),param_1);
  if (*(long *)(this + 0x180) == 0) {
LAB_0170ae24:
    lVar1 = *(long *)(this + 0x188);
    if (lVar1 == 0) goto LAB_0170ae78;
LAB_0170ae2c:
    if (*(long **)(param_1 + 8) == *(long **)(param_1 + 0x10)) {
      std::__ndk1::
      vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
      ::__push_back_slow_path<v8::internal::compiler::Node*const&>
                ((vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                  *)param_1,(Node **)(this + 0x188));
      goto LAB_0170ae78;
    }
    **(long **)(param_1 + 8) = lVar1;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    lVar1 = *(long *)(this + 400);
    if (lVar1 != 0) goto LAB_0170ae80;
LAB_0170ae9c:
    lVar1 = *(long *)(this + 0x198);
    if (lVar1 == 0) goto LAB_0170aef0;
LAB_0170aea4:
    if (*(long **)(param_1 + 8) == *(long **)(param_1 + 0x10)) {
      std::__ndk1::
      vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
      ::__push_back_slow_path<v8::internal::compiler::Node*const&>
                ((vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                  *)param_1,(Node **)(this + 0x198));
      goto LAB_0170aef0;
    }
    **(long **)(param_1 + 8) = lVar1;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    lVar1 = *(long *)(this + 0x1a0);
    if (lVar1 != 0) goto LAB_0170aef8;
LAB_0170af14:
    lVar1 = *(long *)(this + 0x1a8);
    if (lVar1 == 0) goto LAB_0170af68;
LAB_0170af1c:
    if (*(long **)(param_1 + 8) == *(long **)(param_1 + 0x10)) {
      std::__ndk1::
      vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
      ::__push_back_slow_path<v8::internal::compiler::Node*const&>
                ((vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                  *)param_1,(Node **)(this + 0x1a8));
      goto LAB_0170af68;
    }
    **(long **)(param_1 + 8) = lVar1;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    lVar1 = *(long *)(this + 0x1b0);
    if (lVar1 != 0) goto LAB_0170af70;
LAB_0170af8c:
    lVar1 = *(long *)(this + 0x1b8);
    if (lVar1 == 0) goto LAB_0170afe0;
LAB_0170af94:
    if (*(long **)(param_1 + 8) == *(long **)(param_1 + 0x10)) {
      std::__ndk1::
      vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
      ::__push_back_slow_path<v8::internal::compiler::Node*const&>
                ((vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                  *)param_1,(Node **)(this + 0x1b8));
      goto LAB_0170afe0;
    }
    **(long **)(param_1 + 8) = lVar1;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    lVar1 = *(long *)(this + 0x1c0);
    if (lVar1 != 0) goto LAB_0170afe8;
LAB_0170b004:
    lVar1 = *(long *)(this + 0x1c8);
    if (lVar1 == 0) goto LAB_0170b058;
LAB_0170b00c:
    if (*(long **)(param_1 + 8) == *(long **)(param_1 + 0x10)) {
      std::__ndk1::
      vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
      ::__push_back_slow_path<v8::internal::compiler::Node*const&>
                ((vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                  *)param_1,(Node **)(this + 0x1c8));
      goto LAB_0170b058;
    }
    **(long **)(param_1 + 8) = lVar1;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    lVar1 = *(long *)(this + 0x1d0);
    if (lVar1 != 0) goto LAB_0170b060;
LAB_0170b07c:
    lVar1 = *(long *)(this + 0x1d8);
    if (lVar1 == 0) goto LAB_0170b0d0;
LAB_0170b084:
    if (*(long **)(param_1 + 8) == *(long **)(param_1 + 0x10)) {
      std::__ndk1::
      vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
      ::__push_back_slow_path<v8::internal::compiler::Node*const&>
                ((vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                  *)param_1,(Node **)(this + 0x1d8));
      goto LAB_0170b0d0;
    }
    **(long **)(param_1 + 8) = lVar1;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    lVar1 = *(long *)(this + 0x1e0);
    if (lVar1 != 0) goto LAB_0170b0d8;
LAB_0170b0f4:
    lVar1 = *(long *)(this + 0x1e8);
    if (lVar1 == 0) goto LAB_0170b148;
LAB_0170b0fc:
    if (*(long **)(param_1 + 8) == *(long **)(param_1 + 0x10)) {
      std::__ndk1::
      vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
      ::__push_back_slow_path<v8::internal::compiler::Node*const&>
                ((vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                  *)param_1,(Node **)(this + 0x1e8));
      goto LAB_0170b148;
    }
    **(long **)(param_1 + 8) = lVar1;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    lVar1 = *(long *)(this + 0x1f0);
    if (lVar1 != 0) goto LAB_0170b150;
LAB_0170b16c:
    lVar1 = *(long *)(this + 0x1f8);
    if (lVar1 == 0) goto LAB_0170b1c0;
LAB_0170b174:
    if (*(long **)(param_1 + 8) == *(long **)(param_1 + 0x10)) {
      std::__ndk1::
      vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
      ::__push_back_slow_path<v8::internal::compiler::Node*const&>
                ((vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                  *)param_1,(Node **)(this + 0x1f8));
      goto LAB_0170b1c0;
    }
    **(long **)(param_1 + 8) = lVar1;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    lVar1 = *(long *)(this + 0x200);
    if (lVar1 != 0) goto LAB_0170b1c8;
LAB_0170b1e4:
    lVar1 = *(long *)(this + 0x208);
    if (lVar1 == 0) goto LAB_0170b238;
LAB_0170b1ec:
    if (*(long **)(param_1 + 8) == *(long **)(param_1 + 0x10)) {
      std::__ndk1::
      vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
      ::__push_back_slow_path<v8::internal::compiler::Node*const&>
                ((vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                  *)param_1,(Node **)(this + 0x208));
      goto LAB_0170b238;
    }
    **(long **)(param_1 + 8) = lVar1;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    lVar1 = *(long *)(this + 0x210);
    if (lVar1 != 0) goto LAB_0170b240;
LAB_0170b25c:
    lVar1 = *(long *)(this + 0x218);
    if (lVar1 == 0) goto LAB_0170b2b0;
LAB_0170b264:
    if (*(long **)(param_1 + 8) == *(long **)(param_1 + 0x10)) {
      std::__ndk1::
      vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
      ::__push_back_slow_path<v8::internal::compiler::Node*const&>
                ((vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                  *)param_1,(Node **)(this + 0x218));
      goto LAB_0170b2b0;
    }
    **(long **)(param_1 + 8) = lVar1;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    lVar1 = *(long *)(this + 0x220);
    if (lVar1 != 0) goto LAB_0170b2b8;
LAB_0170b2d4:
    lVar1 = *(long *)(this + 0x228);
    if (lVar1 == 0) goto LAB_0170b328;
LAB_0170b2dc:
    if (*(long **)(param_1 + 8) == *(long **)(param_1 + 0x10)) {
      std::__ndk1::
      vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
      ::__push_back_slow_path<v8::internal::compiler::Node*const&>
                ((vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                  *)param_1,(Node **)(this + 0x228));
      goto LAB_0170b328;
    }
    **(long **)(param_1 + 8) = lVar1;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    lVar1 = *(long *)(this + 0x230);
    if (lVar1 != 0) goto LAB_0170b330;
LAB_0170b34c:
    lVar1 = *(long *)(this + 0x238);
    if (lVar1 == 0) goto LAB_0170b3a0;
LAB_0170b354:
    if (*(long **)(param_1 + 8) == *(long **)(param_1 + 0x10)) {
      std::__ndk1::
      vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
      ::__push_back_slow_path<v8::internal::compiler::Node*const&>
                ((vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                  *)param_1,(Node **)(this + 0x238));
      goto LAB_0170b3a0;
    }
    **(long **)(param_1 + 8) = lVar1;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    lVar1 = *(long *)(this + 0x240);
    if (lVar1 != 0) goto LAB_0170b3a8;
LAB_0170b3c4:
    lVar1 = *(long *)(this + 0x248);
    if (lVar1 == 0) goto LAB_0170b418;
LAB_0170b3cc:
    if (*(long **)(param_1 + 8) == *(long **)(param_1 + 0x10)) {
      std::__ndk1::
      vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
      ::__push_back_slow_path<v8::internal::compiler::Node*const&>
                ((vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                  *)param_1,(Node **)(this + 0x248));
      goto LAB_0170b418;
    }
    **(long **)(param_1 + 8) = lVar1;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    lVar1 = *(long *)(this + 0x250);
    if (lVar1 != 0) goto LAB_0170b420;
LAB_0170b43c:
    lVar1 = *(long *)(this + 600);
    if (lVar1 == 0) goto LAB_0170b490;
LAB_0170b444:
    if (*(long **)(param_1 + 8) == *(long **)(param_1 + 0x10)) {
      std::__ndk1::
      vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
      ::__push_back_slow_path<v8::internal::compiler::Node*const&>
                ((vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                  *)param_1,(Node **)(this + 600));
      goto LAB_0170b490;
    }
    **(long **)(param_1 + 8) = lVar1;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    lVar1 = *(long *)(this + 0x260);
  }
  else {
    if (*(long **)(param_1 + 8) != *(long **)(param_1 + 0x10)) {
      **(long **)(param_1 + 8) = *(long *)(this + 0x180);
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      goto LAB_0170ae24;
    }
    std::__ndk1::
    vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
    ::__push_back_slow_path<v8::internal::compiler::Node*const&>
              ((vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                *)param_1,(Node **)(this + 0x180));
    lVar1 = *(long *)(this + 0x188);
    if (lVar1 != 0) goto LAB_0170ae2c;
LAB_0170ae78:
    lVar1 = *(long *)(this + 400);
    if (lVar1 == 0) goto LAB_0170ae9c;
LAB_0170ae80:
    if (*(long **)(param_1 + 8) != *(long **)(param_1 + 0x10)) {
      **(long **)(param_1 + 8) = lVar1;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      goto LAB_0170ae9c;
    }
    std::__ndk1::
    vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
    ::__push_back_slow_path<v8::internal::compiler::Node*const&>
              ((vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                *)param_1,(Node **)(this + 400));
    lVar1 = *(long *)(this + 0x198);
    if (lVar1 != 0) goto LAB_0170aea4;
LAB_0170aef0:
    lVar1 = *(long *)(this + 0x1a0);
    if (lVar1 == 0) goto LAB_0170af14;
LAB_0170aef8:
    if (*(long **)(param_1 + 8) != *(long **)(param_1 + 0x10)) {
      **(long **)(param_1 + 8) = lVar1;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      goto LAB_0170af14;
    }
    std::__ndk1::
    vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
    ::__push_back_slow_path<v8::internal::compiler::Node*const&>
              ((vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                *)param_1,(Node **)(this + 0x1a0));
    lVar1 = *(long *)(this + 0x1a8);
    if (lVar1 != 0) goto LAB_0170af1c;
LAB_0170af68:
    lVar1 = *(long *)(this + 0x1b0);
    if (lVar1 == 0) goto LAB_0170af8c;
LAB_0170af70:
    if (*(long **)(param_1 + 8) != *(long **)(param_1 + 0x10)) {
      **(long **)(param_1 + 8) = lVar1;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      goto LAB_0170af8c;
    }
    std::__ndk1::
    vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
    ::__push_back_slow_path<v8::internal::compiler::Node*const&>
              ((vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                *)param_1,(Node **)(this + 0x1b0));
    lVar1 = *(long *)(this + 0x1b8);
    if (lVar1 != 0) goto LAB_0170af94;
LAB_0170afe0:
    lVar1 = *(long *)(this + 0x1c0);
    if (lVar1 == 0) goto LAB_0170b004;
LAB_0170afe8:
    if (*(long **)(param_1 + 8) != *(long **)(param_1 + 0x10)) {
      **(long **)(param_1 + 8) = lVar1;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      goto LAB_0170b004;
    }
    std::__ndk1::
    vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
    ::__push_back_slow_path<v8::internal::compiler::Node*const&>
              ((vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                *)param_1,(Node **)(this + 0x1c0));
    lVar1 = *(long *)(this + 0x1c8);
    if (lVar1 != 0) goto LAB_0170b00c;
LAB_0170b058:
    lVar1 = *(long *)(this + 0x1d0);
    if (lVar1 == 0) goto LAB_0170b07c;
LAB_0170b060:
    if (*(long **)(param_1 + 8) != *(long **)(param_1 + 0x10)) {
      **(long **)(param_1 + 8) = lVar1;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      goto LAB_0170b07c;
    }
    std::__ndk1::
    vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
    ::__push_back_slow_path<v8::internal::compiler::Node*const&>
              ((vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                *)param_1,(Node **)(this + 0x1d0));
    lVar1 = *(long *)(this + 0x1d8);
    if (lVar1 != 0) goto LAB_0170b084;
LAB_0170b0d0:
    lVar1 = *(long *)(this + 0x1e0);
    if (lVar1 == 0) goto LAB_0170b0f4;
LAB_0170b0d8:
    if (*(long **)(param_1 + 8) != *(long **)(param_1 + 0x10)) {
      **(long **)(param_1 + 8) = lVar1;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      goto LAB_0170b0f4;
    }
    std::__ndk1::
    vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
    ::__push_back_slow_path<v8::internal::compiler::Node*const&>
              ((vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                *)param_1,(Node **)(this + 0x1e0));
    lVar1 = *(long *)(this + 0x1e8);
    if (lVar1 != 0) goto LAB_0170b0fc;
LAB_0170b148:
    lVar1 = *(long *)(this + 0x1f0);
    if (lVar1 == 0) goto LAB_0170b16c;
LAB_0170b150:
    if (*(long **)(param_1 + 8) != *(long **)(param_1 + 0x10)) {
      **(long **)(param_1 + 8) = lVar1;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      goto LAB_0170b16c;
    }
    std::__ndk1::
    vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
    ::__push_back_slow_path<v8::internal::compiler::Node*const&>
              ((vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                *)param_1,(Node **)(this + 0x1f0));
    lVar1 = *(long *)(this + 0x1f8);
    if (lVar1 != 0) goto LAB_0170b174;
LAB_0170b1c0:
    lVar1 = *(long *)(this + 0x200);
    if (lVar1 == 0) goto LAB_0170b1e4;
LAB_0170b1c8:
    if (*(long **)(param_1 + 8) != *(long **)(param_1 + 0x10)) {
      **(long **)(param_1 + 8) = lVar1;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      goto LAB_0170b1e4;
    }
    std::__ndk1::
    vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
    ::__push_back_slow_path<v8::internal::compiler::Node*const&>
              ((vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                *)param_1,(Node **)(this + 0x200));
    lVar1 = *(long *)(this + 0x208);
    if (lVar1 != 0) goto LAB_0170b1ec;
LAB_0170b238:
    lVar1 = *(long *)(this + 0x210);
    if (lVar1 == 0) goto LAB_0170b25c;
LAB_0170b240:
    if (*(long **)(param_1 + 8) != *(long **)(param_1 + 0x10)) {
      **(long **)(param_1 + 8) = lVar1;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      goto LAB_0170b25c;
    }
    std::__ndk1::
    vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
    ::__push_back_slow_path<v8::internal::compiler::Node*const&>
              ((vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                *)param_1,(Node **)(this + 0x210));
    lVar1 = *(long *)(this + 0x218);
    if (lVar1 != 0) goto LAB_0170b264;
LAB_0170b2b0:
    lVar1 = *(long *)(this + 0x220);
    if (lVar1 == 0) goto LAB_0170b2d4;
LAB_0170b2b8:
    if (*(long **)(param_1 + 8) != *(long **)(param_1 + 0x10)) {
      **(long **)(param_1 + 8) = lVar1;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      goto LAB_0170b2d4;
    }
    std::__ndk1::
    vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
    ::__push_back_slow_path<v8::internal::compiler::Node*const&>
              ((vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                *)param_1,(Node **)(this + 0x220));
    lVar1 = *(long *)(this + 0x228);
    if (lVar1 != 0) goto LAB_0170b2dc;
LAB_0170b328:
    lVar1 = *(long *)(this + 0x230);
    if (lVar1 == 0) goto LAB_0170b34c;
LAB_0170b330:
    if (*(long **)(param_1 + 8) != *(long **)(param_1 + 0x10)) {
      **(long **)(param_1 + 8) = lVar1;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      goto LAB_0170b34c;
    }
    std::__ndk1::
    vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
    ::__push_back_slow_path<v8::internal::compiler::Node*const&>
              ((vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                *)param_1,(Node **)(this + 0x230));
    lVar1 = *(long *)(this + 0x238);
    if (lVar1 != 0) goto LAB_0170b354;
LAB_0170b3a0:
    lVar1 = *(long *)(this + 0x240);
    if (lVar1 == 0) goto LAB_0170b3c4;
LAB_0170b3a8:
    if (*(long **)(param_1 + 8) != *(long **)(param_1 + 0x10)) {
      **(long **)(param_1 + 8) = lVar1;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      goto LAB_0170b3c4;
    }
    std::__ndk1::
    vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
    ::__push_back_slow_path<v8::internal::compiler::Node*const&>
              ((vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                *)param_1,(Node **)(this + 0x240));
    lVar1 = *(long *)(this + 0x248);
    if (lVar1 != 0) goto LAB_0170b3cc;
LAB_0170b418:
    lVar1 = *(long *)(this + 0x250);
    if (lVar1 == 0) goto LAB_0170b43c;
LAB_0170b420:
    if (*(long **)(param_1 + 8) != *(long **)(param_1 + 0x10)) {
      **(long **)(param_1 + 8) = lVar1;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      goto LAB_0170b43c;
    }
    std::__ndk1::
    vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
    ::__push_back_slow_path<v8::internal::compiler::Node*const&>
              ((vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                *)param_1,(Node **)(this + 0x250));
    lVar1 = *(long *)(this + 600);
    if (lVar1 != 0) goto LAB_0170b444;
LAB_0170b490:
    lVar1 = *(long *)(this + 0x260);
  }
  if (lVar1 != 0) {
    if (*(long **)(param_1 + 8) == *(long **)(param_1 + 0x10)) {
      std::__ndk1::
      vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
      ::__push_back_slow_path<v8::internal::compiler::Node*const&>
                ((vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                  *)param_1,(Node **)(this + 0x260));
      lVar1 = *(long *)(this + 0x268);
      goto joined_r0x0170b4b8;
    }
    **(long **)(param_1 + 8) = lVar1;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
  }
  lVar1 = *(long *)(this + 0x268);
joined_r0x0170b4b8:
  if (lVar1 == 0) {
    lVar1 = *(long *)(this + 0x270);
  }
  else if (*(long **)(param_1 + 8) == *(long **)(param_1 + 0x10)) {
    std::__ndk1::
    vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
    ::__push_back_slow_path<v8::internal::compiler::Node*const&>
              ((vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                *)param_1,(Node **)(this + 0x268));
    lVar1 = *(long *)(this + 0x270);
  }
  else {
    **(long **)(param_1 + 8) = lVar1;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    lVar1 = *(long *)(this + 0x270);
  }
  if (lVar1 != 0) {
    if (*(long **)(param_1 + 8) == *(long **)(param_1 + 0x10)) {
      std::__ndk1::
      vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
      ::__push_back_slow_path<v8::internal::compiler::Node*const&>
                ((vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                  *)param_1,(Node **)(this + 0x270));
      return;
    }
    **(long **)(param_1 + 8) = lVar1;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
  }
  return;
}

