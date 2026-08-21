.class public final Lcom/tkay/expressad/exoplayer/h/e;
.super Lcom/tkay/expressad/exoplayer/h/f;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/h/e$a;,
        Lcom/tkay/expressad/exoplayer/h/e$b;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/tkay/expressad/exoplayer/h/f<",
        "Ljava/lang/Void;",
        ">;"
    }
.end annotation


# instance fields
.field private final a:Lcom/tkay/expressad/exoplayer/h/s;

.field private final b:J

.field private final c:J

.field private final d:Z

.field private final e:Z

.field private final f:Z

.field private final g:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/tkay/expressad/exoplayer/h/d;",
            ">;"
        }
    .end annotation
.end field

.field private final h:Lcom/tkay/expressad/exoplayer/ae$b;

.field private i:Ljava/lang/Object;

.field private j:Lcom/tkay/expressad/exoplayer/h/e$a;

.field private k:Lcom/tkay/expressad/exoplayer/h/e$b;

.field private l:J

.field private m:J


# direct methods
.method private constructor <init>(Lcom/tkay/expressad/exoplayer/h/s;J)V
    .locals 8

    const-wide/16 v2, 0x0

    const/4 v6, 0x1

    const/4 v7, 0x1

    move-object v0, p0

    move-object v1, p1

    move-wide v4, p2

    .line 155
    invoke-direct/range {v0 .. v7}, Lcom/tkay/expressad/exoplayer/h/e;-><init>(Lcom/tkay/expressad/exoplayer/h/s;JJZZ)V

    return-void
.end method

.method private constructor <init>(Lcom/tkay/expressad/exoplayer/h/s;JJ)V
    .locals 8

    const/4 v6, 0x1

    const/4 v7, 0x0

    move-object v0, p0

    move-object v1, p1

    move-wide v2, p2

    move-wide v4, p4

    .line 106
    invoke-direct/range {v0 .. v7}, Lcom/tkay/expressad/exoplayer/h/e;-><init>(Lcom/tkay/expressad/exoplayer/h/s;JJZZ)V

    return-void
.end method

.method private constructor <init>(Lcom/tkay/expressad/exoplayer/h/s;JJZ)V
    .locals 8
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    const/4 v7, 0x0

    move-object v0, p0

    move-object v1, p1

    move-wide v2, p2

    move-wide v4, p4

    move v6, p6

    .line 136
    invoke-direct/range {v0 .. v7}, Lcom/tkay/expressad/exoplayer/h/e;-><init>(Lcom/tkay/expressad/exoplayer/h/s;JJZZ)V

    return-void
.end method

