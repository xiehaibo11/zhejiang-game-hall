package com.huawei.hms.push;

public class j {
    public static final java.lang.String[] a = null;
    public android.content.Context b;
    public com.huawei.hms.push.k c;

    static {
            java.lang.String r0 = "url"
            java.lang.String r1 = "app"
            java.lang.String r2 = "cosa"
            java.lang.String r3 = "rp"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2, r3}
            com.huawei.hms.push.j.a = r0
            return
    }

    public j(android.content.Context r1, com.huawei.hms.push.k r2) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            r0.c = r2
            return
    }

    public static boolean b(java.lang.String r5) {
            java.lang.String[] r0 = com.huawei.hms.push.j.a
            int r1 = r0.length
            r2 = 0
            r3 = r2
        L5:
            if (r3 >= r1) goto L14
            r4 = r0[r3]
            boolean r4 = r4.equals(r5)
            if (r4 == 0) goto L11
            r5 = 1
            return r5
        L11:
            int r3 = r3 + 1
            goto L5
        L14:
            return r2
    }

    public final java.lang.String a(java.lang.String r12) {
            r11 = this;
            java.lang.String r0 = "&"
            java.lang.String r1 = "PushSelfShowLog"
            r2 = 63
            int r2 = r12.indexOf(r2)     // Catch: java.lang.Exception -> L94
            r3 = -1
            if (r2 != r3) goto Le
            return r12
        Le:
            int r3 = r2 + 1
            java.lang.String r4 = r12.substring(r3)     // Catch: java.lang.Exception -> L94
            java.lang.String[] r4 = r4.split(r0)     // Catch: java.lang.Exception -> L94
            java.util.ArrayList r5 = new java.util.ArrayList     // Catch: java.lang.Exception -> L94
            r5.<init>()     // Catch: java.lang.Exception -> L94
            int r6 = r4.length     // Catch: java.lang.Exception -> L94
            r7 = 0
            r8 = r7
        L20:
            if (r8 >= r6) goto L3a
            r9 = r4[r8]     // Catch: java.lang.Exception -> L94
            java.lang.String r10 = "h_w_hiapp_referrer"
            boolean r10 = r9.startsWith(r10)     // Catch: java.lang.Exception -> L94
            if (r10 != 0) goto L37
            java.lang.String r10 = "h_w_gp_referrer"
            boolean r10 = r9.startsWith(r10)     // Catch: java.lang.Exception -> L94
            if (r10 != 0) goto L37
            r5.add(r9)     // Catch: java.lang.Exception -> L94
        L37:
            int r8 = r8 + 1
            goto L20
        L3a:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L94
            r4.<init>()     // Catch: java.lang.Exception -> L94
            int r6 = r5.size()     // Catch: java.lang.Exception -> L94
            r8 = r7
        L44:
            if (r8 >= r6) goto L5d
            java.lang.Object r9 = r5.get(r8)     // Catch: java.lang.Exception -> L94
            java.lang.String r9 = (java.lang.String) r9     // Catch: java.lang.Exception -> L94
            r4.append(r9)     // Catch: java.lang.Exception -> L94
            int r9 = r5.size()     // Catch: java.lang.Exception -> L94
            int r9 = r9 + (-1)
            if (r8 >= r9) goto L5a
            r4.append(r0)     // Catch: java.lang.Exception -> L94
        L5a:
            int r8 = r8 + 1
            goto L44
        L5d:
            int r0 = r5.size()     // Catch: java.lang.Exception -> L94
            if (r0 != 0) goto L68
            java.lang.String r0 = r12.substring(r7, r2)     // Catch: java.lang.Exception -> L94
            goto L7f
        L68:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L94
            r0.<init>()     // Catch: java.lang.Exception -> L94
            java.lang.String r2 = r12.substring(r7, r3)     // Catch: java.lang.Exception -> L94
            r0.append(r2)     // Catch: java.lang.Exception -> L94
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Exception -> L94
            r0.append(r2)     // Catch: java.lang.Exception -> L94
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L94
        L7f:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L94
            r2.<init>()     // Catch: java.lang.Exception -> L94
            java.lang.String r3 = "after delete referrer, the new IntentUri is:"
            r2.append(r3)     // Catch: java.lang.Exception -> L94
            r2.append(r0)     // Catch: java.lang.Exception -> L94
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L94
            com.huawei.hms.support.log.HMSLog.d(r1, r2)     // Catch: java.lang.Exception -> L94
            return r0
        L94:
            r0 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "delete referrer exception."
            r2.append(r3)
            java.lang.String r0 = r0.toString()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            com.huawei.hms.support.log.HMSLog.e(r1, r0)
            return r12
    }

    public final void a() {
            r4 = this;
            java.lang.String r0 = "PushSelfShowLog"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L40
            r1.<init>()     // Catch: java.lang.Exception -> L40
            java.lang.String r2 = "enter launchApp, appPackageName ="
            r1.append(r2)     // Catch: java.lang.Exception -> L40
            com.huawei.hms.push.k r2 = r4.c     // Catch: java.lang.Exception -> L40
            java.lang.String r2 = r2.d()     // Catch: java.lang.Exception -> L40
            r1.append(r2)     // Catch: java.lang.Exception -> L40
            java.lang.String r2 = ",and msg.intentUri is "
            r1.append(r2)     // Catch: java.lang.Exception -> L40
            com.huawei.hms.push.k r2 = r4.c     // Catch: java.lang.Exception -> L40
            java.lang.String r2 = r2.n()     // Catch: java.lang.Exception -> L40
            r1.append(r2)     // Catch: java.lang.Exception -> L40
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L40
            com.huawei.hms.support.log.HMSLog.i(r0, r1)     // Catch: java.lang.Exception -> L40
            android.content.Context r1 = r4.b     // Catch: java.lang.Exception -> L40
            com.huawei.hms.push.k r2 = r4.c     // Catch: java.lang.Exception -> L40
            java.lang.String r2 = r2.d()     // Catch: java.lang.Exception -> L40
            boolean r1 = com.huawei.hms.push.q.c(r1, r2)     // Catch: java.lang.Exception -> L40
            if (r1 == 0) goto L3c
            r4.b()     // Catch: java.lang.Exception -> L40
            goto L59
        L3c:
            r4.d()     // Catch: java.lang.Exception -> L40
            goto L59
        L40:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "launchApp error:"
            r2.append(r3)
            java.lang.String r1 = r1.toString()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            com.huawei.hms.support.log.HMSLog.e(r0, r1)
        L59:
            return
    }

    public final void b() {
            r6 = this;
            java.lang.String r0 = "PushSelfShowLog"
            java.lang.String r1 = "run into launchCosaApp"
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lfa
            r1.<init>()     // Catch: java.lang.Exception -> Lfa
            java.lang.String r2 = "enter launchExistApp cosa, appPackageName ="
            r1.append(r2)     // Catch: java.lang.Exception -> Lfa
            com.huawei.hms.push.k r2 = r6.c     // Catch: java.lang.Exception -> Lfa
            java.lang.String r2 = r2.d()     // Catch: java.lang.Exception -> Lfa
            r1.append(r2)     // Catch: java.lang.Exception -> Lfa
            java.lang.String r2 = ",and msg.intentUri is "
            r1.append(r2)     // Catch: java.lang.Exception -> Lfa
            com.huawei.hms.push.k r2 = r6.c     // Catch: java.lang.Exception -> Lfa
            java.lang.String r2 = r2.n()     // Catch: java.lang.Exception -> Lfa
            r1.append(r2)     // Catch: java.lang.Exception -> Lfa
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> Lfa
            com.huawei.hms.support.log.HMSLog.i(r0, r1)     // Catch: java.lang.Exception -> Lfa
            android.content.Context r1 = r6.b     // Catch: java.lang.Exception -> Lfa
            com.huawei.hms.push.k r2 = r6.c     // Catch: java.lang.Exception -> Lfa
            java.lang.String r2 = r2.d()     // Catch: java.lang.Exception -> Lfa
            android.content.Intent r1 = com.huawei.hms.push.q.b(r1, r2)     // Catch: java.lang.Exception -> Lfa
            com.huawei.hms.push.k r2 = r6.c     // Catch: java.lang.Exception -> Lfa
            java.lang.String r2 = r2.n()     // Catch: java.lang.Exception -> Lfa
            r3 = 0
            if (r2 == 0) goto L98
            com.huawei.hms.push.k r2 = r6.c     // Catch: java.lang.Exception -> L7e
            java.lang.String r2 = r2.n()     // Catch: java.lang.Exception -> L7e
            android.content.Intent r2 = android.content.Intent.parseUri(r2, r3)     // Catch: java.lang.Exception -> L7e
            r4 = 0
            r2.setSelector(r4)     // Catch: java.lang.Exception -> L7e
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L7e
            r4.<init>()     // Catch: java.lang.Exception -> L7e
            java.lang.String r5 = "Intent.parseUri(msg.intentUri, 0), action:"
            r4.append(r5)     // Catch: java.lang.Exception -> L7e
            java.lang.String r5 = r2.getAction()     // Catch: java.lang.Exception -> L7e
            r4.append(r5)     // Catch: java.lang.Exception -> L7e
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L7e
            com.huawei.hms.support.log.HMSLog.i(r0, r4)     // Catch: java.lang.Exception -> L7e
            android.content.Context r4 = r6.b     // Catch: java.lang.Exception -> L7e
            com.huawei.hms.push.k r5 = r6.c     // Catch: java.lang.Exception -> L7e
            java.lang.String r5 = r5.d()     // Catch: java.lang.Exception -> L7e
            java.lang.Boolean r4 = com.huawei.hms.push.q.a(r4, r5, r2)     // Catch: java.lang.Exception -> L7e
            boolean r3 = r4.booleanValue()     // Catch: java.lang.Exception -> L7e
            if (r3 == 0) goto Lc7
            r1 = r2
            goto Lc7
        L7e:
            r2 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lfa
            r4.<init>()     // Catch: java.lang.Exception -> Lfa
            java.lang.String r5 = "intentUri error."
            r4.append(r5)     // Catch: java.lang.Exception -> Lfa
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> Lfa
            r4.append(r2)     // Catch: java.lang.Exception -> Lfa
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Exception -> Lfa
            com.huawei.hms.support.log.HMSLog.w(r0, r2)     // Catch: java.lang.Exception -> Lfa
            goto Lc7
        L98:
            com.huawei.hms.push.k r2 = r6.c     // Catch: java.lang.Exception -> Lfa
            java.lang.String r2 = r2.a()     // Catch: java.lang.Exception -> Lfa
            if (r2 == 0) goto Lbe
            android.content.Intent r2 = new android.content.Intent     // Catch: java.lang.Exception -> Lfa
            com.huawei.hms.push.k r4 = r6.c     // Catch: java.lang.Exception -> Lfa
            java.lang.String r4 = r4.a()     // Catch: java.lang.Exception -> Lfa
            r2.<init>(r4)     // Catch: java.lang.Exception -> Lfa
            android.content.Context r4 = r6.b     // Catch: java.lang.Exception -> Lfa
            com.huawei.hms.push.k r5 = r6.c     // Catch: java.lang.Exception -> Lfa
            java.lang.String r5 = r5.d()     // Catch: java.lang.Exception -> Lfa
            java.lang.Boolean r4 = com.huawei.hms.push.q.a(r4, r5, r2)     // Catch: java.lang.Exception -> Lfa
            boolean r4 = r4.booleanValue()     // Catch: java.lang.Exception -> Lfa
            if (r4 == 0) goto Lbe
            r1 = r2
        Lbe:
            com.huawei.hms.push.k r2 = r6.c     // Catch: java.lang.Exception -> Lfa
            java.lang.String r2 = r2.d()     // Catch: java.lang.Exception -> Lfa
            r1.setPackage(r2)     // Catch: java.lang.Exception -> Lfa
        Lc7:
            if (r1 != 0) goto Lcf
            java.lang.String r1 = "launchCosaApp,intent == null"
            com.huawei.hms.support.log.HMSLog.i(r0, r1)     // Catch: java.lang.Exception -> Lfa
            return
        Lcf:
            if (r3 == 0) goto Ld7
            r2 = 268435456(0x10000000, float:2.524355E-29)
            r1.addFlags(r2)     // Catch: java.lang.Exception -> Lfa
            goto Ldc
        Ld7:
            r2 = 805437440(0x30020000, float:4.7293724E-10)
            r1.setFlags(r2)     // Catch: java.lang.Exception -> Lfa
        Ldc:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lfa
            r2.<init>()     // Catch: java.lang.Exception -> Lfa
            java.lang.String r3 = "start "
            r2.append(r3)     // Catch: java.lang.Exception -> Lfa
            java.lang.String r3 = r1.toURI()     // Catch: java.lang.Exception -> Lfa
            r2.append(r3)     // Catch: java.lang.Exception -> Lfa
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> Lfa
            com.huawei.hms.support.log.HMSLog.i(r0, r2)     // Catch: java.lang.Exception -> Lfa
            android.content.Context r2 = r6.b     // Catch: java.lang.Exception -> Lfa
            r2.startActivity(r1)     // Catch: java.lang.Exception -> Lfa
            goto L113
        Lfa:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "launch Cosa App exception."
            r2.append(r3)
            java.lang.String r1 = r1.toString()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            com.huawei.hms.support.log.HMSLog.e(r0, r1)
        L113:
            return
    }

    public void c() {
            r3 = this;
            java.lang.String r0 = "PushSelfShowLog"
            java.lang.String r1 = "enter launchNotify()"
            com.huawei.hms.support.log.HMSLog.d(r0, r1)
            android.content.Context r1 = r3.b
            if (r1 == 0) goto La1
            com.huawei.hms.push.k r1 = r3.c
            if (r1 != 0) goto L11
            goto La1
        L11:
            java.lang.String r1 = r1.i()
            java.lang.String r2 = "app"
            boolean r1 = r2.equals(r1)
            if (r1 == 0) goto L22
            r3.a()
            goto La0
        L22:
            com.huawei.hms.push.k r1 = r3.c
            java.lang.String r1 = r1.i()
            java.lang.String r2 = "cosa"
            boolean r1 = r2.equals(r1)
            if (r1 == 0) goto L34
            r3.b()
            goto La0
        L34:
            com.huawei.hms.push.k r1 = r3.c
            java.lang.String r1 = r1.i()
            java.lang.String r2 = "rp"
            boolean r1 = r2.equals(r1)
            if (r1 == 0) goto L5d
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            com.huawei.hms.push.k r2 = r3.c
            java.lang.String r2 = r2.i()
            r1.append(r2)
            java.lang.String r2 = " not support rich message."
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.huawei.hms.support.log.HMSLog.w(r0, r1)
            goto La0
        L5d:
            com.huawei.hms.push.k r1 = r3.c
            java.lang.String r1 = r1.i()
            java.lang.String r2 = "url"
            boolean r1 = r2.equals(r1)
            if (r1 == 0) goto L86
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            com.huawei.hms.push.k r2 = r3.c
            java.lang.String r2 = r2.i()
            r1.append(r2)
            java.lang.String r2 = " not support URL."
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.huawei.hms.support.log.HMSLog.w(r0, r1)
            goto La0
        L86:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            com.huawei.hms.push.k r2 = r3.c
            java.lang.String r2 = r2.i()
            r1.append(r2)
            java.lang.String r2 = " is not exist in hShowType"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.huawei.hms.support.log.HMSLog.d(r0, r1)
        La0:
            return
        La1:
            java.lang.String r1 = "launchNotify  context or msg is null"
            com.huawei.hms.support.log.HMSLog.d(r0, r1)
            return
    }

    public final void d() {
            r7 = this;
            java.lang.String r0 = "com.android.vending"
            java.lang.String r1 = "com.huawei.appmarket"
            java.lang.String r2 = "android.intent.action.VIEW"
            java.lang.String r3 = "PushSelfShowLog"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lcc
            r4.<init>()     // Catch: java.lang.Exception -> Lcc
            com.huawei.hms.push.k r5 = r7.c     // Catch: java.lang.Exception -> Lcc
            java.lang.String r5 = r5.n()     // Catch: java.lang.Exception -> Lcc
            boolean r5 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> Lcc
            if (r5 != 0) goto L2f
            java.lang.String r5 = "&referrer="
            r4.append(r5)     // Catch: java.lang.Exception -> Lcc
            com.huawei.hms.push.k r5 = r7.c     // Catch: java.lang.Exception -> Lcc
            java.lang.String r5 = r5.n()     // Catch: java.lang.Exception -> Lcc
            java.lang.String r5 = r7.a(r5)     // Catch: java.lang.Exception -> Lcc
            java.lang.String r5 = android.net.Uri.encode(r5)     // Catch: java.lang.Exception -> Lcc
            r4.append(r5)     // Catch: java.lang.Exception -> Lcc
        L2f:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lcc
            r5.<init>()     // Catch: java.lang.Exception -> Lcc
            java.lang.String r6 = "market://details?id="
            r5.append(r6)     // Catch: java.lang.Exception -> Lcc
            com.huawei.hms.push.k r6 = r7.c     // Catch: java.lang.Exception -> Lcc
            java.lang.String r6 = r6.d()     // Catch: java.lang.Exception -> Lcc
            r5.append(r6)     // Catch: java.lang.Exception -> Lcc
            r5.append(r4)     // Catch: java.lang.Exception -> Lcc
            java.lang.String r4 = r5.toString()     // Catch: java.lang.Exception -> Lcc
            android.content.Intent r5 = new android.content.Intent     // Catch: java.lang.Exception -> Lcc
            r5.<init>(r2)     // Catch: java.lang.Exception -> Lcc
            android.net.Uri r6 = android.net.Uri.parse(r4)     // Catch: java.lang.Exception -> Lcc
            r5.setData(r6)     // Catch: java.lang.Exception -> Lcc
            r5.setPackage(r1)     // Catch: java.lang.Exception -> Lcc
            android.content.Intent r6 = new android.content.Intent     // Catch: java.lang.Exception -> Lcc
            r6.<init>(r2)     // Catch: java.lang.Exception -> Lcc
            android.net.Uri r2 = android.net.Uri.parse(r4)     // Catch: java.lang.Exception -> Lcc
            r6.setData(r2)     // Catch: java.lang.Exception -> Lcc
            r6.setPackage(r0)     // Catch: java.lang.Exception -> Lcc
            android.content.Context r2 = r7.b     // Catch: java.lang.Exception -> Lcc
            java.lang.Boolean r0 = com.huawei.hms.push.q.a(r2, r0, r6)     // Catch: java.lang.Exception -> Lcc
            boolean r0 = r0.booleanValue()     // Catch: java.lang.Exception -> Lcc
            r2 = 402653184(0x18000000, float:1.6543612E-24)
            if (r0 == 0) goto L96
            r6.setFlags(r2)     // Catch: java.lang.Exception -> Lcc
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lcc
            r0.<init>()     // Catch: java.lang.Exception -> Lcc
            java.lang.String r1 = "open google play store's app detail, IntentUrl is:"
            r0.append(r1)     // Catch: java.lang.Exception -> Lcc
            java.lang.String r1 = r6.toURI()     // Catch: java.lang.Exception -> Lcc
            r0.append(r1)     // Catch: java.lang.Exception -> Lcc
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> Lcc
            com.huawei.hms.support.log.HMSLog.i(r3, r0)     // Catch: java.lang.Exception -> Lcc
            android.content.Context r0 = r7.b     // Catch: java.lang.Exception -> Lcc
            r0.startActivity(r6)     // Catch: java.lang.Exception -> Lcc
            goto Le1
        L96:
            android.content.Context r0 = r7.b     // Catch: java.lang.Exception -> Lcc
            java.lang.Boolean r0 = com.huawei.hms.push.q.a(r0, r1, r5)     // Catch: java.lang.Exception -> Lcc
            boolean r0 = r0.booleanValue()     // Catch: java.lang.Exception -> Lcc
            if (r0 == 0) goto Lc3
            r5.setFlags(r2)     // Catch: java.lang.Exception -> Lcc
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lcc
            r0.<init>()     // Catch: java.lang.Exception -> Lcc
            java.lang.String r1 = "open HiApp's app detail, IntentUrl is:"
            r0.append(r1)     // Catch: java.lang.Exception -> Lcc
            java.lang.String r1 = r5.toURI()     // Catch: java.lang.Exception -> Lcc
            r0.append(r1)     // Catch: java.lang.Exception -> Lcc
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> Lcc
            com.huawei.hms.support.log.HMSLog.i(r3, r0)     // Catch: java.lang.Exception -> Lcc
            android.content.Context r0 = r7.b     // Catch: java.lang.Exception -> Lcc
            r0.startActivity(r5)     // Catch: java.lang.Exception -> Lcc
            goto Le1
        Lc3:
            java.lang.String r0 = "open app detail by browser."
            com.huawei.hms.support.log.HMSLog.i(r3, r0)     // Catch: java.lang.Exception -> Lcc
            r7.e()     // Catch: java.lang.Exception -> Lcc
            goto Le1
        Lcc:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "open market app detail failed,exception:"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            com.huawei.hms.support.log.HMSLog.e(r3, r0)
        Le1:
            return
    }

    public final void e() {
            r6 = this;
            java.lang.String r0 = "parse h_w_hiapp_referrer failed"
            java.lang.String r1 = ""
            java.lang.String r2 = "PushSelfShowLog"
            com.huawei.hms.push.k r3 = r6.c     // Catch: java.lang.Exception -> L2c
            java.lang.String r3 = r3.n()     // Catch: java.lang.Exception -> L2c
            java.lang.String r3 = android.net.Uri.decode(r3)     // Catch: java.lang.Exception -> L2c
            android.net.Uri r3 = android.net.Uri.parse(r3)     // Catch: java.lang.Exception -> L2c
            java.lang.String r4 = "h_w_hiapp_referrer"
            java.lang.String r4 = r3.getQueryParameter(r4)     // Catch: java.lang.Exception -> L1b
            goto L1f
        L1b:
            com.huawei.hms.support.log.HMSLog.i(r2, r0)     // Catch: java.lang.Exception -> L2c
            r4 = r1
        L1f:
            java.lang.String r5 = "h_w_gp_referrer"
            java.lang.String r1 = r3.getQueryParameter(r5)     // Catch: java.lang.Exception -> L26
            goto L46
        L26:
            com.huawei.hms.support.log.HMSLog.i(r2, r0)     // Catch: java.lang.Exception -> L2a
            goto L46
        L2a:
            r0 = move-exception
            goto L2e
        L2c:
            r0 = move-exception
            r4 = r1
        L2e:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r5 = "parse intentUri error."
            r3.append(r5)
            java.lang.String r0 = r0.toString()
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            com.huawei.hms.support.log.HMSLog.w(r2, r0)
        L46:
            r0 = 0
            boolean r3 = com.huawei.hms.utils.Util.isEMUI()
            if (r3 == 0) goto L82
            boolean r3 = com.huawei.hms.utils.Util.isChinaROM()
            if (r3 != 0) goto L54
            goto L82
        L54:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "It is China device, open Huawei market web, referrer: "
            r1.append(r3)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            com.huawei.hms.support.log.HMSLog.i(r2, r1)
            java.lang.String r1 = android.net.Uri.decode(r4)
            boolean r3 = android.webkit.URLUtil.isValidUrl(r1)
            if (r3 == 0) goto L74
            r0 = r1
            goto Lc1
        L74:
            android.content.Context r1 = r6.b
            if (r1 == 0) goto Lc1
            com.huawei.hms.utils.ResourceLoaderUtil.setmContext(r1)
            java.lang.String r0 = "hms_push_vmall"
            java.lang.String r0 = com.huawei.hms.utils.ResourceLoaderUtil.getString(r0)
            goto Lc1
        L82:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "not EMUI system or not in China, open google play web, referrer: "
            r0.append(r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.huawei.hms.support.log.HMSLog.i(r2, r0)
            java.lang.String r0 = android.net.Uri.decode(r1)
            boolean r1 = android.webkit.URLUtil.isValidUrl(r0)
            if (r1 == 0) goto La1
            goto Lc1
        La1:
            android.content.Context r0 = r6.b
            com.huawei.hms.utils.ResourceLoaderUtil.setmContext(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "hms_push_google"
            java.lang.String r1 = com.huawei.hms.utils.ResourceLoaderUtil.getString(r1)
            r0.append(r1)
            com.huawei.hms.push.k r1 = r6.c
            java.lang.String r1 = r1.d()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
        Lc1:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "open the URL by browser: "
            r1.append(r3)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.huawei.hms.support.log.HMSLog.i(r2, r1)
            android.content.Context r1 = r6.b
            com.huawei.hms.push.q.e(r1, r0)
            return
    }
}
