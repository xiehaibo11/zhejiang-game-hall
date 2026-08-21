package com.igexin.assist.action;

class d {
    private byte[] a;
    private java.lang.String b;
    private java.lang.String c;
    private java.lang.String d;
    private java.lang.String e;
    private java.lang.String f;
    private java.lang.String g;

    d() {
            r0 = this;
            r0.<init>()
            return
    }

    private void a(android.content.Context r4) {
            r3 = this;
            java.lang.String r0 = com.igexin.push.core.d.a     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L33
            r3.d = r0     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L33
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L33
            if (r0 == 0) goto L33
            if (r4 != 0) goto Ld
            goto L33
        Ld:
            android.content.pm.PackageManager r0 = r4.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L33
            java.lang.String r1 = r4.getPackageName()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L33
            r2 = 128(0x80, float:1.8E-43)
            android.content.pm.ApplicationInfo r0 = r0.getApplicationInfo(r1, r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L33
            android.os.Bundle r0 = r0.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L33
            java.lang.String r1 = "PUSH_APPID"
            java.lang.String r0 = r0.getString(r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L33
            r3.d = r0     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L33
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L33
            if (r0 != 0) goto L2c
            return
        L2c:
            java.lang.String r4 = com.igexin.push.core.b.a.a(r4)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L33
            r3.d = r4     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L33
        L33:
            return
    }

    public void a(com.igexin.assist.MessageBean r8) {
            r7 = this;
            java.lang.String r0 = "ACT"
            java.lang.String r1 = "AC"
            java.lang.String r2 = "TI"
            java.lang.String r3 = "CT"
            android.content.Context r4 = r8.getContext()     // Catch: java.lang.Throwable -> Lc0
            java.lang.String r5 = r8.getStringMessage()     // Catch: java.lang.Throwable -> Lc0
            boolean r6 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> Lc0
            if (r6 != 0) goto Lc0
            if (r4 != 0) goto L1a
            goto Lc0
        L1a:
            r7.a(r4)     // Catch: java.lang.Throwable -> Lc0
            java.lang.String r6 = r7.d     // Catch: java.lang.Throwable -> Lc0
            boolean r6 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> Lc0
            if (r6 == 0) goto L26
            return
        L26:
            java.lang.String r4 = r4.getPackageName()     // Catch: java.lang.Throwable -> Lc0
            r7.e = r4     // Catch: java.lang.Throwable -> Lc0
            java.lang.String r4 = r8.getMessageSource()     // Catch: java.lang.Throwable -> Lc0
            boolean r4 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> Lc0
            if (r4 == 0) goto L39
            java.lang.String r8 = ""
            goto L3d
        L39:
            java.lang.String r8 = r8.getMessageSource()     // Catch: java.lang.Throwable -> Lc0
        L3d:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lc0
            r4.<init>()     // Catch: java.lang.Throwable -> Lc0
            r4.append(r8)     // Catch: java.lang.Throwable -> Lc0
            java.util.UUID r8 = java.util.UUID.randomUUID()     // Catch: java.lang.Throwable -> Lc0
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> Lc0
            r4.append(r8)     // Catch: java.lang.Throwable -> Lc0
            java.lang.String r8 = r4.toString()     // Catch: java.lang.Throwable -> Lc0
            r7.c = r8     // Catch: java.lang.Throwable -> Lc0
            java.lang.String r8 = r7.d     // Catch: java.lang.Throwable -> Lc0
            java.lang.String r8 = com.igexin.assist.util.a.a(r5, r8)     // Catch: java.lang.Throwable -> Lc0
            boolean r4 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> Lc0
            if (r4 != 0) goto Lc0
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lc0
            r4.<init>(r8)     // Catch: java.lang.Throwable -> Lc0
            boolean r8 = r4.has(r2)     // Catch: java.lang.Throwable -> Lc0
            if (r8 == 0) goto L73
            java.lang.String r8 = r4.getString(r2)     // Catch: java.lang.Throwable -> Lc0
            r7.b = r8     // Catch: java.lang.Throwable -> Lc0
        L73:
            boolean r8 = r4.has(r1)     // Catch: java.lang.Throwable -> Lc0
            if (r8 == 0) goto L7f
            java.lang.String r8 = r4.getString(r1)     // Catch: java.lang.Throwable -> Lc0
            r7.f = r8     // Catch: java.lang.Throwable -> Lc0
        L7f:
            boolean r8 = r4.has(r3)     // Catch: java.lang.Throwable -> Lc0
            if (r8 == 0) goto L99
            java.lang.String r8 = r4.getString(r3)     // Catch: java.lang.Throwable -> Lc0
            boolean r8 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> Lc0
            if (r8 != 0) goto L99
            java.lang.String r8 = r4.getString(r3)     // Catch: java.lang.Throwable -> Lc0
            byte[] r8 = r8.getBytes()     // Catch: java.lang.Throwable -> Lc0
            r7.a = r8     // Catch: java.lang.Throwable -> Lc0
        L99:
            boolean r8 = r4.has(r0)     // Catch: java.lang.Throwable -> Lc0
            if (r8 == 0) goto Lc0
            java.lang.String r8 = r4.getString(r0)     // Catch: java.lang.Throwable -> Lc0
            r7.g = r8     // Catch: java.lang.Throwable -> Lc0
            boolean r8 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> Lc0
            if (r8 != 0) goto Lc0
            org.json.JSONObject r8 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lc0
            java.lang.String r0 = r7.g     // Catch: java.lang.Throwable -> Lc0
            r8.<init>(r0)     // Catch: java.lang.Throwable -> Lc0
            java.lang.String r0 = "extra_actionid"
            java.lang.String r1 = "40550"
            r8.put(r0, r1)     // Catch: java.lang.Throwable -> Lc0
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> Lc0
            r7.g = r8     // Catch: java.lang.Throwable -> Lc0
        Lc0:
            return
    }

    public boolean a(boolean r2) {
            r1 = this;
            byte[] r0 = r1.a
            if (r0 != 0) goto La
            java.lang.String r0 = r1.g
            if (r0 == 0) goto L35
            if (r2 == 0) goto L35
        La:
            java.lang.String r2 = r1.b
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L35
            java.lang.String r2 = r1.e
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L35
            java.lang.String r2 = r1.d
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L35
            java.lang.String r2 = r1.f
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L35
            java.lang.String r2 = r1.c
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 == 0) goto L33
            goto L35
        L33:
            r2 = 1
            return r2
        L35:
            r2 = 0
            return r2
    }

    public byte[] a() {
            r1 = this;
            byte[] r0 = r1.a
            return r0
    }

    public java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public java.lang.String c() {
            r1 = this;
            java.lang.String r0 = r1.c
            return r0
    }

    public java.lang.String d() {
            r1 = this;
            java.lang.String r0 = r1.d
            return r0
    }

    public java.lang.String e() {
            r1 = this;
            java.lang.String r0 = r1.f
            return r0
    }

    public java.lang.String f() {
            r1 = this;
            java.lang.String r0 = r1.g
            return r0
    }
}
