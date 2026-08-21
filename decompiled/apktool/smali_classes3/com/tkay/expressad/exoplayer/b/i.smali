.class final Lcom/tkay/expressad/exoplayer/b/i;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/b/i$a;,
        Lcom/tkay/expressad/exoplayer/b/i$b;
    }
.end annotation


# static fields
.field private static final a:I = 0x0

.field private static final b:I = 0x1

.field private static final c:I = 0x2

.field private static final d:I = 0x3

.field private static final e:I = 0x4

.field private static final f:I = 0x1388

.field private static final g:I = 0x989680

.field private static final h:I = 0x7a120

.field private static final i:I = 0x7a120


# instance fields
.field private final j:Lcom/tkay/expressad/exoplayer/b/i$a;

.field private k:I

.field private l:J

.field private m:J

.field private n:J

.field private o:J


# direct methods
.method public constructor <init>(Landroid/media/AudioTrack;)V
    .locals 2

    .line 99
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 100
    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v1, 0x13

    if-lt v0, v1, :cond_0

    .line 101
    new-instance v0, Lcom/tkay/expressad/exoplayer/b/i$a;

    invoke-direct {v0, p1}, Lcom/tkay/expressad/exoplayer/b/i$a;-><init>(Landroid/media/AudioTrack;)V

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/b/i;->j:Lcom/tkay/expressad/exoplayer/b/i$a;

    .line 102
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/b/i;->e()V

    return-void

    :cond_0
    const/4 p1, 0x0

    .line 104
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/b/i;->j:Lcom/tkay/expressad/exoplayer/b/i$a;

    const/4 p1, 0x3

    .line 105
    invoke-direct {p0, p1}, Lcom/tkay/expressad/exoplayer/b/i;->a(I)V

    return-void
.end method

.method private a(I)V
    .locals 6

    .line 237
    iput p1, p0, Lcom/tkay/expressad/exoplayer/b/i;->k:I

    const-wide/16 v0, 0x1388

    if-eqz p1, :cond_3

    const/4 v2, 0x1

    if-eq p1, v2, :cond_2

    const/4 v0, 0x2

    if-eq p1, v0, :cond_1

    const/4 v0, 0x3

    if-eq p1, v0, :cond_1

    const/4 v0, 0x4

    if-ne p1, v0, :cond_0

    const-wide/32 v0, 0x7a120

    .line 254
    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/b/i;->m:J

    return-void

    .line 257
    :cond_0
    new-instance p1, Ljava/lang/IllegalStateException;

    invoke-direct {p1}, Ljava/lang/IllegalStateException;-><init>()V

    throw p1

    :cond_1
    const-wide/32 v0, 0x989680

    .line 251
    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/b/i;->m:J

    return-void

    .line 247
    :cond_2
    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/b/i;->m:J

    return-void

    :cond_3
    const-wide/16 v2, 0x0

    .line 241
    iput-wide v2, p0, Lcom/tkay/expressad/exoplayer/b/i;->n:J

    const-wide/16 v2, -0x1

    .line 242
    iput-wide v2, p0, Lcom/tkay/expressad/exoplayer/b/i;->o:J

    .line 243
    invoke-static {}, Ljava/lang/System;->nanoTime()J

    move-result-wide v2

    const-wide/16 v4, 0x3e8

    div-long/2addr v2, v4

    iput-wide v2, p0, Lcom/tkay/expressad/exoplayer/b/i;->l:J

    .line 244
    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/b/i;->m:J

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 1

    const/4 v0, 0x4

    .line 181
    invoke-direct {p0, v0}, Lcom/tkay/expressad/exoplayer/b/i;->a(I)V

    return-void
.end method

