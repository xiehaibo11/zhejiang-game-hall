package com.czhj.wire;

import com.czhj.wire.Message;
import com.czhj.wire.Message.Builder;

final class FieldBinding<M extends com.czhj.wire.Message<M, B>, B extends com.czhj.wire.Message.Builder<M, B>> {
    private final java.lang.String a;
    private final java.lang.String b;
    private final java.lang.reflect.Field c;
    private final java.lang.reflect.Field d;
    private final java.lang.reflect.Method e;
    private com.czhj.wire.ProtoAdapter<?> f;
    private com.czhj.wire.ProtoAdapter<?> g;
    private com.czhj.wire.ProtoAdapter<java.lang.Object> h;
    public final com.czhj.wire.WireField.Label label;
    public final java.lang.String name;
    public final boolean redacted;
    public final int tag;

    FieldBinding(com.czhj.wire.WireField r2, java.lang.reflect.Field r3, java.lang.Class<B> r4) {
            r1 = this;
            r1.<init>()
            com.czhj.wire.WireField$Label r0 = r2.label()
            r1.label = r0
            java.lang.String r0 = r3.getName()
            r1.name = r0
            int r0 = r2.tag()
            r1.tag = r0
            java.lang.String r0 = r2.keyAdapter()
            r1.a = r0
            java.lang.String r0 = r2.adapter()
            r1.b = r0
            boolean r2 = r2.redacted()
            r1.redacted = r2
            r1.c = r3
            java.lang.String r2 = r1.name
            java.lang.reflect.Field r2 = a(r4, r2)
            r1.d = r2
            java.lang.String r2 = r1.name
            java.lang.Class r3 = r3.getType()
            java.lang.reflect.Method r2 = a(r4, r2, r3)
            r1.e = r2
            return
    }

    private static java.lang.reflect.Field a(java.lang.Class<?> r3, java.lang.String r4) {
            java.lang.reflect.Field r3 = r3.getField(r4)     // Catch: java.lang.NoSuchFieldException -> L5
            return r3
        L5:
            java.lang.AssertionError r0 = new java.lang.AssertionError
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "No builder field "
            r1.append(r2)
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = "."
            r1.append(r3)
            r1.append(r4)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    private static java.lang.reflect.Method a(java.lang.Class<?> r3, java.lang.String r4, java.lang.Class<?> r5) {
            r0 = 1
            java.lang.Class[] r0 = new java.lang.Class[r0]     // Catch: java.lang.NoSuchMethodException -> Lb
            r1 = 0
            r0[r1] = r5     // Catch: java.lang.NoSuchMethodException -> Lb
            java.lang.reflect.Method r3 = r3.getMethod(r4, r0)     // Catch: java.lang.NoSuchMethodException -> Lb
            return r3
        Lb:
            java.lang.AssertionError r0 = new java.lang.AssertionError
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "No builder method "
            r1.append(r2)
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = "."
            r1.append(r3)
            r1.append(r4)
            java.lang.String r3 = "("
            r1.append(r3)
            java.lang.String r3 = r5.getName()
            r1.append(r3)
            java.lang.String r3 = ")"
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    java.lang.Object a(B r2) {
            r1 = this;
            java.lang.reflect.Field r0 = r1.d     // Catch: java.lang.IllegalAccessException -> L7
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.IllegalAccessException -> L7
            return r2
        L7:
            r2 = move-exception
            java.lang.AssertionError r0 = new java.lang.AssertionError
            r0.<init>(r2)
            throw r0
    }

    java.lang.Object a(M r2) {
            r1 = this;
            java.lang.reflect.Field r0 = r1.c     // Catch: java.lang.IllegalAccessException -> L7
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.IllegalAccessException -> L7
            return r2
        L7:
            r2 = move-exception
            java.lang.AssertionError r0 = new java.lang.AssertionError
            r0.<init>(r2)
            throw r0
    }

    void a(B r2, java.lang.Object r3) {
            r1 = this;
            com.czhj.wire.WireField$Label r0 = r1.label
            boolean r0 = r0.a()
            if (r0 == 0) goto L12
            java.lang.Object r2 = r1.a(r2)
            java.util.List r2 = (java.util.List) r2
            r2.add(r3)
            goto L29
        L12:
            java.lang.String r0 = r1.a
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L26
            java.lang.Object r2 = r1.a(r2)
            java.util.Map r2 = (java.util.Map) r2
            java.util.Map r3 = (java.util.Map) r3
            r2.putAll(r3)
            goto L29
        L26:
            r1.b(r2, r3)
        L29:
            return
    }

    boolean a() {
            r1 = this;
            java.lang.String r0 = r1.a
            boolean r0 = r0.isEmpty()
            r0 = r0 ^ 1
            return r0
    }

    com.czhj.wire.ProtoAdapter<?> b() {
            r1 = this;
            com.czhj.wire.ProtoAdapter<?> r0 = r1.f
            if (r0 == 0) goto L5
            return r0
        L5:
            java.lang.String r0 = r1.b
            com.czhj.wire.ProtoAdapter r0 = com.czhj.wire.ProtoAdapter.get(r0)
            r1.f = r0
            return r0
    }

    void b(B r4, java.lang.Object r5) {
            r3 = this;
            com.czhj.wire.WireField$Label r0 = r3.label     // Catch: java.lang.Throwable -> L1a
            boolean r0 = r0.c()     // Catch: java.lang.Throwable -> L1a
            if (r0 == 0) goto L14
            java.lang.reflect.Method r0 = r3.e     // Catch: java.lang.Throwable -> L1a
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L1a
            r2 = 0
            r1[r2] = r5     // Catch: java.lang.Throwable -> L1a
            r0.invoke(r4, r1)     // Catch: java.lang.Throwable -> L1a
            goto L19
        L14:
            java.lang.reflect.Field r0 = r3.d     // Catch: java.lang.Throwable -> L1a
            r0.set(r4, r5)     // Catch: java.lang.Throwable -> L1a
        L19:
            return
        L1a:
            r4 = move-exception
            java.lang.AssertionError r5 = new java.lang.AssertionError
            r5.<init>(r4)
            throw r5
    }

    com.czhj.wire.ProtoAdapter<?> c() {
            r1 = this;
            com.czhj.wire.ProtoAdapter<?> r0 = r1.g
            if (r0 == 0) goto L5
            return r0
        L5:
            java.lang.String r0 = r1.a
            com.czhj.wire.ProtoAdapter r0 = com.czhj.wire.ProtoAdapter.get(r0)
            r1.g = r0
            return r0
    }

    com.czhj.wire.ProtoAdapter<java.lang.Object> d() {
            r2 = this;
            com.czhj.wire.ProtoAdapter<java.lang.Object> r0 = r2.h
            if (r0 == 0) goto L5
            return r0
        L5:
            boolean r0 = r2.a()
            if (r0 == 0) goto L1a
            com.czhj.wire.ProtoAdapter r0 = r2.c()
            com.czhj.wire.ProtoAdapter r1 = r2.b()
            com.czhj.wire.ProtoAdapter r0 = com.czhj.wire.ProtoAdapter.newMapAdapter(r0, r1)
        L17:
            r2.h = r0
            return r0
        L1a:
            com.czhj.wire.ProtoAdapter r0 = r2.b()
            com.czhj.wire.WireField$Label r1 = r2.label
            com.czhj.wire.ProtoAdapter r0 = r0.withLabel(r1)
            goto L17
    }
}
