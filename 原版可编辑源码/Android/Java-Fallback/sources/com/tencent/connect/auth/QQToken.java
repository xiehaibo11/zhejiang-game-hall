package com.tencent.connect.auth;

public class QQToken {
    public static final int AUTH_QQ = 2;
    public static final int AUTH_QZONE = 3;
    public static final int AUTH_WEB = 1;
    private static android.content.SharedPreferences g;
    private java.lang.String a;
    private java.lang.String b;
    private java.lang.String c;
    private int d;
    private long e;
    private com.tencent.open.utils.a f;

    public QQToken(java.lang.String r3) {
            r2 = this;
            r2.<init>()
            r0 = 1
            r2.d = r0
            r0 = -1
            r2.e = r0
            r2.a = r3
            return
    }

    private static synchronized android.content.SharedPreferences a() {
            java.lang.Class<com.tencent.connect.auth.QQToken> r0 = com.tencent.connect.auth.QQToken.class
            monitor-enter(r0)
            android.content.SharedPreferences r1 = com.tencent.connect.auth.QQToken.g     // Catch: java.lang.Throwable -> L18
            if (r1 != 0) goto L14
            android.content.Context r1 = com.tencent.open.utils.g.a()     // Catch: java.lang.Throwable -> L18
            java.lang.String r2 = "token_info_file"
            r3 = 0
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r2, r3)     // Catch: java.lang.Throwable -> L18
            com.tencent.connect.auth.QQToken.g = r1     // Catch: java.lang.Throwable -> L18
        L14:
            android.content.SharedPreferences r1 = com.tencent.connect.auth.QQToken.g     // Catch: java.lang.Throwable -> L18
            monitor-exit(r0)
            return r1
        L18:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    private static java.lang.String a(java.lang.String r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            byte[] r2 = com.tencent.open.utils.m.j(r2)
            r1 = 2
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r1)
            r0.append(r2)
            java.lang.String r2 = "_aes_google"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
    }

    private static synchronized org.json.JSONObject a(java.lang.String r5, com.tencent.open.utils.a r6) {
            java.lang.Class<com.tencent.connect.auth.QQToken> r0 = com.tencent.connect.auth.QQToken.class
            monitor-enter(r0)
            android.content.Context r1 = com.tencent.open.utils.g.a()     // Catch: java.lang.Throwable -> L15a
            r2 = 0
            if (r1 != 0) goto L13
            java.lang.String r5 = "QQToken"
            java.lang.String r6 = "loadJsonPreference context null"
            com.tencent.open.log.SLog.i(r5, r6)     // Catch: java.lang.Throwable -> L15a
            monitor-exit(r0)
            return r2
        L13:
            if (r5 != 0) goto L1e
            java.lang.String r5 = "QQToken"
            java.lang.String r6 = "loadJsonPreference prefKey is null"
            com.tencent.open.log.SLog.i(r5, r6)     // Catch: java.lang.Throwable -> L15a
            monitor-exit(r0)
            return r2
        L1e:
            java.lang.String r1 = a(r5)     // Catch: java.lang.Throwable -> L15a
            android.content.SharedPreferences r3 = a()     // Catch: java.lang.Throwable -> L15a
            java.lang.String r4 = ""
            java.lang.String r1 = r3.getString(r1, r4)     // Catch: java.lang.Throwable -> L15a
            boolean r3 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L15a
            if (r3 == 0) goto L12b
            boolean r1 = com.tencent.open.web.security.JniInterface.isJniOk     // Catch: java.lang.Throwable -> L15a
            if (r1 != 0) goto L41
            java.lang.String r1 = com.tencent.connect.auth.AuthAgent.SECURE_LIB_FILE_NAME     // Catch: java.lang.Throwable -> L15a
            java.lang.String r3 = com.tencent.connect.auth.AuthAgent.SECURE_LIB_NAME     // Catch: java.lang.Throwable -> L15a
            r4 = 5
            com.tencent.open.utils.k.a(r1, r3, r4)     // Catch: java.lang.Throwable -> L15a
            com.tencent.open.web.security.JniInterface.loadSo()     // Catch: java.lang.Throwable -> L15a
        L41:
            boolean r1 = com.tencent.open.web.security.JniInterface.isJniOk     // Catch: java.lang.Throwable -> L15a
            if (r1 != 0) goto L4e
            java.lang.String r5 = "QQToken"
            java.lang.String r6 = "loadJsonPreference jni load fail SECURE_LIB_VERSION=5"
            com.tencent.open.log.SLog.i(r5, r6)     // Catch: java.lang.Throwable -> L15a
            monitor-exit(r0)
            return r2
        L4e:
            java.lang.String r1 = c(r5)     // Catch: java.lang.Throwable -> L15a
            android.content.SharedPreferences r3 = a()     // Catch: java.lang.Throwable -> L15a
            java.lang.String r4 = ""
            java.lang.String r3 = r3.getString(r1, r4)     // Catch: java.lang.Throwable -> L15a
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L15a
            if (r4 == 0) goto Le4
            java.lang.String r1 = b(r5)     // Catch: java.lang.Throwable -> L15a
            android.content.SharedPreferences r3 = a()     // Catch: java.lang.Throwable -> L15a
            java.lang.String r4 = ""
            java.lang.String r3 = r3.getString(r1, r4)     // Catch: java.lang.Throwable -> L15a
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L15a
            if (r4 == 0) goto L7f
            java.lang.String r5 = "QQToken"
            java.lang.String r6 = "loadJsonPreference oldDesValue null"
            com.tencent.open.log.SLog.i(r5, r6)     // Catch: java.lang.Throwable -> L15a
            monitor-exit(r0)
            return r2
        L7f:
            java.lang.String r3 = com.tencent.open.web.security.JniInterface.d1(r3)     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbb
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbb
            if (r4 == 0) goto La1
            java.lang.String r5 = "QQToken"
            java.lang.String r6 = "loadJsonPreference decodeResult d1 empty"
            com.tencent.open.log.SLog.i(r5, r6)     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbb
            android.content.SharedPreferences r5 = a()     // Catch: java.lang.Throwable -> L15a
            android.content.SharedPreferences$Editor r5 = r5.edit()     // Catch: java.lang.Throwable -> L15a
            android.content.SharedPreferences$Editor r5 = r5.remove(r1)     // Catch: java.lang.Throwable -> L15a
            r5.apply()     // Catch: java.lang.Throwable -> L15a
            monitor-exit(r0)
            return r2
        La1:
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbb
            r4.<init>(r3)     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbb
            a(r5, r4, r6)     // Catch: java.lang.Throwable -> Lb9 java.lang.Exception -> Lbb
            android.content.SharedPreferences r5 = a()     // Catch: java.lang.Throwable -> L15a
            android.content.SharedPreferences$Editor r5 = r5.edit()     // Catch: java.lang.Throwable -> L15a
            android.content.SharedPreferences$Editor r5 = r5.remove(r1)     // Catch: java.lang.Throwable -> L15a
            r5.apply()     // Catch: java.lang.Throwable -> L15a
            goto L12f
        Lb9:
            r5 = move-exception
            goto Ld4
        Lbb:
            r5 = move-exception
            java.lang.String r6 = "QQToken"
            java.lang.String r3 = "Catch Exception"
            com.tencent.open.log.SLog.e(r6, r3, r5)     // Catch: java.lang.Throwable -> Lb9
            android.content.SharedPreferences r5 = a()     // Catch: java.lang.Throwable -> L15a
            android.content.SharedPreferences$Editor r5 = r5.edit()     // Catch: java.lang.Throwable -> L15a
            android.content.SharedPreferences$Editor r5 = r5.remove(r1)     // Catch: java.lang.Throwable -> L15a
            r5.apply()     // Catch: java.lang.Throwable -> L15a
            monitor-exit(r0)
            return r2
        Ld4:
            android.content.SharedPreferences r6 = a()     // Catch: java.lang.Throwable -> L15a
            android.content.SharedPreferences$Editor r6 = r6.edit()     // Catch: java.lang.Throwable -> L15a
            android.content.SharedPreferences$Editor r6 = r6.remove(r1)     // Catch: java.lang.Throwable -> L15a
            r6.apply()     // Catch: java.lang.Throwable -> L15a
            throw r5     // Catch: java.lang.Throwable -> L15a
        Le4:
            java.lang.String r3 = com.tencent.open.web.security.JniInterface.d2(r3)     // Catch: java.lang.Throwable -> L100 java.lang.Exception -> L102
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L100 java.lang.Exception -> L102
            r4.<init>(r3)     // Catch: java.lang.Throwable -> L100 java.lang.Exception -> L102
            a(r5, r4, r6)     // Catch: java.lang.Throwable -> L100 java.lang.Exception -> L102
            android.content.SharedPreferences r5 = a()     // Catch: java.lang.Throwable -> L15a
            android.content.SharedPreferences$Editor r5 = r5.edit()     // Catch: java.lang.Throwable -> L15a
            android.content.SharedPreferences$Editor r5 = r5.remove(r1)     // Catch: java.lang.Throwable -> L15a
            r5.apply()     // Catch: java.lang.Throwable -> L15a
            goto L12f
        L100:
            r5 = move-exception
            goto L11b
        L102:
            r5 = move-exception
            java.lang.String r6 = "QQToken"
            java.lang.String r3 = "Catch Exception"
            com.tencent.open.log.SLog.e(r6, r3, r5)     // Catch: java.lang.Throwable -> L100
            android.content.SharedPreferences r5 = a()     // Catch: java.lang.Throwable -> L15a
            android.content.SharedPreferences$Editor r5 = r5.edit()     // Catch: java.lang.Throwable -> L15a
            android.content.SharedPreferences$Editor r5 = r5.remove(r1)     // Catch: java.lang.Throwable -> L15a
            r5.apply()     // Catch: java.lang.Throwable -> L15a
            monitor-exit(r0)
            return r2
        L11b:
            android.content.SharedPreferences r6 = a()     // Catch: java.lang.Throwable -> L15a
            android.content.SharedPreferences$Editor r6 = r6.edit()     // Catch: java.lang.Throwable -> L15a
            android.content.SharedPreferences$Editor r6 = r6.remove(r1)     // Catch: java.lang.Throwable -> L15a
            r6.apply()     // Catch: java.lang.Throwable -> L15a
            throw r5     // Catch: java.lang.Throwable -> L15a
        L12b:
            java.lang.String r3 = r6.b(r1)     // Catch: java.lang.Throwable -> L15a
        L12f:
            org.json.JSONObject r5 = new org.json.JSONObject     // Catch: java.lang.Exception -> L13d java.lang.Throwable -> L15a
            r5.<init>(r3)     // Catch: java.lang.Exception -> L13d java.lang.Throwable -> L15a
            java.lang.String r6 = "QQToken"
            java.lang.String r1 = "loadJsonPreference sucess"
            com.tencent.open.log.SLog.i(r6, r1)     // Catch: java.lang.Throwable -> L15a
            monitor-exit(r0)
            return r5
        L13d:
            r5 = move-exception
            java.lang.String r6 = "QQToken"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L15a
            r1.<init>()     // Catch: java.lang.Throwable -> L15a
            java.lang.String r3 = "loadJsonPreference decode "
            r1.append(r3)     // Catch: java.lang.Throwable -> L15a
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L15a
            r1.append(r5)     // Catch: java.lang.Throwable -> L15a
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> L15a
            com.tencent.open.log.SLog.i(r6, r5)     // Catch: java.lang.Throwable -> L15a
            monitor-exit(r0)
            return r2
        L15a:
            r5 = move-exception
            monitor-exit(r0)
            throw r5
    }

    private static synchronized boolean a(java.lang.String r9, org.json.JSONObject r10, com.tencent.open.utils.a r11) {
            java.lang.Class<com.tencent.connect.auth.QQToken> r0 = com.tencent.connect.auth.QQToken.class
            monitor-enter(r0)
            android.content.Context r1 = com.tencent.open.utils.g.a()     // Catch: java.lang.Throwable -> L9e
            r2 = 0
            if (r1 != 0) goto L13
            java.lang.String r9 = "QQToken"
            java.lang.String r10 = "saveJsonPreference context null"
            com.tencent.open.log.SLog.i(r9, r10)     // Catch: java.lang.Throwable -> L9e
            monitor-exit(r0)
            return r2
        L13:
            if (r9 == 0) goto L95
            if (r10 != 0) goto L19
            goto L95
        L19:
            java.lang.String r1 = "expires_in"
            java.lang.String r1 = r10.getString(r1)     // Catch: java.lang.Exception -> L78 java.lang.Throwable -> L9e
            boolean r3 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L78 java.lang.Throwable -> L9e
            if (r3 != 0) goto L6f
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L78 java.lang.Throwable -> L9e
            long r5 = java.lang.Long.parseLong(r1)     // Catch: java.lang.Exception -> L78 java.lang.Throwable -> L9e
            r7 = 1000(0x3e8, double:4.94E-321)
            long r5 = r5 * r7
            long r3 = r3 + r5
            java.lang.String r1 = "expires_time"
            r10.put(r1, r3)     // Catch: java.lang.Exception -> L78 java.lang.Throwable -> L9e
            java.lang.String r9 = a(r9)     // Catch: java.lang.Throwable -> L9e
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Throwable -> L9e
            java.lang.String r10 = r11.a(r10)     // Catch: java.lang.Throwable -> L9e
            int r11 = r9.length()     // Catch: java.lang.Throwable -> L9e
            r1 = 6
            if (r11 <= r1) goto L66
            if (r10 != 0) goto L4d
            goto L66
        L4d:
            android.content.SharedPreferences r11 = a()     // Catch: java.lang.Throwable -> L9e
            android.content.SharedPreferences$Editor r11 = r11.edit()     // Catch: java.lang.Throwable -> L9e
            android.content.SharedPreferences$Editor r9 = r11.putString(r9, r10)     // Catch: java.lang.Throwable -> L9e
            r9.commit()     // Catch: java.lang.Throwable -> L9e
            java.lang.String r9 = "QQToken"
            java.lang.String r10 = "saveJsonPreference sucess"
            com.tencent.open.log.SLog.i(r9, r10)     // Catch: java.lang.Throwable -> L9e
            r9 = 1
            monitor-exit(r0)
            return r9
        L66:
            java.lang.String r9 = "QQToken"
            java.lang.String r10 = "saveJsonPreference keyEncode or josnEncode null"
            com.tencent.open.log.SLog.i(r9, r10)     // Catch: java.lang.Throwable -> L9e
            monitor-exit(r0)
            return r2
        L6f:
            java.lang.String r9 = "QQToken"
            java.lang.String r10 = "expires is null"
            com.tencent.open.log.SLog.i(r9, r10)     // Catch: java.lang.Exception -> L78 java.lang.Throwable -> L9e
            monitor-exit(r0)
            return r2
        L78:
            r9 = move-exception
            java.lang.String r10 = "QQToken"
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L9e
            r11.<init>()     // Catch: java.lang.Throwable -> L9e
            java.lang.String r1 = "saveJsonPreference exception:"
            r11.append(r1)     // Catch: java.lang.Throwable -> L9e
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Throwable -> L9e
            r11.append(r9)     // Catch: java.lang.Throwable -> L9e
            java.lang.String r9 = r11.toString()     // Catch: java.lang.Throwable -> L9e
            com.tencent.open.log.SLog.e(r10, r9)     // Catch: java.lang.Throwable -> L9e
            monitor-exit(r0)
            return r2
        L95:
            java.lang.String r9 = "QQToken"
            java.lang.String r10 = "saveJsonPreference prefKey or jsonObject null"
            com.tencent.open.log.SLog.i(r9, r10)     // Catch: java.lang.Throwable -> L9e
            monitor-exit(r0)
            return r2
        L9e:
            r9 = move-exception
            monitor-exit(r0)
            throw r9
    }

    @java.lang.Deprecated
    private static java.lang.String b(java.lang.String r1) {
            byte[] r1 = com.tencent.open.utils.m.j(r1)
            r0 = 2
            java.lang.String r1 = android.util.Base64.encodeToString(r1, r0)
            return r1
    }

    @java.lang.Deprecated
    private static java.lang.String c(java.lang.String r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            byte[] r2 = com.tencent.open.utils.m.j(r2)
            r1 = 2
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r1)
            r0.append(r2)
            java.lang.String r2 = "_spkey"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
    }

    public java.lang.String getAccessToken() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public java.lang.String getAppId() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    public int getAuthSource() {
            r1 = this;
            int r0 = r1.d
            return r0
    }

    public long getExpireTimeInSecond() {
            r2 = this;
            long r0 = r2.e
            return r0
    }

    public java.lang.String getOpenId() {
            r1 = this;
            java.lang.String r0 = r1.c
            return r0
    }

    public java.lang.String getOpenIdWithCache() {
            r5 = this;
            java.lang.String r0 = "QQToken"
            java.lang.String r1 = r5.getOpenId()
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L5f
            java.lang.String r3 = " appId = "
            if (r2 == 0) goto L42
            java.lang.String r2 = r5.a     // Catch: java.lang.Exception -> L5f
            org.json.JSONObject r2 = r5.loadSession(r2)     // Catch: java.lang.Exception -> L5f
            if (r2 == 0) goto L25
            java.lang.String r4 = "openid"
            java.lang.String r1 = r2.getString(r4)     // Catch: java.lang.Exception -> L5f
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L5f
            if (r2 != 0) goto L25
            r5.setOpenId(r1)     // Catch: java.lang.Exception -> L5f
        L25:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L5f
            r2.<init>()     // Catch: java.lang.Exception -> L5f
            java.lang.String r4 = "getOpenId from Session openId = "
            r2.append(r4)     // Catch: java.lang.Exception -> L5f
            r2.append(r1)     // Catch: java.lang.Exception -> L5f
            r2.append(r3)     // Catch: java.lang.Exception -> L5f
            java.lang.String r3 = r5.a     // Catch: java.lang.Exception -> L5f
            r2.append(r3)     // Catch: java.lang.Exception -> L5f
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L5f
            com.tencent.open.log.SLog.i(r0, r2)     // Catch: java.lang.Exception -> L5f
            goto L78
        L42:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L5f
            r2.<init>()     // Catch: java.lang.Exception -> L5f
            java.lang.String r4 = "getOpenId from field openId = "
            r2.append(r4)     // Catch: java.lang.Exception -> L5f
            r2.append(r1)     // Catch: java.lang.Exception -> L5f
            r2.append(r3)     // Catch: java.lang.Exception -> L5f
            java.lang.String r3 = r5.a     // Catch: java.lang.Exception -> L5f
            r2.append(r3)     // Catch: java.lang.Exception -> L5f
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L5f
            com.tencent.open.log.SLog.i(r0, r2)     // Catch: java.lang.Exception -> L5f
            goto L78
        L5f:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "getLocalOpenIdByAppId "
            r3.append(r4)
            java.lang.String r2 = r2.toString()
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            com.tencent.open.log.SLog.i(r0, r2)
        L78:
            return r1
    }

    public boolean isSessionValid() {
            r5 = this;
            java.lang.String r0 = r5.b
            if (r0 == 0) goto L10
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = r5.e
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 >= 0) goto L10
            r0 = 1
            goto L11
        L10:
            r0 = 0
        L11:
            return r0
    }

    public org.json.JSONObject loadSession(java.lang.String r3) {
            r2 = this;
            com.tencent.open.utils.a r0 = r2.f     // Catch: java.lang.Exception -> L16
            if (r0 != 0) goto Lf
            com.tencent.open.utils.a r0 = new com.tencent.open.utils.a     // Catch: java.lang.Exception -> L16
            android.content.Context r1 = com.tencent.open.utils.g.a()     // Catch: java.lang.Exception -> L16
            r0.<init>(r1)     // Catch: java.lang.Exception -> L16
            r2.f = r0     // Catch: java.lang.Exception -> L16
        Lf:
            com.tencent.open.utils.a r0 = r2.f     // Catch: java.lang.Exception -> L16
            org.json.JSONObject r3 = a(r3, r0)     // Catch: java.lang.Exception -> L16
            return r3
        L16:
            r3 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "login loadSession"
            r0.append(r1)
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "QQToken"
            com.tencent.open.log.SLog.i(r0, r3)
            r3 = 0
            return r3
    }

    public void removeSession(java.lang.String r3) {
            r2 = this;
            android.content.SharedPreferences r0 = a()
            android.content.SharedPreferences$Editor r0 = r0.edit()
            java.lang.String r1 = c(r3)
            r0.remove(r1)
            java.lang.String r1 = c(r3)
            r0.remove(r1)
            java.lang.String r3 = a(r3)
            r0.remove(r3)
            r0.apply()
            java.lang.String r3 = "QQToken"
            java.lang.String r0 = "removeSession sucess"
            com.tencent.open.log.SLog.i(r3, r0)
            return
    }

    public boolean saveSession(org.json.JSONObject r3) {
            r2 = this;
            com.tencent.open.utils.a r0 = r2.f     // Catch: java.lang.Exception -> L18
            if (r0 != 0) goto Lf
            com.tencent.open.utils.a r0 = new com.tencent.open.utils.a     // Catch: java.lang.Exception -> L18
            android.content.Context r1 = com.tencent.open.utils.g.a()     // Catch: java.lang.Exception -> L18
            r0.<init>(r1)     // Catch: java.lang.Exception -> L18
            r2.f = r0     // Catch: java.lang.Exception -> L18
        Lf:
            java.lang.String r0 = r2.a     // Catch: java.lang.Exception -> L18
            com.tencent.open.utils.a r1 = r2.f     // Catch: java.lang.Exception -> L18
            boolean r3 = a(r0, r3, r1)     // Catch: java.lang.Exception -> L18
            return r3
        L18:
            r3 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "login saveSession"
            r0.append(r1)
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "QQToken"
            com.tencent.open.log.SLog.i(r0, r3)
            r3 = 0
            return r3
    }

    public void setAccessToken(java.lang.String r5, java.lang.String r6) throws java.lang.NumberFormatException {
            r4 = this;
            r4.b = r5
            r0 = 0
            r4.e = r0
            if (r6 == 0) goto L17
            long r0 = java.lang.System.currentTimeMillis()
            long r5 = java.lang.Long.parseLong(r6)
            r2 = 1000(0x3e8, double:4.94E-321)
            long r5 = r5 * r2
            long r0 = r0 + r5
            r4.e = r0
        L17:
            return
    }

    public void setAppId(java.lang.String r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public void setAuthSource(int r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public void setOpenId(java.lang.String r2) {
            r1 = this;
            r1.c = r2
            com.tencent.open.b.b r0 = com.tencent.open.b.b.a()
            r0.a(r2)
            return
    }
}
