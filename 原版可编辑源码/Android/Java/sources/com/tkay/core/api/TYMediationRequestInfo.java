package com.tkay.core.api;

import com.tkay.core.common.b.m;
import java.util.Map;

@Deprecated
public abstract class TYMediationRequestInfo {
    protected String adSourceId;
    protected String className;
    protected int networkFirmId;

    public abstract Map<String, Object> getRequestParamMap();

    public abstract void setFormat(String str);

    public int getNetworkFirmId() {
        return this.networkFirmId;
    }

    public String getClassName() {
        return this.className;
    }

    public String getAdSourceId() {
        return this.adSourceId;
    }

    public void setAdSourceId(String str) {
        this.adSourceId = str;
        m.a();
        m.n(str);
    }
}
