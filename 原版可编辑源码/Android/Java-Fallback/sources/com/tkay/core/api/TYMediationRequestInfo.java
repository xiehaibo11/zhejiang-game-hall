package com.tkay.core.api;

@java.lang.Deprecated
public abstract class TYMediationRequestInfo {
    protected java.lang.String adSourceId;
    protected java.lang.String className;
    protected int networkFirmId;

    public TYMediationRequestInfo() {
            r0 = this;
            r0.<init>()
            return
    }

    public java.lang.String getAdSourceId() {
            r1 = this;
            java.lang.String r0 = r1.adSourceId
            return r0
    }

    public java.lang.String getClassName() {
            r1 = this;
            java.lang.String r0 = r1.className
            return r0
    }

    public int getNetworkFirmId() {
            r1 = this;
            int r0 = r1.networkFirmId
            return r0
    }

    public abstract java.util.Map<java.lang.String, java.lang.Object> getRequestParamMap();

    public void setAdSourceId(java.lang.String r1) {
            r0 = this;
            r0.adSourceId = r1
            com.tkay.core.common.b.m.a()
            com.tkay.core.common.b.m.n(r1)
            return
    }

    public abstract void setFormat(java.lang.String r1);
}
