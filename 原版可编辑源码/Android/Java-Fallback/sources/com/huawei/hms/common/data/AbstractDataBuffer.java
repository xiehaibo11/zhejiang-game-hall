package com.huawei.hms.common.data;

public abstract class AbstractDataBuffer<T> extends com.huawei.hms.support.api.client.Result implements com.huawei.hms.common.data.DataBuffer<T> {
    protected final com.huawei.hms.common.data.DataHolder mDataHolder;

    protected AbstractDataBuffer(com.huawei.hms.common.data.DataHolder r1) {
            r0 = this;
            r0.<init>()
            r0.mDataHolder = r1
            return
    }

    @Override
    @java.lang.Deprecated
    public final void close() {
            r0 = this;
            r0.release()
            return
    }

    @Override
    public abstract T get(int r1);

    @Override
    public int getCount() {
            r1 = this;
            com.huawei.hms.common.data.DataHolder r0 = r1.mDataHolder
            if (r0 != 0) goto L6
            r0 = 0
            goto La
        L6:
            int r0 = r0.getCount()
        La:
            return r0
    }

    @Override
    public android.os.Bundle getMetadata() {
            r1 = this;
            com.huawei.hms.common.data.DataHolder r0 = r1.mDataHolder
            android.os.Bundle r0 = r0.getMetadata()
            return r0
    }

    @Override
    @java.lang.Deprecated
    public boolean isClosed() {
            r1 = this;
            com.huawei.hms.common.data.DataHolder r0 = r1.mDataHolder
            if (r0 != 0) goto L6
            r0 = 1
            return r0
        L6:
            boolean r0 = r0.isClosed()
            return r0
    }

    @Override
    public java.util.Iterator<T> iterator() {
            r1 = this;
            com.huawei.hms.common.data.DBInnerIter r0 = new com.huawei.hms.common.data.DBInnerIter
            r0.<init>(r1)
            return r0
    }

    @Override
    public void release() {
            r1 = this;
            com.huawei.hms.common.data.DataHolder r0 = r1.mDataHolder
            if (r0 == 0) goto L7
            r0.close()
        L7:
            return
    }

    @Override
    public java.util.Iterator<T> singleRefIterator() {
            r1 = this;
            com.huawei.hms.common.data.SingleRefDBInnerIter r0 = new com.huawei.hms.common.data.SingleRefDBInnerIter
            r0.<init>(r1)
            return r0
    }
}
