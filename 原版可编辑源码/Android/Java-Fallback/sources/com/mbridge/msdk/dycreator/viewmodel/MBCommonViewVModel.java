package com.mbridge.msdk.dycreator.viewmodel;

public class MBCommonViewVModel implements com.mbridge.msdk.dycreator.viewmodel.BaseViewModel {
    private com.mbridge.msdk.dycreator.g.d a;
    private com.mbridge.msdk.dycreator.g.c b;
    private com.mbridge.msdk.dycreator.g.f c;
    private com.mbridge.msdk.dycreator.g.h d;
    private com.mbridge.msdk.dycreator.wrapper.DynamicViewBackListener e;

    public MBCommonViewVModel() {
            r1 = this;
            r1.<init>()
            com.mbridge.msdk.dycreator.bus.EventBus r0 = com.mbridge.msdk.dycreator.bus.EventBus.getDefault()
            r0.register(r1)
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
            r0 = this;
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
