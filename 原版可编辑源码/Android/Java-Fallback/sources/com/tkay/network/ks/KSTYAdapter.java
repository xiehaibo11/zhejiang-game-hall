package com.tkay.network.ks;

public class KSTYAdapter extends com.tkay.nativead.unitgroup.api.CustomNativeAdapter {
    long a;
    java.lang.String b;
    boolean c;
    java.lang.String d;
    java.lang.String e;
    android.content.Context f;
    boolean g;
    double h;


    final class 2 implements com.kwad.sdk.api.KsLoadManager.DrawAdListener {
        final android.content.Context a;
        final com.tkay.network.ks.KSTYAdapter b;

        2(com.tkay.network.ks.KSTYAdapter r1, android.content.Context r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public final void onDrawAdLoad(java.util.List<com.kwad.sdk.api.KsDrawAd> r9) {
                r8 = this;
                if (r9 == 0) goto L8c
                int r0 = r9.size()
                if (r0 != 0) goto La
                goto L8c
            La:
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                java.util.Iterator r1 = r9.iterator()
            L13:
                boolean r2 = r1.hasNext()
                if (r2 == 0) goto L2a
                java.lang.Object r2 = r1.next()
                com.kwad.sdk.api.KsDrawAd r2 = (com.kwad.sdk.api.KsDrawAd) r2
                com.tkay.network.ks.KSATDrawAd r3 = new com.tkay.network.ks.KSATDrawAd
                android.content.Context r4 = r8.a
                r3.<init>(r4, r2)
                r0.add(r3)
                goto L13
            L2a:
                int r1 = r0.size()
                com.tkay.nativead.unitgroup.api.CustomNativeAd[] r1 = new com.tkay.nativead.unitgroup.api.CustomNativeAd[r1]
                java.lang.Object[] r0 = r0.toArray(r1)
                com.tkay.nativead.unitgroup.api.CustomNativeAd[] r0 = (com.tkay.nativead.unitgroup.api.CustomNativeAd[]) r0
                com.tkay.network.ks.KSTYAdapter r1 = r8.b
                boolean r1 = r1.g
                if (r1 == 0) goto L7a
                r1 = 0
                java.lang.Object r9 = r9.get(r1)
                com.kwad.sdk.api.KsDrawAd r9 = (com.kwad.sdk.api.KsDrawAd) r9
                com.tkay.network.ks.KSTYAdapter r2 = r8.b
                com.tkay.core.api.TYBiddingListener r2 = r2.mBiddingListener
                if (r2 == 0) goto L79
                r2 = 0
                int r2 = r9.getECPM()     // Catch: java.lang.Throwable -> L51
                double r2 = (double) r2
                goto L55
            L51:
                r4 = move-exception
                r4.printStackTrace()
            L55:
                com.tkay.network.ks.KSTYBiddingNotice r4 = new com.tkay.network.ks.KSTYBiddingNotice
                r4.<init>(r9)
                com.tkay.network.ks.KSTYAdapter r9 = r8.b
                com.tkay.core.api.TYBiddingListener r9 = r9.mBiddingListener
                java.lang.StringBuilder r5 = new java.lang.StringBuilder
                r5.<init>()
                long r6 = java.lang.System.currentTimeMillis()
                r5.append(r6)
                java.lang.String r5 = r5.toString()
                com.tkay.core.api.TYAdConst$CURRENCY r6 = com.tkay.core.api.TYAdConst.CURRENCY.RMB_CENT
                com.tkay.core.api.TYBiddingResult r2 = com.tkay.core.api.TYBiddingResult.success(r2, r5, r4, r6)
                r0 = r0[r1]
                r9.onC2SBiddingResultWithCache(r2, r0)
            L79:
                return
            L7a:
                com.tkay.network.ks.KSTYAdapter r9 = r8.b
                com.tkay.core.api.TYCustomLoadListener r9 = com.tkay.network.ks.KSTYAdapter.b(r9)
                if (r9 == 0) goto L8b
                com.tkay.network.ks.KSTYAdapter r9 = r8.b
                com.tkay.core.api.TYCustomLoadListener r9 = com.tkay.network.ks.KSTYAdapter.c(r9)
                r9.onAdCacheLoaded(r0)
            L8b:
                return
            L8c:
                com.tkay.network.ks.KSTYAdapter r9 = r8.b
                java.lang.String r0 = ""
                java.lang.String r1 = "kuaishou no fill"
                r9.notifyATLoadFail(r0, r1)
                return
        }

        @Override
        public final void onError(int r2, java.lang.String r3) {
                r1 = this;
                com.tkay.network.ks.KSTYAdapter r0 = r1.b
                java.lang.String r2 = java.lang.String.valueOf(r2)
                r0.notifyATLoadFail(r2, r3)
                return
        }
    }

