.class public final Lcom/ss/android/socialbase/downloader/segment/Segment;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/socialbase/downloader/segment/Segment$JsonKey;
    }
.end annotation


# static fields
.field private static final TAG:Ljava/lang/String; = "Segment"


# instance fields
.field competitor:I

.field private final currentOffset:Ljava/util/concurrent/atomic/AtomicLong;

.field private volatile currentOffsetRead:J

.field private endOffset:J

.field private index:I

.field private jsonObject:Lorg/json/JSONObject;

.field volatile owner:Lcom/ss/android/socialbase/downloader/segment/SegmentReader;

.field private final startOffset:J


# direct methods
.method public constructor <init>(J)V
    .locals 2

    const-wide/16 v0, -0x1

    .line 49
    invoke-direct {p0, p1, p2, v0, v1}, Lcom/ss/android/socialbase/downloader/segment/Segment;-><init>(JJ)V

    return-void
.end method

.method public constructor <init>(JJ)V
    .locals 2

    .line 52
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 21
    new-instance v0, Ljava/util/concurrent/atomic/AtomicLong;

    invoke-direct {v0}, Ljava/util/concurrent/atomic/AtomicLong;-><init>()V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->currentOffset:Ljava/util/concurrent/atomic/AtomicLong;

    const/4 v1, 0x0

    .line 44
    iput v1, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->competitor:I

    .line 53
    iput-wide p1, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->startOffset:J

    .line 54
    invoke-virtual {v0, p1, p2}, Ljava/util/concurrent/atomic/AtomicLong;->set(J)V

    .line 55
    iput-wide p1, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->currentOffsetRead:J

    cmp-long p1, p3, p1

    if-ltz p1, :cond_0

    .line 57
    iput-wide p3, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->endOffset:J

    goto :goto_0

    :cond_0
    const-wide/16 p1, -0x1

    .line 59
    iput-wide p1, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->endOffset:J

    :goto_0
    return-void
.end method

.method public constructor <init>(Lcom/ss/android/socialbase/downloader/segment/Segment;)V
    .locals 3

    .line 63
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 21
    new-instance v0, Ljava/util/concurrent/atomic/AtomicLong;

    invoke-direct {v0}, Ljava/util/concurrent/atomic/AtomicLong;-><init>()V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->currentOffset:Ljava/util/concurrent/atomic/AtomicLong;

    const/4 v1, 0x0

    .line 44
    iput v1, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->competitor:I

    .line 64
    iget-wide v1, p1, Lcom/ss/android/socialbase/downloader/segment/Segment;->startOffset:J

    iput-wide v1, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->startOffset:J

    .line 65
    iget-wide v1, p1, Lcom/ss/android/socialbase/downloader/segment/Segment;->endOffset:J

    iput-wide v1, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->endOffset:J

    .line 66
    iget-object v1, p1, Lcom/ss/android/socialbase/downloader/segment/Segment;->currentOffset:Ljava/util/concurrent/atomic/AtomicLong;

    invoke-virtual {v1}, Ljava/util/concurrent/atomic/AtomicLong;->get()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Ljava/util/concurrent/atomic/AtomicLong;->set(J)V

    .line 67
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->currentOffset:Ljava/util/concurrent/atomic/AtomicLong;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicLong;->get()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->currentOffsetRead:J

    .line 68
    iget p1, p1, Lcom/ss/android/socialbase/downloader/segment/Segment;->index:I

    iput p1, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->index:I

    return-void
.end method

.method public constructor <init>(Lorg/json/JSONObject;)V
    .locals 2

    .line 71
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 21
    new-instance v0, Ljava/util/concurrent/atomic/AtomicLong;

    invoke-direct {v0}, Ljava/util/concurrent/atomic/AtomicLong;-><init>()V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->currentOffset:Ljava/util/concurrent/atomic/AtomicLong;

    const/4 v0, 0x0

    .line 44
    iput v0, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->competitor:I

    const-string v0, "st"

    .line 72
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->startOffset:J

    const-string v0, "en"

    .line 73
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    invoke-virtual {p0, v0, v1}, Lcom/ss/android/socialbase/downloader/segment/Segment;->setEndOffset(J)V

    const-string v0, "cu"

    .line 74
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    invoke-virtual {p0, v0, v1}, Lcom/ss/android/socialbase/downloader/segment/Segment;->setCurrentOffset(J)V

    .line 75
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/segment/Segment;->getCurrentOffset()J

    move-result-wide v0

    invoke-virtual {p0, v0, v1}, Lcom/ss/android/socialbase/downloader/segment/Segment;->setCurrentOffsetRead(J)V

    return-void
