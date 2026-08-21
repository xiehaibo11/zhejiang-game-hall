package com.alibaba.sdk.android.oss.model;

public class ListObjectsResult extends com.alibaba.sdk.android.oss.model.OSSResult {
    private java.lang.String bucketName;
    private java.util.List<java.lang.String> commonPrefixes;
    private java.lang.String delimiter;
    private java.lang.String encodingType;
    private boolean isTruncated;
    private java.lang.String marker;
    private int maxKeys;
    private java.lang.String nextMarker;
    private java.util.List<com.alibaba.sdk.android.oss.model.OSSObjectSummary> objectSummaries;
    private java.lang.String prefix;

    public ListObjectsResult() {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.objectSummaries = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.commonPrefixes = r0
            return
    }

    public void addCommonPrefix(java.lang.String r2) {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.commonPrefixes
            r0.add(r2)
            return
    }

    public void addObjectSummary(com.alibaba.sdk.android.oss.model.OSSObjectSummary r2) {
            r1 = this;
            java.util.List<com.alibaba.sdk.android.oss.model.OSSObjectSummary> r0 = r1.objectSummaries
            r0.add(r2)
            return
    }

    public void clearCommonPrefixes() {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.commonPrefixes
            r0.clear()
            return
    }

    public void clearObjectSummaries() {
            r1 = this;
            java.util.List<com.alibaba.sdk.android.oss.model.OSSObjectSummary> r0 = r1.objectSummaries
            r0.clear()
            return
    }

    public java.lang.String getBucketName() {
            r1 = this;
            java.lang.String r0 = r1.bucketName
            return r0
    }

    public java.util.List<java.lang.String> getCommonPrefixes() {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.commonPrefixes
            return r0
    }

    public java.lang.String getDelimiter() {
            r1 = this;
            java.lang.String r0 = r1.delimiter
            return r0
    }

    public java.lang.String getEncodingType() {
            r1 = this;
            java.lang.String r0 = r1.encodingType
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

    public java.util.List<com.alibaba.sdk.android.oss.model.OSSObjectSummary> getObjectSummaries() {
            r1 = this;
            java.util.List<com.alibaba.sdk.android.oss.model.OSSObjectSummary> r0 = r1.objectSummaries
            return r0
    }

    public java.lang.String getPrefix() {
            r1 = this;
            java.lang.String r0 = r1.prefix
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

    public void setDelimiter(java.lang.String r1) {
            r0 = this;
            r0.delimiter = r1
            return
    }

    public void setEncodingType(java.lang.String r1) {
            r0 = this;
            r0.encodingType = r1
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
