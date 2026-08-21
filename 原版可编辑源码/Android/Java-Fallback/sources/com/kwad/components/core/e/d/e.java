package com.kwad.components.core.e.d;

public final class e {
    private static boolean Ki;


    static {
            return
    }

    private static void Q(com.kwad.sdk.core.response.model.AdTemplate r6) {
            boolean r0 = nO()
            if (r0 == 0) goto L7
            return
        L7:
            r0 = 1
            ax(r0)
            int r0 = com.kwad.sdk.core.config.d.zq()
            int r0 = java.lang.Math.abs(r0)
            if (r0 <= 0) goto L23
            com.kwad.components.core.e.d.e$1 r1 = new com.kwad.components.core.e.d.e$1
            r1.<init>(r6)
            r6 = 0
            long r2 = (long) r0
            r4 = 1000(0x3e8, double:4.94E-321)
            long r2 = r2 * r4
            com.kwad.sdk.utils.bj.a(r1, r6, r2)
            return
        L23:
            r6 = 0
            ax(r6)
            return
    }

    public static int a(android.content.Context r13, java.lang.String r14, java.lang.String r15, java.lang.String r16, com.kwad.sdk.core.response.model.AdTemplate r17) {
            r0 = r17
            boolean r1 = android.text.TextUtils.isEmpty(r14)
            r2 = -1
            r3 = 1
            if (r1 != 0) goto L89
            boolean r1 = android.text.TextUtils.isEmpty(r15)
            if (r1 != 0) goto L89
            boolean r1 = android.text.TextUtils.isEmpty(r16)
            if (r1 == 0) goto L18
            goto L89
        L18:
            r1 = 2
            r4 = 0
            android.content.pm.PackageManager r5 = r13.getPackageManager()     // Catch: java.lang.Throwable -> L7c java.lang.Exception -> L7e
            java.lang.String r6 = "com.tencent.mm"
            android.content.Intent r5 = r5.getLaunchIntentForPackage(r6)     // Catch: java.lang.Throwable -> L7c java.lang.Exception -> L7e
            android.content.Intent r6 = new android.content.Intent     // Catch: java.lang.Throwable -> L7c java.lang.Exception -> L7e
            java.lang.String r7 = "android.intent.action.MAIN"
            r6.<init>(r7)     // Catch: java.lang.Throwable -> L7c java.lang.Exception -> L7e
            java.lang.String r7 = "android.intent.category.LAUNCHER"
            r6.addCategory(r7)     // Catch: java.lang.Throwable -> L7c java.lang.Exception -> L7e
            r7 = 268435456(0x10000000, float:2.524355E-29)
            r6.addFlags(r7)     // Catch: java.lang.Throwable -> L7c java.lang.Exception -> L7e
            android.content.ComponentName r5 = r5.getComponent()     // Catch: java.lang.Throwable -> L7c java.lang.Exception -> L7e
            r6.setComponent(r5)     // Catch: java.lang.Throwable -> L7c java.lang.Exception -> L7e
            r5 = r13
            r13.startActivity(r6)     // Catch: java.lang.Throwable -> L7c java.lang.Exception -> L7e
            android.content.ContentResolver r7 = r13.getContentResolver()     // Catch: java.lang.Throwable -> L7c java.lang.Exception -> L7e
            java.lang.String r5 = "content://com.tencent.mm.sdk.comm.provider/launchWXMiniprogram"
            android.net.Uri r8 = android.net.Uri.parse(r5)     // Catch: java.lang.Throwable -> L7c java.lang.Exception -> L7e
            r5 = 5
            java.lang.String[] r11 = new java.lang.String[r5]     // Catch: java.lang.Throwable -> L7c java.lang.Exception -> L7e
            r5 = 0
            r11[r5] = r14     // Catch: java.lang.Throwable -> L7c java.lang.Exception -> L7e
            r11[r3] = r15     // Catch: java.lang.Throwable -> L7c java.lang.Exception -> L7e
            r11[r1] = r16     // Catch: java.lang.Throwable -> L7c java.lang.Exception -> L7e
            r5 = 3
            java.lang.String r6 = "0"
            r11[r5] = r6     // Catch: java.lang.Throwable -> L7c java.lang.Exception -> L7e
            r5 = 4
            java.lang.String r6 = ""
            r11[r5] = r6     // Catch: java.lang.Throwable -> L7c java.lang.Exception -> L7e
            r9 = 0
            r10 = 0
            r12 = 0
            android.database.Cursor r5 = r7.query(r8, r9, r10, r11, r12)     // Catch: java.lang.Throwable -> L7c java.lang.Exception -> L7e
            if (r5 == 0) goto L70
            com.kwad.sdk.crash.utils.b.closeQuietly(r5)     // Catch: java.lang.Throwable -> L6b java.lang.Exception -> L6e
            goto L70
        L6b:
            r0 = move-exception
            r4 = r5
            goto L85
        L6e:
            r4 = r5
            goto L7e
        L70:
            com.kwad.sdk.crash.utils.b.closeQuietly(r5)
            java.lang.String r1 = "wxsmallapp"
            com.kwad.sdk.core.report.a.a(r0, r1, r3, r4)
            Q(r17)
            return r3
        L7c:
            r0 = move-exception
            goto L85
        L7e:
            com.kwad.sdk.core.report.a.k(r0, r1)     // Catch: java.lang.Throwable -> L7c
            com.kwad.sdk.crash.utils.b.closeQuietly(r4)
            return r2
        L85:
            com.kwad.sdk.crash.utils.b.closeQuietly(r4)
            throw r0
        L89:
            com.kwad.sdk.core.report.a.k(r0, r3)
            return r2
    }

    static void aw(boolean r0) {
            r0 = 0
            ax(r0)
            return
    }

    private static void ax(boolean r0) {
            com.kwad.components.core.e.d.e.Ki = r0
            return
    }

    public static int e(android.content.Context r3, com.kwad.sdk.core.response.model.AdTemplate r4) {
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r4)
            boolean r1 = com.kwad.sdk.core.response.b.a.M(r0)
            if (r1 != 0) goto L28
            boolean r1 = com.kwad.sdk.core.response.b.a.N(r0)
            if (r1 == 0) goto L11
            goto L28
        L11:
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r1 = r0.adConversionInfo
            com.kwad.sdk.core.response.model.AdInfo$SmallAppJumpInfo r1 = r1.smallAppJumpInfo
            java.lang.String r1 = r1.mediaSmallAppId
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r2 = r0.adConversionInfo
            com.kwad.sdk.core.response.model.AdInfo$SmallAppJumpInfo r2 = r2.smallAppJumpInfo
            java.lang.String r2 = r2.originId
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r0 = r0.adConversionInfo
            com.kwad.sdk.core.response.model.AdInfo$SmallAppJumpInfo r0 = r0.smallAppJumpInfo
            java.lang.String r0 = r0.smallAppJumpUrl
            int r3 = a(r3, r1, r2, r0, r4)
            return r3
        L28:
            r3 = 0
            return r3
    }

    private static boolean nO() {
            boolean r0 = com.kwad.components.core.e.d.e.Ki
            return r0
    }
}
