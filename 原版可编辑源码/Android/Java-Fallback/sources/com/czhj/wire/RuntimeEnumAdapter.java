package com.czhj.wire;

import com.czhj.wire.WireEnum;

final class RuntimeEnumAdapter<E extends com.czhj.wire.WireEnum> extends com.czhj.wire.EnumAdapter<E> {
    private final java.lang.Class<E> a;
    private java.lang.reflect.Method b;

    RuntimeEnumAdapter(java.lang.Class<E> r1) {
            r0 = this;
            r0.<init>(r1)
            r0.a = r1
            return
    }

    private java.lang.reflect.Method a() {
            r5 = this;
            java.lang.reflect.Method r0 = r5.b
            if (r0 == 0) goto L5
            return r0
        L5:
            java.lang.Class<E extends com.czhj.wire.WireEnum> r0 = r5.a     // Catch: java.lang.NoSuchMethodException -> L18
            java.lang.String r1 = "fromValue"
            r2 = 1
            java.lang.Class[] r2 = new java.lang.Class[r2]     // Catch: java.lang.NoSuchMethodException -> L18
            r3 = 0
            java.lang.Class r4 = java.lang.Integer.TYPE     // Catch: java.lang.NoSuchMethodException -> L18
            r2[r3] = r4     // Catch: java.lang.NoSuchMethodException -> L18
            java.lang.reflect.Method r0 = r0.getMethod(r1, r2)     // Catch: java.lang.NoSuchMethodException -> L18
            r5.b = r0     // Catch: java.lang.NoSuchMethodException -> L18
            return r0
        L18:
            r0 = move-exception
            java.lang.AssertionError r1 = new java.lang.AssertionError
            r1.<init>(r0)
            throw r1
    }

    public boolean equals(java.lang.Object r2) {
            r1 = this;
            boolean r0 = r2 instanceof com.czhj.wire.RuntimeEnumAdapter
            if (r0 == 0) goto Le
            com.czhj.wire.RuntimeEnumAdapter r2 = (com.czhj.wire.RuntimeEnumAdapter) r2
            java.lang.Class<E extends com.czhj.wire.WireEnum> r2 = r2.a
            java.lang.Class<E extends com.czhj.wire.WireEnum> r0 = r1.a
            if (r2 != r0) goto Le
            r2 = 1
            goto Lf
        Le:
            r2 = 0
        Lf:
            return r2
    }

    @Override
    protected E fromValue(int r5) {
            r4 = this;
            java.lang.reflect.Method r0 = r4.a()     // Catch: java.lang.Throwable -> L16
            r1 = 0
            r2 = 1
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L16
            r3 = 0
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Throwable -> L16
            r2[r3] = r5     // Catch: java.lang.Throwable -> L16
            java.lang.Object r5 = r0.invoke(r1, r2)     // Catch: java.lang.Throwable -> L16
            com.czhj.wire.WireEnum r5 = (com.czhj.wire.WireEnum) r5     // Catch: java.lang.Throwable -> L16
            return r5
        L16:
            r5 = move-exception
            java.lang.AssertionError r0 = new java.lang.AssertionError
            r0.<init>(r5)
            throw r0
    }

    public int hashCode() {
            r1 = this;
            java.lang.Class<E extends com.czhj.wire.WireEnum> r0 = r1.a
            int r0 = r0.hashCode()
            return r0
    }
}
