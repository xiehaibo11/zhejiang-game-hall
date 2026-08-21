package com.alibaba.sdk.android.oss.model;

public class ListBucketsResult extends com.alibaba.sdk.android.oss.model.OSSResult {
    private java.util.List<com.alibaba.sdk.android.oss.model.OSSBucketSummary> buckets;
    private boolean isTruncated;
    private java.lang.String marker;
    private int maxKeys;
    private java.lang.String nextMarker;
    private java.lang.String ownerDisplayName;
    private java.lang.String ownerId;
    private java.lang.String prefix;

    public ListBucketsResult() {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.buckets = r0
            return
    }

    public void addBucket(com.alibaba.sdk.android.oss.model.OSSBucketSummary r2) {
            r1 = this;
            java.util.List<com.alibaba.sdk.android.oss.model.OSSBucketSummary> r0 = r1.buckets
            r0.add(r2)
            return
    }

    public void clearBucketList() {
            r1 = this;
            java.util.List<com.alibaba.sdk.android.oss.model.OSSBucketSummary> r0 = r1.buckets
            r0.clear()
            return
    }

    public java.util.List<com.alibaba.sdk.android.oss.model.OSSBucketSummary> getBuckets() {
            r1 = this;
            java.util.List<com.alibaba.sdk.android.oss.model.OSSBucketSummary> r0 = r1.buckets
            return r0
    }

    public java.lang.String getMarker() {
            r1 = this;
            java.lang.String r0 = r1.marker
            return r0
    }

    public int getMaxKeys() {
            r1 = this;
            int r0 = r1.maxKeys
            return r0
    }

    public java.lang.String getNextMarker() {
            r1 = this;
            java.lang.String r0 = r1.nextMarker
            return r0
    }

    public java.lang.String getOwnerDisplayName() {
            r1 = this;
            java.lang.String r0 = r1.ownerDisplayName
            return r0
    }

    public java.lang.String getOwnerId() {
            r1 = this;
            java.lang.String r0 = r1.ownerId
            return r0
    }

    public java.lang.String getPrefix() {
            r1 = this;
            java.lang.String r0 = r1.prefix
            return r0
    }

    public boolean getTruncated() {
            r1 = this;
            boolean r0 = r1.isTruncated
            return r0
    }

    public void setBuckets(java.util.List<com.alibaba.sdk.android.oss.model.OSSBucketSummary> r1) {
            r0 = this;
            r0.buckets = r1
            return
    }

    public void setMarker(java.lang.String r1) {
            r0 = this;
            r0.marker = r1
            return
    }

    public void setMaxKeys(int r1) {
            r0 = this;
            r0.maxKeys = r1
            return
    }

    public void setNextMarker(java.lang.String r1) {
            r0 = this;
            r0.nextMarker = r1
            return
    }

    public void setOwnerDisplayName(java.lang.String r1) {
            r0 = this;
            r0.ownerDisplayName = r1
            return
    }

    public void setOwnerId(java.lang.String r1) {
            r0 = this;
            r0.ownerId = r1
            return
    }

    public void setPrefix(java.lang.String r1) {
            r0 = this;
            r0.prefix = r1
            return
    }

    public void setTruncated(boolean r1) {
            r0 = this;
            r0.isTruncated = r1
            return
    }
}