    final class 3 implements com.kwad.sdk.api.KsLoadManager.FeedAdListener {
        final android.content.Context a;
        final com.tkay.network.ks.KSTYAdapter b;

        3(com.tkay.network.ks.KSTYAdapter r1, android.content.Context r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public final void onError(int r2, java.lang.String r3) {
                r1 = this;
                com.tkay.network.ks.KSTYAdapter r0 = r1.b
                java.lang.String r2 = java.lang.String.valueOf(r2)
                r0.notifyATLoadFail(r2, r3)
                return
        }

        @Override
        public final void onFeedAdLoad(java.util.List<com.kwad.sdk.api.KsFeedAd> r9) {
                r8 = this;
                if (r9 == 0) goto L90
                int r0 = r9.size()
                if (r0 != 0) goto La
                goto L90
            La:
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                java.util.Iterator r1 = r9.iterator()
            L13:
                boolean r2 = r1.hasNext()
                if (r2 == 0) goto L2e
                java.lang.Object r2 = r1.next()
                com.kwad.sdk.api.KsFeedAd r2 = (com.kwad.sdk.api.KsFeedAd) r2
                com.tkay.network.ks.KSATFeedAd r3 = new com.tkay.network.ks.KSATFeedAd
                android.content.Context r4 = r8.a
                com.tkay.network.ks.KSTYAdapter r5 = r8.b
                boolean r5 = r5.c
                r3.<init>(r4, r2, r5)
                r0.add(r3)
                goto L13
            L2e:
                int r1 = r0.size()
                com.tkay.nativead.unitgroup.api.CustomNativeAd[] r1 = new com.tkay.nativead.unitgroup.api.CustomNativeAd[r1]
                java.lang.Object[] r0 = r0.toArray(r1)
                com.tkay.nativead.unitgroup.api.CustomNativeAd[] r0 = (com.tkay.nativead.unitgroup.api.CustomNativeAd[]) r0
                com.tkay.network.ks.KSTYAdapter r1 = r8.b
                boolean r1 = r1.g
                if (r1 == 0) goto L7e
                r1 = 0
                java.lang.Object r9 = r9.get(r1)
                com.kwad.sdk.api.KsFeedAd r9 = (com.kwad.sdk.api.KsFeedAd) r9
                com.tkay.network.ks.KSTYAdapter r2 = r8.b
                com.tkay.core.api.TYBiddingListener r2 = r2.mBiddingListener
                if (r2 == 0) goto L7d
                r2 = 0
                int r2 = r9.getECPM()     // Catch: java.lang.Throwable -> L55
                double r2 = (double) r2
                goto L59
            L55:
                r4 = move-exception
                r4.printStackTrace()
            L59:
                com.tkay.network.ks.KSTYBiddingNotice r4 = new com.tkay.network.ks.KSTYBiddingNotice
                r4.<init>(r9)
                com.tkay.network.ks.KSTYAdapter r9 = r8.b
                com.tkay.core.api.TYBiddingListener r9 = r9.mBiddingListener
                java.lang.StringBuilder r5 = new java.lang.StringBuilder
                r5.<init>()
                long r6 = java.lang.System.currentTimeMillis()
                r5.append(r6)
                java.lang.String r5 = r5.toString()
                com.tkay.core.api.TYAdConst$CURRENCY r6 = com.tkay.core.api.TYAdConst.CURRENCY.RMB_CENT
                com.tkay.core.api.TYBiddingResult r2 = com.tkay.core.api.TYBiddingResult.success(r2, r5, r4, r6)
                r0 = r0[r1]
                r9.onC2SBiddingResultWithCache(r2, r0)
            L7d:
                return
            L7e:
                com.tkay.network.ks.KSTYAdapter r9 = r8.b
                com.tkay.core.api.TYCustomLoadListener r9 = com.tkay.network.ks.KSTYAdapter.d(r9)
                if (r9 == 0) goto L8f
                com.tkay.network.ks.KSTYAdapter r9 = r8.b
                com.tkay.core.api.TYCustomLoadListener r9 = com.tkay.network.ks.KSTYAdapter.e(r9)
                r9.onAdCacheLoaded(r0)
            L8f:
                return
            L90:
                com.tkay.network.ks.KSTYAdapter r9 = r8.b
                java.lang.String r0 = ""
                java.lang.String r1 = "kuaishou no fill"
                r9.notifyATLoadFail(r0, r1)
                return
        }
    }

