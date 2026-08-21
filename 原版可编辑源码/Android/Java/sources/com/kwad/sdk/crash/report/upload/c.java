package com.kwad.sdk.crash.report.upload;

import java.util.HashMap;
import java.util.Map;

public final class c extends com.kwad.sdk.core.network.b {
    public final Map<String, String> aBs;

    public c(String str, String str2, String str3) {
        HashMap map = new HashMap();
        this.aBs = map;
        map.put("did", str);
        this.aBs.put("sid", str2);
        this.aBs.put("fileExtend", str3);
        this.aBs.put("bizType", "5");
    }

    @Override
    public final void buildBaseBody() {
    }

    @Override
    public final void buildBaseHeader() {
    }

    @Override
    public final Map<String, String> getBodyMap() {
        return this.aBs;
    }

    @Override
    public final String getUrl() {
        return "https://" + com.kwad.sdk.core.network.idc.a.Bo().P("ulog", "ulog-sdk.gifshow.com") + "/rest/log/sdk/file/token";
    }
}
