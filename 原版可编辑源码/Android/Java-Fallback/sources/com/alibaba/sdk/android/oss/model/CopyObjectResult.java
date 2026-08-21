package com.alibaba.sdk.android.oss.model;

public class CopyObjectResult extends com.alibaba.sdk.android.oss.model.OSSResult {
    private java.lang.String etag;
    private java.util.Date lastModified;

    public CopyObjectResult() {
            r0 = this;
            r0.<init>()
            return
    }

    public java.lang.String getETag() {
            r1 = this;
            java.lang.String r0 = r1.etag
            return r0
    }

    public java.util.Date getLastModified() {
            r1 = this;
            java.util.Date r0 = r1.lastModified
            return r0
    }

    public void setEtag(java.lang.String r1) {
            r0 = this;
            r0.etag = r1
            return
    }

    public void setLastModified(java.util.Date r1) {
            r0 = this;
            r0.lastModified = r1
            return
    }
}
