.class public Lcom/bianfeng/netlibsdk/ByteArrayPool;
.super Ljava/lang/Object;
.source "ByteArrayPool.java"


# static fields
.field protected static final BUF_COMPARATOR:Ljava/util/Comparator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Comparator<",
            "[B>;"
        }
    .end annotation
.end field


# instance fields
.field private final mBuffersByLastUse:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "[B>;"
        }
    .end annotation
.end field

.field private final mBuffersBySize:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "[B>;"
        }
    .end annotation
.end field

.field private mCurrentSize:I

.field private final mSizeLimit:I


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 17
    new-instance v0, Lcom/bianfeng/netlibsdk/ByteArrayPool$1;

    invoke-direct {v0}, Lcom/bianfeng/netlibsdk/ByteArrayPool$1;-><init>()V

    sput-object v0, Lcom/bianfeng/netlibsdk/ByteArrayPool;->BUF_COMPARATOR:Ljava/util/Comparator;

    return-void
.end method

.method public constructor <init>(I)V
    .locals 2

    .line 25
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 9
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/netlibsdk/ByteArrayPool;->mBuffersByLastUse:Ljava/util/List;

    .line 11
    new-instance v0, Ljava/util/ArrayList;

    const/16 v1, 0x40

    invoke-direct {v0, v1}, Ljava/util/ArrayList;-><init>(I)V

    iput-object v0, p0, Lcom/bianfeng/netlibsdk/ByteArrayPool;->mBuffersBySize:Ljava/util/List;

    const/4 v0, 0x0

    .line 13
    iput v0, p0, Lcom/bianfeng/netlibsdk/ByteArrayPool;->mCurrentSize:I

    .line 26
    iput p1, p0, Lcom/bianfeng/netlibsdk/ByteArrayPool;->mSizeLimit:I

    return-void
.end method

.method private declared-synchronized trim()V
    .locals 2

    monitor-enter p0

    .line 57
    :goto_0
    :try_start_0
    iget v0, p0, Lcom/bianfeng/netlibsdk/ByteArrayPool;->mCurrentSize:I

    iget v1, p0, Lcom/bianfeng/netlibsdk/ByteArrayPool;->mSizeLimit:I

    if-le v0, v1, :cond_0

    .line 58
    iget-object v0, p0, Lcom/bianfeng/netlibsdk/ByteArrayPool;->mBuffersByLastUse:Ljava/util/List;

    const/4 v1, 0x0

    invoke-interface {v0, v1}, Ljava/util/List;->remove(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [B

    .line 59
    iget-object v1, p0, Lcom/bianfeng/netlibsdk/ByteArrayPool;->mBuffersBySize:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    .line 60
    iget v1, p0, Lcom/bianfeng/netlibsdk/ByteArrayPool;->mCurrentSize:I

    array-length v0, v0

    sub-int/2addr v1, v0

    iput v1, p0, Lcom/bianfeng/netlibsdk/ByteArrayPool;->mCurrentSize:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    .line 62
    :cond_0
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method


# virtual methods
.method public declared-synchronized getBuf(I)[B
    .locals 3

    monitor-enter p0

    const/4 v0, 0x0

    .line 30
    :goto_0
    :try_start_0
    iget-object v1, p0, Lcom/bianfeng/netlibsdk/ByteArrayPool;->mBuffersBySize:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-ge v0, v1, :cond_1

    .line 31
    iget-object v1, p0, Lcom/bianfeng/netlibsdk/ByteArrayPool;->mBuffersBySize:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, [B

    .line 32
    array-length v2, v1

    if-lt v2, p1, :cond_0

    .line 33
    iget p1, p0, Lcom/bianfeng/netlibsdk/ByteArrayPool;->mCurrentSize:I

    array-length v2, v1

    sub-int/2addr p1, v2

    iput p1, p0, Lcom/bianfeng/netlibsdk/ByteArrayPool;->mCurrentSize:I

    .line 34
    iget-object p1, p0, Lcom/bianfeng/netlibsdk/ByteArrayPool;->mBuffersBySize:Ljava/util/List;

    invoke-interface {p1, v0}, Ljava/util/List;->remove(I)Ljava/lang/Object;

    .line 35
    iget-object p1, p0, Lcom/bianfeng/netlibsdk/ByteArrayPool;->mBuffersByLastUse:Ljava/util/List;

    invoke-interface {p1, v1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 36
    monitor-exit p0

    return-object v1

    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 39
    :cond_1
    :try_start_1
    new-array p1, p1, [B
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit p0

    return-object p1

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public declared-synchronized returnBuf([B)V
    .locals 2

    monitor-enter p0

    if-eqz p1, :cond_2

    .line 43
    :try_start_0
    array-length v0, p1

    iget v1, p0, Lcom/bianfeng/netlibsdk/ByteArrayPool;->mSizeLimit:I

    if-le v0, v1, :cond_0

    goto :goto_0

    .line 46
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/netlibsdk/ByteArrayPool;->mBuffersByLastUse:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 47
    iget-object v0, p0, Lcom/bianfeng/netlibsdk/ByteArrayPool;->mBuffersBySize:Ljava/util/List;

    sget-object v1, Lcom/bianfeng/netlibsdk/ByteArrayPool;->BUF_COMPARATOR:Ljava/util/Comparator;

    invoke-static {v0, p1, v1}, Ljava/util/Collections;->binarySearch(Ljava/util/List;Ljava/lang/Object;Ljava/util/Comparator;)I

    move-result v0

    if-gez v0, :cond_1

    neg-int v0, v0

    add-int/lit8 v0, v0, -0x1

    .line 51
    :cond_1
    iget-object v1, p0, Lcom/bianfeng/netlibsdk/ByteArrayPool;->mBuffersBySize:Ljava/util/List;

    invoke-interface {v1, v0, p1}, Ljava/util/List;->add(ILjava/lang/Object;)V

    .line 52
    iget v0, p0, Lcom/bianfeng/netlibsdk/ByteArrayPool;->mCurrentSize:I

    array-length p1, p1

    add-int/2addr v0, p1

    iput v0, p0, Lcom/bianfeng/netlibsdk/ByteArrayPool;->mCurrentSize:I

    .line 53
    invoke-direct {p0}, Lcom/bianfeng/netlibsdk/ByteArrayPool;->trim()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 54
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1

    .line 44
    :cond_2
    :goto_0
    monitor-exit p0

    return-void
.end method
