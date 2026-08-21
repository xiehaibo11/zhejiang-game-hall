package com.tkay.network.gdt;

public class GDTTYAdapter extends com.tkay.nativead.unitgroup.api.CustomNativeAdapter {
    java.lang.String a;
    java.lang.String b;
    int c;
    java.lang.String d;
    int e;
    int f;
    int g;
    int h;
    boolean i;
    private int j;
    private int k;

    final class 1 implements com.tkay.network.gdt.a {
        final com.tkay.network.gdt.GDTTYAdapter a;

        1(com.tkay.network.gdt.GDTTYAdapter r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void notifyError(java.lang.String r2, java.lang.String r3) {
                r1 = this;
                com.tkay.network.gdt.GDTTYAdapter r0 = r1.a
                r0.notifyATLoadFail(r2, r3)
                return
        }

        @Override
        public final void notifyLoaded(com.tkay.nativead.unitgroup.api.CustomNativeAd... r8) {
                r7 = this;
                com.tkay.network.gdt.GDTTYAdapter r0 = r7.a
                boolean r0 = r0.i
                if (r0 == 0) goto L41
                r0 = 0
                r1 = r8[r0]
                boolean r1 = r1 instanceof com.tkay.network.gdt.GDTTYNativeExpressAd
                if (r1 == 0) goto L41
                r8 = r8[r0]
                com.tkay.network.gdt.GDTTYNativeExpressAd r8 = (com.tkay.network.gdt.GDTTYNativeExpressAd) r8
                com.tkay.network.gdt.GDTTYAdapter r0 = r7.a
                com.tkay.core.api.TYBiddingListener r0 = r0.mBiddingListener
                if (r0 == 0) goto L40
                com.qq.e.ads.nativ.NativeExpressADView r0 = r8.b
                int r0 = r0.getECPM()
                double r0 = (double) r0
                com.tkay.network.gdt.GDTTYBiddingNotice r2 = new com.tkay.network.gdt.GDTTYBiddingNotice
                r2.<init>(r8)
                com.tkay.network.gdt.GDTTYAdapter r3 = r7.a
                com.tkay.core.api.TYBiddingListener r3 = r3.mBiddingListener
                java.lang.StringBuilder r4 = new java.lang.StringBuilder
                r4.<init>()
                long r5 = java.lang.System.currentTimeMillis()
                r4.append(r5)
                java.lang.String r4 = r4.toString()
                com.tkay.core.api.TYAdConst$CURRENCY r5 = com.tkay.core.api.TYAdConst.CURRENCY.RMB_CENT
                com.tkay.core.api.TYBiddingResult r0 = com.tkay.core.api.TYBiddingResult.success(r0, r4, r2, r5)
                r3.onC2SBiddingResultWithCache(r0, r8)
            L40:
                return
            L41:
                com.tkay.network.gdt.GDTTYAdapter r0 = r7.a
                com.tkay.core.api.TYCustomLoadListener r0 = com.tkay.network.gdt.GDTTYAdapter.a(r0)
                if (r0 == 0) goto L52
                com.tkay.network.gdt.GDTTYAdapter r0 = r7.a
                com.tkay.core.api.TYCustomLoadListener r0 = com.tkay.network.gdt.GDTTYAdapter.b(r0)
                r0.onAdCacheLoaded(r8)
            L52:
                return
        }
    }

    final class 2 implements com.qq.e.ads.nativ.NativeADUnifiedListener {
        final android.content.Context a;
        final com.tkay.network.gdt.GDTTYAdapter b;

