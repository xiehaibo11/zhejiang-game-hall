package com.vivo.push.d;

final class u extends com.vivo.push.d.z {
    u(com.vivo.push.o r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    static android.content.Context a(com.vivo.push.d.u r0) {
            android.content.Context r0 = r0.a
            return r0
    }

    static android.content.Intent a(android.content.Intent r0, java.util.Map r1) {
            android.content.Intent r0 = b(r0, r1)
            return r0
    }

    private void a(com.vivo.push.model.UPSNotificationMessage r2) {
            r1 = this;
            com.vivo.push.d.w r0 = new com.vivo.push.d.w
            r0.<init>(r1, r2)
            com.vivo.push.m.c(r0)
            return
    }

    private static android.content.Intent b(android.content.Intent r2, java.util.Map<java.lang.String, java.lang.String> r3) {
            if (r3 == 0) goto L35
            java.util.Set r0 = r3.entrySet()
            if (r0 != 0) goto L9
            goto L35
        L9:
            java.util.Set r3 = r3.entrySet()
            java.util.Iterator r3 = r3.iterator()
        L11:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L35
            java.lang.Object r0 = r3.next()
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0
            if (r0 == 0) goto L11
            java.lang.Object r1 = r0.getKey()
            if (r1 == 0) goto L11
            java.lang.Object r1 = r0.getKey()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.Object r0 = r0.getValue()
            java.lang.String r0 = (java.lang.String) r0
            r2.putExtra(r1, r0)
            goto L11
        L35:
            return r2
    }

    @Override
    protected final void a(com.vivo.push.o r8) {
            r7 = this;
            com.vivo.push.b.p r8 = (com.vivo.push.b.p) r8
            com.vivo.push.model.InsideNotificationItem r0 = r8.f()
            java.lang.String r1 = "OnNotificationClickTask"
            if (r0 != 0) goto L10
            java.lang.String r8 = "current notification item is null"
            com.vivo.push.util.p.d(r1, r8)
            return
        L10:
            com.vivo.push.model.UPSNotificationMessage r0 = com.vivo.push.util.q.a(r0)
            java.lang.String r2 = r8.d()
            android.content.Context r3 = r7.a
            java.lang.String r3 = r3.getPackageName()
            boolean r2 = r3.equals(r2)
            if (r2 == 0) goto L29
            android.content.Context r3 = r7.a
            com.vivo.push.util.NotifyAdapterUtil.cancelNotify(r3)
        L29:
            if (r2 == 0) goto L1fa
            com.vivo.push.b.x r2 = new com.vivo.push.b.x
            r3 = 1030(0x406, double:5.09E-321)
            r2.<init>(r3)
            java.util.HashMap r3 = new java.util.HashMap
            r3.<init>()
            java.lang.String r4 = "type"
            java.lang.String r5 = "2"
            r3.put(r4, r5)
            long r4 = r8.e()
            java.lang.String r8 = java.lang.String.valueOf(r4)
            java.lang.String r4 = "messageID"
            r3.put(r4, r8)
            android.content.Context r8 = r7.a
            java.lang.String r8 = r8.getPackageName()
            java.lang.String r4 = "platform"
            r3.put(r4, r8)
            android.content.Context r8 = r7.a
            android.content.Context r4 = r7.a
            java.lang.String r4 = r4.getPackageName()
            java.lang.String r8 = com.vivo.push.util.z.b(r8, r4)
            boolean r4 = android.text.TextUtils.isEmpty(r8)
            if (r4 != 0) goto L6d
            java.lang.String r4 = "remoteAppId"
            r3.put(r4, r8)
        L6d:
            r2.a(r3)
            com.vivo.push.e r8 = com.vivo.push.e.a()
            r8.a(r2)
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            java.lang.String r2 = "notification is clicked by skip type["
            r8.<init>(r2)
            int r2 = r0.getSkipType()
            r8.append(r2)
            java.lang.String r2 = "]"
            r8.append(r2)
            java.lang.String r8 = r8.toString()
            com.vivo.push.util.p.d(r1, r8)
            int r8 = r0.getSkipType()
            r2 = 1
            if (r8 == r2) goto L1e3
            r3 = 2
            if (r8 == r3) goto L19a
            r3 = 3
            if (r8 == r3) goto L196
            r3 = 4
            if (r8 == r3) goto Lb7
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            java.lang.String r2 = "illegitmacy skip type error : "
            r8.<init>(r2)
            int r0 = r0.getSkipType()
            r8.append(r0)
            java.lang.String r8 = r8.toString()
            com.vivo.push.util.p.a(r1, r8)
            return
        Lb7:
            java.lang.String r8 = r0.getSkipContent()
            android.content.Intent r2 = android.content.Intent.parseUri(r8, r2)     // Catch: java.lang.Exception -> L184
            java.lang.String r3 = r2.getPackage()     // Catch: java.lang.Exception -> L184
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L184
            java.lang.String r5 = "; but remote pkgName is "
            if (r4 != 0) goto Lf9
            android.content.Context r4 = r7.a     // Catch: java.lang.Exception -> L184
            java.lang.String r4 = r4.getPackageName()     // Catch: java.lang.Exception -> L184
            boolean r3 = r4.equals(r3)     // Catch: java.lang.Exception -> L184
            if (r3 != 0) goto Lf9
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L184
            java.lang.String r4 = "open activity error : local pkgName is "
            r3.<init>(r4)     // Catch: java.lang.Exception -> L184
            android.content.Context r4 = r7.a     // Catch: java.lang.Exception -> L184
            java.lang.String r4 = r4.getPackageName()     // Catch: java.lang.Exception -> L184
            r3.append(r4)     // Catch: java.lang.Exception -> L184
            r3.append(r5)     // Catch: java.lang.Exception -> L184
            java.lang.String r2 = r2.getPackage()     // Catch: java.lang.Exception -> L184
            r3.append(r2)     // Catch: java.lang.Exception -> L184
            java.lang.String r2 = r3.toString()     // Catch: java.lang.Exception -> L184
            com.vivo.push.util.p.a(r1, r2)     // Catch: java.lang.Exception -> L184
            return
        Lf9:
            android.content.ComponentName r3 = r2.getComponent()     // Catch: java.lang.Exception -> L184
            r4 = 0
            if (r3 != 0) goto L102
            r3 = r4
            goto L10a
        L102:
            android.content.ComponentName r3 = r2.getComponent()     // Catch: java.lang.Exception -> L184
            java.lang.String r3 = r3.getPackageName()     // Catch: java.lang.Exception -> L184
        L10a:
            boolean r6 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L184
            if (r6 != 0) goto L13e
            android.content.Context r6 = r7.a     // Catch: java.lang.Exception -> L184
            java.lang.String r6 = r6.getPackageName()     // Catch: java.lang.Exception -> L184
            boolean r3 = r6.equals(r3)     // Catch: java.lang.Exception -> L184
            if (r3 != 0) goto L13e
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L184
            java.lang.String r4 = "open activity component error : local pkgName is "
            r3.<init>(r4)     // Catch: java.lang.Exception -> L184
            android.content.Context r4 = r7.a     // Catch: java.lang.Exception -> L184
            java.lang.String r4 = r4.getPackageName()     // Catch: java.lang.Exception -> L184
            r3.append(r4)     // Catch: java.lang.Exception -> L184
            r3.append(r5)     // Catch: java.lang.Exception -> L184
            java.lang.String r2 = r2.getPackage()     // Catch: java.lang.Exception -> L184
            r3.append(r2)     // Catch: java.lang.Exception -> L184
            java.lang.String r2 = r3.toString()     // Catch: java.lang.Exception -> L184
            com.vivo.push.util.p.a(r1, r2)     // Catch: java.lang.Exception -> L184
            return
        L13e:
            r2.setSelector(r4)     // Catch: java.lang.Exception -> L184
            android.content.Context r3 = r7.a     // Catch: java.lang.Exception -> L184
            java.lang.String r3 = r3.getPackageName()     // Catch: java.lang.Exception -> L184
            r2.setPackage(r3)     // Catch: java.lang.Exception -> L184
            r3 = 335544320(0x14000000, float:6.4623485E-27)
            r2.addFlags(r3)     // Catch: java.lang.Exception -> L184
            java.util.Map r3 = r0.getParams()     // Catch: java.lang.Exception -> L184
            b(r2, r3)     // Catch: java.lang.Exception -> L184
            android.content.Context r3 = r7.a     // Catch: java.lang.Exception -> L184
            android.content.pm.PackageManager r3 = r3.getPackageManager()     // Catch: java.lang.Exception -> L184
            r4 = 65536(0x10000, float:9.1835E-41)
            android.content.pm.ActivityInfo r3 = r2.resolveActivityInfo(r3, r4)     // Catch: java.lang.Exception -> L184
            if (r3 == 0) goto L17e
            boolean r4 = r3.exported     // Catch: java.lang.Exception -> L184
            if (r4 != 0) goto L17e
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L184
            java.lang.String r4 = "activity is not exported : "
            r2.<init>(r4)     // Catch: java.lang.Exception -> L184
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L184
            r2.append(r3)     // Catch: java.lang.Exception -> L184
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L184
            com.vivo.push.util.p.a(r1, r2)     // Catch: java.lang.Exception -> L184
            return
        L17e:
            android.content.Context r3 = r7.a     // Catch: java.lang.Exception -> L184
            r3.startActivity(r2)     // Catch: java.lang.Exception -> L184
            goto L192
        L184:
            r2 = move-exception
            java.lang.String r8 = java.lang.String.valueOf(r8)
            java.lang.String r3 = "open activity error : "
            java.lang.String r8 = r3.concat(r8)
            com.vivo.push.util.p.a(r1, r8, r2)
        L192:
            r7.a(r0)
            return
        L196:
            r7.a(r0)
            return
        L19a:
            java.lang.String r8 = r0.getSkipContent()
            java.lang.String r3 = "http://"
            boolean r3 = r8.startsWith(r3)
            if (r3 != 0) goto L1b0
            java.lang.String r3 = "https://"
            boolean r3 = r8.startsWith(r3)
            if (r3 == 0) goto L1af
            goto L1b0
        L1af:
            r2 = 0
        L1b0:
            if (r2 == 0) goto L1da
            android.net.Uri r8 = android.net.Uri.parse(r8)
            android.content.Intent r2 = new android.content.Intent
            java.lang.String r3 = "android.intent.action.VIEW"
            r2.<init>(r3, r8)
            r3 = 268435456(0x10000000, float:2.524355E-29)
            r2.setFlags(r3)
            java.util.Map r3 = r0.getParams()
            b(r2, r3)
            android.content.Context r3 = r7.a     // Catch: java.lang.Exception -> L1cf
            r3.startActivity(r2)     // Catch: java.lang.Exception -> L1cf
            goto L1df
        L1cf:
            java.lang.String r8 = java.lang.String.valueOf(r8)
            java.lang.String r2 = "startActivity error : "
            java.lang.String r8 = r2.concat(r8)
            goto L1dc
        L1da:
            java.lang.String r8 = "url not legal"
        L1dc:
            com.vivo.push.util.p.a(r1, r8)
        L1df:
            r7.a(r0)
            return
        L1e3:
            android.content.Context r8 = r7.a
            java.util.Map r1 = r0.getParams()
            java.lang.Thread r2 = new java.lang.Thread
            com.vivo.push.d.v r3 = new com.vivo.push.d.v
            r3.<init>(r7, r8, r1)
            r2.<init>(r3)
            r2.start()
            r7.a(r0)
            return
        L1fa:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            java.lang.String r3 = "notify is "
            r8.<init>(r3)
            r8.append(r0)
            java.lang.String r0 = " ; isMatch is "
            r8.append(r0)
            r8.append(r2)
            java.lang.String r8 = r8.toString()
            com.vivo.push.util.p.a(r1, r8)
            return
    }
}
