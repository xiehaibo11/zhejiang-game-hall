package com.kwad.components.ad.feed;

public final class e {


    static class 2 extends com.kwad.components.core.p.c {
        final com.kwad.sdk.api.KsLoadManager.FeedAdListener dT;
        final com.kwad.sdk.internal.api.SceneImpl dU;
        final boolean dV;
        final long dW;



        2(com.kwad.sdk.api.KsLoadManager.FeedAdListener r1, com.kwad.sdk.internal.api.SceneImpl r2, boolean r3, long r4) {
                r0 = this;
                r0.dT = r1
                r0.dU = r2
                r0.dV = r3
                r0.dW = r4
                r0.<init>()
                return
        }

        @Override
        public final void a(com.kwad.components.core.response.model.AdResultData r8) {
                r7 = this;
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                java.lang.String r2 = "loadFeedAd onSuccess:"
                r1.<init>(r2)
                java.util.List r3 = r8.getAdTemplateList()
                int r3 = r3.size()
                r1.append(r3)
                java.lang.String r1 = r1.toString()
                java.lang.String r3 = "KsAdFeedLoadManager"
                com.kwad.sdk.core.e.c.d(r3, r1)
                java.util.List r8 = r8.getAdTemplateList()
                java.util.Iterator r8 = r8.iterator()
                r1 = 0
            L29:
                boolean r4 = r8.hasNext()
                if (r4 == 0) goto L8b
                java.lang.Object r4 = r8.next()
                com.kwad.sdk.core.response.model.AdTemplate r4 = (com.kwad.sdk.core.response.model.AdTemplate) r4
                if (r4 == 0) goto L29
                com.kwad.sdk.core.response.model.AdInfo r5 = com.kwad.sdk.core.response.b.d.cg(r4)
                boolean r6 = com.kwad.components.model.FeedType.checkTypeValid(r4)
                if (r6 != 0) goto L5f
                r1 = 2
                java.lang.Object[] r1 = new java.lang.Object[r1]
                r6 = 0
                int r5 = com.kwad.sdk.core.response.b.a.aW(r5)
                java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
                r1[r6] = r5
                r5 = 1
                int r4 = r4.type
                com.kwad.components.model.FeedType r4 = com.kwad.components.model.FeedType.fromInt(r4)
                r1[r5] = r4
                java.lang.String r4 = "(模板不匹配materialType:%s_feedType:%s)"
                java.lang.String r1 = java.lang.String.format(r4, r1)
                goto L29
            L5f:
                com.kwad.sdk.internal.api.SceneImpl r6 = r7.dU
                r4.mAdScene = r6
                java.lang.String r5 = com.kwad.sdk.core.response.b.a.F(r5)
                boolean r5 = android.text.TextUtils.isEmpty(r5)
                if (r5 != 0) goto L80
                android.util.Pair r5 = com.kwad.components.ad.feed.monitor.a.d(r4)
                java.lang.Object r6 = r5.first
                java.lang.Integer r6 = (java.lang.Integer) r6
                int r6 = r6.intValue()
                java.lang.Object r5 = r5.second
                java.lang.String r5 = (java.lang.String) r5
                com.kwad.components.ad.feed.monitor.b.e(r6, r5)
            L80:
                com.kwad.components.ad.feed.c r5 = new com.kwad.components.ad.feed.c
                boolean r6 = r7.dV
                r5.<init>(r4, r6)
                r0.add(r5)
                goto L29
            L8b:
                java.lang.StringBuilder r8 = new java.lang.StringBuilder
                r8.<init>(r2)
                int r2 = r0.size()
                r8.append(r2)
                java.lang.String r8 = r8.toString()
                com.kwad.sdk.core.e.c.d(r3, r8)
                int r8 = r0.size()
                com.kwad.components.ad.feed.monitor.b.t(r8)
                boolean r8 = r0.isEmpty()
                if (r8 == 0) goto Le5
                com.kwad.sdk.core.network.f r8 = com.kwad.sdk.core.network.f.aoU
                int r8 = r8.errorCode
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                com.kwad.sdk.core.network.f r2 = com.kwad.sdk.core.network.f.aoU
                java.lang.String r2 = r2.msg
                r0.append(r2)
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                com.kwad.components.ad.feed.monitor.b.d(r8, r0)
                com.kwad.sdk.core.network.f r8 = com.kwad.sdk.core.network.f.aoU
                int r8 = r8.errorCode
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                com.kwad.sdk.core.network.f r2 = com.kwad.sdk.core.network.f.aoU
                java.lang.String r2 = r2.msg
                r0.append(r2)
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                r7.onError(r8, r0)
                java.lang.String r8 = "loadFeedAd onError"
                com.kwad.sdk.core.e.c.d(r3, r8)
                return
            Le5:
                com.kwad.sdk.core.report.KSLoggerReporter$ReportClient r8 = com.kwad.sdk.core.report.KSLoggerReporter.ReportClient.CORE_CONVERT
                com.kwai.adclient.kscommerciallogger.model.BusinessType r1 = com.kwai.adclient.kscommerciallogger.model.BusinessType.AD_FEED
                java.lang.String r2 = "dataReady"
                com.kwad.sdk.core.report.KSLoggerReporter$b r8 = r8.buildMethodCheck(r1, r2)
                int r1 = r0.size()
                com.kwad.sdk.core.report.KSLoggerReporter$b r8 = r8.ct(r1)
                r8.report()
                com.kwad.components.ad.feed.e$2$2 r8 = new com.kwad.components.ad.feed.e$2$2
                r8.<init>(r7, r0)
                com.kwad.sdk.utils.bj.runOnUiThread(r8)
                return
        }

