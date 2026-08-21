package com.vivo.push.model;

public class InsideNotificationItem extends com.vivo.push.model.UPSNotificationMessage {
    private int mAppType;
    private int mDisplayStyle;
    private int mInnerPriority;
    private boolean mIsShowBigPicOnMobileNet;
    private int mMessageType;
    private int mNotifyDisplayStatus;
    private java.lang.String mReactPackage;
    private java.lang.String mSuitReactVersion;

    public InsideNotificationItem() {
            r0 = this;
            r0.<init>()
            return
    }

    private int parsingNotifyStyle() {
            r3 = this;
            int r0 = r3.mDisplayStyle
            r1 = r0 & 32
            r2 = 0
            if (r1 == 0) goto L8
            return r2
        L8:
            r0 = r0 & 16
            if (r0 == 0) goto Le
            r0 = 1
            return r0
        Le:
            return r2
    }

    public int getAppType() {
            r1 = this;
            int r0 = r1.mAppType
            return r0
    }

    public int getDisplayStyle() {
            r1 = this;
            int r0 = r1.mDisplayStyle
            return r0
    }

    public int getInnerPriority() {
            r1 = this;
            int r0 = r1.mInnerPriority
            return r0
    }

    public int getMessageType() {
            r1 = this;
            int r0 = r1.mMessageType
            return r0
    }

    public int getNotifyDisplayStatus() {
            r1 = this;
            int r0 = r1.mNotifyDisplayStatus
            return r0
    }

    public java.lang.String getReactPackage() {
            r1 = this;
            java.lang.String r0 = r1.mReactPackage
            return r0
    }

    public java.lang.String getSuitReactVersion() {
            r1 = this;
            java.lang.String r0 = r1.mSuitReactVersion
            return r0
    }

    public boolean isShowBigPicOnMobileNet() {
            r1 = this;
            boolean r0 = r1.mIsShowBigPicOnMobileNet
            return r0
    }

    public void setAppType(int r1) {
            r0 = this;
            r0.mAppType = r1
            return
    }

    public void setDisplayStyle(int r1) {
            r0 = this;
            r0.mDisplayStyle = r1
            int r1 = r0.parsingNotifyStyle()
            r0.mNotifyDisplayStatus = r1
            return
    }

    public void setInnerPriority(int r1) {
            r0 = this;
            r0.mInnerPriority = r1
            return
    }

    public void setIsShowBigPicOnMobileNet(boolean r1) {
            r0 = this;
            r0.mIsShowBigPicOnMobileNet = r1
            return
    }

    public void setMessageType(int r1) {
            r0 = this;
            r0.mMessageType = r1
            return
    }

    public void setReactPackage(java.lang.String r1) {
            r0 = this;
            r0.mReactPackage = r1
            return
    }

    public void setSuitReactVersion(java.lang.String r1) {
            r0 = this;
            r0.mSuitReactVersion = r1
            return
    }
}
