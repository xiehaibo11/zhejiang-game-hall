package com.ss.android.socialbase.downloader.downloader;

public interface IRetryDelayTimeCalculator {
    long calculateRetryDelayTime(int r1, int r2);
}
