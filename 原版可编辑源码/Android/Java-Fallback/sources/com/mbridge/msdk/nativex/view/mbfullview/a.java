package com.mbridge.msdk.nativex.view.mbfullview;

public class a {
    private static volatile com.mbridge.msdk.nativex.view.mbfullview.a b;
    private java.lang.ref.WeakReference<android.content.Context> a;


    static class 2 {
        static final int[] a = null;

        static {
                com.mbridge.msdk.nativex.view.mbfullview.BaseView$a[] r0 = com.mbridge.msdk.nativex.view.mbfullview.BaseView.a.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.mbridge.msdk.nativex.view.mbfullview.a.2.a = r0
                com.mbridge.msdk.nativex.view.mbfullview.BaseView$a r1 = com.mbridge.msdk.nativex.view.mbfullview.BaseView.a.a     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.mbridge.msdk.nativex.view.mbfullview.a.2.a     // Catch: java.lang.NoSuchFieldError -> L1d
                com.mbridge.msdk.nativex.view.mbfullview.BaseView$a r1 = com.mbridge.msdk.nativex.view.mbfullview.BaseView.a.b     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                return
        }
    }

    private class a implements com.mbridge.msdk.foundation.same.c.c {
        final com.mbridge.msdk.nativex.view.mbfullview.a a;
        private java.lang.ref.WeakReference<com.mbridge.msdk.nativex.view.mbfullview.MBridgeTopFullView> b;

        public a(com.mbridge.msdk.nativex.view.mbfullview.a r1, com.mbridge.msdk.nativex.view.mbfullview.MBridgeTopFullView r2) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                java.lang.ref.WeakReference r1 = new java.lang.ref.WeakReference
                r1.<init>(r2)
                r0.b = r1
                return
        }

        @Override
        public final void onFailedLoad(java.lang.String r1, java.lang.String r2) {
                r0 = this;
                return
        }

