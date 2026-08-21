package com.xiaomi.mipush.sdk;

public class i {
    private static java.util.HashMap<java.lang.String, java.lang.String> a;

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.xiaomi.mipush.sdk.i.a = r0
            return
    }

    public static int a() {
            java.lang.String r0 = "com.xiaomi.assemble.control.AssembleConstants"
            java.lang.String r1 = "ASSEMBLE_VERSION_CODE"
            java.lang.Object r0 = com.xiaomi.push.bk.a(r0, r1)
            java.lang.Integer r0 = (java.lang.Integer) r0
            if (r0 != 0) goto Le
            r0 = 0
            goto L12
        Le:
            int r0 = r0.intValue()
        L12:
            return r0
    }

    private static int a(android.content.Context r6, com.xiaomi.mipush.sdk.e r7, java.lang.String r8) {
            r0 = 0
            java.lang.String r1 = "mipush_extra"
            android.content.SharedPreferences r1 = r6.getSharedPreferences(r1, r0)
            java.lang.String r2 = a(r7)
            java.lang.String r3 = ""
            java.lang.String r4 = r1.getString(r2, r3)
            com.xiaomi.mipush.sdk.b r6 = com.xiaomi.mipush.sdk.b.a(r6)
            java.lang.String r6 = r6.c()
            java.lang.String r5 = "last_check_token"
            java.lang.String r3 = r1.getString(r5, r3)
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 == 0) goto L2b
            java.lang.String r6 = "ASSEMBLE_PUSH : can not find the key of token used in sp file"
            com.xiaomi.channel.commonutils.logger.b.a(r6)
            return r0
        L2b:
            boolean r2 = android.text.TextUtils.isEmpty(r4)
            if (r2 == 0) goto L33
            r6 = 1
            return r6
        L33:
            boolean r8 = r4.equals(r8)
            if (r8 != 0) goto L3b
            r6 = 2
            return r6
        L3b:
            boolean r6 = android.text.TextUtils.equals(r6, r3)
            if (r6 != 0) goto L43
            r6 = 3
            return r6
        L43:
            boolean r6 = a(r7)
            if (r6 == 0) goto L59
            java.lang.String r6 = b(r7)
            int r6 = r1.getInt(r6, r0)
            int r7 = a()
            if (r7 == r6) goto L59
            r6 = 4
            return r6
        L59:
            return r0
    }

    public static com.xiaomi.mipush.sdk.MiPushMessage a(java.lang.String r17) {
            java.lang.String r0 = "extra"
            java.lang.String r1 = "isNotified"
            java.lang.String r2 = "category"
            java.lang.String r3 = "notifyId"
            java.lang.String r4 = "user_account"
            java.lang.String r5 = "topic"
            java.lang.String r6 = "alias"
            java.lang.String r7 = "messageType"
            java.lang.String r8 = "notifyType"
            java.lang.String r9 = "passThrough"
            java.lang.String r10 = "content"
            java.lang.String r11 = "title"
            java.lang.String r12 = "description"
            java.lang.String r13 = "messageId"
            com.xiaomi.mipush.sdk.MiPushMessage r14 = new com.xiaomi.mipush.sdk.MiPushMessage
            r14.<init>()
            boolean r15 = android.text.TextUtils.isEmpty(r17)
            if (r15 != 0) goto L116
            org.json.JSONObject r15 = new org.json.JSONObject     // Catch: java.lang.Exception -> L10e
            r16 = r0
            r0 = r17
            r15.<init>(r0)     // Catch: java.lang.Exception -> L10e
            boolean r0 = r15.has(r13)     // Catch: java.lang.Exception -> L10e
            if (r0 == 0) goto L3d
            java.lang.String r0 = r15.getString(r13)     // Catch: java.lang.Exception -> L10e
            r14.setMessageId(r0)     // Catch: java.lang.Exception -> L10e
        L3d:
            boolean r0 = r15.has(r12)     // Catch: java.lang.Exception -> L10e
            if (r0 == 0) goto L4a
            java.lang.String r0 = r15.getString(r12)     // Catch: java.lang.Exception -> L10e
            r14.setDescription(r0)     // Catch: java.lang.Exception -> L10e
        L4a:
            boolean r0 = r15.has(r11)     // Catch: java.lang.Exception -> L10e
            if (r0 == 0) goto L57
            java.lang.String r0 = r15.getString(r11)     // Catch: java.lang.Exception -> L10e
            r14.setTitle(r0)     // Catch: java.lang.Exception -> L10e
        L57:
            boolean r0 = r15.has(r10)     // Catch: java.lang.Exception -> L10e
            if (r0 == 0) goto L64
            java.lang.String r0 = r15.getString(r10)     // Catch: java.lang.Exception -> L10e
            r14.setContent(r0)     // Catch: java.lang.Exception -> L10e
        L64:
            boolean r0 = r15.has(r9)     // Catch: java.lang.Exception -> L10e
            if (r0 == 0) goto L71
            int r0 = r15.getInt(r9)     // Catch: java.lang.Exception -> L10e
            r14.setPassThrough(r0)     // Catch: java.lang.Exception -> L10e
        L71:
            boolean r0 = r15.has(r8)     // Catch: java.lang.Exception -> L10e
            if (r0 == 0) goto L7e
            int r0 = r15.getInt(r8)     // Catch: java.lang.Exception -> L10e
            r14.setNotifyType(r0)     // Catch: java.lang.Exception -> L10e
        L7e:
            boolean r0 = r15.has(r7)     // Catch: java.lang.Exception -> L10e
            if (r0 == 0) goto L8b
            int r0 = r15.getInt(r7)     // Catch: java.lang.Exception -> L10e
            r14.setMessageType(r0)     // Catch: java.lang.Exception -> L10e
        L8b:
            boolean r0 = r15.has(r6)     // Catch: java.lang.Exception -> L10e
            if (r0 == 0) goto L98
            java.lang.String r0 = r15.getString(r6)     // Catch: java.lang.Exception -> L10e
            r14.setAlias(r0)     // Catch: java.lang.Exception -> L10e
        L98:
            boolean r0 = r15.has(r5)     // Catch: java.lang.Exception -> L10e
            if (r0 == 0) goto La5
            java.lang.String r0 = r15.getString(r5)     // Catch: java.lang.Exception -> L10e
            r14.setTopic(r0)     // Catch: java.lang.Exception -> L10e
        La5:
            boolean r0 = r15.has(r4)     // Catch: java.lang.Exception -> L10e
            if (r0 == 0) goto Lb2
            java.lang.String r0 = r15.getString(r4)     // Catch: java.lang.Exception -> L10e
            r14.setUserAccount(r0)     // Catch: java.lang.Exception -> L10e
        Lb2:
            boolean r0 = r15.has(r3)     // Catch: java.lang.Exception -> L10e
            if (r0 == 0) goto Lbf
            int r0 = r15.getInt(r3)     // Catch: java.lang.Exception -> L10e
            r14.setNotifyId(r0)     // Catch: java.lang.Exception -> L10e
        Lbf:
            boolean r0 = r15.has(r2)     // Catch: java.lang.Exception -> L10e
            if (r0 == 0) goto Lcc
            java.lang.String r0 = r15.getString(r2)     // Catch: java.lang.Exception -> L10e
            r14.setCategory(r0)     // Catch: java.lang.Exception -> L10e
        Lcc:
            boolean r0 = r15.has(r1)     // Catch: java.lang.Exception -> L10e
            if (r0 == 0) goto Ld9
            boolean r0 = r15.getBoolean(r1)     // Catch: java.lang.Exception -> L10e
            r14.setNotified(r0)     // Catch: java.lang.Exception -> L10e
        Ld9:
            r0 = r16
            boolean r1 = r15.has(r0)     // Catch: java.lang.Exception -> L10e
            if (r1 == 0) goto L116
            org.json.JSONObject r0 = r15.getJSONObject(r0)     // Catch: java.lang.Exception -> L10e
            java.util.Iterator r1 = r0.keys()     // Catch: java.lang.Exception -> L10e
            java.util.HashMap r2 = new java.util.HashMap     // Catch: java.lang.Exception -> L10e
            r2.<init>()     // Catch: java.lang.Exception -> L10e
        Lee:
            if (r1 == 0) goto L104
            boolean r3 = r1.hasNext()     // Catch: java.lang.Exception -> L10e
            if (r3 == 0) goto L104
            java.lang.Object r3 = r1.next()     // Catch: java.lang.Exception -> L10e
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> L10e
            java.lang.String r4 = r0.getString(r3)     // Catch: java.lang.Exception -> L10e
            r2.put(r3, r4)     // Catch: java.lang.Exception -> L10e
            goto Lee
        L104:
            int r0 = r2.size()     // Catch: java.lang.Exception -> L10e
            if (r0 <= 0) goto L116
            r14.setExtra(r2)     // Catch: java.lang.Exception -> L10e
            goto L116
        L10e:
            r0 = move-exception
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.d(r0)
        L116:
            return r14
    }

    protected static com.xiaomi.mipush.sdk.PushMessageReceiver a(android.content.Context r5) {
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "com.xiaomi.mipush.RECEIVE_MESSAGE"
            r0.<init>(r1)
            java.lang.String r1 = r5.getPackageName()
            r0.setPackage(r1)
            android.content.pm.PackageManager r1 = r5.getPackageManager()
            r2 = 32
            r3 = 0
            java.util.List r0 = r1.queryBroadcastReceivers(r0, r2)     // Catch: java.lang.Exception -> L51
            if (r0 == 0) goto L3e
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Exception -> L51
        L1f:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Exception -> L51
            if (r1 == 0) goto L3e
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Exception -> L51
            android.content.pm.ResolveInfo r1 = (android.content.pm.ResolveInfo) r1     // Catch: java.lang.Exception -> L51
            android.content.pm.ActivityInfo r2 = r1.activityInfo     // Catch: java.lang.Exception -> L51
            if (r2 == 0) goto L1f
            android.content.pm.ActivityInfo r2 = r1.activityInfo     // Catch: java.lang.Exception -> L51
            java.lang.String r2 = r2.packageName     // Catch: java.lang.Exception -> L51
            java.lang.String r4 = r5.getPackageName()     // Catch: java.lang.Exception -> L51
            boolean r2 = r2.equals(r4)     // Catch: java.lang.Exception -> L51
            if (r2 == 0) goto L1f
            goto L3f
        L3e:
            r1 = r3
        L3f:
            if (r1 == 0) goto L50
            android.content.pm.ActivityInfo r0 = r1.activityInfo     // Catch: java.lang.Exception -> L51
            java.lang.String r0 = r0.name     // Catch: java.lang.Exception -> L51
            java.lang.Class r5 = com.xiaomi.push.v.a(r5, r0)     // Catch: java.lang.Exception -> L51
            java.lang.Object r5 = r5.newInstance()     // Catch: java.lang.Exception -> L51
            com.xiaomi.mipush.sdk.PushMessageReceiver r5 = (com.xiaomi.mipush.sdk.PushMessageReceiver) r5     // Catch: java.lang.Exception -> L51
            return r5
        L50:
            return r3
        L51:
            r5 = move-exception
            java.lang.String r5 = r5.toString()
            com.xiaomi.channel.commonutils.logger.b.d(r5)
            return r3
    }

    static java.lang.String a(android.content.Context r2, com.xiaomi.mipush.sdk.e r3) {
            java.lang.String r0 = "mipush_extra"
            r1 = 0
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r0, r1)
            java.lang.String r3 = a(r3)
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L18
            java.lang.String r0 = ""
            java.lang.String r2 = r2.getString(r3, r0)
            return r2
        L18:
            r2 = 0
            return r2
    }

    protected static synchronized java.lang.String a(android.content.Context r1, java.lang.String r2) {
            java.lang.Class<com.xiaomi.mipush.sdk.i> r1 = com.xiaomi.mipush.sdk.i.class
            monitor-enter(r1)
            java.util.HashMap<java.lang.String, java.lang.String> r0 = com.xiaomi.mipush.sdk.i.a     // Catch: java.lang.Throwable -> L15
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> L15
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> L15
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L15
            if (r0 == 0) goto L13
            java.lang.String r2 = ""
        L13:
            monitor-exit(r1)
            return r2
        L15:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public static java.lang.String a(com.xiaomi.mipush.sdk.e r1) {
            int[] r0 = com.xiaomi.mipush.sdk.k.a
            int r1 = r1.ordinal()
            r1 = r0[r1]
            r0 = 1
            if (r1 == r0) goto L1f
            r0 = 2
            if (r1 == r0) goto L1c
            r0 = 3
            if (r1 == r0) goto L19
            r0 = 4
            if (r1 == r0) goto L16
            r1 = 0
            goto L21
        L16:
            java.lang.String r1 = "ftos_push_token"
            goto L21
        L19:
            java.lang.String r1 = "cos_push_token"
            goto L21
        L1c:
            java.lang.String r1 = "fcm_push_token_v2"
            goto L21
        L1f:
            java.lang.String r1 = "hms_push_token"
        L21:
            return r1
    }

    public static java.util.HashMap<java.lang.String, java.lang.String> a(android.content.Context r11, com.xiaomi.mipush.sdk.e r12) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = a(r12)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 == 0) goto L10
            return r0
        L10:
            int[] r2 = com.xiaomi.mipush.sdk.k.a
            int r12 = r12.ordinal()
            r12 = r2[r12]
            r2 = 1
            java.lang.String r3 = "brand:"
            r4 = 0
            java.lang.String r5 = "package_name"
            java.lang.String r6 = "token"
            java.lang.String r7 = "~"
            java.lang.String r8 = ":"
            if (r12 == r2) goto Lc8
            r2 = 2
            java.lang.String r9 = "brand"
            java.lang.String r10 = "version"
            if (r12 == r2) goto L9e
            r2 = 3
            if (r12 == r2) goto L67
            r2 = 4
            if (r12 == r2) goto L35
            goto L12f
        L35:
            com.xiaomi.push.w$a r12 = new com.xiaomi.push.w$a
            r12.<init>(r8, r7)
            com.xiaomi.mipush.sdk.ag r2 = com.xiaomi.mipush.sdk.ag.e
            java.lang.String r2 = r2.name()
            com.xiaomi.push.w$a r12 = r12.a(r9, r2)
            java.lang.String r1 = a(r11, r1)
            com.xiaomi.push.w$a r12 = r12.a(r6, r1)
            java.lang.String r11 = r11.getPackageName()
            com.xiaomi.push.w$a r11 = r12.a(r5, r11)
            int r12 = a()
            if (r12 == 0) goto L61
        L5a:
            java.lang.Integer r12 = java.lang.Integer.valueOf(r12)
            r11.a(r10, r12)
        L61:
            java.lang.String r4 = r11.toString()
            goto L12f
        L67:
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            r12.append(r3)
            com.xiaomi.mipush.sdk.ag r2 = com.xiaomi.mipush.sdk.ag.d
            java.lang.String r2 = r2.name()
            r12.append(r2)
            r12.append(r7)
            r12.append(r6)
            r12.append(r8)
            java.lang.String r1 = a(r11, r1)
            r12.append(r1)
            r12.append(r7)
            r12.append(r5)
            r12.append(r8)
            java.lang.String r11 = r11.getPackageName()
            r12.append(r11)
            java.lang.String r4 = r12.toString()
            goto L12f
        L9e:
            com.xiaomi.push.w$a r12 = new com.xiaomi.push.w$a
            r12.<init>(r8, r7)
            com.xiaomi.mipush.sdk.ag r2 = com.xiaomi.mipush.sdk.ag.c
            java.lang.String r2 = r2.name()
            com.xiaomi.push.w$a r12 = r12.a(r9, r2)
            java.lang.String r1 = a(r11, r1)
            com.xiaomi.push.w$a r12 = r12.a(r6, r1)
            java.lang.String r11 = r11.getPackageName()
            com.xiaomi.push.w$a r11 = r12.a(r5, r11)
            int r12 = a()
            if (r12 == 0) goto Lc4
            goto L5a
        Lc4:
            r12 = 40090(0x9c9a, float:5.6178E-41)
            goto L5a
        Lc8:
            android.content.pm.PackageManager r12 = r11.getPackageManager()     // Catch: java.lang.Exception -> Ld7
            java.lang.String r2 = r11.getPackageName()     // Catch: java.lang.Exception -> Ld7
            r9 = 128(0x80, float:1.8E-43)
            android.content.pm.ApplicationInfo r4 = r12.getApplicationInfo(r2, r9)     // Catch: java.lang.Exception -> Ld7
            goto Ldf
        Ld7:
            r12 = move-exception
            java.lang.String r12 = r12.toString()
            com.xiaomi.channel.commonutils.logger.b.d(r12)
        Ldf:
            r12 = -1
            if (r4 == 0) goto Lea
            android.os.Bundle r12 = r4.metaData
            java.lang.String r2 = "com.huawei.hms.client.appid"
            int r12 = r12.getInt(r2)
        Lea:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r3)
            com.xiaomi.mipush.sdk.ag r3 = com.xiaomi.mipush.sdk.n.a(r11)
            java.lang.String r3 = r3.name()
            r2.append(r3)
            r2.append(r7)
            r2.append(r6)
            r2.append(r8)
            java.lang.String r1 = a(r11, r1)
            r2.append(r1)
            r2.append(r7)
            r2.append(r5)
            r2.append(r8)
            java.lang.String r11 = r11.getPackageName()
            r2.append(r11)
            r2.append(r7)
            java.lang.String r11 = "app_id"
            r2.append(r11)
            r2.append(r8)
            r2.append(r12)
            java.lang.String r4 = r2.toString()
        L12f:
            java.lang.String r11 = "RegInfo"
            r0.put(r11, r4)
            return r0
    }

    static void a(android.content.Context r6) {
            r0 = 0
            java.lang.String r1 = "mipush_extra"
            android.content.SharedPreferences r1 = r6.getSharedPreferences(r1, r0)
            com.xiaomi.mipush.sdk.e r2 = com.xiaomi.mipush.sdk.e.a
            java.lang.String r2 = a(r2)
            com.xiaomi.mipush.sdk.e r3 = com.xiaomi.mipush.sdk.e.b
            java.lang.String r3 = a(r3)
            java.lang.String r4 = ""
            java.lang.String r5 = r1.getString(r2, r4)
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 != 0) goto L2a
            java.lang.String r1 = r1.getString(r3, r4)
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L2a
            r0 = 1
        L2a:
            if (r0 == 0) goto L34
            com.xiaomi.mipush.sdk.ao r6 = com.xiaomi.mipush.sdk.ao.a(r6)
            r0 = 2
            r6.a(r0, r2)
        L34:
            return
    }

    public static void a(android.content.Context r2, com.xiaomi.mipush.sdk.e r3) {
            java.lang.String r3 = a(r3)
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto Lb
            return
        Lb:
            r0 = 0
            java.lang.String r1 = "mipush_extra"
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r1, r0)
            android.content.SharedPreferences$Editor r2 = r2.edit()
            java.lang.String r0 = ""
            android.content.SharedPreferences$Editor r2 = r2.putString(r3, r0)
            com.xiaomi.push.t.a(r2)
            return
    }

    public static void a(android.content.Context r3, com.xiaomi.mipush.sdk.e r4, java.lang.String r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 != 0) goto L38
            int r0 = a(r3, r4, r5)
            if (r0 == 0) goto L33
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "ASSEMBLE_PUSH : send token upload, check:"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            a(r4, r5)
            com.xiaomi.mipush.sdk.au r5 = com.xiaomi.mipush.sdk.l.a(r4)
            if (r5 != 0) goto L2a
            return
        L2a:
            com.xiaomi.mipush.sdk.ao r3 = com.xiaomi.mipush.sdk.ao.a(r3)
            r0 = 0
            r3.a(r0, r5, r4)
            goto L38
        L33:
            java.lang.String r3 = "ASSEMBLE_PUSH : do not need to send token"
            com.xiaomi.channel.commonutils.logger.b.a(r3)
        L38:
            return
    }

    public static void a(android.content.Intent r3) {
            if (r3 == 0) goto L1d
            android.os.Bundle r0 = r3.getExtras()
            if (r0 == 0) goto L1d
            java.lang.String r1 = "pushMsg"
            boolean r2 = r0.containsKey(r1)
            if (r2 == 0) goto L1d
            java.lang.String r0 = r0.getString(r1)
            com.xiaomi.mipush.sdk.MiPushMessage r0 = a(r0)
            java.lang.String r1 = "key_message"
            r3.putExtra(r1, r0)
        L1d:
            return
    }

    private static synchronized void a(com.xiaomi.mipush.sdk.e r2, java.lang.String r3) {
            java.lang.Class<com.xiaomi.mipush.sdk.i> r0 = com.xiaomi.mipush.sdk.i.class
            monitor-enter(r0)
            java.lang.String r2 = a(r2)     // Catch: java.lang.Throwable -> L28
            boolean r1 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L28
            if (r1 == 0) goto L14
            java.lang.String r2 = "ASSEMBLE_PUSH : can not find the key of token used in sp file"
            com.xiaomi.channel.commonutils.logger.b.a(r2)     // Catch: java.lang.Throwable -> L28
            monitor-exit(r0)
            return
        L14:
            boolean r1 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L28
            if (r1 == 0) goto L21
            java.lang.String r2 = "ASSEMBLE_PUSH : token is null"
            com.xiaomi.channel.commonutils.logger.b.a(r2)     // Catch: java.lang.Throwable -> L28
            monitor-exit(r0)
            return
        L21:
            java.util.HashMap<java.lang.String, java.lang.String> r1 = com.xiaomi.mipush.sdk.i.a     // Catch: java.lang.Throwable -> L28
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L28
            monitor-exit(r0)
            return
        L28:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    public static void a(java.lang.String r3, int r4) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "error code = "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            java.lang.String r0 = "hms_push_error"
            r1 = 1
            com.xiaomi.mipush.sdk.MiTinyDataClient.upload(r0, r3, r1, r4)
            return
    }

    public static boolean a(android.content.Context r0) {
            if (r0 != 0) goto L4
            r0 = 0
            return r0
        L4:
            boolean r0 = com.xiaomi.push.bj.b(r0)
            return r0
    }

    public static boolean a(android.content.Context r1, com.xiaomi.mipush.sdk.e r2) {
            com.xiaomi.push.ho r0 = com.xiaomi.mipush.sdk.l.a(r2)
            if (r0 == 0) goto L18
            com.xiaomi.push.service.ba r1 = com.xiaomi.push.service.ba.a(r1)
            com.xiaomi.push.ho r2 = com.xiaomi.mipush.sdk.l.a(r2)
            int r2 = r2.a()
            r0 = 1
            boolean r1 = r1.a(r2, r0)
            return r1
        L18:
            r1 = 0
            return r1
    }

    public static boolean a(com.xiaomi.mipush.sdk.e r1) {
            com.xiaomi.mipush.sdk.e r0 = com.xiaomi.mipush.sdk.e.d
            if (r1 == r0) goto Lb
            com.xiaomi.mipush.sdk.e r0 = com.xiaomi.mipush.sdk.e.b
            if (r1 != r0) goto L9
            goto Lb
        L9:
            r1 = 0
            goto Lc
        Lb:
            r1 = 1
        Lc:
            return r1
    }

    public static boolean a(com.xiaomi.push.if r1, com.xiaomi.mipush.sdk.e r2) {
            if (r1 == 0) goto L30
            com.xiaomi.push.hw r0 = r1.a()
            if (r0 == 0) goto L30
            com.xiaomi.push.hw r0 = r1.a()
            java.util.Map r0 = r0.a()
            if (r0 == 0) goto L30
            com.xiaomi.mipush.sdk.e r0 = com.xiaomi.mipush.sdk.e.b
            if (r2 != r0) goto L19
            java.lang.String r2 = "FCM"
            goto L1b
        L19:
            java.lang.String r2 = ""
        L1b:
            com.xiaomi.push.hw r1 = r1.a()
            java.util.Map r1 = r1.a()
            java.lang.String r0 = "assemble_push_type"
            java.lang.Object r1 = r1.get(r0)
            java.lang.String r1 = (java.lang.String) r1
            boolean r1 = r2.equalsIgnoreCase(r1)
            return r1
        L30:
            r1 = 0
            return r1
    }

    public static byte[] a(android.content.Context r0, com.xiaomi.push.if r1, com.xiaomi.mipush.sdk.e r2) {
            boolean r1 = a(r1, r2)
            if (r1 == 0) goto Lf
            java.lang.String r0 = a(r0, r2)
            byte[] r0 = com.xiaomi.push.bo.a(r0)
            return r0
        Lf:
            r0 = 0
            return r0
    }

    public static java.lang.String b(com.xiaomi.mipush.sdk.e r1) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = a(r1)
            r0.append(r1)
            java.lang.String r1 = "_version"
            r0.append(r1)
            java.lang.String r1 = r0.toString()
            return r1
    }

    public static void b(android.content.Context r0) {
            com.xiaomi.mipush.sdk.f r0 = com.xiaomi.mipush.sdk.f.a(r0)
            r0.register()
            return
    }

    public static void b(android.content.Context r2, com.xiaomi.mipush.sdk.e r3, java.lang.String r4) {
            com.xiaomi.push.al r0 = com.xiaomi.push.al.a(r2)
            com.xiaomi.mipush.sdk.j r1 = new com.xiaomi.mipush.sdk.j
            r1.<init>(r4, r2, r3)
            r0.a(r1)
            return
    }

    public static java.lang.String c(com.xiaomi.mipush.sdk.e r1) {
            int[] r0 = com.xiaomi.mipush.sdk.k.a
            int r1 = r1.ordinal()
            r1 = r0[r1]
            r0 = 1
            if (r1 == r0) goto L1f
            r0 = 2
            if (r1 == r0) goto L1c
            r0 = 3
            if (r1 == r0) goto L19
            r0 = 4
            if (r1 == r0) goto L16
            r1 = 0
            goto L21
        L16:
            java.lang.String r1 = "ftos_push_error"
            goto L21
        L19:
            java.lang.String r1 = "cos_push_error"
            goto L21
        L1c:
            java.lang.String r1 = "fcm_push_error"
            goto L21
        L1f:
            java.lang.String r1 = "hms_push_error"
        L21:
            return r1
    }

    public static void c(android.content.Context r0) {
            com.xiaomi.mipush.sdk.f r0 = com.xiaomi.mipush.sdk.f.a(r0)
            r0.unregister()
            return
    }

    static void c(android.content.Context r0, com.xiaomi.mipush.sdk.e r1, java.lang.String r2) {
            d(r0, r1, r2)
            return
    }

    private static synchronized void d(android.content.Context r4, com.xiaomi.mipush.sdk.e r5, java.lang.String r6) {
            java.lang.Class<com.xiaomi.mipush.sdk.i> r0 = com.xiaomi.mipush.sdk.i.class
            monitor-enter(r0)
            java.lang.String r1 = a(r5)     // Catch: java.lang.Throwable -> L5a
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L5a
            if (r2 == 0) goto L14
            java.lang.String r4 = "ASSEMBLE_PUSH : can not find the key of token used in sp file"
            com.xiaomi.channel.commonutils.logger.b.a(r4)     // Catch: java.lang.Throwable -> L5a
            monitor-exit(r0)
            return
        L14:
            java.lang.String r2 = "mipush_extra"
            r3 = 0
            android.content.SharedPreferences r2 = r4.getSharedPreferences(r2, r3)     // Catch: java.lang.Throwable -> L5a
            android.content.SharedPreferences$Editor r2 = r2.edit()     // Catch: java.lang.Throwable -> L5a
            android.content.SharedPreferences$Editor r1 = r2.putString(r1, r6)     // Catch: java.lang.Throwable -> L5a
            java.lang.String r3 = "last_check_token"
            com.xiaomi.mipush.sdk.b r4 = com.xiaomi.mipush.sdk.b.a(r4)     // Catch: java.lang.Throwable -> L5a
            java.lang.String r4 = r4.c()     // Catch: java.lang.Throwable -> L5a
            r1.putString(r3, r4)     // Catch: java.lang.Throwable -> L5a
            boolean r4 = a(r5)     // Catch: java.lang.Throwable -> L5a
            if (r4 == 0) goto L41
            java.lang.String r4 = b(r5)     // Catch: java.lang.Throwable -> L5a
            int r5 = a()     // Catch: java.lang.Throwable -> L5a
            r2.putInt(r4, r5)     // Catch: java.lang.Throwable -> L5a
        L41:
            com.xiaomi.push.t.a(r2)     // Catch: java.lang.Throwable -> L5a
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5a
            r4.<init>()     // Catch: java.lang.Throwable -> L5a
            java.lang.String r5 = "ASSEMBLE_PUSH : update sp file success!  "
            r4.append(r5)     // Catch: java.lang.Throwable -> L5a
            r4.append(r6)     // Catch: java.lang.Throwable -> L5a
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L5a
            com.xiaomi.channel.commonutils.logger.b.a(r4)     // Catch: java.lang.Throwable -> L5a
            monitor-exit(r0)
            return
        L5a:
            r4 = move-exception
            monitor-exit(r0)
            throw r4
    }
}
