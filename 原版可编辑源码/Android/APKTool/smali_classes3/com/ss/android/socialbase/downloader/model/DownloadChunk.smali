.class public Lcom/ss/android/socialbase/downloader/model/DownloadChunk;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/os/Parcelable;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;
    }
.end annotation


# static fields
.field public static final CREATOR:Landroid/os/Parcelable$Creator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/os/Parcelable$Creator<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadChunk;",
            ">;"
        }
    .end annotation
.end field

.field private static final TAG:Ljava/lang/String;


# instance fields
.field private bindValueCount:I

.field private chunkIndex:I

.field private chunkRunnable:Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;

.field private contentLength:J

.field private currentOffset:Ljava/util/concurrent/atomic/AtomicLong;

.field private endOffset:J

.field private hostChunk:Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

.field private hostChunkIndex:Ljava/util/concurrent/atomic/AtomicInteger;

.field private id:I

.field private isDownloading:Ljava/util/concurrent/atomic/AtomicBoolean;

.field private oldOffset:J

.field private reuseingFirstConnection:Z

.field private startOffset:J

.field private subChunkList:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadChunk;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 25
    const-class v0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->TAG:Ljava/lang/String;

    .line 117
    new-instance v0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk$1;

    invoke-direct {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk$1;-><init>()V

    sput-object v0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->CREATOR:Landroid/os/Parcelable$Creator;

    return-void
.end method

.method public constructor <init>(Landroid/database/Cursor;)V
    .locals 5

    .line 59
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v0, "_id"

    .line 62
    invoke-interface {p1, v0}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v0

    invoke-interface {p1, v0}, Landroid/database/Cursor;->getInt(I)I

    move-result v0

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->id:I

    const-string v0, "chunkIndex"

    .line 63
    invoke-interface {p1, v0}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v0

    invoke-interface {p1, v0}, Landroid/database/Cursor;->getInt(I)I

    move-result v0

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->chunkIndex:I

    const-string v0, "startOffset"

    .line 64
    invoke-interface {p1, v0}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v0

    invoke-interface {p1, v0}, Landroid/database/Cursor;->getLong(I)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->startOffset:J

    const-string v0, "curOffset"

    .line 66
    invoke-interface {p1, v0}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v0

    const/4 v1, -0x1

    if-eq v0, v1, :cond_1

    .line 68
    new-instance v2, Ljava/util/concurrent/atomic/AtomicLong;

    invoke-interface {p1, v0}, Landroid/database/Cursor;->getLong(I)J

    move-result-wide v3

    invoke-direct {v2, v3, v4}, Ljava/util/concurrent/atomic/AtomicLong;-><init>(J)V

    iput-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->currentOffset:Ljava/util/concurrent/atomic/AtomicLong;

    goto :goto_0

    .line 70
    :cond_1
    new-instance v0, Ljava/util/concurrent/atomic/AtomicLong;

    const-wide/16 v2, 0x0

    invoke-direct {v0, v2, v3}, Ljava/util/concurrent/atomic/AtomicLong;-><init>(J)V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->currentOffset:Ljava/util/concurrent/atomic/AtomicLong;

    :goto_0
    const-string v0, "endOffset"

    .line 71
    invoke-interface {p1, v0}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v0

    invoke-interface {p1, v0}, Landroid/database/Cursor;->getLong(I)J

    move-result-wide v2

    iput-wide v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->endOffset:J

    const-string v0, "hostChunkIndex"

    .line 73
    invoke-interface {p1, v0}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v0

    if-eq v0, v1, :cond_2

    .line 75
    new-instance v2, Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-interface {p1, v0}, Landroid/database/Cursor;->getInt(I)I

    move-result v0

    invoke-direct {v2, v0}, Ljava/util/concurrent/atomic/AtomicInteger;-><init>(I)V

    iput-object v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->hostChunkIndex:Ljava/util/concurrent/atomic/AtomicInteger;

    goto :goto_1

    .line 77
    :cond_2
    new-instance v0, Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-direct {v0, v1}, Ljava/util/concurrent/atomic/AtomicInteger;-><init>(I)V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->hostChunkIndex:Ljava/util/concurrent/atomic/AtomicInteger;

    :goto_1
    const-string v0, "chunkContentLen"

    .line 79
    invoke-interface {p1, v0}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v0

    if-eq v0, v1, :cond_3

    .line 81
    invoke-interface {p1, v0}, Landroid/database/Cursor;->getLong(I)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->contentLength:J

    .line 82
    :cond_3
    new-instance p1, Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v0, 0x0

    invoke-direct {p1, v0}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->isDownloading:Ljava/util/concurrent/atomic/AtomicBoolean;

    return-void
.end method

.method protected constructor <init>(Landroid/os/Parcel;)V
    .locals 3

    .line 85
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 86
    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result v0

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->id:I

    .line 87
    invoke-virtual {p1}, Landroid/os/Parcel;->readLong()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->startOffset:J

    .line 88
    new-instance v0, Ljava/util/concurrent/atomic/AtomicLong;

    invoke-virtual {p1}, Landroid/os/Parcel;->readLong()J

    move-result-wide v1

    invoke-direct {v0, v1, v2}, Ljava/util/concurrent/atomic/AtomicLong;-><init>(J)V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->currentOffset:Ljava/util/concurrent/atomic/AtomicLong;

    .line 89
    invoke-virtual {p1}, Landroid/os/Parcel;->readLong()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->endOffset:J

    .line 90
    invoke-virtual {p1}, Landroid/os/Parcel;->readLong()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->contentLength:J

    .line 91
    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result v0

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->chunkIndex:I

    .line 92
    new-instance v0, Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result p1

    invoke-direct {v0, p1}, Ljava/util/concurrent/atomic/AtomicInteger;-><init>(I)V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->hostChunkIndex:Ljava/util/concurrent/atomic/AtomicInteger;

    return-void
.end method

.method private constructor <init>(Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;)V
    .locals 3

    .line 44
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    if-nez p1, :cond_0

    return-void

    .line 47
    :cond_0
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;->access$000(Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;)I

    move-result v0

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->id:I

    .line 48
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;->access$100(Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->startOffset:J

    .line 49
    new-instance v0, Ljava/util/concurrent/atomic/AtomicLong;

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;->access$200(Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;)J

    move-result-wide v1

    invoke-direct {v0, v1, v2}, Ljava/util/concurrent/atomic/AtomicLong;-><init>(J)V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->currentOffset:Ljava/util/concurrent/atomic/AtomicLong;

    .line 50
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;->access$300(Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->endOffset:J

    .line 51
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;->access$400(Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->contentLength:J

    .line 52
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;->access$500(Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;)I

    move-result v0

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->chunkIndex:I

    .line 53
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;->access$600(Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->oldOffset:J

    .line 54
    new-instance v0, Ljava/util/concurrent/atomic/AtomicInteger;

    const/4 v1, -0x1

    invoke-direct {v0, v1}, Ljava/util/concurrent/atomic/AtomicInteger;-><init>(I)V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->hostChunkIndex:Ljava/util/concurrent/atomic/AtomicInteger;

    .line 55
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;->access$700(Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;)Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->setHostChunk(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;)V

    .line 56
    new-instance p1, Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v0, 0x0

    invoke-direct {p1, v0}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->isDownloading:Ljava/util/concurrent/atomic/AtomicBoolean;

    return-void
.end method

.method synthetic constructor <init>(Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;Lcom/ss/android/socialbase/downloader/model/DownloadChunk$1;)V
    .locals 0

    .line 23
    invoke-direct {p0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;-><init>(Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;)V

    return-void
.end method


# virtual methods
.method public bindValue(Landroid/database/sqlite/SQLiteStatement;)V
    .locals 3

    if-nez p1, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x0

    .line 144
    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->bindValueCount:I

    .line 145
    invoke-virtual {p1}, Landroid/database/sqlite/SQLiteStatement;->clearBindings()V

    .line 146
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->bindValueCount:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->bindValueCount:I

    iget v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->id:I

    int-to-long v1, v1

    invoke-virtual {p1, v0, v1, v2}, Landroid/database/sqlite/SQLiteStatement;->bindLong(IJ)V

    .line 147
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->bindValueCount:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->bindValueCount:I

    iget v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->chunkIndex:I

    int-to-long v1, v1

    invoke-virtual {p1, v0, v1, v2}, Landroid/database/sqlite/SQLiteStatement;->bindLong(IJ)V

    .line 148
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->bindValueCount:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->bindValueCount:I

    iget-wide v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->startOffset:J

    invoke-virtual {p1, v0, v1, v2}, Landroid/database/sqlite/SQLiteStatement;->bindLong(IJ)V

    .line 149
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->bindValueCount:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->bindValueCount:I

    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getCurrentOffset()J

    move-result-wide v1

    invoke-virtual {p1, v0, v1, v2}, Landroid/database/sqlite/SQLiteStatement;->bindLong(IJ)V

    .line 150
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->bindValueCount:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->bindValueCount:I

    iget-wide v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->endOffset:J

    invoke-virtual {p1, v0, v1, v2}, Landroid/database/sqlite/SQLiteStatement;->bindLong(IJ)V

    .line 151
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->bindValueCount:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->bindValueCount:I

    iget-wide v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->contentLength:J

    invoke-virtual {p1, v0, v1, v2}, Landroid/database/sqlite/SQLiteStatement;->bindLong(IJ)V

    .line 152
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->bindValueCount:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->bindValueCount:I

    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getHostChunkIndex()I

    move-result v1

    int-to-long v1, v1

    invoke-virtual {p1, v0, v1, v2}, Landroid/database/sqlite/SQLiteStatement;->bindLong(IJ)V

    return-void
.end method

.method public canRefreshCurOffsetForReuseChunk()Z
    .locals 5

    .line 232
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->hostChunk:Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    const/4 v1, 0x1

    if-nez v0, :cond_0

    return v1

    .line 234
    :cond_0
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->hasChunkDivided()Z

    move-result v0

    const/4 v2, 0x0

    if-nez v0, :cond_1

    return v2

    :cond_1
    move v0, v2

    .line 236
    :goto_0
    iget-object v3, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->hostChunk:Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    invoke-virtual {v3}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getSubChunkList()Ljava/util/List;

    move-result-object v3

    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v3

    if-ge v0, v3, :cond_4

    .line 237
    iget-object v3, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->hostChunk:Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    invoke-virtual {v3}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getSubChunkList()Ljava/util/List;

    move-result-object v3

    invoke-interface {v3, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    if-eqz v3, :cond_3

    .line 239
    iget-object v4, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->hostChunk:Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    invoke-virtual {v4}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getSubChunkList()Ljava/util/List;

    move-result-object v4

    invoke-interface {v4, p0}, Ljava/util/List;->indexOf(Ljava/lang/Object;)I

    move-result v4

    if-le v4, v0, :cond_2

    .line 240
    invoke-virtual {v3}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->hasNoBytesDownload()Z

    move-result v3

    if-nez v3, :cond_2

    return v2

    :cond_2
    if-ne v4, v0, :cond_3

    return v1

    :cond_3
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_4
    return v2
.end method

.method public describeContents()I
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public divideChunkForReuse(IJ)Ljava/util/List;
    .locals 22
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(IJ)",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadChunk;",
            ">;"
        }
    .end annotation

    move-object/from16 v0, p0

    move/from16 v1, p1

    .line 378
    invoke-virtual/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->isHostChunk()Z

    move-result v2

    if-eqz v2, :cond_a

    invoke-virtual/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->hasChunkDivided()Z

    move-result v2

    if-eqz v2, :cond_0

    goto/16 :goto_7

    .line 380
    :cond_0
    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    .line 381
    invoke-virtual/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getCurOffset()J

    move-result-wide v3

    const/4 v5, 0x1

    .line 382
    invoke-virtual {v0, v5}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getRetainLength(Z)J

    move-result-wide v6

    int-to-long v8, v1

    .line 383
    div-long v8, v6, v8

    .line 385
    sget-object v10, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->TAG:Ljava/lang/String;

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    const-string v12, "retainLen:"

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v6, v7}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v12, " divideChunkForReuse chunkSize:"

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v8, v9}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v12, " current host downloadChunk index:"

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v12, v0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->chunkIndex:I

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-static {v10, v11}, Lcom/ss/android/socialbase/downloader/logger/Logger;->d(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v11, 0x0

    :goto_0
    const-wide/16 v12, 0x1

    if-ge v11, v1, :cond_4

    if-nez v11, :cond_1

    .line 394
    invoke-virtual/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getStartOffset()J

    move-result-wide v14

    add-long v16, v3, v8

    sub-long v16, v16, v12

    :goto_1
    move-wide v12, v8

    move-wide/from16 v18, v16

    goto :goto_3

    :cond_1
    add-int/lit8 v14, v1, -0x1

    if-ne v11, v14, :cond_3

    .line 397
    invoke-virtual/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getEndOffset()J

    move-result-wide v16

    cmp-long v15, v16, v3

    if-lez v15, :cond_2

    sub-long v14, v16, v3

    add-long/2addr v14, v12

    goto :goto_2

    :cond_2
    int-to-long v12, v14

    mul-long/2addr v12, v8

    sub-long v14, v6, v12

    :goto_2
    move-wide v12, v14

    move-wide/from16 v18, v16

    move-wide v14, v3

    goto :goto_3

    :cond_3
    add-long v14, v3, v8

    sub-long v16, v14, v12

    move-wide v14, v3

    goto :goto_1

    .line 406
    :goto_3
    new-instance v10, Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;

    iget v5, v0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->id:I

    invoke-direct {v10, v5}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;-><init>(I)V

    neg-int v5, v11

    const/16 v17, 0x1

    add-int/lit8 v5, v5, -0x1

    .line 407
    invoke-virtual {v10, v5}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;->chunkIndex(I)Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;

    move-result-object v5

    .line 408
    invoke-virtual {v5, v14, v15}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;->startOffset(J)Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;

    move-result-object v5

    .line 409
    invoke-virtual {v5, v3, v4}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;->currentOffset(J)Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;

    move-result-object v5

    .line 410
    invoke-virtual {v5, v3, v4}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;->oldOffset(J)Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;

    move-result-object v5

    move-wide/from16 v20, v6

    move-wide/from16 v6, v18

    .line 411
    invoke-virtual {v5, v6, v7}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;->endOffset(J)Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;

    move-result-object v5

    .line 412
    invoke-virtual {v5, v12, v13}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;->contentLength(J)Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;

    move-result-object v5

    .line 413
    invoke-virtual {v5, v0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;->hostChunk(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;)Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;

    move-result-object v5

    .line 414
    invoke-virtual {v5}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk$Builder;->build()Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    move-result-object v5

    .line 416
    sget-object v10, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->TAG:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "divide sub chunk : "

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, " startOffset:"

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v14, v15}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v0, " curOffset:"

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v0, " endOffset:"

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v6, v7}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v0, " contentLen:"

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v12, v13}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v10, v0}, Lcom/ss/android/socialbase/downloader/logger/Logger;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 418
    invoke-interface {v2, v5}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-long/2addr v3, v8

    add-int/lit8 v11, v11, 0x1

    const/4 v5, 0x1

    move-object/from16 v0, p0

    move/from16 v1, p1

    move-wide/from16 v6, v20

    goto/16 :goto_0

    .line 424
    :cond_4
    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v0

    const/4 v1, 0x1

    sub-int/2addr v0, v1

    const-wide/16 v3, 0x0

    move-wide v5, v3

    :goto_4
    if-lez v0, :cond_6

    .line 425
    invoke-interface {v2, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    if-eqz v1, :cond_5

    .line 427
    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getContentLength()J

    move-result-wide v7

    add-long/2addr v5, v7

    :cond_5
    add-int/lit8 v0, v0, -0x1

    goto :goto_4

    .line 430
    :cond_6
    sget-object v0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->TAG:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "reuseChunkContentLen:"

    invoke-virtual {v1, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v5, v6}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->d(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v0, 0x0

    .line 433
    invoke-interface {v2, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    if-eqz v0, :cond_8

    .line 436
    invoke-virtual/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getEndOffset()J

    move-result-wide v7

    cmp-long v1, v7, v3

    if-nez v1, :cond_7

    .line 437
    invoke-virtual/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getStartOffset()J

    move-result-wide v3

    sub-long v3, p2, v3

    goto :goto_5

    .line 439
    :cond_7
    invoke-virtual/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getEndOffset()J

    move-result-wide v3

    invoke-virtual/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getStartOffset()J

    move-result-wide v7

    sub-long/2addr v3, v7

    add-long/2addr v3, v12

    :goto_5
    sub-long/2addr v3, v5

    .line 443
    invoke-virtual {v0, v3, v4}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->setContentLength(J)V

    move-object/from16 v1, p0

    .line 444
    iget v3, v1, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->chunkIndex:I

    invoke-virtual {v0, v3}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->setChunkIndex(I)V

    .line 446
    iget-object v3, v1, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->chunkRunnable:Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;

    if-eqz v3, :cond_9

    .line 447
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getEndOffset()J

    move-result-wide v7

    invoke-virtual/range {p0 .. p0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getContentLength()J

    move-result-wide v9

    sub-long/2addr v9, v5

    invoke-virtual {v3, v7, v8, v9, v10}, Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;->refreshResponseHandleOffset(JJ)V

    goto :goto_6

    :cond_8
    move-object/from16 v1, p0

    .line 451
    :cond_9
    :goto_6
    invoke-virtual {v1, v2}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->setSubChunkList(Ljava/util/List;)V

    return-object v2

    :cond_a
    :goto_7
    move-object v1, v0

    const/4 v0, 0x0

    return-object v0
.end method

.method public getBindValueCount()I
    .locals 1

    .line 284
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->bindValueCount:I

    return v0
.end method

.method public getChunkIndex()I
    .locals 1

    .line 456
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->chunkIndex:I

    return v0
.end method

.method public getContentLength()J
    .locals 2

    .line 358
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->contentLength:J

    return-wide v0
.end method

.method public getCurOffset()J
    .locals 2

    .line 308
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->currentOffset:Ljava/util/concurrent/atomic/AtomicLong;

    if-eqz v0, :cond_0

    .line 309
    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicLong;->get()J

    move-result-wide v0

    return-wide v0

    :cond_0
    const-wide/16 v0, 0x0

    return-wide v0
.end method

.method public getCurrentOffset()J
    .locals 6

    .line 315
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->isHostChunk()Z

    move-result v0

    if-eqz v0, :cond_3

    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->hasChunkDivided()Z

    move-result v0

    if-eqz v0, :cond_3

    const-wide/16 v0, 0x0

    const/4 v2, 0x0

    .line 317
    :goto_0
    iget-object v3, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->subChunkList:Ljava/util/List;

    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v3

    if-ge v2, v3, :cond_2

    .line 318
    iget-object v3, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->subChunkList:Ljava/util/List;

    invoke-interface {v3, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    if-eqz v3, :cond_1

    .line 320
    invoke-virtual {v3}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->hasNoBytesDownload()Z

    move-result v4

    if-nez v4, :cond_0

    .line 321
    invoke-virtual {v3}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getCurOffset()J

    move-result-wide v0

    return-wide v0

    .line 322
    :cond_0
    invoke-virtual {v3}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getCurOffset()J

    move-result-wide v4

    cmp-long v4, v0, v4

    if-gez v4, :cond_1

    .line 323
    invoke-virtual {v3}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getCurOffset()J

    move-result-wide v0

    :cond_1
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_2
    return-wide v0

    .line 328
    :cond_3
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getCurOffset()J

    move-result-wide v0

    return-wide v0
.end method

.method public getDownloadChunkBytes()J
    .locals 8

    .line 341
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getCurrentOffset()J

    move-result-wide v0

    iget-wide v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->startOffset:J

    sub-long/2addr v0, v2

    .line 342
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->hasChunkDivided()Z

    move-result v2

    if-eqz v2, :cond_1

    const-wide/16 v0, 0x0

    const/4 v2, 0x0

    .line 344
    :goto_0
    iget-object v3, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->subChunkList:Ljava/util/List;

    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v3

    if-ge v2, v3, :cond_1

    .line 345
    iget-object v3, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->subChunkList:Ljava/util/List;

    invoke-interface {v3, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    if-eqz v3, :cond_0

    .line 347
    invoke-virtual {v3}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getCurrentOffset()J

    move-result-wide v4

    invoke-virtual {v3}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getStartOffset()J

    move-result-wide v6

    sub-long/2addr v4, v6

    add-long/2addr v0, v4

    :cond_0
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_1
    return-wide v0
.end method

.method public getEndOffset()J
    .locals 2

    .line 354
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->endOffset:J

    return-wide v0
.end method

.method public getFirstReuseChunk()Lcom/ss/android/socialbase/downloader/model/DownloadChunk;
    .locals 2

    .line 204
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->isHostChunk()Z

    move-result v0

    if-nez v0, :cond_0

    .line 205
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->hostChunk:Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    goto :goto_0

    :cond_0
    move-object v0, p0

    :goto_0
    if-eqz v0, :cond_2

    .line 206
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->hasChunkDivided()Z

    move-result v1

    if-nez v1, :cond_1

    goto :goto_1

    .line 208
    :cond_1
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getSubChunkList()Ljava/util/List;

    move-result-object v0

    const/4 v1, 0x0

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    return-object v0

    :cond_2
    :goto_1
    const/4 v0, 0x0

    return-object v0
.end method

.method public getHostChunk()Lcom/ss/android/socialbase/downloader/model/DownloadChunk;
    .locals 1

    .line 194
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->hostChunk:Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    return-object v0
.end method

.method public getHostChunkIndex()I
    .locals 1

    .line 156
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->hostChunkIndex:Ljava/util/concurrent/atomic/AtomicInteger;

    if-nez v0, :cond_0

    const/4 v0, -0x1

    return v0

    .line 158
    :cond_0
    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    return v0
.end method

.method public getId()I
    .locals 1

    .line 300
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->id:I

    return v0
.end method

.method public getNextChunkCurOffset()J
    .locals 6

    .line 263
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->hostChunk:Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    const-wide/16 v1, -0x1

    if-eqz v0, :cond_3

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getSubChunkList()Ljava/util/List;

    move-result-object v0

    if-nez v0, :cond_0

    goto :goto_1

    .line 266
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->hostChunk:Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getSubChunkList()Ljava/util/List;

    move-result-object v0

    invoke-interface {v0, p0}, Ljava/util/List;->indexOf(Ljava/lang/Object;)I

    move-result v0

    const/4 v3, 0x0

    move v4, v3

    .line 267
    :goto_0
    iget-object v5, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->hostChunk:Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    invoke-virtual {v5}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getSubChunkList()Ljava/util/List;

    move-result-object v5

    invoke-interface {v5}, Ljava/util/List;->size()I

    move-result v5

    if-ge v3, v5, :cond_3

    .line 268
    iget-object v5, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->hostChunk:Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    invoke-virtual {v5}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getSubChunkList()Ljava/util/List;

    move-result-object v5

    invoke-interface {v5, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    if-eqz v5, :cond_2

    if-eqz v4, :cond_1

    .line 271
    invoke-virtual {v5}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getCurrentOffset()J

    move-result-wide v0

    return-wide v0

    :cond_1
    if-ne v0, v3, :cond_2

    const/4 v4, 0x1

    :cond_2
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_3
    :goto_1
    return-wide v1
.end method

.method public getOldOffset()J
    .locals 2

    .line 220
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->oldOffset:J

    return-wide v0
.end method

.method public getRetainLength(Z)J
    .locals 8

    .line 366
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getCurrentOffset()J

    move-result-wide v0

    .line 367
    iget-wide v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->contentLength:J

    iget-wide v4, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->oldOffset:J

    sub-long v6, v0, v4

    sub-long v6, v2, v6

    if-nez p1, :cond_0

    cmp-long p1, v0, v4

    if-nez p1, :cond_0

    .line 369
    iget-wide v4, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->startOffset:J

    sub-long/2addr v0, v4

    sub-long v6, v2, v0

    .line 371
    :cond_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "contentLength:"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->contentLength:J

    invoke-virtual {p1, v0, v1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v0, " curOffset:"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getCurrentOffset()J

    move-result-wide v0

    invoke-virtual {p1, v0, v1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v0, " oldOffset:"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->oldOffset:J

    invoke-virtual {p1, v0, v1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v0, " retainLen:"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v6, v7}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "DownloadChunk"

    invoke-static {v0, p1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->d(Ljava/lang/String;Ljava/lang/String;)V

    const-wide/16 v0, 0x0

    cmp-long p1, v6, v0

    if-gez p1, :cond_1

    move-wide v6, v0

    :cond_1
    return-wide v6
.end method

.method public getStartOffset()J
    .locals 2

    .line 304
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->startOffset:J

    return-wide v0
.end method

.method public getSubChunkList()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadChunk;",
            ">;"
        }
    .end annotation

    .line 228
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->subChunkList:Ljava/util/List;

    return-object v0
.end method

.method public hasChunkDivided()Z
    .locals 1

    .line 212
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->subChunkList:Ljava/util/List;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public hasNoBytesDownload()Z
    .locals 6

    .line 256
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->startOffset:J

    .line 257
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->isHostChunk()Z

    move-result v2

    if-eqz v2, :cond_0

    iget-wide v2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->oldOffset:J

    iget-wide v4, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->startOffset:J

    cmp-long v4, v2, v4

    if-lez v4, :cond_0

    move-wide v0, v2

    .line 259
    :cond_0
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getCurrentOffset()J

    move-result-wide v2

    sub-long/2addr v2, v0

    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->contentLength:J

    cmp-long v0, v2, v0

    if-ltz v0, :cond_1

    const/4 v0, 0x1

    goto :goto_0

    :cond_1
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public isDownloading()Z
    .locals 1

    .line 169
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->isDownloading:Ljava/util/concurrent/atomic/AtomicBoolean;

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return v0

    .line 171
    :cond_0
    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    return v0
.end method

.method public isHostChunk()Z
    .locals 2

    .line 198
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getHostChunkIndex()I

    move-result v0

    const/4 v1, -0x1

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public isReuseingFirstConnection()Z
    .locals 1

    .line 280
    iget v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->chunkIndex:I

    if-nez v0, :cond_0

    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->reuseingFirstConnection:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public setChunkIndex(I)V
    .locals 0

    .line 292
    iput p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->chunkIndex:I

    return-void
.end method

.method public setChunkRunnable(Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;)V
    .locals 0

    .line 175
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->chunkRunnable:Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;

    .line 176
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->setOldOffset()V

    return-void
.end method

.method public setContentLength(J)V
    .locals 0

    .line 296
    iput-wide p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->contentLength:J

    return-void
.end method

.method public setCurrentOffset(J)V
    .locals 1

    .line 333
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->currentOffset:Ljava/util/concurrent/atomic/AtomicLong;

    if-eqz v0, :cond_0

    .line 334
    invoke-virtual {v0, p1, p2}, Ljava/util/concurrent/atomic/AtomicLong;->set(J)V

    goto :goto_0

    .line 336
    :cond_0
    new-instance v0, Ljava/util/concurrent/atomic/AtomicLong;

    invoke-direct {v0, p1, p2}, Ljava/util/concurrent/atomic/AtomicLong;-><init>(J)V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->currentOffset:Ljava/util/concurrent/atomic/AtomicLong;

    :goto_0
    return-void
.end method

.method public setDownloading(Z)V
    .locals 1

    .line 180
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->isDownloading:Ljava/util/concurrent/atomic/AtomicBoolean;

    if-nez v0, :cond_0

    .line 181
    new-instance v0, Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-direct {v0, p1}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->isDownloading:Ljava/util/concurrent/atomic/AtomicBoolean;

    goto :goto_0

    .line 183
    :cond_0
    invoke-virtual {v0, p1}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    :goto_0
    const/4 p1, 0x0

    .line 184
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->chunkRunnable:Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;

    return-void
.end method

.method public setHostChunk(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;)V
    .locals 0

    .line 188
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->hostChunk:Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    if-eqz p1, :cond_0

    .line 190
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getChunkIndex()I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->setHostChunkIndex(I)V

    :cond_0
    return-void
.end method

.method public setHostChunkIndex(I)V
    .locals 1

    .line 162
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->hostChunkIndex:Ljava/util/concurrent/atomic/AtomicInteger;

    if-nez v0, :cond_0

    .line 163
    new-instance v0, Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-direct {v0, p1}, Ljava/util/concurrent/atomic/AtomicInteger;-><init>(I)V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->hostChunkIndex:Ljava/util/concurrent/atomic/AtomicInteger;

    goto :goto_0

    .line 165
    :cond_0
    invoke-virtual {v0, p1}, Ljava/util/concurrent/atomic/AtomicInteger;->set(I)V

    :goto_0
    return-void
.end method

.method public setId(I)V
    .locals 0

    .line 288
    iput p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->id:I

    return-void
.end method

.method public setOldOffset()V
    .locals 2

    .line 362
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getCurrentOffset()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->oldOffset:J

    return-void
.end method

.method public setOldOffset(J)V
    .locals 0

    .line 224
    iput-wide p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->oldOffset:J

    return-void
.end method

.method public setReuseingFirstConnection(Z)V
    .locals 0

    .line 251
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->reuseingFirstConnection:Z

    return-void
.end method

.method public setSubChunkList(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadChunk;",
            ">;)V"
        }
    .end annotation

    .line 216
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->subChunkList:Ljava/util/List;

    return-void
.end method

.method public toContentValues()Landroid/content/ContentValues;
    .locals 3

    .line 130
    new-instance v0, Landroid/content/ContentValues;

    invoke-direct {v0}, Landroid/content/ContentValues;-><init>()V

    .line 131
    iget v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->id:I

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "_id"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    .line 132
    iget v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->chunkIndex:I

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "chunkIndex"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    .line 133
    iget-wide v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->startOffset:J

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    const-string v2, "startOffset"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Long;)V

    .line 134
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getCurrentOffset()J

    move-result-wide v1

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    const-string v2, "curOffset"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Long;)V

    .line 135
    iget-wide v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->endOffset:J

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    const-string v2, "endOffset"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Long;)V

    .line 136
    iget-wide v1, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->contentLength:J

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    const-string v2, "chunkContentLen"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Long;)V

    .line 137
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->getHostChunkIndex()I

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "hostChunkIndex"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    return-object v0
.end method

.method public writeToParcel(Landroid/os/Parcel;I)V
    .locals 2

    .line 97
    iget p2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->id:I

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeInt(I)V

    .line 98
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->startOffset:J

    invoke-virtual {p1, v0, v1}, Landroid/os/Parcel;->writeLong(J)V

    .line 100
    iget-object p2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->currentOffset:Ljava/util/concurrent/atomic/AtomicLong;

    if-eqz p2, :cond_0

    .line 101
    invoke-virtual {p2}, Ljava/util/concurrent/atomic/AtomicLong;->get()J

    move-result-wide v0

    goto :goto_0

    :cond_0
    const-wide/16 v0, 0x0

    .line 102
    :goto_0
    invoke-virtual {p1, v0, v1}, Landroid/os/Parcel;->writeLong(J)V

    .line 103
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->endOffset:J

    invoke-virtual {p1, v0, v1}, Landroid/os/Parcel;->writeLong(J)V

    .line 104
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->contentLength:J

    invoke-virtual {p1, v0, v1}, Landroid/os/Parcel;->writeLong(J)V

    .line 105
    iget p2, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->chunkIndex:I

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeInt(I)V

    const/4 p2, -0x1

    .line 107
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/model/DownloadChunk;->hostChunkIndex:Ljava/util/concurrent/atomic/AtomicInteger;

    if-eqz v0, :cond_1

    .line 108
    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result p2

    .line 109
    :cond_1
    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeInt(I)V

    return-void
.end method
