package com.kwad.sdk.crash.report.upload;

import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes2.dex */
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

    @Override // com.kwad.sdk.core.network.b
    public final void buildBaseBody() {
    }

    @Override // com.kwad.sdk.core.network.b
    public final void buildBaseHeader() {
    }

    @Override // com.kwad.sdk.core.network.b, com.kwad.sdk.core.network.g
    public final Map<String, String> getBodyMap() {
        return this.aBs;
    }

    @Override // com.kwad.sdk.core.network.b, com.kwad.sdk.core.network.g
    public final String getUrl() {
        return "https://" + com.kwad.sdk.core.network.idc.a.Bo().P("ulog", "ulog-sdk.gifshow.com") + "/rest/log/sdk/file/token";
    }
}
