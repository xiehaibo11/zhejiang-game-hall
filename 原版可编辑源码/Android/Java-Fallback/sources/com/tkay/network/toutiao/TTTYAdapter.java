package com.tkay.network.toutiao;

public class TTTYAdapter extends com.tkay.nativead.unitgroup.api.CustomNativeAdapter {
    java.lang.String a;
    java.lang.String b;
    java.lang.String c;
    int d;
    java.lang.String e;
    boolean f;
    private final java.lang.String g;


    final class 2 implements java.lang.Runnable {
        final android.content.Context a;
        final java.util.Map b;
        final java.util.Map c;
        final int d;
        final com.tkay.network.toutiao.TTTYAdapter e;








        2(com.tkay.network.toutiao.TTTYAdapter r1, android.content.Context r2, java.util.Map r3, java.util.Map r4, int r5) {
                r0 = this;
                r0.e = r1
                r0.a = r2
                r0.b = r3
                r0.c = r4
                r0.d = r5
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r16 = this;
                r1 = r16
                com.bykv.vk.openvk.TTVfManager r2 = com.bykv.vk.openvk.TTVfSdk.getVfManager()
                android.content.Context r0 = r1.a
                android.content.res.Resources r0 = r0.getResources()
                android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
                int r3 = r0.widthPixels
                android.content.Context r0 = r1.a
                android.content.res.Resources r0 = r0.getResources()
                android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
                int r4 = r0.heightPixels
                java.util.Map r0 = r1.b
                r6 = 4
                r9 = 2
                r10 = 3
                r11 = 1
                if (r0 == 0) goto Lf2
                java.lang.String r12 = "key_width"
                boolean r0 = r0.containsKey(r12)
                if (r0 == 0) goto L35
                java.util.Map r0 = r1.b
                java.lang.Object r0 = r0.get(r12)
                goto L36
            L35:
                r0 = 0
            L36:
                java.util.Map r12 = r1.b
                java.lang.String r13 = "tt_image_height"
                boolean r12 = r12.containsKey(r13)
                if (r12 == 0) goto L47
                java.util.Map r12 = r1.b
                java.lang.Object r12 = r12.get(r13)
                goto L59
            L47:
                java.util.Map r12 = r1.b
                java.lang.String r13 = "key_height"
                boolean r12 = r12.containsKey(r13)
                if (r12 == 0) goto L58
                java.util.Map r12 = r1.b
                java.lang.Object r12 = r12.get(r13)
                goto L59
            L58:
                r12 = 0
            L59:
                java.util.Map r13 = r1.b
                java.lang.String r14 = "tt_can_interrupt_video"
                java.lang.Object r13 = r13.get(r14)
                java.util.Map r14 = r1.b
                java.lang.String r15 = "tt_video_play_btn_bitmap"
                java.lang.Object r14 = r14.get(r15)
                java.util.Map r15 = r1.b
                java.lang.String r5 = "tt_video_play_btn_SIZE"
                java.lang.Object r5 = r15.get(r5)
                if (r0 == 0) goto L93
                if (r12 == 0) goto L93
                java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L7f
                double r7 = java.lang.Double.parseDouble(r0)     // Catch: java.lang.Throwable -> L7f
                int r3 = (int) r7
                goto L83
            L7f:
                r0 = move-exception
                r0.printStackTrace()
            L83:
                java.lang.String r0 = r12.toString()     // Catch: java.lang.Throwable -> L8e
                double r7 = java.lang.Double.parseDouble(r0)     // Catch: java.lang.Throwable -> L8e
                int r0 = (int) r7
                r4 = r0
                goto Lcc
            L8e:
                r0 = move-exception
                r0.printStackTrace()
                goto Lcc
            L93:
                com.tkay.network.toutiao.TTTYAdapter r0 = r1.e
                int r0 = r0.d
                if (r0 != r11) goto La0
                r0 = 690(0x2b2, float:9.67E-43)
                r3 = 388(0x184, float:5.44E-43)
            L9d:
                r4 = r3
                r3 = r0
                goto Lcc
            La0:
                com.tkay.network.toutiao.TTTYAdapter r0 = r1.e
                int r0 = r0.d
                if (r0 != r9) goto Lab
                r0 = 228(0xe4, float:3.2E-43)
                r3 = 150(0x96, float:2.1E-43)
                goto L9d
            Lab:
                com.tkay.network.toutiao.TTTYAdapter r0 = r1.e
                int r0 = r0.d
                if (r0 != r10) goto Lb6
                r0 = 1280(0x500, float:1.794E-42)
                r3 = 720(0x2d0, float:1.009E-42)
                goto L9d
            Lb6:
                com.tkay.network.toutiao.TTTYAdapter r0 = r1.e
                int r0 = r0.d
                if (r0 != r6) goto Lc1
                r0 = 1200(0x4b0, float:1.682E-42)
                r3 = 628(0x274, float:8.8E-43)
                goto L9d
            Lc1:
                com.tkay.network.toutiao.TTTYAdapter r0 = r1.e
                int r0 = r0.d
                r7 = 5
                if (r0 != r7) goto Lcc
                r3 = 640(0x280, float:8.97E-43)
                r4 = 640(0x280, float:8.97E-43)
            Lcc:
                boolean r0 = r13 instanceof java.lang.Boolean
                if (r0 == 0) goto Ld9
                java.lang.String r0 = r13.toString()
                boolean r0 = java.lang.Boolean.parseBoolean(r0)
                goto Lda
            Ld9:
                r0 = r11
            Lda:
                boolean r7 = r14 instanceof android.graphics.Bitmap
                if (r7 == 0) goto Le2
                android.graphics.Bitmap r14 = (android.graphics.Bitmap) r14
                r8 = r14
                goto Le3
            Le2:
                r8 = 0
            Le3:
                boolean r7 = r5 instanceof java.lang.Integer
                if (r7 == 0) goto Lf0
                java.lang.String r5 = r5.toString()
                int r5 = java.lang.Integer.parseInt(r5)
                goto Lf5
            Lf0:
                r5 = 0
                goto Lf5
            Lf2:
                r0 = r11
                r5 = 0
                r8 = 0
            Lf5:
                android.content.Context r7 = r1.a
                com.bykv.vk.openvk.TTVfNative r2 = r2.createVfNative(r7)
                com.tkay.network.toutiao.TTTYCustomAdSlotBuilder r7 = new com.tkay.network.toutiao.TTTYCustomAdSlotBuilder
                com.tkay.network.toutiao.TTTYAdapter r12 = r1.e
                java.lang.String r12 = r12.a
                java.util.Map r13 = r1.c
                java.util.Map r14 = r1.b
                r7.<init>(r12, r13, r14)
                int r12 = r1.d
                int r12 = java.lang.Math.min(r12, r10)
                r7.setAdCount(r12)
                r7.setSupportDeepLink(r11)
                com.tkay.network.toutiao.TTTYAdapter r12 = r1.e
                java.lang.String r12 = r12.c
                java.lang.String r13 = "0"
                boolean r12 = android.text.TextUtils.equals(r13, r12)
                if (r12 == 0) goto L155
                com.tkay.network.toutiao.TTTYAdapter r12 = r1.e
                java.lang.String r12 = r12.b
                boolean r12 = android.text.TextUtils.equals(r13, r12)
                if (r12 == 0) goto L155
                com.tkay.network.toutiao.TTTYAdapter r5 = r1.e
                java.lang.String r5 = com.tkay.network.toutiao.TTTYAdapter.b(r5)
                java.lang.String r6 = "load Native Express Ad"
                android.util.Log.i(r5, r6)
                android.content.Context r5 = r1.a
                float r3 = (float) r3
                int r3 = com.tkay.network.toutiao.TTTYAdapter.a(r5, r3)
                float r3 = (float) r3
                android.content.Context r5 = r1.a
                float r4 = (float) r4
                int r4 = com.tkay.network.toutiao.TTTYAdapter.a(r5, r4)
                float r4 = (float) r4
                r7.setExpressViewAcceptedSize(r3, r4)
                com.bykv.vk.openvk.VfSlot r3 = r7.build()
                com.tkay.network.toutiao.TTTYAdapter$2$1 r4 = new com.tkay.network.toutiao.TTTYAdapter$2$1
                r4.<init>(r1, r0)
                r2.loadNtExpressVn(r3, r4)
                return
            L155:
                com.tkay.network.toutiao.TTTYAdapter r12 = r1.e
                java.lang.String r12 = r12.c
                java.lang.String r14 = "1"
                boolean r12 = android.text.TextUtils.equals(r14, r12)
                if (r12 == 0) goto L196
                com.tkay.network.toutiao.TTTYAdapter r12 = r1.e
                java.lang.String r12 = r12.b
                boolean r12 = android.text.TextUtils.equals(r13, r12)
                if (r12 == 0) goto L196
                com.tkay.network.toutiao.TTTYAdapter r5 = r1.e
                java.lang.String r5 = com.tkay.network.toutiao.TTTYAdapter.b(r5)
                java.lang.String r6 = "load Native Express Video"
                android.util.Log.i(r5, r6)
                android.content.Context r5 = r1.a
                float r3 = (float) r3
                int r3 = com.tkay.network.toutiao.TTTYAdapter.a(r5, r3)
                float r3 = (float) r3
                android.content.Context r5 = r1.a
                float r4 = (float) r4
                int r4 = com.tkay.network.toutiao.TTTYAdapter.a(r5, r4)
                float r4 = (float) r4
                r7.setExpressViewAcceptedSize(r3, r4)
                com.bykv.vk.openvk.VfSlot r3 = r7.build()
                com.tkay.network.toutiao.TTTYAdapter$2$2 r4 = new com.tkay.network.toutiao.TTTYAdapter$2$2
                r4.<init>(r1, r0)
                r2.loadExpressDrawVf(r3, r4)
                return
            L196:
                if (r3 <= 0) goto L19e
                if (r4 <= 0) goto L19e
                r7.setImageAcceptedSize(r3, r4)
                goto L1a5
            L19e:
                r3 = 320(0x140, float:4.48E-43)
                r4 = 640(0x280, float:8.97E-43)
                r7.setImageAcceptedSize(r4, r3)
            L1a5:
                com.tkay.network.toutiao.TTTYAdapter r3 = r1.e
                java.lang.String r3 = r3.c
                r4 = -1
                int r12 = r3.hashCode()
                switch(r12) {
                    case 48: goto L1d8;
                    case 49: goto L1d0;
                    case 50: goto L1c6;
                    case 51: goto L1bc;
                    case 52: goto L1b2;
                    default: goto L1b1;
                }
            L1b1:
                goto L1df
            L1b2:
                java.lang.String r12 = "4"
                boolean r3 = r3.equals(r12)
                if (r3 == 0) goto L1df
                r4 = r6
                goto L1df
            L1bc:
                java.lang.String r12 = "3"
                boolean r3 = r3.equals(r12)
                if (r3 == 0) goto L1df
                r4 = r10
                goto L1df
            L1c6:
                java.lang.String r12 = "2"
                boolean r3 = r3.equals(r12)
                if (r3 == 0) goto L1df
                r4 = r9
                goto L1df
            L1d0:
                boolean r3 = r3.equals(r14)
                if (r3 == 0) goto L1df
                r4 = r11
                goto L1df
            L1d8:
                boolean r3 = r3.equals(r13)
                if (r3 == 0) goto L1df
                r4 = 0
            L1df:
                if (r4 == 0) goto L22d
                if (r4 == r11) goto L220
                if (r4 == r9) goto L210
                if (r4 == r10) goto L200
                if (r4 == r6) goto L1f3
                com.tkay.network.toutiao.TTTYAdapter r0 = r1.e
                java.lang.String r2 = ""
                java.lang.String r3 = "The Native type is not exit."
                r0.notifyATLoadFail(r2, r3)
                return
            L1f3:
                com.bykv.vk.openvk.VfSlot r3 = r7.build()
                com.tkay.network.toutiao.TTTYAdapter$2$7 r4 = new com.tkay.network.toutiao.TTTYAdapter$2$7
                r4.<init>(r1, r0, r8, r5)
                r2.loadStream(r3, r4)
                return
            L200:
                r7.setNativeAdType(r9)
                com.bykv.vk.openvk.VfSlot r3 = r7.build()
                com.tkay.network.toutiao.TTTYAdapter$2$6 r4 = new com.tkay.network.toutiao.TTTYAdapter$2$6
                r4.<init>(r1, r0, r8, r5)
                r2.loadNativeVn(r3, r4)
                return
            L210:
                r7.setNativeAdType(r11)
                com.bykv.vk.openvk.VfSlot r3 = r7.build()
                com.tkay.network.toutiao.TTTYAdapter$2$5 r4 = new com.tkay.network.toutiao.TTTYAdapter$2$5
                r4.<init>(r1, r0, r8, r5)
                r2.loadNativeVn(r3, r4)
                return
            L220:
                com.bykv.vk.openvk.VfSlot r3 = r7.build()
                com.tkay.network.toutiao.TTTYAdapter$2$4 r4 = new com.tkay.network.toutiao.TTTYAdapter$2$4
                r4.<init>(r1, r0, r8, r5)
                r2.loadDrawVfList(r3, r4)
                return
            L22d:
                com.bykv.vk.openvk.VfSlot r3 = r7.build()
                com.tkay.network.toutiao.TTTYAdapter$2$3 r4 = new com.tkay.network.toutiao.TTTYAdapter$2$3
                r4.<init>(r1, r0, r8, r5)
                r2.loadVfList(r3, r4)
                return
        }
    }