.method private constructor <init>(Lcom/tkay/expressad/exoplayer/h/s;JJZZ)V
    .locals 2

    .line 203
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/h/f;-><init>()V

    const-wide/16 v0, 0x0

    cmp-long v0, p2, v0

    const/4 v1, 0x0

    if-ltz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    move v0, v1

    .line 204
    :goto_0
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/a;->a(Z)V

    .line 205
    invoke-static {p1}, Lcom/tkay/expressad/exoplayer/k/a;->a(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/exoplayer/h/s;

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/e;->a:Lcom/tkay/expressad/exoplayer/h/s;

    .line 206
    iput-wide p2, p0, Lcom/tkay/expressad/exoplayer/h/e;->b:J

    .line 207
    iput-wide p4, p0, Lcom/tkay/expressad/exoplayer/h/e;->c:J

    .line 208
    iput-boolean p6, p0, Lcom/tkay/expressad/exoplayer/h/e;->d:Z

    .line 209
    iput-boolean v1, p0, Lcom/tkay/expressad/exoplayer/h/e;->e:Z

    .line 210
    iput-boolean p7, p0, Lcom/tkay/expressad/exoplayer/h/e;->f:Z

    .line 211
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/e;->g:Ljava/util/ArrayList;

    .line 212
    new-instance p1, Lcom/tkay/expressad/exoplayer/ae$b;

    invoke-direct {p1}, Lcom/tkay/expressad/exoplayer/ae$b;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/e;->h:Lcom/tkay/expressad/exoplayer/ae$b;

    return-void
.end method

.method private a(Lcom/tkay/expressad/exoplayer/ae;)V
    .locals 15

    move-object v1, p0

    .line 270
    iget-object v0, v1, Lcom/tkay/expressad/exoplayer/h/e;->h:Lcom/tkay/expressad/exoplayer/ae$b;

    const/4 v2, 0x0

    move-object/from16 v4, p1

    .line 1621
    invoke-virtual {v4, v2, v0, v2}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$b;Z)Lcom/tkay/expressad/exoplayer/ae$b;

    .line 271
    iget-object v0, v1, Lcom/tkay/expressad/exoplayer/h/e;->h:Lcom/tkay/expressad/exoplayer/ae$b;

    .line 2249
    iget-wide v5, v0, Lcom/tkay/expressad/exoplayer/ae$b;->j:J

    .line 272
    iget-object v0, v1, Lcom/tkay/expressad/exoplayer/h/e;->j:Lcom/tkay/expressad/exoplayer/h/e$a;

    const-wide/high16 v7, -0x8000000000000000L

    if-eqz v0, :cond_2

    iget-object v0, v1, Lcom/tkay/expressad/exoplayer/h/e;->g:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_2

    iget-boolean v0, v1, Lcom/tkay/expressad/exoplayer/h/e;->e:Z

    if-eqz v0, :cond_0

    goto :goto_1

    .line 291
    :cond_0
    iget-wide v2, v1, Lcom/tkay/expressad/exoplayer/h/e;->l:J

    sub-long/2addr v2, v5

    .line 293
    iget-wide v9, v1, Lcom/tkay/expressad/exoplayer/h/e;->c:J

    cmp-long v0, v9, v7

    if-nez v0, :cond_1

    goto :goto_0

    .line 295
    :cond_1
    iget-wide v7, v1, Lcom/tkay/expressad/exoplayer/h/e;->m:J

    sub-long/2addr v7, v5

    :goto_0
    move-wide v5, v2

    goto :goto_4

    .line 273
    :cond_2
    :goto_1
    iget-wide v9, v1, Lcom/tkay/expressad/exoplayer/h/e;->b:J

    .line 274
    iget-wide v11, v1, Lcom/tkay/expressad/exoplayer/h/e;->c:J

    .line 275
    iget-boolean v0, v1, Lcom/tkay/expressad/exoplayer/h/e;->f:Z

    if-eqz v0, :cond_3

    .line 276
    iget-object v0, v1, Lcom/tkay/expressad/exoplayer/h/e;->h:Lcom/tkay/expressad/exoplayer/ae$b;

    .line 3219
    iget-wide v13, v0, Lcom/tkay/expressad/exoplayer/ae$b;->h:J

    add-long/2addr v9, v13

    add-long/2addr v11, v13

    :cond_3
    add-long v13, v5, v9

    .line 280
    iput-wide v13, v1, Lcom/tkay/expressad/exoplayer/h/e;->l:J

    .line 282
    iget-wide v13, v1, Lcom/tkay/expressad/exoplayer/h/e;->c:J

    cmp-long v0, v13, v7

    if-nez v0, :cond_4

    goto :goto_2

    :cond_4
    add-long v7, v5, v11

    .line 284
    :goto_2
    iput-wide v7, v1, Lcom/tkay/expressad/exoplayer/h/e;->m:J

    .line 285
    iget-object v0, v1, Lcom/tkay/expressad/exoplayer/h/e;->g:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    :goto_3
    if-ge v2, v0, :cond_5

    .line 287
    iget-object v3, v1, Lcom/tkay/expressad/exoplayer/h/e;->g:Ljava/util/ArrayList;

    invoke-virtual {v3, v2}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/tkay/expressad/exoplayer/h/d;

    iget-wide v5, v1, Lcom/tkay/expressad/exoplayer/h/e;->l:J

    iget-wide v7, v1, Lcom/tkay/expressad/exoplayer/h/e;->m:J

    invoke-virtual {v3, v5, v6, v7, v8}, Lcom/tkay/expressad/exoplayer/h/d;->a(JJ)V

    add-int/lit8 v2, v2, 0x1

    goto :goto_3

    :cond_5
    move-wide v5, v9

    move-wide v7, v11

    .line 298
    :goto_4
    :try_start_0
    new-instance v0, Lcom/tkay/expressad/exoplayer/h/e$a;

    move-object v3, v0

    move-object/from16 v4, p1

    invoke-direct/range {v3 .. v8}, Lcom/tkay/expressad/exoplayer/h/e$a;-><init>(Lcom/tkay/expressad/exoplayer/ae;JJ)V

    iput-object v0, v1, Lcom/tkay/expressad/exoplayer/h/e;->j:Lcom/tkay/expressad/exoplayer/h/e$a;
    :try_end_0
    .catch Lcom/tkay/expressad/exoplayer/h/e$b; {:try_start_0 .. :try_end_0} :catch_0

    .line 303
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/h/e;->i:Ljava/lang/Object;

    invoke-virtual {p0, v0, v2}, Lcom/tkay/expressad/exoplayer/h/e;->a(Lcom/tkay/expressad/exoplayer/ae;Ljava/lang/Object;)V

    return-void

    :catch_0
    move-exception v0

    .line 300
    iput-object v0, v1, Lcom/tkay/expressad/exoplayer/h/e;->k:Lcom/tkay/expressad/exoplayer/h/e$b;

    return-void
