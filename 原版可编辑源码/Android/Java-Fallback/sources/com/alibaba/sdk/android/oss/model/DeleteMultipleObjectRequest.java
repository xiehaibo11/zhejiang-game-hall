package com.alibaba.sdk.android.oss.model;

public class DeleteMultipleObjectRequest extends com.alibaba.sdk.android.oss.model.OSSRequest {
    private java.lang.String bucketName;
    private boolean isQuiet;
    private java.util.List<java.lang.String> objectKeys;

    public DeleteMultipleObjectRequest(java.lang.String r1, java.util.List<java.lang.String> r2, java.lang.Boolean r3) {
            r0 = this;
            r0.<init>()
            r0.setBucketName(r1)
            r0.setObjectKeys(r2)
            r0.setQuiet(r3)
            return
    }

    public java.lang.String getBucketName() {
            r1 = this;
            java.lang.String r0 = r1.bucketName
            return r0
    }

    public java.util.List<java.lang.String> getObjectKeys() {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.objectKeys
            return r0
    }

    public java.lang.Boolean getQuiet() {
            r1 = this;
            boolean r0 = r1.isQuiet
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            return r0
    }

    public void setBucketName(java.lang.String r1) {
            r0 = this;
            r0.bucketName = r1
            return
    }

    public void setObjectKeys(java.util.List<java.lang.String> r1) {
            r0 = this;
            r0.objectKeys = r1
            return
    }

    public void setQuiet(java.lang.Boolean r1) {
            r0 = this;
            boolean r1 = r1.booleanValue()
            r0.isQuiet = r1
            return
    }
}