    final class 3 implements com.tkay.network.toutiao.TTTYNativeExpressHandler.RenderCallback {
        final android.content.Context a;
        final boolean b;
        final boolean c;
        final com.tkay.network.toutiao.TTTYAdapter d;

        3(com.tkay.network.toutiao.TTTYAdapter r1, android.content.Context r2, boolean r3, boolean r4) {
                r0 = this;
                r0.d = r1
                r0.a = r2
                r0.b = r3
                r0.c = r4
                r0.<init>()
                return
        }

        @Override
        public final void onRenderFail(java.lang.String r2, int r3) {
                r1 = this;
                com.tkay.network.toutiao.TTTYAdapter r0 = r1.d
                java.lang.String r3 = java.lang.String.valueOf(r3)
                r0.notifyATLoadFail(r3, r2)
                return
        }

        @Override
        public final void onRenderSuccess(java.util.List<com.bykv.vk.openvk.TTNtExpressObject> r10) {
                r9 = this;
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                java.util.Iterator r1 = r10.iterator()
            L9:
                boolean r2 = r1.hasNext()
                if (r2 == 0) goto L2a
                java.lang.Object r2 = r1.next()
                r6 = r2
                com.bykv.vk.openvk.TTNtExpressObject r6 = (com.bykv.vk.openvk.TTNtExpressObject) r6
                com.tkay.network.toutiao.TTTYNativeExpressAd r2 = new com.tkay.network.toutiao.TTTYNativeExpressAd
                android.content.Context r4 = r9.a
                com.tkay.network.toutiao.TTTYAdapter r3 = r9.d
                java.lang.String r5 = r3.a
                boolean r7 = r9.b
                boolean r8 = r9.c
                r3 = r2
                r3.<init>(r4, r5, r6, r7, r8)
                r0.add(r2)
                goto L9
            L2a:
                int r1 = r0.size()
                com.tkay.nativead.unitgroup.api.CustomNativeAd[] r1 = new com.tkay.nativead.unitgroup.api.CustomNativeAd[r1]
                java.lang.Object[] r0 = r0.toArray(r1)
                com.tkay.nativead.unitgroup.api.CustomNativeAd[] r0 = (com.tkay.nativead.unitgroup.api.CustomNativeAd[]) r0
                com.tkay.network.toutiao.TTTYAdapter r1 = r9.d
                com.tkay.network.toutiao.TTTYAdapter.a(r1, r10, r0)
                return
        }
    }

