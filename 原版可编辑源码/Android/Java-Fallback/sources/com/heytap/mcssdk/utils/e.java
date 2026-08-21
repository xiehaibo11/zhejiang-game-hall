package com.heytap.mcssdk.utils;

public class e {
    private static final java.lang.String a = "shared_msg_sdk";
    private static final java.lang.String b = "hasDefaultChannelCreated";
    private static final java.lang.String c = "lastUpLoadInfoSDKVersionName";
    private static final java.lang.String d = "lastUploadInfoUniqueID";
    private static final java.lang.String e = "decryptTag";
    private android.content.Context f;
    private android.content.SharedPreferences g;
    private java.lang.Object h;

    static class 1 {
    }

    private static class a {
        static com.heytap.mcssdk.utils.e a;

        static {
                com.heytap.mcssdk.utils.e r0 = new com.heytap.mcssdk.utils.e
                r1 = 0
                r0.<init>(r1)
                com.heytap.mcssdk.utils.e.a.a = r0
                return
        }

        private a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    private e() {
            r3 = this;
            r3.<init>()
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r3.h = r0
            com.heytap.mcssdk.PushService r0 = com.heytap.mcssdk.PushService.getInstance()
            android.content.Context r0 = r0.getContext()
            if (r0 == 0) goto L1a
            android.content.Context r0 = r3.a(r0)
            r3.f = r0
        L1a:
            android.content.Context r0 = r3.f
            if (r0 == 0) goto L27
            r1 = 0
            java.lang.String r2 = "shared_msg_sdk"
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r2, r1)
            r3.g = r0
        L27:
            return
    }

    e(com.heytap.mcssdk.utils.e.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    private android.content.Context a(android.content.Context r4) {
            r3 = this;
            boolean r0 = com.heytap.mcssdk.utils.a.a()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "fbeVersion is "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.heytap.mcssdk.utils.d.b(r1)
            if (r0 == 0) goto L25
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            if (r0 < r1) goto L25
            android.content.Context r4 = r4.createDeviceProtectedStorageContext()
            return r4
        L25:
            android.content.Context r4 = r4.getApplicationContext()
            return r4
    }

    public static com.heytap.mcssdk.utils.e f() {
            com.heytap.mcssdk.utils.e r0 = com.heytap.mcssdk.utils.e.a.a
            return r0
    }

    private android.content.SharedPreferences g() {
            r4 = this;
            android.content.SharedPreferences r0 = r4.g
            if (r0 == 0) goto L5
            return r0
        L5:
            java.lang.Object r0 = r4.h
            monitor-enter(r0)
            android.content.SharedPreferences r1 = r4.g     // Catch: java.lang.Throwable -> L21
            if (r1 != 0) goto L1d
            android.content.Context r1 = r4.f     // Catch: java.lang.Throwable -> L21
            if (r1 == 0) goto L1d
            android.content.Context r1 = r4.f     // Catch: java.lang.Throwable -> L21
            java.lang.String r2 = "shared_msg_sdk"
            r3 = 0
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r2, r3)     // Catch: java.lang.Throwable -> L21
            r4.g = r1     // Catch: java.lang.Throwable -> L21
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L21
            return r1
        L1d:
            android.content.SharedPreferences r1 = r4.g     // Catch: java.lang.Throwable -> L21
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L21
            return r1
        L21:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L21
            throw r1
    }

    public int a(java.lang.String r2, int r3) {
            r1 = this;
            android.content.SharedPreferences r0 = r1.g()
            if (r0 == 0) goto Lb
            int r2 = r0.getInt(r2, r3)
            return r2
        Lb:
            return r3
    }

    public long a(java.lang.String r2, long r3) {
            r1 = this;
            android.content.SharedPreferences r0 = r1.g()
            if (r0 == 0) goto Lb
            long r2 = r0.getLong(r2, r3)
            return r2
        Lb:
            return r3
    }

    public void a(java.lang.String r3) {
            r2 = this;
            android.content.SharedPreferences r0 = r2.g()
            if (r0 == 0) goto L13
            android.content.SharedPreferences$Editor r0 = r0.edit()
            java.lang.String r1 = "lastUploadInfoUniqueID"
            android.content.SharedPreferences$Editor r3 = r0.putString(r1, r3)
            r3.commit()
        L13:
            return
    }

