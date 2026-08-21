package com.mbridge.msdk.dycreator.viewmodel;

public class MBSplashViewVModel implements com.mbridge.msdk.dycreator.viewmodel.BaseViewModel {
    private com.mbridge.msdk.dycreator.g.d a;
    private com.mbridge.msdk.dycreator.g.c b;
    private com.mbridge.msdk.dycreator.g.f c;
    private com.mbridge.msdk.dycreator.g.h d;
    private com.mbridge.msdk.dycreator.wrapper.DynamicViewBackListener e;
    private com.mbridge.msdk.dycreator.wrapper.DyOption f;

    static class 1 {
        static final int[] a = null;

        static {
                com.mbridge.msdk.dycreator.listener.action.EAction[] r0 = com.mbridge.msdk.dycreator.listener.action.EAction.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.mbridge.msdk.dycreator.viewmodel.MBSplashViewVModel.1.a = r0
                com.mbridge.msdk.dycreator.listener.action.EAction r1 = com.mbridge.msdk.dycreator.listener.action.EAction.CLOSE     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.mbridge.msdk.dycreator.viewmodel.MBSplashViewVModel.1.a     // Catch: java.lang.NoSuchFieldError -> L1d
                com.mbridge.msdk.dycreator.listener.action.EAction r1 = com.mbridge.msdk.dycreator.listener.action.EAction.DOWNLOAD     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                return
        }
    }

    public MBSplashViewVModel(com.mbridge.msdk.dycreator.wrapper.DyOption r2) {
            r1 = this;
            r1.<init>()
            r1.f = r2
            if (r2 == 0) goto L16
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r2.getCampaignEx()
            if (r0 == 0) goto L16
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r2.getCampaignEx()
            java.lang.String r2 = r2.getCampaignUnitId()
            goto L18
        L16:
            java.lang.String r2 = ""
        L18:
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L26
            com.mbridge.msdk.dycreator.bus.EventBus r0 = com.mbridge.msdk.dycreator.bus.EventBus.getDefault()
            r0.register(r2, r1)
            goto L2d
        L26:
            com.mbridge.msdk.dycreator.bus.EventBus r2 = com.mbridge.msdk.dycreator.bus.EventBus.getDefault()
            r2.register(r1)
        L2d:
            return
    }

    private void a(com.mbridge.msdk.dycreator.binding.response.SplashResData r3) {
            r2 = this;
            com.mbridge.msdk.dycreator.f.a.a r0 = r3.getBaseViewData()     // Catch: java.lang.Exception -> L48
            if (r0 == 0) goto L61
            java.lang.String r0 = ""
            com.mbridge.msdk.dycreator.f.a.a r1 = r3.getBaseViewData()     // Catch: java.lang.Exception -> L48
            if (r1 == 0) goto L24
            com.mbridge.msdk.dycreator.f.a.a r1 = r3.getBaseViewData()     // Catch: java.lang.Exception -> L48
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r1.getBindData()     // Catch: java.lang.Exception -> L48
            if (r1 == 0) goto L24
            com.mbridge.msdk.dycreator.f.a.a r3 = r3.getBaseViewData()     // Catch: java.lang.Exception -> L48
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r3.getBindData()     // Catch: java.lang.Exception -> L48
            java.lang.String r0 = r3.getCampaignUnitId()     // Catch: java.lang.Exception -> L48
        L24:
            boolean r3 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L48
            if (r3 != 0) goto L39
            com.mbridge.msdk.dycreator.bus.EventBus r3 = com.mbridge.msdk.dycreator.bus.EventBus.getDefault()     // Catch: java.lang.Exception -> L48
            r3.unregister(r0)     // Catch: java.lang.Exception -> L48
            com.mbridge.msdk.dycreator.binding.b r3 = com.mbridge.msdk.dycreator.binding.b.a()     // Catch: java.lang.Exception -> L48
            r3.b()     // Catch: java.lang.Exception -> L48
            goto L61
        L39:
            com.mbridge.msdk.dycreator.bus.EventBus r3 = com.mbridge.msdk.dycreator.bus.EventBus.getDefault()     // Catch: java.lang.Exception -> L48
            r3.unregister(r2)     // Catch: java.lang.Exception -> L48
            com.mbridge.msdk.dycreator.binding.b r3 = com.mbridge.msdk.dycreator.binding.b.a()     // Catch: java.lang.Exception -> L48
            r3.b()     // Catch: java.lang.Exception -> L48
            goto L61
        L48:
            r3 = move-exception
            r3.printStackTrace()
            com.mbridge.msdk.dycreator.bus.EventBus r3 = com.mbridge.msdk.dycreator.bus.EventBus.getDefault()
            r3.unregister(r2)
            com.mbridge.msdk.dycreator.bus.EventBus r3 = com.mbridge.msdk.dycreator.bus.EventBus.getDefault()
            r3.release()
            com.mbridge.msdk.dycreator.binding.b r3 = com.mbridge.msdk.dycreator.binding.b.a()
            r3.b()
        L61:
            return
    }

