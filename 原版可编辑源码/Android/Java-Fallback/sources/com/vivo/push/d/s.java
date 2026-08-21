package com.vivo.push.d;

final class s implements java.lang.Runnable {
    final com.vivo.push.model.InsideNotificationItem a;
    final com.vivo.push.b.q b;
    final com.vivo.push.d.r c;

    s(com.vivo.push.d.r r1, com.vivo.push.model.InsideNotificationItem r2, com.vivo.push.b.q r3) {
            r0 = this;
            r0.c = r1
            r0.a = r2
            r0.b = r3
            r0.<init>()
            return
    }

    @Override
    public final void run() {
            r12 = this;
            com.vivo.push.d.r r0 = r12.c
            com.vivo.push.sdk.PushMessageCallback r0 = r0.b
            com.vivo.push.d.r r1 = r12.c
            android.content.Context r1 = com.vivo.push.d.r.a(r1)
            com.vivo.push.model.InsideNotificationItem r2 = r12.a
            com.vivo.push.model.UPSNotificationMessage r2 = com.vivo.push.util.q.a(r2)
            boolean r0 = r0.onNotificationMessageArrived(r1, r2)
            java.lang.String r1 = "remoteAppId"
            java.lang.String r2 = "messageID"
            java.lang.String r3 = "pkg name : "
            java.lang.String r4 = "OnNotificationArrivedTask"
            if (r0 == 0) goto L7c
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>(r3)
            com.vivo.push.d.r r3 = r12.c
            android.content.Context r3 = com.vivo.push.d.r.b(r3)
            java.lang.String r3 = r3.getPackageName()
            r0.append(r3)
            java.lang.String r3 = " 应用主动拦截通知"
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            com.vivo.push.util.p.b(r4, r0)
            com.vivo.push.d.r r0 = r12.c
            android.content.Context r0 = com.vivo.push.d.r.c(r0)
            java.lang.String r3 = "应用主动拦截通知，导致通知无法展示，如需打开请在onNotificationMessageArrived中返回false"
            com.vivo.push.util.p.b(r0, r3)
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.vivo.push.b.q r3 = r12.b
            long r3 = r3.f()
            java.lang.String r3 = java.lang.String.valueOf(r3)
            r0.put(r2, r3)
            com.vivo.push.d.r r2 = r12.c
            android.content.Context r2 = com.vivo.push.d.r.d(r2)
            com.vivo.push.d.r r3 = r12.c
            android.content.Context r3 = com.vivo.push.d.r.e(r3)
            java.lang.String r3 = r3.getPackageName()
            java.lang.String r2 = com.vivo.push.util.z.b(r2, r3)
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 != 0) goto L76
            r0.put(r1, r2)
        L76:
            r1 = 2120(0x848, double:1.0474E-320)
            com.vivo.push.util.e.a(r1, r0)
            return
        L7c:
            com.vivo.push.d.r r0 = r12.c
            int r0 = r0.b()
            if (r0 <= 0) goto Lec
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>(r3)
            com.vivo.push.d.r r3 = r12.c
            android.content.Context r3 = com.vivo.push.d.r.f(r3)
            java.lang.String r3 = r3.getPackageName()
            r5.append(r3)
            java.lang.String r3 = " notify channel switch is "
            r5.append(r3)
            r5.append(r0)
            java.lang.String r3 = r5.toString()
            com.vivo.push.util.p.b(r4, r3)
            com.vivo.push.d.r r3 = r12.c
            android.content.Context r3 = com.vivo.push.d.r.g(r3)
            java.lang.String r4 = java.lang.String.valueOf(r0)
            java.lang.String r5 = "允许通知开关或者推送通知渠道开关关闭，导致通知无法展示，请到设置页打开应用通知开关 "
            java.lang.String r4 = r5.concat(r4)
            com.vivo.push.util.p.b(r3, r4)
            java.util.HashMap r3 = new java.util.HashMap
            r3.<init>()
            com.vivo.push.b.q r4 = r12.b
            long r4 = r4.f()
            java.lang.String r4 = java.lang.String.valueOf(r4)
            r3.put(r2, r4)
            com.vivo.push.d.r r2 = r12.c
            android.content.Context r2 = com.vivo.push.d.r.h(r2)
            com.vivo.push.d.r r4 = r12.c
            android.content.Context r4 = com.vivo.push.d.r.i(r4)
            java.lang.String r4 = r4.getPackageName()
            java.lang.String r2 = com.vivo.push.util.z.b(r2, r4)
            boolean r4 = android.text.TextUtils.isEmpty(r2)
            if (r4 != 0) goto Le7
            r3.put(r1, r2)
        Le7:
            long r0 = (long) r0
            com.vivo.push.util.e.a(r0, r3)
            return
        Lec:
            com.vivo.push.util.k r0 = new com.vivo.push.util.k
            com.vivo.push.d.r r1 = r12.c
            android.content.Context r6 = com.vivo.push.d.r.j(r1)
            com.vivo.push.model.InsideNotificationItem r7 = r12.a
            com.vivo.push.b.q r1 = r12.b
            long r8 = r1.f()
            com.vivo.push.d.r r1 = r12.c
            com.vivo.push.sdk.PushMessageCallback r1 = r1.b
            com.vivo.push.d.r r2 = r12.c
            android.content.Context r2 = com.vivo.push.d.r.k(r2)
            boolean r10 = r1.isAllowNet(r2)
            com.vivo.push.d.t r11 = new com.vivo.push.d.t
            r11.<init>(r12)
            r5 = r0
            r5.<init>(r6, r7, r8, r10, r11)
            com.vivo.push.model.InsideNotificationItem r1 = r12.a
            boolean r1 = r1.isShowBigPicOnMobileNet()
            com.vivo.push.model.InsideNotificationItem r2 = r12.a
            java.lang.String r2 = r2.getPurePicUrl()
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 == 0) goto L12b
            com.vivo.push.model.InsideNotificationItem r2 = r12.a
            java.lang.String r2 = r2.getCoverUrl()
        L12b:
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            r5 = 2
            r6 = 0
            r7 = 1
            if (r3 != 0) goto L18b
            java.lang.String r3 = java.lang.String.valueOf(r1)
            java.lang.String r8 = "showCode="
            java.lang.String r3 = r8.concat(r3)
            com.vivo.push.util.p.c(r4, r3)
            if (r1 != 0) goto L180
            com.vivo.push.d.r r1 = r12.c
            android.content.Context r1 = com.vivo.push.d.r.p(r1)
            java.lang.String r3 = "mobile net unshow"
            com.vivo.push.util.p.a(r1, r3)
            com.vivo.push.d.r r1 = r12.c
            android.content.Context r1 = com.vivo.push.d.r.q(r1)
            android.net.NetworkInfo r1 = com.vivo.push.util.r.a(r1)
            if (r1 != 0) goto L15c
        L15a:
            r1 = r6
            goto L172
        L15c:
            android.net.NetworkInfo$State r3 = r1.getState()
            android.net.NetworkInfo$State r4 = android.net.NetworkInfo.State.CONNECTED
            if (r3 == r4) goto L165
            goto L15a
        L165:
            int r1 = r1.getType()
            if (r1 != r7) goto L16d
            r1 = r5
            goto L172
        L16d:
            if (r1 != 0) goto L171
            r1 = r7
            goto L172
        L171:
            r1 = 3
        L172:
            if (r1 != r7) goto L18b
            r2 = 0
            com.vivo.push.model.InsideNotificationItem r1 = r12.a
            r1.clearCoverUrl()
            com.vivo.push.model.InsideNotificationItem r1 = r12.a
            r1.clearPurePicUrl()
            goto L18b
        L180:
            com.vivo.push.d.r r1 = r12.c
            android.content.Context r1 = com.vivo.push.d.r.r(r1)
            java.lang.String r3 = "mobile net show"
            com.vivo.push.util.p.a(r1, r3)
        L18b:
            java.lang.String[] r1 = new java.lang.String[r5]
            com.vivo.push.model.InsideNotificationItem r3 = r12.a
            java.lang.String r3 = r3.getIconUrl()
            r1[r6] = r3
            r1[r7] = r2
            r0.execute(r1)
            return
    }
}
