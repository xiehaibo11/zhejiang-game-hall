package com.mbridge.msdk.video.dynview.moffer;

public class a {
    private static volatile com.mbridge.msdk.video.dynview.moffer.a a;
    private java.util.Map<java.lang.String, java.lang.ref.SoftReference<com.mbridge.msdk.video.dynview.moffer.MOfferModel>> b;
    private int c;




    private a() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.b = r0
            r0 = 500(0x1f4, float:7.0E-43)
            r1.c = r0
            return
    }

    public static com.mbridge.msdk.video.dynview.moffer.a a() {
            com.mbridge.msdk.video.dynview.moffer.a r0 = com.mbridge.msdk.video.dynview.moffer.a.a
            if (r0 != 0) goto L19
            java.lang.Class<com.mbridge.msdk.video.dynview.moffer.a> r0 = com.mbridge.msdk.video.dynview.moffer.a.class
            monitor-enter(r0)
            com.mbridge.msdk.video.dynview.moffer.a r1 = com.mbridge.msdk.video.dynview.moffer.a.a     // Catch: java.lang.Throwable -> L16
            if (r1 != 0) goto L12
            com.mbridge.msdk.video.dynview.moffer.a r1 = new com.mbridge.msdk.video.dynview.moffer.a     // Catch: java.lang.Throwable -> L16
            r1.<init>()     // Catch: java.lang.Throwable -> L16
            com.mbridge.msdk.video.dynview.moffer.a.a = r1     // Catch: java.lang.Throwable -> L16
        L12:
            com.mbridge.msdk.video.dynview.moffer.a r1 = com.mbridge.msdk.video.dynview.moffer.a.a     // Catch: java.lang.Throwable -> L16
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L16
            return r1
        L16:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L16
            throw r1
        L19:
            com.mbridge.msdk.video.dynview.moffer.a r0 = com.mbridge.msdk.video.dynview.moffer.a.a
            return r0
    }

    static void a(com.mbridge.msdk.video.dynview.moffer.a r10, com.mbridge.msdk.video.dynview.moffer.MOfferModel r11, android.view.ViewGroup r12, android.view.ViewGroup r13, com.mbridge.msdk.foundation.entity.CampaignUnit r14) {
            if (r11 == 0) goto L132
            if (r12 == 0) goto L132
            if (r13 == 0) goto L132
            if (r14 != 0) goto La
            goto L132
        La:
            android.view.ViewGroup$LayoutParams r0 = r13.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r0 = (android.widget.RelativeLayout.LayoutParams) r0
            r1 = -1
            if (r0 != 0) goto L19
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r2 = -2
            r0.<init>(r1, r2)
        L19:
            r2 = 12
            r0.addRule(r2, r1)
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            r2 = 1084227584(0x40a00000, float:5.0)
            int r1 = com.mbridge.msdk.foundation.tools.ae.b(r1, r2)
            r0.setMargins(r1, r1, r1, r1)
            java.lang.String r1 = "MOfferEnergize"
            if (r13 != 0) goto L34
            goto L76
        L34:
            android.graphics.drawable.Drawable r2 = r13.getBackground()
            if (r2 == 0) goto L3b
            goto L76
        L3b:
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L6e
            android.content.Context r2 = r2.j()     // Catch: java.lang.Exception -> L6e
            java.lang.String r3 = "mbridge_reward_more_offer_default_bg"
            java.lang.String r4 = "drawable"
            int r2 = com.mbridge.msdk.foundation.tools.s.a(r2, r3, r4)     // Catch: java.lang.Exception -> L6e
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L6e
            android.content.Context r3 = r3.j()     // Catch: java.lang.Exception -> L6e
            android.content.res.Resources r3 = r3.getResources()     // Catch: java.lang.Exception -> L6e
            android.graphics.drawable.Drawable r2 = r3.getDrawable(r2)     // Catch: java.lang.Exception -> L6e
            if (r2 == 0) goto L76
            java.lang.String r3 = "mbridge_moreoffer_hls"
            int r3 = r10.b(r3)     // Catch: java.lang.Exception -> L6e
            android.view.View r3 = r13.findViewById(r3)     // Catch: java.lang.Exception -> L6e
            if (r3 != 0) goto L6a
            goto L76
        L6a:
            r3.setBackground(r2)     // Catch: java.lang.Exception -> L6e
            goto L76
        L6e:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r1, r2)
        L76:
            r13.setLayoutParams(r0)
            android.view.ViewParent r0 = r13.getParent()
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            if (r0 == 0) goto L84
            r0.removeAllViews()
        L84:
            boolean r0 = r12 instanceof com.mbridge.msdk.video.module.MBridgeNativeEndCardView     // Catch: java.lang.Exception -> L12a
            r2 = 1120403456(0x42c80000, float:100.0)
            if (r0 == 0) goto Lc2
            r0 = r12
            com.mbridge.msdk.video.module.MBridgeNativeEndCardView r0 = (com.mbridge.msdk.video.module.MBridgeNativeEndCardView) r0     // Catch: java.lang.Exception -> L12a
            boolean r0 = r0.isDyXmlSuccess()     // Catch: java.lang.Exception -> L12a
            if (r0 == 0) goto L9d
            r0 = -1642631508(0xffffffff9e176eac, float:-8.01676E-21)
            android.view.View r0 = r12.findViewById(r0)     // Catch: java.lang.Exception -> L12a
            android.widget.RelativeLayout r0 = (android.widget.RelativeLayout) r0     // Catch: java.lang.Exception -> L12a
            goto La9
        L9d:
            java.lang.String r0 = "mbridge_native_ec_layout"
            int r0 = r10.b(r0)     // Catch: java.lang.Exception -> L12a
            android.view.View r0 = r12.findViewById(r0)     // Catch: java.lang.Exception -> L12a
            android.widget.RelativeLayout r0 = (android.widget.RelativeLayout) r0     // Catch: java.lang.Exception -> L12a
        La9:
            r4 = r0
            com.mbridge.msdk.video.dynview.h.b r3 = new com.mbridge.msdk.video.dynview.h.b     // Catch: java.lang.Exception -> L12a
            r3.<init>()     // Catch: java.lang.Exception -> L12a
            r5 = 0
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L12a
            android.content.Context r0 = r0.j()     // Catch: java.lang.Exception -> L12a
            int r6 = com.mbridge.msdk.foundation.tools.ae.b(r0, r2)     // Catch: java.lang.Exception -> L12a
            int r0 = r10.c     // Catch: java.lang.Exception -> L12a
            long r7 = (long) r0     // Catch: java.lang.Exception -> L12a
            r3.a(r4, r5, r6, r7)     // Catch: java.lang.Exception -> L12a
        Lc2:
            java.lang.String r0 = "mbridge_reward_moreoffer_layout"
            int r0 = r10.b(r0)     // Catch: java.lang.Exception -> L12a
            android.view.View r0 = r12.findViewById(r0)     // Catch: java.lang.Exception -> L12a
            android.widget.RelativeLayout r0 = (android.widget.RelativeLayout) r0     // Catch: java.lang.Exception -> L12a
            if (r0 != 0) goto Ld9
            r0 = -82036151(0xfffffffffb1c3a49, float:-8.111805E35)
            android.view.View r0 = r12.findViewById(r0)     // Catch: java.lang.Exception -> L12a
            android.widget.RelativeLayout r0 = (android.widget.RelativeLayout) r0     // Catch: java.lang.Exception -> L12a
        Ld9:
            if (r0 == 0) goto Le9
            boolean r3 = r12.isShown()     // Catch: java.lang.Exception -> L12a
            if (r3 == 0) goto Lec
            r3 = 0
            r0.setVisibility(r3)     // Catch: java.lang.Exception -> L12a
            r0.addView(r13)     // Catch: java.lang.Exception -> L12a
            goto Lec
        Le9:
            r12.addView(r13)     // Catch: java.lang.Exception -> L12a
        Lec:
            com.mbridge.msdk.video.dynview.h.b r0 = new com.mbridge.msdk.video.dynview.h.b     // Catch: java.lang.Exception -> L12a
            r0.<init>()     // Catch: java.lang.Exception -> L12a
            r4 = 0
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L12a
            android.content.Context r3 = r3.j()     // Catch: java.lang.Exception -> L12a
            int r5 = com.mbridge.msdk.foundation.tools.ae.h(r3)     // Catch: java.lang.Exception -> L12a
            r6 = 0
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L12a
            android.content.Context r3 = r3.j()     // Catch: java.lang.Exception -> L12a
            int r7 = com.mbridge.msdk.foundation.tools.ae.b(r3, r2)     // Catch: java.lang.Exception -> L12a
            r8 = 0
            r2 = r0
            r3 = r13
            r2.a(r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Exception -> L12a
            boolean r13 = r12 instanceof com.mbridge.msdk.video.module.MBridgeNativeEndCardView     // Catch: java.lang.Exception -> L12a
            if (r13 == 0) goto L11c
            r13 = r12
            com.mbridge.msdk.video.module.MBridgeNativeEndCardView r13 = (com.mbridge.msdk.video.module.MBridgeNativeEndCardView) r13     // Catch: java.lang.Exception -> L12a
            r13.setMoreOfferCampaignUnit(r14)     // Catch: java.lang.Exception -> L12a
        L11c:
            com.mbridge.msdk.video.dynview.moffer.a$2 r13 = new com.mbridge.msdk.video.dynview.moffer.a$2     // Catch: java.lang.Exception -> L12a
            r13.<init>(r10, r11)     // Catch: java.lang.Exception -> L12a
            int r10 = r10.c     // Catch: java.lang.Exception -> L12a
            int r10 = r10 + 500
            long r10 = (long) r10     // Catch: java.lang.Exception -> L12a
            r12.postDelayed(r13, r10)     // Catch: java.lang.Exception -> L12a
            goto L132
        L12a:
            r10 = move-exception
            java.lang.String r10 = r10.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r1, r10)
        L132:
            return
    }

    private int b(java.lang.String r3) {
            r2 = this;
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            java.lang.String r1 = "id"
            int r3 = com.mbridge.msdk.foundation.tools.s.a(r0, r3, r1)
            return r3
    }

    public final void a(android.view.ViewGroup r3, java.lang.String r4, com.mbridge.msdk.video.module.a.a r5) {
            r2 = this;
            if (r3 == 0) goto L41
            if (r5 == 0) goto L41
            java.util.Map<java.lang.String, java.lang.ref.SoftReference<com.mbridge.msdk.video.dynview.moffer.MOfferModel>> r0 = r2.b
            if (r0 != 0) goto L9
            goto L41
        L9:
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L10
            return
        L10:
            r0 = 0
            java.util.Map<java.lang.String, java.lang.ref.SoftReference<com.mbridge.msdk.video.dynview.moffer.MOfferModel>> r1 = r2.b
            boolean r1 = r1.containsKey(r4)
            if (r1 == 0) goto L41
            java.util.Map<java.lang.String, java.lang.ref.SoftReference<com.mbridge.msdk.video.dynview.moffer.MOfferModel>> r1 = r2.b
            java.lang.Object r4 = r1.get(r4)
            java.lang.ref.SoftReference r4 = (java.lang.ref.SoftReference) r4
            if (r4 == 0) goto L30
            java.lang.Object r1 = r4.get()
            if (r1 == 0) goto L30
            java.lang.Object r4 = r4.get()
            r0 = r4
            com.mbridge.msdk.video.dynview.moffer.MOfferModel r0 = (com.mbridge.msdk.video.dynview.moffer.MOfferModel) r0
        L30:
            if (r0 != 0) goto L33
            return
        L33:
            if (r0 != 0) goto L36
            goto L41
        L36:
            com.mbridge.msdk.video.dynview.moffer.a$1 r4 = new com.mbridge.msdk.video.dynview.moffer.a$1
            r4.<init>(r2, r3, r0)
            r0.setMoreOfferListener(r4, r5)
            r0.showView()
        L41:
            return
    }

    public final void a(com.mbridge.msdk.foundation.entity.CampaignEx r3, int r4) {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r3.getRequestId()
            r0.append(r1)
            java.lang.String r1 = "_"
            r0.append(r1)
            java.lang.String r1 = r3.getId()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.util.Map<java.lang.String, java.lang.ref.SoftReference<com.mbridge.msdk.video.dynview.moffer.MOfferModel>> r1 = r2.b
            if (r1 != 0) goto L2a
            java.util.concurrent.ConcurrentHashMap r1 = new java.util.concurrent.ConcurrentHashMap
            r1.<init>()
            r2.b = r1
        L2a:
            java.util.Map<java.lang.String, java.lang.ref.SoftReference<com.mbridge.msdk.video.dynview.moffer.MOfferModel>> r1 = r2.b
            boolean r1 = r1.containsKey(r0)
            if (r1 == 0) goto L33
            return
        L33:
            com.mbridge.msdk.video.dynview.moffer.MOfferModel r1 = new com.mbridge.msdk.video.dynview.moffer.MOfferModel     // Catch: java.lang.Exception -> L55
            r1.<init>()     // Catch: java.lang.Exception -> L55
            r1.setFromType(r4)     // Catch: java.lang.Exception -> L55
            java.lang.ref.SoftReference r4 = new java.lang.ref.SoftReference     // Catch: java.lang.Exception -> L55
            r4.<init>(r1)     // Catch: java.lang.Exception -> L55
            java.lang.Object r1 = r4.get()     // Catch: java.lang.Exception -> L55
            if (r1 == 0) goto L5f
            java.util.Map<java.lang.String, java.lang.ref.SoftReference<com.mbridge.msdk.video.dynview.moffer.MOfferModel>> r1 = r2.b     // Catch: java.lang.Exception -> L55
            r1.put(r0, r4)     // Catch: java.lang.Exception -> L55
            java.lang.Object r4 = r4.get()     // Catch: java.lang.Exception -> L55
            com.mbridge.msdk.video.dynview.moffer.MOfferModel r4 = (com.mbridge.msdk.video.dynview.moffer.MOfferModel) r4     // Catch: java.lang.Exception -> L55
            r4.buildMofferAd(r3)     // Catch: java.lang.Exception -> L55
            goto L5f
        L55:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()
            java.lang.String r4 = "MOfferEnergize"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L5f:
            return
    }

    public final void a(com.mbridge.msdk.foundation.entity.CampaignEx r2, android.view.ViewGroup r3, com.mbridge.msdk.video.module.a.a r4, int r5) {
            r1 = this;
            com.mbridge.msdk.video.dynview.moffer.MOfferModel r0 = new com.mbridge.msdk.video.dynview.moffer.MOfferModel
            r0.<init>()
            r0.setFromType(r5)
            com.mbridge.msdk.video.dynview.moffer.a$3 r5 = new com.mbridge.msdk.video.dynview.moffer.a$3
            r5.<init>(r1, r0, r3)
            r0.setMoreOfferListener(r5, r4)
            r0.buildMofferAd(r2)
            return
    }

    public final boolean a(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.ref.SoftReference<com.mbridge.msdk.video.dynview.moffer.MOfferModel>> r0 = r1.b
            if (r0 == 0) goto L12
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto Lb
            goto L12
        Lb:
            java.util.Map<java.lang.String, java.lang.ref.SoftReference<com.mbridge.msdk.video.dynview.moffer.MOfferModel>> r0 = r1.b
            boolean r2 = r0.containsKey(r2)
            return r2
        L12:
            r2 = 0
            return r2
    }

    public final void b() {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.ref.SoftReference<com.mbridge.msdk.video.dynview.moffer.MOfferModel>> r0 = r2.b     // Catch: java.lang.Exception -> L2e
            if (r0 == 0) goto L38
            java.util.Map<java.lang.String, java.lang.ref.SoftReference<com.mbridge.msdk.video.dynview.moffer.MOfferModel>> r0 = r2.b     // Catch: java.lang.Exception -> L2e
            java.util.Collection r0 = r0.values()     // Catch: java.lang.Exception -> L2e
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Exception -> L2e
        Le:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Exception -> L2e
            if (r1 == 0) goto L28
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Exception -> L2e
            java.lang.ref.SoftReference r1 = (java.lang.ref.SoftReference) r1     // Catch: java.lang.Exception -> L2e
            if (r1 == 0) goto Le
            java.lang.Object r1 = r1.get()     // Catch: java.lang.Exception -> L2e
            com.mbridge.msdk.video.dynview.moffer.MOfferModel r1 = (com.mbridge.msdk.video.dynview.moffer.MOfferModel) r1     // Catch: java.lang.Exception -> L2e
            if (r1 == 0) goto Le
            r1.mofDestroy()     // Catch: java.lang.Exception -> L2e
            goto Le
        L28:
            java.util.Map<java.lang.String, java.lang.ref.SoftReference<com.mbridge.msdk.video.dynview.moffer.MOfferModel>> r0 = r2.b     // Catch: java.lang.Exception -> L2e
            r0.clear()     // Catch: java.lang.Exception -> L2e
            goto L38
        L2e:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MOfferEnergize"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L38:
            return
    }
}
