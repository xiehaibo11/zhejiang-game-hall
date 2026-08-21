
/* cocos2d::BatchSprite3D::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

Node * cocos2d::BatchSprite3D::create(basic_string *param_1,basic_string *param_2)

{
  Node *this;
  ulong uVar1;
  BatchMesh *this_00;
  
  this = operator_new(0x370,(nothrow_t *)&std::nothrow);
  if (this != (Node *)0x0) {
    Node::Node(this);
    this[0x2f8] = (Node)0x0;
    *(undefined ***)this = &PTR__BatchSprite3D_016d27b8;
    *(undefined8 *)(this + 0x2fc) = 0x3f800000c7c34f80;
    AABB::AABB((AABB *)(this + 0x304));
    AABB::AABB((AABB *)(this + 0x31c));
    *(undefined8 *)(this + 0x368) = 0;
    *(undefined8 *)(this + 0x350) = 0;
    *(undefined8 *)(this + 0x348) = 0;
    *(undefined8 *)(this + 0x360) = 0;
    *(undefined8 *)(this + 0x358) = 0;
    *(undefined8 *)(this + 0x340) = 0;
    *(undefined8 *)(this + 0x338) = 0;
    uVar1 = init((BatchSprite3D *)this,param_1,param_2);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Node *)0x0;
    }
    else {
      this_00 = *(BatchMesh **)(this + 0x338);
      if (this_00 != (BatchMesh *)0x0) {
        BatchMesh::clear(this_00);
        *(undefined2 *)(this_00 + 0x280) = 1;
      }
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

