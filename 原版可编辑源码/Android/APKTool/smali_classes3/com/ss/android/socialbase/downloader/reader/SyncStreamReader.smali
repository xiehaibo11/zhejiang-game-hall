.class public Lcom/ss/android/socialbase/downloader/reader/SyncStreamReader;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/socialbase/downloader/reader/IStreamReader;


# instance fields
.field private final buffer:Lcom/ss/android/socialbase/downloader/segment/Buffer;

.field private final inputStream:Ljava/io/InputStream;


# direct methods
.method public constructor <init>(Ljava/io/InputStream;I)V
    .locals 0

    .line 17
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 18
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/reader/SyncStreamReader;->inputStream:Ljava/io/InputStream;

    .line 19
    new-instance p1, Lcom/ss/android/socialbase/downloader/segment/Buffer;

    invoke-direct {p1, p2}, Lcom/ss/android/socialbase/downloader/segment/Buffer;-><init>(I)V

    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/reader/SyncStreamReader;->buffer:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    return-void
.end method


# virtual methods
.method public close()V
    .locals 3

    const/4 v0, 0x1

    new-array v0, v0, [Ljava/io/Closeable;

    .line 34
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/reader/SyncStreamReader;->inputStream:Ljava/io/InputStream;

    const/4 v2, 0x0

    aput-object v1, v0, v2

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->safeClose([Ljava/io/Closeable;)V

    return-void
.end method

.method public read()Lcom/ss/android/socialbase/downloader/segment/Buffer;
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 24
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/reader/SyncStreamReader;->buffer:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/reader/SyncStreamReader;->inputStream:Ljava/io/InputStream;

    iget-object v2, v0, Lcom/ss/android/socialbase/downloader/segment/Buffer;->data:[B

    invoke-virtual {v1, v2}, Ljava/io/InputStream;->read([B)I

    move-result v1

    iput v1, v0, Lcom/ss/android/socialbase/downloader/segment/Buffer;->size:I

    .line 25
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/reader/SyncStreamReader;->buffer:Lcom/ss/android/socialbase/downloader/segment/Buffer;

    return-object v0
.end method

.method public recycle(Lcom/ss/android/socialbase/downloader/segment/Buffer;)V
    .locals 0

    return-void
.end method
