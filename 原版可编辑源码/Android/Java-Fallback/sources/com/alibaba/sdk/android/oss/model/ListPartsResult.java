package com.alibaba.sdk.android.oss.model;

public class ListPartsResult extends com.alibaba.sdk.android.oss.model.OSSResult {
    private java.lang.String bucketName;
    private boolean isTruncated;
    private java.lang.String key;
    private int maxParts;
    private int nextPartNumberMarker;
    private int partNumberMarker;
    private java.util.List<com.alibaba.sdk.android.oss.model.PartSummary> parts;
    private java.lang.String storageClass;
    private java.lang.String uploadId;

    public ListPartsResult() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.maxParts = r0
            r1.partNumberMarker = r0
            r1.isTruncated = r0
            r1.nextPartNumberMarker = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.parts = r0
            return
    }

    public java.lang.String getBucketName() {
            r1 = this;
            java.lang.String r0 = r1.bucketName
            return r0
    }

    public java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = r1.key
            return r0
    }

    public int getMaxParts() {
            r1 = this;
            int r0 = r1.maxParts
            return r0
    }

    public int getNextPartNumberMarker() {
            r1 = this;
            int r0 = r1.nextPartNumberMarker
            return r0
    }

    public int getPartNumberMarker() {
            r1 = this;
            int r0 = r1.partNumberMarker
            return r0
    }

    public java.util.List<com.alibaba.sdk.android.oss.model.PartSummary> getParts() {
            r1 = this;
            java.util.List<com.alibaba.sdk.android.oss.model.PartSummary> r0 = r1.parts
            return r0
    }

    public java.lang.String getStorageClass() {
            r1 = this;
            java.lang.String r0 = r1.storageClass
            return r0
    }

    public java.lang.String getUploadId() {
            r1 = this;
            java.lang.String r0 = r1.uploadId
            return r0
    }

    public boolean isTruncated() {
            r1 = this;
            boolean r0 = r1.isTruncated
            return r0
    }

    public void setBucketName(java.lang.String r1) {
            r0 = this;
            r0.bucketName = r1
            return
    }

    public void setKey(java.lang.String r1) {
            r0 = this;
            r0.key = r1
            return
    }

    public void setMaxParts(int r1) {
            r0 = this;
            r0.maxParts = r1
            return
    }

    public void setNextPartNumberMarker(int r1) {
            r0 = this;
            r0.nextPartNumberMarker = r1
            return
    }

    public void setPartNumberMarker(int r1) {
            r0 = this;
            r0.partNumberMarker = r1
            return
    }

    public void setParts(java.util.List<com.alibaba.sdk.android.oss.model.PartSummary> r2) {
            r1 = this;
            java.util.List<com.alibaba.sdk.android.oss.model.PartSummary> r0 = r1.parts
            r0.clear()
            if (r2 == 0) goto L12
            boolean r0 = r2.isEmpty()
            if (r0 != 0) goto L12
            java.util.List<com.alibaba.sdk.android.oss.model.PartSummary> r0 = r1.parts
            r0.addAll(r2)
        L12:
            return
    }

    public void setStorageClass(java.lang.String r1) {
            r0 = this;
            r0.storageClass = r1
            return
    }

    public void setTruncated(boolean r1) {
            r0 = this;
            r0.isTruncated = r1
            return
    }

    public void setUploadId(java.lang.String r1) {
            r0 = this;
            r0.uploadId = r1
            return
    }
}
