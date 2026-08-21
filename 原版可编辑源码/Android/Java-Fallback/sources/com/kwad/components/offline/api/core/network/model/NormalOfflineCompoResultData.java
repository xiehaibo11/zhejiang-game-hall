package com.kwad.components.offline.api.core.network.model;

public class NormalOfflineCompoResultData extends com.kwad.components.offline.api.core.network.model.BaseOfflineCompoResultData {
    public int code;
    public java.lang.String data;
    public java.lang.String header;

    public NormalOfflineCompoResultData() {
            r0 = this;
            r0.<init>()
            return
    }

    public void parseResponse(com.kwad.sdk.core.network.c r2) {
            r1 = this;
            int r0 = r2.code
            r1.code = r0
            java.lang.String r2 = r2.aoM
            r1.data = r2
            r2 = 0
            r1.header = r2
            return
    }
}