    public TTTYAdapter() {
            r2 = this;
            r2.<init>()
            java.lang.Class r0 = r2.getClass()
            java.lang.String r0 = r0.getSimpleName()
            r2.g = r0
            r0 = 0
            r2.d = r0
            java.lang.String r1 = ""
            r2.e = r1
            r2.f = r0
            return
    }

    static int a(android.content.Context r1, float r2) {
            android.content.res.Resources r1 = r1.getResources()
            android.util.DisplayMetrics r1 = r1.getDisplayMetrics()
            float r1 = r1.density
            r0 = 0
            int r0 = (r1 > r0 ? 1 : (r1 == r0 ? 0 : -1))
            if (r0 > 0) goto L11
            r1 = 1065353216(0x3f800000, float:1.0)
        L11:
            float r2 = r2 / r1
            r1 = 1056964608(0x3f000000, float:0.5)
            float r2 = r2 + r1
            int r1 = (int) r2
            return r1
    }

    static int a(com.tkay.network.toutiao.TTTYAdapter r0) {
            int r0 = r0.mRequestNum
            return r0
    }

    private void a(android.content.Context r2, java.util.List<com.bykv.vk.openvk.TTNtExpressObject> r3, boolean r4, boolean r5) {
            r1 = this;
            com.tkay.network.toutiao.TTTYNativeExpressHandler r0 = new com.tkay.network.toutiao.TTTYNativeExpressHandler
            r0.<init>(r3)
            com.tkay.network.toutiao.TTTYAdapter$3 r3 = new com.tkay.network.toutiao.TTTYAdapter$3
            r3.<init>(r1, r2, r4, r5)
            r0.startRender(r3)
            return
    }

