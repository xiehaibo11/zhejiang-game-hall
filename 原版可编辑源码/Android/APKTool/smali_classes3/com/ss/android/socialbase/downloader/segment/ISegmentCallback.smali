.class interface abstract Lcom/ss/android/socialbase/downloader/segment/ISegmentCallback;
.super Ljava/lang/Object;


# virtual methods
.method public abstract applySegment(Lcom/ss/android/socialbase/downloader/segment/SegmentReader;Lcom/ss/android/socialbase/downloader/segment/Segment;)V
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/ss/android/socialbase/downloader/exception/BaseException;
        }
    .end annotation
.end method

.method public abstract createOutput(Lcom/ss/android/socialbase/downloader/segment/SegmentReader;Lcom/ss/android/socialbase/downloader/segment/Segment;)Lcom/ss/android/socialbase/downloader/segment/IOutput;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/ss/android/socialbase/downloader/exception/BaseException;
        }
    .end annotation
.end method

.method public abstract obtainSegment(Lcom/ss/android/socialbase/downloader/segment/SegmentReader;Lcom/ss/android/socialbase/downloader/segment/UrlRecord;)Lcom/ss/android/socialbase/downloader/segment/Segment;
.end method

.method public abstract onReaderExit(Lcom/ss/android/socialbase/downloader/segment/SegmentReader;)V
.end method

.method public abstract onReaderRun(Lcom/ss/android/socialbase/downloader/segment/SegmentReader;)V
.end method

.method public abstract onSegmentConnected(Lcom/ss/android/socialbase/downloader/segment/SegmentReader;Lcom/ss/android/socialbase/downloader/segment/Segment;Lcom/ss/android/socialbase/downloader/segment/UrlRecord;Lcom/ss/android/socialbase/downloader/model/HttpResponse;)V
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/ss/android/socialbase/downloader/exception/BaseException;,
            Lcom/ss/android/socialbase/downloader/exception/RetryThrowable;
        }
    .end annotation
.end method

.method public abstract onSegmentFailed(Lcom/ss/android/socialbase/downloader/segment/SegmentReader;Lcom/ss/android/socialbase/downloader/segment/UrlRecord;Lcom/ss/android/socialbase/downloader/segment/Segment;Lcom/ss/android/socialbase/downloader/exception/BaseException;)V
.end method

.method public abstract onSegmentRetry(Lcom/ss/android/socialbase/downloader/segment/SegmentReader;Lcom/ss/android/socialbase/downloader/segment/UrlRecord;Lcom/ss/android/socialbase/downloader/segment/Segment;Lcom/ss/android/socialbase/downloader/exception/BaseException;II)V
.end method

.method public abstract unApplySegment(Lcom/ss/android/socialbase/downloader/segment/SegmentReader;Lcom/ss/android/socialbase/downloader/segment/Segment;)V
.end method

.method public abstract unObtainSegment(Lcom/ss/android/socialbase/downloader/segment/SegmentReader;Lcom/ss/android/socialbase/downloader/segment/Segment;)V
.end method
