package com.czhj.wire;

import com.czhj.wire.WireEnum;
import java.lang.reflect.Method;

final class RuntimeEnumAdapter<E extends WireEnum> extends EnumAdapter<E> {
    private final Class<E> a;
    private Method b;

    RuntimeEnumAdapter(Class<E> cls) {
        super(cls);
        this.a = cls;
    }

    private Method a() {
        Method method = this.b;
        if (method != null) {
            return method;
        }
        try {
            Method method2 = this.a.getMethod("fromValue", Integer.TYPE);
            this.b = method2;
            return method2;
        } catch (NoSuchMethodException e) {
            throw new AssertionError(e);
        }
    }

    public boolean equals(Object obj) {
        return (obj instanceof RuntimeEnumAdapter) && ((RuntimeEnumAdapter) obj).a == this.a;
    }

    @Override
    protected E fromValue(int i) {
        try {
            return (E) a().invoke(null, Integer.valueOf(i));
        } catch (Throwable th) {
            throw new AssertionError(th);
        }
    }

    public int hashCode() {
        return this.a.hashCode();
    }
}
