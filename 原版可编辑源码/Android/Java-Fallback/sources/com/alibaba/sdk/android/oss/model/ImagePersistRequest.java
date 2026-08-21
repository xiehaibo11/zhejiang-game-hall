package com.alibaba.sdk.android.oss.model;

public class ImagePersistRequest extends com.alibaba.sdk.android.oss.model.OSSRequest {
    public java.lang.String mAction;
    public java.lang.String mFromBucket;
    public java.lang.String mFromObjectkey;
    public java.lang.String mToBucketName;
    public java.lang.String mToObjectKey;

    public ImagePersistRequest(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            r0 = this;
            r0.<init>()
            r0.mFromBucket = r1
            r0.mFromObjectkey = r2
            r0.mToBucketName = r3
            r0.mToObjectKey = r4
            r0.mAction = r5
            return
    }
}
