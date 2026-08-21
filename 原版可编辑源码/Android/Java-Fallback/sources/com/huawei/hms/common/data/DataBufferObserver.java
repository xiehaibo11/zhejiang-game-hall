package com.huawei.hms.common.data;

public interface DataBufferObserver {
    void onDataChanged();

    void onDataRangeChanged(int r1, int r2);

    void onDataRangeInserted(int r1, int r2);

    void onDataRangeMoved(int r1, int r2, int r3);

    void onDataRangeRemoved(int r1, int r2);
}