        2(com.tkay.network.gdt.GDTTYAdapter r1, android.content.Context r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public final void onADLoaded(java.util.List<com.qq.e.ads.nativ.NativeUnifiedADData> r12) {
                r11 = this;
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                if (r12 == 0) goto Ldf
                int r1 = r12.size()
                if (r1 <= 0) goto Ldf
                java.util.Iterator r12 = r12.iterator()
                r1 = 0
                r2 = r1
            L13:
                boolean r3 = r12.hasNext()
                r4 = 4
                if (r3 == 0) goto L57
                java.lang.Object r3 = r12.next()
                r7 = r3
                com.qq.e.ads.nativ.NativeUnifiedADData r7 = (com.qq.e.ads.nativ.NativeUnifiedADData) r7
                com.tkay.network.gdt.GDTTYAdapter r3 = r11.b
                int r3 = r3.e
                if (r3 != r4) goto L3f
                com.tkay.network.gdt.GDTTYNativePatchAd r1 = new com.tkay.network.gdt.GDTTYNativePatchAd
                android.content.Context r6 = r11.a
                com.tkay.network.gdt.GDTTYAdapter r3 = r11.b
                int r8 = r3.f
                com.tkay.network.gdt.GDTTYAdapter r3 = r11.b
                int r9 = r3.g
                com.tkay.network.gdt.GDTTYAdapter r3 = r11.b
                int r10 = r3.h
                r5 = r1
                r5.<init>(r6, r7, r8, r9, r10)
                r0.add(r1)
                goto L13
            L3f:
                com.tkay.network.gdt.GDTTYNativeAd r2 = new com.tkay.network.gdt.GDTTYNativeAd
                android.content.Context r6 = r11.a
                com.tkay.network.gdt.GDTTYAdapter r3 = r11.b
                int r8 = r3.f
                com.tkay.network.gdt.GDTTYAdapter r3 = r11.b
                int r9 = r3.g
                com.tkay.network.gdt.GDTTYAdapter r3 = r11.b
                int r10 = r3.h
                r5 = r2
                r5.<init>(r6, r7, r8, r9, r10)
                r0.add(r2)
                goto L13
            L57:
                int r12 = r0.size()
                com.tkay.nativead.unitgroup.api.CustomNativeAd[] r12 = new com.tkay.nativead.unitgroup.api.CustomNativeAd[r12]
                java.lang.Object[] r12 = r0.toArray(r12)
                com.tkay.nativead.unitgroup.api.CustomNativeAd[] r12 = (com.tkay.nativead.unitgroup.api.CustomNativeAd[]) r12
                com.tkay.network.gdt.GDTTYAdapter r0 = r11.b
                boolean r0 = r0.i
                if (r0 == 0) goto Lcd
                com.tkay.network.gdt.GDTTYAdapter r12 = r11.b
                com.tkay.core.api.TYBiddingListener r12 = r12.mBiddingListener
                if (r12 == 0) goto Lcc
                com.tkay.network.gdt.GDTTYAdapter r12 = r11.b
                int r12 = r12.e
                if (r12 != r4) goto La1
                if (r1 == 0) goto La1
                com.qq.e.ads.nativ.NativeUnifiedADData r12 = r1.c
                int r12 = r12.getECPM()
                double r2 = (double) r12
                com.tkay.network.gdt.GDTTYBiddingNotice r12 = new com.tkay.network.gdt.GDTTYBiddingNotice
                r12.<init>(r1)
                com.tkay.network.gdt.GDTTYAdapter r0 = r11.b
                com.tkay.core.api.TYBiddingListener r0 = r0.mBiddingListener
                java.lang.StringBuilder r4 = new java.lang.StringBuilder
                r4.<init>()
                long r5 = java.lang.System.currentTimeMillis()
                r4.append(r5)
                java.lang.String r4 = r4.toString()
                com.tkay.core.api.TYAdConst$CURRENCY r5 = com.tkay.core.api.TYAdConst.CURRENCY.RMB_CENT
                com.tkay.core.api.TYBiddingResult r12 = com.tkay.core.api.TYBiddingResult.success(r2, r4, r12, r5)
                r0.onC2SBiddingResultWithCache(r12, r1)
                return
            La1:
                if (r2 == 0) goto Lcc
                com.qq.e.ads.nativ.NativeUnifiedADData r12 = r2.c
                int r12 = r12.getECPM()
                double r0 = (double) r12
                com.tkay.network.gdt.GDTTYBiddingNotice r12 = new com.tkay.network.gdt.GDTTYBiddingNotice
                r12.<init>(r2)
                com.tkay.network.gdt.GDTTYAdapter r3 = r11.b
                com.tkay.core.api.TYBiddingListener r3 = r3.mBiddingListener
                java.lang.StringBuilder r4 = new java.lang.StringBuilder
                r4.<init>()
                long r5 = java.lang.System.currentTimeMillis()
                r4.append(r5)
                java.lang.String r4 = r4.toString()
                com.tkay.core.api.TYAdConst$CURRENCY r5 = com.tkay.core.api.TYAdConst.CURRENCY.RMB_CENT
                com.tkay.core.api.TYBiddingResult r12 = com.tkay.core.api.TYBiddingResult.success(r0, r4, r12, r5)
                r3.onC2SBiddingResultWithCache(r12, r2)
            Lcc:
                return
            Lcd:
                com.tkay.network.gdt.GDTTYAdapter r0 = r11.b
                com.tkay.core.api.TYCustomLoadListener r0 = com.tkay.network.gdt.GDTTYAdapter.c(r0)
                if (r0 == 0) goto Lde
                com.tkay.network.gdt.GDTTYAdapter r0 = r11.b
                com.tkay.core.api.TYCustomLoadListener r0 = com.tkay.network.gdt.GDTTYAdapter.d(r0)
                r0.onAdCacheLoaded(r12)
            Lde:
                return
            Ldf:
                com.tkay.network.gdt.GDTTYAdapter r12 = r11.b
                java.lang.String r0 = ""
                java.lang.String r1 = "Ad list is empty"
                r12.notifyATLoadFail(r0, r1)
                return
        }

        @Override
        public final void onNoAD(com.qq.e.comm.util.AdError r4) {
                r3 = this;
                com.tkay.network.gdt.GDTTYAdapter r0 = r3.b
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                int r2 = r4.getErrorCode()
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                java.lang.String r4 = r4.getErrorMsg()
                r0.notifyATLoadFail(r1, r4)
                return
        }
    }


