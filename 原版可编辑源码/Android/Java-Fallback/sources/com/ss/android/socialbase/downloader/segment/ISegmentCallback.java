package com.ss.android.socialbase.downloader.segment;

interface ISegmentCallback {
    void applySegment(com.ss.android.socialbase.downloader.segment.SegmentReader r1, com.ss.android.socialbase.downloader.segment.Segment r2) throws com.ss.android.socialbase.downloader.exception.BaseException;

    com.ss.android.socialbase.downloader.segment.IOutput createOutput(com.ss.android.socialbase.downloader.segment.SegmentReader r1, com.ss.android.socialbase.downloader.segment.Segment r2) throws com.ss.android.socialbase.downloader.exception.BaseException;

    com.ss.android.socialbase.downloader.segment.Segment obtainSegment(com.ss.android.socialbase.downloader.segment.SegmentReader r1, com.ss.android.socialbase.downloader.segment.UrlRecord r2);

    void onReaderExit(com.ss.android.socialbase.downloader.segment.SegmentReader r1);

    void onReaderRun(com.ss.android.socialbase.downloader.segment.SegmentReader r1);

    void onSegmentConnected(com.ss.android.socialbase.downloader.segment.SegmentReader r1, com.ss.android.socialbase.downloader.segment.Segment r2, com.ss.android.socialbase.downloader.segment.UrlRecord r3, com.ss.android.socialbase.downloader.model.HttpResponse r4) throws com.ss.android.socialbase.downloader.exception.BaseException, com.ss.android.socialbase.downloader.exception.RetryThrowable;

    void onSegmentFailed(com.ss.android.socialbase.downloader.segment.SegmentReader r1, com.ss.android.socialbase.downloader.segment.UrlRecord r2, com.ss.android.socialbase.downloader.segment.Segment r3, com.ss.android.socialbase.downloader.exception.BaseException r4);

    void onSegmentRetry(com.ss.android.socialbase.downloader.segment.SegmentReader r1, com.ss.android.socialbase.downloader.segment.UrlRecord r2, com.ss.android.socialbase.downloader.segment.Segment r3, com.ss.android.socialbase.downloader.exception.BaseException r4, int r5, int r6);

    void unApplySegment(com.ss.android.socialbase.downloader.segment.SegmentReader r1, com.ss.android.socialbase.downloader.segment.Segment r2);

    void unObtainSegment(com.ss.android.socialbase.downloader.segment.SegmentReader r1, com.ss.android.socialbase.downloader.segment.Segment r2);
}
