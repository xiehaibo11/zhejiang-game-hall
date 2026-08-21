package com.igexin.push.core;

public class b extends android.os.Handler {
    private static java.lang.String a;

    static {
            java.lang.Class<com.igexin.push.core.b> r0 = com.igexin.push.core.b.class
            java.lang.String r0 = r0.getName()
            com.igexin.push.core.b.a = r0
            return
    }

    public b(android.os.Looper r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    private void a() {
            r4 = this;
            boolean r0 = com.igexin.push.core.d.n
            if (r0 != 0) goto L40
            long r0 = com.igexin.push.core.d.F
            r2 = 10000(0x2710, double:4.9407E-320)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L40
            double r0 = java.lang.Math.random()
            r2 = 4636737291354636288(0x4059000000000000, double:100.0)
            double r0 = r0 * r2
            r2 = 4639481672377565184(0x4062c00000000000, double:150.0)
            double r0 = r0 + r2
            int r0 = (int) r0
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = com.igexin.push.core.b.a
            r1.append(r2)
            java.lang.String r2 = "|userPresent, reConnectDelayTime = "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            r2 = 0
            java.lang.Object[] r2 = new java.lang.Object[r2]
            com.igexin.b.a.c.b.a(r1, r2)
            long r0 = (long) r0
            com.igexin.push.core.d.F = r0
            com.igexin.push.f.b.f r0 = com.igexin.push.f.b.f.i()
            r0.j()
        L40:
            return
    }

    private void a(android.content.Intent r5) {
            r4 = this;
            java.lang.String r0 = "action"
            java.lang.String r0 = r5.getStringExtra(r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = com.igexin.push.core.b.a
            r1.append(r2)
            java.lang.String r2 = "|processIntentMsgService action："
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            r2 = 0
            java.lang.Object[] r3 = new java.lang.Object[r2]
            com.igexin.b.a.c.b.a(r1, r3)
            java.lang.String r1 = com.igexin.sdk.PushConsts.ACTION_SERVICE_INITIALIZE
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L33
            com.igexin.push.core.a.e r0 = com.igexin.push.core.a.e.a()
            r0.a(r5)
            goto L1e9
        L33:
            java.lang.String r1 = com.igexin.sdk.PushConsts.ACTION_SERVICE_ONRESUME
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L5c
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = com.igexin.push.core.b.a
            r5.append(r0)
            java.lang.String r0 = "|handle onresume ~~~"
            r5.append(r0)
            java.lang.String r5 = r5.toString()
            java.lang.Object[] r0 = new java.lang.Object[r2]
            com.igexin.b.a.c.b.a(r5, r0)
            com.igexin.push.core.a.e r5 = com.igexin.push.core.a.e.a()
            r5.c()
            goto L1e9
        L5c:
            java.lang.String r1 = "com.igexin.action.initialize.slave"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L76
            com.igexin.push.core.a.e r0 = com.igexin.push.core.a.e.a()
            r0.b(r5)
            com.igexin.assist.sdk.AssistPushManager r5 = com.igexin.assist.sdk.AssistPushManager.getInstance()
            android.content.Context r0 = com.igexin.push.core.d.g
            r5.turnOnPush(r0)
            goto L1e9
        L76:
            java.lang.String r1 = "com.igexin.sdk.action.pushmanager"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto Le2
            java.lang.String r0 = "sc"
            java.lang.String r0 = r5.getStringExtra(r0)
            java.lang.String r1 = com.igexin.push.core.d.f
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto Ld3
            java.lang.String r1 = com.igexin.push.core.d.f
            boolean r1 = r1.equals(r0)
            if (r1 != 0) goto Ld3
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r1 = "safeCode not match!!"
            r5.append(r1)
            java.lang.String r3 = com.igexin.push.core.d.f
            r5.append(r3)
            java.lang.String r3 = ","
            r5.append(r3)
            r5.append(r0)
            java.lang.String r5 = r5.toString()
            java.lang.Object[] r2 = new java.lang.Object[r2]
            com.igexin.b.a.c.b.a(r5, r2)
            com.igexin.b.a.c.a.f r5 = com.igexin.b.a.c.a.f.a()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            java.lang.String r1 = com.igexin.push.core.d.f
            r2.append(r1)
            r2.append(r3)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r5.a(r0)
            return
        Ld3:
            java.lang.String r0 = "bundle"
            android.os.Bundle r5 = r5.getBundleExtra(r0)
            com.igexin.push.core.a.e r0 = com.igexin.push.core.a.e.a()
            r0.a(r5)
            goto L1e9
        Le2:
            java.lang.String r1 = "android.intent.action.USER_PRESENT"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto Lef
            r4.a()
            goto L1e9
        Lef:
            java.lang.String r1 = "com.igexin.action.notification.click"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L171
            java.lang.String r0 = "broadcast_intent"
            android.os.Parcelable r5 = r5.getParcelableExtra(r0)
            android.content.Intent r5 = (android.content.Intent) r5
            if (r5 != 0) goto L102
            return
        L102:
            java.lang.String r0 = r5.getAction()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = com.igexin.push.core.b.a
            r1.append(r3)
            java.lang.String r3 = "|intent action = "
            r1.append(r3)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.Object[] r3 = new java.lang.Object[r2]
            com.igexin.b.a.c.b.a(r1, r3)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L13d
            java.lang.String r1 = "pre_doaction."
            boolean r1 = r0.startsWith(r1)
            if (r1 == 0) goto L13d
            java.lang.String r0 = com.igexin.push.core.CoreConsts.b
        L131:
            r5.setAction(r0)
            com.igexin.push.core.a.e r0 = com.igexin.push.core.a.e.a()
            r0.c(r5)
            goto L1e9
        L13d:
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L16b
            java.lang.String r1 = "pre_burypoint."
            boolean r0 = r0.startsWith(r1)
            if (r0 == 0) goto L16b
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.igexin.push.core.b.a
            r0.append(r1)
            java.lang.String r1 = "|sendBroadCast，current action = "
            r0.append(r1)
            java.lang.String r1 = com.igexin.push.core.CoreConsts.a
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.Object[] r1 = new java.lang.Object[r2]
            com.igexin.b.a.c.b.a(r0, r1)
            java.lang.String r0 = com.igexin.push.core.CoreConsts.a
            goto L131
        L16b:
            android.content.Context r0 = com.igexin.push.core.d.g
            r0.sendBroadcast(r5)
            goto L1e9
        L171:
            java.lang.String r1 = "com.igexin.action.notification.delete"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L1e9
            com.igexin.push.core.bean.PushTaskBean r0 = new com.igexin.push.core.bean.PushTaskBean
            r0.<init>()
            java.lang.String r1 = "appid"
            java.lang.String r1 = r5.getStringExtra(r1)
            r0.setAppid(r1)
            java.lang.String r1 = "messageid"
            java.lang.String r1 = r5.getStringExtra(r1)
            r0.setMessageId(r1)
            java.lang.String r1 = "taskid"
            java.lang.String r1 = r5.getStringExtra(r1)
            r0.setTaskId(r1)
            java.lang.String r1 = "id"
            java.lang.String r1 = r5.getStringExtra(r1)
            r0.setId(r1)
            java.lang.String r1 = "appkey"
            java.lang.String r1 = r5.getStringExtra(r1)
            r0.setAppKey(r1)
            java.lang.String r1 = "feedbackid"
            java.lang.String r1 = r5.getStringExtra(r1)
            int r1 = java.lang.Integer.parseInt(r1)
            int r1 = r1 + 30040
            r0.setCurrentActionid(r1)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "notifyStyle:"
            r2.append(r3)
            java.lang.String r3 = "notifyStyle"
            java.lang.String r5 = r5.getStringExtra(r3)
            r2.append(r5)
            java.lang.String r5 = r2.toString()
            com.igexin.push.core.a.e r2 = com.igexin.push.core.a.e.a()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r1)
            java.lang.String r1 = ""
            r3.append(r1)
            java.lang.String r1 = r3.toString()
            r2.a(r0, r1, r5)
        L1e9:
            return
    }

    @Override
    public void handleMessage(android.os.Message r6) {
            r5 = this;
            r0 = 0
            int r1 = r6.what     // Catch: java.lang.Throwable -> L104
            int r2 = com.igexin.push.core.CoreConsts.h     // Catch: java.lang.Throwable -> L104
            if (r1 != r2) goto Lf
            com.igexin.push.core.w r6 = com.igexin.push.core.w.a()     // Catch: java.lang.Throwable -> L104
            r6.d()     // Catch: java.lang.Throwable -> L104
            return
        Lf:
            java.lang.Object r1 = r6.obj     // Catch: java.lang.Throwable -> L104
            if (r1 != 0) goto L14
            return
        L14:
            int r1 = r6.what     // Catch: java.lang.Throwable -> L104
            int r2 = com.igexin.push.core.CoreConsts.c     // Catch: java.lang.Throwable -> L104
            if (r1 != r2) goto L2b
            java.lang.Object r6 = r6.obj     // Catch: java.lang.Throwable -> L104
            android.content.Intent r6 = (android.content.Intent) r6     // Catch: java.lang.Throwable -> L104
            java.lang.String r1 = "action"
            boolean r1 = r6.hasExtra(r1)     // Catch: java.lang.Throwable -> L104
            if (r1 == 0) goto L124
            r5.a(r6)     // Catch: java.lang.Throwable -> L104
            goto L124
        L2b:
            int r1 = r6.what     // Catch: java.lang.Throwable -> L104
            int r2 = com.igexin.push.core.CoreConsts.d     // Catch: java.lang.Throwable -> L104
            if (r1 != r2) goto L3e
            com.igexin.push.core.a.e r1 = com.igexin.push.core.a.e.a()     // Catch: java.lang.Throwable -> L104
            java.lang.Object r6 = r6.obj     // Catch: java.lang.Throwable -> L104
            android.content.Intent r6 = (android.content.Intent) r6     // Catch: java.lang.Throwable -> L104
        L39:
            r1.c(r6)     // Catch: java.lang.Throwable -> L104
            goto L124
        L3e:
            int r1 = r6.what     // Catch: java.lang.Throwable -> L104
            int r2 = com.igexin.push.core.CoreConsts.e     // Catch: java.lang.Throwable -> L104
            if (r1 != r2) goto L4d
            com.igexin.push.core.a.e r1 = com.igexin.push.core.a.e.a()     // Catch: java.lang.Throwable -> L104
            java.lang.Object r6 = r6.obj     // Catch: java.lang.Throwable -> L104
            android.content.Intent r6 = (android.content.Intent) r6     // Catch: java.lang.Throwable -> L104
            goto L39
        L4d:
            int r1 = r6.what     // Catch: java.lang.Throwable -> L104
            int r2 = com.igexin.push.core.CoreConsts.f     // Catch: java.lang.Throwable -> L104
            java.lang.String r3 = "messageid"
            java.lang.String r4 = "taskid"
            if (r1 != r2) goto L6c
            java.lang.Object r6 = r6.obj     // Catch: java.lang.Throwable -> L104
            android.os.Bundle r6 = (android.os.Bundle) r6     // Catch: java.lang.Throwable -> L104
            java.lang.String r1 = r6.getString(r4)     // Catch: java.lang.Throwable -> L104
            java.lang.String r6 = r6.getString(r3)     // Catch: java.lang.Throwable -> L104
            com.igexin.push.core.w r2 = com.igexin.push.core.w.a()     // Catch: java.lang.Throwable -> L104
            r2.b(r1, r6)     // Catch: java.lang.Throwable -> L104
            goto L124
        L6c:
            int r1 = r6.what     // Catch: java.lang.Throwable -> L104
            int r2 = com.igexin.push.core.CoreConsts.g     // Catch: java.lang.Throwable -> L104
            if (r1 != r2) goto Lb0
            java.lang.Object r6 = r6.obj     // Catch: java.lang.Throwable -> L104
            android.os.Bundle r6 = (android.os.Bundle) r6     // Catch: java.lang.Throwable -> L104
            java.lang.String r1 = r6.getString(r4)     // Catch: java.lang.Throwable -> L104
            java.lang.String r2 = r6.getString(r3)     // Catch: java.lang.Throwable -> L104
            java.lang.String r3 = "actionid"
            java.lang.String r6 = r6.getString(r3)     // Catch: java.lang.Throwable -> L104
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L104
            r3.<init>()     // Catch: java.lang.Throwable -> L104
            java.lang.String r4 = com.igexin.push.core.b.a     // Catch: java.lang.Throwable -> L104
            r3.append(r4)     // Catch: java.lang.Throwable -> L104
            java.lang.String r4 = "|hand execute_action taskid = "
            r3.append(r4)     // Catch: java.lang.Throwable -> L104
            r3.append(r1)     // Catch: java.lang.Throwable -> L104
            java.lang.String r4 = ", actionid = "
            r3.append(r4)     // Catch: java.lang.Throwable -> L104
            r3.append(r6)     // Catch: java.lang.Throwable -> L104
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L104
            java.lang.Object[] r4 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L104
            com.igexin.b.a.c.b.a(r3, r4)     // Catch: java.lang.Throwable -> L104
            com.igexin.push.core.w r3 = com.igexin.push.core.w.a()     // Catch: java.lang.Throwable -> L104
            r3.b(r1, r2, r6)     // Catch: java.lang.Throwable -> L104
            goto L124
        Lb0:
            int r1 = r6.what     // Catch: java.lang.Throwable -> L104
            int r2 = com.igexin.push.core.CoreConsts.i     // Catch: java.lang.Throwable -> L104
            if (r1 != r2) goto Lcd
            com.igexin.push.core.b.i r1 = com.igexin.push.core.b.i.a()     // Catch: java.lang.Throwable -> L104
            java.lang.Object r6 = r6.obj     // Catch: java.lang.Throwable -> L104
            java.lang.String r6 = (java.lang.String) r6     // Catch: java.lang.Throwable -> L104
            r1.c(r6)     // Catch: java.lang.Throwable -> L104
            boolean r6 = com.igexin.push.core.d.n     // Catch: java.lang.Throwable -> L104
            if (r6 == 0) goto L124
            com.igexin.push.core.a.e r6 = com.igexin.push.core.a.e.a()     // Catch: java.lang.Throwable -> L104
            r6.f()     // Catch: java.lang.Throwable -> L104
            goto L124
        Lcd:
            int r1 = r6.what     // Catch: java.lang.Throwable -> L104
            int r2 = com.igexin.push.core.CoreConsts.j     // Catch: java.lang.Throwable -> L104
            if (r1 != r2) goto L124
            boolean r1 = com.igexin.push.config.j.u     // Catch: java.lang.Throwable -> L104
            if (r1 == 0) goto L103
            java.lang.String r1 = "false"
            java.lang.String r2 = com.igexin.push.core.d.B     // Catch: java.lang.Throwable -> L104
            boolean r1 = r1.equals(r2)     // Catch: java.lang.Throwable -> L104
            if (r1 == 0) goto Le2
            goto L103
        Le2:
            com.igexin.push.d.c.m r1 = new com.igexin.push.d.c.m     // Catch: java.lang.Throwable -> L104
            r1.<init>()     // Catch: java.lang.Throwable -> L104
            r1.d()     // Catch: java.lang.Throwable -> L104
            java.lang.Object r2 = r6.obj     // Catch: java.lang.Throwable -> L104
            r1.e = r2     // Catch: java.lang.Throwable -> L104
            android.os.Bundle r6 = r6.getData()     // Catch: java.lang.Throwable -> L104
            java.lang.String r2 = "payload"
            byte[] r6 = r6.getByteArray(r2)     // Catch: java.lang.Throwable -> L104
            r1.f = r6     // Catch: java.lang.Throwable -> L104
            com.igexin.push.core.a.i r6 = new com.igexin.push.core.a.i     // Catch: java.lang.Throwable -> L104
            r6.<init>()     // Catch: java.lang.Throwable -> L104
            r6.a(r1)     // Catch: java.lang.Throwable -> L104
            goto L124
        L103:
            return
        L104:
            r6 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = com.igexin.push.core.b.a
            r1.append(r2)
            java.lang.String r2 = "|"
            r1.append(r2)
            java.lang.String r6 = r6.toString()
            r1.append(r6)
            java.lang.String r6 = r1.toString()
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r6, r0)
        L124:
            return
    }
}