    final class 4 implements com.kwad.sdk.api.KsLoadManager.NativeAdListener {
        final android.content.Context a;
        final com.tkay.network.ks.KSTYAdapter b;

        4(com.tkay.network.ks.KSTYAdapter r1, android.content.Context r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public final void onError(int r2, java.lang.String r3) {
                r1 = this;
                com.tkay.network.ks.KSTYAdapter r0 = r1.b
                java.lang.String r2 = java.lang.String.valueOf(r2)
                r0.notifyATLoadFail(r2, r3)
                return
        }

        @Override
        public final void onNativeAdLoad(java.util.List<com.kwad.sdk.api.KsNativeAd> r9) {
                r8 = this;
                if (r9 == 0) goto L90
                int r0 = r9.size()
                if (r0 != 0) goto La
                goto L90
            La:
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                java.util.Iterator r1 = r9.iterator()
            L13:
                boolean r2 = r1.hasNext()
                if (r2 == 0) goto L2e
                java.lang.Object r2 = r1.next()
                com.kwad.sdk.api.KsNativeAd r2 = (com.kwad.sdk.api.KsNativeAd) r2
                com.tkay.network.ks.KSTYNativeAd r3 = new com.tkay.network.ks.KSTYNativeAd
                android.content.Context r4 = r8.a
                com.tkay.network.ks.KSTYAdapter r5 = r8.b
                boolean r5 = r5.c
                r3.<init>(r4, r2, r5)
                r0.add(r3)
                goto L13
            L2e:
                int r1 = r0.size()
                com.tkay.nativead.unitgroup.api.CustomNativeAd[] r1 = new com.tkay.nativead.unitgroup.api.CustomNativeAd[r1]
                java.lang.Object[] r0 = r0.toArray(r1)
                com.tkay.nativead.unitgroup.api.CustomNativeAd[] r0 = (com.tkay.nativead.unitgroup.api.CustomNativeAd[]) r0
                com.tkay.network.ks.KSTYAdapter r1 = r8.b
                boolean r1 = r1.g
                if (r1 == 0) goto L7e
                r1 = 0
                java.lang.Object r9 = r9.get(r1)
                com.kwad.sdk.api.KsNativeAd r9 = (com.kwad.sdk.api.KsNativeAd) r9
                com.tkay.network.ks.KSTYAdapter r2 = r8.b
                com.tkay.core.api.TYBiddingListener r2 = r2.mBiddingListener
                if (r2 == 0) goto L7d
                r2 = 0
                int r2 = r9.getECPM()     // Catch: java.lang.Throwable -> L55
                double r2 = (double) r2
                goto L59
            L55:
                r4 = move-exception
                r4.printStackTrace()
            L59:
                com.tkay.network.ks.KSTYBiddingNotice r4 = new com.tkay.network.ks.KSTYBiddingNotice
                r4.<init>(r9)
                com.tkay.network.ks.KSTYAdapter r9 = r8.b
                com.tkay.core.api.TYBiddingListener r9 = r9.mBiddingListener
                java.lang.StringBuilder r5 = new java.lang.StringBuilder
                r5.<init>()
                long r6 = java.lang.System.currentTimeMillis()
                r5.append(r6)
                java.lang.String r5 = r5.toString()
                com.tkay.core.api.TYAdConst$CURRENCY r6 = com.tkay.core.api.TYAdConst.CURRENCY.RMB_CENT
                com.tkay.core.api.TYBiddingResult r2 = com.tkay.core.api.TYBiddingResult.success(r2, r5, r4, r6)
                r0 = r0[r1]
                r9.onC2SBiddingResultWithCache(r2, r0)
            L7d:
                return
            L7e:
                com.tkay.network.ks.KSTYAdapter r9 = r8.b
                com.tkay.core.api.TYCustomLoadListener r9 = com.tkay.network.ks.KSTYAdapter.f(r9)
                if (r9 == 0) goto L8f
                com.tkay.network.ks.KSTYAdapter r9 = r8.b
                com.tkay.core.api.TYCustomLoadListener r9 = com.tkay.network.ks.KSTYAdapter.g(r9)
                r9.onAdCacheLoaded(r0)
            L8f:
                return
            L90:
                com.tkay.network.ks.KSTYAdapter r9 = r8.b
                java.lang.String r0 = ""
                java.lang.String r1 = "kuaishou no fill"
                r9.notifyATLoadFail(r0, r1)
                return
        }
    }

