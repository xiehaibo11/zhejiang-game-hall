package com.tkay.network.mintegral;

public class MintegralTYInitConfig extends com.tkay.core.api.TYInitConfig {
    public MintegralTYInitConfig(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            r2.<init>()
            java.util.Map<java.lang.String, java.lang.Object> r0 = r2.paramMap
            java.lang.String r1 = "appid"
            r0.put(r1, r3)
            java.util.Map<java.lang.String, java.lang.Object> r3 = r2.paramMap
            java.lang.String r0 = "appkey"
            r3.put(r0, r4)
            com.tkay.network.mintegral.MintegralTYInitManager r3 = com.tkay.network.mintegral.MintegralTYInitManager.getInstance()
            r2.initMediation = r3
            return
    }
}
