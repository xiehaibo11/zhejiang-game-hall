.class public final Lcom/tkay/expressad/exoplayer/d;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/p;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/d$a;
    }
.end annotation


# static fields
.field public static final a:I = 0x3a98

.field public static final b:I = 0xc350

.field public static final c:I = 0x9c4

.field public static final d:I = 0x1388

.field public static final e:I = -0x1

.field public static final f:Z = true


# instance fields
.field private final g:Lcom/tkay/expressad/exoplayer/j/l;

.field private final h:J

.field private final i:J

.field private final j:J

.field private final k:J

.field private final l:I

.field private final m:Z

.field private final n:Lcom/tkay/expressad/exoplayer/k/v;

.field private o:I

.field private p:Z


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 190
    new-instance v0, Lcom/tkay/expressad/exoplayer/j/l;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/tkay/expressad/exoplayer/j/l;-><init>(B)V

    invoke-direct {p0, v0}, Lcom/tkay/expressad/exoplayer/d;-><init>(Lcom/tkay/expressad/exoplayer/j/l;)V

    return-void
.end method

.method private constructor <init>(Lcom/tkay/expressad/exoplayer/j/l;)V
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    const/4 v0, 0x0

    .line 196
    invoke-direct {p0, p1, v0}, Lcom/tkay/expressad/exoplayer/d;-><init>(Lcom/tkay/expressad/exoplayer/j/l;B)V

    return-void
.end method

.method private constructor <init>(Lcom/tkay/expressad/exoplayer/j/l;B)V
    .locals 9
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    const/16 v2, 0x3a98

    const v3, 0xc350

    const/16 v4, 0x9c4

    const/16 v5, 0x1388

    const/4 v6, -0x1

    const/4 v7, 0x1

    const/4 v8, 0x0

    move-object v0, p0

    move-object v1, p1

    .line 216
    invoke-direct/range {v0 .. v8}, Lcom/tkay/expressad/exoplayer/d;-><init>(Lcom/tkay/expressad/exoplayer/j/l;IIIIIZLcom/tkay/expressad/exoplayer/k/v;)V

    return-void
.end method

.method public constructor <init>(Lcom/tkay/expressad/exoplayer/j/l;IIIIIZLcom/tkay/expressad/exoplayer/k/v;)V
    .locals 4
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 237
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "0"

    const-string v1, "bufferForPlaybackMs"

    const/4 v2, 0x0

    .line 238
    invoke-static {p4, v2, v1, v0}, Lcom/tkay/expressad/exoplayer/d;->a(IILjava/lang/String;Ljava/lang/String;)V

    const-string v3, "bufferForPlaybackAfterRebufferMs"

    .line 239
    invoke-static {p5, v2, v3, v0}, Lcom/tkay/expressad/exoplayer/d;->a(IILjava/lang/String;Ljava/lang/String;)V

    const-string v0, "minBufferMs"

    .line 241
    invoke-static {p2, p4, v0, v1}, Lcom/tkay/expressad/exoplayer/d;->a(IILjava/lang/String;Ljava/lang/String;)V

    .line 242
    invoke-static {p2, p5, v0, v3}, Lcom/tkay/expressad/exoplayer/d;->a(IILjava/lang/String;Ljava/lang/String;)V

    const-string v1, "maxBufferMs"

    .line 247
    invoke-static {p3, p2, v1, v0}, Lcom/tkay/expressad/exoplayer/d;->a(IILjava/lang/String;Ljava/lang/String;)V

    .line 249
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/d;->g:Lcom/tkay/expressad/exoplayer/j/l;

    int-to-long p1, p2

    const-wide/16 v0, 0x3e8

    mul-long/2addr p1, v0

    .line 250
    iput-wide p1, p0, Lcom/tkay/expressad/exoplayer/d;->h:J

    int-to-long p1, p3

    mul-long/2addr p1, v0

    .line 251
    iput-wide p1, p0, Lcom/tkay/expressad/exoplayer/d;->i:J

    int-to-long p1, p4

    mul-long/2addr p1, v0

    .line 252
    iput-wide p1, p0, Lcom/tkay/expressad/exoplayer/d;->j:J

    int-to-long p1, p5

    mul-long/2addr p1, v0

    .line 253
    iput-wide p1, p0, Lcom/tkay/expressad/exoplayer/d;->k:J

    .line 254
    iput p6, p0, Lcom/tkay/expressad/exoplayer/d;->l:I

    .line 255
    iput-boolean p7, p0, Lcom/tkay/expressad/exoplayer/d;->m:Z

    .line 256
    iput-object p8, p0, Lcom/tkay/expressad/exoplayer/d;->n:Lcom/tkay/expressad/exoplayer/k/v;

    return-void
