package com.alipay.sdk.m.i0;

public class f {
    public static volatile com.alipay.sdk.m.i0.f g;
    public static boolean h;
    public com.alipay.sdk.m.i0.a a;
    public com.alipay.sdk.m.i0.a b;
    public com.alipay.sdk.m.i0.a c;
    public com.alipay.sdk.m.i0.a d;
    public com.alipay.sdk.m.i0.c e;
    public android.content.BroadcastReceiver f;

    static {
            return
    }

    public f() {
            r2 = this;
            r2.<init>()
            com.alipay.sdk.m.i0.a r0 = new com.alipay.sdk.m.i0.a
            java.lang.String r1 = "udid"
            r0.<init>(r1)
            r2.a = r0
            com.alipay.sdk.m.i0.a r0 = new com.alipay.sdk.m.i0.a
            java.lang.String r1 = "oaid"
            r0.<init>(r1)
            r2.b = r0
            com.alipay.sdk.m.i0.a r0 = new com.alipay.sdk.m.i0.a
            java.lang.String r1 = "vaid"
            r0.<init>(r1)
            r2.d = r0
            com.alipay.sdk.m.i0.a r0 = new com.alipay.sdk.m.i0.a
            java.lang.String r1 = "aaid"
            r0.<init>(r1)
            r2.c = r0
            com.alipay.sdk.m.i0.c r0 = new com.alipay.sdk.m.i0.c
            r0.<init>()
            r2.e = r0
            return
    }

    public static com.alipay.sdk.m.i0.d a(android.database.Cursor r3) {
            com.alipay.sdk.m.i0.d r0 = new com.alipay.sdk.m.i0.d
            r1 = 0
            r2 = 0
            r0.<init>(r1, r2)
            if (r3 != 0) goto Lf
            java.lang.String r3 = "parseValue fail, cursor is null."
        Lb:
            a(r3)
            return r0
        Lf:
            boolean r1 = r3.isClosed()
            if (r1 == 0) goto L18
            java.lang.String r3 = "parseValue fail, cursor is closed."
            goto Lb
        L18:
            r3.moveToFirst()
            java.lang.String r1 = "value"
            int r1 = r3.getColumnIndex(r1)
            if (r1 < 0) goto L2a
            java.lang.String r1 = r3.getString(r1)
            r0.a = r1
            goto L2f
        L2a:
            java.lang.String r1 = "parseValue fail, index < 0."
            a(r1)
        L2f:
            java.lang.String r1 = "code"
            int r1 = r3.getColumnIndex(r1)
            if (r1 < 0) goto L3e
            int r1 = r3.getInt(r1)
            r0.b = r1
            goto L43
        L3e:
            java.lang.String r1 = "parseCode fail, index < 0."
            a(r1)
        L43:
            java.lang.String r1 = "expired"
            int r1 = r3.getColumnIndex(r1)
            if (r1 < 0) goto L52
            long r1 = r3.getLong(r1)
            r0.c = r1
            goto L57
        L52:
            java.lang.String r3 = "parseExpired fail, index < 0."
            a(r3)
        L57:
            return r0
    }

    public static final com.alipay.sdk.m.i0.f a() {
            com.alipay.sdk.m.i0.f r0 = com.alipay.sdk.m.i0.f.g
            if (r0 != 0) goto L17
            java.lang.Class<com.alipay.sdk.m.i0.f> r0 = com.alipay.sdk.m.i0.f.class
            monitor-enter(r0)
            com.alipay.sdk.m.i0.f r1 = com.alipay.sdk.m.i0.f.g     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.alipay.sdk.m.i0.f r1 = new com.alipay.sdk.m.i0.f     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.alipay.sdk.m.i0.f.g = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.alipay.sdk.m.i0.f r0 = com.alipay.sdk.m.i0.f.g
            return r0
    }