    private void a(android.content.Context r7, java.util.Map<java.lang.String, java.lang.Object> r8, java.util.Map<java.lang.String, java.lang.Object> r9, int r10) {
            r6 = this;
            android.content.Context r2 = r7.getApplicationContext()
            java.lang.String r7 = r6.c
            boolean r7 = android.text.TextUtils.isEmpty(r7)
            if (r7 == 0) goto L14
            java.lang.String r7 = ""
            java.lang.String r8 = "nativeType is empty"
            r6.notifyATLoadFail(r7, r8)
            return
        L14:
            com.tkay.network.toutiao.TTTYAdapter$2 r7 = new com.tkay.network.toutiao.TTTYAdapter$2
            r0 = r7
            r1 = r6
            r3 = r9
            r4 = r8
            r5 = r10
            r0.<init>(r1, r2, r3, r4, r5)
            r6.runOnNetworkRequestThread(r7)
            return
    }

    static void a(com.tkay.network.toutiao.TTTYAdapter r1, android.content.Context r2, java.util.List r3, boolean r4, boolean r5) {
            com.tkay.network.toutiao.TTTYNativeExpressHandler r0 = new com.tkay.network.toutiao.TTTYNativeExpressHandler
            r0.<init>(r3)
            com.tkay.network.toutiao.TTTYAdapter$3 r3 = new com.tkay.network.toutiao.TTTYAdapter$3
            r3.<init>(r1, r2, r4, r5)
            r0.startRender(r3)
            return
    }