        @Override
        public final void onError(int r2, java.lang.String r3) {
                r1 = this;
                com.kwad.components.ad.feed.e$2$1 r0 = new com.kwad.components.ad.feed.e$2$1
                r0.<init>(r1, r2, r3)
                com.kwad.sdk.utils.bj.runOnUiThread(r0)
                return
        }
    }

    public static void a(com.kwad.sdk.api.KsScene r7, com.kwad.sdk.api.KsLoadManager.FeedAdListener r8, boolean r9) {
            com.kwad.sdk.KsAdSDKImpl r0 = com.kwad.sdk.KsAdSDKImpl.get()
            boolean r0 = r0.hasInitFinish()
            if (r0 != 0) goto L1a
            java.lang.String r7 = "KsAdFeedLoadManager"
            java.lang.String r9 = "loadConfigFeedAd please init sdk first"
            com.kwad.sdk.core.e.c.e(r7, r9)
            com.kwad.components.ad.feed.e$1 r7 = new com.kwad.components.ad.feed.e$1
            r7.<init>(r8)
            com.kwad.sdk.utils.bj.runOnUiThread(r7)
            return
        L1a:
            com.kwad.sdk.internal.api.SceneImpl r2 = com.kwad.sdk.internal.api.SceneImpl.covert(r7)
            long r4 = android.os.SystemClock.elapsedRealtime()
            int r7 = r2.getAdNum()
            com.kwad.components.ad.feed.monitor.b.s(r7)
            com.kwad.components.core.t.k r7 = com.kwad.components.core.t.k.qo()
            java.lang.String r0 = "loadConfigFeedAd"
            boolean r7 = r7.a(r2, r0)
            r0 = 1
            r2.setAdStyle(r0)
            com.kwad.components.ad.KsAdLoadManager.M()
            com.kwad.components.core.p.a.a$a r0 = new com.kwad.components.core.p.a.a$a
            r0.<init>()
            com.kwad.components.core.p.a.b r1 = new com.kwad.components.core.p.a.b
            r1.<init>(r2)
            com.kwad.components.core.p.a.a$a r0 = r0.e(r1)
            com.kwad.components.core.p.a.a$a r7 = r0.aF(r7)
            com.kwad.components.ad.feed.e$2 r6 = new com.kwad.components.ad.feed.e$2
            r0 = r6
            r1 = r8
            r3 = r9
            r0.<init>(r1, r2, r3, r4)
            com.kwad.components.core.p.a.a$a r7 = r7.a(r6)
            com.kwad.components.core.p.a.a r7 = r7.pI()
            com.kwad.components.ad.KsAdLoadManager.a(r7)
            return
    }
}
