package com.huawei.updatesdk.a.b.b;

public final class b {
    private android.content.Intent a;

    private b(android.content.Intent r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    public static com.huawei.updatesdk.a.b.b.b a(android.content.Intent r1) {
            com.huawei.updatesdk.a.b.b.b r0 = new com.huawei.updatesdk.a.b.b.b
            r0.<init>(r1)
            return r0
    }

    public int a(java.lang.String r2, int r3) {
            r1 = this;
            boolean r0 = r1.d()
            if (r0 == 0) goto L14
            android.content.Intent r0 = r1.a     // Catch: java.lang.Exception -> Ld
            int r2 = r0.getIntExtra(r2, r3)     // Catch: java.lang.Exception -> Ld
            return r2
        Ld:
            java.lang.String r2 = "SecureIntent"
            java.lang.String r0 = "getIntExtra exception!"
            com.huawei.updatesdk.a.a.a.a(r2, r0)
        L14:
            return r3
    }

    public java.lang.String a() {
            r2 = this;
            boolean r0 = r2.d()
            java.lang.String r1 = ""
            if (r0 == 0) goto L12
            android.content.Intent r0 = r2.a
            java.lang.String r0 = r0.getAction()
            if (r0 != 0) goto L11
            goto L12
        L11:
            r1 = r0
        L12:
            return r1
    }

    public java.lang.String a(java.lang.String r2) {
            r1 = this;
            boolean r0 = r1.d()
            if (r0 == 0) goto L14
            android.content.Intent r0 = r1.a     // Catch: java.lang.Exception -> Ld
            java.lang.String r2 = r0.getStringExtra(r2)     // Catch: java.lang.Exception -> Ld
            return r2
        Ld:
            java.lang.String r2 = "SecureIntent"
            java.lang.String r0 = "getStringExtra exception!"
            com.huawei.updatesdk.a.a.a.a(r2, r0)
        L14:
            java.lang.String r2 = ""
            return r2
    }

    public boolean a(java.lang.String r2, boolean r3) {
            r1 = this;
            boolean r0 = r1.d()
            if (r0 == 0) goto L14
            android.content.Intent r0 = r1.a     // Catch: java.lang.Exception -> Ld
            boolean r2 = r0.getBooleanExtra(r2, r3)     // Catch: java.lang.Exception -> Ld
            return r2
        Ld:
            java.lang.String r2 = "SecureIntent"
            java.lang.String r0 = "getBooleanExtra exception!"
            com.huawei.updatesdk.a.a.a.a(r2, r0)
        L14:
            return r3
    }

    public long b(java.lang.String r4, int r5) {
            r3 = this;
            boolean r0 = r3.d()
            if (r0 == 0) goto L15
            android.content.Intent r0 = r3.a     // Catch: java.lang.Exception -> Le
            long r1 = (long) r5     // Catch: java.lang.Exception -> Le
            long r4 = r0.getLongExtra(r4, r1)     // Catch: java.lang.Exception -> Le
            return r4
        Le:
            java.lang.String r4 = "SecureIntent"
            java.lang.String r0 = "getIntExtra exception!"
            com.huawei.updatesdk.a.a.a.a(r4, r0)
        L15:
            long r4 = (long) r5
            return r4
    }

    public android.os.Bundle b() {
            r1 = this;
            boolean r0 = r1.d()
            if (r0 == 0) goto Ld
            android.content.Intent r0 = r1.a
            android.os.Bundle r0 = r0.getExtras()
            goto Le
        Ld:
            r0 = 0
        Le:
            return r0
    }

    public android.content.Intent c() {
            r1 = this;
            android.content.Intent r0 = r1.a
            return r0
    }

    public boolean d() {
            r1 = this;
            android.content.Intent r0 = r1.a
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }
}
