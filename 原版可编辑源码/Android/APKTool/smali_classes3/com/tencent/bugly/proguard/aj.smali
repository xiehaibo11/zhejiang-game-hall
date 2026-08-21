.class public final Lcom/tencent/bugly/proguard/aj;
.super Ljava/lang/Object;
.source "BUGLY"

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field protected a:I

.field protected b:J

.field protected c:J

.field private d:I

.field private e:I

.field private final f:Landroid/content/Context;

.field private final g:I

.field private final h:[B

.field private final i:Lcom/tencent/bugly/proguard/aa;

.field private final j:Lcom/tencent/bugly/proguard/ac;

.field private final k:Lcom/tencent/bugly/proguard/af;

.field private final l:Lcom/tencent/bugly/proguard/ai;

.field private final m:I

.field private final n:Lcom/tencent/bugly/proguard/ah;

.field private final o:Lcom/tencent/bugly/proguard/ah;

.field private p:Ljava/lang/String;

.field private final q:Ljava/lang/String;

.field private final r:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private s:Z


# direct methods
.method public constructor <init>(Landroid/content/Context;II[BLjava/lang/String;Ljava/lang/String;Lcom/tencent/bugly/proguard/ah;IIZ)V
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "II[B",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Lcom/tencent/bugly/proguard/ah;",
            "IIZ)V"
        }
    .end annotation

    .line 104
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x2

    .line 43
    iput v0, p0, Lcom/tencent/bugly/proguard/aj;->d:I

    const/16 v0, 0x7530

    .line 45
    iput v0, p0, Lcom/tencent/bugly/proguard/aj;->e:I

    const/4 v0, 0x0

    .line 58
    iput-object v0, p0, Lcom/tencent/bugly/proguard/aj;->p:Ljava/lang/String;

    const/4 v1, 0x0

    .line 62
    iput v1, p0, Lcom/tencent/bugly/proguard/aj;->a:I

    const-wide/16 v2, 0x0

    .line 63
    iput-wide v2, p0, Lcom/tencent/bugly/proguard/aj;->b:J

    .line 64
    iput-wide v2, p0, Lcom/tencent/bugly/proguard/aj;->c:J

    .line 66
    iput-boolean v1, p0, Lcom/tencent/bugly/proguard/aj;->s:Z

    .line 105
    iput-object p1, p0, Lcom/tencent/bugly/proguard/aj;->f:Landroid/content/Context;

    .line 106
    invoke-static {p1}, Lcom/tencent/bugly/proguard/aa;->a(Landroid/content/Context;)Lcom/tencent/bugly/proguard/aa;

    move-result-object v1

    iput-object v1, p0, Lcom/tencent/bugly/proguard/aj;->i:Lcom/tencent/bugly/proguard/aa;

    .line 107
    iput-object p4, p0, Lcom/tencent/bugly/proguard/aj;->h:[B

    .line 108
    invoke-static {}, Lcom/tencent/bugly/proguard/ac;->a()Lcom/tencent/bugly/proguard/ac;

    move-result-object p4

    iput-object p4, p0, Lcom/tencent/bugly/proguard/aj;->j:Lcom/tencent/bugly/proguard/ac;

    .line 1069
    sget-object p4, Lcom/tencent/bugly/proguard/af;->a:Lcom/tencent/bugly/proguard/af;

    if-nez p4, :cond_0

    .line 1070
    new-instance p4, Lcom/tencent/bugly/proguard/af;

    invoke-direct {p4, p1}, Lcom/tencent/bugly/proguard/af;-><init>(Landroid/content/Context;)V

    sput-object p4, Lcom/tencent/bugly/proguard/af;->a:Lcom/tencent/bugly/proguard/af;

    .line 1072
    :cond_0
    sget-object p1, Lcom/tencent/bugly/proguard/af;->a:Lcom/tencent/bugly/proguard/af;

    .line 109
    iput-object p1, p0, Lcom/tencent/bugly/proguard/aj;->k:Lcom/tencent/bugly/proguard/af;

    .line 110
    invoke-static {}, Lcom/tencent/bugly/proguard/ai;->a()Lcom/tencent/bugly/proguard/ai;

    move-result-object p1

    iput-object p1, p0, Lcom/tencent/bugly/proguard/aj;->l:Lcom/tencent/bugly/proguard/ai;

    .line 111
    iput p2, p0, Lcom/tencent/bugly/proguard/aj;->m:I

    .line 112
    iput-object p5, p0, Lcom/tencent/bugly/proguard/aj;->p:Ljava/lang/String;

    .line 113
    iput-object p6, p0, Lcom/tencent/bugly/proguard/aj;->q:Ljava/lang/String;

    .line 114
    iput-object p7, p0, Lcom/tencent/bugly/proguard/aj;->n:Lcom/tencent/bugly/proguard/ah;

    .line 115
    iget-object p1, p0, Lcom/tencent/bugly/proguard/aj;->l:Lcom/tencent/bugly/proguard/ai;

    iget-object p1, p1, Lcom/tencent/bugly/proguard/ai;->a:Lcom/tencent/bugly/proguard/ah;

    iput-object p1, p0, Lcom/tencent/bugly/proguard/aj;->o:Lcom/tencent/bugly/proguard/ah;

    .line 116
    iput p3, p0, Lcom/tencent/bugly/proguard/aj;->g:I

    if-lez p8, :cond_1

    .line 118
    iput p8, p0, Lcom/tencent/bugly/proguard/aj;->d:I

    :cond_1
    if-lez p9, :cond_2

    .line 121
    iput p9, p0, Lcom/tencent/bugly/proguard/aj;->e:I

    .line 124
    :cond_2
    iput-boolean p10, p0, Lcom/tencent/bugly/proguard/aj;->s:Z

    .line 125
    iput-object v0, p0, Lcom/tencent/bugly/proguard/aj;->r:Ljava/util/Map;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;II[BLjava/lang/String;Ljava/lang/String;Lcom/tencent/bugly/proguard/ah;Z)V
    .locals 11

    const/4 v8, 0x2

    const/16 v9, 0x7530

    move-object v0, p0

    move-object v1, p1

    move v2, p2

    move v3, p3

    move-object v4, p4

    move-object/from16 v5, p5

    move-object/from16 v6, p6

    move-object/from16 v7, p7

    move/from16 v10, p8

    .line 84
    invoke-direct/range {v0 .. v10}, Lcom/tencent/bugly/proguard/aj;-><init>(Landroid/content/Context;II[BLjava/lang/String;Ljava/lang/String;Lcom/tencent/bugly/proguard/ah;IIZ)V

    return-void
.end method

.method private a(Ljava/util/Map;)Landroid/util/Pair;
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)",
            "Landroid/util/Pair<",
            "Ljava/lang/Boolean;",
            "Ljava/lang/Boolean;",
            ">;"
        }
    .end annotation

    const-string v0, "status"

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eqz p1, :cond_4

    .line 4453
    invoke-interface {p1}, Ljava/util/Map;->size()I

    move-result v3

    if-nez v3, :cond_0

    goto :goto_0

    .line 4457
    :cond_0
    invoke-interface {p1, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    const-string v4, "[Upload] Headers does not contain %s"

    if-nez v3, :cond_1

    .line 4458
    new-array v3, v1, [Ljava/lang/Object;

    aput-object v0, v3, v2

    invoke-static {v4, v3}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    goto :goto_1

    :cond_1
    const-string v3, "Bugly-Version"

    .line 4462
    invoke-interface {p1, v3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v5

    if-nez v5, :cond_2

    .line 4463
    new-array v5, v1, [Ljava/lang/Object;

    aput-object v3, v5, v2

    invoke-static {v4, v5}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    goto :goto_1

    .line 4466
    :cond_2
    invoke-interface {p1, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    const-string v4, "bugly"

    .line 4467
    invoke-virtual {v3, v4}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_3

    .line 4468
    new-array v4, v1, [Ljava/lang/Object;

    aput-object v3, v4, v2

    const-string v3, "[Upload] Bugly version is not valid: %s"

    invoke-static {v3, v4}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    goto :goto_1

    .line 4471
    :cond_3
    new-array v4, v1, [Ljava/lang/Object;

    aput-object v3, v4, v2

    const-string v3, "[Upload] Bugly version from headers is: %s"

    invoke-static {v3, v4}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    const/4 v3, 0x1

    goto :goto_2

    .line 4454
    :cond_4
    :goto_0
    new-array v3, v2, [Ljava/lang/Object;

    const-string v4, "[Upload] Headers is empty."

    invoke-static {v4, v3}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    :goto_1
    const/4 v3, 0x0

    :goto_2
    const/4 v4, 0x2

    if-nez v3, :cond_6

    .line 336
    new-array v0, v4, [Ljava/lang/Object;

    .line 338
    invoke-static {}, Landroid/os/Process;->myPid()I

    move-result v3

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v0, v2

    invoke-static {}, Landroid/os/Process;->myTid()I

    move-result v3

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v0, v1

    const-string v3, "[Upload] Headers from server is not valid, just try again (pid=%d | tid=%d)."

    .line 336
    invoke-static {v3, v0}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    const-string v0, "[Upload] Failed to upload for no status header."

    .line 339
    invoke-static {v0}, Lcom/tencent/bugly/proguard/aj;->a(Ljava/lang/String;)V

    if-eqz p1, :cond_5

    .line 342
    invoke-interface {p1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_3
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_5

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/Map$Entry;

    .line 343
    new-array v5, v4, [Ljava/lang/Object;

    invoke-interface {v3}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v6

    aput-object v6, v5, v2

    .line 344
    invoke-interface {v3}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v3

    aput-object v3, v5, v1

    const-string v3, "[key]: %s, [value]: %s"

    .line 343
    invoke-static {v3, v5}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    new-array v5, v2, [Ljava/lang/Object;

    invoke-static {v3, v5}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    goto :goto_3

    .line 347
    :cond_5
    new-array p1, v2, [Ljava/lang/Object;

    invoke-static {v0, p1}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 348
    new-instance p1, Landroid/util/Pair;

    sget-object v0, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    sget-object v1, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-direct {p1, v0, v1}, Landroid/util/Pair;-><init>(Ljava/lang/Object;Ljava/lang/Object;)V

    return-object p1

    :cond_6
    const/4 v3, -0x1

    .line 354
    :try_start_0
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    .line 353
    invoke-static {p1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v3

    const-string p1, "[Upload] Status from server is %d (pid=%d | tid=%d)."

    const/4 v0, 0x3

    .line 355
    new-array v0, v0, [Ljava/lang/Object;

    .line 356
    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    aput-object v5, v0, v2

    invoke-static {}, Landroid/os/Process;->myPid()I

    move-result v5

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    aput-object v5, v0, v1

    .line 357
    invoke-static {}, Landroid/os/Process;->myTid()I

    move-result v5

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    aput-object v5, v0, v4

    .line 355
    invoke-static {p1, v0}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z
    :try_end_0
    .catch Ljava/lang/Throwable; {:try_start_0 .. :try_end_0} :catch_0

    if-eqz v3, :cond_7

    .line 367
    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    const-string v0, "status of server is "

    invoke-virtual {v0, p1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, v2, v1, p1}, Lcom/tencent/bugly/proguard/aj;->a(ZILjava/lang/String;)V

    .line 369
    new-instance p1, Landroid/util/Pair;

    sget-object v0, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    invoke-direct {p1, v0, v0}, Landroid/util/Pair;-><init>(Ljava/lang/Object;Ljava/lang/Object;)V

    return-object p1

    .line 371
    :cond_7
    new-instance p1, Landroid/util/Pair;

    sget-object v0, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-direct {p1, v0, v0}, Landroid/util/Pair;-><init>(Ljava/lang/Object;Ljava/lang/Object;)V

    return-object p1

    .line 360
    :catch_0
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "[Upload] Failed to upload for format of status header is invalid: "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 362
    invoke-static {v3}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 360
    invoke-static {p1}, Lcom/tencent/bugly/proguard/aj;->a(Ljava/lang/String;)V

    .line 363
    new-instance p1, Landroid/util/Pair;

    sget-object v0, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    sget-object v1, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-direct {p1, v0, v1}, Landroid/util/Pair;-><init>(Ljava/lang/Object;Ljava/lang/Object;)V

    return-object p1
.end method

.method private a([BLjava/util/Map;)Landroid/util/Pair;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "([B",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)",
            "Landroid/util/Pair<",
            "Ljava/lang/Boolean;",
            "Ljava/lang/Boolean;",
            ">;"
        }
    .end annotation

    if-nez p1, :cond_0

    const-string p1, "Failed to upload for no response!"

    .line 305
    invoke-static {p1}, Lcom/tencent/bugly/proguard/aj;->a(Ljava/lang/String;)V

    .line 307
    new-instance p1, Landroid/util/Pair;

    sget-object p2, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    sget-object v0, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-direct {p1, p2, v0}, Landroid/util/Pair;-><init>(Ljava/lang/Object;Ljava/lang/Object;)V

    return-object p1

    :cond_0
    const/4 v0, 0x1

    .line 309
    new-array v1, v0, [Ljava/lang/Object;

    array-length v2, p1

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const/4 v3, 0x0

    aput-object v2, v1, v3

    const-string v2, "[Upload] Received %d bytes"

    invoke-static {v2, v1}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 311
    array-length p1, p1

    if-nez p1, :cond_2

    const-string p1, "response data from server is empty"

    .line 312
    invoke-direct {p0, v3, v0, p1}, Lcom/tencent/bugly/proguard/aj;->a(ZILjava/lang/String;)V

    if-eqz p2, :cond_1

    .line 316
    invoke-interface {p2}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result p2

    if-eqz p2, :cond_1

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Ljava/util/Map$Entry;

    const/4 v1, 0x2

    .line 317
    new-array v1, v1, [Ljava/lang/Object;

    .line 318
    invoke-interface {p2}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v2

    aput-object v2, v1, v3

    invoke-interface {p2}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object p2

    aput-object p2, v1, v0

    const-string p2, "[Upload] HTTP headers from server: key = %s, value = %s"

    .line 317
    invoke-static {p2, v1}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    goto :goto_0

    .line 322
    :cond_1
    new-instance p1, Landroid/util/Pair;

    sget-object p2, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    invoke-direct {p1, p2, p2}, Landroid/util/Pair;-><init>(Ljava/lang/Object;Ljava/lang/Object;)V

    return-object p1

    .line 324
    :cond_2
    new-instance p1, Landroid/util/Pair;

    sget-object p2, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-direct {p1, p2, p2}, Landroid/util/Pair;-><init>(Ljava/lang/Object;Ljava/lang/Object;)V

    return-object p1
.end method

.method private static a(Ljava/lang/String;)V
    .locals 4

    const/4 v0, 0x2

    .line 148
    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const/4 v3, 0x0

    aput-object v2, v0, v3

    aput-object p0, v0, v1

    const-string p0, "[Upload] Failed to upload(%d): %s"

    invoke-static {p0, v0}, Lcom/tencent/bugly/proguard/al;->e(Ljava/lang/String;[Ljava/lang/Object;)Z

    return-void
.end method

.method private a(ZILjava/lang/String;)V
    .locals 4

    .line 157
    iget v0, p0, Lcom/tencent/bugly/proguard/aj;->g:I

    const/16 v1, 0x276

    if-eq v0, v1, :cond_1

    const/16 v1, 0x280

    if-eq v0, v1, :cond_0

    const/16 v1, 0x33e

    if-eq v0, v1, :cond_1

    const/16 v1, 0x348

    if-eq v0, v1, :cond_0

    .line 167
    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_0
    const-string v0, "userinfo"

    goto :goto_0

    :cond_1
    const-string v0, "crash"

    :goto_0
    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eqz p1, :cond_2

    .line 170
    new-array p2, v1, [Ljava/lang/Object;

    aput-object v0, p2, v2

    const-string v0, "[Upload] Success: %s"

    invoke-static {v0, p2}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/String;[Ljava/lang/Object;)Z

    goto :goto_1

    :cond_2
    const/4 v3, 0x3

    .line 172
    new-array v3, v3, [Ljava/lang/Object;

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    aput-object p2, v3, v2

    aput-object v0, v3, v1

    const/4 p2, 0x2

    aput-object p3, v3, p2

    const-string p2, "[Upload] Failed to upload(%d) %s: %s"

    invoke-static {p2, v3}, Lcom/tencent/bugly/proguard/al;->e(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 175
    :goto_1
    iget-wide v0, p0, Lcom/tencent/bugly/proguard/aj;->b:J

    iget-wide v2, p0, Lcom/tencent/bugly/proguard/aj;->c:J

    add-long/2addr v0, v2

    const-wide/16 v2, 0x0

    cmp-long p2, v0, v2

    if-lez p2, :cond_3

    .line 176
    iget-object p2, p0, Lcom/tencent/bugly/proguard/aj;->l:Lcom/tencent/bugly/proguard/ai;

    iget-boolean v0, p0, Lcom/tencent/bugly/proguard/aj;->s:Z

    .line 177
    invoke-virtual {p2, v0}, Lcom/tencent/bugly/proguard/ai;->a(Z)J

    move-result-wide v0

    iget-wide v2, p0, Lcom/tencent/bugly/proguard/aj;->b:J

    add-long/2addr v0, v2

    iget-wide v2, p0, Lcom/tencent/bugly/proguard/aj;->c:J

    add-long/2addr v0, v2

    .line 178
    iget-object p2, p0, Lcom/tencent/bugly/proguard/aj;->l:Lcom/tencent/bugly/proguard/ai;

    iget-boolean v2, p0, Lcom/tencent/bugly/proguard/aj;->s:Z

    invoke-virtual {p2, v0, v1, v2}, Lcom/tencent/bugly/proguard/ai;->a(JZ)V

    .line 181
    :cond_3
    iget-object p2, p0, Lcom/tencent/bugly/proguard/aj;->n:Lcom/tencent/bugly/proguard/ah;

    if-eqz p2, :cond_4

    .line 182
    invoke-interface {p2, p1, p3}, Lcom/tencent/bugly/proguard/ah;->a(ZLjava/lang/String;)V

    .line 184
    :cond_4
    iget-object p2, p0, Lcom/tencent/bugly/proguard/aj;->o:Lcom/tencent/bugly/proguard/ah;

    if-eqz p2, :cond_5

    .line 185
    invoke-interface {p2, p1, p3}, Lcom/tencent/bugly/proguard/ah;->a(ZLjava/lang/String;)V

    :cond_5
    return-void
.end method

.method private static a(Lcom/tencent/bugly/proguard/br;Lcom/tencent/bugly/proguard/aa;Lcom/tencent/bugly/proguard/ac;)Z
    .locals 7

    const/4 v0, 0x0

    if-nez p0, :cond_0

    .line 195
    new-array p0, v0, [Ljava/lang/Object;

    const-string p1, "resp == null!"

    invoke-static {p1, p0}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    return v0

    .line 199
    :cond_0
    iget-byte v1, p0, Lcom/tencent/bugly/proguard/br;->a:B

    const/4 v2, 0x1

    if-eqz v1, :cond_1

    .line 200
    new-array p1, v2, [Ljava/lang/Object;

    iget-byte p0, p0, Lcom/tencent/bugly/proguard/br;->a:B

    invoke-static {p0}, Ljava/lang/Byte;->valueOf(B)Ljava/lang/Byte;

    move-result-object p0

    aput-object p0, p1, v0

    const-string p0, "resp result error %d"

    invoke-static {p0, p1}, Lcom/tencent/bugly/proguard/al;->e(Ljava/lang/String;[Ljava/lang/Object;)Z

    return v0

    .line 204
    :cond_1
    :try_start_0
    iget-object v1, p0, Lcom/tencent/bugly/proguard/br;->g:Ljava/lang/String;

    invoke-static {v1}, Lcom/tencent/bugly/proguard/ap;->b(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 205
    invoke-static {}, Lcom/tencent/bugly/proguard/aa;->b()Lcom/tencent/bugly/proguard/aa;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tencent/bugly/proguard/aa;->i()Ljava/lang/String;

    move-result-object v1

    iget-object v3, p0, Lcom/tencent/bugly/proguard/br;->g:Ljava/lang/String;

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 206
    invoke-static {}, Lcom/tencent/bugly/proguard/w;->a()Lcom/tencent/bugly/proguard/w;

    move-result-object v1

    sget v3, Lcom/tencent/bugly/proguard/ac;->a:I

    const-string v4, "device"

    iget-object v5, p0, Lcom/tencent/bugly/proguard/br;->g:Ljava/lang/String;

    const-string v6, "UTF-8"

    .line 207
    invoke-virtual {v5, v6}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object v5

    .line 206
    invoke-virtual {v1, v3, v4, v5, v2}, Lcom/tencent/bugly/proguard/w;->a(ILjava/lang/String;[BZ)Z

    .line 208
    iget-object v1, p0, Lcom/tencent/bugly/proguard/br;->g:Ljava/lang/String;

    invoke-virtual {p1, v1}, Lcom/tencent/bugly/proguard/aa;->d(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Throwable; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 211
    invoke-static {v1}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z

    .line 213
    :cond_2
    :goto_0
    iget-wide v3, p0, Lcom/tencent/bugly/proguard/br;->e:J

    iput-wide v3, p1, Lcom/tencent/bugly/proguard/aa;->m:J

    .line 216
    iget p1, p0, Lcom/tencent/bugly/proguard/br;->b:I

    const/16 v1, 0x1fe

    if-ne p1, v1, :cond_5

    .line 217
    iget-object p1, p0, Lcom/tencent/bugly/proguard/br;->c:[B

    if-nez p1, :cond_3

    .line 218
    new-array p1, v2, [Ljava/lang/Object;

    iget p0, p0, Lcom/tencent/bugly/proguard/br;->b:I

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    aput-object p0, p1, v0

    const-string p0, "[Upload] Strategy data is null. Response cmd: %d"

    invoke-static {p0, p1}, Lcom/tencent/bugly/proguard/al;->e(Ljava/lang/String;[Ljava/lang/Object;)Z

    return v0

    .line 221
    :cond_3
    iget-object p1, p0, Lcom/tencent/bugly/proguard/br;->c:[B

    const-class v1, Lcom/tencent/bugly/proguard/bt;

    .line 222
    invoke-static {p1, v1}, Lcom/tencent/bugly/proguard/ae;->a([BLjava/lang/Class;)Lcom/tencent/bugly/proguard/m;

    move-result-object p1

    check-cast p1, Lcom/tencent/bugly/proguard/bt;

    if-nez p1, :cond_4

    .line 224
    new-array p1, v2, [Ljava/lang/Object;

    iget p0, p0, Lcom/tencent/bugly/proguard/br;->b:I

    .line 225
    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    aput-object p0, p1, v0

    const-string p0, "[Upload] Failed to decode strategy from server. Response cmd: %d"

    .line 224
    invoke-static {p0, p1}, Lcom/tencent/bugly/proguard/al;->e(Ljava/lang/String;[Ljava/lang/Object;)Z

    return v0

    .line 228
    :cond_4
    invoke-virtual {p2, p1}, Lcom/tencent/bugly/proguard/ac;->a(Lcom/tencent/bugly/proguard/bt;)V

    :cond_5
    return v2
.end method

.method private static b(Ljava/lang/String;)Ljava/lang/String;
    .locals 4

    .line 441
    invoke-static {p0}, Lcom/tencent/bugly/proguard/ap;->b(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-object p0

    :cond_0
    :try_start_0
    const-string v0, "%s?aid=%s"

    const/4 v1, 0x2

    .line 445
    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    aput-object p0, v1, v2

    const/4 v2, 0x1

    invoke-static {}, Ljava/util/UUID;->randomUUID()Ljava/util/UUID;

    move-result-object v3

    invoke-virtual {v3}, Ljava/util/UUID;->toString()Ljava/lang/String;

    move-result-object v3

    aput-object v3, v1, v2

    invoke-static {v0, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Throwable; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception v0

    .line 447
    invoke-static {v0}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z

    return-object p0
.end method


# virtual methods
.method public final a(J)V
    .locals 2

    .line 432
    iget v0, p0, Lcom/tencent/bugly/proguard/aj;->a:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/tencent/bugly/proguard/aj;->a:I

    .line 433
    iget-wide v0, p0, Lcom/tencent/bugly/proguard/aj;->b:J

    add-long/2addr v0, p1

    iput-wide v0, p0, Lcom/tencent/bugly/proguard/aj;->b:J

    return-void
.end method

.method public final b(J)V
    .locals 2

    .line 437
    iget-wide v0, p0, Lcom/tencent/bugly/proguard/aj;->c:J

    add-long/2addr v0, p1

    iput-wide v0, p0, Lcom/tencent/bugly/proguard/aj;->c:J

    return-void
.end method

.method public final run()V
    .locals 11

    const/4 v0, 0x0

    .line 237
    :try_start_0
    iput v0, p0, Lcom/tencent/bugly/proguard/aj;->a:I

    const-wide/16 v1, 0x0

    .line 238
    iput-wide v1, p0, Lcom/tencent/bugly/proguard/aj;->b:J

    .line 239
    iput-wide v1, p0, Lcom/tencent/bugly/proguard/aj;->c:J

    .line 1508
    iget-object v1, p0, Lcom/tencent/bugly/proguard/aj;->f:Landroid/content/Context;

    invoke-static {v1}, Lcom/tencent/bugly/proguard/ab;->c(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    if-nez v1, :cond_0

    const-string v1, "network is not available"

    goto :goto_2

    .line 1512
    :cond_0
    iget-object v1, p0, Lcom/tencent/bugly/proguard/aj;->h:[B

    if-eqz v1, :cond_5

    iget-object v1, p0, Lcom/tencent/bugly/proguard/aj;->h:[B

    array-length v1, v1

    if-nez v1, :cond_1

    goto :goto_1

    .line 1516
    :cond_1
    iget-object v1, p0, Lcom/tencent/bugly/proguard/aj;->f:Landroid/content/Context;

    if-eqz v1, :cond_4

    iget-object v1, p0, Lcom/tencent/bugly/proguard/aj;->i:Lcom/tencent/bugly/proguard/aa;

    if-eqz v1, :cond_4

    iget-object v1, p0, Lcom/tencent/bugly/proguard/aj;->j:Lcom/tencent/bugly/proguard/ac;

    if-eqz v1, :cond_4

    iget-object v1, p0, Lcom/tencent/bugly/proguard/aj;->k:Lcom/tencent/bugly/proguard/af;

    if-nez v1, :cond_2

    goto :goto_0

    .line 1520
    :cond_2
    iget-object v1, p0, Lcom/tencent/bugly/proguard/aj;->j:Lcom/tencent/bugly/proguard/ac;

    invoke-virtual {v1}, Lcom/tencent/bugly/proguard/ac;->c()Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;

    move-result-object v1

    if-nez v1, :cond_3

    const-string v1, "illegal local strategy"

    goto :goto_2

    :cond_3
    const/4 v1, 0x0

    goto :goto_2

    :cond_4
    :goto_0
    const-string v1, "illegal access error"

    goto :goto_2

    :cond_5
    :goto_1
    const-string v1, "request package is empty!"

    :goto_2
    if-eqz v1, :cond_6

    .line 245
    invoke-direct {p0, v0, v0, v1}, Lcom/tencent/bugly/proguard/aj;->a(ZILjava/lang/String;)V

    return-void

    .line 250
    :cond_6
    iget-object v1, p0, Lcom/tencent/bugly/proguard/aj;->h:[B

    invoke-static {v1}, Lcom/tencent/bugly/proguard/ap;->a([B)[B

    move-result-object v1

    if-nez v1, :cond_7

    const-string v1, "failed to zip request body"

    .line 252
    invoke-direct {p0, v0, v0, v1}, Lcom/tencent/bugly/proguard/aj;->a(ZILjava/lang/String;)V

    return-void

    .line 2480
    :cond_7
    new-instance v2, Ljava/util/HashMap;

    const/16 v3, 0xa

    invoke-direct {v2, v3}, Ljava/util/HashMap;-><init>(I)V

    const-string v3, "tls"

    const-string v4, "1"

    .line 2481
    invoke-interface {v2, v3, v4}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v3, "prodId"

    .line 2482
    iget-object v4, p0, Lcom/tencent/bugly/proguard/aj;->i:Lcom/tencent/bugly/proguard/aa;

    invoke-virtual {v4}, Lcom/tencent/bugly/proguard/aa;->e()Ljava/lang/String;

    move-result-object v4

    invoke-interface {v2, v3, v4}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v3, "bundleId"

    .line 2483
    iget-object v4, p0, Lcom/tencent/bugly/proguard/aj;->i:Lcom/tencent/bugly/proguard/aa;

    iget-object v4, v4, Lcom/tencent/bugly/proguard/aa;->c:Ljava/lang/String;

    invoke-interface {v2, v3, v4}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v3, "appVer"

    .line 2484
    iget-object v4, p0, Lcom/tencent/bugly/proguard/aj;->i:Lcom/tencent/bugly/proguard/aa;

    iget-object v4, v4, Lcom/tencent/bugly/proguard/aa;->o:Ljava/lang/String;

    invoke-interface {v2, v3, v4}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2487
    iget-object v3, p0, Lcom/tencent/bugly/proguard/aj;->r:Ljava/util/Map;

    if-eqz v3, :cond_8

    .line 2488
    iget-object v3, p0, Lcom/tencent/bugly/proguard/aj;->r:Ljava/util/Map;

    invoke-interface {v2, v3}, Ljava/util/Map;->putAll(Ljava/util/Map;)V

    :cond_8
    const-string v3, "cmd"

    .line 2492
    iget v4, p0, Lcom/tencent/bugly/proguard/aj;->g:I

    invoke-static {v4}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object v4

    invoke-interface {v2, v3, v4}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v3, "platformId"

    const/4 v4, 0x1

    .line 2494
    invoke-static {v4}, Ljava/lang/Byte;->toString(B)Ljava/lang/String;

    move-result-object v5

    .line 2493
    invoke-interface {v2, v3, v5}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v3, "sdkVer"

    .line 2495
    iget-object v5, p0, Lcom/tencent/bugly/proguard/aj;->i:Lcom/tencent/bugly/proguard/aa;

    iget-object v5, v5, Lcom/tencent/bugly/proguard/aa;->h:Ljava/lang/String;

    invoke-interface {v2, v3, v5}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v3, "strategylastUpdateTime"

    .line 2496
    iget-object v5, p0, Lcom/tencent/bugly/proguard/aj;->j:Lcom/tencent/bugly/proguard/ac;

    .line 2497
    invoke-virtual {v5}, Lcom/tencent/bugly/proguard/ac;->c()Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;

    move-result-object v5

    iget-wide v5, v5, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->o:J

    invoke-static {v5, v6}, Ljava/lang/Long;->toString(J)Ljava/lang/String;

    move-result-object v5

    .line 2496
    invoke-interface {v2, v3, v5}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 3132
    iget-object v3, p0, Lcom/tencent/bugly/proguard/aj;->l:Lcom/tencent/bugly/proguard/ai;

    iget v5, p0, Lcom/tencent/bugly/proguard/aj;->m:I

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v6

    invoke-virtual {v3, v5, v6, v7}, Lcom/tencent/bugly/proguard/ai;->a(IJ)V

    .line 259
    iget-object v3, p0, Lcom/tencent/bugly/proguard/aj;->p:Ljava/lang/String;

    .line 261
    iget-object v5, p0, Lcom/tencent/bugly/proguard/aj;->j:Lcom/tencent/bugly/proguard/ac;

    invoke-virtual {v5}, Lcom/tencent/bugly/proguard/ac;->c()Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;

    move-object v6, v3

    const/4 v3, 0x0

    const/4 v5, 0x0

    :goto_3
    add-int/lit8 v7, v3, 0x1

    .line 262
    iget v8, p0, Lcom/tencent/bugly/proguard/aj;->d:I

    if-ge v3, v8, :cond_12

    if-le v7, v4, :cond_9

    const-string v3, "[Upload] Failed to upload last time, wait and try(%d) again."

    .line 264
    new-array v5, v4, [Ljava/lang/Object;

    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    aput-object v8, v5, v0

    invoke-static {v3, v5}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 265
    iget v3, p0, Lcom/tencent/bugly/proguard/aj;->e:I

    int-to-long v8, v3

    invoke-static {v8, v9}, Lcom/tencent/bugly/proguard/ap;->b(J)V

    .line 266
    iget v3, p0, Lcom/tencent/bugly/proguard/aj;->d:I

    if-ne v7, v3, :cond_9

    const-string v3, "[Upload] Use the back-up url at the last time: %s"

    .line 267
    new-array v5, v4, [Ljava/lang/Object;

    iget-object v6, p0, Lcom/tencent/bugly/proguard/aj;->q:Ljava/lang/String;

    aput-object v6, v5, v0

    invoke-static {v3, v5}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 269
    iget-object v6, p0, Lcom/tencent/bugly/proguard/aj;->q:Ljava/lang/String;

    :cond_9
    const-string v3, "[Upload] Send %d bytes"

    .line 273
    new-array v5, v4, [Ljava/lang/Object;

    array-length v8, v1

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    aput-object v8, v5, v0

    invoke-static {v3, v5}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 274
    invoke-static {v6}, Lcom/tencent/bugly/proguard/aj;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    const-string v3, "[Upload] Upload to %s with cmd %d (pid=%d | tid=%d)."

    const/4 v5, 0x4

    .line 275
    new-array v5, v5, [Ljava/lang/Object;

    aput-object v6, v5, v0

    iget v8, p0, Lcom/tencent/bugly/proguard/aj;->g:I

    .line 276
    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    aput-object v8, v5, v4

    invoke-static {}, Landroid/os/Process;->myPid()I

    move-result v8

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    const/4 v9, 0x2

    aput-object v8, v5, v9

    const/4 v8, 0x3

    invoke-static {}, Landroid/os/Process;->myTid()I

    move-result v10

    invoke-static {v10}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    aput-object v10, v5, v8

    .line 275
    invoke-static {v3, v5}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 277
    iget-object v3, p0, Lcom/tencent/bugly/proguard/aj;->k:Lcom/tencent/bugly/proguard/af;

    invoke-virtual {v3, v6, v1, p0, v2}, Lcom/tencent/bugly/proguard/af;->a(Ljava/lang/String;[BLcom/tencent/bugly/proguard/aj;Ljava/util/Map;)[B

    move-result-object v3

    .line 278
    iget-object v5, p0, Lcom/tencent/bugly/proguard/aj;->k:Lcom/tencent/bugly/proguard/af;

    iget-object v5, v5, Lcom/tencent/bugly/proguard/af;->c:Ljava/util/Map;

    .line 3414
    invoke-direct {p0, v3, v5}, Lcom/tencent/bugly/proguard/aj;->a([BLjava/util/Map;)Landroid/util/Pair;

    move-result-object v8

    .line 3415
    iget-object v10, v8, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast v10, Ljava/lang/Boolean;

    invoke-virtual {v10}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v10

    if-nez v10, :cond_a

    .line 3416
    iget-object v3, v8, Landroid/util/Pair;->second:Ljava/lang/Object;

    check-cast v3, Ljava/lang/Boolean;

    invoke-virtual {v3}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v3

    goto/16 :goto_6

    .line 3419
    :cond_a
    invoke-direct {p0, v5}, Lcom/tencent/bugly/proguard/aj;->a(Ljava/util/Map;)Landroid/util/Pair;

    move-result-object v5

    .line 3420
    iget-object v8, v5, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast v8, Ljava/lang/Boolean;

    invoke-virtual {v8}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v8

    if-nez v8, :cond_b

    .line 3421
    iget-object v3, v5, Landroid/util/Pair;->second:Ljava/lang/Object;

    check-cast v3, Ljava/lang/Boolean;

    invoke-virtual {v3}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v3

    goto/16 :goto_6

    .line 4382
    :cond_b
    invoke-static {v3}, Lcom/tencent/bugly/proguard/ap;->b([B)[B

    move-result-object v5

    if-eqz v5, :cond_c

    move-object v3, v5

    .line 4387
    :cond_c
    invoke-static {v3}, Lcom/tencent/bugly/proguard/ae;->a([B)Lcom/tencent/bugly/proguard/br;

    move-result-object v3

    if-nez v3, :cond_d

    const-string v3, "failed to decode response package"

    .line 4389
    invoke-direct {p0, v0, v4, v3}, Lcom/tencent/bugly/proguard/aj;->a(ZILjava/lang/String;)V

    .line 4391
    new-instance v3, Landroid/util/Pair;

    sget-object v5, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    invoke-direct {v3, v5, v5}, Landroid/util/Pair;-><init>(Ljava/lang/Object;Ljava/lang/Object;)V

    goto :goto_5

    :cond_d
    const-string v5, "[Upload] Response cmd is: %d, length of sBuffer is: %d"

    .line 4394
    new-array v8, v9, [Ljava/lang/Object;

    iget v10, v3, Lcom/tencent/bugly/proguard/br;->b:I

    invoke-static {v10}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    aput-object v10, v8, v0

    iget-object v10, v3, Lcom/tencent/bugly/proguard/br;->c:[B

    if-nez v10, :cond_e

    const/4 v10, 0x0

    goto :goto_4

    :cond_e
    iget-object v10, v3, Lcom/tencent/bugly/proguard/br;->c:[B

    array-length v10, v10

    .line 4395
    :goto_4
    invoke-static {v10}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    aput-object v10, v8, v4

    .line 4394
    invoke-static {v5, v8}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 4397
    iget-object v5, p0, Lcom/tencent/bugly/proguard/aj;->i:Lcom/tencent/bugly/proguard/aa;

    iget-object v8, p0, Lcom/tencent/bugly/proguard/aj;->j:Lcom/tencent/bugly/proguard/ac;

    invoke-static {v3, v5, v8}, Lcom/tencent/bugly/proguard/aj;->a(Lcom/tencent/bugly/proguard/br;Lcom/tencent/bugly/proguard/aa;Lcom/tencent/bugly/proguard/ac;)Z

    move-result v3

    if-nez v3, :cond_f

    const-string v3, "failed to process response package"

    .line 4398
    invoke-direct {p0, v0, v9, v3}, Lcom/tencent/bugly/proguard/aj;->a(ZILjava/lang/String;)V

    .line 4400
    new-instance v3, Landroid/util/Pair;

    sget-object v5, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    invoke-direct {v3, v5, v5}, Landroid/util/Pair;-><init>(Ljava/lang/Object;Ljava/lang/Object;)V

    goto :goto_5

    :cond_f
    const-string v3, "successfully uploaded"

    .line 4402
    invoke-direct {p0, v4, v9, v3}, Lcom/tencent/bugly/proguard/aj;->a(ZILjava/lang/String;)V

    .line 4403
    new-instance v3, Landroid/util/Pair;

    sget-object v5, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-direct {v3, v5, v5}, Landroid/util/Pair;-><init>(Ljava/lang/Object;Ljava/lang/Object;)V

    .line 3425
    :goto_5
    iget-object v5, v3, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast v5, Ljava/lang/Boolean;

    invoke-virtual {v5}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v5

    if-nez v5, :cond_10

    .line 3426
    iget-object v3, v3, Landroid/util/Pair;->second:Ljava/lang/Object;

    check-cast v3, Ljava/lang/Boolean;

    invoke-virtual {v3}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v3

    goto :goto_6

    :cond_10
    const/4 v3, 0x0

    :goto_6
    if-eqz v3, :cond_11

    move v3, v7

    const/4 v5, 0x1

    goto/16 :goto_3

    :cond_11
    return-void

    :cond_12
    const-string v1, "failed after many attempts"

    .line 289
    invoke-direct {p0, v0, v5, v1}, Lcom/tencent/bugly/proguard/aj;->a(ZILjava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Throwable; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 291
    invoke-static {v0}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z

    move-result v1

    if-nez v1, :cond_13

    .line 292
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_13
    return-void
.end method
