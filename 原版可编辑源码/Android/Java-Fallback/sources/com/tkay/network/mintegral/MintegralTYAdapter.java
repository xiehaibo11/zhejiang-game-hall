package com.tkay.network.mintegral;

public class MintegralTYAdapter extends com.tkay.nativead.unitgroup.api.CustomNativeAdapter {
    private static final java.lang.String i = null;
    java.lang.String a;
    java.lang.String b;
    java.lang.String c;
    java.lang.String d;
    java.lang.String e;
    int f;
    int g;
    java.lang.String h;

    final class 1 implements com.mbridge.msdk.out.NativeAdvancedAdListener {
        final com.mbridge.msdk.out.MBNativeAdvancedHandler a;
        final android.content.Context b;
        final com.tkay.network.mintegral.MintegralTYAdapter c;

        1(com.tkay.network.mintegral.MintegralTYAdapter r1, com.mbridge.msdk.out.MBNativeAdvancedHandler r2, android.content.Context r3) {
                r0 = this;
                r0.c = r1
                r0.a = r2
                r0.b = r3
                r0.<init>()
                return
        }

        @Override
        public final void closeFullScreen(com.mbridge.msdk.out.MBridgeIds r1) {
                r0 = this;
                return
        }

        @Override
        public final void onClick(com.mbridge.msdk.out.MBridgeIds r1) {
                r0 = this;
                return
        }

        @Override
        public final void onClose(com.mbridge.msdk.out.MBridgeIds r1) {
                r0 = this;
                return
        }

        @Override
        public final void onLeaveApp(com.mbridge.msdk.out.MBridgeIds r1) {
                r0 = this;
                return
        }

        @Override
        public final void onLoadFailed(com.mbridge.msdk.out.MBridgeIds r1, java.lang.String r2) {
                r0 = this;
                com.tkay.network.mintegral.MintegralTYAdapter r1 = r0.c
                com.tkay.core.api.TYCustomLoadListener r1 = com.tkay.network.mintegral.MintegralTYAdapter.a(r1)
                if (r1 == 0) goto L11
                com.tkay.network.mintegral.MintegralTYAdapter r1 = r0.c
                com.tkay.core.api.TYCustomLoadListener r1 = com.tkay.network.mintegral.MintegralTYAdapter.b(r1)
                r1.onAdLoadError(r2, r2)
            L11:
                com.mbridge.msdk.out.MBNativeAdvancedHandler r1 = r0.a
                r2 = 0
                r1.setAdListener(r2)
                return
        }

        @Override
        public final void onLoadSuccessed(com.mbridge.msdk.out.MBridgeIds r4) {
                r3 = this;
                com.tkay.network.mintegral.MintegralTYExpressNativeAd r4 = new com.tkay.network.mintegral.MintegralTYExpressNativeAd
                android.content.Context r0 = r3.b
                com.mbridge.msdk.out.MBNativeAdvancedHandler r1 = r3.a
                r2 = 0
                r4.<init>(r0, r1, r2)
                com.tkay.network.mintegral.MintegralTYAdapter r0 = r3.c
                com.tkay.core.api.TYCustomLoadListener r0 = com.tkay.network.mintegral.MintegralTYAdapter.c(r0)
                if (r0 == 0) goto L2f
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r0.add(r4)
                int r4 = r0.size()
                com.tkay.nativead.unitgroup.api.CustomNativeAd[] r4 = new com.tkay.nativead.unitgroup.api.CustomNativeAd[r4]
                java.lang.Object[] r4 = r0.toArray(r4)
                com.tkay.nativead.unitgroup.api.CustomNativeAd[] r4 = (com.tkay.nativead.unitgroup.api.CustomNativeAd[]) r4
                com.tkay.network.mintegral.MintegralTYAdapter r0 = r3.c
                com.tkay.core.api.TYCustomLoadListener r0 = com.tkay.network.mintegral.MintegralTYAdapter.d(r0)
                r0.onAdCacheLoaded(r4)
            L2f:
                return
        }

        @Override
        public final void onLogImpression(com.mbridge.msdk.out.MBridgeIds r1) {
                r0 = this;
                return
        }

        @Override
        public final void showFullScreen(com.mbridge.msdk.out.MBridgeIds r1) {
                r0 = this;
                return
        }
    }

    final class 2 implements com.mbridge.msdk.out.NativeListener.NativeAdListener {
        final com.mbridge.msdk.out.MBNativeHandler a;
        final com.mbridge.msdk.out.MBBidNativeHandler b;
        final android.content.Context c;
        final java.lang.String d;
        final java.lang.String e;
        final boolean f;
        final com.tkay.network.mintegral.MintegralTYAdapter g;

        2(com.tkay.network.mintegral.MintegralTYAdapter r1, com.mbridge.msdk.out.MBNativeHandler r2, com.mbridge.msdk.out.MBBidNativeHandler r3, android.content.Context r4, java.lang.String r5, java.lang.String r6, boolean r7) {
                r0 = this;
                r0.g = r1
                r0.a = r2
                r0.b = r3
                r0.c = r4
                r0.d = r5
                r0.e = r6
                r0.f = r7
                r0.<init>()
                return
        }

        @Override
        public final void onAdClick(com.mbridge.msdk.out.Campaign r1) {
                r0 = this;
                return
        }

        @Override
        public final void onAdFramesLoaded(java.util.List<com.mbridge.msdk.out.Frame> r1) {
                r0 = this;
                return
        }

