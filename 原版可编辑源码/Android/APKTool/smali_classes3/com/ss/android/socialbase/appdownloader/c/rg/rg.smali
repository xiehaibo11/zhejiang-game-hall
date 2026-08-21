.class Lcom/ss/android/socialbase/appdownloader/c/rg/rg;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/socialbase/appdownloader/c/rg/rz;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/socialbase/appdownloader/c/rg/rg$rg;
    }
.end annotation


# instance fields
.field private b:I

.field private bm:I

.field private c:Lcom/ss/android/socialbase/appdownloader/c/rg/rg$rg;

.field private df:Lcom/ss/android/socialbase/appdownloader/c/rg/pt;

.field private f:I

.field private fw:Z

.field private hq:[I

.field private oh:I

.field private pp:[I

.field private pt:Lcom/ss/android/socialbase/appdownloader/c/rg/c;

.field private q:Z

.field private rz:I

.field private ux:I

.field private v:I


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 25
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 11
    iput-boolean v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->q:Z

    .line 14
    new-instance v0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg$rg;

    invoke-direct {v0}, Lcom/ss/android/socialbase/appdownloader/c/rg/rg$rg;-><init>()V

    iput-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->c:Lcom/ss/android/socialbase/appdownloader/c/rg/rg$rg;

    .line 26
    invoke-direct {p0}, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->fw()V

    return-void
.end method

.method private final fw()V
    .locals 2

    const/4 v0, -0x1

    .line 421
    iput v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->ux:I

    .line 422
    iput v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->rz:I

    .line 423
    iput v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->bm:I

    .line 424
    iput v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->b:I

    const/4 v1, 0x0

    .line 425
    iput-object v1, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->hq:[I

    .line 426
    iput v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->oh:I

    .line 427
    iput v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->f:I

    .line 428
    iput v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->v:I

    return-void
.end method

.method private final pp(I)I
    .locals 3

    .line 387
    iget v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->ux:I

    const/4 v1, 0x2

    if-ne v0, v1, :cond_1

    mul-int/lit8 v0, p1, 0x5

    .line 391
    iget-object v1, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->hq:[I

    array-length v1, v1

    if-ge v0, v1, :cond_0

    return v0

    .line 392
    :cond_0
    new-instance v0, Ljava/lang/IndexOutOfBoundsException;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Invalid attribute index ("

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, ")."

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {v0, p1}, Ljava/lang/IndexOutOfBoundsException;-><init>(Ljava/lang/String;)V

    throw v0

    .line 388
    :cond_1
    new-instance p1, Ljava/lang/IndexOutOfBoundsException;

    const-string v0, "Current event is not START_TAG."

    invoke-direct {p1, v0}, Ljava/lang/IndexOutOfBoundsException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method private final ux()V
    .locals 10
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 432
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->pt:Lcom/ss/android/socialbase/appdownloader/c/rg/c;

    const/4 v1, 0x1

    if-nez v0, :cond_0

    .line 433
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->df:Lcom/ss/android/socialbase/appdownloader/c/rg/pt;

    const v2, 0x80003

    invoke-static {v0, v2}, Lcom/ss/android/socialbase/appdownloader/c/rg/df;->rg(Lcom/ss/android/socialbase/appdownloader/c/rg/pt;I)V

    .line 434
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->df:Lcom/ss/android/socialbase/appdownloader/c/rg/pt;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/appdownloader/c/rg/pt;->q()V

    .line 435
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->df:Lcom/ss/android/socialbase/appdownloader/c/rg/pt;

    invoke-static {v0}, Lcom/ss/android/socialbase/appdownloader/c/rg/c;->rg(Lcom/ss/android/socialbase/appdownloader/c/rg/pt;)Lcom/ss/android/socialbase/appdownloader/c/rg/c;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->pt:Lcom/ss/android/socialbase/appdownloader/c/rg/c;

    .line 436
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->c:Lcom/ss/android/socialbase/appdownloader/c/rg/rg$rg;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/appdownloader/c/rg/rg$rg;->pp()V

    .line 437
    iput-boolean v1, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->q:Z

    .line 440
    :cond_0
    iget v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->ux:I

    if-eq v0, v1, :cond_f

    .line 442
    invoke-direct {p0}, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->fw()V

    .line 445
    :goto_0
    iget-boolean v2, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->fw:Z

    const/4 v3, 0x0

    if-eqz v2, :cond_1

    .line 446
    iput-boolean v3, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->fw:Z

    .line 447
    iget-object v2, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->c:Lcom/ss/android/socialbase/appdownloader/c/rg/rg$rg;

    invoke-virtual {v2}, Lcom/ss/android/socialbase/appdownloader/c/rg/rg$rg;->c()V

    :cond_1
    const/4 v2, 0x3

    if-ne v0, v2, :cond_2

    .line 450
    iget-object v4, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->c:Lcom/ss/android/socialbase/appdownloader/c/rg/rg$rg;

    invoke-virtual {v4}, Lcom/ss/android/socialbase/appdownloader/c/rg/rg$rg;->pt()I

    move-result v4

    if-ne v4, v1, :cond_2

    iget-object v4, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->c:Lcom/ss/android/socialbase/appdownloader/c/rg/rg$rg;

    invoke-virtual {v4}, Lcom/ss/android/socialbase/appdownloader/c/rg/rg$rg;->df()I

    move-result v4

    if-nez v4, :cond_2

    .line 451
    iput v1, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->ux:I

    goto/16 :goto_3

    :cond_2
    const v4, 0x100102

    if-nez v0, :cond_3

    move v5, v4

    goto :goto_1

    .line 457
    :cond_3
    iget-object v5, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->df:Lcom/ss/android/socialbase/appdownloader/c/rg/pt;

    invoke-virtual {v5}, Lcom/ss/android/socialbase/appdownloader/c/rg/pt;->df()I

    move-result v5

    :goto_1
    const v6, 0x80180

    const/4 v7, 0x2

    const-string v8, ")."

    if-ne v5, v6, :cond_5

    .line 462
    iget-object v2, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->df:Lcom/ss/android/socialbase/appdownloader/c/rg/pt;

    invoke-virtual {v2}, Lcom/ss/android/socialbase/appdownloader/c/rg/pt;->df()I

    move-result v2

    const/16 v3, 0x8

    if-lt v2, v3, :cond_4

    .line 463
    rem-int/lit8 v3, v2, 0x4

    if-nez v3, :cond_4

    .line 464
    iget-object v3, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->df:Lcom/ss/android/socialbase/appdownloader/c/rg/pt;

    div-int/lit8 v2, v2, 0x4

    sub-int/2addr v2, v7

    invoke-virtual {v3, v2}, Lcom/ss/android/socialbase/appdownloader/c/rg/pt;->df(I)[I

    move-result-object v2

    iput-object v2, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->pp:[I

    goto :goto_0

    .line 468
    :cond_4
    new-instance v0, Ljava/io/IOException;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Invalid resource ids size ("

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    throw v0

    :cond_5
    const v6, 0x100100

    if-lt v5, v6, :cond_e

    const v9, 0x100104

    if-gt v5, v9, :cond_e

    if-ne v5, v4, :cond_6

    const/4 v8, -0x1

    if-ne v0, v8, :cond_6

    .line 476
    iput v3, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->ux:I

    goto/16 :goto_3

    .line 478
    :cond_6
    iget-object v3, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->df:Lcom/ss/android/socialbase/appdownloader/c/rg/pt;

    invoke-virtual {v3}, Lcom/ss/android/socialbase/appdownloader/c/rg/pt;->q()V

    .line 479
    iget-object v3, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->df:Lcom/ss/android/socialbase/appdownloader/c/rg/pt;

    invoke-virtual {v3}, Lcom/ss/android/socialbase/appdownloader/c/rg/pt;->df()I

    move-result v3

    .line 480
    iget-object v8, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->df:Lcom/ss/android/socialbase/appdownloader/c/rg/pt;

    invoke-virtual {v8}, Lcom/ss/android/socialbase/appdownloader/c/rg/pt;->q()V

    if-eq v5, v6, :cond_c

    const v8, 0x100101

    if-ne v5, v8, :cond_7

    goto/16 :goto_4

    .line 496
    :cond_7
    iput v3, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->rz:I

    if-ne v5, v4, :cond_9

    .line 498
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->df:Lcom/ss/android/socialbase/appdownloader/c/rg/pt;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/appdownloader/c/rg/pt;->df()I

    move-result v0

    iput v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->b:I

    .line 499
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->df:Lcom/ss/android/socialbase/appdownloader/c/rg/pt;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/appdownloader/c/rg/pt;->df()I

    move-result v0

    iput v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->bm:I

    .line 500
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->df:Lcom/ss/android/socialbase/appdownloader/c/rg/pt;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/appdownloader/c/rg/pt;->q()V

    .line 501
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->df:Lcom/ss/android/socialbase/appdownloader/c/rg/pt;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/appdownloader/c/rg/pt;->df()I

    move-result v0

    ushr-int/lit8 v3, v0, 0x10

    sub-int/2addr v3, v1

    .line 502
    iput v3, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->oh:I

    const v3, 0xffff

    and-int/2addr v0, v3

    .line 504
    iget-object v4, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->df:Lcom/ss/android/socialbase/appdownloader/c/rg/pt;

    invoke-virtual {v4}, Lcom/ss/android/socialbase/appdownloader/c/rg/pt;->df()I

    move-result v4

    iput v4, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->f:I

    ushr-int/lit8 v5, v4, 0x10

    sub-int/2addr v5, v1

    .line 505
    iput v5, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->v:I

    and-int/2addr v3, v4

    sub-int/2addr v3, v1

    .line 506
    iput v3, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->f:I

    .line 507
    iget-object v1, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->df:Lcom/ss/android/socialbase/appdownloader/c/rg/pt;

    mul-int/lit8 v0, v0, 0x5

    invoke-virtual {v1, v0}, Lcom/ss/android/socialbase/appdownloader/c/rg/pt;->df(I)[I

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->hq:[I

    .line 509
    :goto_2
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->hq:[I

    array-length v1, v0

    if-ge v2, v1, :cond_8

    .line 510
    aget v1, v0, v2

    ushr-int/lit8 v1, v1, 0x18

    aput v1, v0, v2

    add-int/lit8 v2, v2, 0x5

    goto :goto_2

    .line 513
    :cond_8
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->c:Lcom/ss/android/socialbase/appdownloader/c/rg/rg$rg;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/appdownloader/c/rg/rg$rg;->pp()V

    .line 514
    iput v7, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->ux:I

    goto :goto_3

    :cond_9
    const v3, 0x100103

    if-ne v5, v3, :cond_a

    .line 516
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->df:Lcom/ss/android/socialbase/appdownloader/c/rg/pt;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/appdownloader/c/rg/pt;->df()I

    move-result v0

    iput v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->b:I

    .line 517
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->df:Lcom/ss/android/socialbase/appdownloader/c/rg/pt;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/appdownloader/c/rg/pt;->df()I

    move-result v0

    iput v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->bm:I

    .line 518
    iput v2, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->ux:I

    .line 519
    iput-boolean v1, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->fw:Z

    goto :goto_3

    :cond_a
    if-eq v5, v9, :cond_b

    goto/16 :goto_0

    .line 525
    :cond_b
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->df:Lcom/ss/android/socialbase/appdownloader/c/rg/pt;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/appdownloader/c/rg/pt;->df()I

    move-result v0

    iput v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->bm:I

    .line 526
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->df:Lcom/ss/android/socialbase/appdownloader/c/rg/pt;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/appdownloader/c/rg/pt;->q()V

    .line 527
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->df:Lcom/ss/android/socialbase/appdownloader/c/rg/pt;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/appdownloader/c/rg/pt;->q()V

    const/4 v0, 0x4

    .line 528
    iput v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->ux:I

    :goto_3
    return-void

    :cond_c
    :goto_4
    if-ne v5, v6, :cond_d

    .line 485
    iget-object v2, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->df:Lcom/ss/android/socialbase/appdownloader/c/rg/pt;

    invoke-virtual {v2}, Lcom/ss/android/socialbase/appdownloader/c/rg/pt;->df()I

    move-result v2

    .line 486
    iget-object v3, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->df:Lcom/ss/android/socialbase/appdownloader/c/rg/pt;

    invoke-virtual {v3}, Lcom/ss/android/socialbase/appdownloader/c/rg/pt;->df()I

    move-result v3

    .line 487
    iget-object v4, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->c:Lcom/ss/android/socialbase/appdownloader/c/rg/rg$rg;

    invoke-virtual {v4, v2, v3}, Lcom/ss/android/socialbase/appdownloader/c/rg/rg$rg;->rg(II)V

    goto/16 :goto_0

    .line 489
    :cond_d
    iget-object v2, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->df:Lcom/ss/android/socialbase/appdownloader/c/rg/pt;

    invoke-virtual {v2}, Lcom/ss/android/socialbase/appdownloader/c/rg/pt;->q()V

    .line 490
    iget-object v2, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->df:Lcom/ss/android/socialbase/appdownloader/c/rg/pt;

    invoke-virtual {v2}, Lcom/ss/android/socialbase/appdownloader/c/rg/pt;->q()V

    .line 491
    iget-object v2, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->c:Lcom/ss/android/socialbase/appdownloader/c/rg/rg$rg;

    invoke-virtual {v2}, Lcom/ss/android/socialbase/appdownloader/c/rg/rg$rg;->q()Z

    goto/16 :goto_0

    .line 472
    :cond_e
    new-instance v0, Ljava/io/IOException;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Invalid chunk type ("

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    throw v0

    :cond_f
    return-void
.end method


# virtual methods
.method public c()I
    .locals 1

    const/4 v0, -0x1

    return v0
.end method

.method public df()I
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/ss/android/socialbase/appdownloader/c/rg/ux;,
            Ljava/io/IOException;
        }
    .end annotation

    .line 50
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->df:Lcom/ss/android/socialbase/appdownloader/c/rg/pt;

    if-eqz v0, :cond_0

    .line 54
    :try_start_0
    invoke-direct {p0}, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->ux()V

    .line 55
    iget v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->ux:I
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    return v0

    :catch_0
    move-exception v0

    .line 57
    invoke-virtual {p0}, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->rg()V

    .line 58
    throw v0

    .line 51
    :cond_0
    new-instance v0, Lcom/ss/android/socialbase/appdownloader/c/rg/ux;

    const/4 v1, 0x0

    check-cast v1, Ljava/lang/Throwable;

    const-string v2, "Parser is not opened."

    invoke-direct {v0, v2, p0, v1}, Lcom/ss/android/socialbase/appdownloader/c/rg/ux;-><init>(Ljava/lang/String;Lcom/ss/android/socialbase/appdownloader/c/rg/fw;Ljava/lang/Throwable;)V

    throw v0
.end method

.method public df(I)I
    .locals 1

    .line 236
    invoke-direct {p0, p1}, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->pp(I)I

    move-result p1

    .line 237
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->hq:[I

    add-int/lit8 p1, p1, 0x3

    aget p1, v0, p1

    return p1
.end method

.method public pp()I
    .locals 2

    .line 207
    iget v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->ux:I

    const/4 v1, 0x2

    if-eq v0, v1, :cond_0

    const/4 v0, -0x1

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->hq:[I

    array-length v0, v0

    div-int/lit8 v0, v0, 0x5

    :goto_0
    return v0
.end method

.method public pt()Ljava/lang/String;
    .locals 2

    .line 150
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "XML line #"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->q()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public pt(I)Ljava/lang/String;
    .locals 3

    .line 246
    invoke-direct {p0, p1}, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->pp(I)I

    move-result p1

    .line 247
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->hq:[I

    add-int/lit8 v1, p1, 0x3

    aget v1, v0, v1

    const/4 v2, 0x3

    if-ne v1, v2, :cond_0

    add-int/lit8 p1, p1, 0x2

    .line 249
    aget p1, v0, p1

    .line 250
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->pt:Lcom/ss/android/socialbase/appdownloader/c/rg/c;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/appdownloader/c/rg/c;->rg(I)Ljava/lang/String;

    move-result-object p1

    return-object p1

    :cond_0
    add-int/lit8 p1, p1, 0x4

    .line 252
    aget p1, v0, p1

    const-string p1, ""

    return-object p1
.end method

.method public q()I
    .locals 1

    .line 116
    iget v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->rz:I

    return v0
.end method

.method public q(I)I
    .locals 1

    .line 241
    invoke-direct {p0, p1}, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->pp(I)I

    move-result p1

    .line 242
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->hq:[I

    add-int/lit8 p1, p1, 0x4

    aget p1, v0, p1

    return p1
.end method

.method public rg(I)Ljava/lang/String;
    .locals 1

    .line 224
    invoke-direct {p0, p1}, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->pp(I)I

    move-result p1

    .line 225
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->hq:[I

    add-int/lit8 p1, p1, 0x1

    aget p1, v0, p1

    const/4 v0, -0x1

    if-ne p1, v0, :cond_0

    const-string p1, ""

    goto :goto_0

    .line 226
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->pt:Lcom/ss/android/socialbase/appdownloader/c/rg/c;

    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/appdownloader/c/rg/c;->rg(I)Ljava/lang/String;

    move-result-object p1

    :goto_0
    return-object p1
.end method

.method public rg()V
    .locals 1

    .line 38
    iget-boolean v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->q:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    .line 39
    iput-boolean v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->q:Z

    .line 40
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->df:Lcom/ss/android/socialbase/appdownloader/c/rg/pt;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/appdownloader/c/rg/pt;->rg()V

    const/4 v0, 0x0

    .line 41
    iput-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->df:Lcom/ss/android/socialbase/appdownloader/c/rg/pt;

    .line 42
    iput-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->pt:Lcom/ss/android/socialbase/appdownloader/c/rg/c;

    .line 43
    iput-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->pp:[I

    .line 44
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->c:Lcom/ss/android/socialbase/appdownloader/c/rg/rg$rg;

    invoke-virtual {v0}, Lcom/ss/android/socialbase/appdownloader/c/rg/rg$rg;->rg()V

    .line 45
    invoke-direct {p0}, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->fw()V

    :cond_0
    return-void
.end method

.method public rg(Ljava/io/InputStream;)V
    .locals 2

    .line 30
    invoke-virtual {p0}, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->rg()V

    if-eqz p1, :cond_0

    .line 32
    new-instance v0, Lcom/ss/android/socialbase/appdownloader/c/rg/pt;

    const/4 v1, 0x0

    invoke-direct {v0, p1, v1}, Lcom/ss/android/socialbase/appdownloader/c/rg/pt;-><init>(Ljava/io/InputStream;Z)V

    iput-object v0, p0, Lcom/ss/android/socialbase/appdownloader/c/rg/rg;->df:Lcom/ss/android/socialbase/appdownloader/c/rg/pt;

    :cond_0
    return-void
.end method
