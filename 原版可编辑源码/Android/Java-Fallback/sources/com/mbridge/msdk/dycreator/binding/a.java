package com.mbridge.msdk.dycreator.binding;

public final class a implements android.view.View.OnClickListener {
    private com.mbridge.msdk.dycreator.f.a.a a;

    public a(com.mbridge.msdk.dycreator.f.a.a r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    @Override
    public final void onClick(android.view.View r4) {
            r3 = this;
            if (r4 == 0) goto L10b
            boolean r0 = r4 instanceof com.mbridge.msdk.dycreator.baseview.inter.InterBase
            if (r0 == 0) goto L10b
            boolean r0 = r4 instanceof com.mbridge.msdk.dycreator.baseview.MBCountDownView
            if (r0 == 0) goto L21
            com.mbridge.msdk.dycreator.f.a.a r0 = r3.a
            if (r0 == 0) goto L21
            com.mbridge.msdk.dycreator.wrapper.DyOption r0 = r0.getEffectData()
            if (r0 == 0) goto L21
            com.mbridge.msdk.dycreator.f.a.a r0 = r3.a
            com.mbridge.msdk.dycreator.wrapper.DyOption r0 = r0.getEffectData()
            boolean r0 = r0.isCanSkip()
            if (r0 != 0) goto L21
            return
        L21:
            com.mbridge.msdk.dycreator.f.a.a r0 = r3.a
            if (r0 == 0) goto L54
            boolean r1 = r4 instanceof com.mbridge.msdk.dycreator.baseview.MBRelativeLayout
            if (r1 == 0) goto L54
            boolean r0 = com.mbridge.msdk.dycreator.e.d.a(r4, r0)
            if (r0 == 0) goto L54
            com.mbridge.msdk.dycreator.f.a.a r0 = r3.a
            boolean r1 = r0 instanceof com.mbridge.msdk.dycreator.bridge.MBSplashData
            if (r1 == 0) goto L54
            com.mbridge.msdk.dycreator.bridge.MBSplashData r0 = (com.mbridge.msdk.dycreator.bridge.MBSplashData) r0
            r1 = r4
            com.mbridge.msdk.dycreator.baseview.MBRelativeLayout r1 = (com.mbridge.msdk.dycreator.baseview.MBRelativeLayout) r1
            float r2 = r1.getxInScreen()
            r0.setxInScreen(r2)
            com.mbridge.msdk.dycreator.f.a.a r0 = r3.a
            com.mbridge.msdk.dycreator.bridge.MBSplashData r0 = (com.mbridge.msdk.dycreator.bridge.MBSplashData) r0
            float r1 = r1.getyInScreen()
            r0.setyInScreen(r1)
            com.mbridge.msdk.dycreator.f.a.a r0 = r3.a
            com.mbridge.msdk.dycreator.bridge.MBSplashData r0 = (com.mbridge.msdk.dycreator.bridge.MBSplashData) r0
            r1 = 1
            r0.setClickType(r1)
        L54:
            com.mbridge.msdk.dycreator.f.a.a r0 = r3.a
            if (r0 == 0) goto L87
            boolean r1 = r4 instanceof com.mbridge.msdk.dycreator.baseview.MBLinearLayout
            if (r1 == 0) goto L87
            boolean r0 = com.mbridge.msdk.dycreator.e.d.a(r4, r0)
            if (r0 == 0) goto L87
            com.mbridge.msdk.dycreator.f.a.a r0 = r3.a
            boolean r1 = r0 instanceof com.mbridge.msdk.dycreator.bridge.MBSplashData
            if (r1 == 0) goto L87
            com.mbridge.msdk.dycreator.bridge.MBSplashData r0 = (com.mbridge.msdk.dycreator.bridge.MBSplashData) r0
            r1 = r4
            com.mbridge.msdk.dycreator.baseview.MBLinearLayout r1 = (com.mbridge.msdk.dycreator.baseview.MBLinearLayout) r1
            float r2 = r1.getxInScreen()
            r0.setxInScreen(r2)
            com.mbridge.msdk.dycreator.f.a.a r0 = r3.a
            com.mbridge.msdk.dycreator.bridge.MBSplashData r0 = (com.mbridge.msdk.dycreator.bridge.MBSplashData) r0
            float r1 = r1.getyInScreen()
            r0.setyInScreen(r1)
            com.mbridge.msdk.dycreator.f.a.a r0 = r3.a
            com.mbridge.msdk.dycreator.bridge.MBSplashData r0 = (com.mbridge.msdk.dycreator.bridge.MBSplashData) r0
            r1 = 0
            r0.setClickType(r1)
        L87:
            r0 = r4
            com.mbridge.msdk.dycreator.baseview.inter.InterBase r0 = (com.mbridge.msdk.dycreator.baseview.inter.InterBase) r0
            java.lang.String r0 = r0.getStrategyDes()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L10b
            com.mbridge.msdk.dycreator.binding.c.a()
            r1 = 0
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 != 0) goto L104
            java.lang.String r2 = "close"
            boolean r2 = r0.equals(r2)
            if (r2 == 0) goto Lac
            com.mbridge.msdk.dycreator.binding.a.c r1 = new com.mbridge.msdk.dycreator.binding.a.c
            r1.<init>()
            goto Ld0
        Lac:
            java.lang.String r2 = "download"
            boolean r2 = r0.equals(r2)
            if (r2 == 0) goto Lba
            com.mbridge.msdk.dycreator.binding.a.b r1 = new com.mbridge.msdk.dycreator.binding.a.b
            r1.<init>()
            goto Ld0
        Lba:
            java.lang.String r2 = "deeplink"
            boolean r2 = r0.equals(r2)
            if (r2 == 0) goto Lc3
            goto Ld0
        Lc3:
            java.lang.String r2 = "activity"
            boolean r2 = r0.equals(r2)
            if (r2 == 0) goto Ld0
            com.mbridge.msdk.dycreator.binding.a.a r1 = new com.mbridge.msdk.dycreator.binding.a.a
            r1.<init>()
        Ld0:
            java.lang.String r2 = "feedback"
            boolean r2 = r0.equals(r2)
            if (r2 == 0) goto Ldd
            com.mbridge.msdk.dycreator.binding.a.d r1 = new com.mbridge.msdk.dycreator.binding.a.d
            r1.<init>()
        Ldd:
            java.lang.String r2 = "notice"
            boolean r2 = r0.equals(r2)
            if (r2 == 0) goto Lea
            com.mbridge.msdk.dycreator.binding.a.e r1 = new com.mbridge.msdk.dycreator.binding.a.e
            r1.<init>()
        Lea:
            java.lang.String r2 = "permissionInfo"
            boolean r2 = r0.equals(r2)
            if (r2 == 0) goto Lf7
            com.mbridge.msdk.dycreator.binding.a.f r1 = new com.mbridge.msdk.dycreator.binding.a.f
            r1.<init>()
        Lf7:
            java.lang.String r2 = "privateAddress"
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L104
            com.mbridge.msdk.dycreator.binding.a.g r1 = new com.mbridge.msdk.dycreator.binding.a.g
            r1.<init>()
        L104:
            if (r1 == 0) goto L10b
            com.mbridge.msdk.dycreator.f.a.a r0 = r3.a
            r1.bindClickData(r4, r0)
        L10b:
            return
    }
}