.end method

.method private static a(IILjava/lang/String;Ljava/lang/String;)V
    .locals 0

    if-lt p0, p1, :cond_0

    const/4 p0, 0x1

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    .line 368
    :goto_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, " cannot be less than "

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p0, p1}, Lcom/tkay/expressad/exoplayer/k/a;->a(ZLjava/lang/Object;)V

    return-void
.end method

.method private a(Z)V
    .locals 3

    const/4 v0, 0x0

    .line 357
    iput v0, p0, Lcom/tkay/expressad/exoplayer/d;->o:I

    .line 358
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/d;->n:Lcom/tkay/expressad/exoplayer/k/v;

    if-eqz v1, :cond_0

    iget-boolean v2, p0, Lcom/tkay/expressad/exoplayer/d;->p:Z

    if-eqz v2, :cond_0

    .line 359
    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/k/v;->c()V

    .line 361
    :cond_0
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/d;->p:Z

    if-eqz p1, :cond_1

    .line 363
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/d;->g:Lcom/tkay/expressad/exoplayer/j/l;

    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/j/l;->e()V

    :cond_1
    return-void
.end method

.method private static b([Lcom/tkay/expressad/exoplayer/y;Lcom/tkay/expressad/exoplayer/i/g;)I
    .locals 3

    const/4 v0, 0x0

    move v1, v0

    .line 348
    :goto_0
    array-length v2, p0

    if-ge v0, v2, :cond_1

    .line 349
    invoke-virtual {p1, v0}, Lcom/tkay/expressad/exoplayer/i/g;->a(I)Lcom/tkay/expressad/exoplayer/i/f;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 350
    aget-object v2, p0, v0

    invoke-interface {v2}, Lcom/tkay/expressad/exoplayer/y;->a()I

    move-result v2

    invoke-static {v2}, Lcom/tkay/expressad/exoplayer/k/af;->g(I)I

    move-result v2

    add-int/2addr v1, v2

    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_1
    return v1
.end method


# virtual methods
.method public final a()V
    .locals 1

    const/4 v0, 0x0

    .line 261
    invoke-direct {p0, v0}, Lcom/tkay/expressad/exoplayer/d;->a(Z)V

    return-void
.end method

.method public final a([Lcom/tkay/expressad/exoplayer/y;Lcom/tkay/expressad/exoplayer/i/g;)V
    .locals 3

    .line 268
    iget v0, p0, Lcom/tkay/expressad/exoplayer/d;->l:I

    const/4 v1, -0x1

    if-ne v0, v1, :cond_2

    const/4 v0, 0x0

    move v1, v0

    .line 1348
    :goto_0
    array-length v2, p1

    if-ge v0, v2, :cond_1

    .line 1349
    invoke-virtual {p2, v0}, Lcom/tkay/expressad/exoplayer/i/g;->a(I)Lcom/tkay/expressad/exoplayer/i/f;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 1350
    aget-object v2, p1, v0

    invoke-interface {v2}, Lcom/tkay/expressad/exoplayer/y;->a()I

    move-result v2

    invoke-static {v2}, Lcom/tkay/expressad/exoplayer/k/af;->g(I)I

    move-result v2

    add-int/2addr v1, v2

    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_1
    move v0, v1

    .line 270
    :cond_2
    iput v0, p0, Lcom/tkay/expressad/exoplayer/d;->o:I

    .line 271
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/d;->g:Lcom/tkay/expressad/exoplayer/j/l;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/exoplayer/j/l;->a(I)V

    return-void
.end method

.method public final a(JF)Z
    .locals 8

    .line 301
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/d;->g:Lcom/tkay/expressad/exoplayer/j/l;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/j/l;->c()I

    move-result v0

    iget v1, p0, Lcom/tkay/expressad/exoplayer/d;->o:I

    const/4 v2, 0x1

    const/4 v3, 0x0

    if-lt v0, v1, :cond_0

    move v0, v2

    goto :goto_0

    :cond_0
    move v0, v3

    .line 302
    :goto_0
    iget-boolean v1, p0, Lcom/tkay/expressad/exoplayer/d;->p:Z

    .line 303
    iget-wide v4, p0, Lcom/tkay/expressad/exoplayer/d;->h:J

    const/high16 v6, 0x3f800000    # 1.0f

    cmpl-float v6, p3, v6

    if-lez v6, :cond_1

    .line 308
    invoke-static {v4, v5, p3}, Lcom/tkay/expressad/exoplayer/k/af;->a(JF)J

    move-result-wide v4

    .line 309
    iget-wide v6, p0, Lcom/tkay/expressad/exoplayer/d;->i:J

    invoke-static {v4, v5, v6, v7}, Ljava/lang/Math;->min(JJ)J

    move-result-wide v4

    :cond_1
    cmp-long p3, p1, v4

    if-gez p3, :cond_4

    .line 312
    iget-boolean p1, p0, Lcom/tkay/expressad/exoplayer/d;->m:Z

    if-nez p1, :cond_3

    if-nez v0, :cond_2

    goto :goto_1

    :cond_2
    move v2, v3

    :cond_3
    :goto_1
    iput-boolean v2, p0, Lcom/tkay/expressad/exoplayer/d;->p:Z

    goto :goto_2

    .line 313
    :cond_4
    iget-wide v4, p0, Lcom/tkay/expressad/exoplayer/d;->i:J

    cmp-long p1, p1, v4

    if-gtz p1, :cond_5

    if-eqz v0, :cond_6

    .line 314
    :cond_5
    iput-boolean v3, p0, Lcom/tkay/expressad/exoplayer/d;->p:Z

    .line 316
    :cond_6
    :goto_2
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/d;->n:Lcom/tkay/expressad/exoplayer/k/v;

    if-eqz p1, :cond_8

    iget-boolean p2, p0, Lcom/tkay/expressad/exoplayer/d;->p:Z

    if-eq p2, v1, :cond_8

    if-eqz p2, :cond_7

    .line 318
    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/k/v;->a()V

    goto :goto_3

    .line 320
    :cond_7
    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/k/v;->c()V

    .line 323
    :cond_8
    :goto_3
    iget-boolean p1, p0, Lcom/tkay/expressad/exoplayer/d;->p:Z

    return p1
.end method

.method public final a(JFZ)Z
    .locals 2

    .line 329
    invoke-static {p1, p2, p3}, Lcom/tkay/expressad/exoplayer/k/af;->b(JF)J

    move-result-wide p1

    if-eqz p4, :cond_0

    .line 330
    iget-wide p3, p0, Lcom/tkay/expressad/exoplayer/d;->k:J

    goto :goto_0

    :cond_0
    iget-wide p3, p0, Lcom/tkay/expressad/exoplayer/d;->j:J

    :goto_0
    const-wide/16 v0, 0x0

    cmp-long v0, p3, v0

    if-lez v0, :cond_2

    cmp-long p1, p1, p3

    if-gez p1, :cond_2

    .line 331
    iget-boolean p1, p0, Lcom/tkay/expressad/exoplayer/d;->m:Z

    if-nez p1, :cond_1

    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/d;->g:Lcom/tkay/expressad/exoplayer/j/l;

    .line 334
    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/j/l;->c()I

    move-result p1

    iget p2, p0, Lcom/tkay/expressad/exoplayer/d;->o:I

    if-lt p1, p2, :cond_1

    goto :goto_1

    :cond_1
    const/4 p1, 0x0

    return p1

    :cond_2
    :goto_1
    const/4 p1, 0x1

    return p1
.end method

.method public final b()V
    .locals 1

    const/4 v0, 0x1

    .line 276
    invoke-direct {p0, v0}, Lcom/tkay/expressad/exoplayer/d;->a(Z)V

    return-void
.end method

.method public final c()V
    .locals 1

    const/4 v0, 0x1

    .line 281
    invoke-direct {p0, v0}, Lcom/tkay/expressad/exoplayer/d;->a(Z)V

    return-void
.end method

.method public final d()Lcom/tkay/expressad/exoplayer/j/b;
    .locals 1

    .line 286
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/d;->g:Lcom/tkay/expressad/exoplayer/j/l;

    return-object v0
.end method

.method public final e()J
    .locals 2

    const-wide/16 v0, 0x0

    return-wide v0
.end method

.method public final f()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method
