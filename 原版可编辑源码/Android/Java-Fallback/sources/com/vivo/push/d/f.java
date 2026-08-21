package com.vivo.push.d;

final class f extends com.vivo.push.l {
    f(com.vivo.push.o r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public static boolean a(android.content.Context r5) {
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "com.vivo.pushservice.action.PUSH_SERVICE"
            r0.<init>(r1)
            java.lang.String r1 = r5.getPackageName()
            r0.setPackage(r1)
            android.content.pm.PackageManager r1 = r5.getPackageManager()
            r2 = 576(0x240, float:8.07E-43)
            java.util.List r0 = r1.queryIntentServices(r0, r2)
            r1 = 0
            java.lang.String r2 = "OnChangePushStatusTask"
            if (r0 == 0) goto L4d
            int r3 = r0.size()
            if (r3 > 0) goto L24
            goto L4d
        L24:
            android.content.pm.PackageManager r3 = r5.getPackageManager()
            android.content.ComponentName r4 = new android.content.ComponentName
            java.lang.Object r0 = r0.get(r1)
            android.content.pm.ResolveInfo r0 = (android.content.pm.ResolveInfo) r0
            android.content.pm.ServiceInfo r0 = r0.serviceInfo
            java.lang.String r0 = r0.name
            r4.<init>(r5, r0)
            int r5 = r3.getComponentEnabledSetting(r4)
            r0 = 1
            if (r5 == r0) goto L47
            r3.setComponentEnabledSetting(r4, r0, r0)
            java.lang.String r5 = "enableService push service."
            com.vivo.push.util.p.d(r2, r5)
            return r0
        L47:
            java.lang.String r5 = "push service has enabled"
            com.vivo.push.util.p.d(r2, r5)
            return r1
        L4d:
            java.lang.String r5 = "enableService error: can not find push service."
            com.vivo.push.util.p.a(r2, r5)
            return r1
    }

    public static boolean b(android.content.Context r5) {
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "com.vivo.pushservice.action.PUSH_SERVICE"
            r0.<init>(r1)
            java.lang.String r1 = r5.getPackageName()
            r0.setPackage(r1)
            android.content.pm.PackageManager r1 = r5.getPackageManager()
            r2 = 576(0x240, float:8.07E-43)
            java.util.List r0 = r1.queryIntentServices(r0, r2)
            r1 = 0
            java.lang.String r2 = "OnChangePushStatusTask"
            if (r0 == 0) goto L4e
            int r3 = r0.size()
            if (r3 > 0) goto L24
            goto L4e
        L24:
            android.content.pm.PackageManager r3 = r5.getPackageManager()
            android.content.ComponentName r4 = new android.content.ComponentName
            java.lang.Object r0 = r0.get(r1)
            android.content.pm.ResolveInfo r0 = (android.content.pm.ResolveInfo) r0
            android.content.pm.ServiceInfo r0 = r0.serviceInfo
            java.lang.String r0 = r0.name
            r4.<init>(r5, r0)
            int r5 = r3.getComponentEnabledSetting(r4)
            r0 = 2
            if (r5 == r0) goto L48
            r5 = 1
            r3.setComponentEnabledSetting(r4, r0, r5)
            java.lang.String r0 = "disableService push service."
            com.vivo.push.util.p.d(r2, r0)
            return r5
        L48:
            java.lang.String r5 = "push service has disabled"
            com.vivo.push.util.p.d(r2, r5)
            return r1
        L4e:
            java.lang.String r5 = "disableService error: can not find push service."
            com.vivo.push.util.p.a(r2, r5)
            return r1
    }

    private static java.util.List<android.content.pm.ResolveInfo> c(android.content.Context r4) {
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "com.vivo.pushservice.action.RECEIVE"
            r0.<init>(r1)
            java.lang.String r1 = r4.getPackageName()
            r0.setPackage(r1)
            r1 = 576(0x240, float:8.07E-43)
            android.content.pm.PackageManager r2 = r4.getPackageManager()     // Catch: java.lang.Exception -> L19
            java.util.List r0 = r2.queryBroadcastReceivers(r0, r1)     // Catch: java.lang.Exception -> L19
            goto L1a
        L19:
            r0 = 0
        L1a:
            if (r0 == 0) goto L22
            int r2 = r0.size()
            if (r2 > 0) goto L38
        L22:
            android.content.Intent r2 = new android.content.Intent
            java.lang.String r3 = "com.vivo.pushclient.action.RECEIVE"
            r2.<init>(r3)
            java.lang.String r3 = r4.getPackageName()
            r2.setPackage(r3)
            android.content.pm.PackageManager r4 = r4.getPackageManager()     // Catch: java.lang.Exception -> L38
            java.util.List r0 = r4.queryBroadcastReceivers(r2, r1)     // Catch: java.lang.Exception -> L38
        L38:
            return r0
    }

    @Override
    protected final void a(com.vivo.push.o r10) {
            r9 = this;
            android.content.Context r0 = r9.a
            java.lang.String r0 = com.vivo.push.util.t.b(r0)
            android.content.Context r1 = r9.a
            java.lang.String r1 = r1.getPackageName()
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L13
            return
        L13:
            com.vivo.push.b.j r10 = (com.vivo.push.b.j) r10
            int r0 = r10.d()
            int r10 = r10.e()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "OnChangePushStatusTask serviceStatus is "
            r1.<init>(r2)
            r1.append(r0)
            java.lang.String r2 = " ; receiverStatus is "
            r1.append(r2)
            r1.append(r10)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "OnChangePushStatusTask"
            com.vivo.push.util.p.d(r2, r1)
            java.lang.String r1 = "push service has defaulted"
            r3 = 2
            r4 = 0
            r5 = 1
            if (r0 != r3) goto L45
            android.content.Context r0 = r9.a
            b(r0)
            goto L9d
        L45:
            if (r0 != r5) goto L4d
            android.content.Context r0 = r9.a
            a(r0)
            goto L9d
        L4d:
            if (r0 != 0) goto L9d
            android.content.Context r0 = r9.a
            android.content.Intent r6 = new android.content.Intent
            java.lang.String r7 = "com.vivo.pushservice.action.PUSH_SERVICE"
            r6.<init>(r7)
            java.lang.String r7 = r0.getPackageName()
            r6.setPackage(r7)
            android.content.pm.PackageManager r7 = r0.getPackageManager()
            r8 = 576(0x240, float:8.07E-43)
            java.util.List r6 = r7.queryIntentServices(r6, r8)
            if (r6 == 0) goto L98
            int r7 = r6.size()
            if (r7 > 0) goto L72
            goto L98
        L72:
            android.content.pm.PackageManager r7 = r0.getPackageManager()
            android.content.ComponentName r8 = new android.content.ComponentName
            java.lang.Object r6 = r6.get(r4)
            android.content.pm.ResolveInfo r6 = (android.content.pm.ResolveInfo) r6
            android.content.pm.ServiceInfo r6 = r6.serviceInfo
            java.lang.String r6 = r6.name
            r8.<init>(r0, r6)
            int r0 = r7.getComponentEnabledSetting(r8)
            if (r0 == 0) goto L94
            r7.setComponentEnabledSetting(r8, r4, r5)
            java.lang.String r0 = "defaultService push service."
            com.vivo.push.util.p.d(r2, r0)
            goto L9d
        L94:
            com.vivo.push.util.p.d(r2, r1)
            goto L9d
        L98:
            java.lang.String r0 = "defaultService error: can not find push service."
            com.vivo.push.util.p.a(r2, r0)
        L9d:
            if (r10 != r3) goto Le9
            android.content.Context r10 = r9.a
            java.util.List r0 = c(r10)
            if (r0 == 0) goto Ldc
            int r1 = r0.size()
            if (r1 > 0) goto Lae
            goto Ldc
        Lae:
            java.lang.Object r0 = r0.get(r4)
            android.content.pm.ResolveInfo r0 = (android.content.pm.ResolveInfo) r0
            android.content.pm.ActivityInfo r0 = r0.activityInfo
            java.lang.String r0 = r0.name
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto Lc4
            java.lang.String r10 = "disableReceiver error: className is null. "
        Lc0:
            com.vivo.push.util.p.d(r2, r10)
            goto Le1
        Lc4:
            android.content.pm.PackageManager r1 = r10.getPackageManager()
            android.content.ComponentName r4 = new android.content.ComponentName
            r4.<init>(r10, r0)
            int r10 = r1.getComponentEnabledSetting(r4)
            if (r10 == r3) goto Ld9
            r1.setComponentEnabledSetting(r4, r3, r5)
            java.lang.String r10 = "push service disableReceiver "
            goto Lc0
        Ld9:
            java.lang.String r10 = "push service has disableReceiver "
            goto Lc0
        Ldc:
            java.lang.String r10 = "disableReceiver error: can not find push service."
            com.vivo.push.util.p.a(r2, r10)
        Le1:
            com.vivo.push.sdk.a r10 = com.vivo.push.sdk.a.a()
            r10.b()
            return
        Le9:
            if (r10 != r5) goto L134
            android.content.Context r10 = r9.a
            java.util.List r0 = c(r10)
            if (r0 == 0) goto L12e
            int r1 = r0.size()
            if (r1 > 0) goto Lfa
            goto L12e
        Lfa:
            java.lang.Object r0 = r0.get(r4)
            android.content.pm.ResolveInfo r0 = (android.content.pm.ResolveInfo) r0
            android.content.pm.ActivityInfo r0 = r0.activityInfo
            java.lang.String r0 = r0.name
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L110
            java.lang.String r10 = "enableReceiver error: className is null. "
            com.vivo.push.util.p.d(r2, r10)
            return
        L110:
            android.content.pm.PackageManager r1 = r10.getPackageManager()
            android.content.ComponentName r3 = new android.content.ComponentName
            r3.<init>(r10, r0)
            int r10 = r1.getComponentEnabledSetting(r3)
            if (r10 == r5) goto L128
            r1.setComponentEnabledSetting(r3, r5, r5)
            java.lang.String r10 = "push service enableReceiver "
            com.vivo.push.util.p.d(r2, r10)
            return
        L128:
            java.lang.String r10 = "push service has enableReceiver "
            com.vivo.push.util.p.d(r2, r10)
            return
        L12e:
            java.lang.String r10 = "enableReceiver error: can not find push service."
            com.vivo.push.util.p.a(r2, r10)
            return
        L134:
            if (r10 != 0) goto L17c
            android.content.Context r10 = r9.a
            java.util.List r0 = c(r10)
            if (r0 == 0) goto L177
            int r3 = r0.size()
            if (r3 > 0) goto L145
            goto L177
        L145:
            java.lang.Object r0 = r0.get(r4)
            android.content.pm.ResolveInfo r0 = (android.content.pm.ResolveInfo) r0
            android.content.pm.ActivityInfo r0 = r0.activityInfo
            java.lang.String r0 = r0.name
            boolean r3 = android.text.TextUtils.isEmpty(r0)
            if (r3 == 0) goto L15b
            java.lang.String r10 = "defaultReceiver error: className is null. "
            com.vivo.push.util.p.d(r2, r10)
            return
        L15b:
            android.content.pm.PackageManager r3 = r10.getPackageManager()
            android.content.ComponentName r6 = new android.content.ComponentName
            r6.<init>(r10, r0)
            int r10 = r3.getComponentEnabledSetting(r6)
            if (r10 == 0) goto L173
            r3.setComponentEnabledSetting(r6, r4, r5)
            java.lang.String r10 = "push service defaultReceiver "
            com.vivo.push.util.p.d(r2, r10)
            return
        L173:
            com.vivo.push.util.p.d(r2, r1)
            goto L17c
        L177:
            java.lang.String r10 = "defaultReceiver error: can not find push service."
            com.vivo.push.util.p.a(r2, r10)
        L17c:
            return
    }
}
