package com.alibaba.sdk.android.oss.model;

public class CopyObjectRequest extends com.alibaba.sdk.android.oss.model.OSSRequest {
    private java.lang.String destinationBucketName;
    private java.lang.String destinationKey;
    private java.util.List<java.lang.String> matchingETagConstraints;
    private java.util.Date modifiedSinceConstraint;
    private com.alibaba.sdk.android.oss.model.ObjectMetadata newObjectMetadata;
    private java.util.List<java.lang.String> nonmatchingEtagConstraints;
    private java.lang.String serverSideEncryption;
    private java.lang.String sourceBucketName;
    private java.lang.String sourceKey;
    private java.util.Date unmodifiedSinceConstraint;

    public CopyObjectRequest(java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.matchingETagConstraints = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.nonmatchingEtagConstraints = r0
            r1.setSourceBucketName(r2)
            r1.setSourceKey(r3)
            r1.setDestinationBucketName(r4)
            r1.setDestinationKey(r5)
            return
    }

    public void clearMatchingETagConstraints() {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.matchingETagConstraints
            r0.clear()
            return
    }

    public void clearNonmatchingETagConstraints() {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.nonmatchingEtagConstraints
            r0.clear()
            return
    }

    public java.lang.String getDestinationBucketName() {
            r1 = this;
            java.lang.String r0 = r1.destinationBucketName
            return r0
    }

    public java.lang.String getDestinationKey() {
            r1 = this;
            java.lang.String r0 = r1.destinationKey
            return r0
    }

    public java.util.List<java.lang.String> getMatchingETagConstraints() {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.matchingETagConstraints
            return r0
    }

    public java.util.Date getModifiedSinceConstraint() {
            r1 = this;
            java.util.Date r0 = r1.modifiedSinceConstraint
            return r0
    }

    public com.alibaba.sdk.android.oss.model.ObjectMetadata getNewObjectMetadata() {
            r1 = this;
            com.alibaba.sdk.android.oss.model.ObjectMetadata r0 = r1.newObjectMetadata
            return r0
    }

    public java.util.List<java.lang.String> getNonmatchingEtagConstraints() {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.nonmatchingEtagConstraints
            return r0
    }

    public java.lang.String getServerSideEncryption() {
            r1 = this;
            java.lang.String r0 = r1.serverSideEncryption
            return r0
    }

    public java.lang.String getSourceBucketName() {
            r1 = this;
            java.lang.String r0 = r1.sourceBucketName
            return r0
    }

    public java.lang.String getSourceKey() {
            r1 = this;
            java.lang.String r0 = r1.sourceKey
            return r0
    }

    public java.util.Date getUnmodifiedSinceConstraint() {
            r1 = this;
            java.util.Date r0 = r1.unmodifiedSinceConstraint
            return r0
    }

    public void setDestinationBucketName(java.lang.String r1) {
            r0 = this;
            r0.destinationBucketName = r1
            return
    }

    public void setDestinationKey(java.lang.String r1) {
            r0 = this;
            r0.destinationKey = r1
            return
    }

    public void setMatchingETagConstraints(java.util.List<java.lang.String> r2) {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.matchingETagConstraints
            r0.clear()
            if (r2 == 0) goto L12
            boolean r0 = r2.isEmpty()
            if (r0 != 0) goto L12
            java.util.List<java.lang.String> r0 = r1.matchingETagConstraints
            r0.addAll(r2)
        L12:
            return
    }

    public void setModifiedSinceConstraint(java.util.Date r1) {
            r0 = this;
            r0.modifiedSinceConstraint = r1
            return
    }

    public void setNewObjectMetadata(com.alibaba.sdk.android.oss.model.ObjectMetadata r1) {
            r0 = this;
            r0.newObjectMetadata = r1
            return
    }

    public void setNonmatchingETagConstraints(java.util.List<java.lang.String> r2) {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.nonmatchingEtagConstraints
            r0.clear()
            if (r2 == 0) goto L12
            boolean r0 = r2.isEmpty()
            if (r0 != 0) goto L12
            java.util.List<java.lang.String> r0 = r1.nonmatchingEtagConstraints
            r0.addAll(r2)
        L12:
            return
    }

    public void setServerSideEncryption(java.lang.String r1) {
            r0 = this;
            r0.serverSideEncryption = r1
            return
    }

    public void setSourceBucketName(java.lang.String r1) {
            r0 = this;
            r0.sourceBucketName = r1
            return
    }

    public void setSourceKey(java.lang.String r1) {
            r0 = this;
            r0.sourceKey = r1
            return
    }

    public void setUnmodifiedSinceConstraint(java.util.Date r1) {
            r0 = this;
            r0.unmodifiedSinceConstraint = r1
            return
    }
}
