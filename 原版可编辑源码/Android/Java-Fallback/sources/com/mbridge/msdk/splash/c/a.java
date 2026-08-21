package com.mbridge.msdk.splash.c;

public final class a {





    static class 5 {
        static final int[] a = null;

        static {
                com.mbridge.msdk.dycreator.listener.action.EAction[] r0 = com.mbridge.msdk.dycreator.listener.action.EAction.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.mbridge.msdk.splash.c.a.5.a = r0
                com.mbridge.msdk.dycreator.listener.action.EAction r1 = com.mbridge.msdk.dycreator.listener.action.EAction.DOWNLOAD     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.mbridge.msdk.splash.c.a.5.a     // Catch: java.lang.NoSuchFieldError -> L1d
                com.mbridge.msdk.dycreator.listener.action.EAction r1 = com.mbridge.msdk.dycreator.listener.action.EAction.CLOSE     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                int[] r0 = com.mbridge.msdk.splash.c.a.5.a     // Catch: java.lang.NoSuchFieldError -> L28
                com.mbridge.msdk.dycreator.listener.action.EAction r1 = com.mbridge.msdk.dycreator.listener.action.EAction.NOTICE     // Catch: java.lang.NoSuchFieldError -> L28
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L28
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L28
            L28:
                int[] r0 = com.mbridge.msdk.splash.c.a.5.a     // Catch: java.lang.NoSuchFieldError -> L33
                com.mbridge.msdk.dycreator.listener.action.EAction r1 = com.mbridge.msdk.dycreator.listener.action.EAction.FEEDBACK     // Catch: java.lang.NoSuchFieldError -> L33
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L33
                r2 = 4
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L33
            L33:
                int[] r0 = com.mbridge.msdk.splash.c.a.5.a     // Catch: java.lang.NoSuchFieldError -> L3e
                com.mbridge.msdk.dycreator.listener.action.EAction r1 = com.mbridge.msdk.dycreator.listener.action.EAction.PRIVATE_ADDRESS     // Catch: java.lang.NoSuchFieldError -> L3e
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L3e
                r2 = 5
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L3e
            L3e:
                int[] r0 = com.mbridge.msdk.splash.c.a.5.a     // Catch: java.lang.NoSuchFieldError -> L49
                com.mbridge.msdk.dycreator.listener.action.EAction r1 = com.mbridge.msdk.dycreator.listener.action.EAction.PERMISSION_INFO     // Catch: java.lang.NoSuchFieldError -> L49
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L49
                r2 = 6
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L49
            L49:
                return
        }
    }

    static class a {
        private static final com.mbridge.msdk.splash.c.a a = null;

        static {
                com.mbridge.msdk.splash.c.a r0 = new com.mbridge.msdk.splash.c.a
                r1 = 0
                r0.<init>(r1)
                com.mbridge.msdk.splash.c.a.a.a = r0
                return
        }

        static com.mbridge.msdk.splash.c.a a() {
                com.mbridge.msdk.splash.c.a r0 = com.mbridge.msdk.splash.c.a.a.a
                return r0
        }
    }

    private a() {
            r0 = this;
            r0.<init>()
            return
    }