        @Override
        public final void onSuccessLoad(android.graphics.Bitmap r3, java.lang.String r4) {
                r2 = this;
                java.lang.ref.WeakReference<com.mbridge.msdk.nativex.view.mbfullview.MBridgeTopFullView> r4 = r2.b
                if (r4 == 0) goto L21
                java.lang.Object r4 = r4.get()
                if (r4 == 0) goto L21
                java.lang.ref.WeakReference<com.mbridge.msdk.nativex.view.mbfullview.MBridgeTopFullView> r4 = r2.b
                java.lang.Object r4 = r4.get()
                com.mbridge.msdk.nativex.view.mbfullview.MBridgeTopFullView r4 = (com.mbridge.msdk.nativex.view.mbfullview.MBridgeTopFullView) r4
                android.widget.ImageView r4 = r4.getMBridgeFullViewDisplayIcon()
                com.mbridge.msdk.nativex.view.mbfullview.a r0 = r2.a
                r1 = 25
                android.graphics.Bitmap r3 = com.mbridge.msdk.nativex.view.mbfullview.a.a(r0, r3, r1)
                r4.setImageBitmap(r3)
            L21:
                return
        }
    }

    private a(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r2)
            r1.a = r0
            return
    }

    private float a(boolean r4) {
            r3 = this;
            r0 = 0
            java.lang.ref.WeakReference<android.content.Context> r1 = r3.a     // Catch: java.lang.Throwable -> L1c
            java.lang.Object r1 = r1.get()     // Catch: java.lang.Throwable -> L1c
            android.content.Context r1 = (android.content.Context) r1     // Catch: java.lang.Throwable -> L1c
            if (r1 == 0) goto L1b
            int r2 = com.mbridge.msdk.foundation.tools.ae.i(r1)     // Catch: java.lang.Throwable -> L1c
            float r2 = (float) r2     // Catch: java.lang.Throwable -> L1c
            if (r4 == 0) goto L1a
            int r4 = com.mbridge.msdk.foundation.tools.ae.k(r1)     // Catch: java.lang.Throwable -> L1c
            float r4 = (float) r4
            float r0 = r2 + r4
            goto L1b
        L1a:
            r0 = r2
        L1b:
            return r0
        L1c:
            r4 = move-exception
            r4.printStackTrace()
            return r0
    }

    static android.graphics.Bitmap a(com.mbridge.msdk.nativex.view.mbfullview.a r6, android.graphics.Bitmap r7, int r8) {
            int r6 = r7.getWidth()
            int r0 = r7.getHeight()
            android.graphics.Bitmap$Config r1 = android.graphics.Bitmap.Config.ARGB_8888
            android.graphics.Bitmap r6 = android.graphics.Bitmap.createBitmap(r6, r0, r1)
            android.graphics.Canvas r0 = new android.graphics.Canvas
            r0.<init>(r6)
            android.graphics.Paint r1 = new android.graphics.Paint
            r1.<init>()
            android.graphics.Rect r2 = new android.graphics.Rect
            int r3 = r7.getWidth()
            int r4 = r7.getHeight()
            r5 = 0
            r2.<init>(r5, r5, r3, r4)
            android.graphics.RectF r3 = new android.graphics.RectF
            r3.<init>(r2)
            r4 = 1
            r1.setAntiAlias(r4)
            r0.drawARGB(r5, r5, r5, r5)
            r4 = -12434878(0xffffffffff424242, float:-2.5821426E38)
            r1.setColor(r4)
            r7.getWidth()
            float r8 = (float) r8
            r0.drawRoundRect(r3, r8, r8, r1)
            android.graphics.PorterDuffXfermode r8 = new android.graphics.PorterDuffXfermode
            android.graphics.PorterDuff$Mode r3 = android.graphics.PorterDuff.Mode.SRC_IN
            r8.<init>(r3)
            r1.setXfermode(r8)
            r0.drawBitmap(r7, r2, r2, r1)
            return r6
    }

    public static com.mbridge.msdk.nativex.view.mbfullview.a a(android.content.Context r2) {
            com.mbridge.msdk.nativex.view.mbfullview.a r0 = com.mbridge.msdk.nativex.view.mbfullview.a.b
            if (r0 != 0) goto L17
            java.lang.Class<com.mbridge.msdk.nativex.view.mbfullview.a> r0 = com.mbridge.msdk.nativex.view.mbfullview.a.class
            monitor-enter(r0)
            com.mbridge.msdk.nativex.view.mbfullview.a r1 = com.mbridge.msdk.nativex.view.mbfullview.a.b     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.mbridge.msdk.nativex.view.mbfullview.a r1 = new com.mbridge.msdk.nativex.view.mbfullview.a     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.mbridge.msdk.nativex.view.mbfullview.a.b = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.mbridge.msdk.nativex.view.mbfullview.a r2 = com.mbridge.msdk.nativex.view.mbfullview.a.b
            return r2
    }

    static void a(com.mbridge.msdk.nativex.view.mbfullview.a r2, android.view.View r3) {
            if (r3 != 0) goto L3
            goto L25
        L3:
            android.view.animation.AlphaAnimation r2 = new android.view.animation.AlphaAnimation
            r0 = 1045220557(0x3e4ccccd, float:0.2)
            r1 = 1065353216(0x3f800000, float:1.0)
            r2.<init>(r0, r1)
            r0 = 800(0x320, double:3.953E-321)
            r2.setDuration(r0)
            android.view.animation.LinearInterpolator r0 = new android.view.animation.LinearInterpolator
            r0.<init>()
            r2.setInterpolator(r0)
            r0 = 2
            r2.setRepeatCount(r0)
            r0 = 1
            r2.setRepeatMode(r0)
            r3.startAnimation(r2)
        L25:
            return
    }

    public final void a(android.view.View r3, com.mbridge.msdk.nativex.view.mbfullview.BaseView r4) {
            r2 = this;
            if (r3 == 0) goto L12
            if (r4 == 0) goto L12
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r1 = -1
            r0.<init>(r1, r1)
            r3.setLayoutParams(r0)
            android.widget.RelativeLayout r4 = r4.i
            r4.addView(r3)
        L12:
            return
    }

    public final void a(com.mbridge.msdk.nativex.view.mbfullview.BaseView.a r3, com.mbridge.msdk.foundation.entity.CampaignEx r4, com.mbridge.msdk.nativex.view.mbfullview.BaseView r5) {
            r2 = this;
            int[] r0 = com.mbridge.msdk.nativex.view.mbfullview.a.2.a
            int r3 = r3.ordinal()
            r3 = r0[r3]
            r0 = 1
            if (r3 == r0) goto L1b
            r0 = 2
            if (r3 == r0) goto Lf
            goto L66
        Lf:
            android.widget.TextView r3 = r5.getMBridgeFullTvInstall()
            java.lang.String r4 = r4.getAdCall()
            r3.setText(r4)
            goto L66
        L1b:
            com.mbridge.msdk.nativex.view.mbfullview.MBridgeTopFullView r5 = (com.mbridge.msdk.nativex.view.mbfullview.MBridgeTopFullView) r5
            if (r5 == 0) goto L66
            java.lang.ref.WeakReference<android.content.Context> r3 = r2.a
            java.lang.Object r3 = r3.get()
            android.content.Context r3 = (android.content.Context) r3
            if (r3 == 0) goto L39
            com.mbridge.msdk.foundation.same.c.b r3 = com.mbridge.msdk.foundation.same.c.b.a(r3)
            java.lang.String r0 = r4.getIconUrl()
            com.mbridge.msdk.nativex.view.mbfullview.a$a r1 = new com.mbridge.msdk.nativex.view.mbfullview.a$a
            r1.<init>(r2, r5)
            r3.a(r0, r1)
        L39:
            android.widget.TextView r3 = r5.getMBridgeFullViewDisplayTitle()
            java.lang.String r0 = r4.getAppName()
            r3.setText(r0)
            android.widget.TextView r3 = r5.getMBridgeFullViewDisplayDscription()
            java.lang.String r0 = r4.getAppDesc()
            r3.setText(r0)
            android.widget.TextView r3 = r5.getMBridgeFullTvInstall()
            java.lang.String r0 = r4.getAdCall()
            r3.setText(r0)
            com.mbridge.msdk.nativex.view.mbfullview.StarLevelLayoutView r3 = r5.getStarLevelLayoutView()
            double r4 = r4.getRating()
            int r4 = (int) r4
            r3.setRating(r4)
        L66:
            return
    }

    public final void a(com.mbridge.msdk.nativex.view.mbfullview.BaseView r3, boolean r4) {
            r2 = this;
            if (r3 == 0) goto L11
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 11
            if (r0 < r1) goto L11
            if (r4 == 0) goto Lc
            r4 = 0
            goto Le
        Lc:
            r4 = 4098(0x1002, float:5.743E-42)
        Le:
            r3.setSystemUiVisibility(r4)
        L11:
            return
    }

    public final void a(boolean r5, com.mbridge.msdk.nativex.view.mbfullview.BaseView r6, int r7) {
            r4 = this;
            java.lang.ref.WeakReference<android.content.Context> r0 = r4.a
            java.lang.Object r0 = r0.get()
            android.content.Context r0 = (android.content.Context) r0
            if (r0 == 0) goto L65
            r1 = 12
            r2 = 1110704128(0x42340000, float:45.0)
            if (r5 == 0) goto L51
            float r5 = r4.a(r5)
            r3 = 1077936128(0x40400000, float:3.0)
            float r5 = r5 / r3
            int r5 = (int) r5
            android.widget.RelativeLayout$LayoutParams r3 = new android.widget.RelativeLayout$LayoutParams
            int r2 = com.mbridge.msdk.foundation.tools.ae.b(r0, r2)
            r3.<init>(r5, r2)
            r5 = 11
            r3.addRule(r5)
            r3.addRule(r1)
            r5 = 1092616192(0x41200000, float:10.0)
            int r5 = com.mbridge.msdk.foundation.tools.ae.b(r0, r5)
            r3.bottomMargin = r5
            boolean r5 = com.mbridge.msdk.foundation.tools.ae.a(r0)
            if (r5 == 0) goto L3b
            if (r7 != 0) goto L3b
            r5 = 1
            goto L3c
        L3b:
            r5 = 0
        L3c:
            r7 = 1090519040(0x41000000, float:8.0)
            if (r5 == 0) goto L4a
            int r5 = com.mbridge.msdk.foundation.tools.ae.k(r0)
            int r7 = com.mbridge.msdk.foundation.tools.ae.b(r0, r7)
            int r5 = r5 + r7
            goto L4e
        L4a:
            int r5 = com.mbridge.msdk.foundation.tools.ae.b(r0, r7)
        L4e:
            r3.rightMargin = r5
            goto L5e
        L51:
            android.widget.RelativeLayout$LayoutParams r3 = new android.widget.RelativeLayout$LayoutParams
            r5 = -1
            int r7 = com.mbridge.msdk.foundation.tools.ae.b(r0, r2)
            r3.<init>(r5, r7)
            r3.addRule(r1)
        L5e:
            android.widget.FrameLayout r5 = r6.getmAnimationContent()
            r5.setLayoutParams(r3)
        L65:
            return
    }

    public final void a(boolean r6, boolean r7, com.mbridge.msdk.nativex.view.mbfullview.BaseView r8) {
            r5 = this;
            java.lang.String r0 = "#ff264870"
            int r0 = android.graphics.Color.parseColor(r0)
            android.widget.LinearLayout r1 = r8.getmAnimationPlayer()
            r1.setBackgroundColor(r0)
            java.lang.ref.WeakReference<android.content.Context> r1 = r5.a
            java.lang.Object r1 = r1.get()
            android.content.Context r1 = (android.content.Context) r1
            java.lang.String r2 = "drawable"
            if (r6 != 0) goto L3b
            com.mbridge.msdk.nativex.view.mbfullview.BaseView$a r0 = r8.style
            com.mbridge.msdk.nativex.view.mbfullview.BaseView$a r3 = com.mbridge.msdk.nativex.view.mbfullview.BaseView.a.b
            if (r0 != r3) goto L20
            goto L81
        L20:
            if (r1 == 0) goto L92
            android.widget.FrameLayout r6 = r8.getmAnimationContent()
            java.lang.String r7 = "mbridge_nativex_cta_por_pre"
            int r0 = com.mbridge.msdk.foundation.tools.s.a(r1, r7, r2)
            r6.setBackgroundResource(r0)
            android.widget.LinearLayout r6 = r8.getmAnimationPlayer()
            int r7 = com.mbridge.msdk.foundation.tools.s.a(r1, r7, r2)
            r6.setBackgroundResource(r7)
            goto L92
        L3b:
            com.mbridge.msdk.nativex.view.mbfullview.BaseView$a r3 = r8.style
            com.mbridge.msdk.nativex.view.mbfullview.BaseView$a r4 = com.mbridge.msdk.nativex.view.mbfullview.BaseView.a.a
            if (r3 != r4) goto L57
            if (r1 == 0) goto L57
            android.widget.FrameLayout r3 = r8.getmAnimationContent()
            java.lang.String r4 = "mbridge_nativex_fullview_background"
            int r1 = com.mbridge.msdk.foundation.tools.s.a(r1, r4, r2)
            r3.setBackgroundResource(r1)
            android.widget.LinearLayout r1 = r8.getmAnimationPlayer()
            r1.setBackgroundColor(r0)
        L57:
            if (r7 == 0) goto L67
            android.widget.LinearLayout r0 = r8.getmAnimationPlayer()
            android.graphics.drawable.Drawable r0 = r0.getBackground()
            r1 = 80
            r0.setAlpha(r1)
            goto L81
        L67:
            android.widget.LinearLayout r0 = r8.getmAnimationPlayer()
            java.lang.String r1 = "#ff4c8fdf"
            int r1 = android.graphics.Color.parseColor(r1)
            r0.setBackgroundColor(r1)
            android.widget.LinearLayout r0 = r8.getmAnimationPlayer()
            android.graphics.drawable.Drawable r0 = r0.getBackground()
            r1 = 200(0xc8, float:2.8E-43)
            r0.setAlpha(r1)
        L81:
            if (r7 == 0) goto L92
            android.os.Handler r7 = new android.os.Handler
            r7.<init>()
            com.mbridge.msdk.nativex.view.mbfullview.a$1 r0 = new com.mbridge.msdk.nativex.view.mbfullview.a$1
            r0.<init>(r5, r8, r6)
            r1 = 1000(0x3e8, double:4.94E-321)
            r7.postDelayed(r0, r1)
        L92:
            return
    }
}
