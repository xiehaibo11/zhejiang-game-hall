package com.huawei.hms.common.data;

public class SingleRefDBInnerIter<T> extends com.huawei.hms.common.data.DBInnerIter<T> {
    public SingleRefDBInnerIter(com.huawei.hms.common.data.DataBuffer<T> r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    public T next() {
            r4 = this;
            boolean r0 = r4.hasNext()
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            int r0 = r4.index
            int r0 = r0 + 1
            r4.index = r0
            r1 = 0
            if (r0 != 0) goto L49
            com.huawei.hms.common.data.DataBuffer<O> r0 = r4.dataBuffer
            java.lang.Object r0 = r0.get(r1)
            boolean r0 = r0 instanceof com.huawei.hms.common.data.DataBufferRef
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "DataBuffer reference of type "
            r2.append(r3)
            com.huawei.hms.common.data.DataBuffer<O> r3 = r4.dataBuffer
            java.lang.Object r3 = r3.get(r1)
            java.lang.Class r3 = r3.getClass()
            r2.append(r3)
            java.lang.String r3 = " is not movable"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.huawei.hms.common.internal.Preconditions.checkState(r0, r2)
            com.huawei.hms.common.data.DataBuffer<O> r0 = r4.dataBuffer
            java.lang.Object r0 = r0.get(r1)
            com.huawei.hms.common.data.DataBufferRef r0 = (com.huawei.hms.common.data.DataBufferRef) r0
            int r2 = r4.index
            r0.getWindowIndex(r2)
        L49:
            com.huawei.hms.common.data.DataBuffer<O> r0 = r4.dataBuffer
            java.lang.Object r0 = r0.get(r1)
            return r0
    }
}