    static void a(com.tkay.network.toutiao.TTTYAdapter r6, android.content.Context r7, java.util.Map r8, java.util.Map r9, int r10) {
            android.content.Context r2 = r7.getApplicationContext()
            java.lang.String r7 = r6.c
            boolean r7 = android.text.TextUtils.isEmpty(r7)
            if (r7 == 0) goto L14
            java.lang.String r7 = ""
            java.lang.String r8 = "nativeType is empty"
            r6.notifyATLoadFail(r7, r8)
            return
        L14:
            com.tkay.network.toutiao.TTTYAdapter$2 r7 = new com.tkay.network.toutiao.TTTYAdapter$2
            r0 = r7
            r1 = r6
            r3 = r9
            r4 = r8
            r5 = r10
            r0.<init>(r1, r2, r3, r4, r5)
            r6.runOnNetworkRequestThread(r7)
            return
    }

    static void a(com.tkay.network.toutiao.TTTYAdapter r4, java.util.List r5, com.tkay.nativead.unitgroup.api.CustomNativeAd[] r6) {
            int r0 = r5.size()
            if (r0 == 0) goto L65
            int r0 = r6.length
            if (r0 != 0) goto La
            goto L65
        La:
            r0 = 0
            java.lang.Object r1 = r5.get(r0)
            java.util.HashMap r2 = new java.util.HashMap
            r3 = 3
            r2.<init>(r3)
            boolean r3 = r1 instanceof com.bykv.vk.openvk.TTVfObject
            if (r3 == 0) goto L2a
            r3 = r1
            com.bykv.vk.openvk.TTVfObject r3 = (com.bykv.vk.openvk.TTVfObject) r3     // Catch: java.lang.Throwable -> L26
            java.util.Map r3 = r3.getMediaExtraInfo()     // Catch: java.lang.Throwable -> L26
            if (r3 == 0) goto L2a
            r2.putAll(r3)     // Catch: java.lang.Throwable -> L26
            goto L2a
        L26:
            r3 = move-exception
            r3.printStackTrace()
        L2a:
            boolean r3 = r1 instanceof com.bykv.vk.openvk.TTNtExpressObject
            if (r3 == 0) goto L3e
            com.bykv.vk.openvk.TTNtExpressObject r1 = (com.bykv.vk.openvk.TTNtExpressObject) r1     // Catch: java.lang.Throwable -> L3a
            java.util.Map r1 = r1.getMediaExtraInfo()     // Catch: java.lang.Throwable -> L3a
            if (r1 == 0) goto L3e
            r2.putAll(r1)     // Catch: java.lang.Throwable -> L3a
            goto L3e
        L3a:
            r1 = move-exception
            r1.printStackTrace()
        L3e:
            boolean r1 = r4.f
            if (r1 == 0) goto L5b
            com.tkay.core.api.TYBiddingListener r1 = r4.mBiddingListener
            if (r1 == 0) goto L64
            com.tkay.network.toutiao.TTTYInitManager r1 = com.tkay.network.toutiao.TTTYInitManager.getInstance()
            r6 = r6[r0]
            java.lang.Object r5 = r5.get(r0)
            com.bykv.vk.openvk.TTClientBidding r5 = (com.bykv.vk.openvk.TTClientBidding) r5
            com.tkay.core.api.TYBiddingListener r0 = r4.mBiddingListener
            r1.a(r2, r6, r5, r0)
            r5 = 0
            r4.mBiddingListener = r5
            return
        L5b:
            com.tkay.core.api.TYCustomLoadListener r5 = r4.mLoadListener
            if (r5 == 0) goto L64
            com.tkay.core.api.TYCustomLoadListener r4 = r4.mLoadListener
            r4.onAdCacheLoaded(r6)
        L64:
            return
        L65:
            java.lang.String r5 = ""
            java.lang.String r6 = "Ad list is empty."
            r4.notifyATLoadFail(r5, r6)
            return
    }

