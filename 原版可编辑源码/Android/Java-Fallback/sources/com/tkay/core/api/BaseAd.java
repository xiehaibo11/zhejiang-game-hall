package com.tkay.core.api;

public abstract class BaseAd implements com.tkay.core.api.IATThirdPartyMaterial {
    public BaseAd() {
            r0 = this;
            r0.<init>()
            return
    }

    public abstract void destroy();

    public abstract android.view.ViewGroup getCustomAdContainer();

    public abstract com.tkay.core.common.f.d getDetail();

    @Override
    public abstract java.util.Map<java.lang.String, java.lang.Object> getNetworkInfoMap();

    public abstract void registerListener(android.view.View r1, java.util.List<android.view.View> r2, android.widget.FrameLayout.LayoutParams r3);

    public abstract void setNativeEventListener(com.tkay.core.common.b.k r1);

    public abstract void setNetworkInfoMap(java.util.Map<java.lang.String, java.lang.Object> r1);

    public abstract void setTrackingInfo(com.tkay.core.common.f.d r1);

    public abstract void setVideoMute(boolean r1);
}
