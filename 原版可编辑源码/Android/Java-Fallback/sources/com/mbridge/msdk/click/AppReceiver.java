package com.mbridge.msdk.click;

public class AppReceiver extends android.content.BroadcastReceiver {
    private static final java.lang.String a = null;

    static {
            java.lang.Class<com.mbridge.msdk.click.AppReceiver> r0 = com.mbridge.msdk.click.AppReceiver.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.click.AppReceiver.a = r0
            return
    }

    public AppReceiver() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void onReceive(android.content.Context r18, android.content.Intent r19) {
            r17 = this;
            r1 = r18
            java.lang.String r0 = r19.getAction()
            java.lang.String r2 = "android.intent.action.PACKAGE_ADDED"
            boolean r0 = android.text.TextUtils.equals(r0, r2)
            if (r0 == 0) goto L155
            android.net.Uri r0 = r19.getData()
            if (r0 == 0) goto L155
            android.net.Uri r0 = r19.getData()     // Catch: java.lang.Exception -> L14b
            java.lang.String r10 = r0.getSchemeSpecificPart()     // Catch: java.lang.Exception -> L14b
            com.mbridge.msdk.foundation.db.i r0 = com.mbridge.msdk.foundation.db.i.a(r18)     // Catch: java.lang.Exception -> L14b
            com.mbridge.msdk.foundation.db.g r0 = com.mbridge.msdk.foundation.db.g.b(r0)     // Catch: java.lang.Exception -> L14b
            com.mbridge.msdk.foundation.entity.CampaignEx r11 = r0.h(r10)     // Catch: java.lang.Exception -> L14b
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L14b
            android.content.Context r0 = r0.j()     // Catch: java.lang.Exception -> L14b
            com.mbridge.msdk.foundation.db.i r0 = com.mbridge.msdk.foundation.db.i.a(r0)     // Catch: java.lang.Exception -> L14b
            com.mbridge.msdk.foundation.db.e r0 = com.mbridge.msdk.foundation.db.e.a(r0)     // Catch: java.lang.Exception -> L14b
            int r2 = r0.j(r10)     // Catch: java.lang.Exception -> L14b
            java.lang.String r5 = r0.l(r10)     // Catch: java.lang.Exception -> L14b
            java.lang.String r6 = r0.d(r5)     // Catch: java.lang.Exception -> L14b
            java.lang.String r7 = r0.e(r5)     // Catch: java.lang.Exception -> L14b
            java.lang.String r8 = r0.g(r5)     // Catch: java.lang.Exception -> L14b
            java.lang.String r9 = r0.f(r5)     // Catch: java.lang.Exception -> L14b
            java.lang.String r12 = r0.k(r10)     // Catch: java.lang.Exception -> L14b
            r13 = 1
            r14 = 0
            java.lang.String r0 = "com.mbridge.msdk.mbdownload.manager.ADownloadManager"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.reflect.InvocationTargetException -> L7f java.lang.IllegalAccessException -> L84 java.lang.NoSuchMethodException -> L89 java.lang.ClassNotFoundException -> L8e java.lang.Exception -> L14b
            java.lang.String r3 = "getInstance"
            java.lang.Class[] r4 = new java.lang.Class[r14]     // Catch: java.lang.reflect.InvocationTargetException -> L7f java.lang.IllegalAccessException -> L84 java.lang.NoSuchMethodException -> L89 java.lang.ClassNotFoundException -> L8e java.lang.Exception -> L14b
            java.lang.reflect.Method r3 = r0.getMethod(r3, r4)     // Catch: java.lang.reflect.InvocationTargetException -> L7f java.lang.IllegalAccessException -> L84 java.lang.NoSuchMethodException -> L89 java.lang.ClassNotFoundException -> L8e java.lang.Exception -> L14b
            r4 = 0
            java.lang.Object[] r15 = new java.lang.Object[r14]     // Catch: java.lang.reflect.InvocationTargetException -> L7f java.lang.IllegalAccessException -> L84 java.lang.NoSuchMethodException -> L89 java.lang.ClassNotFoundException -> L8e java.lang.Exception -> L14b
            java.lang.Object r3 = r3.invoke(r4, r15)     // Catch: java.lang.reflect.InvocationTargetException -> L7f java.lang.IllegalAccessException -> L84 java.lang.NoSuchMethodException -> L89 java.lang.ClassNotFoundException -> L8e java.lang.Exception -> L14b
            java.lang.String r4 = "installed"
            java.lang.Class[] r15 = new java.lang.Class[r13]     // Catch: java.lang.reflect.InvocationTargetException -> L7f java.lang.IllegalAccessException -> L84 java.lang.NoSuchMethodException -> L89 java.lang.ClassNotFoundException -> L8e java.lang.Exception -> L14b
            java.lang.Class<java.lang.String> r16 = java.lang.String.class
            r15[r14] = r16     // Catch: java.lang.reflect.InvocationTargetException -> L7f java.lang.IllegalAccessException -> L84 java.lang.NoSuchMethodException -> L89 java.lang.ClassNotFoundException -> L8e java.lang.Exception -> L14b
            java.lang.reflect.Method r0 = r0.getMethod(r4, r15)     // Catch: java.lang.reflect.InvocationTargetException -> L7f java.lang.IllegalAccessException -> L84 java.lang.NoSuchMethodException -> L89 java.lang.ClassNotFoundException -> L8e java.lang.Exception -> L14b
            java.lang.Object[] r4 = new java.lang.Object[r13]     // Catch: java.lang.reflect.InvocationTargetException -> L7f java.lang.IllegalAccessException -> L84 java.lang.NoSuchMethodException -> L89 java.lang.ClassNotFoundException -> L8e java.lang.Exception -> L14b
            r4[r14] = r5     // Catch: java.lang.reflect.InvocationTargetException -> L7f java.lang.IllegalAccessException -> L84 java.lang.NoSuchMethodException -> L89 java.lang.ClassNotFoundException -> L8e java.lang.Exception -> L14b
            r0.invoke(r3, r4)     // Catch: java.lang.reflect.InvocationTargetException -> L7f java.lang.IllegalAccessException -> L84 java.lang.NoSuchMethodException -> L89 java.lang.ClassNotFoundException -> L8e java.lang.Exception -> L14b
            goto L92
        L7f:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Exception -> L14b
            goto L92
        L84:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Exception -> L14b
            goto L92
        L89:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Exception -> L14b
            goto L92
        L8e:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Exception -> L14b
        L92:
            if (r2 == 0) goto Lb8
            if (r2 == r13) goto L97
            goto Lc3
        L97:
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L14b
            android.content.Context r0 = r0.c()     // Catch: java.lang.Exception -> L14b
            boolean r2 = r0 instanceof android.app.Activity     // Catch: java.lang.Exception -> L14b
            if (r2 == 0) goto Lc3
            com.mbridge.msdk.widget.dialog.MBAlertDialog r15 = new com.mbridge.msdk.widget.dialog.MBAlertDialog     // Catch: java.lang.Exception -> L14b
            com.mbridge.msdk.click.a$1 r4 = new com.mbridge.msdk.click.a$1     // Catch: java.lang.Exception -> L14b
            r2 = r4
            r3 = r10
            r13 = r4
            r4 = r0
            r2.<init>(r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Exception -> L14b
            r15.<init>(r0, r13)     // Catch: java.lang.Exception -> L14b
            r15.makeInstallAlert(r12)     // Catch: java.lang.Exception -> L14b
            r15.show()     // Catch: java.lang.Exception -> L14b
            goto Lc3
        Lb8:
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L14b
            android.content.Context r0 = r0.j()     // Catch: java.lang.Exception -> L14b
            com.mbridge.msdk.click.c.f(r0, r10)     // Catch: java.lang.Exception -> L14b
        Lc3:
            if (r11 == 0) goto Lca
            java.lang.String r0 = "install"
            com.mbridge.msdk.click.b.b(r11, r1, r0)     // Catch: java.lang.Exception -> L14b
        Lca:
            r0 = 7
            java.lang.String[] r0 = new java.lang.String[r0]     // Catch: java.lang.Exception -> L14b
            r0[r14] = r10     // Catch: java.lang.Exception -> L14b
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L14b
            r2.<init>()     // Catch: java.lang.Exception -> L14b
            r2.append(r10)     // Catch: java.lang.Exception -> L14b
            java.lang.String r3 = "downloadType"
            r2.append(r3)     // Catch: java.lang.Exception -> L14b
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L14b
            r3 = 1
            r0[r3] = r2     // Catch: java.lang.Exception -> L14b
            r2 = 2
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L14b
            r3.<init>()     // Catch: java.lang.Exception -> L14b
            r3.append(r10)     // Catch: java.lang.Exception -> L14b
            java.lang.String r4 = "linkType"
            r3.append(r4)     // Catch: java.lang.Exception -> L14b
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L14b
            r0[r2] = r3     // Catch: java.lang.Exception -> L14b
            r2 = 3
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L14b
            r3.<init>()     // Catch: java.lang.Exception -> L14b
            r3.append(r10)     // Catch: java.lang.Exception -> L14b
            java.lang.String r4 = "rid"
            r3.append(r4)     // Catch: java.lang.Exception -> L14b
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L14b
            r0[r2] = r3     // Catch: java.lang.Exception -> L14b
            r2 = 4
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L14b
            r3.<init>()     // Catch: java.lang.Exception -> L14b
            r3.append(r10)     // Catch: java.lang.Exception -> L14b
            java.lang.String r4 = "cid"
            r3.append(r4)     // Catch: java.lang.Exception -> L14b
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L14b
            r0[r2] = r3     // Catch: java.lang.Exception -> L14b
            r2 = 5
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L14b
            r3.<init>()     // Catch: java.lang.Exception -> L14b
            r3.append(r10)     // Catch: java.lang.Exception -> L14b
            java.lang.String r4 = "isDowning"
            r3.append(r4)     // Catch: java.lang.Exception -> L14b
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L14b
            r0[r2] = r3     // Catch: java.lang.Exception -> L14b
            r2 = 6
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L14b
            r3.<init>()     // Catch: java.lang.Exception -> L14b
            r3.append(r10)     // Catch: java.lang.Exception -> L14b
            java.lang.String r4 = "process"
            r3.append(r4)     // Catch: java.lang.Exception -> L14b
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L14b
            r0[r2] = r3     // Catch: java.lang.Exception -> L14b
            com.mbridge.msdk.foundation.tools.ag.a(r1, r0)     // Catch: java.lang.Exception -> L14b
            goto L155
        L14b:
            r0 = move-exception
            java.lang.String r1 = com.mbridge.msdk.click.AppReceiver.a
            java.lang.String r0 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r1, r0)
        L155:
            return
    }
}