        @Override
        public final void onAdLoadError(java.lang.String r2) {
                r1 = this;
                com.tkay.network.mintegral.MintegralTYAdapter r0 = r1.g
                com.tkay.core.api.TYCustomLoadListener r0 = com.tkay.network.mintegral.MintegralTYAdapter.k(r0)
                if (r0 == 0) goto L11
                com.tkay.network.mintegral.MintegralTYAdapter r0 = r1.g
                com.tkay.core.api.TYCustomLoadListener r0 = com.tkay.network.mintegral.MintegralTYAdapter.l(r0)
                r0.onAdLoadError(r2, r2)
            L11:
                com.mbridge.msdk.out.MBNativeHandler r2 = r1.a
                r0 = 0
                if (r2 == 0) goto L1f
                r2.setAdListener(r0)
                com.mbridge.msdk.out.MBNativeHandler r2 = r1.a
                r2.release()
                return
            L1f:
                com.mbridge.msdk.out.MBBidNativeHandler r2 = r1.b
                if (r2 == 0) goto L2b
                r2.setAdListener(r0)
                com.mbridge.msdk.out.MBBidNativeHandler r2 = r1.b
                r2.bidRelease()
            L2b:
                return
        }

        @Override
        public final void onAdLoaded(java.util.List<com.mbridge.msdk.out.Campaign> r12, int r13) {
                r11 = this;
                java.lang.String r13 = "Mintegral no ad return "
                java.lang.String r0 = ""
                r1 = 0
                if (r12 == 0) goto L99
                int r2 = r12.size()
                if (r2 > 0) goto Lf
                goto L99
            Lf:
                r2 = 0
                java.util.ArrayList r3 = new java.util.ArrayList
                r3.<init>()
                java.util.Iterator r12 = r12.iterator()
            L19:
                boolean r4 = r12.hasNext()
                if (r4 == 0) goto L4e
                java.lang.Object r4 = r12.next()
                r9 = r4
                com.mbridge.msdk.out.Campaign r9 = (com.mbridge.msdk.out.Campaign) r9
                r4 = 1
                if (r9 == 0) goto L19
                com.tkay.network.mintegral.MintegralTYAdapter r2 = r11.g
                java.lang.String r2 = r2.a
                boolean r2 = android.text.TextUtils.isEmpty(r2)
                r10 = r2 ^ 1
                com.tkay.network.mintegral.MintegralTYNativeAd r2 = new com.tkay.network.mintegral.MintegralTYNativeAd
                android.content.Context r6 = r11.c
                java.lang.String r7 = r11.d
                java.lang.String r8 = r11.e
                r5 = r2
                r5.<init>(r6, r7, r8, r9, r10)
                com.tkay.network.mintegral.MintegralTYAdapter r5 = r11.g
                java.lang.String r5 = r5.c
                r2.e = r5
                boolean r5 = r11.f
                r2.h = r5
                r3.add(r2)
                r2 = r4
                goto L19
            L4e:
                if (r2 != 0) goto L62
                com.tkay.network.mintegral.MintegralTYAdapter r12 = r11.g
                com.tkay.core.api.TYCustomLoadListener r12 = com.tkay.network.mintegral.MintegralTYAdapter.g(r12)
                if (r12 == 0) goto L7f
                com.tkay.network.mintegral.MintegralTYAdapter r12 = r11.g
                com.tkay.core.api.TYCustomLoadListener r12 = com.tkay.network.mintegral.MintegralTYAdapter.h(r12)
                r12.onAdLoadError(r0, r13)
                goto L7f
            L62:
                com.tkay.network.mintegral.MintegralTYAdapter r12 = r11.g
                com.tkay.core.api.TYCustomLoadListener r12 = com.tkay.network.mintegral.MintegralTYAdapter.i(r12)
                if (r12 == 0) goto L7f
                int r12 = r3.size()
                com.tkay.nativead.unitgroup.api.CustomNativeAd[] r12 = new com.tkay.nativead.unitgroup.api.CustomNativeAd[r12]
                java.lang.Object[] r12 = r3.toArray(r12)
                com.tkay.nativead.unitgroup.api.CustomNativeAd[] r12 = (com.tkay.nativead.unitgroup.api.CustomNativeAd[]) r12
                com.tkay.network.mintegral.MintegralTYAdapter r13 = r11.g
                com.tkay.core.api.TYCustomLoadListener r13 = com.tkay.network.mintegral.MintegralTYAdapter.j(r13)
                r13.onAdCacheLoaded(r12)
            L7f:
                com.mbridge.msdk.out.MBNativeHandler r12 = r11.a
                if (r12 == 0) goto L8c
                r12.setAdListener(r1)
                com.mbridge.msdk.out.MBNativeHandler r12 = r11.a
                r12.release()
                return
            L8c:
                com.mbridge.msdk.out.MBBidNativeHandler r12 = r11.b
                if (r12 == 0) goto L98
                r12.setAdListener(r1)
                com.mbridge.msdk.out.MBBidNativeHandler r12 = r11.b
                r12.bidRelease()
            L98:
                return
            L99:
                com.tkay.network.mintegral.MintegralTYAdapter r12 = r11.g
                com.tkay.core.api.TYCustomLoadListener r12 = com.tkay.network.mintegral.MintegralTYAdapter.e(r12)
                if (r12 == 0) goto Laa
                com.tkay.network.mintegral.MintegralTYAdapter r12 = r11.g
                com.tkay.core.api.TYCustomLoadListener r12 = com.tkay.network.mintegral.MintegralTYAdapter.f(r12)
                r12.onAdLoadError(r0, r13)
            Laa:
                com.mbridge.msdk.out.MBNativeHandler r12 = r11.a
                if (r12 == 0) goto Lb7
                r12.setAdListener(r1)
                com.mbridge.msdk.out.MBNativeHandler r12 = r11.a
                r12.release()
                return
            Lb7:
                com.mbridge.msdk.out.MBBidNativeHandler r12 = r11.b
                if (r12 == 0) goto Lc3
                r12.setAdListener(r1)
                com.mbridge.msdk.out.MBBidNativeHandler r12 = r11.b
                r12.bidRelease()
            Lc3:
                return
        }