    public GDTTYAdapter() {
            r1 = this;
            r1.<init>()
            r0 = -1
            r1.j = r0
            r0 = -2
            r1.k = r0
            r0 = 0
            r1.i = r0
            return
    }

    static com.tkay.core.api.TYCustomLoadListener a(com.tkay.network.gdt.GDTTYAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    private void a(android.content.Context r13, java.util.Map<java.lang.String, java.lang.Object> r14) {
            r12 = this;
            int r0 = r12.e     // Catch: java.lang.Throwable -> L99
            r1 = 2
            if (r0 == r1) goto L52
            r1 = 4
            if (r0 == r1) goto L52
            com.tkay.network.gdt.GDTTYAdapter$1 r0 = new com.tkay.network.gdt.GDTTYAdapter$1     // Catch: java.lang.Throwable -> L99
            r0.<init>(r12)     // Catch: java.lang.Throwable -> L99
            int r1 = r12.e     // Catch: java.lang.Throwable -> L99
            r2 = 3
            if (r1 != r2) goto L32
            com.tkay.network.gdt.GDTTYNativeExpressPatchAd r1 = new com.tkay.network.gdt.GDTTYNativeExpressPatchAd     // Catch: java.lang.Throwable -> L99
            java.lang.String r5 = r12.b     // Catch: java.lang.Throwable -> L99
            int r6 = r12.j     // Catch: java.lang.Throwable -> L99
            int r7 = r12.k     // Catch: java.lang.Throwable -> L99
            int r8 = r12.f     // Catch: java.lang.Throwable -> L99
            int r9 = r12.g     // Catch: java.lang.Throwable -> L99
            int r10 = r12.h     // Catch: java.lang.Throwable -> L99
            java.lang.String r11 = r12.d     // Catch: java.lang.Throwable -> L99
            r3 = r1
            r4 = r13
            r3.<init>(r4, r5, r6, r7, r8, r9, r10, r11)     // Catch: java.lang.Throwable -> L99
            com.tkay.network.gdt.GDTTYInitManager.getInstance()     // Catch: java.lang.Throwable -> L99
            com.qq.e.comm.constants.LoadAdParams r13 = com.tkay.network.gdt.GDTTYInitManager.a(r14)     // Catch: java.lang.Throwable -> L99
            r1.a(r0, r13)     // Catch: java.lang.Throwable -> L99
            return
        L32:
            com.tkay.network.gdt.GDTTYNativeExpressAd r10 = new com.tkay.network.gdt.GDTTYNativeExpressAd     // Catch: java.lang.Throwable -> L99
            java.lang.String r3 = r12.b     // Catch: java.lang.Throwable -> L99
            int r4 = r12.j     // Catch: java.lang.Throwable -> L99
            int r5 = r12.k     // Catch: java.lang.Throwable -> L99
            int r6 = r12.f     // Catch: java.lang.Throwable -> L99
            int r7 = r12.g     // Catch: java.lang.Throwable -> L99
            int r8 = r12.h     // Catch: java.lang.Throwable -> L99
            java.lang.String r9 = r12.d     // Catch: java.lang.Throwable -> L99
            r1 = r10
            r2 = r13
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L99
            com.tkay.network.gdt.GDTTYInitManager.getInstance()     // Catch: java.lang.Throwable -> L99
            com.qq.e.comm.constants.LoadAdParams r13 = com.tkay.network.gdt.GDTTYInitManager.a(r14)     // Catch: java.lang.Throwable -> L99
            r10.a(r0, r13)     // Catch: java.lang.Throwable -> L99
            return
        L52:
            android.content.Context r13 = r13.getApplicationContext()     // Catch: java.lang.Throwable -> L99
            com.tkay.network.gdt.GDTTYAdapter$2 r0 = new com.tkay.network.gdt.GDTTYAdapter$2     // Catch: java.lang.Throwable -> L99
            r0.<init>(r12, r13)     // Catch: java.lang.Throwable -> L99
            java.lang.String r1 = r12.d     // Catch: java.lang.Throwable -> L99
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L99
            if (r1 == 0) goto L6b
            com.qq.e.ads.nativ.NativeUnifiedAD r1 = new com.qq.e.ads.nativ.NativeUnifiedAD     // Catch: java.lang.Throwable -> L99
            java.lang.String r2 = r12.b     // Catch: java.lang.Throwable -> L99
            r1.<init>(r13, r2, r0)     // Catch: java.lang.Throwable -> L99
            goto L74
        L6b:
            com.qq.e.ads.nativ.NativeUnifiedAD r1 = new com.qq.e.ads.nativ.NativeUnifiedAD     // Catch: java.lang.Throwable -> L99
            java.lang.String r2 = r12.b     // Catch: java.lang.Throwable -> L99
            java.lang.String r3 = r12.d     // Catch: java.lang.Throwable -> L99
            r1.<init>(r13, r2, r0, r3)     // Catch: java.lang.Throwable -> L99
        L74:
            int r13 = r12.h     // Catch: java.lang.Throwable -> L99
            r0 = -1
            if (r13 == r0) goto L7e
            int r13 = r12.h     // Catch: java.lang.Throwable -> L99
            r1.setMaxVideoDuration(r13)     // Catch: java.lang.Throwable -> L99
        L7e:
            java.lang.String r13 = r12.d     // Catch: java.lang.Throwable -> L99
            boolean r13 = android.text.TextUtils.isEmpty(r13)     // Catch: java.lang.Throwable -> L99
            if (r13 == 0) goto L93
            int r13 = r12.c     // Catch: java.lang.Throwable -> L99
            com.tkay.network.gdt.GDTTYInitManager.getInstance()     // Catch: java.lang.Throwable -> L99
            com.qq.e.comm.constants.LoadAdParams r14 = com.tkay.network.gdt.GDTTYInitManager.a(r14)     // Catch: java.lang.Throwable -> L99
            r1.loadData(r13, r14)     // Catch: java.lang.Throwable -> L99
            return
        L93:
            int r13 = r12.c     // Catch: java.lang.Throwable -> L99
            r1.loadData(r13)     // Catch: java.lang.Throwable -> L99
            return
        L99:
            r13 = move-exception
            java.lang.String r13 = r13.getMessage()
            java.lang.String r14 = ""
            r12.notifyATLoadFail(r14, r13)
            return
    }

    static void a(com.tkay.network.gdt.GDTTYAdapter r12, android.content.Context r13, java.util.Map r14) {
            int r0 = r12.e     // Catch: java.lang.Throwable -> L99
            r1 = 2
            if (r0 == r1) goto L52
            r1 = 4
            if (r0 == r1) goto L52
            com.tkay.network.gdt.GDTTYAdapter$1 r0 = new com.tkay.network.gdt.GDTTYAdapter$1     // Catch: java.lang.Throwable -> L99
            r0.<init>(r12)     // Catch: java.lang.Throwable -> L99
            int r1 = r12.e     // Catch: java.lang.Throwable -> L99
            r2 = 3
            if (r1 != r2) goto L32
            com.tkay.network.gdt.GDTTYNativeExpressPatchAd r1 = new com.tkay.network.gdt.GDTTYNativeExpressPatchAd     // Catch: java.lang.Throwable -> L99
            java.lang.String r5 = r12.b     // Catch: java.lang.Throwable -> L99
            int r6 = r12.j     // Catch: java.lang.Throwable -> L99
            int r7 = r12.k     // Catch: java.lang.Throwable -> L99
            int r8 = r12.f     // Catch: java.lang.Throwable -> L99
            int r9 = r12.g     // Catch: java.lang.Throwable -> L99
            int r10 = r12.h     // Catch: java.lang.Throwable -> L99
            java.lang.String r11 = r12.d     // Catch: java.lang.Throwable -> L99
            r3 = r1
            r4 = r13
            r3.<init>(r4, r5, r6, r7, r8, r9, r10, r11)     // Catch: java.lang.Throwable -> L99
            com.tkay.network.gdt.GDTTYInitManager.getInstance()     // Catch: java.lang.Throwable -> L99
            com.qq.e.comm.constants.LoadAdParams r13 = com.tkay.network.gdt.GDTTYInitManager.a(r14)     // Catch: java.lang.Throwable -> L99
            r1.a(r0, r13)     // Catch: java.lang.Throwable -> L99
            return
        L32:
            com.tkay.network.gdt.GDTTYNativeExpressAd r10 = new com.tkay.network.gdt.GDTTYNativeExpressAd     // Catch: java.lang.Throwable -> L99
            java.lang.String r3 = r12.b     // Catch: java.lang.Throwable -> L99
            int r4 = r12.j     // Catch: java.lang.Throwable -> L99
            int r5 = r12.k     // Catch: java.lang.Throwable -> L99
            int r6 = r12.f     // Catch: java.lang.Throwable -> L99
            int r7 = r12.g     // Catch: java.lang.Throwable -> L99
            int r8 = r12.h     // Catch: java.lang.Throwable -> L99
            java.lang.String r9 = r12.d     // Catch: java.lang.Throwable -> L99
            r1 = r10
            r2 = r13
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L99
            com.tkay.network.gdt.GDTTYInitManager.getInstance()     // Catch: java.lang.Throwable -> L99
            com.qq.e.comm.constants.LoadAdParams r13 = com.tkay.network.gdt.GDTTYInitManager.a(r14)     // Catch: java.lang.Throwable -> L99
            r10.a(r0, r13)     // Catch: java.lang.Throwable -> L99
            return
        L52:
            android.content.Context r13 = r13.getApplicationContext()     // Catch: java.lang.Throwable -> L99
            com.tkay.network.gdt.GDTTYAdapter$2 r0 = new com.tkay.network.gdt.GDTTYAdapter$2     // Catch: java.lang.Throwable -> L99
            r0.<init>(r12, r13)     // Catch: java.lang.Throwable -> L99
            java.lang.String r1 = r12.d     // Catch: java.lang.Throwable -> L99
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L99
            if (r1 == 0) goto L6b
            com.qq.e.ads.nativ.NativeUnifiedAD r1 = new com.qq.e.ads.nativ.NativeUnifiedAD     // Catch: java.lang.Throwable -> L99
            java.lang.String r2 = r12.b     // Catch: java.lang.Throwable -> L99
            r1.<init>(r13, r2, r0)     // Catch: java.lang.Throwable -> L99
            goto L74
        L6b:
            com.qq.e.ads.nativ.NativeUnifiedAD r1 = new com.qq.e.ads.nativ.NativeUnifiedAD     // Catch: java.lang.Throwable -> L99
            java.lang.String r2 = r12.b     // Catch: java.lang.Throwable -> L99
            java.lang.String r3 = r12.d     // Catch: java.lang.Throwable -> L99
            r1.<init>(r13, r2, r0, r3)     // Catch: java.lang.Throwable -> L99
        L74:
            int r13 = r12.h     // Catch: java.lang.Throwable -> L99
            r0 = -1
            if (r13 == r0) goto L7e
            int r13 = r12.h     // Catch: java.lang.Throwable -> L99
            r1.setMaxVideoDuration(r13)     // Catch: java.lang.Throwable -> L99
        L7e:
            java.lang.String r13 = r12.d     // Catch: java.lang.Throwable -> L99
            boolean r13 = android.text.TextUtils.isEmpty(r13)     // Catch: java.lang.Throwable -> L99
            if (r13 == 0) goto L93
            int r13 = r12.c     // Catch: java.lang.Throwable -> L99
            com.tkay.network.gdt.GDTTYInitManager.getInstance()     // Catch: java.lang.Throwable -> L99
            com.qq.e.comm.constants.LoadAdParams r14 = com.tkay.network.gdt.GDTTYInitManager.a(r14)     // Catch: java.lang.Throwable -> L99
            r1.loadData(r13, r14)     // Catch: java.lang.Throwable -> L99
            return
        L93:
            int r13 = r12.c     // Catch: java.lang.Throwable -> L99
            r1.loadData(r13)     // Catch: java.lang.Throwable -> L99
            return
        L99:
            r13 = move-exception
            java.lang.String r13 = r13.getMessage()
            java.lang.String r14 = ""
            r12.notifyATLoadFail(r14, r13)
            return
    }

    private void a(java.util.Map<java.lang.String, java.lang.Object> r7, java.util.Map<java.lang.String, java.lang.Object> r8) {
            r6 = this;
            java.lang.String r0 = "key_height"
            java.lang.String r1 = "gdtad_height"
            java.lang.String r2 = "app_id"
            java.lang.String r2 = com.tkay.core.api.TYInitMediation.getStringFromMap(r7, r2)
            r6.a = r2
            java.lang.String r2 = "unit_id"
            java.lang.String r2 = com.tkay.core.api.TYInitMediation.getStringFromMap(r7, r2)
            r6.b = r2
            java.lang.String r2 = "unit_type"
            int r2 = com.tkay.core.api.TYInitMediation.getIntFromMap(r7, r2)
            r6.e = r2
            java.lang.String r2 = "payload"
            java.lang.String r2 = com.tkay.core.api.TYInitMediation.getStringFromMap(r7, r2)
            r6.d = r2
            boolean r2 = r6.i
            r3 = 1
            if (r2 == 0) goto L2b
            r2 = r3
            goto L2d
        L2b:
            int r2 = r6.mRequestNum
        L2d:
            r6.c = r2
            r2 = -1
            java.lang.String r4 = "key_width"
            int r4 = com.tkay.core.api.TYInitMediation.getIntFromMap(r8, r4, r2)     // Catch: java.lang.Exception -> L53
            r6.j = r4     // Catch: java.lang.Exception -> L53
            boolean r4 = r8.containsKey(r1)     // Catch: java.lang.Exception -> L53
            r5 = -2
            if (r4 == 0) goto L46
            int r8 = com.tkay.core.api.TYInitMediation.getIntFromMap(r8, r1, r5)     // Catch: java.lang.Exception -> L53
            r6.k = r8     // Catch: java.lang.Exception -> L53
            goto L57
        L46:
            boolean r1 = r8.containsKey(r0)     // Catch: java.lang.Exception -> L53
            if (r1 == 0) goto L57
            int r8 = com.tkay.core.api.TYInitMediation.getIntFromMap(r8, r0, r5)     // Catch: java.lang.Exception -> L53
            r6.k = r8     // Catch: java.lang.Exception -> L53
            goto L57
        L53:
            r8 = move-exception
            r8.printStackTrace()
        L57:
            r8 = 0
            java.lang.String r0 = "video_muted"
            int r8 = com.tkay.core.api.TYInitMediation.getIntFromMap(r7, r0, r8)
            java.lang.String r0 = "video_autoplay"
            int r0 = com.tkay.core.api.TYInitMediation.getIntFromMap(r7, r0, r3)
            java.lang.String r1 = "video_duration"
            int r7 = com.tkay.core.api.TYInitMediation.getIntFromMap(r7, r1, r2)
            r6.f = r8
            r6.g = r0
            r6.h = r7
            return
    }

    static com.tkay.core.api.TYCustomLoadListener b(com.tkay.network.gdt.GDTTYAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    private void b(android.content.Context r5, java.util.Map<java.lang.String, java.lang.Object> r6) {
            r4 = this;
            com.tkay.network.gdt.GDTTYAdapter$2 r0 = new com.tkay.network.gdt.GDTTYAdapter$2
            r0.<init>(r4, r5)
            java.lang.String r1 = r4.d
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L15
            com.qq.e.ads.nativ.NativeUnifiedAD r1 = new com.qq.e.ads.nativ.NativeUnifiedAD
            java.lang.String r2 = r4.b
            r1.<init>(r5, r2, r0)
            goto L1e
        L15:
            com.qq.e.ads.nativ.NativeUnifiedAD r1 = new com.qq.e.ads.nativ.NativeUnifiedAD
            java.lang.String r2 = r4.b
            java.lang.String r3 = r4.d
            r1.<init>(r5, r2, r0, r3)
        L1e:
            int r5 = r4.h
            r0 = -1
            if (r5 == r0) goto L26
            r1.setMaxVideoDuration(r5)
        L26:
            java.lang.String r5 = r4.d
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 == 0) goto L3b
            int r5 = r4.c
            com.tkay.network.gdt.GDTTYInitManager.getInstance()
            com.qq.e.comm.constants.LoadAdParams r6 = com.tkay.network.gdt.GDTTYInitManager.a(r6)
            r1.loadData(r5, r6)
            return
        L3b:
            int r5 = r4.c
            r1.loadData(r5)
            return
    }

    static com.tkay.core.api.TYCustomLoadListener c(com.tkay.network.gdt.GDTTYAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener d(com.tkay.network.gdt.GDTTYAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    @Override
    public void destory() {
            r0 = this;
            return
    }

    @Override
    public void getBidRequestInfo(android.content.Context r2, java.util.Map<java.lang.String, java.lang.Object> r3, java.util.Map<java.lang.String, java.lang.Object> r4, com.tkay.core.api.TYBidRequestInfoListener r5) {
            r1 = this;
            java.lang.String r0 = "unit_id"
            java.lang.String r0 = com.tkay.core.api.TYInitMediation.getStringFromMap(r3, r0)
            r1.b = r0
            com.tkay.network.gdt.GDTTYInitManager r0 = com.tkay.network.gdt.GDTTYInitManager.getInstance()
            r0.a(r2, r3, r4, r5)
            return
    }

    @Override
    public com.tkay.core.api.TYInitMediation getMediationInitManager() {
            r1 = this;
            com.tkay.network.gdt.GDTTYInitManager r0 = com.tkay.network.gdt.GDTTYInitManager.getInstance()
            return r0
    }

    @Override
    public java.lang.String getNetworkName() {
            r1 = this;
            com.tkay.network.gdt.GDTTYInitManager r0 = com.tkay.network.gdt.GDTTYInitManager.getInstance()
            java.lang.String r0 = r0.getNetworkName()
            return r0
    }

    @Override
    public java.lang.String getNetworkPlacementId() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    @Override
    public java.lang.String getNetworkSDKVersion() {
            r1 = this;
            com.tkay.network.gdt.GDTTYInitManager r0 = com.tkay.network.gdt.GDTTYInitManager.getInstance()
            java.lang.String r0 = r0.getNetworkVersion()
            return r0
    }

    @Override
    public void loadCustomNetworkAd(android.content.Context r7, java.util.Map<java.lang.String, java.lang.Object> r8, java.util.Map<java.lang.String, java.lang.Object> r9) {
            r6 = this;
            java.lang.String r0 = "key_height"
            java.lang.String r1 = "gdtad_height"
            java.lang.String r2 = "app_id"
            java.lang.String r2 = com.tkay.core.api.TYInitMediation.getStringFromMap(r8, r2)
            r6.a = r2
            java.lang.String r2 = "unit_id"
            java.lang.String r2 = com.tkay.core.api.TYInitMediation.getStringFromMap(r8, r2)
            r6.b = r2
            java.lang.String r2 = "unit_type"
            int r2 = com.tkay.core.api.TYInitMediation.getIntFromMap(r8, r2)
            r6.e = r2
            java.lang.String r2 = "payload"
            java.lang.String r2 = com.tkay.core.api.TYInitMediation.getStringFromMap(r8, r2)
            r6.d = r2
            boolean r2 = r6.i
            r3 = 1
            if (r2 == 0) goto L2b
            r2 = r3
            goto L2d
        L2b:
            int r2 = r6.mRequestNum
        L2d:
            r6.c = r2
            r2 = -1
            java.lang.String r4 = "key_width"
            int r4 = com.tkay.core.api.TYInitMediation.getIntFromMap(r9, r4, r2)     // Catch: java.lang.Exception -> L53
            r6.j = r4     // Catch: java.lang.Exception -> L53
            boolean r4 = r9.containsKey(r1)     // Catch: java.lang.Exception -> L53
            r5 = -2
            if (r4 == 0) goto L46
            int r9 = com.tkay.core.api.TYInitMediation.getIntFromMap(r9, r1, r5)     // Catch: java.lang.Exception -> L53
            r6.k = r9     // Catch: java.lang.Exception -> L53
            goto L57
        L46:
            boolean r1 = r9.containsKey(r0)     // Catch: java.lang.Exception -> L53
            if (r1 == 0) goto L57
            int r9 = com.tkay.core.api.TYInitMediation.getIntFromMap(r9, r0, r5)     // Catch: java.lang.Exception -> L53
            r6.k = r9     // Catch: java.lang.Exception -> L53
            goto L57
        L53:
            r9 = move-exception
            r9.printStackTrace()
        L57:
            r9 = 0
            java.lang.String r0 = "video_muted"
            int r9 = com.tkay.core.api.TYInitMediation.getIntFromMap(r8, r0, r9)
            java.lang.String r0 = "video_autoplay"
            int r0 = com.tkay.core.api.TYInitMediation.getIntFromMap(r8, r0, r3)
            java.lang.String r1 = "video_duration"
            int r1 = com.tkay.core.api.TYInitMediation.getIntFromMap(r8, r1, r2)
            r6.f = r9
            r6.g = r0
            r6.h = r1
            java.lang.String r9 = r6.a
            boolean r9 = android.text.TextUtils.isEmpty(r9)
            if (r9 != 0) goto L8e
            java.lang.String r9 = r6.b
            boolean r9 = android.text.TextUtils.isEmpty(r9)
            if (r9 == 0) goto L81
            goto L8e
        L81:
            com.tkay.network.gdt.GDTTYInitManager r9 = com.tkay.network.gdt.GDTTYInitManager.getInstance()
            com.tkay.network.gdt.GDTTYAdapter$3 r0 = new com.tkay.network.gdt.GDTTYAdapter$3
            r0.<init>(r6, r7, r8)
            r9.initSDK(r7, r8, r0)
            return
        L8e:
            java.lang.String r7 = ""
            java.lang.String r8 = "GTD appid or unitId is empty."
            r6.notifyATLoadFail(r7, r8)
            return
    }

    @Override
    public boolean startBiddingRequest(android.content.Context r1, java.util.Map<java.lang.String, java.lang.Object> r2, java.util.Map<java.lang.String, java.lang.Object> r3, com.tkay.core.api.TYBiddingListener r4) {
            r0 = this;
            r4 = 1
            r0.i = r4
            r0.loadCustomNetworkAd(r1, r2, r3)
            return r4
    }
}
