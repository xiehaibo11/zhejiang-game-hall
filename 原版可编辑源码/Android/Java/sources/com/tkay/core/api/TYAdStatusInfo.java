package com.tkay.core.api;

public class TYAdStatusInfo {
    private boolean mIsLoading;
    private boolean mIsReady;
    private TYAdInfo mTYAdInfo;

    public TYAdStatusInfo(boolean z, boolean z2, TYAdInfo tYAdInfo) {
        this.mIsLoading = z;
        this.mIsReady = z2;
        this.mTYAdInfo = tYAdInfo;
    }

    public boolean isLoading() {
        return this.mIsLoading;
    }

    public boolean isReady() {
        return this.mIsReady;
    }

    public TYAdInfo getTYAdInfo() {
        return this.mTYAdInfo;
    }

    public String toString() {
        StringBuilder sb = new StringBuilder("TYAdStatusInfo{isLoading=");
        sb.append(this.mIsLoading);
        sb.append(", isReady=");
        sb.append(this.mIsReady);
        sb.append(", topAdInfo=");
        Object obj = this.mTYAdInfo;
        if (obj == null) {
            obj = "null";
        }
        sb.append(obj);
        sb.append('}');
        return sb.toString();
    }
}
