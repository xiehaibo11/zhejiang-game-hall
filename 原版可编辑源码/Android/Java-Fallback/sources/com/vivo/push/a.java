package com.vivo.push;

public final class a {
    private android.os.Bundle a;
    private java.lang.String b;
    private java.lang.String c;

    public a(java.lang.String r1, java.lang.String r2, android.os.Bundle r3) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            r0.c = r2
            r0.a = r3
            return
    }

    public static com.vivo.push.a a(android.content.Intent r6) {
            java.lang.String r0 = "BundleWapper"
            r1 = 0
            if (r6 != 0) goto Lb
            java.lang.String r6 = "create error : intent is null"
            com.vivo.push.util.p.a(r0, r6)
            return r1
        Lb:
            android.os.Bundle r2 = r6.getExtras()
            if (r2 == 0) goto L1e
            java.lang.String r3 = "client_pkgname"
            java.lang.String r3 = r2.getString(r3)
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            if (r4 != 0) goto L1e
            goto L1f
        L1e:
            r3 = r1
        L1f:
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            if (r4 == 0) goto L2a
            java.lang.String r4 = "create warning: pkgName is null"
            com.vivo.push.util.p.b(r0, r4)
        L2a:
            java.lang.String r4 = r6.getPackage()
            boolean r5 = android.text.TextUtils.isEmpty(r4)
            if (r5 == 0) goto L4f
            android.content.ComponentName r4 = r6.getComponent()
            if (r4 != 0) goto L3b
            goto L43
        L3b:
            android.content.ComponentName r6 = r6.getComponent()
            java.lang.String r1 = r6.getPackageName()
        L43:
            boolean r6 = android.text.TextUtils.isEmpty(r1)
            if (r6 == 0) goto L4e
            java.lang.String r6 = "create warning: targetPkgName is null"
            com.vivo.push.util.p.b(r0, r6)
        L4e:
            r4 = r1
        L4f:
            com.vivo.push.a r6 = new com.vivo.push.a
            r6.<init>(r3, r4, r2)
            return r6
    }

    public final java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public final java.lang.String a(java.lang.String r2) {
            r1 = this;
            android.os.Bundle r0 = r1.a
            if (r0 != 0) goto L6
            r2 = 0
            return r2
        L6:
            java.lang.String r2 = r0.getString(r2)
            return r2
    }

    public final void a(java.lang.String r2, int r3) {
            r1 = this;
            android.os.Bundle r0 = r1.a
            if (r0 != 0) goto Lb
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            r1.a = r0
        Lb:
            android.os.Bundle r0 = r1.a
            r0.putInt(r2, r3)
            return
    }

    public final void a(java.lang.String r2, long r3) {
            r1 = this;
            android.os.Bundle r0 = r1.a
            if (r0 != 0) goto Lb
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            r1.a = r0
        Lb:
            android.os.Bundle r0 = r1.a
            r0.putLong(r2, r3)
            return
    }

    public final void a(java.lang.String r2, java.io.Serializable r3) {
            r1 = this;
            android.os.Bundle r0 = r1.a
            if (r0 != 0) goto Lb
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            r1.a = r0
        Lb:
            android.os.Bundle r0 = r1.a
            r0.putSerializable(r2, r3)
            return
    }

    public final void a(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            android.os.Bundle r0 = r1.a
            if (r0 != 0) goto Lb
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            r1.a = r0
        Lb:
            android.os.Bundle r0 = r1.a
            r0.putString(r2, r3)
            return
    }

    public final void a(java.lang.String r2, java.util.ArrayList<java.lang.String> r3) {
            r1 = this;
            android.os.Bundle r0 = r1.a
            if (r0 != 0) goto Lb
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            r1.a = r0
        Lb:
            android.os.Bundle r0 = r1.a
            r0.putStringArrayList(r2, r3)
            return
    }

    public final void a(java.lang.String r2, boolean r3) {
            r1 = this;
            android.os.Bundle r0 = r1.a
            if (r0 != 0) goto Lb
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            r1.a = r0
        Lb:
            android.os.Bundle r0 = r1.a
            r0.putBoolean(r2, r3)
            return
    }

    public final void a(java.lang.String r2, byte[] r3) {
            r1 = this;
            android.os.Bundle r0 = r1.a
            if (r0 != 0) goto Lb
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            r1.a = r0
        Lb:
            android.os.Bundle r0 = r1.a
            r0.putByteArray(r2, r3)
            return
    }

    public final int b(java.lang.String r2, int r3) {
            r1 = this;
            android.os.Bundle r0 = r1.a
            if (r0 != 0) goto L5
            return r3
        L5:
            int r2 = r0.getInt(r2, r3)
            return r2
    }

    public final long b(java.lang.String r2, long r3) {
            r1 = this;
            android.os.Bundle r0 = r1.a
            if (r0 != 0) goto L5
            return r3
        L5:
            long r2 = r0.getLong(r2, r3)
            return r2
    }

    public final android.os.Bundle b() {
            r1 = this;
            android.os.Bundle r0 = r1.a
            return r0
    }

    public final byte[] b(java.lang.String r2) {
            r1 = this;
            android.os.Bundle r0 = r1.a
            if (r0 != 0) goto L6
            r2 = 0
            return r2
        L6:
            byte[] r2 = r0.getByteArray(r2)
            return r2
    }

    public final java.util.ArrayList<java.lang.String> c(java.lang.String r2) {
            r1 = this;
            android.os.Bundle r0 = r1.a
            if (r0 != 0) goto L6
            r2 = 0
            return r2
        L6:
            java.util.ArrayList r2 = r0.getStringArrayList(r2)
            return r2
    }

    public final java.io.Serializable d(java.lang.String r2) {
            r1 = this;
            android.os.Bundle r0 = r1.a
            if (r0 != 0) goto L6
            r2 = 0
            return r2
        L6:
            java.io.Serializable r2 = r0.getSerializable(r2)
            return r2
    }

    public final boolean e(java.lang.String r3) {
            r2 = this;
            android.os.Bundle r0 = r2.a
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            boolean r3 = r0.getBoolean(r3, r1)
            return r3
    }
}
