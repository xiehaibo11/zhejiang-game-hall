.class public final Lcom/tkay/expressad/exoplayer/h/b/j;
.super Lcom/tkay/expressad/exoplayer/h/b/a;


# instance fields
.field private final k:I

.field private final l:Lcom/tkay/expressad/exoplayer/m;

.field private volatile m:I

.field private volatile n:Z


# direct methods
.method private constructor <init>(Lcom/tkay/expressad/exoplayer/j/h;Lcom/tkay/expressad/exoplayer/j/k;Lcom/tkay/expressad/exoplayer/m;ILjava/lang/Object;JJJILcom/tkay/expressad/exoplayer/m;)V
    .locals 15

    move-object v14, p0

    const-wide v10, -0x7fffffffffffffffL    # -4.9E-324

    move-object v0, p0

    move-object/from16 v1, p1

    move-object/from16 v2, p2

    move-object/from16 v3, p3

    move/from16 v4, p4

    move-object/from16 v5, p5

    move-wide/from16 v6, p6

    move-wide/from16 v8, p8

    move-wide/from16 v12, p10

    .line 64
    invoke-direct/range {v0 .. v13}, Lcom/tkay/expressad/exoplayer/h/b/a;-><init>(Lcom/tkay/expressad/exoplayer/j/h;Lcom/tkay/expressad/exoplayer/j/k;Lcom/tkay/expressad/exoplayer/m;ILjava/lang/Object;JJJJ)V

    move/from16 v0, p12

    .line 74
    iput v0, v14, Lcom/tkay/expressad/exoplayer/h/b/j;->k:I

    move-object/from16 v0, p13

    .line 75
    iput-object v0, v14, Lcom/tkay/expressad/exoplayer/h/b/j;->l:Lcom/tkay/expressad/exoplayer/m;

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 0

    return-void
.end method

.method public final b()V
    .locals 11

    .line 99
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/j;->b:Lcom/tkay/expressad/exoplayer/j/k;

    iget v1, p0, Lcom/tkay/expressad/exoplayer/h/b/j;->m:I

    int-to-long v1, v1

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/exoplayer/j/k;->a(J)Lcom/tkay/expressad/exoplayer/j/k;

    move-result-object v0

    .line 102
    :try_start_0
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/b/j;->i:Lcom/tkay/expressad/exoplayer/j/h;

    invoke-interface {v1, v0}, Lcom/tkay/expressad/exoplayer/j/h;->a(Lcom/tkay/expressad/exoplayer/j/k;)J

    move-result-wide v0

    const-wide/16 v2, -0x1

    cmp-long v2, v0, v2

    if-eqz v2, :cond_0

    .line 104
    iget v2, p0, Lcom/tkay/expressad/exoplayer/h/b/j;->m:I

    int-to-long v2, v2

    add-long/2addr v0, v2

    :cond_0
    move-wide v5, v0

    .line 106
    new-instance v0, Lcom/tkay/expressad/exoplayer/e/b;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/h/b/j;->i:Lcom/tkay/expressad/exoplayer/j/h;

    iget v1, p0, Lcom/tkay/expressad/exoplayer/h/b/j;->m:I

    int-to-long v3, v1

    move-object v1, v0

    invoke-direct/range {v1 .. v6}, Lcom/tkay/expressad/exoplayer/e/b;-><init>(Lcom/tkay/expressad/exoplayer/j/h;JJ)V

    .line 107
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/h/b/j;->c()Lcom/tkay/expressad/exoplayer/h/b/b;

    move-result-object v1

    const-wide/16 v2, 0x0

    .line 108
    invoke-virtual {v1, v2, v3}, Lcom/tkay/expressad/exoplayer/h/b/b;->a(J)V

    .line 109
    iget v2, p0, Lcom/tkay/expressad/exoplayer/h/b/j;->k:I

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/exoplayer/h/b/b;->a(I)Lcom/tkay/expressad/exoplayer/e/m;

    move-result-object v3

    .line 110
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/b/j;->l:Lcom/tkay/expressad/exoplayer/m;

    invoke-interface {v3, v1}, Lcom/tkay/expressad/exoplayer/e/m;->a(Lcom/tkay/expressad/exoplayer/m;)V

    const/4 v1, 0x0

    :goto_0
    const/4 v2, -0x1

    const/4 v10, 0x1

    if-eq v1, v2, :cond_1

    .line 114
    iget v2, p0, Lcom/tkay/expressad/exoplayer/h/b/j;->m:I

    add-int/2addr v2, v1

    iput v2, p0, Lcom/tkay/expressad/exoplayer/h/b/j;->m:I

    const v1, 0x7fffffff

    .line 115
    invoke-interface {v3, v0, v1, v10}, Lcom/tkay/expressad/exoplayer/e/m;->a(Lcom/tkay/expressad/exoplayer/e/f;IZ)I

    move-result v1

    goto :goto_0

    .line 117
    :cond_1
    iget v7, p0, Lcom/tkay/expressad/exoplayer/h/b/j;->m:I

    .line 118
    iget-wide v4, p0, Lcom/tkay/expressad/exoplayer/h/b/j;->g:J

    const/4 v6, 0x1

    const/4 v8, 0x0

    const/4 v9, 0x0

    invoke-interface/range {v3 .. v9}, Lcom/tkay/expressad/exoplayer/e/m;->a(JIIILcom/tkay/expressad/exoplayer/e/m$a;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 120
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/j;->i:Lcom/tkay/expressad/exoplayer/j/h;

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/af;->a(Lcom/tkay/expressad/exoplayer/j/h;)V

    .line 122
    iput-boolean v10, p0, Lcom/tkay/expressad/exoplayer/h/b/j;->n:Z

    return-void

    :catchall_0
    move-exception v0

    .line 120
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/b/j;->i:Lcom/tkay/expressad/exoplayer/j/h;

    invoke-static {v1}, Lcom/tkay/expressad/exoplayer/k/af;->a(Lcom/tkay/expressad/exoplayer/j/h;)V

    .line 121
    throw v0
.end method

.method public final d()J
    .locals 2

    .line 86
    iget v0, p0, Lcom/tkay/expressad/exoplayer/h/b/j;->m:I

    int-to-long v0, v0

    return-wide v0
.end method

.method public final f()Z
    .locals 1

    .line 81
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/h/b/j;->n:Z

    return v0
.end method