    public KSTYAdapter() {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = "0"
            r2.b = r0
            r1 = 0
            r2.c = r1
            r2.d = r0
            return
    }

    static int a(com.tkay.network.ks.KSTYAdapter r0) {
            int r0 = r0.mRequestNum
            return r0
    }

    private void a(android.content.Context r6, java.util.Map<java.lang.String, java.lang.Object> r7, int r8) {
            r5 = this;
            java.lang.String r0 = "key_width"
            boolean r1 = r7.containsKey(r0)
            r2 = 0
            if (r1 == 0) goto Le
            java.lang.Object r0 = r7.get(r0)
            goto Lf
        Le:
            r0 = r2
        Lf:
            java.lang.String r1 = "key_height"
            boolean r3 = r7.containsKey(r1)
            if (r3 == 0) goto L1b
            java.lang.Object r2 = r7.get(r1)
        L1b:
            com.kwad.sdk.api.KsScene$Builder r7 = new com.kwad.sdk.api.KsScene$Builder
            long r3 = r5.a
            r7.<init>(r3)
            boolean r1 = r5.g
            r3 = 1
            if (r1 == 0) goto L29
            r8 = r3
            goto L2e
        L29:
            r1 = 5
            int r8 = java.lang.Math.min(r8, r1)
        L2e:
            com.kwad.sdk.api.KsScene$Builder r7 = r7.adNum(r8)
            if (r0 == 0) goto L47
            java.lang.String r8 = r0.toString()     // Catch: java.lang.Throwable -> L43
            double r0 = java.lang.Double.parseDouble(r8)     // Catch: java.lang.Throwable -> L43
            int r8 = (int) r0     // Catch: java.lang.Throwable -> L43
            if (r8 <= 0) goto L47
            r7.width(r8)     // Catch: java.lang.Throwable -> L43
            goto L47
        L43:
            r8 = move-exception
            r8.printStackTrace()
        L47:
            if (r2 == 0) goto L5c
            java.lang.String r8 = r2.toString()     // Catch: java.lang.Throwable -> L58
            double r0 = java.lang.Double.parseDouble(r8)     // Catch: java.lang.Throwable -> L58
            int r8 = (int) r0     // Catch: java.lang.Throwable -> L58
            if (r8 <= 0) goto L5c
            r7.height(r8)     // Catch: java.lang.Throwable -> L58
            goto L5c
        L58:
            r8 = move-exception
            r8.printStackTrace()
        L5c:
            java.lang.String r8 = r5.e
            boolean r8 = android.text.TextUtils.isEmpty(r8)
            if (r8 != 0) goto L6c
            java.lang.String r8 = r5.e
            r7.setBidResponseV2(r8)
            r7.adNum(r3)
        L6c:
            com.kwad.sdk.api.KsScene r7 = r7.build()
            java.lang.String r8 = r5.d
            java.lang.String r0 = "1"
            boolean r8 = android.text.TextUtils.equals(r0, r8)
            if (r8 == 0) goto L87
            com.kwad.sdk.api.KsLoadManager r8 = com.kwad.sdk.api.KsAdSDK.getLoadManager()
            com.tkay.network.ks.KSTYAdapter$2 r0 = new com.tkay.network.ks.KSTYAdapter$2
            r0.<init>(r5, r6)
            r8.loadDrawAd(r7, r0)
            return
        L87:
            java.lang.String r8 = r5.b
            boolean r8 = android.text.TextUtils.equals(r0, r8)
            if (r8 == 0) goto L9c
            com.kwad.sdk.api.KsLoadManager r8 = com.kwad.sdk.api.KsAdSDK.getLoadManager()
            com.tkay.network.ks.KSTYAdapter$3 r0 = new com.tkay.network.ks.KSTYAdapter$3
            r0.<init>(r5, r6)
            r8.loadConfigFeedAd(r7, r0)
            return
        L9c:
            com.kwad.sdk.api.KsLoadManager r8 = com.kwad.sdk.api.KsAdSDK.getLoadManager()
            com.tkay.network.ks.KSTYAdapter$4 r0 = new com.tkay.network.ks.KSTYAdapter$4
            r0.<init>(r5, r6)
            r8.loadNativeAd(r7, r0)
            return
    }

