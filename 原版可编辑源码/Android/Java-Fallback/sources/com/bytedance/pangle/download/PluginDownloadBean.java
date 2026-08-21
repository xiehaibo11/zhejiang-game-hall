package com.bytedance.pangle.download;

public class PluginDownloadBean {
    public int mApiVersionMax;
    public int mApiVersionMin;
    public java.util.List<java.lang.String> mBackupUrlList;
    public int mFlag;
    public long mFollowId;
    public java.lang.String mMd5;
    public java.lang.String mPackageName;
    public java.lang.String mUrl;
    public int mVersionCode;

    public PluginDownloadBean() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.mApiVersionMin = r0
            r0 = 2147483647(0x7fffffff, float:NaN)
            r1.mApiVersionMax = r0
            return
    }

    public boolean isRevert() {
            r2 = this;
            int r0 = r2.mFlag
            r1 = 3
            if (r0 != r1) goto L7
            r0 = 1
            return r0
        L7:
            r0 = 0
            return r0
    }

    public boolean isUnInstall() {
            r2 = this;
            int r0 = r2.mFlag
            r1 = 1
            if (r0 != r1) goto L6
            return r1
        L6:
            r0 = 0
            return r0
    }
}
