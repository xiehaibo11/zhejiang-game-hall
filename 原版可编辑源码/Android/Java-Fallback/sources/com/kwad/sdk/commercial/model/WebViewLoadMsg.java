package com.kwad.sdk.commercial.model;

public class WebViewLoadMsg extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
    public static final int FAIL = 2;
    public static final int SUCCESS = 1;
    private static final long serialVersionUID = -8132509704708242619L;
    public java.lang.String costTime;
    public java.lang.String failReason;
    public java.lang.String interval;
    public int state;
    public java.lang.String url;

    public WebViewLoadMsg() {
            r0 = this;
            r0.<init>()
            return
    }

    public com.kwad.sdk.commercial.model.WebViewLoadMsg setCostTime(java.lang.String r1) {
            r0 = this;
            r0.costTime = r1
            return r0
    }

    public com.kwad.sdk.commercial.model.WebViewLoadMsg setFailReason(java.lang.String r1) {
            r0 = this;
            r0.failReason = r1
            return r0
    }

    public com.kwad.sdk.commercial.model.WebViewLoadMsg setInterval(java.lang.String r1) {
            r0 = this;
            r0.interval = r1
            return r0
    }

    public com.kwad.sdk.commercial.model.WebViewLoadMsg setState(int r1) {
            r0 = this;
            r0.state = r1
            return r0
    }

    public com.kwad.sdk.commercial.model.WebViewLoadMsg setUrl(java.lang.String r1) {
            r0 = this;
            r0.url = r1
            return r0
    }
}
