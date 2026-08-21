package com.vivo.push.model;

public class UPSNotificationMessage {
    public static final int CUSTOM = 3;
    public static final int ISMACROREPLACE = 1;
    public static final int OPENACTIVITY = 4;
    public static final int OPENAPP = 1;
    public static final int OPENURL = 2;
    public static final int UNKNOWN = 0;
    private java.lang.String mAdClickCheckUrl;
    private int mCompatibleType;
    private java.lang.String mContent;
    private java.lang.String mCoverUrl;
    private java.lang.String mIconUrl;
    private int mIsMacroReplace;
    private long mMsgId;
    private int mNotifyType;
    private java.util.Map<java.lang.String, java.lang.String> mParams;
    private java.lang.String mPurePicUrl;
    private boolean mShowTime;
    private java.lang.String mSkipContent;
    private int mSkipType;
    private int mTargetType;
    private java.lang.String mTitle;
    private java.lang.String mTragetContent;

    public UPSNotificationMessage() {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.mParams = r0
            return
    }

    public void clearCoverUrl() {
            r1 = this;
            java.lang.String r0 = ""
            r1.mIconUrl = r0
            return
    }

    public void clearPurePicUrl() {
            r1 = this;
            java.lang.String r0 = ""
            r1.mPurePicUrl = r0
            return
    }

    public java.lang.String getAdClickCheckUrl() {
            r1 = this;
            java.lang.String r0 = r1.mAdClickCheckUrl
            return r0
    }

    public int getCompatibleType() {
            r1 = this;
            int r0 = r1.mCompatibleType
            return r0
    }

    public java.lang.String getContent() {
            r1 = this;
            java.lang.String r0 = r1.mContent
            return r0
    }

    public java.lang.String getCoverUrl() {
            r1 = this;
            java.lang.String r0 = r1.mCoverUrl
            return r0
    }

    public java.lang.String getIconUrl() {
            r1 = this;
            java.lang.String r0 = r1.mIconUrl
            return r0
    }

    public int getIsMacroReplace() {
            r1 = this;
            int r0 = r1.mIsMacroReplace
            return r0
    }

    public long getMsgId() {
            r2 = this;
            long r0 = r2.mMsgId
            return r0
    }

    public int getNotifyType() {
            r1 = this;
            int r0 = r1.mNotifyType
            return r0
    }

    public java.util.Map<java.lang.String, java.lang.String> getParams() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.mParams
            return r0
    }

    public java.lang.String getPurePicUrl() {
            r1 = this;
            java.lang.String r0 = r1.mPurePicUrl
            return r0
    }

    public java.lang.String getSkipContent() {
            r1 = this;
            java.lang.String r0 = r1.mSkipContent
            return r0
    }

    public int getSkipType() {
            r1 = this;
            int r0 = r1.mSkipType
            return r0
    }

    public int getTargetType() {
            r1 = this;
            int r0 = r1.mTargetType
            return r0
    }

    public java.lang.String getTitle() {
            r1 = this;
            java.lang.String r0 = r1.mTitle
            return r0
    }

    public java.lang.String getTragetContent() {
            r1 = this;
            java.lang.String r0 = r1.mTragetContent
            return r0
    }

    public boolean isMacroReplace() {
            r2 = this;
            int r0 = r2.mIsMacroReplace
            r1 = 1
            if (r0 != r1) goto L6
            return r1
        L6:
            r0 = 0
            return r0
    }

    public boolean isShowTime() {
            r1 = this;
            boolean r0 = r1.mShowTime
            return r0
    }

    public void setAdClickCheckUrl(java.lang.String r1) {
            r0 = this;
            r0.mAdClickCheckUrl = r1
            return
    }

    public void setCompatibleType(int r1) {
            r0 = this;
            r0.mCompatibleType = r1
            return
    }

    public void setContent(java.lang.String r1) {
            r0 = this;
            r0.mContent = r1
            return
    }

    public void setCoverUrl(java.lang.String r1) {
            r0 = this;
            r0.mCoverUrl = r1
            return
    }

    public void setIconUrl(java.lang.String r1) {
            r0 = this;
            r0.mIconUrl = r1
            return
    }

    public void setIsMacroReplace(int r1) {
            r0 = this;
            r0.mIsMacroReplace = r1
            return
    }

    public void setMsgId(long r1) {
            r0 = this;
            r0.mMsgId = r1
            return
    }

    public void setNotifyType(int r1) {
            r0 = this;
            r0.mNotifyType = r1
            return
    }

    public void setParams(java.util.Map<java.lang.String, java.lang.String> r1) {
            r0 = this;
            r0.mParams = r1
            return
    }

    public void setPurePicUrl(java.lang.String r1) {
            r0 = this;
            r0.mPurePicUrl = r1
            return
    }

    public void setShowTime(boolean r1) {
            r0 = this;
            r0.mShowTime = r1
            return
    }

    public void setSkipContent(java.lang.String r1) {
            r0 = this;
            r0.mSkipContent = r1
            return
    }

    public void setSkipType(int r1) {
            r0 = this;
            r0.mSkipType = r1
            return
    }

    public void setTargetType(int r1) {
            r0 = this;
            r0.mTargetType = r1
            return
    }

    public void setTitle(java.lang.String r1) {
            r0 = this;
            r0.mTitle = r1
            return
    }

    public void setTragetContext(java.lang.String r1) {
            r0 = this;
            r0.mTragetContent = r1
            return
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "UPSNotificationMessage{mTargetType="
            r0.<init>(r1)
            int r1 = r3.mTargetType
            r0.append(r1)
            java.lang.String r1 = ", mTragetContent='"
            r0.append(r1)
            java.lang.String r1 = r3.mTragetContent
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            java.lang.String r2 = ", mTitle='"
            r0.append(r2)
            java.lang.String r2 = r3.mTitle
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", mContent='"
            r0.append(r2)
            java.lang.String r2 = r3.mContent
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", mNotifyType="
            r0.append(r2)
            int r2 = r3.mNotifyType
            r0.append(r2)
            java.lang.String r2 = ", mPurePicUrl='"
            r0.append(r2)
            java.lang.String r2 = r3.mPurePicUrl
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", mIconUrl='"
            r0.append(r2)
            java.lang.String r2 = r3.mIconUrl
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", mCoverUrl='"
            r0.append(r2)
            java.lang.String r2 = r3.mCoverUrl
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", mSkipContent='"
            r0.append(r2)
            java.lang.String r2 = r3.mSkipContent
            r0.append(r2)
            r0.append(r1)
            java.lang.String r1 = ", mSkipType="
            r0.append(r1)
            int r1 = r3.mSkipType
            r0.append(r1)
            java.lang.String r1 = ", mShowTime="
            r0.append(r1)
            boolean r1 = r3.mShowTime
            r0.append(r1)
            java.lang.String r1 = ", mMsgId="
            r0.append(r1)
            long r1 = r3.mMsgId
            r0.append(r1)
            java.lang.String r1 = ", mParams="
            r0.append(r1)
            java.util.Map<java.lang.String, java.lang.String> r1 = r3.mParams
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
