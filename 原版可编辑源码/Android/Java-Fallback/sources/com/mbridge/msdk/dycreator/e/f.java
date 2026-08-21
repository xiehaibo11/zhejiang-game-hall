package com.mbridge.msdk.dycreator.e;

public class f {
    private static volatile com.mbridge.msdk.dycreator.e.f a;
    private com.mbridge.msdk.dycreator.a.b b;

    static {
            return
    }

    private f(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.b = r0
            com.mbridge.msdk.dycreator.a.b r0 = com.mbridge.msdk.dycreator.a.b.a()
            r2.b = r0
            java.lang.String r1 = ""
            r0.a(r3, r1)
            return
    }

    public static com.mbridge.msdk.dycreator.e.f a(android.content.Context r2) {
            com.mbridge.msdk.dycreator.e.f r0 = com.mbridge.msdk.dycreator.e.f.a
            if (r0 != 0) goto L1b
            java.lang.Class<com.mbridge.msdk.dycreator.e.f> r0 = com.mbridge.msdk.dycreator.e.f.class
            monitor-enter(r0)
            com.mbridge.msdk.dycreator.e.f r1 = com.mbridge.msdk.dycreator.e.f.a     // Catch: java.lang.Throwable -> L18
            if (r1 != 0) goto L16
            com.mbridge.msdk.dycreator.e.f r1 = new com.mbridge.msdk.dycreator.e.f     // Catch: java.lang.Throwable -> L18
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L18
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L18
            com.mbridge.msdk.dycreator.e.f.a = r1     // Catch: java.lang.Throwable -> L18
        L16:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L18
            goto L1b
        L18:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L18
            throw r2
        L1b:
            com.mbridge.msdk.dycreator.e.f r2 = com.mbridge.msdk.dycreator.e.f.a
            return r2
    }

    public final android.view.View a(android.view.ViewGroup r7, java.lang.String r8) {
            r6 = this;
            r0 = 0
            if (r7 == 0) goto L37
            boolean r1 = android.text.TextUtils.isEmpty(r8)
            if (r1 == 0) goto La
            goto L37
        La:
            int r1 = r7.getId()
            int r2 = r8.hashCode()
            if (r1 != r2) goto L15
            return r7
        L15:
            int r1 = r7.getChildCount()
            r2 = 0
        L1a:
            if (r2 >= r1) goto L37
            android.view.View r3 = r7.getChildAt(r2)
            int r4 = r3.getId()
            int r5 = r8.hashCode()
            if (r4 != r5) goto L2b
            return r3
        L2b:
            boolean r4 = r3 instanceof android.view.ViewGroup
            if (r4 == 0) goto L34
            android.view.ViewGroup r3 = (android.view.ViewGroup) r3
            r6.a(r3, r8)
        L34:
            int r2 = r2 + 1
            goto L1a
        L37:
            return r0
    }

    public final android.view.View a(java.lang.String r2) {
            r1 = this;
            java.io.File r0 = new java.io.File
            r0.<init>(r2)
            boolean r0 = r0.exists()
            if (r0 == 0) goto L12
            com.mbridge.msdk.dycreator.a.b r0 = r1.b
            android.view.View r2 = r0.f(r2)
            goto L13
        L12:
            r2 = 0
        L13:
            return r2
    }
}
