package com.vivo.push.a;

public final class a {
    private static void a(android.content.Context r3, android.content.Intent r4) {
            java.lang.String r0 = "CommandBridge"
            if (r3 == 0) goto L16
            r3.startService(r4)     // Catch: java.lang.Exception -> L8
            return
        L8:
            r1 = move-exception
            java.lang.String r2 = "start service error"
            com.vivo.push.util.p.a(r0, r2, r1)
            r0 = 0
            r4.setComponent(r0)
            r3.sendBroadcast(r4)
            return
        L16:
            java.lang.String r3 = "enter startService context is null"
            com.vivo.push.util.p.d(r0, r3)
            java.lang.Exception r3 = new java.lang.Exception
            java.lang.String r4 = "context is null"
            r3.<init>(r4)
            throw r3
    }

    public static void a(android.content.Context r5, com.vivo.push.o r6, java.lang.String r7) {
            java.lang.String r0 = "com.vivo.pushservice"
            java.lang.String r1 = "消息接受者包名为空！"
            boolean r2 = com.vivo.push.util.t.d(r5, r7)     // Catch: java.lang.Exception -> L9e
            if (r2 == 0) goto Ld
            java.lang.String r3 = "com.vivo.pushservice.action.RECEIVE"
            goto Lf
        Ld:
            java.lang.String r3 = "com.vivo.pushclient.action.RECEIVE"
        Lf:
            boolean r4 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Exception -> L9e
            if (r4 != 0) goto L95
            if (r2 != 0) goto L1d
            boolean r1 = a(r5, r3, r7)     // Catch: java.lang.Exception -> L9e
            if (r1 == 0) goto L94
        L1d:
            java.lang.String r1 = r6.a()     // Catch: java.lang.Exception -> L9e
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L9e
            if (r1 == 0) goto L2e
            java.lang.String r1 = r5.getPackageName()     // Catch: java.lang.Exception -> L9e
            r6.a(r1)     // Catch: java.lang.Exception -> L9e
        L2e:
            android.content.Intent r1 = new android.content.Intent     // Catch: java.lang.Exception -> L9e
            r1.<init>()     // Catch: java.lang.Exception -> L9e
            r4 = 1048576(0x100000, float:1.469368E-39)
            r1.setFlags(r4)     // Catch: java.lang.Exception -> L9e
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L9e
            if (r4 != 0) goto L41
            r1.setAction(r3)     // Catch: java.lang.Exception -> L9e
        L41:
            r1.setPackage(r7)     // Catch: java.lang.Exception -> L9e
            if (r2 == 0) goto L49
            java.lang.String r2 = "com.vivo.push.sdk.service.CommandService"
            goto L4b
        L49:
            java.lang.String r2 = "com.vivo.push.sdk.service.CommandClientService"
        L4b:
            r1.setClassName(r7, r2)     // Catch: java.lang.Exception -> L9e
            java.lang.String r7 = "security_avoid_pull"
            com.vivo.push.util.a r2 = com.vivo.push.util.a.a(r5)     // Catch: java.lang.Exception -> L9e
            java.lang.String r2 = r2.a(r0)     // Catch: java.lang.Exception -> L9e
            r1.putExtra(r7, r2)     // Catch: java.lang.Exception -> L9e
            r6.b(r1)     // Catch: java.lang.Exception -> L9e
            java.lang.String r6 = "command_type"
            java.lang.String r7 = "reflect_receiver"
            r1.putExtra(r6, r7)     // Catch: java.lang.Exception -> L9e
            int r6 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L9e
            r7 = 18
            if (r6 < r7) goto L91
            java.lang.String r6 = "security_avoid_pull_rsa"
            com.vivo.push.c.d r7 = com.vivo.push.c.d.a(r5)     // Catch: java.lang.Exception -> L9e
            com.vivo.push.c.b r7 = r7.a()     // Catch: java.lang.Exception -> L9e
            java.lang.String r7 = r7.a(r0)     // Catch: java.lang.Exception -> L9e
            r1.putExtra(r6, r7)     // Catch: java.lang.Exception -> L9e
            java.lang.String r6 = "security_avoid_rsa_public_key"
            com.vivo.push.c.d r7 = com.vivo.push.c.d.a(r5)     // Catch: java.lang.Exception -> L9e
            com.vivo.push.c.b r7 = r7.a()     // Catch: java.lang.Exception -> L9e
            java.security.PublicKey r7 = r7.a()     // Catch: java.lang.Exception -> L9e
            java.lang.String r7 = com.vivo.push.util.u.a(r7)     // Catch: java.lang.Exception -> L9e
            r1.putExtra(r6, r7)     // Catch: java.lang.Exception -> L9e
        L91:
            a(r5, r1)     // Catch: java.lang.Exception -> L9e
        L94:
            return
        L95:
            com.vivo.push.util.p.c(r5, r1)     // Catch: java.lang.Exception -> L9e
            java.lang.Exception r5 = new java.lang.Exception     // Catch: java.lang.Exception -> L9e
            r5.<init>(r1)     // Catch: java.lang.Exception -> L9e
            throw r5     // Catch: java.lang.Exception -> L9e
        L9e:
            r5 = move-exception
            java.lang.String r6 = "CommandBridge"
            java.lang.String r7 = "CommandBridge sendCommandToClient exception"
            com.vivo.push.util.p.a(r6, r7, r5)
            return
    }