        @Override
        public final void onLoggingImpression(int r1) {
                r0 = this;
                return
        }
    }


    static {
            java.lang.Class<com.tkay.network.mintegral.MintegralTYAdapter> r0 = com.tkay.network.mintegral.MintegralTYAdapter.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.network.mintegral.MintegralTYAdapter.i = r0
            return
    }

    public MintegralTYAdapter() {
            r0 = this;
            r0.<init>()
            return
    }

    static com.tkay.core.api.TYCustomLoadListener a(com.tkay.network.mintegral.MintegralTYAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    private void a(android.content.Context r10, java.lang.String r11, java.lang.String r12, java.util.Map<java.lang.String, java.lang.Object> r13) {
            r9 = this;
            com.mbridge.msdk.out.MBNativeAdvancedHandler r0 = new com.mbridge.msdk.out.MBNativeAdvancedHandler
            r1 = r10
            android.app.Activity r1 = (android.app.Activity) r1
            r0.<init>(r1, r11, r12)
            java.lang.String r11 = r9.c
            boolean r11 = android.text.TextUtils.isEmpty(r11)
            java.lang.String r12 = "0"
            r1 = 49
            r2 = 48
            r3 = 0
            java.lang.String r4 = "1"
            r5 = -1
            r6 = 2
            r7 = 1
            if (r11 != 0) goto L44
            java.lang.String r11 = r9.c
            int r8 = r11.hashCode()
            if (r8 == r2) goto L2f
            if (r8 == r1) goto L27
            goto L37
        L27:
            boolean r11 = r11.equals(r4)
            if (r11 == 0) goto L37
            r11 = r7
            goto L38
        L2f:
            boolean r11 = r11.equals(r12)
            if (r11 == 0) goto L37
            r11 = r3
            goto L38
        L37:
            r11 = r5
        L38:
            if (r11 == 0) goto L41
            if (r11 == r7) goto L3d
            goto L44
        L3d:
            r0.setPlayMuteState(r6)
            goto L44
        L41:
            r0.setPlayMuteState(r7)
        L44:
            java.lang.String r11 = r9.d
            boolean r11 = android.text.TextUtils.isEmpty(r11)
            if (r11 != 0) goto L86
            java.lang.String r11 = r9.d
            int r8 = r11.hashCode()
            switch(r8) {
                case 49: goto L6a;
                case 50: goto L60;
                case 51: goto L56;
                default: goto L55;
            }
        L55:
            goto L72
        L56:
            java.lang.String r8 = "3"
            boolean r11 = r11.equals(r8)
            if (r11 == 0) goto L72
            r11 = r6
            goto L73
        L60:
            java.lang.String r8 = "2"
            boolean r11 = r11.equals(r8)
            if (r11 == 0) goto L72
            r11 = r7
            goto L73
        L6a:
            boolean r11 = r11.equals(r4)
            if (r11 == 0) goto L72
            r11 = r3
            goto L73
        L72:
            r11 = r5
        L73:
            if (r11 == 0) goto L83
            if (r11 == r7) goto L7f
            if (r11 == r6) goto L7a
            goto L86
        L7a:
            r11 = 3
            r0.autoLoopPlay(r11)
            goto L86
        L7f:
            r0.autoLoopPlay(r6)
            goto L86
        L83:
            r0.autoLoopPlay(r7)
        L86:
            java.lang.String r11 = r9.e
            boolean r11 = android.text.TextUtils.isEmpty(r11)
            if (r11 != 0) goto Lb9
            java.lang.String r11 = r9.e
            int r6 = r11.hashCode()
            if (r6 == r2) goto La1
            if (r6 == r1) goto L99
            goto La8
        L99:
            boolean r11 = r11.equals(r4)
            if (r11 == 0) goto La8
            r3 = r7
            goto La9
        La1:
            boolean r11 = r11.equals(r12)
            if (r11 == 0) goto La8
            goto La9
        La8:
            r3 = r5
        La9:
            if (r3 == 0) goto Lb4
            if (r3 == r7) goto Lae
            goto Lb9
        Lae:
            com.mbridge.msdk.out.MBMultiStateEnum r11 = com.mbridge.msdk.out.MBMultiStateEnum.negative
            r0.setCloseButtonState(r11)
            goto Lb9
        Lb4:
            com.mbridge.msdk.out.MBMultiStateEnum r11 = com.mbridge.msdk.out.MBMultiStateEnum.positive
            r0.setCloseButtonState(r11)
        Lb9:
            int r11 = r9.f
            int r12 = r9.g
            r0.setNativeViewSize(r11, r12)
            com.tkay.network.mintegral.MintegralTYAdapter$1 r11 = new com.tkay.network.mintegral.MintegralTYAdapter$1
            r11.<init>(r9, r0, r10)
            r0.setAdListener(r11)
            java.lang.String r10 = r9.a
            boolean r10 = android.text.TextUtils.isEmpty(r10)
            if (r10 == 0) goto Ldd
            com.tkay.network.mintegral.MintegralTYInitManager r10 = com.tkay.network.mintegral.MintegralTYInitManager.getInstance()
            r11 = 8
            r10.setCustomInfo(r11, r13)
            r0.load()
            return
        Ldd:
            com.tkay.network.mintegral.MintegralTYInitManager r10 = com.tkay.network.mintegral.MintegralTYInitManager.getInstance()
            r11 = 7
            r10.setCustomInfo(r11, r13)
            java.lang.String r10 = r9.a
            r0.loadByToken(r10)
            return
    }

    private void a(android.content.Context r9, java.lang.String r10, java.lang.String r11, boolean r12, boolean r13, java.util.Map<java.lang.String, java.lang.Object> r14) {
            r8 = this;
            android.content.Context r4 = r9.getApplicationContext()
            java.util.Map r9 = com.mbridge.msdk.out.MBNativeHandler.getNativeProperties(r10, r11)
            r0 = 1
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            java.lang.String r1 = "ad_num"
            r9.put(r1, r0)
            r0 = 0
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            java.lang.String r1 = "layout_type"
            r9.put(r1, r0)
            java.lang.Boolean r12 = java.lang.Boolean.valueOf(r12)
            java.lang.String r0 = "videoSupport"
            r9.put(r0, r12)
            java.lang.String r12 = r8.a
            boolean r12 = android.text.TextUtils.isEmpty(r12)
            r0 = 0
            if (r12 == 0) goto L3f
            com.tkay.network.mintegral.MintegralTYInitManager r12 = com.tkay.network.mintegral.MintegralTYInitManager.getInstance()
            r1 = 8
            r12.setCustomInfo(r1, r14)
            com.mbridge.msdk.out.MBNativeHandler r12 = new com.mbridge.msdk.out.MBNativeHandler
            r12.<init>(r9, r4)
            r9 = r12
            r12 = r0
            goto L4d
        L3f:
            com.tkay.network.mintegral.MintegralTYInitManager r12 = com.tkay.network.mintegral.MintegralTYInitManager.getInstance()
            r1 = 7
            r12.setCustomInfo(r1, r14)
            com.mbridge.msdk.out.MBBidNativeHandler r12 = new com.mbridge.msdk.out.MBBidNativeHandler
            r12.<init>(r9, r4)
            r9 = r0
        L4d:
            com.tkay.network.mintegral.MintegralTYAdapter$2 r14 = new com.tkay.network.mintegral.MintegralTYAdapter$2
            r0 = r14
            r1 = r8
            r2 = r9
            r3 = r12
            r5 = r10
            r6 = r11
            r7 = r13
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            if (r9 == 0) goto L62
            r9.setAdListener(r14)
            r9.load()
            return
        L62:
            r12.setAdListener(r14)
            java.lang.String r9 = r8.a
            r12.bidLoad(r9)
            return
    }

    private void a(android.content.Context r17, java.util.Map<java.lang.String, java.lang.Object> r18, java.lang.String r19, java.lang.String r20, boolean r21) {
            r16 = this;
            r8 = r16
            r0 = r17
            r1 = r18
            r2 = 0
            if (r1 == 0) goto L1a
            java.lang.String r3 = com.tkay.nativead.unitgroup.api.CustomNativeAd.IS_AUTO_PLAY_KEY     // Catch: java.lang.Exception -> L18
            java.lang.Object r3 = r1.get(r3)     // Catch: java.lang.Exception -> L18
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L18
            boolean r3 = java.lang.Boolean.parseBoolean(r3)     // Catch: java.lang.Exception -> L18
            goto L1b
        L18:
            r7 = r2
            goto L1c
        L1a:
            r3 = r2
        L1b:
            r7 = r3
        L1c:
            java.lang.String r3 = r8.b
            java.lang.String r4 = "1"
            boolean r3 = android.text.TextUtils.equals(r3, r4)
            r5 = 8
            r6 = 7
            r9 = 1
            if (r3 == 0) goto L112
            com.mbridge.msdk.out.MBNativeAdvancedHandler r3 = new com.mbridge.msdk.out.MBNativeAdvancedHandler
            r7 = r0
            android.app.Activity r7 = (android.app.Activity) r7
            r10 = r19
            r11 = r20
            r3.<init>(r7, r10, r11)
            java.lang.String r7 = r8.c
            boolean r7 = android.text.TextUtils.isEmpty(r7)
            java.lang.String r10 = "0"
            r11 = 49
            r12 = 48
            r13 = -1
            r14 = 2
            if (r7 != 0) goto L6e
            java.lang.String r7 = r8.c
            int r15 = r7.hashCode()
            if (r15 == r12) goto L59
            if (r15 == r11) goto L51
            goto L61
        L51:
            boolean r7 = r7.equals(r4)
            if (r7 == 0) goto L61
            r7 = r9
            goto L62
        L59:
            boolean r7 = r7.equals(r10)
            if (r7 == 0) goto L61
            r7 = r2
            goto L62
        L61:
            r7 = r13
        L62:
            if (r7 == 0) goto L6b
            if (r7 == r9) goto L67
            goto L6e
        L67:
            r3.setPlayMuteState(r14)
            goto L6e
        L6b:
            r3.setPlayMuteState(r9)
        L6e:
            java.lang.String r7 = r8.d
            boolean r7 = android.text.TextUtils.isEmpty(r7)
            if (r7 != 0) goto Lb0
            java.lang.String r7 = r8.d
            int r15 = r7.hashCode()
            switch(r15) {
                case 49: goto L94;
                case 50: goto L8a;
                case 51: goto L80;
                default: goto L7f;
            }
        L7f:
            goto L9c
        L80:
            java.lang.String r15 = "3"
            boolean r7 = r7.equals(r15)
            if (r7 == 0) goto L9c
            r7 = r14
            goto L9d
        L8a:
            java.lang.String r15 = "2"
            boolean r7 = r7.equals(r15)
            if (r7 == 0) goto L9c
            r7 = r9
            goto L9d
        L94:
            boolean r7 = r7.equals(r4)
            if (r7 == 0) goto L9c
            r7 = r2
            goto L9d
        L9c:
            r7 = r13
        L9d:
            if (r7 == 0) goto Lad
            if (r7 == r9) goto La9
            if (r7 == r14) goto La4
            goto Lb0
        La4:
            r7 = 3
            r3.autoLoopPlay(r7)
            goto Lb0
        La9:
            r3.autoLoopPlay(r14)
            goto Lb0
        Lad:
            r3.autoLoopPlay(r9)
        Lb0:
            java.lang.String r7 = r8.e
            boolean r7 = android.text.TextUtils.isEmpty(r7)
            if (r7 != 0) goto Le3
            java.lang.String r7 = r8.e
            int r14 = r7.hashCode()
            if (r14 == r12) goto Lcb
            if (r14 == r11) goto Lc3
            goto Ld2
        Lc3:
            boolean r2 = r7.equals(r4)
            if (r2 == 0) goto Ld2
            r2 = r9
            goto Ld3
        Lcb:
            boolean r4 = r7.equals(r10)
            if (r4 == 0) goto Ld2
            goto Ld3
        Ld2:
            r2 = r13
        Ld3:
            if (r2 == 0) goto Lde
            if (r2 == r9) goto Ld8
            goto Le3
        Ld8:
            com.mbridge.msdk.out.MBMultiStateEnum r2 = com.mbridge.msdk.out.MBMultiStateEnum.negative
            r3.setCloseButtonState(r2)
            goto Le3
        Lde:
            com.mbridge.msdk.out.MBMultiStateEnum r2 = com.mbridge.msdk.out.MBMultiStateEnum.positive
            r3.setCloseButtonState(r2)
        Le3:
            int r2 = r8.f
            int r4 = r8.g
            r3.setNativeViewSize(r2, r4)
            com.tkay.network.mintegral.MintegralTYAdapter$1 r2 = new com.tkay.network.mintegral.MintegralTYAdapter$1
            r2.<init>(r8, r3, r0)
            r3.setAdListener(r2)
            java.lang.String r0 = r8.a
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L105
            com.tkay.network.mintegral.MintegralTYInitManager r0 = com.tkay.network.mintegral.MintegralTYInitManager.getInstance()
            r0.setCustomInfo(r5, r1)
            r3.load()
            return
        L105:
            com.tkay.network.mintegral.MintegralTYInitManager r0 = com.tkay.network.mintegral.MintegralTYInitManager.getInstance()
            r0.setCustomInfo(r6, r1)
            java.lang.String r0 = r8.a
            r3.loadByToken(r0)
            return
        L112:
            r10 = r19
            r11 = r20
            android.content.Context r4 = r17.getApplicationContext()
            java.util.Map r0 = com.mbridge.msdk.out.MBNativeHandler.getNativeProperties(r19, r20)
            java.lang.Integer r3 = java.lang.Integer.valueOf(r9)
            java.lang.String r9 = "ad_num"
            r0.put(r9, r3)
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            java.lang.String r3 = "layout_type"
            r0.put(r3, r2)
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r21)
            java.lang.String r3 = "videoSupport"
            r0.put(r3, r2)
            java.lang.String r2 = r8.a
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            r3 = 0
            if (r2 == 0) goto L151
            com.tkay.network.mintegral.MintegralTYInitManager r2 = com.tkay.network.mintegral.MintegralTYInitManager.getInstance()
            r2.setCustomInfo(r5, r1)
            com.mbridge.msdk.out.MBNativeHandler r1 = new com.mbridge.msdk.out.MBNativeHandler
            r1.<init>(r0, r4)
            r12 = r1
            r9 = r3
            goto L15f
        L151:
            com.tkay.network.mintegral.MintegralTYInitManager r2 = com.tkay.network.mintegral.MintegralTYInitManager.getInstance()
            r2.setCustomInfo(r6, r1)
            com.mbridge.msdk.out.MBBidNativeHandler r1 = new com.mbridge.msdk.out.MBBidNativeHandler
            r1.<init>(r0, r4)
            r9 = r1
            r12 = r3
        L15f:
            com.tkay.network.mintegral.MintegralTYAdapter$2 r13 = new com.tkay.network.mintegral.MintegralTYAdapter$2
            r0 = r13
            r1 = r16
            r2 = r12
            r3 = r9
            r5 = r19
            r6 = r20
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            if (r12 == 0) goto L176
            r12.setAdListener(r13)
            r12.load()
            return
        L176:
            r9.setAdListener(r13)
            java.lang.String r0 = r8.a
            r9.bidLoad(r0)
            return
    }

