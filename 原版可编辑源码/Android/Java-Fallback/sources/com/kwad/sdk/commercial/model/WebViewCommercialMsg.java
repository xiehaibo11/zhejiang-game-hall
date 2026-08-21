package com.kwad.sdk.commercial.model;

public class WebViewCommercialMsg extends com.kwad.sdk.core.response.a.a implements com.kwad.sdk.core.b, java.io.Serializable {
    private static final long serialVersionUID = -1007322423487775751L;
    public com.kwai.adclient.kscommerciallogger.model.BusinessType biz;
    public java.lang.String category;
    public java.lang.String eventId;
    public org.json.JSONObject extraParam;
    public org.json.JSONObject msg;
    public double rate;
    public com.kwai.adclient.kscommerciallogger.model.SubBusinessType subBiz;
    public java.lang.String suffixRatio;
    public java.lang.String tag;
    public com.kwai.adclient.kscommerciallogger.model.b type;

    public WebViewCommercialMsg() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void afterParseJson(org.json.JSONObject r3) {
            r2 = this;
            super.afterParseJson(r3)
            if (r3 != 0) goto L6
            return
        L6:
            java.lang.String r0 = "sub_biz"
            boolean r1 = r3.has(r0)
            if (r1 == 0) goto L1d
            java.lang.String r0 = r3.optString(r0)     // Catch: java.lang.Exception -> L19
            com.kwai.adclient.kscommerciallogger.model.SubBusinessType r0 = com.kwai.adclient.kscommerciallogger.model.SubBusinessType.valueOf(r0)     // Catch: java.lang.Exception -> L19
            r2.subBiz = r0     // Catch: java.lang.Exception -> L19
            goto L1d
        L19:
            com.kwai.adclient.kscommerciallogger.model.SubBusinessType r0 = com.kwai.adclient.kscommerciallogger.model.SubBusinessType.OTHER
            r2.subBiz = r0
        L1d:
            java.lang.String r0 = "biz"
            boolean r1 = r3.has(r0)
            if (r1 == 0) goto L34
            java.lang.String r0 = r3.optString(r0)     // Catch: java.lang.Exception -> L30
            com.kwai.adclient.kscommerciallogger.model.BusinessType r0 = com.kwai.adclient.kscommerciallogger.model.BusinessType.valueOf(r0)     // Catch: java.lang.Exception -> L30
            r2.biz = r0     // Catch: java.lang.Exception -> L30
            goto L34
        L30:
            com.kwai.adclient.kscommerciallogger.model.BusinessType r0 = com.kwai.adclient.kscommerciallogger.model.BusinessType.OTHER
            r2.biz = r0
        L34:
            java.lang.String r0 = "type"
            boolean r1 = r3.has(r0)
            if (r1 == 0) goto L51
            com.kwai.adclient.kscommerciallogger.model.b r1 = new com.kwai.adclient.kscommerciallogger.model.b     // Catch: java.lang.Exception -> L48
            java.lang.String r3 = r3.optString(r0)     // Catch: java.lang.Exception -> L48
            r1.<init>(r3)     // Catch: java.lang.Exception -> L48
            r2.type = r1     // Catch: java.lang.Exception -> L48
            return
        L48:
            com.kwai.adclient.kscommerciallogger.model.b r3 = new com.kwai.adclient.kscommerciallogger.model.b
            java.lang.String r0 = "OTHER"
            r3.<init>(r0)
            r2.type = r3
        L51:
            return
    }

    @Override
    public void afterToJson(org.json.JSONObject r3) {
            r2 = this;
            super.afterToJson(r3)
            com.kwai.adclient.kscommerciallogger.model.BusinessType r0 = r2.biz
            java.lang.String r0 = r0.value
            java.lang.String r1 = "biz"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
            com.kwai.adclient.kscommerciallogger.model.SubBusinessType r0 = r2.subBiz
            java.lang.String r0 = r0.value
            java.lang.String r1 = "subBiz"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
            com.kwai.adclient.kscommerciallogger.model.b r0 = r2.type
            java.lang.String r0 = r0.getValue()
            java.lang.String r1 = "type"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
            return
    }
}
