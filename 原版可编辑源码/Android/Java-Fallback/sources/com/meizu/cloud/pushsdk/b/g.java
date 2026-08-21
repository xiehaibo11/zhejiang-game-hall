package com.meizu.cloud.pushsdk.b;

public class g extends com.meizu.cloud.pushsdk.b.h<com.meizu.cloud.pushsdk.b.f> implements com.meizu.cloud.pushsdk.b.f {
    private static com.meizu.cloud.pushsdk.b.g a;
    private boolean b;

    private g(com.meizu.cloud.pushsdk.b.f r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0.b = r1
            return
    }

    public static com.meizu.cloud.pushsdk.b.g b() {
            com.meizu.cloud.pushsdk.b.g r0 = com.meizu.cloud.pushsdk.b.g.a
            if (r0 != 0) goto L1c
            java.lang.Class<com.meizu.cloud.pushsdk.b.g> r0 = com.meizu.cloud.pushsdk.b.g.class
            monitor-enter(r0)
            com.meizu.cloud.pushsdk.b.g r1 = com.meizu.cloud.pushsdk.b.g.a     // Catch: java.lang.Throwable -> L19
            if (r1 != 0) goto L17
            com.meizu.cloud.pushsdk.b.g r1 = new com.meizu.cloud.pushsdk.b.g     // Catch: java.lang.Throwable -> L19
            com.meizu.cloud.pushsdk.b.b r2 = new com.meizu.cloud.pushsdk.b.b     // Catch: java.lang.Throwable -> L19
            r2.<init>()     // Catch: java.lang.Throwable -> L19
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L19
            com.meizu.cloud.pushsdk.b.g.a = r1     // Catch: java.lang.Throwable -> L19
        L17:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
            goto L1c
        L19:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
            throw r1
        L1c:
            com.meizu.cloud.pushsdk.b.g r0 = com.meizu.cloud.pushsdk.b.g.a
            return r0
    }

    public void a(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.a(r2, r0)
            return
    }

    public void a(android.content.Context r3, java.lang.String r4) {
            r2 = this;
            boolean r0 = r2.b
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            r2.b = r0
            android.content.pm.ApplicationInfo r1 = r3.getApplicationInfo()
            int r1 = r1.flags
            r1 = r1 & 2
            if (r1 == 0) goto L13
            goto L14
        L13:
            r0 = 0
        L14:
            r2.b(r0)
            if (r4 != 0) goto L5c
            int r4 = android.os.Build.VERSION.SDK_INT
            r0 = 29
            if (r4 < r0) goto L3c
            java.lang.String r4 = com.meizu.cloud.pushsdk.util.MzSystemUtils.getDocumentsPath(r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r4)
            java.lang.String r4 = "/pushSdk/"
            r0.append(r4)
            java.lang.String r3 = r3.getPackageName()
            r0.append(r3)
            java.lang.String r4 = r0.toString()
            goto L5c
        L3c:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.io.File r0 = android.os.Environment.getExternalStorageDirectory()
            java.lang.String r0 = r0.getAbsolutePath()
            r4.append(r0)
            java.lang.String r0 = "/Android/data/pushSdk/"
            r4.append(r0)
            java.lang.String r3 = r3.getPackageName()
            r4.append(r3)
            java.lang.String r4 = r4.toString()
        L5c:
            r2.a(r4)
            return
    }

    @Override
    public void a(java.lang.String r2) {
            r1 = this;
            java.lang.Object r0 = r1.c()
            com.meizu.cloud.pushsdk.b.f r0 = (com.meizu.cloud.pushsdk.b.f) r0
            r0.a(r2)
            return
    }

    @Override
    public void a(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.lang.Object r0 = r1.c()
            com.meizu.cloud.pushsdk.b.f r0 = (com.meizu.cloud.pushsdk.b.f) r0
            r0.a(r2, r3)
            return
    }

    @Override
    public void a(java.lang.String r2, java.lang.String r3, java.lang.Throwable r4) {
            r1 = this;
            java.lang.Object r0 = r1.c()
            com.meizu.cloud.pushsdk.b.f r0 = (com.meizu.cloud.pushsdk.b.f) r0
            r0.a(r2, r3, r4)
            return
    }

    @Override
    public void a(boolean r2) {
            r1 = this;
            java.lang.Object r0 = r1.c()
            com.meizu.cloud.pushsdk.b.f r0 = (com.meizu.cloud.pushsdk.b.f) r0
            r0.a(r2)
            return
    }

    @Override
    public boolean a() {
            r1 = this;
            java.lang.Object r0 = r1.c()
            com.meizu.cloud.pushsdk.b.f r0 = (com.meizu.cloud.pushsdk.b.f) r0
            boolean r0 = r0.a()
            return r0
    }

    @Override
    public void b(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.lang.Object r0 = r1.c()
            com.meizu.cloud.pushsdk.b.f r0 = (com.meizu.cloud.pushsdk.b.f) r0
            r0.b(r2, r3)
            return
    }

    @Override
    public void b(boolean r2) {
            r1 = this;
            java.lang.Object r0 = r1.c()
            com.meizu.cloud.pushsdk.b.f r0 = (com.meizu.cloud.pushsdk.b.f) r0
            r0.b(r2)
            return
    }

    @Override
    public void c(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.lang.Object r0 = r1.c()
            com.meizu.cloud.pushsdk.b.f r0 = (com.meizu.cloud.pushsdk.b.f) r0
            r0.c(r2, r3)
            return
    }

    @Override
    public void d(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.lang.Object r0 = r1.c()
            com.meizu.cloud.pushsdk.b.f r0 = (com.meizu.cloud.pushsdk.b.f) r0
            r0.d(r2, r3)
            return
    }
}