    private void a(java.util.List<? extends com.bykv.vk.openvk.TTClientBidding> r5, com.tkay.nativead.unitgroup.api.CustomNativeAd... r6) {
            r4 = this;
            int r0 = r5.size()
            if (r0 == 0) goto L65
            int r0 = r6.length
            if (r0 != 0) goto La
            goto L65
        La:
            r0 = 0
            java.lang.Object r1 = r5.get(r0)
            java.util.HashMap r2 = new java.util.HashMap
            r3 = 3
            r2.<init>(r3)
            boolean r3 = r1 instanceof com.bykv.vk.openvk.TTVfObject
            if (r3 == 0) goto L2a
            r3 = r1
            com.bykv.vk.openvk.TTVfObject r3 = (com.bykv.vk.openvk.TTVfObject) r3     // Catch: java.lang.Throwable -> L26
            java.util.Map r3 = r3.getMediaExtraInfo()     // Catch: java.lang.Throwable -> L26
            if (r3 == 0) goto L2a
            r2.putAll(r3)     // Catch: java.lang.Throwable -> L26
            goto L2a
        L26:
            r3 = move-exception
            r3.printStackTrace()
        L2a:
            boolean r3 = r1 instanceof com.bykv.vk.openvk.TTNtExpressObject
            if (r3 == 0) goto L3e
            com.bykv.vk.openvk.TTNtExpressObject r1 = (com.bykv.vk.openvk.TTNtExpressObject) r1     // Catch: java.lang.Throwable -> L3a
            java.util.Map r1 = r1.getMediaExtraInfo()     // Catch: java.lang.Throwable -> L3a
            if (r1 == 0) goto L3e
            r2.putAll(r1)     // Catch: java.lang.Throwable -> L3a
            goto L3e
        L3a:
            r1 = move-exception
            r1.printStackTrace()
        L3e:
            boolean r1 = r4.f
            if (r1 == 0) goto L5b
            com.tkay.core.api.TYBiddingListener r1 = r4.mBiddingListener
            if (r1 == 0) goto L64
            com.tkay.network.toutiao.TTTYInitManager r1 = com.tkay.network.toutiao.TTTYInitManager.getInstance()
            r6 = r6[r0]
            java.lang.Object r5 = r5.get(r0)
            com.bykv.vk.openvk.TTClientBidding r5 = (com.bykv.vk.openvk.TTClientBidding) r5
            com.tkay.core.api.TYBiddingListener r0 = r4.mBiddingListener
            r1.a(r2, r6, r5, r0)
            r5 = 0
            r4.mBiddingListener = r5
            return
        L5b:
            com.tkay.core.api.TYCustomLoadListener r5 = r4.mLoadListener
            if (r5 == 0) goto L64
            com.tkay.core.api.TYCustomLoadListener r5 = r4.mLoadListener
            r5.onAdCacheLoaded(r6)
        L64:
            return
        L65:
            java.lang.String r5 = ""
            java.lang.String r6 = "Ad list is empty."
            r4.notifyATLoadFail(r5, r6)
            return
    }

