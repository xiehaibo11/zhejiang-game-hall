
/* cocosbuilder::CCBFile::create() */

Node * cocosbuilder::CCBFile::create(void)

{
  Node *this;
  
  this = operator_new(0x300,(nothrow_t *)&std::nothrow);
  if (this != (Node *)0x0) {
    cocos2d::Node::Node(this);
    *(undefined8 *)(this + 0x2f8) = 0;
    *(undefined ***)this = &PTR__Node_016cf6b0;
    cocos2d::Ref::autorelease((Ref *)this);
  }
  return this;
}

