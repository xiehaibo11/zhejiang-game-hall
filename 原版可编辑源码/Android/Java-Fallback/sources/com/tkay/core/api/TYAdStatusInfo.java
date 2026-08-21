package com.tkay.core.api;

public class TYAdStatusInfo {
    private boolean mIsLoading;
    private boolean mIsReady;
    private com.tkay.core.api.TYAdInfo mTYAdInfo;

    public TYAdStatusInfo(boolean r1, boolean r2, com.tkay.core.api.TYAdInfo r3) {
            r0 = this;
            r0.<init>()
            r0.mIsLoading = r1
            r0.mIsReady = r2
            r0.mTYAdInfo = r3
            return
    }

    public com.tkay.core.api.TYAdInfo getTYAdInfo() {
            r1 = this;
            com.tkay.core.api.TYAdInfo r0 = r1.mTYAdInfo
            return r0
    }

    public boolean isLoading() {
            r1 = this;
            boolean r0 = r1.mIsLoading
            return r0
    }

    public boolean isReady() {
            r1 = this;
            boolean r0 = r1.mIsReady
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "TYAdStatusInfo{isLoading="
            r0.<init>(r1)
            boolean r1 = r2.mIsLoading
            r0.append(r1)
            java.lang.String r1 = ", isReady="
            r0.append(r1)
            boolean r1 = r2.mIsReady
            r0.append(r1)
            java.lang.String r1 = ", topAdInfo="
            r0.append(r1)
            com.tkay.core.api.TYAdInfo r1 = r2.mTYAdInfo
            if (r1 == 0) goto L20
            goto L22
        L20:
            java.lang.String r1 = "null"
        L22:
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
