package kotlin.jvm.internal;

public abstract class MutablePropertyReference0 extends kotlin.jvm.internal.MutablePropertyReference implements kotlin.reflect.KMutableProperty0 {
    public MutablePropertyReference0() {
            r0 = this;
            r0.<init>()
            return
    }

    public MutablePropertyReference0(java.lang.Object r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public MutablePropertyReference0(java.lang.Object r1, java.lang.Class r2, java.lang.String r3, java.lang.String r4, int r5) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    @Override
    protected kotlin.reflect.KCallable computeReflected() {
            r1 = this;
            kotlin.reflect.KMutableProperty0 r0 = kotlin.jvm.internal.Reflection.mutableProperty0(r1)
            return r0
    }

    @Override
    public java.lang.Object getDelegate() {
            r1 = this;
            kotlin.reflect.KProperty r0 = r1.getReflected()
            kotlin.reflect.KMutableProperty0 r0 = (kotlin.reflect.KMutableProperty0) r0
            java.lang.Object r0 = r0.getDelegate()
            return r0
    }

    @Override
    public kotlin.reflect.KProperty.Getter getGetter() {
            r1 = this;
            kotlin.reflect.KProperty0$Getter r0 = r1.getGetter()
            return r0
    }

    @Override
    public kotlin.reflect.KProperty0.Getter getGetter() {
            r1 = this;
            kotlin.reflect.KProperty r0 = r1.getReflected()
            kotlin.reflect.KMutableProperty0 r0 = (kotlin.reflect.KMutableProperty0) r0
            kotlin.reflect.KProperty0$Getter r0 = r0.getGetter()
            return r0
    }

    @Override
    public kotlin.reflect.KMutableProperty.Setter getSetter() {
            r1 = this;
            kotlin.reflect.KMutableProperty0$Setter r0 = r1.getSetter()
            return r0
    }

    @Override
    public kotlin.reflect.KMutableProperty0.Setter getSetter() {
            r1 = this;
            kotlin.reflect.KProperty r0 = r1.getReflected()
            kotlin.reflect.KMutableProperty0 r0 = (kotlin.reflect.KMutableProperty0) r0
            kotlin.reflect.KMutableProperty0$Setter r0 = r0.getSetter()
            return r0
    }

    @Override
    public java.lang.Object invoke() {
            r1 = this;
            java.lang.Object r0 = r1.get()
            return r0
    }
}
