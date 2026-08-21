package com.alibaba.sdk.android.oss.model;

public class ListBucketsRequest extends com.alibaba.sdk.android.oss.model.OSSRequest {
    private static final int MAX_RETURNED_KEYS_LIMIT = 1000;
    private java.lang.String marker;
    private java.lang.Integer maxKeys;
    private java.lang.String prefix;

    public ListBucketsRequest() {
            r0 = this;
            r0.<init>()
            return
    }

    public ListBucketsRequest(java.lang.String r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public ListBucketsRequest(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            r0 = 100
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            r1.<init>(r2, r3, r0)
            return
    }

    public ListBucketsRequest(java.lang.String r1, java.lang.String r2, java.lang.Integer r3) {
            r0 = this;
            r0.<init>()
            r0.prefix = r1
            r0.marker = r2
            r0.maxKeys = r3
            return
    }

    public java.lang.String getMarker() {
            r1 = this;
            java.lang.String r0 = r1.marker
            return r0
    }

    public java.lang.Integer getMaxKeys() {
            r1 = this;
            java.lang.Integer r0 = r1.maxKeys
            return r0
    }

    public java.lang.String getPrefix() {
            r1 = this;
            java.lang.String r0 = r1.prefix
            return r0
    }

    public void setMarker(java.lang.String r1) {
            r0 = this;
            r0.marker = r1
            return
    }

    public void setMaxKeys(java.lang.Integer r1) {
            r0 = this;
            r0.maxKeys = r1
            return
    }

    public void setPrefix(java.lang.String r1) {
            r0 = this;
            r0.prefix = r1
            return
    }
}
