package com.alibaba.sdk.android.oss.model;

public class GetBucketRefererResult extends com.alibaba.sdk.android.oss.model.OSSResult {
    private java.lang.String mAllowEmpty;
    private java.util.ArrayList<java.lang.String> mReferers;

    public GetBucketRefererResult() {
            r0 = this;
            r0.<init>()
            return
    }

    public void addReferer(java.lang.String r2) {
            r1 = this;
            java.util.ArrayList<java.lang.String> r0 = r1.mReferers
            if (r0 != 0) goto Lb
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.mReferers = r0
        Lb:
            java.util.ArrayList<java.lang.String> r0 = r1.mReferers
            r0.add(r2)
            return
    }

    public java.lang.String getAllowEmpty() {
            r1 = this;
            java.lang.String r0 = r1.mAllowEmpty
            return r0
    }

    public java.util.ArrayList<java.lang.String> getReferers() {
            r1 = this;
            java.util.ArrayList<java.lang.String> r0 = r1.mReferers
            return r0
    }

    public void setAllowEmpty(java.lang.String r1) {
            r0 = this;
            r0.mAllowEmpty = r1
            return
    }

    public void setReferers(java.util.ArrayList<java.lang.String> r1) {
            r0 = this;
            r0.mReferers = r1
            return
    }
}
