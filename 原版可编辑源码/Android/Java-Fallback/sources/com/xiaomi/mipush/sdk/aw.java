package com.xiaomi.mipush.sdk;

final class aw implements java.lang.Runnable {
    final android.content.Context a;
    final boolean a;

    aw(android.content.Context r1, boolean r2) {
            r0 = this;
            r0.a = r1
            r0.a = r2
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r7 = this;
            java.lang.String r0 = "do sync info"
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            com.xiaomi.push.ii r0 = new com.xiaomi.push.ii
            java.lang.String r1 = com.xiaomi.push.service.bd.a()
            r2 = 0
            r0.<init>(r1, r2)
            android.content.Context r1 = r7.a
            com.xiaomi.mipush.sdk.b r1 = com.xiaomi.mipush.sdk.b.a(r1)
            com.xiaomi.push.ht r3 = com.xiaomi.push.ht.v
            java.lang.String r3 = r3.a
            r0.c(r3)
            java.lang.String r3 = r1.a()
            r0.b(r3)
            android.content.Context r3 = r7.a
            java.lang.String r3 = r3.getPackageName()
            r0.d(r3)
            java.util.HashMap r3 = new java.util.HashMap
            r3.<init>()
            r0.a = r3
            java.util.Map<java.lang.String, java.lang.String> r3 = r0.a
            android.content.Context r4 = r7.a
            java.lang.String r5 = r4.getPackageName()
            java.lang.String r4 = com.xiaomi.push.h.a(r4, r5)
            java.lang.String r5 = "app_version"
            com.xiaomi.push.n.a(r3, r5, r4)
            java.util.Map<java.lang.String, java.lang.String> r3 = r0.a
            android.content.Context r4 = r7.a
            java.lang.String r5 = r4.getPackageName()
            int r4 = com.xiaomi.push.h.a(r4, r5)
            java.lang.String r4 = java.lang.Integer.toString(r4)
            java.lang.String r5 = "app_version_code"
            com.xiaomi.push.n.a(r3, r5, r4)
            java.util.Map<java.lang.String, java.lang.String> r3 = r0.a
            java.lang.String r4 = "push_sdk_vn"
            java.lang.String r5 = "4_9_0"
            com.xiaomi.push.n.a(r3, r4, r5)
            java.util.Map<java.lang.String, java.lang.String> r3 = r0.a
            r4 = 40090(0x9c9a, float:5.6178E-41)
            java.lang.String r4 = java.lang.Integer.toString(r4)
            java.lang.String r5 = "push_sdk_vc"
            com.xiaomi.push.n.a(r3, r5, r4)
            java.util.Map<java.lang.String, java.lang.String> r3 = r0.a
            java.lang.String r4 = r1.b()
            java.lang.String r5 = "token"
            com.xiaomi.push.n.a(r3, r5, r4)
            boolean r3 = com.xiaomi.push.m.d()
            java.lang.String r4 = ","
            if (r3 != 0) goto Lb8
            android.content.Context r3 = r7.a
            java.lang.String r3 = com.xiaomi.push.j.d(r3)
            java.lang.String r3 = com.xiaomi.push.bp.a(r3)
            android.content.Context r5 = r7.a
            java.lang.String r5 = com.xiaomi.push.j.f(r5)
            boolean r6 = android.text.TextUtils.isEmpty(r5)
            if (r6 != 0) goto Lab
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r3)
            r6.append(r4)
            r6.append(r5)
            java.lang.String r3 = r6.toString()
        Lab:
            boolean r5 = android.text.TextUtils.isEmpty(r3)
            if (r5 != 0) goto Lb8
            java.util.Map<java.lang.String, java.lang.String> r5 = r0.a
            java.lang.String r6 = "imei_md5"
            com.xiaomi.push.n.a(r5, r6, r3)
        Lb8:
            android.content.Context r3 = r7.a
            com.xiaomi.push.ba r3 = com.xiaomi.push.ba.a(r3)
            java.util.Map<java.lang.String, java.lang.String> r5 = r0.a
            r3.a(r5)
            java.util.Map<java.lang.String, java.lang.String> r3 = r0.a
            java.lang.String r5 = r1.c()
            java.lang.String r6 = "reg_id"
            com.xiaomi.push.n.a(r3, r6, r5)
            java.util.Map<java.lang.String, java.lang.String> r3 = r0.a
            java.lang.String r1 = r1.d()
            java.lang.String r5 = "reg_secret"
            com.xiaomi.push.n.a(r3, r5, r1)
            android.content.Context r1 = r7.a
            java.lang.String r1 = com.xiaomi.mipush.sdk.MiPushClient.getAcceptTime(r1)
            java.lang.String r3 = "-"
            java.lang.String r1 = r1.replace(r4, r3)
            java.util.Map<java.lang.String, java.lang.String> r3 = r0.a
            java.lang.String r4 = "accept_time"
            com.xiaomi.push.n.a(r3, r4, r1)
            boolean r1 = r7.a
            if (r1 == 0) goto L121
            java.util.Map<java.lang.String, java.lang.String> r1 = r0.a
            android.content.Context r3 = r7.a
            java.util.List r3 = com.xiaomi.mipush.sdk.MiPushClient.getAllAlias(r3)
            java.lang.String r3 = com.xiaomi.mipush.sdk.av.a(r3)
            java.lang.String r4 = "aliases_md5"
            com.xiaomi.push.n.a(r1, r4, r3)
            java.util.Map<java.lang.String, java.lang.String> r1 = r0.a
            android.content.Context r3 = r7.a
            java.util.List r3 = com.xiaomi.mipush.sdk.MiPushClient.getAllTopic(r3)
            java.lang.String r3 = com.xiaomi.mipush.sdk.av.a(r3)
            java.lang.String r4 = "topics_md5"
            com.xiaomi.push.n.a(r1, r4, r3)
            java.util.Map<java.lang.String, java.lang.String> r1 = r0.a
            android.content.Context r3 = r7.a
            java.util.List r3 = com.xiaomi.mipush.sdk.MiPushClient.getAllUserAccount(r3)
            java.lang.String r3 = com.xiaomi.mipush.sdk.av.a(r3)
            java.lang.String r4 = "accounts_md5"
            goto L151
        L121:
            java.util.Map<java.lang.String, java.lang.String> r1 = r0.a
            android.content.Context r3 = r7.a
            java.util.List r3 = com.xiaomi.mipush.sdk.MiPushClient.getAllAlias(r3)
            java.lang.String r3 = com.xiaomi.mipush.sdk.av.b(r3)
            java.lang.String r4 = "aliases"
            com.xiaomi.push.n.a(r1, r4, r3)
            java.util.Map<java.lang.String, java.lang.String> r1 = r0.a
            android.content.Context r3 = r7.a
            java.util.List r3 = com.xiaomi.mipush.sdk.MiPushClient.getAllTopic(r3)
            java.lang.String r3 = com.xiaomi.mipush.sdk.av.b(r3)
            java.lang.String r4 = "topics"
            com.xiaomi.push.n.a(r1, r4, r3)
            java.util.Map<java.lang.String, java.lang.String> r1 = r0.a
            android.content.Context r3 = r7.a
            java.util.List r3 = com.xiaomi.mipush.sdk.MiPushClient.getAllUserAccount(r3)
            java.lang.String r3 = com.xiaomi.mipush.sdk.av.b(r3)
            java.lang.String r4 = "user_accounts"
        L151:
            com.xiaomi.push.n.a(r1, r4, r3)
            android.content.Context r1 = r7.a
            com.xiaomi.mipush.sdk.ao r1 = com.xiaomi.mipush.sdk.ao.a(r1)
            com.xiaomi.push.hj r3 = com.xiaomi.push.hj.i
            r4 = 0
            r1.a(r0, r3, r2, r4)
            return
    }
}
