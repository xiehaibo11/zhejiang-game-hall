package com.alibaba.sdk.android.oss.model;

public class TriggerCallbackRequest extends com.alibaba.sdk.android.oss.model.OSSRequest {
    private java.lang.String mBucketName;
    private java.util.Map<java.lang.String, java.lang.String> mCallbackParam;
    private java.util.Map<java.lang.String, java.lang.String> mCallbackVars;
    private java.lang.String mObjectKey;

    public TriggerCallbackRequest(java.lang.String r1, java.lang.String r2, java.util.Map<java.lang.String, java.lang.String> r3, java.util.Map<java.lang.String, java.lang.String> r4) {
            r0 = this;
            r0.<init>()
            r0.setBucketName(r1)
            r0.setObjectKey(r2)
            r0.setCallbackParam(r3)
            r0.setCallbackVars(r4)
            return
    }

    public java.lang.String getBucketName() {
            r1 = this;
            java.lang.String r0 = r1.mBucketName
            return r0
    }

    public java.util.Map<java.lang.String, java.lang.String> getCallbackParam() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.mCallbackParam
            return r0
    }

    public java.util.Map<java.lang.String, java.lang.String> getCallbackVars() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.mCallbackVars
            return r0
    }

    public java.lang.String getObjectKey() {
            r1 = this;
            java.lang.String r0 = r1.mObjectKey
            return r0
    }

    public void setBucketName(java.lang.String r1) {
            r0 = this;
            r0.mBucketName = r1
            return
    }

    public void setCallbackParam(java.util.Map<java.lang.String, java.lang.String> r1) {
            r0 = this;
            r0.mCallbackParam = r1
            return
    }

    public void setCallbackVars(java.util.Map<java.lang.String, java.lang.String> r1) {
            r0 = this;
            r0.mCallbackVars = r1
            return
    }

    public void setObjectKey(java.lang.String r1) {
            r0 = this;
            r0.mObjectKey = r1
            return
    }
}
