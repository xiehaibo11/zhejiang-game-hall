package com.ss.android.socialbase.downloader.impls;

import com.ss.android.socialbase.downloader.downloader.IChunkCntCalculator;

public class DefaultChunkCntCalculator implements IChunkCntCalculator {
    @Override
    public int calculateChunkCount(long j) {
        return 1;
    }
}
