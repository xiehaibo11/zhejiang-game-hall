package com.alibaba.sdk.android.oss.model;

public class CreateBucketRequest extends com.alibaba.sdk.android.oss.model.OSSRequest {
    public static final java.lang.String TAB_LOCATIONCONSTRAINT = "LocationConstraint";
    public static final java.lang.String TAB_STORAGECLASS = "StorageClass";
    private com.alibaba.sdk.android.oss.model.CannedAccessControlList bucketACL;
    private java.lang.String bucketName;
    private com.alibaba.sdk.android.oss.model.StorageClass bucketStorageClass;
    private java.lang.String locationConstraint;

    public CreateBucketRequest(java.lang.String r2) {
            r1 = this;
            r1.<init>()
            com.alibaba.sdk.android.oss.model.StorageClass r0 = com.alibaba.sdk.android.oss.model.StorageClass.Standard
            r1.bucketStorageClass = r0
            r1.setBucketName(r2)
            return
    }

    public com.alibaba.sdk.android.oss.model.CannedAccessControlList getBucketACL() {
            r1 = this;
            com.alibaba.sdk.android.oss.model.CannedAccessControlList r0 = r1.bucketACL
            return r0
    }

    public java.lang.String getBucketName() {
            r1 = this;
            java.lang.String r0 = r1.bucketName
            return r0
    }

    public com.alibaba.sdk.android.oss.model.StorageClass getBucketStorageClass() {
            r1 = this;
            com.alibaba.sdk.android.oss.model.StorageClass r0 = r1.bucketStorageClass
            return r0
    }

    @java.lang.Deprecated
    public java.lang.String getLocationConstraint() {
            r1 = this;
            java.lang.String r0 = r1.locationConstraint
            return r0
    }

    public void setBucketACL(com.alibaba.sdk.android.oss.model.CannedAccessControlList r1) {
            r0 = this;
            r0.bucketACL = r1
            return
    }

    public void setBucketName(java.lang.String r1) {
            r0 = this;
            r0.bucketName = r1
            return
    }

    public void setBucketStorageClass(com.alibaba.sdk.android.oss.model.StorageClass r1) {
            r0 = this;
            r0.bucketStorageClass = r1
            return
    }

    @java.lang.Deprecated
    public void setLocationConstraint(java.lang.String r1) {
            r0 = this;
            r0.locationConstraint = r1
            return
    }
}