    static void a(com.tkay.network.ks.KSTYAdapter r5, android.content.Context r6, java.util.Map r7, int r8) {
            java.lang.String r0 = "key_width"
            boolean r1 = r7.containsKey(r0)
            r2 = 0
            if (r1 == 0) goto Le
            java.lang.Object r0 = r7.get(r0)
            goto Lf
        Le:
            r0 = r2
        Lf:
            java.lang.String r1 = "key_height"
            boolean r3 = r7.containsKey(r1)
            if (r3 == 0) goto L1b
            java.lang.Object r2 = r7.get(r1)
        L1b:
            com.kwad.sdk.api.KsScene$Builder r7 = new com.kwad.sdk.api.KsScene$Builder
            long r3 = r5.a
            r7.<init>(r3)
            boolean r1 = r5.g
            r3 = 1
            if (r1 == 0) goto L29
            r8 = r3
            goto L2e
        L29:
            r1 = 5
            int r8 = java.lang.Math.min(r8, r1)
        L2e:
            com.kwad.sdk.api.KsScene$Builder r7 = r7.adNum(r8)
            if (r0 == 0) goto L47
            java.lang.String r8 = r0.toString()     // Catch: java.lang.Throwable -> L43
            double r0 = java.lang.Double.parseDouble(r8)     // Catch: java.lang.Throwable -> L43
            int r8 = (int) r0     // Catch: java.lang.Throwable -> L43
            if (r8 <= 0) goto L47
            r7.width(r8)     // Catch: java.lang.Throwable -> L43
            goto L47
        L43:
            r8 = move-exception
            r8.printStackTrace()
        L47:
            if (r2 == 0) goto L5c
            java.lang.String r8 = r2.toString()     // Catch: java.lang.Throwable -> L58
            double r0 = java.lang.Double.parseDouble(r8)     // Catch: java.lang.Throwable -> L58
            int r8 = (int) r0     // Catch: java.lang.Throwable -> L58
            if (r8 <= 0) goto L5c
            r7.height(r8)     // Catch: java.lang.Throwable -> L58
            goto L5c
        L58:
            r8 = move-exception
            r8.printStackTrace()
        L5c:
            java.lang.String r8 = r5.e
            boolean r8 = android.text.TextUtils.isEmpty(r8)
            if (r8 != 0) goto L6c
            java.lang.String r8 = r5.e
            r7.setBidResponseV2(r8)
            r7.adNum(r3)
        L6c:
            com.kwad.sdk.api.KsScene r7 = r7.build()
            java.lang.String r8 = r5.d
            java.lang.String r0 = "1"
            boolean r8 = android.text.TextUtils.equals(r0, r8)
            if (r8 == 0) goto L87
            com.kwad.sdk.api.KsLoadManager r8 = com.kwad.sdk.api.KsAdSDK.getLoadManager()
            com.tkay.network.ks.KSTYAdapter$2 r0 = new com.tkay.network.ks.KSTYAdapter$2
            r0.<init>(r5, r6)
            r8.loadDrawAd(r7, r0)
            return
        L87:
            java.lang.String r8 = r5.b
            boolean r8 = android.text.TextUtils.equals(r0, r8)
            if (r8 == 0) goto L9c
            com.kwad.sdk.api.KsLoadManager r8 = com.kwad.sdk.api.KsAdSDK.getLoadManager()
            com.tkay.network.ks.KSTYAdapter$3 r0 = new com.tkay.network.ks.KSTYAdapter$3
            r0.<init>(r5, r6)
            r8.loadConfigFeedAd(r7, r0)
            return
        L9c:
            com.kwad.sdk.api.KsLoadManager r8 = com.kwad.sdk.api.KsAdSDK.getLoadManager()
            com.tkay.network.ks.KSTYAdapter$4 r0 = new com.tkay.network.ks.KSTYAdapter$4
            r0.<init>(r5, r6)
            r8.loadNativeAd(r7, r0)
            return
    }

