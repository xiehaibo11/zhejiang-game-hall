package com.mbridge.msdk.mbbanner.common.a;

public final class a {
    private java.lang.String a;
    private java.lang.String b;
    private java.lang.String c;
    private java.lang.String d;
    private java.lang.String e;
    private java.lang.String f;
    private java.lang.String g;
    private int h;
    private boolean i;

    private a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.mbridge.msdk.mbbanner.common.a.a a() {
            com.mbridge.msdk.mbbanner.common.a.a r0 = new com.mbridge.msdk.mbbanner.common.a.a
            r0.<init>()
            return r0
    }

    public final com.mbridge.msdk.mbbanner.common.a.a a(int r1) {
            r0 = this;
            r0.h = r1
            return r0
    }

    public final com.mbridge.msdk.mbbanner.common.a.a a(java.lang.String r1) {
            r0 = this;
            r0.a = r1
            return r0
    }

    public final com.mbridge.msdk.mbbanner.common.a.a a(boolean r1) {
            r0 = this;
            r0.i = r1
            return r0
    }

    public final com.mbridge.msdk.mbbanner.common.a.a b(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return r0
    }

    public final java.lang.String b() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r3.b
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            java.lang.String r2 = "&"
            if (r1 != 0) goto L1c
            java.lang.String r1 = "unit_id="
            r0.append(r1)
            java.lang.String r1 = r3.b
            r0.append(r1)
            r0.append(r2)
        L1c:
            java.lang.String r1 = r3.c
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L31
            java.lang.String r1 = "cid="
            r0.append(r1)
            java.lang.String r1 = r3.c
            r0.append(r1)
            r0.append(r2)
        L31:
            java.lang.String r1 = r3.d
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L46
            java.lang.String r1 = "rid="
            r0.append(r1)
            java.lang.String r1 = r3.d
            r0.append(r1)
            r0.append(r2)
        L46:
            java.lang.String r1 = r3.e
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L5b
            java.lang.String r1 = "rid_n="
            r0.append(r1)
            java.lang.String r1 = r3.e
            r0.append(r1)
            r0.append(r2)
        L5b:
            java.lang.String r1 = r3.f
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L70
            java.lang.String r1 = "creative_id="
            r0.append(r1)
            java.lang.String r1 = r3.f
            r0.append(r1)
            r0.append(r2)
        L70:
            java.lang.String r1 = r3.g
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L85
            java.lang.String r1 = "reason="
            r0.append(r1)
            java.lang.String r1 = r3.g
            r0.append(r1)
            r0.append(r2)
        L85:
            int r1 = r3.h
            if (r1 == 0) goto L96
            java.lang.String r1 = "result="
            r0.append(r1)
            int r1 = r3.h
            r0.append(r1)
            r0.append(r2)
        L96:
            boolean r1 = r3.i
            if (r1 == 0) goto La2
            java.lang.String r1 = "hb=1"
            r0.append(r1)
            r0.append(r2)
        La2:
            java.lang.String r1 = "network_type="
            r0.append(r1)
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            int r1 = com.mbridge.msdk.foundation.tools.v.D(r1)
            r0.append(r1)
            r0.append(r2)
            java.lang.String r1 = r3.a
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto Lcb
            java.lang.String r1 = "key="
            r0.append(r1)
            java.lang.String r1 = r3.a
            r0.append(r1)
        Lcb:
            java.lang.String r0 = r0.toString()
            return r0
    }

    public final com.mbridge.msdk.mbbanner.common.a.a c(java.lang.String r1) {
            r0 = this;
            r0.c = r1
            return r0
    }

    public final com.mbridge.msdk.mbbanner.common.a.a d(java.lang.String r1) {
            r0 = this;
            r0.d = r1
            return r0
    }

    public final com.mbridge.msdk.mbbanner.common.a.a e(java.lang.String r1) {
            r0 = this;
            r0.e = r1
            return r0
    }

    public final com.mbridge.msdk.mbbanner.common.a.a f(java.lang.String r1) {
            r0 = this;
            r0.f = r1
            return r0
    }

    public final com.mbridge.msdk.mbbanner.common.a.a g(java.lang.String r1) {
            r0 = this;
            r0.g = r1
            return r0
    }
}