    public void onEventMainThread(com.mbridge.msdk.dycreator.binding.response.SplashResData r5) {
            r4 = this;
            com.mbridge.msdk.dycreator.wrapper.DynamicViewBackListener r0 = r4.e
            if (r0 == 0) goto L4b
            if (r5 == 0) goto L4b
            int[] r0 = com.mbridge.msdk.dycreator.viewmodel.MBSplashViewVModel.1.a
            com.mbridge.msdk.dycreator.listener.action.EAction r1 = r5.geteAction()
            int r1 = r1.ordinal()
            r0 = r0[r1]
            r1 = 1
            if (r0 == r1) goto L43
            r2 = 2
            if (r0 == r2) goto L19
            goto L46
        L19:
            com.mbridge.msdk.dycreator.f.a.a r0 = r5.getBaseViewData()
            if (r0 == 0) goto L46
            com.mbridge.msdk.dycreator.f.a.a r0 = r5.getBaseViewData()
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r0.getBindData()
            if (r0 == 0) goto L3d
            int r2 = r0.getLinkType()
            r3 = 3
            if (r2 != r3) goto L3d
            int r2 = r0.getApkAlt()
            if (r2 != r1) goto L3d
            com.mbridge.msdk.out.ApkDisplayInfo r0 = r0.getApkDisplayInfo()
            if (r0 == 0) goto L3d
            r1 = 0
        L3d:
            if (r1 == 0) goto L46
            r4.a(r5)
            goto L46
        L43:
            r4.a(r5)
        L46:
            com.mbridge.msdk.dycreator.wrapper.DynamicViewBackListener r0 = r4.e
            r0.viewClicked(r5)
        L4b:
            return
    }

    @Override
    public void setClickSubject(com.mbridge.msdk.dycreator.g.c r1) {
            r0 = this;
            if (r1 == 0) goto L4
            r0.b = r1
        L4:
            return
    }

    @Override
    public void setConcreteSubject(com.mbridge.msdk.dycreator.g.d r1) {
            r0 = this;
            if (r1 == 0) goto L4
            r0.a = r1
        L4:
            return
    }

    @Override
    public void setDynamicViewBackListener(com.mbridge.msdk.dycreator.wrapper.DynamicViewBackListener r1) {
            r0 = this;
            if (r1 == 0) goto L4
            r0.e = r1
        L4:
            return
    }

    @Override
    public void setEffectSubject(com.mbridge.msdk.dycreator.g.f r1) {
            r0 = this;
            if (r1 == 0) goto L4
            r0.c = r1
        L4:
            return
    }

    @Override
    public void setModelDataAndBind() {
            r6 = this;
            com.mbridge.msdk.dycreator.bridge.MBSplashData r0 = new com.mbridge.msdk.dycreator.bridge.MBSplashData
            com.mbridge.msdk.dycreator.wrapper.DyOption r1 = r6.f
            r0.<init>(r1)
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            if (r1 == 0) goto Lb2
            com.mbridge.msdk.dycreator.wrapper.DyOption r2 = r6.f
            if (r2 == 0) goto L8d
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r2.getCampaignEx()
            if (r2 == 0) goto L6f
            java.lang.String r3 = r2.getAdCall()
            r0.setAdClickText(r3)
            com.mbridge.msdk.out.ApkDisplayInfo r2 = r2.getApkDisplayInfo()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            if (r2 == 0) goto L68
            java.lang.String r4 = "应用名称："
            r3.append(r4)
            java.lang.String r4 = r2.getAppName()
            r3.append(r4)
            java.lang.String r4 = "\n"
            r3.append(r4)
            java.lang.String r5 = "版本："
            r3.append(r5)
            java.lang.String r5 = r2.getAppVersion()
            r3.append(r5)
            r3.append(r4)
            java.lang.String r5 = "开发者："
            r3.append(r5)
            java.lang.String r5 = r2.getDevName()
            r3.append(r5)
            r3.append(r4)
            java.lang.String r4 = "更新时间："
            r3.append(r4)
            java.lang.String r2 = r2.getUpdateTime()
            r3.append(r2)
        L68:
            java.lang.String r2 = r3.toString()
            r0.setAppInfo(r2)
        L6f:
            com.mbridge.msdk.dycreator.wrapper.DyOption r2 = r6.f
            boolean r2 = r2.isCanSkip()
            if (r2 == 0) goto L7a
            java.lang.String r2 = "mbridge_splash_count_time_can_skip"
            goto L7c
        L7a:
            java.lang.String r2 = "mbridge_splash_count_time_can_skip_not"
        L7c:
            java.lang.String r3 = "string"
            int r2 = com.mbridge.msdk.foundation.tools.s.a(r1, r2, r3)
            android.content.res.Resources r3 = r1.getResources()
            java.lang.String r2 = r3.getString(r2)
            r0.setCountDownText(r2)
        L8d:
            java.lang.String r2 = "mbridge_splash_notice"
            java.lang.String r3 = "drawable"
            int r2 = com.mbridge.msdk.foundation.tools.s.a(r1, r2, r3)
            r0.setNoticeImage(r2)
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.v.s(r1)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto Lad
            java.lang.String r2 = "zh"
            boolean r1 = r1.contains(r2)
            if (r1 == 0) goto Lad
            java.lang.String r1 = "广告"
            goto Laf
        Lad:
            java.lang.String r1 = "AD"
        Laf:
            r0.setLogoText(r1)
        Lb2:
            com.mbridge.msdk.dycreator.g.d r1 = r6.a
            if (r1 == 0) goto Lb9
            r1.a(r0)
        Lb9:
            com.mbridge.msdk.dycreator.g.c r1 = r6.b
            if (r1 == 0) goto Lc0
            r1.a(r0)
        Lc0:
            com.mbridge.msdk.dycreator.g.f r1 = r6.c
            if (r1 == 0) goto Lc7
            r1.a(r0)
        Lc7:
            return
    }

    @Override
    public void setReportSubject(com.mbridge.msdk.dycreator.g.h r1) {
            r0 = this;
            if (r1 == 0) goto L4
            r0.d = r1
        L4:
            return
    }
}