    private boolean a(java.util.Map<java.lang.String, java.lang.Object> r4) {
            r3 = this;
            java.lang.String r0 = "media_size"
            java.lang.String r1 = "app_id"
            java.lang.Object r1 = r4.get(r1)
            java.lang.String r1 = (java.lang.String) r1
            java.lang.String r2 = "slot_id"
            java.lang.Object r2 = r4.get(r2)
            java.lang.String r2 = (java.lang.String) r2
            r3.a = r2
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L76
            java.lang.String r1 = r3.a
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L23
            goto L76
        L23:
            java.lang.String r1 = "1"
            r3.b = r1
            java.lang.String r1 = "layout_type"
            boolean r2 = r4.containsKey(r1)
            if (r2 == 0) goto L38
            java.lang.Object r1 = r4.get(r1)
            java.lang.String r1 = (java.lang.String) r1
            r3.b = r1
            goto L3c
        L38:
            java.lang.String r1 = "0"
            r3.b = r1
        L3c:
            java.lang.String r1 = "is_video"
            boolean r2 = r4.containsKey(r1)
            if (r2 == 0) goto L4e
            java.lang.Object r1 = r4.get(r1)
            java.lang.String r1 = r1.toString()
            r3.c = r1
        L4e:
            boolean r1 = r4.containsKey(r0)     // Catch: java.lang.Exception -> L62
            if (r1 == 0) goto L62
            java.lang.Object r0 = r4.get(r0)     // Catch: java.lang.Exception -> L62
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L62
            int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.Exception -> L62
            r3.d = r0     // Catch: java.lang.Exception -> L62
        L62:
            java.lang.String r0 = "payload"
            boolean r1 = r4.containsKey(r0)
            if (r1 == 0) goto L74
            java.lang.Object r4 = r4.get(r0)
            java.lang.String r4 = r4.toString()
            r3.e = r4
        L74:
            r4 = 1
            return r4
        L76:
            r4 = 0
            return r4
    }

