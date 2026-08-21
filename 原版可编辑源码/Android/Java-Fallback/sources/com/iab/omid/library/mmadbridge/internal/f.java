package com.iab.omid.library.mmadbridge.internal;

public class f {
    private static com.iab.omid.library.mmadbridge.internal.f b;
    private android.content.Context a;

    static {
            com.iab.omid.library.mmadbridge.internal.f r0 = new com.iab.omid.library.mmadbridge.internal.f
            r0.<init>()
            com.iab.omid.library.mmadbridge.internal.f.b = r0
            return
    }

    private f() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.iab.omid.library.mmadbridge.internal.f b() {
            com.iab.omid.library.mmadbridge.internal.f r0 = com.iab.omid.library.mmadbridge.internal.f.b
            return r0
    }

    public android.content.Context a() {
            r1 = this;
            android.content.Context r0 = r1.a
            return r0
    }

    public void a(android.content.Context r1) {
            r0 = this;
            if (r1 == 0) goto L7
            android.content.Context r1 = r1.getApplicationContext()
            goto L8
        L7:
            r1 = 0
        L8:
            r0.a = r1
            return
    }
}