.end method

.method private b(J)J
    .locals 6

    const-wide v0, -0x7fffffffffffffffL    # -4.9E-324

    cmp-long v2, p1, v0

    if-nez v2, :cond_0

    return-wide v0

    .line 311
    :cond_0
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/h/e;->b:J

    invoke-static {v0, v1}, Lcom/tkay/expressad/exoplayer/b;->a(J)J

    move-result-wide v0

    const-wide/16 v2, 0x0

    sub-long/2addr p1, v0

    .line 312
    invoke-static {v2, v3, p1, p2}, Ljava/lang/Math;->max(JJ)J

    move-result-wide p1

    .line 313
    iget-wide v2, p0, Lcom/tkay/expressad/exoplayer/h/e;->c:J

    const-wide/high16 v4, -0x8000000000000000L

    cmp-long v4, v2, v4

    if-eqz v4, :cond_1

    .line 314
    invoke-static {v2, v3}, Lcom/tkay/expressad/exoplayer/b;->a(J)J

    move-result-wide v2

    sub-long/2addr v2, v0

    invoke-static {v2, v3, p1, p2}, Ljava/lang/Math;->min(JJ)J

    move-result-wide p1

    :cond_1
    return-wide p1
.end method

.method private b(Lcom/tkay/expressad/exoplayer/ae;Ljava/lang/Object;)V
    .locals 1

    .line 260
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/e;->k:Lcom/tkay/expressad/exoplayer/h/e$b;

    if-eqz v0, :cond_0

    return-void

    .line 263
    :cond_0
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/h/e;->i:Ljava/lang/Object;

    .line 264
    invoke-direct {p0, p1}, Lcom/tkay/expressad/exoplayer/h/e;->a(Lcom/tkay/expressad/exoplayer/ae;)V

    return-void
.end method


# virtual methods
.method protected final synthetic a(J)J
    .locals 6

    const-wide v0, -0x7fffffffffffffffL    # -4.9E-324

    cmp-long v2, p1, v0

    if-nez v2, :cond_0

    return-wide v0

    .line 3311
    :cond_0
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/h/e;->b:J

    invoke-static {v0, v1}, Lcom/tkay/expressad/exoplayer/b;->a(J)J

    move-result-wide v0

    const-wide/16 v2, 0x0

    sub-long/2addr p1, v0

    .line 3312
    invoke-static {v2, v3, p1, p2}, Ljava/lang/Math;->max(JJ)J

    move-result-wide p1

    .line 3313
    iget-wide v2, p0, Lcom/tkay/expressad/exoplayer/h/e;->c:J

    const-wide/high16 v4, -0x8000000000000000L

    cmp-long v4, v2, v4

    if-eqz v4, :cond_1

    .line 3314
    invoke-static {v2, v3}, Lcom/tkay/expressad/exoplayer/b;->a(J)J

    move-result-wide v2

    sub-long/2addr v2, v0

    invoke-static {v2, v3, p1, p2}, Ljava/lang/Math;->min(JJ)J

    move-result-wide p1

    :cond_1
    return-wide p1
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/h/s$a;Lcom/tkay/expressad/exoplayer/j/b;)Lcom/tkay/expressad/exoplayer/h/r;
    .locals 8

    .line 231
    new-instance v7, Lcom/tkay/expressad/exoplayer/h/d;

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/e;->a:Lcom/tkay/expressad/exoplayer/h/s;

    .line 233
    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/exoplayer/h/s;->a(Lcom/tkay/expressad/exoplayer/h/s$a;Lcom/tkay/expressad/exoplayer/j/b;)Lcom/tkay/expressad/exoplayer/h/r;

    move-result-object v1

    iget-boolean v2, p0, Lcom/tkay/expressad/exoplayer/h/e;->d:Z

    iget-wide v3, p0, Lcom/tkay/expressad/exoplayer/h/e;->l:J

    iget-wide v5, p0, Lcom/tkay/expressad/exoplayer/h/e;->m:J

    move-object v0, v7

    invoke-direct/range {v0 .. v6}, Lcom/tkay/expressad/exoplayer/h/d;-><init>(Lcom/tkay/expressad/exoplayer/h/r;ZJJ)V

    .line 237
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/e;->g:Ljava/util/ArrayList;

    invoke-virtual {p1, v7}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    return-object v7
