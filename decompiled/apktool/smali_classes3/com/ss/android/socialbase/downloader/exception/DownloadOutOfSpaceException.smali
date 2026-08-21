.class public Lcom/ss/android/socialbase/downloader/exception/DownloadOutOfSpaceException;
.super Lcom/ss/android/socialbase/downloader/exception/BaseException;


# instance fields
.field private final avaliableSpaceBytes:J

.field private final requiredSpaceBytes:J


# direct methods
.method public constructor <init>(JJ)V
    .locals 3

    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/Object;

    .line 11
    invoke-static {p3, p4}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    aput-object v1, v0, v2

    invoke-static {p1, p2}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x1

    aput-object v1, v0, v2

    const-string v1, "space is not enough required space is : %s but available space is :%s"

    invoke-static {v1, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    const/16 v1, 0x3ee

    invoke-direct {p0, v1, v0}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/String;)V

    .line 13
    iput-wide p1, p0, Lcom/ss/android/socialbase/downloader/exception/DownloadOutOfSpaceException;->avaliableSpaceBytes:J

    .line 14
    iput-wide p3, p0, Lcom/ss/android/socialbase/downloader/exception/DownloadOutOfSpaceException;->requiredSpaceBytes:J

    return-void
.end method


# virtual methods
.method public getAvaliableSpaceBytes()J
    .locals 2

    .line 19
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/exception/DownloadOutOfSpaceException;->avaliableSpaceBytes:J

    return-wide v0
.end method

.method public getRequiredSpaceBytes()J
    .locals 2

    .line 23
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/exception/DownloadOutOfSpaceException;->requiredSpaceBytes:J

    return-wide v0
.end method
