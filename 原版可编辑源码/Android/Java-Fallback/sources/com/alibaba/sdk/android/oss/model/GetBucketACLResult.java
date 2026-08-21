package com.alibaba.sdk.android.oss.model;

public class GetBucketACLResult extends com.alibaba.sdk.android.oss.model.OSSResult {
    private com.alibaba.sdk.android.oss.model.CannedAccessControlList bucketACL;
    private com.alibaba.sdk.android.oss.model.Owner bucketOwner;

    public GetBucketACLResult() {
            r1 = this;
            r1.<init>()
            com.alibaba.sdk.android.oss.model.Owner r0 = new com.alibaba.sdk.android.oss.model.Owner
            r0.<init>()
            r1.bucketOwner = r0
            return
    }

    public java.lang.String getBucketACL() {
            r1 = this;
            com.alibaba.sdk.android.oss.model.CannedAccessControlList r0 = r1.bucketACL
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.toString()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    public java.lang.String getBucketOwner() {
            r1 = this;
            com.alibaba.sdk.android.oss.model.Owner r0 = r1.bucketOwner
            java.lang.String r0 = r0.getDisplayName()
            return r0
    }

    public java.lang.String getBucketOwnerID() {
            r1 = this;
            com.alibaba.sdk.android.oss.model.Owner r0 = r1.bucketOwner
            java.lang.String r0 = r0.getId()
            return r0
    }

    public com.alibaba.sdk.android.oss.model.Owner getOwner() {
            r1 = this;
            com.alibaba.sdk.android.oss.model.Owner r0 = r1.bucketOwner
            return r0
    }

    public void setBucketACL(java.lang.String r1) {
            r0 = this;
            com.alibaba.sdk.android.oss.model.CannedAccessControlList r1 = com.alibaba.sdk.android.oss.model.CannedAccessControlList.parseACL(r1)
            r0.bucketACL = r1
            return
    }

    public void setBucketOwner(java.lang.String r2) {
            r1 = this;
            com.alibaba.sdk.android.oss.model.Owner r0 = r1.bucketOwner
            r0.setDisplayName(r2)
            return
    }

    public void setBucketOwnerID(java.lang.String r2) {
            r1 = this;
            com.alibaba.sdk.android.oss.model.Owner r0 = r1.bucketOwner
            r0.setId(r2)
            return
    }
}
