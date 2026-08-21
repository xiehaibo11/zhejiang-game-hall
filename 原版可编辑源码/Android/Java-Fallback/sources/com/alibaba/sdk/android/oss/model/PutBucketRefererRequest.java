package com.alibaba.sdk.android.oss.model;

public class PutBucketRefererRequest extends com.alibaba.sdk.android.oss.model.OSSRequest {
    private boolean mAllowEmpty;
    private java.lang.String mBucketName;
    private java.util.ArrayList<java.lang.String> mReferers;

    public PutBucketRefererRequest() {
            r0 = this;
            r0.<init>()
            return
    }

    public java.lang.String getBucketName() {
            r1 = this;
            java.lang.String r0 = r1.mBucketName
            return r0
    }

    public java.util.ArrayList<java.lang.String> getReferers() {
            r1 = this;
            java.util.ArrayList<java.lang.String> r0 = r1.mReferers
            return r0
    }

    public boolean isAllowEmpty() {
            r1 = this;
            boolean r0 = r1.mAllowEmpty
            return r0
    }

    public void setAllowEmpty(boolean r1) {
            r0 = this;
            r0.mAllowEmpty = r1
            return
    }

    public void setBucketName(java.lang.String r1) {
            r0 = this;
            r0.mBucketName = r1
            return
    }

    public void setReferers(java.util.ArrayList<java.lang.String> r1) {
            r0 = this;
            r0.mReferers = r1
            return
    }
}
