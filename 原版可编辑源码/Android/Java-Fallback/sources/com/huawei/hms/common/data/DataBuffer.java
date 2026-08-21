package com.huawei.hms.common.data;

public interface DataBuffer<T> extends com.huawei.hms.common.api.Releasable, java.lang.Iterable<T> {
    @java.lang.Deprecated
    void close();

    T get(int r1);

    int getCount();

    android.os.Bundle getMetadata();

    @java.lang.Deprecated
    boolean isClosed();

    java.util.Iterator<T> iterator();

    @Override
    void release();

    java.util.Iterator<T> singleRefIterator();
}