    static void a(com.tkay.network.mintegral.MintegralTYAdapter r16, android.content.Context r17, java.util.Map r18, java.lang.String r19, java.lang.String r20, boolean r21) {
            r8 = r16
            r0 = r17
            r1 = r18
            r2 = 0
            if (r1 == 0) goto L1a
            java.lang.String r3 = com.tkay.nativead.unitgroup.api.CustomNativeAd.IS_AUTO_PLAY_KEY     // Catch: java.lang.Exception -> L18
            java.lang.Object r3 = r1.get(r3)     // Catch: java.lang.Exception -> L18
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L18
            boolean r3 = java.lang.Boolean.parseBoolean(r3)     // Catch: java.lang.Exception -> L18
            goto L1b
        L18:
            r7 = r2
            goto L1c
        L1a:
            r3 = r2
        L1b:
            r7 = r3
        L1c:
            java.lang.String r3 = r8.b
            java.lang.String r4 = "1"
            boolean r3 = android.text.TextUtils.equals(r3, r4)
            r5 = 8
            r6 = 7
            r9 = 1
            if (r3 == 0) goto L112
            com.mbridge.msdk.out.MBNativeAdvancedHandler r3 = new com.mbridge.msdk.out.MBNativeAdvancedHandler
            r7 = r0
            android.app.Activity r7 = (android.app.Activity) r7
            r10 = r19
            r11 = r20
            r3.<init>(r7, r10, r11)
            java.lang.String r7 = r8.c
            boolean r7 = android.text.TextUtils.isEmpty(r7)
            java.lang.String r10 = "0"
            r11 = 49
            r12 = 48
            r13 = -1
            r14 = 2
            if (r7 != 0) goto L6e
            java.lang.String r7 = r8.c
            int r15 = r7.hashCode()
            if (r15 == r12) goto L59
            if (r15 == r11) goto L51
            goto L61
        L51:
            boolean r7 = r7.equals(r4)
            if (r7 == 0) goto L61
            r7 = r9
            goto L62
        L59:
            boolean r7 = r7.equals(r10)
            if (r7 == 0) goto L61
            r7 = r2
            goto L62
        L61:
            r7 = r13
        L62:
            if (r7 == 0) goto L6b
            if (r7 == r9) goto L67
            goto L6e
        L67:
            r3.setPlayMuteState(r14)
            goto L6e
        L6b:
            r3.setPlayMuteState(r9)
        L6e:
            java.lang.String r7 = r8.d
            boolean r7 = android.text.TextUtils.isEmpty(r7)
            if (r7 != 0) goto Lb0
            java.lang.String r7 = r8.d
            int r15 = r7.hashCode()
            switch(r15) {
                case 49: goto L94;
                case 50: goto L8a;
                case 51: goto L80;
                default: goto L7f;
            }
        L7f:
            goto L9c
        L80:
            java.lang.String r15 = "3"
            boolean r7 = r7.equals(r15)
            if (r7 == 0) goto L9c
            r7 = r14
            goto L9d
        L8a:
            java.lang.String r15 = "2"
            boolean r7 = r7.equals(r15)
            if (r7 == 0) goto L9c
            r7 = r9
            goto L9d
        L94:
            boolean r7 = r7.equals(r4)
            if (r7 == 0) goto L9c
            r7 = r2
            goto L9d
        L9c:
            r7 = r13
        L9d:
            if (r7 == 0) goto Lad
            if (r7 == r9) goto La9
            if (r7 == r14) goto La4
            goto Lb0
        La4:
            r7 = 3
            r3.autoLoopPlay(r7)
            goto Lb0
        La9:
            r3.autoLoopPlay(r14)
            goto Lb0
        Lad:
            r3.autoLoopPlay(r9)
        Lb0:
            java.lang.String r7 = r8.e
            boolean r7 = android.text.TextUtils.isEmpty(r7)
            if (r7 != 0) goto Le3
            java.lang.String r7 = r8.e
            int r14 = r7.hashCode()
            if (r14 == r12) goto Lcb
            if (r14 == r11) goto Lc3
            goto Ld2
        Lc3:
            boolean r2 = r7.equals(r4)
            if (r2 == 0) goto Ld2
            r2 = r9
            goto Ld3
        Lcb:
            boolean r4 = r7.equals(r10)
            if (r4 == 0) goto Ld2
            goto Ld3
        Ld2:
            r2 = r13
        Ld3:
            if (r2 == 0) goto Lde
            if (r2 == r9) goto Ld8
            goto Le3
        Ld8:
            com.mbridge.msdk.out.MBMultiStateEnum r2 = com.mbridge.msdk.out.MBMultiStateEnum.negative
            r3.setCloseButtonState(r2)
            goto Le3
        Lde:
            com.mbridge.msdk.out.MBMultiStateEnum r2 = com.mbridge.msdk.out.MBMultiStateEnum.positive
            r3.setCloseButtonState(r2)
        Le3:
            int r2 = r8.f
            int r4 = r8.g
            r3.setNativeViewSize(r2, r4)
            com.tkay.network.mintegral.MintegralTYAdapter$1 r2 = new com.tkay.network.mintegral.MintegralTYAdapter$1
            r2.<init>(r8, r3, r0)
            r3.setAdListener(r2)
            java.lang.String r0 = r8.a
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L105
            com.tkay.network.mintegral.MintegralTYInitManager r0 = com.tkay.network.mintegral.MintegralTYInitManager.getInstance()
            r0.setCustomInfo(r5, r1)
            r3.load()
            return
        L105:
            com.tkay.network.mintegral.MintegralTYInitManager r0 = com.tkay.network.mintegral.MintegralTYInitManager.getInstance()
            r0.setCustomInfo(r6, r1)
            java.lang.String r0 = r8.a
            r3.loadByToken(r0)
            return
        L112:
            r10 = r19
            r11 = r20
            android.content.Context r4 = r17.getApplicationContext()
            java.util.Map r0 = com.mbridge.msdk.out.MBNativeHandler.getNativeProperties(r19, r20)
            java.lang.Integer r3 = java.lang.Integer.valueOf(r9)
            java.lang.String r9 = "ad_num"
            r0.put(r9, r3)
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            java.lang.String r3 = "layout_type"
            r0.put(r3, r2)
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r21)
            java.lang.String r3 = "videoSupport"
            r0.put(r3, r2)
            java.lang.String r2 = r8.a
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            r3 = 0
            if (r2 == 0) goto L151
            com.tkay.network.mintegral.MintegralTYInitManager r2 = com.tkay.network.mintegral.MintegralTYInitManager.getInstance()
            r2.setCustomInfo(r5, r1)
            com.mbridge.msdk.out.MBNativeHandler r1 = new com.mbridge.msdk.out.MBNativeHandler
            r1.<init>(r0, r4)
            r12 = r1
            r9 = r3
            goto L15f
        L151:
            com.tkay.network.mintegral.MintegralTYInitManager r2 = com.tkay.network.mintegral.MintegralTYInitManager.getInstance()
            r2.setCustomInfo(r6, r1)
            com.mbridge.msdk.out.MBBidNativeHandler r1 = new com.mbridge.msdk.out.MBBidNativeHandler
            r1.<init>(r0, r4)
            r9 = r1
            r12 = r3
        L15f:
            com.tkay.network.mintegral.MintegralTYAdapter$2 r13 = new com.tkay.network.mintegral.MintegralTYAdapter$2
            r0 = r13
            r1 = r16
            r2 = r12
            r3 = r9
            r5 = r19
            r6 = r20
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            if (r12 == 0) goto L176
            r12.setAdListener(r13)
            r12.load()
            return
        L176:
            r9.setAdListener(r13)
            java.lang.String r0 = r8.a
            r9.bidLoad(r0)
            return
    }

    static com.tkay.core.api.TYCustomLoadListener b(com.tkay.network.mintegral.MintegralTYAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener c(com.tkay.network.mintegral.MintegralTYAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener d(com.tkay.network.mintegral.MintegralTYAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener e(com.tkay.network.mintegral.MintegralTYAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener f(com.tkay.network.mintegral.MintegralTYAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener g(com.tkay.network.mintegral.MintegralTYAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener h(com.tkay.network.mintegral.MintegralTYAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener i(com.tkay.network.mintegral.MintegralTYAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener j(com.tkay.network.mintegral.MintegralTYAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener k(com.tkay.network.mintegral.MintegralTYAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener l(com.tkay.network.mintegral.MintegralTYAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static int m(com.tkay.network.mintegral.MintegralTYAdapter r0) {
            int r0 = r0.mRequestNum
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener n(com.tkay.network.mintegral.MintegralTYAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener o(com.tkay.network.mintegral.MintegralTYAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    @Override
    public void destory() {
            r0 = this;
            return
    }

    @Override
    public void getBidRequestInfo(android.content.Context r8, java.util.Map<java.lang.String, java.lang.Object> r9, java.util.Map<java.lang.String, java.lang.Object> r10, com.tkay.core.api.TYBidRequestInfoListener r11) {
            r7 = this;
            java.lang.String r0 = "unitid"
            java.lang.String r0 = com.tkay.core.api.TYInitMediation.getStringFromMap(r9, r0)
            r7.h = r0
            com.tkay.network.mintegral.MintegralTYInitManager r1 = com.tkay.network.mintegral.MintegralTYInitManager.getInstance()
            r5 = 0
            r2 = r8
            r3 = r9
            r4 = r10
            r6 = r11
            r1.a(r2, r3, r4, r5, r6)
            return
    }

    @Override
    public com.tkay.core.api.TYInitMediation getMediationInitManager() {
            r1 = this;
            com.tkay.network.mintegral.MintegralTYInitManager r0 = com.tkay.network.mintegral.MintegralTYInitManager.getInstance()
            return r0
    }

    @Override
    public java.lang.String getNetworkName() {
            r1 = this;
            com.tkay.network.mintegral.MintegralTYInitManager r0 = com.tkay.network.mintegral.MintegralTYInitManager.getInstance()
            java.lang.String r0 = r0.getNetworkName()
            return r0
    }

    @Override
    public java.lang.String getNetworkPlacementId() {
            r1 = this;
            java.lang.String r0 = r1.h
            return r0
    }

    @Override
    public java.lang.String getNetworkSDKVersion() {
            r1 = this;
            com.tkay.network.mintegral.MintegralTYInitManager r0 = com.tkay.network.mintegral.MintegralTYInitManager.getInstance()
            java.lang.String r0 = r0.getNetworkVersion()
            return r0
    }

    @Override
    public void loadCustomNetworkAd(android.content.Context r13, java.util.Map<java.lang.String, java.lang.Object> r14, java.util.Map<java.lang.String, java.lang.Object> r15) {
            r12 = this;
            java.lang.String r0 = "suport_video"
            java.lang.String r1 = ""
            java.lang.String r2 = "appid"
            java.lang.String r2 = com.tkay.core.api.TYInitMediation.getStringFromMap(r14, r2)     // Catch: java.lang.Exception -> Lc7
            java.lang.String r3 = "unitid"
            java.lang.String r3 = com.tkay.core.api.TYInitMediation.getStringFromMap(r14, r3)     // Catch: java.lang.Exception -> Lc7
            java.lang.String r4 = "appkey"
            java.lang.String r4 = com.tkay.core.api.TYInitMediation.getStringFromMap(r14, r4)     // Catch: java.lang.Exception -> Lc7
            java.lang.String r5 = "placement_id"
            java.lang.String r10 = com.tkay.core.api.TYInitMediation.getStringFromMap(r14, r5)     // Catch: java.lang.Exception -> Lc7
            java.lang.String r5 = "payload"
            java.lang.String r5 = com.tkay.core.api.TYInitMediation.getStringFromMap(r14, r5)     // Catch: java.lang.Exception -> Lc7
            r12.a = r5     // Catch: java.lang.Exception -> Lc7
            java.lang.String r5 = "unit_type"
            java.lang.String r5 = com.tkay.core.api.TYInitMediation.getStringFromMap(r14, r5)     // Catch: java.lang.Exception -> Lc7
            r12.b = r5     // Catch: java.lang.Exception -> Lc7
            java.lang.String r5 = "video_muted"
            java.lang.String r5 = com.tkay.core.api.TYInitMediation.getStringFromMap(r14, r5)     // Catch: java.lang.Exception -> Lc7
            r12.c = r5     // Catch: java.lang.Exception -> Lc7
            java.lang.String r5 = "video_autoplay"
            java.lang.String r5 = com.tkay.core.api.TYInitMediation.getStringFromMap(r14, r5)     // Catch: java.lang.Exception -> Lc7
            r12.d = r5     // Catch: java.lang.Exception -> Lc7
            java.lang.String r5 = "close_button"
            java.lang.String r5 = com.tkay.core.api.TYInitMediation.getStringFromMap(r14, r5)     // Catch: java.lang.Exception -> Lc7
            r12.e = r5     // Catch: java.lang.Exception -> Lc7
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> Lc7
            if (r2 != 0) goto Lbb
            boolean r2 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> Lc7
            if (r2 != 0) goto Lbb
            boolean r2 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> Lc7
            if (r2 == 0) goto L57
            goto Lbb
        L57:
            boolean r2 = r14.containsKey(r0)     // Catch: java.lang.Exception -> Lc7
            r4 = 0
            if (r2 == 0) goto L6d
            java.lang.String r0 = com.tkay.core.api.TYInitMediation.getStringFromMap(r14, r0)     // Catch: java.lang.Exception -> Lc7
            java.lang.String r2 = "1"
            boolean r0 = r2.equals(r0)     // Catch: java.lang.Exception -> Lc7
            if (r0 == 0) goto L6d
            r0 = 1
            r11 = r0
            goto L6e
        L6d:
            r11 = r4
        L6e:
            java.lang.String r0 = "key_width"
            int r0 = com.tkay.core.api.TYInitMediation.getIntFromMap(r15, r0)     // Catch: java.lang.Exception -> Lc7
            r12.f = r0     // Catch: java.lang.Exception -> Lc7
            java.lang.String r0 = "key_height"
            int r15 = com.tkay.core.api.TYInitMediation.getIntFromMap(r15, r0)     // Catch: java.lang.Exception -> Lc7
            r12.g = r15     // Catch: java.lang.Exception -> Lc7
            int r15 = r12.f     // Catch: java.lang.Exception -> Lc7
            if (r15 != 0) goto L9c
            android.content.res.Resources r15 = r13.getResources()     // Catch: java.lang.Exception -> Lc7
            android.util.DisplayMetrics r15 = r15.getDisplayMetrics()     // Catch: java.lang.Exception -> Lc7
            int r15 = r15.widthPixels     // Catch: java.lang.Exception -> Lc7
            android.content.res.Resources r0 = r13.getResources()     // Catch: java.lang.Exception -> Lc7
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()     // Catch: java.lang.Exception -> Lc7
            int r0 = r0.heightPixels     // Catch: java.lang.Exception -> Lc7
            int r15 = java.lang.Math.min(r15, r0)     // Catch: java.lang.Exception -> Lc7
            r12.f = r15     // Catch: java.lang.Exception -> Lc7
        L9c:
            int r15 = r12.g     // Catch: java.lang.Exception -> Lc7
            if (r15 != 0) goto La8
            int r15 = r12.f     // Catch: java.lang.Exception -> Lc7
            int r15 = r15 * 3
            int r15 = r15 / 4
            r12.g = r15     // Catch: java.lang.Exception -> Lc7
        La8:
            r12.h = r3     // Catch: java.lang.Exception -> Lc7
            com.tkay.network.mintegral.MintegralTYInitManager r15 = com.tkay.network.mintegral.MintegralTYInitManager.getInstance()     // Catch: java.lang.Exception -> Lc7
            com.tkay.network.mintegral.MintegralTYAdapter$3 r0 = new com.tkay.network.mintegral.MintegralTYAdapter$3     // Catch: java.lang.Exception -> Lc7
            r6 = r0
            r7 = r12
            r8 = r13
            r9 = r14
            r6.<init>(r7, r8, r9, r10, r11)     // Catch: java.lang.Exception -> Lc7
            r15.initSDK(r13, r14, r0)     // Catch: java.lang.Exception -> Lc7
            return
        Lbb:
            com.tkay.core.api.TYCustomLoadListener r13 = r12.mLoadListener     // Catch: java.lang.Exception -> Lc7
            if (r13 == 0) goto Lc6
            com.tkay.core.api.TYCustomLoadListener r13 = r12.mLoadListener     // Catch: java.lang.Exception -> Lc7
            java.lang.String r14 = "mintegral appid ,unitid or sdkkey is empty."
            r13.onAdLoadError(r1, r14)     // Catch: java.lang.Exception -> Lc7
        Lc6:
            return
        Lc7:
            r13 = move-exception
            com.tkay.core.api.TYCustomLoadListener r14 = r12.mLoadListener
            if (r14 == 0) goto Ld5
            com.tkay.core.api.TYCustomLoadListener r14 = r12.mLoadListener
            java.lang.String r13 = r13.getMessage()
            r14.onAdLoadError(r1, r13)
        Ld5:
            return
    }
}