.end method

.method public static toString(Ljava/util/List;)Ljava/lang/String;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/segment/Segment;",
            ">;)",
            "Ljava/lang/String;"
        }
    .end annotation

    if-eqz p0, :cond_2

    .line 204
    invoke-interface {p0}, Ljava/util/List;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_1

    .line 207
    :cond_0
    new-instance v0, Lcom/ss/android/socialbase/downloader/segment/Segment$1;

    invoke-direct {v0}, Lcom/ss/android/socialbase/downloader/segment/Segment$1;-><init>()V

    invoke-static {p0, v0}, Ljava/util/Collections;->sort(Ljava/util/List;Ljava/util/Comparator;)V

    .line 213
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 214
    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/ss/android/socialbase/downloader/segment/Segment;

    .line 215
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, "\r\n"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_0

    .line 217
    :cond_1
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_2
    :goto_1
    const/4 p0, 0x0

    return-object p0
.end method


# virtual methods
.method decreaseCompetitor()V
    .locals 1

    .line 182
    iget v0, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->competitor:I

    add-int/lit8 v0, v0, -0x1

    iput v0, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->competitor:I

    return-void
.end method

.method getCompetitor()I
    .locals 1

    .line 186
    iget v0, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->competitor:I

    return v0
.end method

.method public getCurrentOffset()J
    .locals 6

    .line 113
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->currentOffset:Ljava/util/concurrent/atomic/AtomicLong;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicLong;->get()J

    move-result-wide v0

    .line 114
    iget-wide v2, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->endOffset:J

    const-wide/16 v4, 0x0

    cmp-long v4, v2, v4

    if-lez v4, :cond_0

    const-wide/16 v4, 0x1

    add-long/2addr v2, v4

    cmp-long v4, v0, v2

    if-lez v4, :cond_0

    return-wide v2

    :cond_0
    return-wide v0
.end method

.method public getCurrentOffsetRead()J
    .locals 4

    .line 122
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->owner:Lcom/ss/android/socialbase/downloader/segment/SegmentReader;

    if-eqz v0, :cond_0

    .line 124
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/segment/SegmentReader;->getCurSegmentReadOffset()J

    move-result-wide v0

    .line 125
    iget-wide v2, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->currentOffsetRead:J

    cmp-long v2, v0, v2

    if-lez v2, :cond_0

    return-wide v0

    .line 130
    :cond_0
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->currentOffsetRead:J

    return-wide v0
.end method

.method public getDownloadBytes()J
    .locals 4

    .line 83
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->currentOffset:Ljava/util/concurrent/atomic/AtomicLong;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicLong;->get()J

    move-result-wide v0

    iget-wide v2, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->startOffset:J

    sub-long/2addr v0, v2

    return-wide v0
.end method

.method public getEndOffset()J
    .locals 2

    .line 149
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->endOffset:J

    return-wide v0
.end method

.method public getIndex()I
    .locals 1

    .line 170
    iget v0, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->index:I

    return v0
.end method

.method public getReadBytes()J
    .locals 4

    .line 98
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/segment/Segment;->getCurrentOffsetRead()J

    move-result-wide v0

    iget-wide v2, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->startOffset:J

    sub-long/2addr v0, v2

    return-wide v0
.end method

.method public getRemainDownloadBytes()J
    .locals 4

    .line 87
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->endOffset:J

    iget-wide v2, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->startOffset:J

    cmp-long v2, v0, v2

    if-ltz v2, :cond_0

    .line 88
    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->currentOffset:Ljava/util/concurrent/atomic/AtomicLong;

    invoke-virtual {v2}, Ljava/util/concurrent/atomic/AtomicLong;->get()J

    move-result-wide v2

    sub-long/2addr v0, v2

    const-wide/16 v2, 0x1

    add-long/2addr v0, v2

    return-wide v0

    :cond_0
    const-wide/16 v0, -0x1

    return-wide v0
.end method

.method public getRemainReadBytes()J
    .locals 4

    .line 102
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->endOffset:J

    iget-wide v2, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->startOffset:J

    cmp-long v2, v0, v2

    if-ltz v2, :cond_0

    .line 103
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/segment/Segment;->getCurrentOffsetRead()J

    move-result-wide v2

    sub-long/2addr v0, v2

    const-wide/16 v2, 0x1

    add-long/2addr v0, v2

    return-wide v0

    :cond_0
    const-wide/16 v0, -0x1

    return-wide v0
.end method

.method public getStartOffset()J
    .locals 2

    .line 109
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->startOffset:J

    return-wide v0
.end method

