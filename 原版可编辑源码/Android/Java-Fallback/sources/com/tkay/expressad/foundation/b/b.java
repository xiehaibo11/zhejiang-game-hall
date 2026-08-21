package com.tkay.expressad.foundation.b;

public class b {
    public static final java.lang.String a = null;
    private static volatile com.tkay.expressad.foundation.b.b b;
    private android.content.Context c;
    private java.lang.String d;
    private java.lang.String e;
    private int f;
    private org.json.JSONObject g;
    private boolean h;
    private boolean i;
    private java.lang.ref.WeakReference<android.content.Context> j;
    private java.lang.ref.WeakReference<android.app.Activity> k;

    static {
            java.lang.Class<com.tkay.expressad.foundation.b.b> r0 = com.tkay.expressad.foundation.b.b.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.expressad.foundation.b.b.a = r0
            return
    }

    private b() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.f = r0
            r1.h = r0
            return
    }

    private void a(int r1) {
            r0 = this;
            r0.f = r1
            return
    }

    private void a(org.json.JSONObject r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public static com.tkay.expressad.foundation.b.b b() {
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.expressad.foundation.b.b> r0 = com.tkay.expressad.foundation.b.b.class
            monitor-enter(r0)
            com.tkay.expressad.foundation.b.b r1 = com.tkay.expressad.foundation.b.b.b     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.expressad.foundation.b.b r1 = new com.tkay.expressad.foundation.b.b     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.tkay.expressad.foundation.b.b.b = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L17:
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b
            return r0
    }

    public final java.lang.String a() {
            r1 = this;
            android.content.Context r0 = r1.c     // Catch: java.lang.Exception -> Lb
            if (r0 == 0) goto Lf
            android.content.Context r0 = r1.c     // Catch: java.lang.Exception -> Lb
            java.lang.String r0 = r0.getPackageName()     // Catch: java.lang.Exception -> Lb
            return r0
        Lb:
            r0 = move-exception
            r0.printStackTrace()
        Lf:
            r0 = 0
            return r0
    }

    public final void a(android.content.Context r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public final void a(java.lang.String r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public final void b(android.content.Context r2) {
            r1 = this;
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r2)
            r1.j = r0
            return
    }

    public final void b(java.lang.String r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public final void c() {
            r3 = this;
            boolean r0 = r3.h
            r1 = 1
            if (r0 != r1) goto L6
            return
        L6:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L14
            r0.<init>()     // Catch: org.json.JSONException -> L14
            r3.g = r0     // Catch: org.json.JSONException -> L14
            java.lang.String r1 = "webgl"
            r2 = 0
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L14
            return
        L14:
            r0 = move-exception
            r0.printStackTrace()
            return
    }

    public final android.content.Context d() {
            r1 = this;
            android.content.Context r0 = r1.c
            return r0
    }

    public final java.lang.String e() {
            r1 = this;
            java.lang.String r0 = r1.d
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lb
            java.lang.String r0 = r1.d
            return r0
        Lb:
            java.lang.String r0 = ""
            return r0
    }

    public final java.lang.String f() {
            r1 = this;
            java.lang.String r0 = r1.e
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lb
            java.lang.String r0 = r1.e
            return r0
        Lb:
            java.lang.String r0 = ""
            return r0
    }

    public final android.content.Context g() {
            r1 = this;
            java.lang.ref.WeakReference<android.content.Context> r0 = r1.j
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            java.lang.Object r0 = r0.get()
            android.content.Context r0 = (android.content.Context) r0
            return r0
    }

    public final int h() {
            r1 = this;
            int r0 = r1.f
            return r0
    }

    public final org.json.JSONObject i() {
            r1 = this;
            org.json.JSONObject r0 = r1.g
            return r0
    }
}