    private boolean a(java.util.Map<java.lang.String, java.lang.Object> r4) {
            r3 = this;
            java.lang.String r0 = "app_id"
            java.lang.String r0 = com.tkay.core.api.TYInitMediation.getStringFromMap(r4, r0)
            java.lang.String r1 = "position_id"
            java.lang.String r1 = com.tkay.core.api.TYInitMediation.getStringFromMap(r4, r1)
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L67
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L19
            goto L67
        L19:
            long r0 = java.lang.Long.parseLong(r1)     // Catch: java.lang.NumberFormatException -> L1f
            r3.a = r0     // Catch: java.lang.NumberFormatException -> L1f
        L1f:
            java.lang.String r0 = "0"
            java.lang.String r1 = "layout_type"
            java.lang.String r1 = com.tkay.core.api.TYInitMediation.getStringFromMap(r4, r1, r0)
            r3.b = r1
            java.lang.String r1 = "video_sound"
            boolean r2 = r4.containsKey(r1)
            if (r2 == 0) goto L3d
            java.lang.String r1 = com.tkay.core.api.TYInitMediation.getStringFromMap(r4, r1)
            java.lang.String r2 = "1"
            boolean r1 = android.text.TextUtils.equals(r2, r1)
            r3.c = r1
        L3d:
            java.lang.String r1 = "unit_type"
            java.lang.String r0 = com.tkay.core.api.TYInitMediation.getStringFromMap(r4, r1, r0)
            r3.d = r0
            java.lang.String r0 = "tkay_gsp"
            double r0 = com.tkay.core.api.TYInitMediation.getDoubleFromMap(r4, r0)
            r3.h = r0
            java.lang.String r0 = "payload"
            boolean r1 = r4.containsKey(r0)
            if (r1 == 0) goto L65
            java.lang.String r4 = com.tkay.core.api.TYInitMediation.getStringFromMap(r4, r0)
            com.tkay.network.ks.KSTYInitManager r0 = com.tkay.network.ks.KSTYInitManager.getInstance()
            double r1 = r3.h
            java.lang.String r4 = r0.getPayloadInfo(r4, r1)
            r3.e = r4
        L65:
            r4 = 1
            return r4
        L67:
            r4 = 0
            return r4
    }

