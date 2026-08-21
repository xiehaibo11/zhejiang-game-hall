package com.mbridge.msdk.foundation.tools;

public class h {
    public static java.lang.String a(int r5) {
            java.lang.String r0 = ""
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: java.lang.Exception -> L3b
            r1.<init>()     // Catch: java.lang.Exception -> L3b
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L3b
            java.util.List r2 = r2.i()     // Catch: java.lang.Exception -> L3b
            if (r2 == 0) goto L30
            int r3 = r2.size()     // Catch: java.lang.Exception -> L3b
            if (r3 <= 0) goto L30
            int r3 = r2.size()     // Catch: java.lang.Exception -> L3b
            if (r3 <= r5) goto L23
            if (r5 != 0) goto L20
            goto L23
        L20:
            int r5 = r3 - r5
            goto L24
        L23:
            r5 = 0
        L24:
            if (r5 >= r3) goto L30
            java.lang.Object r4 = r2.get(r5)     // Catch: java.lang.Exception -> L3b
            r1.put(r4)     // Catch: java.lang.Exception -> L3b
            int r5 = r5 + 1
            goto L24
        L30:
            int r5 = r1.length()     // Catch: java.lang.Exception -> L3b
            if (r5 <= 0) goto L3f
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.ae.a(r1)     // Catch: java.lang.Exception -> L3b
            goto L3f
        L3b:
            r5 = move-exception
            r5.printStackTrace()
        L3f:
            return r0
    }

    public static void a(android.content.Context r5, com.mbridge.msdk.foundation.entity.CampaignEx r6) {
            java.lang.String r0 = "DomainSameTool"
            java.lang.String r1 = "updateInstallList 开始 更新本机已安装广告列表"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)
            if (r5 != 0) goto Lf
            java.lang.String r5 = "updateInstallList 列表为空 不做更新本机已安装广告列表"
            com.mbridge.msdk.foundation.tools.z.b(r0, r5)
            return
        Lf:
            com.mbridge.msdk.foundation.db.i r1 = com.mbridge.msdk.foundation.db.i.a(r5)
            com.mbridge.msdk.foundation.db.l r1 = com.mbridge.msdk.foundation.db.l.a(r1)
            r2 = 0
            if (r6 == 0) goto L76
            java.lang.String r3 = r6.getPackageName()
            boolean r5 = com.mbridge.msdk.foundation.tools.ae.c(r5, r3)
            if (r5 == 0) goto L40
            java.util.Set r5 = com.mbridge.msdk.foundation.controller.a.e()
            if (r5 == 0) goto L3e
            com.mbridge.msdk.foundation.entity.i r5 = new com.mbridge.msdk.foundation.entity.i
            java.lang.String r1 = r6.getId()
            java.lang.String r6 = r6.getPackageName()
            r5.<init>(r1, r6)
            java.util.Set r6 = com.mbridge.msdk.foundation.controller.a.e()
            r6.add(r5)
        L3e:
            r2 = 1
            goto L76
        L40:
            if (r1 == 0) goto L76
            java.lang.String r5 = r6.getId()
            boolean r5 = r1.a(r5)
            if (r5 != 0) goto L76
            com.mbridge.msdk.foundation.entity.h r5 = new com.mbridge.msdk.foundation.entity.h
            r5.<init>()
            java.lang.String r3 = r6.getId()
            r5.a(r3)
            int r3 = r6.getFca()
            r5.a(r3)
            int r6 = r6.getFcb()
            r5.b(r6)
            r5.d(r2)
            r5.c(r2)
            long r3 = java.lang.System.currentTimeMillis()
            r5.a(r3)
            r1.a(r5)
        L76:
            if (r2 == 0) goto L84
            java.lang.String r5 = "更新安装列表"
            com.mbridge.msdk.foundation.tools.z.b(r0, r5)
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()
            r5.h()
        L84:
            return
    }

    public static void a(java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r6) {
            if (r6 == 0) goto L4e
            int r0 = r6.size()
            if (r0 != 0) goto L9
            goto L4e
        L9:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1 = 0
            int r2 = r6.size()
        L13:
            if (r1 >= r2) goto L3b
            java.lang.Object r3 = r6.get(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = (com.mbridge.msdk.foundation.entity.CampaignEx) r3
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r4 = r4.j()
            java.lang.String r5 = r3.getPackageName()
            boolean r4 = com.mbridge.msdk.foundation.tools.ae.c(r4, r5)
            if (r4 != 0) goto L38
            int r4 = r3.getOfferType()
            r5 = 99
            if (r4 != r5) goto L38
            r0.add(r3)
        L38:
            int r1 = r1 + 1
            goto L13
        L3b:
            com.mbridge.msdk.foundation.controller.a r6 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r6 = r6.j()
            com.mbridge.msdk.foundation.db.i r6 = com.mbridge.msdk.foundation.db.i.a(r6)
            com.mbridge.msdk.foundation.db.p r6 = com.mbridge.msdk.foundation.db.p.a(r6)
            r6.a(r0)
        L4e:
            return
    }

    public static boolean a(android.content.Context r7) {
            r0 = 0
            if (r7 != 0) goto L4
            return r0
        L4:
            android.content.res.Resources r7 = r7.getResources()     // Catch: java.lang.Throwable -> L53
            java.lang.String r1 = "config_showNavigationBar"
            java.lang.String r2 = "bool"
            java.lang.String r3 = "android"
            int r1 = r7.getIdentifier(r1, r2, r3)     // Catch: java.lang.Throwable -> L53
            if (r1 <= 0) goto L19
            boolean r7 = r7.getBoolean(r1)     // Catch: java.lang.Throwable -> L53
            goto L1a
        L19:
            r7 = r0
        L1a:
            java.lang.String r1 = "android.os.SystemProperties"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Throwable -> L4e
            java.lang.String r2 = "get"
            r3 = 1
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> L4e
            java.lang.Class<java.lang.String> r5 = java.lang.String.class
            r4[r0] = r5     // Catch: java.lang.Throwable -> L4e
            java.lang.reflect.Method r2 = r1.getMethod(r2, r4)     // Catch: java.lang.Throwable -> L4e
            java.lang.Object[] r4 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L4e
            java.lang.String r5 = "qemu.hw.mainkeys"
            r4[r0] = r5     // Catch: java.lang.Throwable -> L4e
            java.lang.Object r1 = r2.invoke(r1, r4)     // Catch: java.lang.Throwable -> L4e
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> L4e
            java.lang.String r2 = "1"
            boolean r2 = r2.equals(r1)     // Catch: java.lang.Throwable -> L4e
            if (r2 == 0) goto L42
            goto L5d
        L42:
            java.lang.String r0 = "0"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L4e
            if (r0 == 0) goto L4c
            r0 = r3
            goto L5d
        L4c:
            r0 = r7
            goto L5d
        L4e:
            r0 = move-exception
            r6 = r0
            r0 = r7
            r7 = r6
            goto L54
        L53:
            r7 = move-exception
        L54:
            java.lang.String r1 = r7.getMessage()
            java.lang.String r2 = "DomainSameTool"
            com.mbridge.msdk.foundation.tools.z.c(r2, r1, r7)
        L5d:
            return r0
    }
}
