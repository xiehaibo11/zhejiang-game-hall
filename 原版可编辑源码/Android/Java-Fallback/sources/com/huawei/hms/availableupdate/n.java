package com.huawei.hms.availableupdate;

public class n {
    public android.content.Context a;
    public java.lang.String b;

    public n() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.io.File a(java.io.File r1) {
            r0 = 0
            if (r1 != 0) goto L4
            return r0
        L4:
            java.io.File r1 = r1.getCanonicalFile()     // Catch: java.io.IOException -> L9
            return r1
        L9:
            return r0
    }

    public static java.lang.String b(java.io.File r1) {
            r0 = 0
            if (r1 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = r1.getCanonicalPath()     // Catch: java.io.IOException -> L9
            return r1
        L9:
            return r0
    }

    public android.net.Uri a(java.io.File r3, java.lang.String r4) {
            r2 = this;
            java.lang.String r3 = b(r3)
            r0 = 0
            if (r3 != 0) goto L8
            return r0
        L8:
            java.lang.String r3 = r2.b(r3)
            if (r3 != 0) goto Lf
            return r0
        Lf:
            android.net.Uri$Builder r0 = new android.net.Uri$Builder
            r0.<init>()
            java.lang.String r1 = "content"
            android.net.Uri$Builder r0 = r0.scheme(r1)
            android.net.Uri$Builder r4 = r0.authority(r4)
            android.net.Uri$Builder r3 = r4.encodedPath(r3)
            android.net.Uri r3 = r3.build()
            return r3
    }

    public java.io.File a(android.net.Uri r2) {
            r1 = this;
            java.lang.String r2 = r2.getEncodedPath()
            r0 = 0
            if (r2 != 0) goto L8
            return r0
        L8:
            java.lang.String r2 = r1.c(r2)
            if (r2 != 0) goto Lf
            return r0
        Lf:
            java.io.File r0 = new java.io.File
            r0.<init>(r2)
            java.io.File r2 = a(r0)
            return r2
    }

    public java.io.File a(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = r2.a()
            if (r0 != 0) goto L8
            r3 = 0
            return r3
        L8:
            java.io.File r1 = new java.io.File
            r1.<init>(r0, r3)
            java.io.File r3 = a(r1)
            return r3
    }

    public final java.lang.String a() {
            r2 = this;
            android.content.Context r0 = r2.a
            java.lang.String r1 = "mContext is null, call setContext first."
            java.lang.Object r0 = com.huawei.hms.utils.Checker.assertNonNull(r0, r1)
            android.content.Context r0 = (android.content.Context) r0
            monitor-enter(r2)
            java.lang.String r1 = r2.b     // Catch: java.lang.Throwable -> L2e
            if (r1 != 0) goto L2a
            java.io.File r1 = r0.getExternalCacheDir()     // Catch: java.lang.Throwable -> L2e
            if (r1 == 0) goto L20
            java.io.File r0 = r0.getExternalCacheDir()     // Catch: java.lang.Throwable -> L2e
            java.lang.String r0 = b(r0)     // Catch: java.lang.Throwable -> L2e
            r2.b = r0     // Catch: java.lang.Throwable -> L2e
            goto L2a
        L20:
            java.io.File r0 = r0.getFilesDir()     // Catch: java.lang.Throwable -> L2e
            java.lang.String r0 = b(r0)     // Catch: java.lang.Throwable -> L2e
            r2.b = r0     // Catch: java.lang.Throwable -> L2e
        L2a:
            java.lang.String r0 = r2.b     // Catch: java.lang.Throwable -> L2e
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L2e
            return r0
        L2e:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L2e
            throw r0
    }

    public void a(android.content.Context r2) {
            r1 = this;
            android.content.Context r0 = r1.a
            if (r0 != 0) goto Lb
            java.lang.String r0 = "context must not be null."
            com.huawei.hms.utils.Checker.checkNonNull(r2, r0)
            r1.a = r2
        Lb:
            return
    }

    public final java.lang.String b(java.lang.String r4) {
            r3 = this;
            java.lang.String r0 = r3.a()
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            boolean r2 = r4.startsWith(r0)
            if (r2 != 0) goto Lf
            return r1
        Lf:
            java.lang.String r1 = "/"
            boolean r1 = r0.endsWith(r1)
            if (r1 == 0) goto L1c
            int r0 = r0.length()
            goto L22
        L1c:
            int r0 = r0.length()
            int r0 = r0 + 1
        L22:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "ContentUriHelper"
            java.lang.String r2 = android.net.Uri.encode(r2)
            r1.append(r2)
            r2 = 47
            r1.append(r2)
            java.lang.String r4 = r4.substring(r0)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            return r4
    }

    public final java.lang.String c(java.lang.String r7) {
            r6 = this;
            java.lang.String r0 = r6.a()
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            r2 = 47
            r3 = 1
            int r2 = r7.indexOf(r2, r3)
            if (r2 >= 0) goto L12
            return r1
        L12:
            java.lang.String r4 = r7.substring(r3, r2)
            java.lang.String r4 = android.net.Uri.decode(r4)
            java.lang.String r5 = "ContentUriHelper"
            boolean r4 = r5.equals(r4)
            if (r4 != 0) goto L23
            return r1
        L23:
            java.io.File r4 = new java.io.File
            int r2 = r2 + r3
            java.lang.String r7 = r7.substring(r2)
            java.lang.String r7 = android.net.Uri.decode(r7)
            r4.<init>(r0, r7)
            java.lang.String r7 = b(r4)
            if (r7 != 0) goto L38
            return r1
        L38:
            boolean r0 = r7.startsWith(r0)
            if (r0 != 0) goto L3f
            return r1
        L3f:
            return r7
    }
}
