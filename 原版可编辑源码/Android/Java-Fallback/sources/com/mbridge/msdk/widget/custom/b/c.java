package com.mbridge.msdk.widget.custom.b;

public final class c {
    private static com.mbridge.msdk.widget.custom.b.c a;
    private com.mbridge.msdk.widget.custom.a.b b;

    static {
            return
    }

    private c(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            r2 = 0
            r1.b = r2
            com.mbridge.msdk.widget.custom.a.b r2 = com.mbridge.msdk.widget.custom.a.b.a()
            r1.b = r2
            java.lang.String r0 = ""
            r2.a(r0)
            return
    }

    public static com.mbridge.msdk.widget.custom.b.c a(android.content.Context r1) {
            com.mbridge.msdk.widget.custom.b.c r0 = com.mbridge.msdk.widget.custom.b.c.a
            if (r0 != 0) goto Lb
            com.mbridge.msdk.widget.custom.b.c r0 = new com.mbridge.msdk.widget.custom.b.c
            r0.<init>(r1)
            com.mbridge.msdk.widget.custom.b.c.a = r0
        Lb:
            com.mbridge.msdk.widget.custom.b.c r1 = com.mbridge.msdk.widget.custom.b.c.a
            return r1
    }

    public final android.view.View a(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L18
            java.io.File r0 = new java.io.File
            r0.<init>(r2)
            boolean r0 = r0.exists()
            if (r0 == 0) goto L18
            com.mbridge.msdk.widget.custom.a.b r0 = r1.b
            android.view.View r2 = r0.f(r2)
            goto L19
        L18:
            r2 = 0
        L19:
            return r2
    }
}
