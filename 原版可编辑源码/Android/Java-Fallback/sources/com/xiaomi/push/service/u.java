package com.xiaomi.push.service;

public class u {
    private static com.xiaomi.push.service.t a;
    private static com.xiaomi.push.service.u.a a;

    public interface a {
        void a();
    }

    private static int a(android.content.Context r2) {
            r0 = 0
            java.lang.String r1 = "mipush_account"
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r1, r0)
            java.lang.String r1 = "enc_req_fail_count"
            int r2 = r2.getInt(r1, r0)
            return r2
    }

    public static synchronized com.xiaomi.push.service.t a(android.content.Context r12) {
            java.lang.Class<com.xiaomi.push.service.u> r0 = com.xiaomi.push.service.u.class
            monitor-enter(r0)
            com.xiaomi.push.service.t r1 = com.xiaomi.push.service.u.a     // Catch: java.lang.Throwable -> La6
            if (r1 == 0) goto Lb
            com.xiaomi.push.service.t r12 = com.xiaomi.push.service.u.a     // Catch: java.lang.Throwable -> La6
            monitor-exit(r0)
            return r12
        Lb:
            java.lang.String r1 = "mipush_account"
            r2 = 0
            android.content.SharedPreferences r1 = r12.getSharedPreferences(r1, r2)     // Catch: java.lang.Throwable -> La6
            java.lang.String r2 = "uuid"
            r3 = 0
            java.lang.String r5 = r1.getString(r2, r3)     // Catch: java.lang.Throwable -> La6
            java.lang.String r2 = "token"
            java.lang.String r6 = r1.getString(r2, r3)     // Catch: java.lang.Throwable -> La6
            java.lang.String r2 = "security"
            java.lang.String r7 = r1.getString(r2, r3)     // Catch: java.lang.Throwable -> La6
            java.lang.String r2 = "app_id"
            java.lang.String r8 = r1.getString(r2, r3)     // Catch: java.lang.Throwable -> La6
            java.lang.String r2 = "app_token"
            java.lang.String r9 = r1.getString(r2, r3)     // Catch: java.lang.Throwable -> La6
            java.lang.String r2 = "package_name"
            java.lang.String r10 = r1.getString(r2, r3)     // Catch: java.lang.Throwable -> La6
            java.lang.String r2 = "device_id"
            java.lang.String r2 = r1.getString(r2, r3)     // Catch: java.lang.Throwable -> La6
            java.lang.String r4 = "env_type"
            r11 = 1
            int r11 = r1.getInt(r4, r11)     // Catch: java.lang.Throwable -> La6
            boolean r4 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> La6
            if (r4 != 0) goto L61
            boolean r4 = com.xiaomi.push.j.a(r2)     // Catch: java.lang.Throwable -> La6
            if (r4 == 0) goto L61
            java.lang.String r2 = com.xiaomi.push.j.i(r12)     // Catch: java.lang.Throwable -> La6
            android.content.SharedPreferences$Editor r1 = r1.edit()     // Catch: java.lang.Throwable -> La6
            java.lang.String r4 = "device_id"
            android.content.SharedPreferences$Editor r1 = r1.putString(r4, r2)     // Catch: java.lang.Throwable -> La6
            r1.commit()     // Catch: java.lang.Throwable -> La6
        L61:
            boolean r1 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> La6
            if (r1 != 0) goto La4
            boolean r1 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> La6
            if (r1 != 0) goto La4
            boolean r1 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> La6
            if (r1 != 0) goto La4
            java.lang.String r1 = com.xiaomi.push.j.i(r12)     // Catch: java.lang.Throwable -> La6
            java.lang.String r3 = "com.xiaomi.xmsf"
            java.lang.String r12 = r12.getPackageName()     // Catch: java.lang.Throwable -> La6
            boolean r12 = r3.equals(r12)     // Catch: java.lang.Throwable -> La6
            if (r12 != 0) goto L9a
            boolean r12 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> La6
            if (r12 != 0) goto L9a
            boolean r12 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> La6
            if (r12 != 0) goto L9a
            boolean r12 = r2.equals(r1)     // Catch: java.lang.Throwable -> La6
            if (r12 != 0) goto L9a
            java.lang.String r12 = "read_phone_state permission changes."
            com.xiaomi.channel.commonutils.logger.b.a(r12)     // Catch: java.lang.Throwable -> La6
        L9a:
            com.xiaomi.push.service.t r12 = new com.xiaomi.push.service.t     // Catch: java.lang.Throwable -> La6
            r4 = r12
            r4.<init>(r5, r6, r7, r8, r9, r10, r11)     // Catch: java.lang.Throwable -> La6
            com.xiaomi.push.service.u.a = r12     // Catch: java.lang.Throwable -> La6
            monitor-exit(r0)
            return r12
        La4:
            monitor-exit(r0)
            return r3
        La6:
            r12 = move-exception
            monitor-exit(r0)
            throw r12
    }

    public static synchronized com.xiaomi.push.service.t a(android.content.Context r17, java.lang.String r18, java.lang.String r19, java.lang.String r20) {
            r1 = r17
            java.lang.Class<com.xiaomi.push.service.u> r2 = com.xiaomi.push.service.u.class
            monitor-enter(r2)
            java.util.TreeMap r3 = new java.util.TreeMap     // Catch: java.lang.Throwable -> L330
            r3.<init>()     // Catch: java.lang.Throwable -> L330
            r4 = 0
            java.lang.String r0 = com.xiaomi.push.j.a(r1, r4)     // Catch: java.lang.Throwable -> L330
            java.lang.String r5 = "devid"
            r3.put(r5, r0)     // Catch: java.lang.Throwable -> L330
            com.xiaomi.push.service.t r0 = com.xiaomi.push.service.u.a     // Catch: java.lang.Throwable -> L330
            r5 = 1
            r6 = 0
            if (r0 == 0) goto L45
            com.xiaomi.push.service.t r0 = com.xiaomi.push.service.u.a     // Catch: java.lang.Throwable -> L330
            java.lang.String r0 = r0.a     // Catch: java.lang.Throwable -> L330
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L330
            if (r0 != 0) goto L45
            java.lang.String r0 = "uuid"
            com.xiaomi.push.service.t r7 = com.xiaomi.push.service.u.a     // Catch: java.lang.Throwable -> L330
            java.lang.String r7 = r7.a     // Catch: java.lang.Throwable -> L330
            r3.put(r0, r7)     // Catch: java.lang.Throwable -> L330
            com.xiaomi.push.service.t r0 = com.xiaomi.push.service.u.a     // Catch: java.lang.Throwable -> L330
            java.lang.String r0 = r0.a     // Catch: java.lang.Throwable -> L330
            java.lang.String r7 = "/"
            int r0 = r0.lastIndexOf(r7)     // Catch: java.lang.Throwable -> L330
            r7 = -1
            if (r0 == r7) goto L45
            com.xiaomi.push.service.t r7 = com.xiaomi.push.service.u.a     // Catch: java.lang.Throwable -> L330
            java.lang.String r7 = r7.a     // Catch: java.lang.Throwable -> L330
            int r0 = r0 + r5
            java.lang.String r0 = r7.substring(r0)     // Catch: java.lang.Throwable -> L330
            r7 = r0
            goto L46
        L45:
            r7 = r6
        L46:
            com.xiaomi.push.ba r0 = com.xiaomi.push.ba.a(r17)     // Catch: java.lang.Throwable -> L330
            r0.a(r3)     // Catch: java.lang.Throwable -> L330
            java.lang.String r0 = com.xiaomi.push.j.a(r17)     // Catch: java.lang.Throwable -> L330
            boolean r8 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L330
            if (r8 != 0) goto L5c
            java.lang.String r8 = "gaid"
            r3.put(r8, r0)     // Catch: java.lang.Throwable -> L330
        L5c:
            boolean r0 = a(r17)     // Catch: java.lang.Throwable -> L330
            if (r0 == 0) goto L66
            java.lang.String r0 = "1000271"
            r12 = r0
            goto L68
        L66:
            r12 = r19
        L68:
            boolean r0 = a(r17)     // Catch: java.lang.Throwable -> L330
            if (r0 == 0) goto L72
            java.lang.String r0 = "420100086271"
            r13 = r0
            goto L74
        L72:
            r13 = r20
        L74:
            boolean r0 = a(r17)     // Catch: java.lang.Throwable -> L330
            if (r0 == 0) goto L7e
            java.lang.String r0 = "com.xiaomi.xmsf"
            r14 = r0
            goto L80
        L7e:
            r14 = r18
        L80:
            java.lang.String r0 = "appid"
            r3.put(r0, r12)     // Catch: java.lang.Throwable -> L330
            java.lang.String r0 = "apptoken"
            r3.put(r0, r13)     // Catch: java.lang.Throwable -> L330
            android.content.pm.PackageManager r0 = r17.getPackageManager()     // Catch: java.lang.Exception -> L95 java.lang.Throwable -> L330
            r8 = 16384(0x4000, float:2.2959E-41)
            android.content.pm.PackageInfo r0 = r0.getPackageInfo(r14, r8)     // Catch: java.lang.Exception -> L95 java.lang.Throwable -> L330
            goto L9a
        L95:
            r0 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r0)     // Catch: java.lang.Throwable -> L330
            r0 = r6
        L9a:
            java.lang.String r8 = "appversion"
            if (r0 == 0) goto La5
            int r0 = r0.versionCode     // Catch: java.lang.Throwable -> L330
            java.lang.String r0 = java.lang.String.valueOf(r0)     // Catch: java.lang.Throwable -> L330
            goto La7
        La5:
            java.lang.String r0 = "0"
        La7:
            r3.put(r8, r0)     // Catch: java.lang.Throwable -> L330
            java.lang.String r0 = "sdkversion"
            r8 = 40090(0x9c9a, float:5.6178E-41)
            java.lang.String r8 = java.lang.Integer.toString(r8)     // Catch: java.lang.Throwable -> L330
            r3.put(r0, r8)     // Catch: java.lang.Throwable -> L330
            java.lang.String r0 = "packagename"
            r3.put(r0, r14)     // Catch: java.lang.Throwable -> L330
            java.lang.String r0 = "model"
            java.lang.String r8 = android.os.Build.MODEL     // Catch: java.lang.Throwable -> L330
            r3.put(r0, r8)     // Catch: java.lang.Throwable -> L330
            java.lang.String r0 = "board"
            java.lang.String r8 = android.os.Build.BOARD     // Catch: java.lang.Throwable -> L330
            r3.put(r0, r8)     // Catch: java.lang.Throwable -> L330
            boolean r0 = com.xiaomi.push.m.d()     // Catch: java.lang.Throwable -> L330
            if (r0 != 0) goto L11d
            java.lang.String r0 = ""
            java.lang.String r8 = com.xiaomi.push.j.d(r17)     // Catch: java.lang.Throwable -> L330
            boolean r9 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> L330
            if (r9 != 0) goto Lee
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L330
            r9.<init>()     // Catch: java.lang.Throwable -> L330
            r9.append(r0)     // Catch: java.lang.Throwable -> L330
            java.lang.String r0 = com.xiaomi.push.bp.a(r8)     // Catch: java.lang.Throwable -> L330
            r9.append(r0)     // Catch: java.lang.Throwable -> L330
            java.lang.String r0 = r9.toString()     // Catch: java.lang.Throwable -> L330
        Lee:
            java.lang.String r8 = com.xiaomi.push.j.f(r17)     // Catch: java.lang.Throwable -> L330
            boolean r9 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L330
            if (r9 != 0) goto L112
            boolean r9 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> L330
            if (r9 != 0) goto L112
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L330
            r9.<init>()     // Catch: java.lang.Throwable -> L330
            r9.append(r0)     // Catch: java.lang.Throwable -> L330
            java.lang.String r0 = ","
            r9.append(r0)     // Catch: java.lang.Throwable -> L330
            r9.append(r8)     // Catch: java.lang.Throwable -> L330
            java.lang.String r0 = r9.toString()     // Catch: java.lang.Throwable -> L330
        L112:
            boolean r8 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L330
            if (r8 != 0) goto L11d
            java.lang.String r8 = "imei_md5"
            r3.put(r8, r0)     // Catch: java.lang.Throwable -> L330
        L11d:
            java.lang.String r0 = "os"
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L330
            r8.<init>()     // Catch: java.lang.Throwable -> L330
            java.lang.String r9 = android.os.Build.VERSION.RELEASE     // Catch: java.lang.Throwable -> L330
            r8.append(r9)     // Catch: java.lang.Throwable -> L330
            java.lang.String r9 = "-"
            r8.append(r9)     // Catch: java.lang.Throwable -> L330
            java.lang.String r9 = android.os.Build.VERSION.INCREMENTAL     // Catch: java.lang.Throwable -> L330
            r8.append(r9)     // Catch: java.lang.Throwable -> L330
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> L330
            r3.put(r0, r8)     // Catch: java.lang.Throwable -> L330
            int r0 = com.xiaomi.push.j.a()     // Catch: java.lang.Throwable -> L330
            if (r0 < 0) goto L149
            java.lang.String r8 = "space_id"
            java.lang.String r0 = java.lang.Integer.toString(r0)     // Catch: java.lang.Throwable -> L330
            r3.put(r8, r0)     // Catch: java.lang.Throwable -> L330
        L149:
            java.lang.String r0 = "brand"
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L330
            r8.<init>()     // Catch: java.lang.Throwable -> L330
            java.lang.String r9 = android.os.Build.BRAND     // Catch: java.lang.Throwable -> L330
            r8.append(r9)     // Catch: java.lang.Throwable -> L330
            java.lang.String r9 = ""
            r8.append(r9)     // Catch: java.lang.Throwable -> L330
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> L330
            r3.put(r0, r8)     // Catch: java.lang.Throwable -> L330
            java.lang.String r0 = "ram"
            java.lang.String r8 = com.xiaomi.push.j.a()     // Catch: java.lang.Throwable -> L330
            r3.put(r0, r8)     // Catch: java.lang.Throwable -> L330
            java.lang.String r0 = "rom"
            java.lang.String r8 = com.xiaomi.push.j.b()     // Catch: java.lang.Throwable -> L330
            r3.put(r0, r8)     // Catch: java.lang.Throwable -> L330
            org.json.JSONObject r8 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L330
            r8.<init>()     // Catch: java.lang.Throwable -> L330
            java.util.Set r0 = r3.entrySet()     // Catch: java.lang.Throwable -> L330
            java.util.Iterator r9 = r0.iterator()     // Catch: java.lang.Throwable -> L330
        L180:
            boolean r0 = r9.hasNext()     // Catch: java.lang.Throwable -> L330
            if (r0 == 0) goto L1cd
            java.lang.Object r0 = r9.next()     // Catch: java.lang.Throwable -> L330
            r10 = r0
            java.util.Map$Entry r10 = (java.util.Map.Entry) r10     // Catch: java.lang.Throwable -> L330
            java.lang.Object r0 = r10.getKey()     // Catch: org.json.JSONException -> L19b java.lang.Throwable -> L330
            java.lang.String r0 = (java.lang.String) r0     // Catch: org.json.JSONException -> L19b java.lang.Throwable -> L330
            java.lang.Object r11 = r10.getValue()     // Catch: org.json.JSONException -> L19b java.lang.Throwable -> L330
            r8.put(r0, r11)     // Catch: org.json.JSONException -> L19b java.lang.Throwable -> L330
            goto L180
        L19b:
            r0 = move-exception
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L330
            r11.<init>()     // Catch: java.lang.Throwable -> L330
            java.lang.String r15 = "failed to add data in json format: k="
            r11.append(r15)     // Catch: java.lang.Throwable -> L330
            java.lang.Object r15 = r10.getKey()     // Catch: java.lang.Throwable -> L330
            java.lang.String r15 = (java.lang.String) r15     // Catch: java.lang.Throwable -> L330
            r11.append(r15)     // Catch: java.lang.Throwable -> L330
            java.lang.String r15 = ",v="
            r11.append(r15)     // Catch: java.lang.Throwable -> L330
            java.lang.Object r10 = r10.getValue()     // Catch: java.lang.Throwable -> L330
            java.lang.String r10 = (java.lang.String) r10     // Catch: java.lang.Throwable -> L330
            r11.append(r10)     // Catch: java.lang.Throwable -> L330
            java.lang.String r10 = ". "
            r11.append(r10)     // Catch: java.lang.Throwable -> L330
            r11.append(r0)     // Catch: java.lang.Throwable -> L330
            java.lang.String r0 = r11.toString()     // Catch: java.lang.Throwable -> L330
            com.xiaomi.channel.commonutils.logger.b.d(r0)     // Catch: java.lang.Throwable -> L330
            goto L180
        L1cd:
            java.lang.String r0 = r8.toString()     // Catch: java.lang.Throwable -> L330
            java.lang.String r0 = com.xiaomi.push.service.bs.a(r0)     // Catch: java.lang.Throwable -> L330
            java.util.TreeMap r8 = new java.util.TreeMap     // Catch: java.lang.Throwable -> L330
            r8.<init>()     // Catch: java.lang.Throwable -> L330
            java.lang.String r9 = "requestData"
            r8.put(r9, r0)     // Catch: java.lang.Throwable -> L330
            java.lang.String r9 = "keyPairVer"
            java.lang.String r10 = "1"
            r8.put(r9, r10)     // Catch: java.lang.Throwable -> L330
            int r9 = a(r17)     // Catch: java.lang.Throwable -> L330
            r10 = 2
            if (r9 >= r10) goto L20a
            boolean r9 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L330
            if (r9 == 0) goto L1f4
            goto L20a
        L1f4:
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L330
            r9.<init>()     // Catch: java.lang.Throwable -> L330
            java.lang.String r10 = "r.data = "
            r9.append(r10)     // Catch: java.lang.Throwable -> L330
            r9.append(r0)     // Catch: java.lang.Throwable -> L330
            java.lang.String r0 = r9.toString()     // Catch: java.lang.Throwable -> L330
            com.xiaomi.channel.commonutils.logger.b.a(r0)     // Catch: java.lang.Throwable -> L330
            r15 = r5
            goto L20b
        L20a:
            r15 = r4
        L20b:
            java.lang.String r0 = a(r1, r15)     // Catch: java.lang.Throwable -> L330
            if (r15 == 0) goto L212
            r3 = r8
        L212:
            com.xiaomi.push.bh r0 = com.xiaomi.push.bj.a(r1, r0, r3)     // Catch: java.io.IOException -> L217 java.lang.Throwable -> L330
            goto L22e
        L217:
            r0 = move-exception
            r3 = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L330
            r0.<init>()     // Catch: java.lang.Throwable -> L330
            java.lang.String r8 = "device registration request failed. "
            r0.append(r8)     // Catch: java.lang.Throwable -> L330
            r0.append(r3)     // Catch: java.lang.Throwable -> L330
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L330
            com.xiaomi.channel.commonutils.logger.b.d(r0)     // Catch: java.lang.Throwable -> L330
            r0 = r6
        L22e:
            if (r0 == 0) goto L317
            int r3 = r0.a     // Catch: java.lang.Throwable -> L330
            r8 = 200(0xc8, float:2.8E-43)
            if (r3 != r8) goto L317
            java.lang.String r0 = r0.a()     // Catch: java.lang.Throwable -> L330
            boolean r3 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L330
            if (r3 != 0) goto L317
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L2ea org.json.JSONException -> L302
            r3.<init>(r0)     // Catch: java.lang.Throwable -> L2ea org.json.JSONException -> L302
            java.lang.String r8 = "code"
            int r8 = r3.getInt(r8)     // Catch: java.lang.Throwable -> L2ea org.json.JSONException -> L302
            if (r8 != 0) goto L2c0
            java.lang.String r0 = "data"
            org.json.JSONObject r0 = r3.getJSONObject(r0)     // Catch: java.lang.Throwable -> L2ea org.json.JSONException -> L302
            java.lang.String r3 = "ssecurity"
            java.lang.String r11 = r0.getString(r3)     // Catch: java.lang.Throwable -> L2ea org.json.JSONException -> L302
            java.lang.String r3 = "token"
            java.lang.String r10 = r0.getString(r3)     // Catch: java.lang.Throwable -> L2ea org.json.JSONException -> L302
            java.lang.String r3 = "userId"
            java.lang.String r0 = r0.getString(r3)     // Catch: java.lang.Throwable -> L2ea org.json.JSONException -> L302
            boolean r3 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L2ea org.json.JSONException -> L302
            if (r3 == 0) goto L281
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2ea org.json.JSONException -> L302
            r3.<init>()     // Catch: java.lang.Throwable -> L2ea org.json.JSONException -> L302
            java.lang.String r7 = "an"
            r3.append(r7)     // Catch: java.lang.Throwable -> L2ea org.json.JSONException -> L302
            r7 = 6
            java.lang.String r7 = com.xiaomi.push.bp.a(r7)     // Catch: java.lang.Throwable -> L2ea org.json.JSONException -> L302
            r3.append(r7)     // Catch: java.lang.Throwable -> L2ea org.json.JSONException -> L302
            java.lang.String r7 = r3.toString()     // Catch: java.lang.Throwable -> L2ea org.json.JSONException -> L302
        L281:
            com.xiaomi.push.service.t r3 = new com.xiaomi.push.service.t     // Catch: java.lang.Throwable -> L2ea org.json.JSONException -> L302
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2ea org.json.JSONException -> L302
            r8.<init>()     // Catch: java.lang.Throwable -> L2ea org.json.JSONException -> L302
            r8.append(r0)     // Catch: java.lang.Throwable -> L2ea org.json.JSONException -> L302
            java.lang.String r9 = "@xiaomi.com/"
            r8.append(r9)     // Catch: java.lang.Throwable -> L2ea org.json.JSONException -> L302
            r8.append(r7)     // Catch: java.lang.Throwable -> L2ea org.json.JSONException -> L302
            java.lang.String r9 = r8.toString()     // Catch: java.lang.Throwable -> L2ea org.json.JSONException -> L302
            int r7 = com.xiaomi.push.ae.a()     // Catch: java.lang.Throwable -> L2ea org.json.JSONException -> L302
            r8 = r3
            r16 = r15
            r15 = r7
            r8.<init>(r9, r10, r11, r12, r13, r14, r15)     // Catch: java.lang.Throwable -> L2e6 org.json.JSONException -> L2e8
            a(r1, r3)     // Catch: java.lang.Throwable -> L2e6 org.json.JSONException -> L2e8
            com.xiaomi.push.service.u.a = r3     // Catch: java.lang.Throwable -> L2e6 org.json.JSONException -> L2e8
            a(r1, r4)     // Catch: java.lang.Throwable -> L2e6 org.json.JSONException -> L2e8
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2e6 org.json.JSONException -> L2e8
            r4.<init>()     // Catch: java.lang.Throwable -> L2e6 org.json.JSONException -> L2e8
            java.lang.String r7 = "device registration is successful. "
            r4.append(r7)     // Catch: java.lang.Throwable -> L2e6 org.json.JSONException -> L2e8
            r4.append(r0)     // Catch: java.lang.Throwable -> L2e6 org.json.JSONException -> L2e8
            java.lang.String r0 = r4.toString()     // Catch: java.lang.Throwable -> L2e6 org.json.JSONException -> L2e8
            com.xiaomi.channel.commonutils.logger.b.a(r0)     // Catch: java.lang.Throwable -> L2e6 org.json.JSONException -> L2e8
            monitor-exit(r2)
            return r3
        L2c0:
            r16 = r15
            java.lang.String r4 = "code"
            int r4 = r3.getInt(r4)     // Catch: java.lang.Throwable -> L2e6 org.json.JSONException -> L2e8
            java.lang.String r7 = "description"
            java.lang.String r3 = r3.optString(r7)     // Catch: java.lang.Throwable -> L2e6 org.json.JSONException -> L2e8
            com.xiaomi.push.service.x.a(r1, r4, r3)     // Catch: java.lang.Throwable -> L2e6 org.json.JSONException -> L2e8
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2e6 org.json.JSONException -> L2e8
            r3.<init>()     // Catch: java.lang.Throwable -> L2e6 org.json.JSONException -> L2e8
            java.lang.String r4 = "device registration resp: "
            r3.append(r4)     // Catch: java.lang.Throwable -> L2e6 org.json.JSONException -> L2e8
            r3.append(r0)     // Catch: java.lang.Throwable -> L2e6 org.json.JSONException -> L2e8
            java.lang.String r0 = r3.toString()     // Catch: java.lang.Throwable -> L2e6 org.json.JSONException -> L2e8
            com.xiaomi.channel.commonutils.logger.b.a(r0)     // Catch: java.lang.Throwable -> L2e6 org.json.JSONException -> L2e8
            goto L319
        L2e6:
            r0 = move-exception
            goto L2ed
        L2e8:
            r0 = move-exception
            goto L305
        L2ea:
            r0 = move-exception
            r16 = r15
        L2ed:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L330
            r3.<init>()     // Catch: java.lang.Throwable -> L330
            java.lang.String r4 = "unknow throwable. "
            r3.append(r4)     // Catch: java.lang.Throwable -> L330
            r3.append(r0)     // Catch: java.lang.Throwable -> L330
            java.lang.String r0 = r3.toString()     // Catch: java.lang.Throwable -> L330
        L2fe:
            com.xiaomi.channel.commonutils.logger.b.d(r0)     // Catch: java.lang.Throwable -> L330
            goto L319
        L302:
            r0 = move-exception
            r16 = r15
        L305:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L330
            r3.<init>()     // Catch: java.lang.Throwable -> L330
            java.lang.String r4 = "failed to parse respone json data. "
            r3.append(r4)     // Catch: java.lang.Throwable -> L330
            r3.append(r0)     // Catch: java.lang.Throwable -> L330
            java.lang.String r0 = r3.toString()     // Catch: java.lang.Throwable -> L330
            goto L2fe
        L317:
            r16 = r15
        L319:
            if (r16 == 0) goto L329
            boolean r0 = com.xiaomi.push.bj.c(r17)     // Catch: java.lang.Throwable -> L330
            if (r0 == 0) goto L329
            int r0 = a(r17)     // Catch: java.lang.Throwable -> L330
            int r0 = r0 + r5
            a(r1, r0)     // Catch: java.lang.Throwable -> L330
        L329:
            java.lang.String r0 = "fail to register push account. meet error."
            com.xiaomi.channel.commonutils.logger.b.a(r0)     // Catch: java.lang.Throwable -> L330
            monitor-exit(r2)
            return r6
        L330:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public static java.lang.String a(android.content.Context r1) {
            com.xiaomi.push.service.t r1 = a(r1)
            if (r1 == 0) goto L1d
            java.lang.String r0 = r1.a
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1d
            java.lang.String r1 = r1.a
            java.lang.String r0 = "@"
            java.lang.String[] r1 = r1.split(r0)
            int r0 = r1.length
            if (r0 <= 0) goto L1d
            r0 = 0
            r1 = r1[r0]
            goto L1e
        L1d:
            r1 = 0
        L1e:
            return r1
    }

    private static java.lang.String a(android.content.Context r1, boolean r2) {
            com.xiaomi.push.service.a r1 = com.xiaomi.push.service.a.a(r1)
            java.lang.String r1 = r1.a()
            if (r2 == 0) goto Ld
            java.lang.String r2 = "/pass/v2/register/encrypt"
            goto Lf
        Ld:
            java.lang.String r2 = "/pass/v2/register"
        Lf:
            boolean r0 = com.xiaomi.push.ae.b()
            if (r0 == 0) goto L31
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r0 = "http://"
            r1.append(r0)
            java.lang.String r0 = com.xiaomi.push.fx.b
            r1.append(r0)
            java.lang.String r0 = ":9085"
        L26:
            r1.append(r0)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            return r1
        L31:
            com.xiaomi.push.q r0 = com.xiaomi.push.q.a
            java.lang.String r0 = r0.name()
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L45
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r0 = "https://cn.register.xmpush.xiaomi.com"
            goto L26
        L45:
            com.xiaomi.push.q r0 = com.xiaomi.push.q.b
            java.lang.String r0 = r0.name()
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L59
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r0 = "https://register.xmpush.global.xiaomi.com"
            goto L26
        L59:
            com.xiaomi.push.q r0 = com.xiaomi.push.q.c
            java.lang.String r0 = r0.name()
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L6d
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r0 = "https://fr.register.xmpush.global.xiaomi.com"
            goto L26
        L6d:
            com.xiaomi.push.q r0 = com.xiaomi.push.q.d
            java.lang.String r0 = r0.name()
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L81
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r0 = "https://ru.register.xmpush.global.xiaomi.com"
            goto L26
        L81:
            com.xiaomi.push.q r0 = com.xiaomi.push.q.e
            java.lang.String r0 = r0.name()
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L95
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r0 = "https://idmb.register.xmpush.global.xiaomi.com"
            goto L26
        L95:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r0 = "https://"
            r1.append(r0)
            boolean r0 = com.xiaomi.push.ae.a()
            if (r0 == 0) goto La9
            java.lang.String r0 = "sandbox.xmpush.xiaomi.com"
            goto L26
        La9:
            java.lang.String r0 = "register.xmpush.xiaomi.com"
            goto L26
    }

    public static void a() {
            com.xiaomi.push.service.u$a r0 = com.xiaomi.push.service.u.a
            if (r0 == 0) goto L7
            r0.a()
        L7:
            return
    }

    public static void a(android.content.Context r2) {
            java.lang.String r0 = "mipush_account"
            r1 = 0
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r0, r1)
            android.content.SharedPreferences$Editor r2 = r2.edit()
            android.content.SharedPreferences$Editor r2 = r2.clear()
            r2.commit()
            r2 = 0
            com.xiaomi.push.service.u.a = r2
            a()
            return
    }

    private static void a(android.content.Context r2, int r3) {
            java.lang.String r0 = "mipush_account"
            r1 = 0
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r0, r1)
            android.content.SharedPreferences$Editor r2 = r2.edit()
            java.lang.String r0 = "enc_req_fail_count"
            r2.putInt(r0, r3)
            r2.commit()
            return
    }

    public static void a(android.content.Context r3, com.xiaomi.push.service.t r4) {
            java.lang.String r0 = "mipush_account"
            r1 = 0
            android.content.SharedPreferences r0 = r3.getSharedPreferences(r0, r1)
            android.content.SharedPreferences$Editor r0 = r0.edit()
            java.lang.String r1 = r4.a
            java.lang.String r2 = "uuid"
            r0.putString(r2, r1)
            java.lang.String r1 = r4.c
            java.lang.String r2 = "security"
            r0.putString(r2, r1)
            java.lang.String r1 = r4.b
            java.lang.String r2 = "token"
            r0.putString(r2, r1)
            java.lang.String r1 = r4.d
            java.lang.String r2 = "app_id"
            r0.putString(r2, r1)
            java.lang.String r1 = r4.f
            java.lang.String r2 = "package_name"
            r0.putString(r2, r1)
            java.lang.String r1 = r4.e
            java.lang.String r2 = "app_token"
            r0.putString(r2, r1)
            java.lang.String r3 = com.xiaomi.push.j.i(r3)
            java.lang.String r1 = "device_id"
            r0.putString(r1, r3)
            int r3 = r4.a
            java.lang.String r4 = "env_type"
            r0.putInt(r4, r3)
            r0.commit()
            a()
            return
    }

    public static void a(com.xiaomi.push.service.u.a r0) {
            com.xiaomi.push.service.u.a = r0
            return
    }

    private static boolean a(android.content.Context r1) {
            java.lang.String r1 = r1.getPackageName()
            java.lang.String r0 = "com.xiaomi.xmsf"
            boolean r1 = r1.equals(r0)
            return r1
    }
}
