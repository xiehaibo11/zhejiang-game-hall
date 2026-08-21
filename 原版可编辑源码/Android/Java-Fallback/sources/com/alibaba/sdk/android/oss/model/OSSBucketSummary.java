package com.alibaba.sdk.android.oss.model;

public class OSSBucketSummary {
    private com.alibaba.sdk.android.oss.model.CannedAccessControlList acl;
    public java.util.Date createDate;
    public java.lang.String extranetEndpoint;
    public java.lang.String intranetEndpoint;
    public java.lang.String location;
    public java.lang.String name;
    public com.alibaba.sdk.android.oss.model.Owner owner;
    public java.lang.String storageClass;

    public OSSBucketSummary() {
            r0 = this;
            r0.<init>()
            return
    }

    public java.lang.String getAcl() {
            r1 = this;
            com.alibaba.sdk.android.oss.model.CannedAccessControlList r0 = r1.acl
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.toString()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    public void setAcl(java.lang.String r1) {
            r0 = this;
            com.alibaba.sdk.android.oss.model.CannedAccessControlList r1 = com.alibaba.sdk.android.oss.model.CannedAccessControlList.parseACL(r1)
            r0.acl = r1
            return
    }

    public java.lang.String toString() {
            r6 = this;
            java.lang.String r0 = r6.storageClass
            java.lang.String r1 = "]"
            java.lang.String r2 = ", location="
            java.lang.String r3 = ", owner="
            java.lang.String r4 = ", creationDate="
            java.lang.String r5 = "OSSBucket [name="
            if (r0 != 0) goto L3f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r5)
            java.lang.String r5 = r6.name
            r0.append(r5)
            r0.append(r4)
            java.util.Date r4 = r6.createDate
            r0.append(r4)
            r0.append(r3)
            com.alibaba.sdk.android.oss.model.Owner r3 = r6.owner
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            r0.append(r2)
            java.lang.String r2 = r6.location
            r0.append(r2)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
        L3f:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r5)
            java.lang.String r5 = r6.name
            r0.append(r5)
            r0.append(r4)
            java.util.Date r4 = r6.createDate
            r0.append(r4)
            r0.append(r3)
            com.alibaba.sdk.android.oss.model.Owner r3 = r6.owner
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            r0.append(r2)
            java.lang.String r2 = r6.location
            r0.append(r2)
            java.lang.String r2 = ", storageClass="
            r0.append(r2)
            java.lang.String r2 = r6.storageClass
            r0.append(r2)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