    a(com.mbridge.msdk.splash.c.a.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    private void a(android.content.Context r2, com.mbridge.msdk.splash.view.MBSplashView r3, com.mbridge.msdk.splash.a.c r4, com.mbridge.msdk.splash.b.a r5) {
            r1 = this;
            com.mbridge.msdk.splash.view.MBSplashNativeView r0 = new com.mbridge.msdk.splash.view.MBSplashNativeView     // Catch: java.lang.Throwable -> Lb
            r0.<init>(r2, r3, r4)     // Catch: java.lang.Throwable -> Lb
            if (r5 == 0) goto L12
            r5.a(r0)     // Catch: java.lang.Throwable -> Lb
            goto L12
        Lb:
            if (r5 == 0) goto L12
            java.lang.String r2 = "View render error."
            r5.a(r2)
        L12:
            return
    }

    static void a(com.mbridge.msdk.splash.c.a r0, android.content.Context r1, com.mbridge.msdk.splash.view.MBSplashView r2, com.mbridge.msdk.splash.a.c r3, com.mbridge.msdk.splash.b.a r4) {
            r0.a(r1, r2, r3, r4)
            return
    }

    static void a(com.mbridge.msdk.splash.c.a r1, com.mbridge.msdk.dycreator.f.a.a r2, com.mbridge.msdk.splash.d.a r3, com.mbridge.msdk.foundation.entity.CampaignEx r4) {
            r1 = 0
            if (r2 == 0) goto L16
            boolean r0 = r2 instanceof com.mbridge.msdk.dycreator.bridge.MBSplashData
            if (r0 == 0) goto L16
            com.mbridge.msdk.dycreator.bridge.MBSplashData r2 = (com.mbridge.msdk.dycreator.bridge.MBSplashData) r2
            float r1 = r2.getxInScreen()
            float r0 = r2.getyInScreen()
            int r2 = r2.getClickType()
            goto L18
        L16:
            r2 = 0
            r0 = r1
        L18:
            if (r3 == 0) goto L2d
            java.lang.String r1 = com.mbridge.msdk.splash.a.a.a.a(r2, r1, r0)     // Catch: java.lang.Throwable -> L26
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = com.mbridge.msdk.splash.a.a.a.a(r1, r4)     // Catch: java.lang.Throwable -> L26
            r3.a(r1)     // Catch: java.lang.Throwable -> L26
            goto L2d
        L26:
            r1 = move-exception
            r1.printStackTrace()
            r3.a(r4)
        L2d:
            return
    }

    public final void a(com.mbridge.msdk.splash.view.MBSplashView r11, com.mbridge.msdk.splash.a.c r12, com.mbridge.msdk.splash.b.a r13) {
            r10 = this;
            android.content.Context r0 = r11.getContext()
            if (r0 != 0) goto Le
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
        Le:
            if (r12 != 0) goto L18
            if (r13 == 0) goto L18
            java.lang.String r11 = "The render parameters is unavailable."
            r13.a(r11)
            return
        L18:
            if (r12 == 0) goto L2d
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r12.c()
            if (r1 == 0) goto L2d
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r12.c()
            java.lang.String r1 = r1.getAdZip()
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.i.a(r1)
            goto L2f
        L2d:
            java.lang.String r1 = ""
        L2f:
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L117
            if (r12 == 0) goto L11a
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r12.c()
            if (r2 == 0) goto L11a
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r12.c()
            java.lang.String r2 = r2.getAdZip()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L113
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: java.lang.Exception -> L10f
            r2.<init>()     // Catch: java.lang.Exception -> L10f
            r2.add(r1)     // Catch: java.lang.Exception -> L10f
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L10f
            java.lang.String r1 = r1.k()     // Catch: java.lang.Exception -> L10f
            com.mbridge.msdk.c.b r3 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L10f
            com.mbridge.msdk.c.a r1 = r3.b(r1)     // Catch: java.lang.Exception -> L10f
            com.mbridge.msdk.dycreator.wrapper.DyOption$Builder r3 = new com.mbridge.msdk.dycreator.wrapper.DyOption$Builder     // Catch: java.lang.Exception -> L10f
            r3.<init>()     // Catch: java.lang.Exception -> L10f
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r12.c()     // Catch: java.lang.Exception -> L10f
            com.mbridge.msdk.dycreator.wrapper.DyOption$IViewOptionBuilder r3 = r3.campaignEx(r4)     // Catch: java.lang.Exception -> L10f
            r4 = 0
            com.mbridge.msdk.dycreator.wrapper.DyOption$IViewOptionBuilder r3 = r3.file(r4)     // Catch: java.lang.Exception -> L10f
            com.mbridge.msdk.dycreator.wrapper.DyOption$IViewOptionBuilder r2 = r3.fileDirs(r2)     // Catch: java.lang.Exception -> L10f
            com.mbridge.msdk.dycreator.wrapper.DyAdType r3 = com.mbridge.msdk.dycreator.wrapper.DyAdType.SPLASH     // Catch: java.lang.Exception -> L10f
            com.mbridge.msdk.dycreator.wrapper.DyOption$IViewOptionBuilder r2 = r2.dyAdType(r3)     // Catch: java.lang.Exception -> L10f
            boolean r3 = r12.d()     // Catch: java.lang.Exception -> L10f
            com.mbridge.msdk.dycreator.wrapper.DyOption$IViewOptionBuilder r2 = r2.canSkip(r3)     // Catch: java.lang.Exception -> L10f
            int r3 = r12.g()     // Catch: java.lang.Exception -> L10f
            r4 = 0
            r5 = 1
            if (r3 != r5) goto L91
            r3 = r5
            goto L92
        L91:
            r3 = r4
        L92:
            com.mbridge.msdk.dycreator.wrapper.DyOption$IViewOptionBuilder r2 = r2.isScreenClick(r3)     // Catch: java.lang.Exception -> L10f
            int r3 = r12.f()     // Catch: java.lang.Exception -> L10f
            if (r3 != 0) goto L9e
            r3 = r5
            goto L9f
        L9e:
            r3 = r4
        L9f:
            com.mbridge.msdk.dycreator.wrapper.DyOption$IViewOptionBuilder r2 = r2.isClickButtonVisible(r3)     // Catch: java.lang.Exception -> L10f
            int r3 = r12.i()     // Catch: java.lang.Exception -> L10f
            if (r3 != r5) goto Lab
            r3 = r5
            goto Lac
        Lab:
            r3 = r4
        Lac:
            com.mbridge.msdk.dycreator.wrapper.DyOption$IViewOptionBuilder r2 = r2.isShakeVisible(r3)     // Catch: java.lang.Exception -> L10f
            int r3 = r12.h()     // Catch: java.lang.Exception -> L10f
            if (r3 != 0) goto Lb8
            r3 = r5
            goto Lb9
        Lb8:
            r3 = r4
        Lb9:
            com.mbridge.msdk.dycreator.wrapper.DyOption$IViewOptionBuilder r2 = r2.isApkInfoVisible(r3)     // Catch: java.lang.Exception -> L10f
            int r3 = r12.m()     // Catch: java.lang.Exception -> L10f
            if (r3 != r5) goto Lc4
            r4 = r5
        Lc4:
            com.mbridge.msdk.dycreator.wrapper.DyOption$IViewOptionBuilder r2 = r2.isLogoVisible(r4)     // Catch: java.lang.Exception -> L10f
            int r3 = r12.j()     // Catch: java.lang.Exception -> L10f
            com.mbridge.msdk.dycreator.wrapper.DyOption$IViewOptionBuilder r2 = r2.shakeStrenght(r3)     // Catch: java.lang.Exception -> L10f
            int r3 = r12.k()     // Catch: java.lang.Exception -> L10f
            com.mbridge.msdk.dycreator.wrapper.DyOption$IViewOptionBuilder r2 = r2.shakeTime(r3)     // Catch: java.lang.Exception -> L10f
            int r3 = r12.l()     // Catch: java.lang.Exception -> L10f
            com.mbridge.msdk.dycreator.wrapper.DyOption$IViewOptionBuilder r2 = r2.orientation(r3)     // Catch: java.lang.Exception -> L10f
            int r3 = r12.e()     // Catch: java.lang.Exception -> L10f
            com.mbridge.msdk.dycreator.wrapper.DyOption$IViewOptionBuilder r2 = r2.countDownTime(r3)     // Catch: java.lang.Exception -> L10f
            java.lang.String r1 = r1.az()     // Catch: java.lang.Exception -> L10f
            com.mbridge.msdk.dycreator.wrapper.DyOption$IViewOptionBuilder r1 = r2.adChoiceLink(r1)     // Catch: java.lang.Exception -> L10f
            com.mbridge.msdk.dycreator.wrapper.DyOption r1 = r1.build()     // Catch: java.lang.Exception -> L10f
            com.mbridge.msdk.splash.c.a$1 r2 = new com.mbridge.msdk.splash.c.a$1     // Catch: java.lang.Exception -> L10f
            r2.<init>(r10, r1)     // Catch: java.lang.Exception -> L10f
            r11.setDyCountDownListener(r2)     // Catch: java.lang.Exception -> L10f
            com.mbridge.msdk.dycreator.wrapper.DynamicViewCreator r8 = com.mbridge.msdk.dycreator.wrapper.DynamicViewCreator.getInstance()     // Catch: java.lang.Exception -> L10f
            com.mbridge.msdk.splash.c.a$2 r9 = new com.mbridge.msdk.splash.c.a$2     // Catch: java.lang.Exception -> L10f
            r2 = r9
            r3 = r10
            r4 = r13
            r5 = r1
            r6 = r11
            r7 = r12
            r2.<init>(r3, r4, r5, r6, r7)     // Catch: java.lang.Exception -> L10f
            r8.createDynamicView(r1, r9)     // Catch: java.lang.Exception -> L10f
            goto L11a
        L10f:
            r1 = move-exception
            r1.printStackTrace()
        L113:
            r10.a(r0, r11, r12, r13)
            goto L11a
        L117:
            r10.a(r0, r11, r12, r13)
        L11a:
            return
    }
}
