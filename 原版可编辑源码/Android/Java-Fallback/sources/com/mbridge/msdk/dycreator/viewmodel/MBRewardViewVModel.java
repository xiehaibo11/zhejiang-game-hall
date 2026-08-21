package com.mbridge.msdk.dycreator.viewmodel;

public class MBRewardViewVModel implements com.mbridge.msdk.dycreator.viewmodel.BaseViewModel {
    private com.mbridge.msdk.dycreator.g.d a;
    private com.mbridge.msdk.dycreator.g.c b;
    private com.mbridge.msdk.dycreator.g.f c;
    private com.mbridge.msdk.dycreator.g.h d;
    private com.mbridge.msdk.dycreator.wrapper.DynamicViewBackListener e;
    private com.mbridge.msdk.dycreator.wrapper.DyOption f;

    public MBRewardViewVModel(com.mbridge.msdk.dycreator.wrapper.DyOption r1) {
            r0 = this;
            r0.<init>()
            r0.f = r1
            com.mbridge.msdk.dycreator.bus.EventBus r1 = com.mbridge.msdk.dycreator.bus.EventBus.getDefault()
            r1.register(r0)
            return
    }

    public void onEventMainThread(com.mbridge.msdk.dycreator.binding.response.SplashResData r2) {
            r1 = this;
            com.mbridge.msdk.dycreator.wrapper.DynamicViewBackListener r0 = r1.e
            if (r0 == 0) goto L7
            r0.viewClicked(r2)
        L7:
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
            r2 = this;
            com.mbridge.msdk.dycreator.f.a r0 = new com.mbridge.msdk.dycreator.f.a
            com.mbridge.msdk.dycreator.wrapper.DyOption r1 = r2.f
            r0.<init>(r1)
            com.mbridge.msdk.dycreator.g.d r1 = r2.a
            if (r1 == 0) goto Le
            r1.a(r0)
        Le:
            com.mbridge.msdk.dycreator.g.c r1 = r2.b
            if (r1 == 0) goto L15
            r1.a(r0)
        L15:
            com.mbridge.msdk.dycreator.g.f r1 = r2.c
            if (r1 == 0) goto L1c
            r1.a(r0)
        L1c:
            com.mbridge.msdk.dycreator.g.h r1 = r2.d
            if (r1 == 0) goto L23
            r1.a(r0)
        L23:
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
