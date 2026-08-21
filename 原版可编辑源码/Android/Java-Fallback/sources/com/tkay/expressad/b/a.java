package com.tkay.expressad.b;

public class a {
    private static volatile com.tkay.expressad.b.a a;

    private a() {
            r0 = this;
            r0.<init>()
            return
    }

    private static com.tkay.expressad.b.a a() {
            com.tkay.expressad.b.a r0 = com.tkay.expressad.b.a.a
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.expressad.b.a> r0 = com.tkay.expressad.b.a.class
            monitor-enter(r0)
            com.tkay.expressad.b.a r1 = com.tkay.expressad.b.a.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.expressad.b.a r1 = new com.tkay.expressad.b.a     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.tkay.expressad.b.a.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L17:
            com.tkay.expressad.b.a r0 = com.tkay.expressad.b.a.a
            return r0
    }

    private void a(java.io.File r6) {
            r5 = this;
            boolean r0 = r6.exists()
            if (r0 != 0) goto L7
            return
        L7:
            boolean r0 = r6.isFile()
            if (r0 == 0) goto L11
            r6.delete()
            return
        L11:
            java.io.File[] r0 = r6.listFiles()
            int r1 = r0.length
            r2 = 0
        L17:
            if (r2 >= r1) goto L2a
            r3 = r0[r2]
            java.io.File r4 = new java.io.File
            java.lang.String r3 = r3.getAbsolutePath()
            r4.<init>(r3)
            r5.a(r4)
            int r2 = r2 + 1
            goto L17
        L2a:
            r6.delete()
            return
    }

    private static void a(java.lang.String r1, java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L15
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L15
            com.tkay.expressad.b.c r0 = new com.tkay.expressad.b.c
            r0.<init>()
            com.tkay.expressad.b.c.a(r1, r2)
            return
        L15:
            java.io.IOException r1 = new java.io.IOException
            java.lang.String r2 = "zipFilePath or destDirectory is null"
            r1.<init>(r2)
            throw r1
    }
}
