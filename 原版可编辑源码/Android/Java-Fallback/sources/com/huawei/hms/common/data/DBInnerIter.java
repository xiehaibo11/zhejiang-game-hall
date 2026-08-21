package com.huawei.hms.common.data;

public class DBInnerIter<O> implements java.util.Iterator<O> {
    protected final com.huawei.hms.common.data.DataBuffer<O> dataBuffer;
    protected int index;

    public DBInnerIter(com.huawei.hms.common.data.DataBuffer<O> r2) {
            r1 = this;
            r1.<init>()
            r0 = -1
            r1.index = r0
            java.lang.String r0 = "dataBuffer cannot be null"
            com.huawei.hms.common.internal.Preconditions.checkNotNull(r2, r0)
            r1.dataBuffer = r2
            return
    }

    @Override
    public boolean hasNext() {
            r3 = this;
            int r0 = r3.index
            r1 = 1
            int r0 = r0 + r1
            com.huawei.hms.common.data.DataBuffer<O> r2 = r3.dataBuffer
            int r2 = r2.getCount()
            if (r0 >= r2) goto Ld
            return r1
        Ld:
            r0 = 0
            return r0
    }

    @Override
    public O next() {
            r2 = this;
            boolean r0 = r2.hasNext()
            if (r0 == 0) goto L13
            com.huawei.hms.common.data.DataBuffer<O> r0 = r2.dataBuffer
            int r1 = r2.index
            int r1 = r1 + 1
            r2.index = r1
            java.lang.Object r0 = r0.get(r1)
            goto L14
        L13:
            r0 = 0
        L14:
            return r0
    }
}
