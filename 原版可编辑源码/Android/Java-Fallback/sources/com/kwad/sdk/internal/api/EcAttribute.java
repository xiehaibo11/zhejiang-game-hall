package com.kwad.sdk.internal.api;

public class EcAttribute implements java.io.Serializable {
    private static final long serialVersionUID = 5648759570127504312L;
    private java.lang.String comment;
    private java.lang.String promoteId;
    private long userCommRateBuying;
    private long userCommRateSharing;

    public EcAttribute() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.userCommRateBuying = r0
            r2.userCommRateSharing = r0
            return
    }

    public java.lang.String getComment() {
            r1 = this;
            java.lang.String r0 = r1.comment
            return r0
    }

    public java.lang.String getPromoteId() {
            r1 = this;
            java.lang.String r0 = r1.promoteId
            return r0
    }

    public long getUserCommRateBuying() {
            r2 = this;
            long r0 = r2.userCommRateBuying
            return r0
    }

    public long getUserCommRateSharing() {
            r2 = this;
            long r0 = r2.userCommRateSharing
            return r0
    }

    public void setComment(java.lang.String r1) {
            r0 = this;
            if (r1 != 0) goto L4
            java.lang.String r1 = ""
        L4:
            r0.comment = r1
            return
    }

    public void setPromoteId(java.lang.String r1) {
            r0 = this;
            if (r1 != 0) goto L4
            java.lang.String r1 = ""
        L4:
            r0.promoteId = r1
            return
    }

    public void setUserCommRateBuying(long r1) {
            r0 = this;
            r0.userCommRateBuying = r1
            return
    }

    public void setUserCommRateSharing(long r1) {
            r0 = this;
            r0.userCommRateSharing = r1
            return
    }
}