    public void a(boolean r3) {
            r2 = this;
            android.content.SharedPreferences r0 = r2.g()
            if (r0 == 0) goto L13
            android.content.SharedPreferences$Editor r0 = r0.edit()
            java.lang.String r1 = "hasDefaultChannelCreated"
            android.content.SharedPreferences$Editor r3 = r0.putBoolean(r1, r3)
            r3.commit()
        L13:
            return
    }

    public boolean a() {
            r3 = this;
            android.content.SharedPreferences r0 = r3.g()
            r1 = 0
            if (r0 == 0) goto Ld
            java.lang.String r2 = "hasDefaultChannelCreated"
            boolean r1 = r0.getBoolean(r2, r1)
        Ld:
            return r1
    }

    public void b() {
            r3 = this;
            android.content.SharedPreferences r0 = r3.g()
            if (r0 == 0) goto L15
            android.content.SharedPreferences$Editor r0 = r0.edit()
            java.lang.String r1 = "lastUpLoadInfoSDKVersionName"
            java.lang.String r2 = "3.0.0"
            android.content.SharedPreferences$Editor r0 = r0.putString(r1, r2)
            r0.commit()
        L15:
            return
    }

    public void b(java.lang.String r3) {
            r2 = this;
            android.content.SharedPreferences r0 = r2.g()
            if (r0 == 0) goto L13
            android.content.SharedPreferences$Editor r0 = r0.edit()
            java.lang.String r1 = "decryptTag"
            android.content.SharedPreferences$Editor r3 = r0.putString(r1, r3)
            r3.commit()
        L13:
            return
    }

    public void b(java.lang.String r2, int r3) {
            r1 = this;
            android.content.SharedPreferences r0 = r1.g()
            if (r0 == 0) goto L10
            android.content.SharedPreferences$Editor r0 = r0.edit()
            r0.putInt(r2, r3)
            r0.apply()
        L10:
            return
    }

    public void b(java.lang.String r2, long r3) {
            r1 = this;
            android.content.SharedPreferences r0 = r1.g()
            if (r0 == 0) goto L10
            android.content.SharedPreferences$Editor r0 = r0.edit()
            r0.putLong(r2, r3)
            r0.apply()
        L10:
            return
    }

    public int c(java.lang.String r3) {
            r2 = this;
            android.content.SharedPreferences r0 = r2.g()
            r1 = 0
            if (r0 == 0) goto Lc
            int r3 = r0.getInt(r3, r1)
            return r3
        Lc:
            return r1
    }

    public java.lang.String c() {
            r3 = this;
            android.content.SharedPreferences r0 = r3.g()
            java.lang.String r1 = ""
            if (r0 == 0) goto Le
            java.lang.String r2 = "lastUploadInfoUniqueID"
            java.lang.String r1 = r0.getString(r2, r1)
        Le:
            return r1
    }

    public long d(java.lang.String r4) {
            r3 = this;
            android.content.SharedPreferences r0 = r3.g()
            if (r0 == 0) goto L11
            java.lang.Long r1 = com.heytap.mcssdk.constant.a.b
            long r1 = r1.longValue()
            long r0 = r0.getLong(r4, r1)
            return r0
        L11:
            java.lang.Long r4 = com.heytap.mcssdk.constant.a.b
            long r0 = r4.longValue()
            return r0
    }

    public java.lang.String d() {
            r3 = this;
            android.content.SharedPreferences r0 = r3.g()
            java.lang.String r1 = ""
            if (r0 == 0) goto Le
            java.lang.String r2 = "lastUpLoadInfoSDKVersionName"
            java.lang.String r1 = r0.getString(r2, r1)
        Le:
            return r1
    }

    public java.lang.String e() {
            r3 = this;
            android.content.SharedPreferences r0 = r3.g()
            java.lang.String r1 = "DES"
            if (r0 == 0) goto Le
            java.lang.String r2 = "decryptTag"
            java.lang.String r1 = r0.getString(r2, r1)
        Le:
            return r1
    }
}