    public static java.lang.String a(android.content.pm.PackageManager r2, java.lang.String r3) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            r1 = 0
            android.content.pm.ProviderInfo r2 = r2.resolveContentProvider(r3, r1)
            if (r2 != 0) goto Lc
            return r0
        Lc:
            android.content.pm.ApplicationInfo r3 = r2.applicationInfo
            int r3 = r3.flags
            r3 = r3 & 1
            if (r3 != 0) goto L15
            return r0
        L15:
            java.lang.String r2 = r2.packageName
            return r2
    }

    public static void a(java.lang.String r1) {
            boolean r0 = com.alipay.sdk.m.i0.f.h
            if (r0 == 0) goto L9
            java.lang.String r0 = "OpenIdManager"
            android.util.Log.d(r0, r1)
        L9:
            return
    }

    public static void a(boolean r0) {
            com.alipay.sdk.m.i0.f.h = r0
            return
    }

    public static boolean a(android.content.Context r8) {
            java.lang.String r0 = "querySupport version : 1.0.8"
            a(r0)
            java.lang.String r0 = "content://com.meizu.flyme.openidsdk/"
            android.net.Uri r2 = android.net.Uri.parse(r0)
            r0 = 0
            r7 = 0
            android.content.ContentResolver r1 = r8.getContentResolver()     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            r3 = 0
            r4 = 0
            java.lang.String r8 = "supported"
            java.lang.String[] r5 = new java.lang.String[]{r8}     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            r6 = 0
            android.database.Cursor r7 = r1.query(r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            if (r7 == 0) goto L3b
            com.alipay.sdk.m.i0.d r8 = a(r7)     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            r1 = 1000(0x3e8, float:1.401E-42)
            int r2 = r8.b     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            if (r1 != r2) goto L34
            java.lang.String r1 = "0"
            java.lang.String r8 = r8.a     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            boolean r8 = r1.equals(r8)     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            if (r8 == 0) goto L35
        L34:
            r0 = 1
        L35:
            if (r7 == 0) goto L3a
            r7.close()
        L3a:
            return r0
        L3b:
            if (r7 == 0) goto L5b
            goto L58
        L3e:
            r8 = move-exception
            goto L5c
        L40:
            r8 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3e
            java.lang.String r2 = "querySupport, Exception : "
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L3e
            java.lang.String r8 = r8.getMessage()     // Catch: java.lang.Throwable -> L3e
            r1.append(r8)     // Catch: java.lang.Throwable -> L3e
            java.lang.String r8 = r1.toString()     // Catch: java.lang.Throwable -> L3e
            a(r8)     // Catch: java.lang.Throwable -> L3e
            if (r7 == 0) goto L5b
        L58:
            r7.close()
        L5b:
            return r0
        L5c:
            if (r7 == 0) goto L61
            r7.close()
        L61:
            throw r8
    }

    private java.lang.String b(android.content.Context r10, com.alipay.sdk.m.i0.a r11) {
            r9 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "queryId : "
            r0.<init>(r1)
            java.lang.String r1 = r11.c
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            a(r0)
            java.lang.String r0 = "content://com.meizu.flyme.openidsdk/"
            android.net.Uri r2 = android.net.Uri.parse(r0)
            r0 = 0
            android.content.ContentResolver r1 = r10.getContentResolver()     // Catch: java.lang.Throwable -> L99 java.lang.Exception -> L9b
            r3 = 0
            r4 = 0
            r7 = 1
            java.lang.String[] r5 = new java.lang.String[r7]     // Catch: java.lang.Throwable -> L99 java.lang.Exception -> L9b
            java.lang.String r6 = r11.c     // Catch: java.lang.Throwable -> L99 java.lang.Exception -> L9b
            r8 = 0
            r5[r8] = r6     // Catch: java.lang.Throwable -> L99 java.lang.Exception -> L9b
            r6 = 0
            android.database.Cursor r1 = r1.query(r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L99 java.lang.Exception -> L9b
            if (r1 == 0) goto L7b
            com.alipay.sdk.m.i0.d r2 = a(r1)     // Catch: java.lang.Throwable -> L92 java.lang.Exception -> L95
            java.lang.String r0 = r2.a     // Catch: java.lang.Throwable -> L92 java.lang.Exception -> L95
            r11.a(r0)     // Catch: java.lang.Throwable -> L92 java.lang.Exception -> L95
            long r3 = r2.c     // Catch: java.lang.Throwable -> L92 java.lang.Exception -> L95
            r11.a(r3)     // Catch: java.lang.Throwable -> L92 java.lang.Exception -> L95
            int r3 = r2.b     // Catch: java.lang.Throwable -> L92 java.lang.Exception -> L95
            r11.a(r3)     // Catch: java.lang.Throwable -> L92 java.lang.Exception -> L95
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L92 java.lang.Exception -> L95
            r3.<init>()     // Catch: java.lang.Throwable -> L92 java.lang.Exception -> L95
            java.lang.String r4 = r11.c     // Catch: java.lang.Throwable -> L92 java.lang.Exception -> L95
            r3.append(r4)     // Catch: java.lang.Throwable -> L92 java.lang.Exception -> L95
            java.lang.String r4 = " errorCode : "
            r3.append(r4)     // Catch: java.lang.Throwable -> L92 java.lang.Exception -> L95
            int r11 = r11.d     // Catch: java.lang.Throwable -> L92 java.lang.Exception -> L95
            r3.append(r11)     // Catch: java.lang.Throwable -> L92 java.lang.Exception -> L95
            java.lang.String r11 = r3.toString()     // Catch: java.lang.Throwable -> L92 java.lang.Exception -> L95
            a(r11)     // Catch: java.lang.Throwable -> L92 java.lang.Exception -> L95
            int r11 = r2.b     // Catch: java.lang.Throwable -> L92 java.lang.Exception -> L95
            r2 = 1000(0x3e8, float:1.401E-42)
            if (r11 == r2) goto L8f
            r9.b(r10)     // Catch: java.lang.Throwable -> L92 java.lang.Exception -> L95
            boolean r11 = r9.a(r10, r8)     // Catch: java.lang.Throwable -> L92 java.lang.Exception -> L95
            if (r11 != 0) goto L8f
            boolean r10 = r9.a(r10, r7)     // Catch: java.lang.Throwable -> L92 java.lang.Exception -> L95
            java.lang.String r11 = "not support, forceQuery isSupported: "
            java.lang.String r10 = java.lang.String.valueOf(r10)     // Catch: java.lang.Throwable -> L92 java.lang.Exception -> L95
        L76:
            java.lang.String r10 = r11.concat(r10)     // Catch: java.lang.Throwable -> L92 java.lang.Exception -> L95
            goto L8c
        L7b:
            boolean r11 = r9.a(r10, r8)     // Catch: java.lang.Throwable -> L92 java.lang.Exception -> L95
            if (r11 == 0) goto L8f
            boolean r10 = r9.a(r10, r7)     // Catch: java.lang.Throwable -> L92 java.lang.Exception -> L95
            java.lang.String r11 = "forceQuery isSupported : "
            java.lang.String r10 = java.lang.String.valueOf(r10)     // Catch: java.lang.Throwable -> L92 java.lang.Exception -> L95
            goto L76
        L8c:
            a(r10)     // Catch: java.lang.Throwable -> L92 java.lang.Exception -> L95
        L8f:
            if (r1 == 0) goto Lbb
            goto Lb6
        L92:
            r10 = move-exception
            r0 = r1
            goto Lbc
        L95:
            r10 = move-exception
            r11 = r0
            r0 = r1
            goto L9d
        L99:
            r10 = move-exception
            goto Lbc
        L9b:
            r10 = move-exception
            r11 = r0
        L9d:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L99
            java.lang.String r2 = "queryId, Exception : "
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L99
            java.lang.String r10 = r10.getMessage()     // Catch: java.lang.Throwable -> L99
            r1.append(r10)     // Catch: java.lang.Throwable -> L99
            java.lang.String r10 = r1.toString()     // Catch: java.lang.Throwable -> L99
            a(r10)     // Catch: java.lang.Throwable -> L99
            if (r0 == 0) goto Lba
            r1 = r0
            r0 = r11
        Lb6:
            r1.close()
            goto Lbb
        Lba:
            r0 = r11
        Lbb:
            return r0
        Lbc:
            if (r0 == 0) goto Lc1
            r0.close()
        Lc1:
            goto Lc3
        Lc2:
            throw r10
        Lc3:
            goto Lc2
    }

    public static java.lang.String b(android.content.pm.PackageManager r1, java.lang.String r2) {
            r0 = 0
            android.content.pm.PackageInfo r1 = r1.getPackageInfo(r2, r0)     // Catch: java.lang.Exception -> La
            if (r1 == 0) goto L23
            java.lang.String r1 = r1.versionName     // Catch: java.lang.Exception -> La
            return r1
        La:
            r1 = move-exception
            r1.printStackTrace()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r0 = "getAppVersion, Exception : "
            r2.<init>(r0)
            java.lang.String r1 = r1.getMessage()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            a(r1)
        L23:
            r1 = 0
            return r1
    }

    private synchronized void b(android.content.Context r5) {
            r4 = this;
            monitor-enter(r4)
            android.content.BroadcastReceiver r0 = r4.f     // Catch: java.lang.Throwable -> L20
            if (r0 == 0) goto L7
            monitor-exit(r4)
            return
        L7:
            android.content.IntentFilter r0 = new android.content.IntentFilter     // Catch: java.lang.Throwable -> L20
            r0.<init>()     // Catch: java.lang.Throwable -> L20
            java.lang.String r1 = "com.meizu.flyme.openid.ACTION_OPEN_ID_CHANGE"
            r0.addAction(r1)     // Catch: java.lang.Throwable -> L20
            com.alipay.sdk.m.i0.e r1 = new com.alipay.sdk.m.i0.e     // Catch: java.lang.Throwable -> L20
            r1.<init>()     // Catch: java.lang.Throwable -> L20
            r4.f = r1     // Catch: java.lang.Throwable -> L20
            java.lang.String r2 = "com.meizu.flyme.openid.permission.OPEN_ID_CHANGE"
            r3 = 0
            r5.registerReceiver(r1, r0, r2, r3)     // Catch: java.lang.Throwable -> L20
            monitor-exit(r4)
            return
        L20:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    public final java.lang.String a(android.content.Context r3, com.alipay.sdk.m.i0.a r4) {
            r2 = this;
            r0 = 0
            if (r4 != 0) goto L9
            java.lang.String r3 = "getId, openId = null."
        L5:
            a(r3)
            return r0
        L9:
            boolean r1 = r4.a()
            if (r1 == 0) goto L12
            java.lang.String r3 = r4.b
            return r3
        L12:
            r1 = 1
            boolean r1 = r2.a(r3, r1)
            if (r1 != 0) goto L1c
            java.lang.String r3 = "getId, isSupported = false."
            goto L5
        L1c:
            java.lang.String r3 = r2.b(r3, r4)
            return r3
    }

    public final boolean a(android.content.Context r4, boolean r5) {
            r3 = this;
            com.alipay.sdk.m.i0.c r0 = r3.e
            boolean r0 = r0.a()
            if (r0 == 0) goto L11
            if (r5 != 0) goto L11
            com.alipay.sdk.m.i0.c r4 = r3.e
            boolean r4 = r4.b()
            return r4
        L11:
            android.content.pm.PackageManager r5 = r4.getPackageManager()
            r0 = 0
            if (r5 != 0) goto L19
            return r0
        L19:
            java.lang.String r1 = "com.meizu.flyme.openidsdk"
            java.lang.String r1 = a(r5, r1)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 == 0) goto L26
            return r0
        L26:
            java.lang.String r5 = b(r5, r1)
            com.alipay.sdk.m.i0.c r0 = r3.e
            boolean r0 = r0.a()
            if (r0 == 0) goto L4e
            com.alipay.sdk.m.i0.c r0 = r3.e
            boolean r0 = r0.a(r5)
            if (r0 == 0) goto L4e
            java.lang.String r4 = java.lang.String.valueOf(r5)
            java.lang.String r5 = "use same version cache, safeVersion : "
            java.lang.String r4 = r5.concat(r4)
            a(r4)
            com.alipay.sdk.m.i0.c r4 = r3.e
            boolean r4 = r4.b()
            return r4
        L4e:
            com.alipay.sdk.m.i0.c r0 = r3.e
            r0.b(r5)
            boolean r4 = a(r4)
            java.lang.String r5 = java.lang.String.valueOf(r4)
            java.lang.String r0 = "query support, result : "
            java.lang.String r5 = r0.concat(r5)
            a(r5)
            com.alipay.sdk.m.i0.c r5 = r3.e
            r5.a(r4)
            return r4
    }
}
