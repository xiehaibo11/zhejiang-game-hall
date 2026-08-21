.class public abstract Lcom/tkay/expressad/exoplayer/i/e;
.super Lcom/tkay/expressad/exoplayer/i/h;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/i/e$a;
    }
.end annotation


# instance fields
.field private a:Lcom/tkay/expressad/exoplayer/i/e$a;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 41
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/i/h;-><init>()V

    return-void
.end method

.method private static a([Lcom/tkay/expressad/exoplayer/z;Lcom/tkay/expressad/exoplayer/h/ae;)I
    .locals 7

    .line 437
    array-length v0, p0

    const/4 v1, 0x0

    move v2, v1

    move v3, v2

    .line 439
    :goto_0
    array-length v4, p0

    if-ge v2, v4, :cond_3

    .line 440
    aget-object v4, p0, v2

    move v5, v1

    .line 441
    :goto_1
    iget v6, p1, Lcom/tkay/expressad/exoplayer/h/ae;->a:I

    if-ge v5, v6, :cond_2

    .line 442
    invoke-virtual {p1, v5}, Lcom/tkay/expressad/exoplayer/h/ae;->a(I)Lcom/tkay/expressad/exoplayer/m;

    move-result-object v6

    invoke-interface {v4, v6}, Lcom/tkay/expressad/exoplayer/z;->a(Lcom/tkay/expressad/exoplayer/m;)I

    move-result v6

    and-int/lit8 v6, v6, 0x7

    if-le v6, v3, :cond_1

    const/4 v0, 0x4

    if-ne v6, v0, :cond_0

    return v2

    :cond_0
    move v0, v2

    move v3, v6

    :cond_1
    add-int/lit8 v5, v5, 0x1

    goto :goto_1

    :cond_2
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_3
    return v0
.end method

.method private static a(Lcom/tkay/expressad/exoplayer/z;Lcom/tkay/expressad/exoplayer/h/ae;)[I
    .locals 3

    .line 469
    iget v0, p1, Lcom/tkay/expressad/exoplayer/h/ae;->a:I

    new-array v0, v0, [I

    const/4 v1, 0x0

    .line 470
    :goto_0
    iget v2, p1, Lcom/tkay/expressad/exoplayer/h/ae;->a:I

    if-ge v1, v2, :cond_0

    .line 471
    invoke-virtual {p1, v1}, Lcom/tkay/expressad/exoplayer/h/ae;->a(I)Lcom/tkay/expressad/exoplayer/m;

    move-result-object v2

    invoke-interface {p0, v2}, Lcom/tkay/expressad/exoplayer/z;->a(Lcom/tkay/expressad/exoplayer/m;)I

    move-result v2

    aput v2, v0, v1

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_0
    return-object v0
.end method

.method private static a([Lcom/tkay/expressad/exoplayer/z;)[I
    .locals 4

    .line 487
    array-length v0, p0

    new-array v1, v0, [I

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v0, :cond_0

    .line 489
    aget-object v3, p0, v2

    invoke-interface {v3}, Lcom/tkay/expressad/exoplayer/z;->m()I

    move-result v3

    aput v3, v1, v2

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_0
    return-object v1
.end method


# virtual methods
.method protected abstract a(Lcom/tkay/expressad/exoplayer/i/e$a;[[[I[I)Landroid/util/Pair;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/tkay/expressad/exoplayer/i/e$a;",
            "[[[I[I)",
            "Landroid/util/Pair<",
            "[",
            "Lcom/tkay/expressad/exoplayer/aa;",
            "[",
            "Lcom/tkay/expressad/exoplayer/i/f;",
            ">;"
        }
    .end annotation
.end method

.method public final a()Lcom/tkay/expressad/exoplayer/i/e$a;
    .locals 1

    .line 315
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/i/e;->a:Lcom/tkay/expressad/exoplayer/i/e$a;

    return-object v0
.end method

.method public final a([Lcom/tkay/expressad/exoplayer/z;Lcom/tkay/expressad/exoplayer/h/af;)Lcom/tkay/expressad/exoplayer/i/i;
    .locals 13

    .line 331
    array-length v0, p1

    add-int/lit8 v0, v0, 0x1

    new-array v0, v0, [I

    .line 332
    array-length v1, p1

    add-int/lit8 v1, v1, 0x1

    new-array v2, v1, [[Lcom/tkay/expressad/exoplayer/h/ae;

    .line 333
    array-length v3, p1

    add-int/lit8 v3, v3, 0x1

    new-array v3, v3, [[[I

    const/4 v4, 0x0

    move v5, v4

    :goto_0
    if-ge v5, v1, :cond_0

    .line 335
    iget v6, p2, Lcom/tkay/expressad/exoplayer/h/af;->b:I

    new-array v6, v6, [Lcom/tkay/expressad/exoplayer/h/ae;

    aput-object v6, v2, v5

    .line 336
    iget v6, p2, Lcom/tkay/expressad/exoplayer/h/af;->b:I

    new-array v6, v6, [[I

    aput-object v6, v3, v5

    add-int/lit8 v5, v5, 0x1

    goto :goto_0

    .line 1487
    :cond_0
    array-length v1, p1

    new-array v10, v1, [I

    move v5, v4

    :goto_1
    if-ge v5, v1, :cond_1

    .line 1489
    aget-object v6, p1, v5

    invoke-interface {v6}, Lcom/tkay/expressad/exoplayer/z;->m()I

    move-result v6

    aput v6, v10, v5

    add-int/lit8 v5, v5, 0x1

    goto :goto_1

    :cond_1
    move v1, v4

    .line 345
    :goto_2
    iget v5, p2, Lcom/tkay/expressad/exoplayer/h/af;->b:I

    if-ge v1, v5, :cond_8

    .line 346
    invoke-virtual {p2, v1}, Lcom/tkay/expressad/exoplayer/h/af;->a(I)Lcom/tkay/expressad/exoplayer/h/ae;

    move-result-object v5

    .line 2437
    array-length v6, p1

    move v7, v4

    move v8, v7

    .line 2439
    :goto_3
    array-length v9, p1

    if-ge v7, v9, :cond_5

    .line 2440
    aget-object v9, p1, v7

    move v11, v4

    .line 2441
    :goto_4
    iget v12, v5, Lcom/tkay/expressad/exoplayer/h/ae;->a:I

    if-ge v11, v12, :cond_4

    .line 2442
    invoke-virtual {v5, v11}, Lcom/tkay/expressad/exoplayer/h/ae;->a(I)Lcom/tkay/expressad/exoplayer/m;

    move-result-object v12

    invoke-interface {v9, v12}, Lcom/tkay/expressad/exoplayer/z;->a(Lcom/tkay/expressad/exoplayer/m;)I

    move-result v12

    and-int/lit8 v12, v12, 0x7

    if-le v12, v8, :cond_3

    const/4 v6, 0x4

    if-eq v12, v6, :cond_2

    move v6, v7

    move v8, v12

    goto :goto_5

    :cond_2
    move v6, v7

    goto :goto_6

    :cond_3
    :goto_5
    add-int/lit8 v11, v11, 0x1

    goto :goto_4

    :cond_4
    add-int/lit8 v7, v7, 0x1

    goto :goto_3

    .line 350
    :cond_5
    :goto_6
    array-length v7, p1

    if-ne v6, v7, :cond_6

    .line 351
    iget v7, v5, Lcom/tkay/expressad/exoplayer/h/ae;->a:I

    new-array v7, v7, [I

    goto :goto_8

    :cond_6
    aget-object v7, p1, v6

    .line 2469
    iget v8, v5, Lcom/tkay/expressad/exoplayer/h/ae;->a:I

    new-array v8, v8, [I

    move v9, v4

    .line 2470
    :goto_7
    iget v11, v5, Lcom/tkay/expressad/exoplayer/h/ae;->a:I

    if-ge v9, v11, :cond_7

    .line 2471
    invoke-virtual {v5, v9}, Lcom/tkay/expressad/exoplayer/h/ae;->a(I)Lcom/tkay/expressad/exoplayer/m;

    move-result-object v11

    invoke-interface {v7, v11}, Lcom/tkay/expressad/exoplayer/z;->a(Lcom/tkay/expressad/exoplayer/m;)I

    move-result v11

    aput v11, v8, v9

    add-int/lit8 v9, v9, 0x1

    goto :goto_7

    :cond_7
    move-object v7, v8

    .line 353
    :goto_8
    aget v8, v0, v6

    .line 354
    aget-object v9, v2, v6

    aput-object v5, v9, v8

    .line 355
    aget-object v5, v3, v6

    aput-object v7, v5, v8

    .line 356
    aget v5, v0, v6

    add-int/lit8 v5, v5, 0x1

    aput v5, v0, v6

    add-int/lit8 v1, v1, 0x1

    goto :goto_2

    .line 360
    :cond_8
    array-length p2, p1

    new-array v6, p2, [Lcom/tkay/expressad/exoplayer/h/af;

    .line 361
    array-length p2, p1

    new-array v5, p2, [I

    .line 362
    :goto_9
    array-length p2, p1

    if-ge v4, p2, :cond_9

    .line 363
    aget p2, v0, v4

    .line 364
    new-instance v1, Lcom/tkay/expressad/exoplayer/h/af;

    aget-object v7, v2, v4

    .line 366
    invoke-static {v7, p2}, Lcom/tkay/expressad/exoplayer/k/af;->a([Ljava/lang/Object;I)[Ljava/lang/Object;

    move-result-object v7

    check-cast v7, [Lcom/tkay/expressad/exoplayer/h/ae;

    invoke-direct {v1, v7}, Lcom/tkay/expressad/exoplayer/h/af;-><init>([Lcom/tkay/expressad/exoplayer/h/ae;)V

    aput-object v1, v6, v4

    .line 367
    aget-object v1, v3, v4

    .line 368
    invoke-static {v1, p2}, Lcom/tkay/expressad/exoplayer/k/af;->a([Ljava/lang/Object;I)[Ljava/lang/Object;

    move-result-object p2

    check-cast p2, [[I

    aput-object p2, v3, v4

    .line 369
    aget-object p2, p1, v4

    invoke-interface {p2}, Lcom/tkay/expressad/exoplayer/z;->a()I

    move-result p2

    aput p2, v5, v4

    add-int/lit8 v4, v4, 0x1

    goto :goto_9

    .line 373
    :cond_9
    array-length p2, p1

    aget p2, v0, p2

    .line 374
    new-instance v9, Lcom/tkay/expressad/exoplayer/h/af;

    array-length p1, p1

    aget-object p1, v2, p1

    .line 376
    invoke-static {p1, p2}, Lcom/tkay/expressad/exoplayer/k/af;->a([Ljava/lang/Object;I)[Ljava/lang/Object;

    move-result-object p1

    check-cast p1, [Lcom/tkay/expressad/exoplayer/h/ae;

    invoke-direct {v9, p1}, Lcom/tkay/expressad/exoplayer/h/af;-><init>([Lcom/tkay/expressad/exoplayer/h/ae;)V

    .line 380
    new-instance p1, Lcom/tkay/expressad/exoplayer/i/e$a;

    move-object v4, p1

    move-object v7, v10

    move-object v8, v3

    invoke-direct/range {v4 .. v9}, Lcom/tkay/expressad/exoplayer/i/e$a;-><init>([I[Lcom/tkay/expressad/exoplayer/h/af;[I[[[ILcom/tkay/expressad/exoplayer/h/af;)V

    .line 389
    invoke-virtual {p0, p1, v3, v10}, Lcom/tkay/expressad/exoplayer/i/e;->a(Lcom/tkay/expressad/exoplayer/i/e$a;[[[I[I)Landroid/util/Pair;

    move-result-object p2

    .line 391
    new-instance v0, Lcom/tkay/expressad/exoplayer/i/i;

    iget-object v1, p2, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast v1, [Lcom/tkay/expressad/exoplayer/aa;

    iget-object p2, p2, Landroid/util/Pair;->second:Ljava/lang/Object;

    check-cast p2, [Lcom/tkay/expressad/exoplayer/i/f;

    invoke-direct {v0, v1, p2, p1}, Lcom/tkay/expressad/exoplayer/i/i;-><init>([Lcom/tkay/expressad/exoplayer/aa;[Lcom/tkay/expressad/exoplayer/i/f;Ljava/lang/Object;)V

    return-object v0
.end method

.method public final a(Ljava/lang/Object;)V
    .locals 0

    .line 322
    check-cast p1, Lcom/tkay/expressad/exoplayer/i/e$a;

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/i/e;->a:Lcom/tkay/expressad/exoplayer/i/e$a;

    return-void
.end method