    private static int b(android.content.Context r1, float r2) {
            android.content.res.Resources r1 = r1.getResources()
            android.util.DisplayMetrics r1 = r1.getDisplayMetrics()
            float r1 = r1.density
            r0 = 0
            int r0 = (r1 > r0 ? 1 : (r1 == r0 ? 0 : -1))
            if (r0 > 0) goto L11
            r1 = 1065353216(0x3f800000, float:1.0)
        L11:
            float r2 = r2 / r1
            r1 = 1056964608(0x3f000000, float:0.5)
            float r2 = r2 + r1
            int r1 = (int) r2
            return r1
    }

    static java.lang.String b(com.tkay.network.toutiao.TTTYAdapter r0) {
            java.lang.String r0 = r0.g
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener c(com.tkay.network.toutiao.TTTYAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    static com.tkay.core.api.TYCustomLoadListener d(com.tkay.network.toutiao.TTTYAdapter r0) {
            com.tkay.core.api.TYCustomLoadListener r0 = r0.mLoadListener
            return r0
    }

    @Override
    public void destory() {
            r0 = this;
            return
    }

    @Override
    public java.lang.String getNetworkName() {
            r1 = this;
            com.tkay.network.toutiao.TTTYInitManager r0 = com.tkay.network.toutiao.TTTYInitManager.getInstance()
            java.lang.String r0 = r0.getNetworkName()
            return r0
    }

    @Override
    public java.lang.String getNetworkPlacementId() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    @Override
    public java.lang.String getNetworkSDKVersion() {
            r1 = this;
            com.tkay.network.toutiao.TTTYInitManager r0 = com.tkay.network.toutiao.TTTYInitManager.getInstance()
            java.lang.String r0 = r0.getNetworkVersion()
            return r0
    }

    @Override
    public void loadCustomNetworkAd(android.content.Context r3, java.util.Map<java.lang.String, java.lang.Object> r4, java.util.Map<java.lang.String, java.lang.Object> r5) {
            r2 = this;
            boolean r0 = r2.a(r4)
            if (r0 != 0) goto Le
            java.lang.String r3 = ""
            java.lang.String r4 = "app_id or slot_id is empty!"
            r2.notifyATLoadFail(r3, r4)
            return
        Le:
            com.tkay.network.toutiao.TTTYInitManager r0 = com.tkay.network.toutiao.TTTYInitManager.getInstance()
            com.tkay.network.toutiao.TTTYAdapter$1 r1 = new com.tkay.network.toutiao.TTTYAdapter$1
            r1.<init>(r2, r3, r4, r5)
            r0.initSDK(r3, r4, r1)
            return
    }

    @Override
    public boolean startBiddingRequest(android.content.Context r1, java.util.Map<java.lang.String, java.lang.Object> r2, java.util.Map<java.lang.String, java.lang.Object> r3, com.tkay.core.api.TYBiddingListener r4) {
            r0 = this;
            r4 = 1
            r0.f = r4
            r0.loadCustomNetworkAd(r1, r2, r3)
            return r4
    }
}
