package com.ss.android.socialbase.downloader.impls;

import com.ss.android.socialbase.downloader.downloader.IChunkAdjustCalculator;
import com.ss.android.socialbase.downloader.network.NetworkQuality;

public class DefaultChunkAdjustCalculator implements IChunkAdjustCalculator {
    @Override
    public int calculateChunkCount(int i, NetworkQuality networkQuality) {
        if (networkQuality.ordinal() <= NetworkQuality.MODERATE.ordinal()) {
            return 1;
        }
        return networkQuality == NetworkQuality.GOOD ? i - 1 : i;
    }
}