.method public final a(J)Z
    .locals 6

    .line 120
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/i;->j:Lcom/tkay/expressad/exoplayer/b/i$a;

    const/4 v1, 0x0

    if-eqz v0, :cond_9

    iget-wide v2, p0, Lcom/tkay/expressad/exoplayer/b/i;->n:J

    sub-long v2, p1, v2

    iget-wide v4, p0, Lcom/tkay/expressad/exoplayer/b/i;->m:J

    cmp-long v2, v2, v4

    if-gez v2, :cond_0

    goto/16 :goto_1

    .line 123
    :cond_0
    iput-wide p1, p0, Lcom/tkay/expressad/exoplayer/b/i;->n:J

    .line 124
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/b/i$a;->a()Z

    move-result v0

    .line 125
    iget v2, p0, Lcom/tkay/expressad/exoplayer/b/i;->k:I

    const/4 v3, 0x3

    const/4 v4, 0x1

    if-eqz v2, :cond_6

    const/4 p1, 0x2

    if-eq v2, v4, :cond_4

    if-eq v2, p1, :cond_3

    if-eq v2, v3, :cond_2

    const/4 p1, 0x4

    if-ne v2, p1, :cond_1

    goto :goto_0

    .line 170
    :cond_1
    new-instance p1, Ljava/lang/IllegalStateException;

    invoke-direct {p1}, Ljava/lang/IllegalStateException;-><init>()V

    throw p1

    :cond_2
    if-eqz v0, :cond_8

    .line 163
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/b/i;->e()V

    goto :goto_0

    :cond_3
    if-nez v0, :cond_8

    .line 157
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/b/i;->e()V

    goto :goto_0

    :cond_4
    if-eqz v0, :cond_5

    .line 146
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/b/i;->j:Lcom/tkay/expressad/exoplayer/b/i$a;

    invoke-virtual {p2}, Lcom/tkay/expressad/exoplayer/b/i$a;->c()J

    move-result-wide v1

    .line 147
    iget-wide v3, p0, Lcom/tkay/expressad/exoplayer/b/i;->o:J

    cmp-long p2, v1, v3

    if-lez p2, :cond_8

    .line 148
    invoke-direct {p0, p1}, Lcom/tkay/expressad/exoplayer/b/i;->a(I)V

    goto :goto_0

    .line 151
    :cond_5
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/b/i;->e()V

    goto :goto_0

    :cond_6
    if-eqz v0, :cond_7

    .line 128
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/b/i;->j:Lcom/tkay/expressad/exoplayer/b/i$a;

    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/b/i$a;->b()J

    move-result-wide p1

    iget-wide v2, p0, Lcom/tkay/expressad/exoplayer/b/i;->l:J

    cmp-long p1, p1, v2

    if-ltz p1, :cond_9

    .line 130
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/b/i;->j:Lcom/tkay/expressad/exoplayer/b/i$a;

    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/b/i$a;->c()J

    move-result-wide p1

    iput-wide p1, p0, Lcom/tkay/expressad/exoplayer/b/i;->o:J

    .line 131
    invoke-direct {p0, v4}, Lcom/tkay/expressad/exoplayer/b/i;->a(I)V

    goto :goto_0

    .line 136
    :cond_7
    iget-wide v1, p0, Lcom/tkay/expressad/exoplayer/b/i;->l:J

    sub-long/2addr p1, v1

    const-wide/32 v1, 0x7a120

    cmp-long p1, p1, v1

    if-lez p1, :cond_8

    .line 141
    invoke-direct {p0, v3}, Lcom/tkay/expressad/exoplayer/b/i;->a(I)V

    :cond_8
    :goto_0
    move v1, v0

    :cond_9
    :goto_1
    return v1
.end method

.method public final b()V
    .locals 2

    .line 189
    iget v0, p0, Lcom/tkay/expressad/exoplayer/b/i;->k:I

    const/4 v1, 0x4

    if-ne v0, v1, :cond_0

    .line 190
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/b/i;->e()V

    :cond_0
    return-void
.end method

.method public final c()Z
    .locals 3

    .line 200
    iget v0, p0, Lcom/tkay/expressad/exoplayer/b/i;->k:I

    const/4 v1, 0x1

    if-eq v0, v1, :cond_1

    const/4 v2, 0x2

    if-ne v0, v2, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    return v0

    :cond_1
    :goto_0
    return v1
.end method

.method public final d()Z
    .locals 2

    .line 210
    iget v0, p0, Lcom/tkay/expressad/exoplayer/b/i;->k:I

    const/4 v1, 0x2

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final e()V
    .locals 1

    .line 215
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/i;->j:Lcom/tkay/expressad/exoplayer/b/i$a;

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    .line 216
    invoke-direct {p0, v0}, Lcom/tkay/expressad/exoplayer/b/i;->a(I)V

    :cond_0
    return-void
.end method

.method public final f()J
    .locals 2

    .line 225
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/i;->j:Lcom/tkay/expressad/exoplayer/b/i$a;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/b/i$a;->b()J

    move-result-wide v0

    return-wide v0

    :cond_0
    const-wide v0, -0x7fffffffffffffffL    # -4.9E-324

    return-wide v0
.end method

.method public final g()J
    .locals 2

    .line 233
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/i;->j:Lcom/tkay/expressad/exoplayer/b/i$a;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/b/i$a;->c()J

    move-result-wide v0

    return-wide v0

    :cond_0
    const-wide/16 v0, -0x1

    return-wide v0
.end method
