package com.vivo.push.sdk.service;

public class LinkProxyActivity extends android.app.Activity {
    public LinkProxyActivity() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r7) {
            r6 = this;
            super.onCreate(r7)
            android.content.Intent r7 = r6.getIntent()
            java.lang.String r0 = "LinkProxyActivity"
            if (r7 != 0) goto L14
            java.lang.String r7 = "enter RequestPermissionsActivity onCreate, intent is null, finish"
            com.vivo.push.util.p.d(r0, r7)
            r6.finish()
            return
        L14:
            r1 = 1
            r2 = 0
            android.view.Window r3 = r6.getWindow()     // Catch: java.lang.Throwable -> L30
            r4 = 8388659(0x800033, float:1.1755015E-38)
            r3.setGravity(r4)     // Catch: java.lang.Throwable -> L30
            android.view.WindowManager$LayoutParams r4 = r3.getAttributes()     // Catch: java.lang.Throwable -> L30
            r4.x = r2     // Catch: java.lang.Throwable -> L30
            r4.y = r2     // Catch: java.lang.Throwable -> L30
            r4.height = r1     // Catch: java.lang.Throwable -> L30
            r4.width = r1     // Catch: java.lang.Throwable -> L30
            r3.setAttributes(r4)     // Catch: java.lang.Throwable -> L30
            goto L36
        L30:
            r3 = move-exception
            java.lang.String r4 = "enter onCreate error "
            com.vivo.push.util.p.b(r0, r4, r3)
        L36:
            java.lang.String r3 = r6.getPackageName()
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            int r5 = r6.hashCode()
            r4.append(r5)
            java.lang.String r5 = " enter onCreate "
            r4.append(r5)
            r4.append(r3)
            java.lang.String r4 = r4.toString()
            com.vivo.push.util.p.d(r0, r4)
            java.lang.String r4 = "com.vivo.abe"
            boolean r3 = r4.equals(r3)
            java.lang.String r4 = "previous_intent"
            if (r3 == 0) goto L84
            if (r7 != 0) goto L68
            java.lang.String r7 = "adapterToService intent is null"
        L63:
            com.vivo.push.util.p.d(r0, r7)     // Catch: java.lang.Exception -> Ld3
            goto Ldb
        L68:
            android.os.Bundle r1 = r7.getExtras()     // Catch: java.lang.Exception -> Ld3
            if (r1 != 0) goto L71
            java.lang.String r7 = "adapterToService getExtras() is null"
            goto L63
        L71:
            android.os.Bundle r7 = r7.getExtras()     // Catch: java.lang.Exception -> Ld3
            java.lang.Object r7 = r7.get(r4)     // Catch: java.lang.Exception -> Ld3
            android.content.Intent r7 = (android.content.Intent) r7     // Catch: java.lang.Exception -> Ld3
            if (r7 != 0) goto L80
            java.lang.String r7 = "adapterToService proxyIntent is null"
            goto L63
        L80:
            com.vivo.push.util.z.a(r6, r7)     // Catch: java.lang.Exception -> Ld3
            goto Ldb
        L84:
            android.os.Bundle r3 = r7.getExtras()     // Catch: java.lang.Exception -> Ld3
            if (r3 == 0) goto Ldb
            android.os.Bundle r7 = r7.getExtras()     // Catch: java.lang.Exception -> Ld3
            java.lang.Object r7 = r7.get(r4)     // Catch: java.lang.Exception -> Ld3
            android.content.Intent r7 = (android.content.Intent) r7     // Catch: java.lang.Exception -> Ld3
            if (r7 == 0) goto Lbe
            android.content.pm.PackageManager r3 = r6.getPackageManager()     // Catch: java.lang.Exception -> Ld3
            if (r3 == 0) goto Lbe
            r4 = 576(0x240, float:8.07E-43)
            java.util.List r3 = r3.queryIntentServices(r7, r4)     // Catch: java.lang.Exception -> Ld3
            if (r3 == 0) goto Lbe
            boolean r4 = r3.isEmpty()     // Catch: java.lang.Exception -> Ld3
            if (r4 == 0) goto Lab
            goto Lbe
        Lab:
            java.lang.Object r3 = r3.get(r2)     // Catch: java.lang.Exception -> Ld3
            android.content.pm.ResolveInfo r3 = (android.content.pm.ResolveInfo) r3     // Catch: java.lang.Exception -> Ld3
            if (r3 == 0) goto Lbe
            android.content.pm.ServiceInfo r4 = r3.serviceInfo     // Catch: java.lang.Exception -> Ld3
            if (r4 == 0) goto Lbe
            android.content.pm.ServiceInfo r3 = r3.serviceInfo     // Catch: java.lang.Exception -> Ld3
            boolean r3 = r3.exported     // Catch: java.lang.Exception -> Ld3
            if (r3 == 0) goto Lbe
            goto Lbf
        Lbe:
            r1 = r2
        Lbf:
            if (r1 == 0) goto Lc5
            r6.startService(r7)     // Catch: java.lang.Exception -> Ld3
            goto Ldb
        Lc5:
            java.lang.String r7 = "service's exported is "
            java.lang.String r1 = java.lang.String.valueOf(r1)     // Catch: java.lang.Exception -> Ld3
            java.lang.String r7 = r7.concat(r1)     // Catch: java.lang.Exception -> Ld3
            com.vivo.push.util.p.b(r0, r7)     // Catch: java.lang.Exception -> Ld3
            goto Ldb
        Ld3:
            r7 = move-exception
            java.lang.String r1 = r7.toString()
            com.vivo.push.util.p.a(r0, r1, r7)
        Ldb:
            r6.finish()
            return
    }

    @Override
    protected void onDestroy() {
            r2 = this;
            super.onDestroy()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = r2.hashCode()
            r0.append(r1)
            java.lang.String r1 = " onDestory "
            r0.append(r1)
            java.lang.String r1 = r2.getPackageName()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "LinkProxyActivity"
            com.vivo.push.util.p.d(r1, r0)
            return
    }
}
