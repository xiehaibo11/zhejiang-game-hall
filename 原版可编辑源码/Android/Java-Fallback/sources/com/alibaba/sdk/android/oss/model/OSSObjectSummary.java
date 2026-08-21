package com.alibaba.sdk.android.oss.model;

public class OSSObjectSummary {
    private java.lang.String bucketName;
    private java.lang.String eTag;
    private java.lang.String key;
    private java.util.Date lastModified;
    private com.alibaba.sdk.android.oss.model.Owner owner;
    private long size;
    private java.lang.String storageClass;
    private java.lang.String type;

    public OSSObjectSummary() {
            r0 = this;
            r0.<init>()
            return
    }

    public java.lang.String getBucketName() {
            r1 = this;
            java.lang.String r0 = r1.bucketName
            return r0
    }

    public java.lang.String getETag() {
            r1 = this;
            java.lang.String r0 = r1.eTag
            return r0
    }

    public java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = r1.key
            return r0
    }

    public java.util.Date getLastModified() {
            r1 = this;
            java.util.Date r0 = r1.lastModified
            return r0
    }

    public com.alibaba.sdk.android.oss.model.Owner getOwner() {
            r1 = this;
            com.alibaba.sdk.android.oss.model.Owner r0 = r1.owner
            return r0
    }

    public long getSize() {
            r2 = this;
            long r0 = r2.size
            return r0
    }

    public java.lang.String getStorageClass() {
            r1 = this;
            java.lang.String r0 = r1.storageClass
            return r0
    }

    public java.lang.String getType() {
            r1 = this;
            java.lang.String r0 = r1.type
            return r0
    }

    public void setBucketName(java.lang.String r1) {
            r0 = this;
            r0.bucketName = r1
            return
    }

    public void setETag(java.lang.String r1) {
            r0 = this;
            r0.eTag = r1
            return
    }

    public void setKey(java.lang.String r1) {
            r0 = this;
            r0.key = r1
            return
    }

    public void setLastModified(java.util.Date r1) {
            r0 = this;
            r0.lastModified = r1
            return
    }

    public void setOwner(com.alibaba.sdk.android.oss.model.Owner r1) {
            r0 = this;
            r0.owner = r1
            return
    }

    public void setSize(long r1) {
            r0 = this;
            r0.size = r1
            return
    }

    public void setStorageClass(java.lang.String r1) {
            r0 = this;
            r0.storageClass = r1
            return
    }

    public void setType(java.lang.String r1) {
            r0 = this;
            r0.type = r1
            return
    }
}
