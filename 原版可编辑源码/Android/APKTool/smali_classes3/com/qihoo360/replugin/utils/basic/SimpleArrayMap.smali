.class public Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;
.super Ljava/lang/Object;
.source "SimpleArrayMap.java"


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "<K:",
        "Ljava/lang/Object;",
        "V:",
        "Ljava/lang/Object;",
        ">",
        "Ljava/lang/Object;"
    }
.end annotation


# static fields
.field private static final BASE_SIZE:I = 0x4

.field private static final CACHE_SIZE:I = 0xa

.field private static final DEBUG:Z = false

.field private static final TAG:Ljava/lang/String; = "ArrayMap"

.field static mBaseCache:[Ljava/lang/Object;

.field static mBaseCacheSize:I

.field static mTwiceBaseCache:[Ljava/lang/Object;

.field static mTwiceBaseCacheSize:I


# instance fields
.field mArray:[Ljava/lang/Object;

.field mHashes:[I

.field mSize:I


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 212
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 213
    sget-object v0, Lcom/qihoo360/replugin/utils/basic/ContainerHelpers;->EMPTY_INTS:[I

    iput-object v0, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mHashes:[I

    .line 214
    sget-object v0, Lcom/qihoo360/replugin/utils/basic/ContainerHelpers;->EMPTY_OBJECTS:[Ljava/lang/Object;

    iput-object v0, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mArray:[Ljava/lang/Object;

    const/4 v0, 0x0

    .line 215
    iput v0, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mSize:I

    return-void
.end method

.method public constructor <init>(I)V
    .locals 0

    .line 221
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    if-nez p1, :cond_0

    .line 223
    sget-object p1, Lcom/qihoo360/replugin/utils/basic/ContainerHelpers;->EMPTY_INTS:[I

    iput-object p1, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mHashes:[I

    .line 224
    sget-object p1, Lcom/qihoo360/replugin/utils/basic/ContainerHelpers;->EMPTY_OBJECTS:[Ljava/lang/Object;

    iput-object p1, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mArray:[Ljava/lang/Object;

    goto :goto_0

    .line 226
    :cond_0
    invoke-direct {p0, p1}, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->allocArrays(I)V

    :goto_0
    const/4 p1, 0x0

    .line 228
    iput p1, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mSize:I

    return-void
.end method

.method public constructor <init>(Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;)V
    .locals 0

    .line 235
    invoke-direct {p0}, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;-><init>()V

    if-eqz p1, :cond_0

    .line 237
    invoke-virtual {p0, p1}, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->putAll(Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;)V

    :cond_0
    return-void
.end method

.method private allocArrays(I)V
    .locals 5

    const/4 v0, 0x0

    const/4 v1, 0x0

    const/4 v2, 0x1

    const/16 v3, 0x8

    if-ne p1, v3, :cond_1

    .line 143
    const-class v3, Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    monitor-enter v3

    .line 144
    :try_start_0
    sget-object v4, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mTwiceBaseCache:[Ljava/lang/Object;

    if-eqz v4, :cond_0

    .line 145
    sget-object p1, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mTwiceBaseCache:[Ljava/lang/Object;

    .line 146
    iput-object p1, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mArray:[Ljava/lang/Object;

    .line 147
    aget-object v4, p1, v1

    check-cast v4, [Ljava/lang/Object;

    check-cast v4, [Ljava/lang/Object;

    sput-object v4, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mTwiceBaseCache:[Ljava/lang/Object;

    .line 148
    aget-object v4, p1, v2

    check-cast v4, [I

    check-cast v4, [I

    iput-object v4, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mHashes:[I

    .line 149
    aput-object v0, p1, v2

    aput-object v0, p1, v1

    .line 150
    sget p1, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mTwiceBaseCacheSize:I

    sub-int/2addr p1, v2

    sput p1, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mTwiceBaseCacheSize:I

    .line 153
    monitor-exit v3

    return-void

    .line 155
    :cond_0
    monitor-exit v3

    goto :goto_0

    :catchall_0
    move-exception p1

    monitor-exit v3
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1

    :cond_1
    const/4 v3, 0x4

    if-ne p1, v3, :cond_3

    .line 157
    const-class v3, Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    monitor-enter v3

    .line 158
    :try_start_1
    sget-object v4, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mBaseCache:[Ljava/lang/Object;

    if-eqz v4, :cond_2

    .line 159
    sget-object p1, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mBaseCache:[Ljava/lang/Object;

    .line 160
    iput-object p1, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mArray:[Ljava/lang/Object;

    .line 161
    aget-object v4, p1, v1

    check-cast v4, [Ljava/lang/Object;

    check-cast v4, [Ljava/lang/Object;

    sput-object v4, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mBaseCache:[Ljava/lang/Object;

    .line 162
    aget-object v4, p1, v2

    check-cast v4, [I

    check-cast v4, [I

    iput-object v4, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mHashes:[I

    .line 163
    aput-object v0, p1, v2

    aput-object v0, p1, v1

    .line 164
    sget p1, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mBaseCacheSize:I

    sub-int/2addr p1, v2

    sput p1, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mBaseCacheSize:I

    .line 167
    monitor-exit v3

    return-void

    .line 169
    :cond_2
    monitor-exit v3

    goto :goto_0

    :catchall_1
    move-exception p1

    monitor-exit v3
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    throw p1

    .line 172
    :cond_3
    :goto_0
    new-array v0, p1, [I

    iput-object v0, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mHashes:[I

    shl-int/2addr p1, v2

    .line 173
    new-array p1, p1, [Ljava/lang/Object;

    iput-object p1, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mArray:[Ljava/lang/Object;

    return-void
.end method

.method private static freeArrays([I[Ljava/lang/Object;I)V
    .locals 7

    .line 177
    array-length v0, p0

    const/4 v1, 0x0

    const/4 v2, 0x2

    const/4 v3, 0x0

    const/16 v4, 0xa

    const/4 v5, 0x1

    const/16 v6, 0x8

    if-ne v0, v6, :cond_2

    .line 178
    const-class v0, Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    monitor-enter v0

    .line 179
    :try_start_0
    sget v6, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mTwiceBaseCacheSize:I

    if-ge v6, v4, :cond_1

    .line 180
    sget-object v4, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mTwiceBaseCache:[Ljava/lang/Object;

    aput-object v4, p1, v3

    .line 181
    aput-object p0, p1, v5

    shl-int/lit8 p0, p2, 0x1

    sub-int/2addr p0, v5

    :goto_0
    if-lt p0, v2, :cond_0

    .line 183
    aput-object v1, p1, p0

    add-int/lit8 p0, p0, -0x1

    goto :goto_0

    .line 185
    :cond_0
    sput-object p1, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mTwiceBaseCache:[Ljava/lang/Object;

    .line 186
    sget p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mTwiceBaseCacheSize:I

    add-int/2addr p0, v5

    sput p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mTwiceBaseCacheSize:I

    .line 190
    :cond_1
    monitor-exit v0

    goto :goto_2

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0

    .line 191
    :cond_2
    array-length v0, p0

    const/4 v6, 0x4

    if-ne v0, v6, :cond_5

    .line 192
    const-class v0, Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    monitor-enter v0

    .line 193
    :try_start_1
    sget v6, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mBaseCacheSize:I

    if-ge v6, v4, :cond_4

    .line 194
    sget-object v4, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mBaseCache:[Ljava/lang/Object;

    aput-object v4, p1, v3

    .line 195
    aput-object p0, p1, v5

    shl-int/lit8 p0, p2, 0x1

    sub-int/2addr p0, v5

    :goto_1
    if-lt p0, v2, :cond_3

    .line 197
    aput-object v1, p1, p0

    add-int/lit8 p0, p0, -0x1

    goto :goto_1

    .line 199
    :cond_3
    sput-object p1, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mBaseCache:[Ljava/lang/Object;

    .line 200
    sget p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mBaseCacheSize:I

    add-int/2addr p0, v5

    sput p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mBaseCacheSize:I

    .line 204
    :cond_4
    monitor-exit v0

    goto :goto_2

    :catchall_1
    move-exception p0

    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    throw p0

    :cond_5
    :goto_2
    return-void
.end method


# virtual methods
.method public clear()V
    .locals 3

    .line 245
    iget v0, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mSize:I

    if-eqz v0, :cond_0

    .line 246
    iget-object v1, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mHashes:[I

    iget-object v2, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mArray:[Ljava/lang/Object;

    invoke-static {v1, v2, v0}, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->freeArrays([I[Ljava/lang/Object;I)V

    .line 247
    sget-object v0, Lcom/qihoo360/replugin/utils/basic/ContainerHelpers;->EMPTY_INTS:[I

    iput-object v0, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mHashes:[I

    .line 248
    sget-object v0, Lcom/qihoo360/replugin/utils/basic/ContainerHelpers;->EMPTY_OBJECTS:[Ljava/lang/Object;

    iput-object v0, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mArray:[Ljava/lang/Object;

    const/4 v0, 0x0

    .line 249
    iput v0, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mSize:I

    :cond_0
    return-void
.end method

.method public containsKey(Ljava/lang/Object;)Z
    .locals 0

    .line 277
    invoke-virtual {p0, p1}, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->indexOfKey(Ljava/lang/Object;)I

    move-result p1

    if-ltz p1, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return p1
.end method

.method public containsValue(Ljava/lang/Object;)Z
    .locals 0

    .line 317
    invoke-virtual {p0, p1}, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->indexOfValue(Ljava/lang/Object;)I

    move-result p1

    if-ltz p1, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return p1
.end method

.method public ensureCapacity(I)V
    .locals 4

    .line 258
    iget-object v0, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mHashes:[I

    array-length v1, v0

    if-ge v1, p1, :cond_1

    .line 260
    iget-object v1, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mArray:[Ljava/lang/Object;

    .line 261
    invoke-direct {p0, p1}, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->allocArrays(I)V

    .line 262
    iget p1, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mSize:I

    if-lez p1, :cond_0

    .line 263
    iget-object v2, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mHashes:[I

    const/4 v3, 0x0

    invoke-static {v0, v3, v2, v3, p1}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 264
    iget-object p1, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mArray:[Ljava/lang/Object;

    iget v2, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mSize:I

    shl-int/lit8 v2, v2, 0x1

    invoke-static {v1, v3, p1, v3, v2}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 266
    :cond_0
    iget p1, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mSize:I

    invoke-static {v0, v1, p1}, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->freeArrays([I[Ljava/lang/Object;I)V

    :cond_1
    return-void
.end method

.method public equals(Ljava/lang/Object;)Z
    .locals 6

    const/4 v0, 0x1

    if-ne p0, p1, :cond_0

    return v0

    .line 539
    :cond_0
    instance-of v1, p1, Ljava/util/Map;

    const/4 v2, 0x0

    if-eqz v1, :cond_6

    .line 540
    check-cast p1, Ljava/util/Map;

    .line 541
    invoke-virtual {p0}, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->size()I

    move-result v1

    invoke-interface {p1}, Ljava/util/Map;->size()I

    move-result v3

    if-eq v1, v3, :cond_1

    return v2

    :cond_1
    move v1, v2

    .line 546
    :goto_0
    :try_start_0
    iget v3, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mSize:I

    if-ge v1, v3, :cond_5

    .line 547
    invoke-virtual {p0, v1}, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->keyAt(I)Ljava/lang/Object;

    move-result-object v3

    .line 548
    invoke-virtual {p0, v1}, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->valueAt(I)Ljava/lang/Object;

    move-result-object v4

    .line 549
    invoke-interface {p1, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    if-nez v4, :cond_3

    if-nez v5, :cond_2

    .line 551
    invoke-interface {p1, v3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    if-nez v3, :cond_4

    :cond_2
    return v2

    .line 554
    :cond_3
    invoke-virtual {v4, v5}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v3
    :try_end_0
    .catch Ljava/lang/NullPointerException; {:try_start_0 .. :try_end_0} :catch_0
    .catch Ljava/lang/ClassCastException; {:try_start_0 .. :try_end_0} :catch_0

    if-nez v3, :cond_4

    return v2

    :cond_4
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_5
    return v0

    :catch_0
    :cond_6
    return v2
.end method

.method public get(Ljava/lang/Object;)Ljava/lang/Object;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Object;",
            ")TV;"
        }
    .end annotation

    .line 327
    invoke-virtual {p0, p1}, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->indexOfKey(Ljava/lang/Object;)I

    move-result p1

    if-ltz p1, :cond_0

    .line 328
    iget-object v0, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mArray:[Ljava/lang/Object;

    shl-int/lit8 p1, p1, 0x1

    add-int/lit8 p1, p1, 0x1

    aget-object p1, v0, p1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return-object p1
.end method

.method public hashCode()I
    .locals 9

    .line 573
    iget-object v0, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mHashes:[I

    .line 574
    iget-object v1, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mArray:[Ljava/lang/Object;

    .line 576
    iget v2, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mSize:I

    const/4 v3, 0x1

    const/4 v4, 0x0

    move v5, v4

    move v6, v5

    :goto_0
    if-ge v5, v2, :cond_1

    .line 577
    aget-object v7, v1, v3

    .line 578
    aget v8, v0, v5

    if-nez v7, :cond_0

    move v7, v4

    goto :goto_1

    :cond_0
    invoke-virtual {v7}, Ljava/lang/Object;->hashCode()I

    move-result v7

    :goto_1
    xor-int/2addr v7, v8

    add-int/2addr v6, v7

    add-int/lit8 v5, v5, 0x1

    add-int/lit8 v3, v3, 0x2

    goto :goto_0

    :cond_1
    return v6
.end method

.method indexOf(Ljava/lang/Object;I)I
    .locals 5

    .line 62
    iget v0, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mSize:I

    if-nez v0, :cond_0

    const/4 p1, -0x1

    return p1

    .line 69
    :cond_0
    iget-object v1, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mHashes:[I

    invoke-static {v1, v0, p2}, Lcom/qihoo360/replugin/utils/basic/ContainerHelpers;->binarySearch([III)I

    move-result v1

    if-gez v1, :cond_1

    return v1

    .line 77
    :cond_1
    iget-object v2, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mArray:[Ljava/lang/Object;

    shl-int/lit8 v3, v1, 0x1

    aget-object v2, v2, v3

    invoke-virtual {p1, v2}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_2

    return v1

    :cond_2
    add-int/lit8 v2, v1, 0x1

    :goto_0
    if-ge v2, v0, :cond_4

    .line 83
    iget-object v3, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mHashes:[I

    aget v3, v3, v2

    if-ne v3, p2, :cond_4

    .line 84
    iget-object v3, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mArray:[Ljava/lang/Object;

    shl-int/lit8 v4, v2, 0x1

    aget-object v3, v3, v4

    invoke-virtual {p1, v3}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_3

    return v2

    :cond_3
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_4
    add-int/lit8 v1, v1, -0x1

    :goto_1
    if-ltz v1, :cond_6

    .line 90
    iget-object v0, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mHashes:[I

    aget v0, v0, v1

    if-ne v0, p2, :cond_6

    .line 91
    iget-object v0, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mArray:[Ljava/lang/Object;

    shl-int/lit8 v3, v1, 0x1

    aget-object v0, v0, v3

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_5

    return v1

    :cond_5
    add-int/lit8 v1, v1, -0x1

    goto :goto_1

    :cond_6
    not-int p1, v2

    return p1
.end method

.method public indexOfKey(Ljava/lang/Object;)I
    .locals 1

    if-nez p1, :cond_0

    .line 287
    invoke-virtual {p0}, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->indexOfNull()I

    move-result p1

    goto :goto_0

    :cond_0
    invoke-virtual {p1}, Ljava/lang/Object;->hashCode()I

    move-result v0

    invoke-virtual {p0, p1, v0}, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->indexOf(Ljava/lang/Object;I)I

    move-result p1

    :goto_0
    return p1
.end method

.method indexOfNull()I
    .locals 5

    .line 104
    iget v0, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mSize:I

    if-nez v0, :cond_0

    const/4 v0, -0x1

    return v0

    .line 111
    :cond_0
    iget-object v1, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mHashes:[I

    const/4 v2, 0x0

    invoke-static {v1, v0, v2}, Lcom/qihoo360/replugin/utils/basic/ContainerHelpers;->binarySearch([III)I

    move-result v1

    if-gez v1, :cond_1

    return v1

    .line 119
    :cond_1
    iget-object v2, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mArray:[Ljava/lang/Object;

    shl-int/lit8 v3, v1, 0x1

    aget-object v2, v2, v3

    if-nez v2, :cond_2

    return v1

    :cond_2
    add-int/lit8 v2, v1, 0x1

    :goto_0
    if-ge v2, v0, :cond_4

    .line 125
    iget-object v3, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mHashes:[I

    aget v3, v3, v2

    if-nez v3, :cond_4

    .line 126
    iget-object v3, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mArray:[Ljava/lang/Object;

    shl-int/lit8 v4, v2, 0x1

    aget-object v3, v3, v4

    if-nez v3, :cond_3

    return v2

    :cond_3
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_4
    add-int/lit8 v1, v1, -0x1

    :goto_1
    if-ltz v1, :cond_6

    .line 130
    iget-object v0, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mHashes:[I

    aget v0, v0, v1

    if-nez v0, :cond_6

    .line 131
    iget-object v0, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mArray:[Ljava/lang/Object;

    shl-int/lit8 v3, v1, 0x1

    aget-object v0, v0, v3

    if-nez v0, :cond_5

    return v1

    :cond_5
    add-int/lit8 v1, v1, -0x1

    goto :goto_1

    :cond_6
    not-int v0, v2

    return v0
.end method

.method indexOfValue(Ljava/lang/Object;)I
    .locals 5

    .line 291
    iget v0, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mSize:I

    mul-int/lit8 v0, v0, 0x2

    .line 292
    iget-object v1, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mArray:[Ljava/lang/Object;

    const/4 v2, 0x1

    if-nez p1, :cond_1

    move p1, v2

    :goto_0
    if-ge p1, v0, :cond_3

    .line 295
    aget-object v3, v1, p1

    if-nez v3, :cond_0

    shr-int/2addr p1, v2

    return p1

    :cond_0
    add-int/lit8 p1, p1, 0x2

    goto :goto_0

    :cond_1
    move v3, v2

    :goto_1
    if-ge v3, v0, :cond_3

    .line 301
    aget-object v4, v1, v3

    invoke-virtual {p1, v4}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_2

    shr-int/lit8 p1, v3, 0x1

    return p1

    :cond_2
    add-int/lit8 v3, v3, 0x2

    goto :goto_1

    :cond_3
    const/4 p1, -0x1

    return p1
.end method

.method public isEmpty()Z
    .locals 1

    .line 366
    iget v0, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mSize:I

    if-gtz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public keyAt(I)Ljava/lang/Object;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)TK;"
        }
    .end annotation

    .line 337
    iget-object v0, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mArray:[Ljava/lang/Object;

    shl-int/lit8 p1, p1, 0x1

    aget-object p1, v0, p1

    return-object p1
.end method

.method public put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    .locals 8
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TK;TV;)TV;"
        }
    .end annotation

    const/4 v0, 0x0

    if-nez p1, :cond_0

    .line 382
    invoke-virtual {p0}, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->indexOfNull()I

    move-result v1

    move v2, v0

    goto :goto_0

    .line 384
    :cond_0
    invoke-virtual {p1}, Ljava/lang/Object;->hashCode()I

    move-result v1

    .line 385
    invoke-virtual {p0, p1, v1}, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->indexOf(Ljava/lang/Object;I)I

    move-result v2

    move v7, v2

    move v2, v1

    move v1, v7

    :goto_0
    if-ltz v1, :cond_1

    shl-int/lit8 p1, v1, 0x1

    add-int/lit8 p1, p1, 0x1

    .line 389
    iget-object v0, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mArray:[Ljava/lang/Object;

    aget-object v1, v0, p1

    .line 390
    aput-object p2, v0, p1

    return-object v1

    :cond_1
    not-int v1, v1

    .line 395
    iget v3, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mSize:I

    iget-object v4, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mHashes:[I

    array-length v4, v4

    if-lt v3, v4, :cond_5

    const/4 v4, 0x4

    const/16 v5, 0x8

    if-lt v3, v5, :cond_2

    shr-int/lit8 v4, v3, 0x1

    add-int/2addr v4, v3

    goto :goto_1

    :cond_2
    if-lt v3, v4, :cond_3

    move v4, v5

    .line 401
    :cond_3
    :goto_1
    iget-object v3, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mHashes:[I

    .line 402
    iget-object v5, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mArray:[Ljava/lang/Object;

    .line 403
    invoke-direct {p0, v4}, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->allocArrays(I)V

    .line 405
    iget-object v4, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mHashes:[I

    array-length v6, v4

    if-lez v6, :cond_4

    .line 407
    array-length v6, v3

    invoke-static {v3, v0, v4, v0, v6}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 408
    iget-object v4, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mArray:[Ljava/lang/Object;

    array-length v6, v5

    invoke-static {v5, v0, v4, v0, v6}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 411
    :cond_4
    iget v0, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mSize:I

    invoke-static {v3, v5, v0}, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->freeArrays([I[Ljava/lang/Object;I)V

    .line 414
    :cond_5
    iget v0, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mSize:I

    if-ge v1, v0, :cond_6

    .line 417
    iget-object v3, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mHashes:[I

    add-int/lit8 v4, v1, 0x1

    sub-int/2addr v0, v1

    invoke-static {v3, v1, v3, v4, v0}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 418
    iget-object v0, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mArray:[Ljava/lang/Object;

    shl-int/lit8 v3, v1, 0x1

    shl-int/lit8 v4, v4, 0x1

    iget v5, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mSize:I

    sub-int/2addr v5, v1

    shl-int/lit8 v5, v5, 0x1

    invoke-static {v0, v3, v0, v4, v5}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 421
    :cond_6
    iget-object v0, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mHashes:[I

    aput v2, v0, v1

    .line 422
    iget-object v0, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mArray:[Ljava/lang/Object;

    shl-int/lit8 v1, v1, 0x1

    aput-object p1, v0, v1

    add-int/lit8 v1, v1, 0x1

    .line 423
    aput-object p2, v0, v1

    .line 424
    iget p1, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mSize:I

    add-int/lit8 p1, p1, 0x1

    iput p1, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mSize:I

    const/4 p1, 0x0

    return-object p1
.end method

.method public putAll(Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;)V
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap<",
            "+TK;+TV;>;)V"
        }
    .end annotation

    .line 433
    iget v0, p1, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mSize:I

    .line 434
    iget v1, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mSize:I

    add-int/2addr v1, v0

    invoke-virtual {p0, v1}, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->ensureCapacity(I)V

    .line 435
    iget v1, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mSize:I

    const/4 v2, 0x0

    if-nez v1, :cond_0

    if-lez v0, :cond_1

    .line 437
    iget-object v1, p1, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mHashes:[I

    iget-object v3, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mHashes:[I

    invoke-static {v1, v2, v3, v2, v0}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 438
    iget-object p1, p1, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mArray:[Ljava/lang/Object;

    iget-object v1, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mArray:[Ljava/lang/Object;

    shl-int/lit8 v3, v0, 0x1

    invoke-static {p1, v2, v1, v2, v3}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 439
    iput v0, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mSize:I

    goto :goto_1

    :cond_0
    :goto_0
    if-ge v2, v0, :cond_1

    .line 443
    invoke-virtual {p1, v2}, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->keyAt(I)Ljava/lang/Object;

    move-result-object v1

    invoke-virtual {p1, v2}, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->valueAt(I)Ljava/lang/Object;

    move-result-object v3

    invoke-virtual {p0, v1, v3}, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_1
    :goto_1
    return-void
.end method

.method public remove(Ljava/lang/Object;)Ljava/lang/Object;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Object;",
            ")TV;"
        }
    .end annotation

    .line 455
    invoke-virtual {p0, p1}, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->indexOfKey(Ljava/lang/Object;)I

    move-result p1

    if-ltz p1, :cond_0

    .line 457
    invoke-virtual {p0, p1}, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->removeAt(I)Ljava/lang/Object;

    move-result-object p1

    return-object p1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public removeAt(I)Ljava/lang/Object;
    .locals 8
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)TV;"
        }
    .end annotation

    .line 469
    iget-object v0, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mArray:[Ljava/lang/Object;

    shl-int/lit8 v1, p1, 0x1

    add-int/lit8 v2, v1, 0x1

    aget-object v2, v0, v2

    .line 470
    iget v3, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mSize:I

    const/4 v4, 0x0

    const/4 v5, 0x1

    if-gt v3, v5, :cond_0

    .line 473
    iget-object p1, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mHashes:[I

    invoke-static {p1, v0, v3}, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->freeArrays([I[Ljava/lang/Object;I)V

    .line 474
    sget-object p1, Lcom/qihoo360/replugin/utils/basic/ContainerHelpers;->EMPTY_INTS:[I

    iput-object p1, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mHashes:[I

    .line 475
    sget-object p1, Lcom/qihoo360/replugin/utils/basic/ContainerHelpers;->EMPTY_OBJECTS:[Ljava/lang/Object;

    iput-object p1, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mArray:[Ljava/lang/Object;

    .line 476
    iput v4, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mSize:I

    goto :goto_0

    .line 478
    :cond_0
    iget-object v0, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mHashes:[I

    array-length v6, v0

    const/16 v7, 0x8

    if-le v6, v7, :cond_3

    array-length v0, v0

    div-int/lit8 v0, v0, 0x3

    if-ge v3, v0, :cond_3

    if-le v3, v7, :cond_1

    shr-int/lit8 v0, v3, 0x1

    add-int v7, v3, v0

    .line 486
    :cond_1
    iget-object v0, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mHashes:[I

    .line 487
    iget-object v3, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mArray:[Ljava/lang/Object;

    .line 488
    invoke-direct {p0, v7}, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->allocArrays(I)V

    .line 490
    iget v6, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mSize:I

    sub-int/2addr v6, v5

    iput v6, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mSize:I

    if-lez p1, :cond_2

    .line 493
    iget-object v6, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mHashes:[I

    invoke-static {v0, v4, v6, v4, p1}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 494
    iget-object v6, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mArray:[Ljava/lang/Object;

    invoke-static {v3, v4, v6, v4, v1}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 496
    :cond_2
    iget v4, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mSize:I

    if-ge p1, v4, :cond_5

    add-int/lit8 v6, p1, 0x1

    .line 499
    iget-object v7, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mHashes:[I

    sub-int/2addr v4, p1

    invoke-static {v0, v6, v7, p1, v4}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    shl-int/lit8 v0, v6, 0x1

    .line 500
    iget-object v4, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mArray:[Ljava/lang/Object;

    iget v6, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mSize:I

    sub-int/2addr v6, p1

    shl-int/lit8 p1, v6, 0x1

    invoke-static {v3, v0, v4, v1, p1}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    goto :goto_0

    .line 504
    :cond_3
    iget v0, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mSize:I

    sub-int/2addr v0, v5

    iput v0, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mSize:I

    if-ge p1, v0, :cond_4

    .line 508
    iget-object v3, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mHashes:[I

    add-int/lit8 v4, p1, 0x1

    sub-int/2addr v0, p1

    invoke-static {v3, v4, v3, p1, v0}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 509
    iget-object v0, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mArray:[Ljava/lang/Object;

    shl-int/lit8 v3, v4, 0x1

    iget v4, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mSize:I

    sub-int/2addr v4, p1

    shl-int/lit8 p1, v4, 0x1

    invoke-static {v0, v3, v0, v1, p1}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 512
    :cond_4
    iget-object p1, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mArray:[Ljava/lang/Object;

    iget v0, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mSize:I

    shl-int/lit8 v1, v0, 0x1

    const/4 v3, 0x0

    aput-object v3, p1, v1

    shl-int/2addr v0, v5

    add-int/2addr v0, v5

    .line 513
    aput-object v3, p1, v0

    :cond_5
    :goto_0
    return-object v2
.end method

.method public setValueAt(ILjava/lang/Object;)Ljava/lang/Object;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(ITV;)TV;"
        }
    .end annotation

    shl-int/lit8 p1, p1, 0x1

    add-int/lit8 p1, p1, 0x1

    .line 357
    iget-object v0, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mArray:[Ljava/lang/Object;

    aget-object v1, v0, p1

    .line 358
    aput-object p2, v0, p1

    return-object v1
.end method

.method public size()I
    .locals 1

    .line 523
    iget v0, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mSize:I

    return v0
.end method

.method public toString()Ljava/lang/String;
    .locals 4

    .line 592
    invoke-virtual {p0}, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, "{}"

    return-object v0

    .line 596
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mSize:I

    mul-int/lit8 v1, v1, 0x1c

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(I)V

    const/16 v1, 0x7b

    .line 597
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    const/4 v1, 0x0

    .line 598
    :goto_0
    iget v2, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mSize:I

    if-ge v1, v2, :cond_4

    if-lez v1, :cond_1

    const-string v2, ", "

    .line 600
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 602
    :cond_1
    invoke-virtual {p0, v1}, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->keyAt(I)Ljava/lang/Object;

    move-result-object v2

    const-string v3, "(this Map)"

    if-eq v2, p0, :cond_2

    .line 604
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    goto :goto_1

    .line 606
    :cond_2
    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :goto_1
    const/16 v2, 0x3d

    .line 608
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 609
    invoke-virtual {p0, v1}, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->valueAt(I)Ljava/lang/Object;

    move-result-object v2

    if-eq v2, p0, :cond_3

    .line 611
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    goto :goto_2

    .line 613
    :cond_3
    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :goto_2
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_4
    const/16 v1, 0x7d

    .line 616
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 617
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public valueAt(I)Ljava/lang/Object;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)TV;"
        }
    .end annotation

    .line 346
    iget-object v0, p0, Lcom/qihoo360/replugin/utils/basic/SimpleArrayMap;->mArray:[Ljava/lang/Object;

    shl-int/lit8 p1, p1, 0x1

    add-int/lit8 p1, p1, 0x1

    aget-object p1, v0, p1

    return-object p1
.end method
