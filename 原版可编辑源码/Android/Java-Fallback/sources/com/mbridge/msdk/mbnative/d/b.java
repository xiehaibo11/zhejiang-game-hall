package com.mbridge.msdk.mbnative.d;

public final class b {


    private static java.util.List<java.lang.String> a(com.mbridge.msdk.foundation.entity.CampaignEx r3) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            if (r3 != 0) goto L8
            return r0
        L8:
            java.lang.String r3 = r3.getAd_url_list()
            boolean r1 = android.text.TextUtils.isEmpty(r3)
            if (r1 == 0) goto L13
            return r0
        L13:
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: org.json.JSONException -> L2b
            r1.<init>(r3)     // Catch: org.json.JSONException -> L2b
            r3 = 0
        L19:
            int r2 = r1.length()     // Catch: org.json.JSONException -> L2b
            if (r3 >= r2) goto L2f
            java.lang.Object r2 = r1.get(r3)     // Catch: org.json.JSONException -> L2b
            java.lang.String r2 = (java.lang.String) r2     // Catch: org.json.JSONException -> L2b
            r0.add(r2)     // Catch: org.json.JSONException -> L2b
            int r3 = r3 + 1
            goto L19
        L2b:
            r3 = move-exception
            r3.printStackTrace()
        L2f:
            return r0
    }

    private static synchronized void a(com.mbridge.msdk.foundation.entity.CampaignEx r10, android.content.Context r11, java.lang.String r12) {
            java.lang.Class<com.mbridge.msdk.mbnative.d.b> r0 = com.mbridge.msdk.mbnative.d.b.class
            monitor-enter(r0)
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L56
            r1.a(r11)     // Catch: java.lang.Throwable -> L56
            java.lang.String r1 = r10.getImpressionURL()     // Catch: java.lang.Throwable -> L56
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L56
            if (r1 != 0) goto L2e
            java.util.concurrent.ThreadPoolExecutor r1 = com.mbridge.msdk.foundation.same.f.b.a()     // Catch: java.lang.Throwable -> L56
            com.mbridge.msdk.mbnative.d.b$1 r2 = new com.mbridge.msdk.mbnative.d.b$1     // Catch: java.lang.Throwable -> L56
            r2.<init>(r11, r10)     // Catch: java.lang.Throwable -> L56
            r1.execute(r2)     // Catch: java.lang.Throwable -> L56
            r7 = 0
            r8 = 1
            java.lang.String r6 = r10.getImpressionURL()     // Catch: java.lang.Throwable -> L56
            int r9 = com.mbridge.msdk.click.a.a.g     // Catch: java.lang.Throwable -> L56
            r3 = r11
            r4 = r10
            r5 = r12
            com.mbridge.msdk.click.b.a(r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L56
        L2e:
            boolean r1 = android.text.TextUtils.isEmpty(r12)     // Catch: java.lang.Throwable -> L56
            if (r1 != 0) goto L54
            com.mbridge.msdk.foundation.entity.l r1 = r10.getNativeVideoTracking()     // Catch: java.lang.Throwable -> L56
            if (r1 == 0) goto L54
            com.mbridge.msdk.foundation.entity.l r1 = r10.getNativeVideoTracking()     // Catch: java.lang.Throwable -> L56
            java.lang.String[] r1 = r1.l()     // Catch: java.lang.Throwable -> L56
            if (r1 == 0) goto L54
            r6 = 0
            r7 = 0
            com.mbridge.msdk.foundation.entity.l r1 = r10.getNativeVideoTracking()     // Catch: java.lang.Throwable -> L56
            java.lang.String[] r5 = r1.l()     // Catch: java.lang.Throwable -> L56
            r2 = r11
            r3 = r10
            r4 = r12
            com.mbridge.msdk.click.b.a(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L56
        L54:
            monitor-exit(r0)
            return
        L56:
            r10 = move-exception
            monitor-exit(r0)
            throw r10
    }

    public static synchronized void a(com.mbridge.msdk.foundation.entity.CampaignEx r17, android.content.Context r18, java.lang.String r19, com.mbridge.msdk.mbnative.c.a r20) {
            r7 = r17
            r0 = r20
            java.lang.Class<com.mbridge.msdk.mbnative.d.b> r8 = com.mbridge.msdk.mbnative.d.b.class
            monitor-enter(r8)
            if (r7 != 0) goto Lb
            monitor-exit(r8)
            return
        Lb:
            com.mbridge.msdk.c.b r1 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Throwable -> L98
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L98
            java.lang.String r2 = r2.k()     // Catch: java.lang.Throwable -> L98
            com.mbridge.msdk.c.a r1 = r1.g(r2)     // Catch: java.lang.Throwable -> L98
            r2 = 0
            r9 = 1
            if (r1 == 0) goto L2a
            int r1 = r1.aK()     // Catch: java.lang.Throwable -> L98
            if (r1 != r9) goto L27
            r1 = r9
            goto L28
        L27:
            r1 = r2
        L28:
            r10 = r1
            goto L2b
        L2a:
            r10 = r9
        L2b:
            boolean r1 = r17.isReport()     // Catch: java.lang.Throwable -> L98
            if (r1 != 0) goto L77
            r7.setReport(r9)     // Catch: java.lang.Throwable -> L98
            a(r17, r18, r19)     // Catch: java.lang.Throwable -> L98
            r11 = r18
            r12 = r19
            a(r7, r11, r12, r0, r10)     // Catch: java.lang.Throwable -> L98
            java.util.List r13 = a(r17)     // Catch: java.lang.Throwable -> L98
            if (r13 == 0) goto L74
            int r1 = r13.size()     // Catch: java.lang.Throwable -> L98
            if (r1 != 0) goto L4b
            goto L74
        L4b:
            r14 = 0
            r15 = 0
            r6 = r2
        L4e:
            int r1 = r13.size()     // Catch: java.lang.Throwable -> L98
            if (r6 >= r1) goto L74
            java.lang.Object r1 = r13.get(r6)     // Catch: java.lang.Throwable -> L98
            r4 = r1
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> L98
            boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L98
            if (r1 != 0) goto L6f
            r1 = r18
            r2 = r17
            r3 = r19
            r5 = r14
            r16 = r6
            r6 = r15
            com.mbridge.msdk.click.b.a(r1, r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L98
            goto L71
        L6f:
            r16 = r6
        L71:
            int r6 = r16 + 1
            goto L4e
        L74:
            b(r17, r18, r19)     // Catch: java.lang.Throwable -> L98
        L77:
            if (r0 == 0) goto L96
            boolean r1 = r17.isCallBackImpression()     // Catch: java.lang.Throwable -> L98
            if (r1 != 0) goto L96
            if (r10 != 0) goto L93
            int r1 = r17.getType()     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> L98
            r0.onLoggingImpression(r1)     // Catch: java.lang.Exception -> L89 java.lang.Throwable -> L98
            goto L93
        L89:
            r0 = move-exception
            java.lang.String r1 = "NativeReportUtils"
            java.lang.String r0 = r0.getMessage()     // Catch: java.lang.Throwable -> L98
            android.util.Log.e(r1, r0)     // Catch: java.lang.Throwable -> L98
        L93:
            r7.setCallBackImpression(r9)     // Catch: java.lang.Throwable -> L98
        L96:
            monitor-exit(r8)
            return
        L98:
            r0 = move-exception
            monitor-exit(r8)
            throw r0
    }

    private static synchronized void a(com.mbridge.msdk.foundation.entity.CampaignEx r9, android.content.Context r10, java.lang.String r11, com.mbridge.msdk.mbnative.c.a r12, boolean r13) {
            java.lang.Class<com.mbridge.msdk.mbnative.d.b> r0 = com.mbridge.msdk.mbnative.d.b.class
            monitor-enter(r0)
            java.lang.String r1 = r9.getOnlyImpressionURL()     // Catch: java.lang.Throwable -> L56
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L56
            if (r1 != 0) goto L54
            java.util.Map<java.lang.String, java.lang.Long> r1 = com.mbridge.msdk.mbnative.controller.NativeController.c     // Catch: java.lang.Throwable -> L56
            if (r1 == 0) goto L54
            java.util.Map<java.lang.String, java.lang.Long> r1 = com.mbridge.msdk.mbnative.controller.NativeController.c     // Catch: java.lang.Throwable -> L56
            java.lang.String r2 = r9.getOnlyImpressionURL()     // Catch: java.lang.Throwable -> L56
            boolean r1 = r1.containsKey(r2)     // Catch: java.lang.Throwable -> L56
            if (r1 != 0) goto L54
            if (r13 == 0) goto L35
            if (r12 == 0) goto L35
            if (r9 == 0) goto L35
            int r13 = r9.getAdType()     // Catch: java.lang.Exception -> L2b java.lang.Throwable -> L56
            r12.onLoggingImpression(r13)     // Catch: java.lang.Exception -> L2b java.lang.Throwable -> L56
            goto L35
        L2b:
            r12 = move-exception
            java.lang.String r13 = "NativeReportUtils"
            java.lang.String r12 = r12.getMessage()     // Catch: java.lang.Throwable -> L56
            android.util.Log.e(r13, r12)     // Catch: java.lang.Throwable -> L56
        L35:
            java.util.Map<java.lang.String, java.lang.Long> r12 = com.mbridge.msdk.mbnative.controller.NativeController.c     // Catch: java.lang.Throwable -> L56
            java.lang.String r13 = r9.getOnlyImpressionURL()     // Catch: java.lang.Throwable -> L56
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L56
            java.lang.Long r1 = java.lang.Long.valueOf(r1)     // Catch: java.lang.Throwable -> L56
            r12.put(r13, r1)     // Catch: java.lang.Throwable -> L56
            r6 = 0
            r7 = 1
            java.lang.String r5 = r9.getOnlyImpressionURL()     // Catch: java.lang.Throwable -> L56
            int r8 = com.mbridge.msdk.click.a.a.h     // Catch: java.lang.Throwable -> L56
            r2 = r10
            r3 = r9
            r4 = r11
            com.mbridge.msdk.click.b.a(r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L56
        L54:
            monitor-exit(r0)
            return
        L56:
            r9 = move-exception
            monitor-exit(r0)
            throw r9
    }

    private static synchronized void b(com.mbridge.msdk.foundation.entity.CampaignEx r9, android.content.Context r10, java.lang.String r11) {
            java.lang.Class<com.mbridge.msdk.mbnative.d.b> r0 = com.mbridge.msdk.mbnative.d.b.class
            monitor-enter(r0)
            if (r9 == 0) goto L39
            java.util.List r1 = r9.getPv_urls()     // Catch: java.lang.Throwable -> L2b
            if (r1 == 0) goto L39
            int r2 = r1.size()     // Catch: java.lang.Throwable -> L2b
            if (r2 <= 0) goto L39
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L2b
        L15:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L2b
            if (r2 == 0) goto L39
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L2b
            r6 = r2
            java.lang.String r6 = (java.lang.String) r6     // Catch: java.lang.Throwable -> L2b
            r7 = 0
            r8 = 1
            r3 = r10
            r4 = r9
            r5 = r11
            com.mbridge.msdk.click.b.a(r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L2b
            goto L15
        L2b:
            r9 = move-exception
            java.lang.String r10 = "NativeReportUtils"
            java.lang.String r9 = r9.getMessage()     // Catch: java.lang.Throwable -> L36
            com.mbridge.msdk.foundation.tools.z.a(r10, r9)     // Catch: java.lang.Throwable -> L36
            goto L39
        L36:
            r9 = move-exception
            monitor-exit(r0)
            throw r9
        L39:
            monitor-exit(r0)
            return
    }
}
