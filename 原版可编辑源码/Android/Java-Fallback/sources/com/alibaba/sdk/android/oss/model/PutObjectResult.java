package com.alibaba.sdk.android.oss.model;

public class PutObjectResult extends com.alibaba.sdk.android.oss.model.OSSResult {
    private java.lang.String eTag;
    private java.lang.String serverCallbackReturnBody;

    public PutObjectResult() {
            r0 = this;
            r0.<init>()
            return
    }

    public java.lang.String getETag() {
            r1 = this;
            java.lang.String r0 = r1.eTag
            return r0
    }

    public java.lang.String getServerCallbackReturnBody() {
            r1 = this;
            java.lang.String r0 = r1.serverCallbackReturnBody
            return r0
    }

    public void setETag(java.lang.String r1) {
            r0 = this;
            r0.eTag = r1
            return
    }

    public void setServerCallbackReturnBody(java.lang.String r1) {
            r0 = this;
            r0.serverCallbackReturnBody = r1
            return
    }
}
