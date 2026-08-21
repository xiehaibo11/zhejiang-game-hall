package com.tkay.core.api;

public abstract class TYInitConfig {
    protected com.tkay.core.api.TYInitMediation initMediation;
    protected java.util.Map<java.lang.String, java.lang.Object> paramMap;

    public TYInitConfig() {
            r2 = this;
            r2.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r1 = 4
            r0.<init>(r1)
            r2.paramMap = r0
            return
    }

    public final com.tkay.core.api.TYInitMediation getInitMediation() {
            r1 = this;
            com.tkay.core.api.TYInitMediation r0 = r1.initMediation
            return r0
    }

    public final java.util.Map<java.lang.String, java.lang.Object> getRequestParamMap() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.paramMap
            return r0
    }
}