    static com.tkay.core.api.TYCustomLoadListener b(com.tkay.network.ks.KSTYAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener c(com.tkay.network.ks.KSTYAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener d(com.tkay.network.ks.KSTYAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener e(com.tkay.network.ks.KSTYAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener f(com.tkay.network.ks.KSTYAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener g(com.tkay.network.ks.KSTYAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    @Override
    public void destory() {
            r0 = this;
            return
    }

    @Override
    public void getBidRequestInfo(android.content.Context r3, java.util.Map<java.lang.String, java.lang.Object> r4, java.util.Map<java.lang.String, java.lang.Object> r5, com.tkay.core.api.TYBidRequestInfoListener r6) {
            r2 = this;
            java.lang.String r0 = "position_id"
            long r0 = com.tkay.core.api.TYInitMediation.getLongFromMap(r4, r0)
            r2.a = r0
            com.tkay.network.ks.KSTYInitManager r0 = com.tkay.network.ks.KSTYInitManager.getInstance()
            r0.a(r3, r4, r5, r6)
            return
    }

    @Override
    public java.lang.String getNetworkName() {
            r1 = this;
            com.tkay.network.ks.KSTYInitManager r0 = com.tkay.network.ks.KSTYInitManager.getInstance()
            java.lang.String r0 = r0.getNetworkName()
            return r0
    }

    @Override
    public java.lang.String getNetworkPlacementId() {
            r2 = this;
            long r0 = r2.a     // Catch: java.lang.Exception -> L7
            java.lang.String r0 = java.lang.String.valueOf(r0)     // Catch: java.lang.Exception -> L7
            return r0
        L7:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.String r0 = ""
            return r0
    }

    @Override
    public java.lang.String getNetworkSDKVersion() {
            r1 = this;
            com.tkay.network.ks.KSTYInitManager r0 = com.tkay.network.ks.KSTYInitManager.getInstance()
            java.lang.String r0 = r0.getNetworkVersion()
            return r0
    }

    @Override
    public void loadCustomNetworkAd(android.content.Context r3, java.util.Map<java.lang.String, java.lang.Object> r4, java.util.Map<java.lang.String, java.lang.Object> r5) {
            r2 = this;
            boolean r0 = r2.a(r4)
            if (r0 != 0) goto Le
            java.lang.String r3 = ""
            java.lang.String r4 = "kuaishou app_id or position_id is empty."
            r2.notifyATLoadFail(r3, r4)
            return
        Le:
            android.content.Context r0 = r3.getApplicationContext()
            r2.f = r0
            com.tkay.network.ks.KSTYInitManager r0 = com.tkay.network.ks.KSTYInitManager.getInstance()
            com.tkay.network.ks.KSTYAdapter$1 r1 = new com.tkay.network.ks.KSTYAdapter$1
            r1.<init>(r2, r5)
            r0.initSDK(r3, r4, r1)
            return
    }

    @Override
    public boolean startBiddingRequest(android.content.Context r1, java.util.Map<java.lang.String, java.lang.Object> r2, java.util.Map<java.lang.String, java.lang.Object> r3, com.tkay.core.api.TYBiddingListener r4) {
            r0 = this;
            r4 = 1
            r0.g = r4
            r0.loadCustomNetworkAd(r1, r2, r3)
            return r4
    }
}
