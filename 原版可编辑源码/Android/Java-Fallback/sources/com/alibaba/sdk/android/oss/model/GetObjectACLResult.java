package com.alibaba.sdk.android.oss.model;

public class GetObjectACLResult extends com.alibaba.sdk.android.oss.model.OSSResult {
    private com.alibaba.sdk.android.oss.model.CannedAccessControlList objectACL;
    private com.alibaba.sdk.android.oss.model.Owner objectOwner;

    public GetObjectACLResult() {
            r1 = this;
            r1.<init>()
            com.alibaba.sdk.android.oss.model.Owner r0 = new com.alibaba.sdk.android.oss.model.Owner
            r0.<init>()
            r1.objectOwner = r0
            return
    }

    public java.lang.String getObjectACL() {
            r1 = this;
            com.alibaba.sdk.android.oss.model.CannedAccessControlList r0 = r1.objectACL
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.toString()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    public java.lang.String getObjectOwner() {
            r1 = this;
            com.alibaba.sdk.android.oss.model.Owner r0 = r1.objectOwner
            java.lang.String r0 = r0.getDisplayName()
            return r0
    }

    public java.lang.String getObjectOwnerID() {
            r1 = this;
            com.alibaba.sdk.android.oss.model.Owner r0 = r1.objectOwner
            java.lang.String r0 = r0.getId()
            return r0
    }

    public com.alibaba.sdk.android.oss.model.Owner getOwner() {
            r1 = this;
            com.alibaba.sdk.android.oss.model.Owner r0 = r1.objectOwner
            return r0
    }

    public void setObjectACL(java.lang.String r1) {
            r0 = this;
            com.alibaba.sdk.android.oss.model.CannedAccessControlList r1 = com.alibaba.sdk.android.oss.model.CannedAccessControlList.parseACL(r1)
            r0.objectACL = r1
            return
    }

    public void setObjectOwner(java.lang.String r2) {
            r1 = this;
            com.alibaba.sdk.android.oss.model.Owner r0 = r1.objectOwner
            r0.setDisplayName(r2)
            return
    }

    public void setObjectOwnerID(java.lang.String r2) {
            r1 = this;
            com.alibaba.sdk.android.oss.model.Owner r0 = r1.objectOwner
            r0.setId(r2)
            return
    }
}
