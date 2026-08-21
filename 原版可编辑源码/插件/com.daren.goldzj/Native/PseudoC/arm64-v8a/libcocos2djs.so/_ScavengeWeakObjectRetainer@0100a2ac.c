
/* v8::internal::ScavengeWeakObjectRetainer::~ScavengeWeakObjectRetainer() */

void __thiscall
v8::internal::ScavengeWeakObjectRetainer::~ScavengeWeakObjectRetainer
          (ScavengeWeakObjectRetainer *this)

{
  operator_delete(this);
  return;
}

