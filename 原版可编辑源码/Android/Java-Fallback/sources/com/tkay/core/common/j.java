package com.tkay.core.common;

public abstract class j {
    public java.lang.String a;
    public com.tkay.core.api.TYMediationRequestInfo b;
    public java.lang.String c;
    public int d;
    public com.tkay.core.common.b.b e;
    public com.tkay.core.common.b.a f;
    public java.util.Map<java.lang.String, java.lang.Object> g;
    private android.content.Context h;
    private java.lang.ref.WeakReference<android.app.Activity> i;

    public j() {
            r0 = this;
            r0.<init>()
            return
    }

    private int b() {
            r1 = this;
            int r0 = r1.d
            return r0
    }

    public final android.content.Context a() {
            r1 = this;
            java.lang.ref.WeakReference<android.app.Activity> r0 = r1.i
            if (r0 == 0) goto Ld
            java.lang.Object r0 = r0.get()
            android.app.Activity r0 = (android.app.Activity) r0
            if (r0 == 0) goto Ld
            return r0
        Ld:
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.app.Activity r0 = r0.E()
            if (r0 == 0) goto L18
            return r0
        L18:
            android.content.Context r0 = r1.h
            return r0
    }

    public final void a(android.content.Context r2) {
            r1 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            r1.h = r0
            if (r2 == 0) goto L19
            boolean r0 = r2 instanceof android.app.Activity
            if (r0 == 0) goto L19
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            android.app.Activity r2 = (android.app.Activity) r2
            r0.<init>(r2)
            r1.i = r0
        L19:
            return
    }
}
