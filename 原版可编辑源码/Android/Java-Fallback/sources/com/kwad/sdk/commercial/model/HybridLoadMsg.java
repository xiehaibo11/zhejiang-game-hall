package com.kwad.sdk.commercial.model;

public class HybridLoadMsg extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
    public static final int FAIL = 2;
    public static final int SUCCESS = 1;
    private static final long serialVersionUID = -8132509704708242619L;
    public java.lang.String failReason;
    public int failState;
    public java.lang.String h5Version;
    public java.lang.String interval;
    public int loadType;
    public java.lang.String packageUrl;
    public java.lang.String sceneId;
    public int state;
    public java.lang.String url;

    public HybridLoadMsg() {
            r0 = this;
            r0.<init>()
            return
    }

    public com.kwad.sdk.commercial.model.HybridLoadMsg setFailReason(java.lang.String r1) {
            r0 = this;
            r0.failReason = r1
            return r0
    }

    public com.kwad.sdk.commercial.model.HybridLoadMsg setFailState(int r1) {
            r0 = this;
            r0.failState = r1
            return r0
    }

    public com.kwad.sdk.commercial.model.HybridLoadMsg setH5Version(java.lang.String r1) {
            r0 = this;
            r0.h5Version = r1
            return r0
    }

    public com.kwad.sdk.commercial.model.HybridLoadMsg setInterval(java.lang.String r1) {
            r0 = this;
            r0.interval = r1
            return r0
    }

    public com.kwad.sdk.commercial.model.HybridLoadMsg setLoadType(int r1) {
            r0 = this;
            r0.loadType = r1
            return r0
    }

    public com.kwad.sdk.commercial.model.HybridLoadMsg setPackageUrl(java.lang.String r1) {
            r0 = this;
            r0.packageUrl = r1
            return r0
    }

    public com.kwad.sdk.commercial.model.HybridLoadMsg setSceneId(java.lang.String r1) {
            r0 = this;
            r0.sceneId = r1
            return r0
    }

    public com.kwad.sdk.commercial.model.HybridLoadMsg setState(int r1) {
            r0 = this;
            r0.state = r1
            return r0
    }

    public com.kwad.sdk.commercial.model.HybridLoadMsg setUrl(java.lang.String r1) {
            r0 = this;
            r0.url = r1
            return r0
    }
}
