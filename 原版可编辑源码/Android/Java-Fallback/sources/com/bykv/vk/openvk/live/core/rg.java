package com.bykv.vk.openvk.live.core;

public class rg implements com.bytedance.android.live.base.api.ILiveHostActionParam {
    private com.bykv.vk.openvk.live.core.ITTLiveHostAction rg;

    public rg(com.bykv.vk.openvk.live.core.ITTLiveHostAction r1) {
            r0 = this;
            r0.<init>()
            r0.rg = r1
            return
    }

    @Override
    public void logEvent(boolean r2, java.lang.String r3, java.lang.String r4, java.util.Map<java.lang.String, java.lang.String> r5) {
            r1 = this;
            com.bykv.vk.openvk.live.core.ITTLiveHostAction r0 = r1.rg
            if (r0 == 0) goto L7
            r0.logEvent(r2, r3, r4, r5)
        L7:
            return
    }
}
