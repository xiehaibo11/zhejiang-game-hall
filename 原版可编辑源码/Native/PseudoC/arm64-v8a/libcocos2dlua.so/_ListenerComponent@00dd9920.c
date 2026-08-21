
/* ListenerComponent::~ListenerComponent() */

void __thiscall ListenerComponent::~ListenerComponent(ListenerComponent *this)

{
                    /* try { // try from 00dd992c to 00ed993f has its CatchHandler @ 00dd9c64 */
  ~ListenerComponent(this);
  operator_delete(this);
  return;
}

