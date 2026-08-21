package com.alibaba.sdk.android.oss.model;

public class AppendObjectResult extends com.alibaba.sdk.android.oss.model.OSSResult {
    private long nextPosition;
    private java.lang.String objectCRC64;

    public AppendObjectResult() {
            r0 = this;
            r0.<init>()
            return
    }

    public long getNextPosition() {
            r2 = this;
            long r0 = r2.nextPosition
            return r0
    }

    public java.lang.String getObjectCRC64() {
            r1 = this;
            java.lang.String r0 = r1.objectCRC64
            return r0
    }

    public void setNextPosition(java.lang.Long r3) {
            r2 = this;
            long r0 = r3.longValue()
            r2.nextPosition = r0
            return
    }

    public void setObjectCRC64(java.lang.String r1) {
            r0 = this;
            r0.objectCRC64 = r1
            return
    }
}