    public static void a(android.content.Context r6, java.lang.String r7, com.vivo.push.o r8) {
            boolean r0 = r8.c()
            if (r0 == 0) goto L9
            java.lang.String r1 = "com.vivo.vms.upstageservice"
            goto Lb
        L9:
            java.lang.String r1 = "com.vivo.vms.aidlservice"
        Lb:
            com.vivo.push.b r1 = com.vivo.push.b.a(r6, r1)
            boolean r2 = r1.a()
            java.lang.String r3 = r8.a()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 == 0) goto L24
            java.lang.String r3 = r6.getPackageName()
            r8.a(r3)
        L24:
            java.lang.String r3 = "CommandBridge"
            if (r2 == 0) goto L58
            java.lang.String r2 = r6.getPackageName()
            java.lang.String r4 = "com.vivo.pushservice"
            boolean r2 = r4.equals(r2)
            if (r2 != 0) goto L58
            com.vivo.push.a r2 = new com.vivo.push.a
            java.lang.String r4 = r8.a()
            android.os.Bundle r5 = new android.os.Bundle
            r5.<init>()
            r2.<init>(r4, r7, r5)
            r8.a(r2)
            android.os.Bundle r2 = r2.b()
            boolean r1 = r1.a(r2)
            if (r1 == 0) goto L50
            return
        L50:
            java.lang.String r1 = "send command error by aidl"
            com.vivo.push.util.p.b(r3, r1)
            com.vivo.push.util.p.c(r6, r1)
        L58:
            android.content.Intent r1 = new android.content.Intent
            java.lang.String r2 = "com.vivo.pushservice.action.METHOD"
            r1.<init>(r2)
            r1.setPackage(r7)
            if (r0 == 0) goto L67
            java.lang.String r0 = "com.vivo.push.sdk.service.UpstageService"
            goto L69
        L67:
            java.lang.String r0 = "com.vivo.push.sdk.service.PushService"
        L69:
            r1.setClassName(r7, r0)
            r8.a(r1)
            a(r6, r1)     // Catch: java.lang.Exception -> L73
            return
        L73:
            r6 = move-exception
            java.lang.String r7 = "CommandBridge startService exception: "
            com.vivo.push.util.p.a(r3, r7, r6)
            return
    }

    private static boolean a(android.content.Context r4, java.lang.String r5, java.lang.String r6) {
            java.lang.String r0 = "CommandBridge"
            android.content.Intent r1 = new android.content.Intent
            r1.<init>(r5)
            r1.setPackage(r6)
            r2 = 0
            android.content.pm.PackageManager r4 = r4.getPackageManager()     // Catch: java.lang.Exception -> L3a
            r3 = 576(0x240, float:8.07E-43)
            java.util.List r4 = r4.queryBroadcastReceivers(r1, r3)     // Catch: java.lang.Exception -> L3a
            if (r4 == 0) goto L20
            int r4 = r4.size()     // Catch: java.lang.Exception -> L3a
            if (r4 > 0) goto L1e
            goto L20
        L1e:
            r4 = 1
            return r4
        L20:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L3a
            java.lang.String r1 = "action check error：action>>"
            r4.<init>(r1)     // Catch: java.lang.Exception -> L3a
            r4.append(r5)     // Catch: java.lang.Exception -> L3a
            java.lang.String r5 = ";pkgname>>"
            r4.append(r5)     // Catch: java.lang.Exception -> L3a
            r4.append(r6)     // Catch: java.lang.Exception -> L3a
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L3a
            com.vivo.push.util.p.b(r0, r4)     // Catch: java.lang.Exception -> L3a
            return r2
        L3a:
            java.lang.String r4 = "queryBroadcastReceivers error"
            com.vivo.push.util.p.b(r0, r4)
            return r2
    }
}