.end method

.method public final a()V
    .locals 1

    .line 252
    invoke-super {p0}, Lcom/tkay/expressad/exoplayer/h/f;->a()V

    const/4 v0, 0x0

    .line 253
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/h/e;->k:Lcom/tkay/expressad/exoplayer/h/e$b;

    .line 254
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/h/e;->j:Lcom/tkay/expressad/exoplayer/h/e$a;

    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/h/r;)V
    .locals 1

    .line 243
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/e;->g:Ljava/util/ArrayList;

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->remove(Ljava/lang/Object;)Z

    move-result v0

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 244
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/e;->a:Lcom/tkay/expressad/exoplayer/h/s;

    check-cast p1, Lcom/tkay/expressad/exoplayer/h/d;

    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/h/d;->a:Lcom/tkay/expressad/exoplayer/h/r;

    invoke-interface {v0, p1}, Lcom/tkay/expressad/exoplayer/h/s;->a(Lcom/tkay/expressad/exoplayer/h/r;)V

    .line 245
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/e;->g:Ljava/util/ArrayList;

    invoke-virtual {p1}, Ljava/util/ArrayList;->isEmpty()Z

    move-result p1

    if-eqz p1, :cond_0

    iget-boolean p1, p0, Lcom/tkay/expressad/exoplayer/h/e;->e:Z

    if-nez p1, :cond_0

    .line 246
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/e;->j:Lcom/tkay/expressad/exoplayer/h/e$a;

    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/h/e$a;->b:Lcom/tkay/expressad/exoplayer/ae;

    invoke-direct {p0, p1}, Lcom/tkay/expressad/exoplayer/h/e;->a(Lcom/tkay/expressad/exoplayer/ae;)V

    :cond_0
    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/h;Z)V
    .locals 0

    .line 217
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/exoplayer/h/f;->a(Lcom/tkay/expressad/exoplayer/h;Z)V

    .line 218
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/e;->a:Lcom/tkay/expressad/exoplayer/h/s;

    const/4 p2, 0x0

    invoke-virtual {p0, p2, p1}, Lcom/tkay/expressad/exoplayer/h/e;->a(Ljava/lang/Object;Lcom/tkay/expressad/exoplayer/h/s;)V

    return-void
.end method

.method protected final bridge synthetic a(Ljava/lang/Object;Lcom/tkay/expressad/exoplayer/h/s;Lcom/tkay/expressad/exoplayer/ae;Ljava/lang/Object;)V
    .locals 0

    .line 4260
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/e;->k:Lcom/tkay/expressad/exoplayer/h/e$b;

    if-nez p1, :cond_0

    .line 4263
    iput-object p4, p0, Lcom/tkay/expressad/exoplayer/h/e;->i:Ljava/lang/Object;

    .line 4264
    invoke-direct {p0, p3}, Lcom/tkay/expressad/exoplayer/h/e;->a(Lcom/tkay/expressad/exoplayer/ae;)V

    :cond_0
    return-void
.end method

.method public final b()V
    .locals 1

    .line 223
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/e;->k:Lcom/tkay/expressad/exoplayer/h/e$b;

    if-nez v0, :cond_0

    .line 226
    invoke-super {p0}, Lcom/tkay/expressad/exoplayer/h/f;->b()V

    return-void

    .line 224
    :cond_0
    throw v0
.end method