.method increaseCompetitor()V
    .locals 1

    .line 178
    iget v0, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->competitor:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->competitor:I

    return-void
.end method

.method increaseCurrentOffset(J)V
    .locals 1

    .line 145
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->currentOffset:Ljava/util/concurrent/atomic/AtomicLong;

    invoke-virtual {v0, p1, p2}, Ljava/util/concurrent/atomic/AtomicLong;->addAndGet(J)J

    return-void
.end method

.method public isDownloaded()Z
    .locals 4

    .line 79
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->endOffset:J

    iget-wide v2, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->startOffset:J

    cmp-long v0, v0, v2

    if-ltz v0, :cond_0

    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->currentOffset:Ljava/util/concurrent/atomic/AtomicLong;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicLong;->get()J

    move-result-wide v0

    iget-wide v2, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->endOffset:J

    cmp-long v0, v0, v2

    if-lez v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public isReadFinish()Z
    .locals 4

    .line 94
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->endOffset:J

    iget-wide v2, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->startOffset:J

    cmp-long v0, v0, v2

    if-ltz v0, :cond_0

    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/segment/Segment;->getCurrentOffsetRead()J

    move-result-wide v0

    iget-wide v2, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->endOffset:J

    cmp-long v0, v0, v2

    if-lez v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method setCompetitor(I)V
    .locals 0

    .line 190
    iput p1, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->competitor:I

    return-void
.end method

.method public setCurrentOffset(J)V
    .locals 4

    .line 134
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->startOffset:J

    cmp-long v2, p1, v0

    if-gez v2, :cond_0

    move-wide p1, v0

    .line 137
    :cond_0
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->endOffset:J

    const-wide/16 v2, 0x0

    cmp-long v2, v0, v2

    if-lez v2, :cond_1

    const-wide/16 v2, 0x1

    add-long/2addr v0, v2

    cmp-long v2, p1, v0

    if-lez v2, :cond_1

    move-wide p1, v0

    .line 141
    :cond_1
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->currentOffset:Ljava/util/concurrent/atomic/AtomicLong;

    invoke-virtual {v0, p1, p2}, Ljava/util/concurrent/atomic/AtomicLong;->set(J)V

    return-void
.end method

.method public setCurrentOffsetRead(J)V
    .locals 2

    .line 164
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->currentOffset:Ljava/util/concurrent/atomic/AtomicLong;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicLong;->get()J

    move-result-wide v0

    cmp-long v0, p1, v0

    if-ltz v0, :cond_0

    .line 165
    iput-wide p1, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->currentOffsetRead:J

    :cond_0
    return-void
.end method

.method setEndOffset(J)V
    .locals 2

    .line 153
    iget-wide v0, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->startOffset:J

    cmp-long v0, p1, v0

    if-ltz v0, :cond_0

    .line 154
    iput-wide p1, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->endOffset:J

    goto :goto_0

    .line 156
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "setEndOffset: endOffset = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1, p2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, ", segment = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "Segment"

    invoke-static {v1, v0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    const-wide/16 v0, -0x1

    cmp-long v0, p1, v0

    if-nez v0, :cond_1

    .line 158
    iput-wide p1, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->endOffset:J

    :cond_1
    :goto_0
    return-void
.end method

.method setIndex(I)V
    .locals 0

    .line 174
    iput p1, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->index:I

    return-void
.end method

.method public toJson()Lorg/json/JSONObject;
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 223
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->jsonObject:Lorg/json/JSONObject;

    if-nez v0, :cond_0

    .line 225
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 226
    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->jsonObject:Lorg/json/JSONObject;

    .line 228
    :cond_0
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/segment/Segment;->getStartOffset()J

    move-result-wide v1

    const-string v3, "st"

    invoke-virtual {v0, v3, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    .line 229
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/segment/Segment;->getCurrentOffset()J

    move-result-wide v1

    const-string v3, "cu"

    invoke-virtual {v0, v3, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    .line 230
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/segment/Segment;->getEndOffset()J

    move-result-wide v1

    const-string v3, "en"

    invoke-virtual {v0, v3, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    return-object v0
.end method

.method public toString()Ljava/lang/String;
    .locals 3

    .line 195
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Segment{startOffset="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v1, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->startOffset:J

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, ",\t currentOffset="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->currentOffset:Ljava/util/concurrent/atomic/AtomicLong;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, ",\t currentOffsetRead="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 198
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/segment/Segment;->getCurrentOffsetRead()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, ",\t endOffset="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v1, p0, Lcom/ss/android/socialbase/downloader/segment/Segment;->endOffset:J

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const/16 v1, 0x7d

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
