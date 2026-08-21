.class public abstract Lcom/tkay/expressad/exoplayer/a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/y;
.implements Lcom/tkay/expressad/exoplayer/z;


# instance fields
.field private final n:I

.field private o:Lcom/tkay/expressad/exoplayer/aa;

.field private p:I

.field private q:I

.field private r:Lcom/tkay/expressad/exoplayer/h/y;

.field private s:[Lcom/tkay/expressad/exoplayer/m;

.field private t:J

.field private u:Z

.field private v:Z


# direct methods
.method public constructor <init>(I)V
    .locals 0

    .line 49
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 50
    iput p1, p0, Lcom/tkay/expressad/exoplayer/a;->n:I

    const/4 p1, 0x1

    .line 51
    iput-boolean p1, p0, Lcom/tkay/expressad/exoplayer/a;->u:Z

    return-void
.end method

.method protected static a(Lcom/tkay/expressad/exoplayer/d/g;Lcom/tkay/expressad/exoplayer/d/e;)Z
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/tkay/expressad/exoplayer/d/g<",
            "*>;",
            "Lcom/tkay/expressad/exoplayer/d/e;",
            ")Z"
        }
    .end annotation

    if-nez p1, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    if-nez p0, :cond_1

    const/4 p0, 0x0

    return p0

    .line 343
    :cond_1
    invoke-interface {p0, p1}, Lcom/tkay/expressad/exoplayer/d/g;->a(Lcom/tkay/expressad/exoplayer/d/e;)Z

    move-result p0

    return p0
.end method


# virtual methods
.method public final a()I
    .locals 1

    .line 56
    iget v0, p0, Lcom/tkay/expressad/exoplayer/a;->n:I

    return v0
.end method

.method protected final a(Lcom/tkay/expressad/exoplayer/n;Lcom/tkay/expressad/exoplayer/c/e;Z)I
    .locals 4

    .line 290
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/a;->r:Lcom/tkay/expressad/exoplayer/h/y;

    invoke-interface {v0, p1, p2, p3}, Lcom/tkay/expressad/exoplayer/h/y;->a(Lcom/tkay/expressad/exoplayer/n;Lcom/tkay/expressad/exoplayer/c/e;Z)I

    move-result p3

    const/4 v0, -0x4

    if-ne p3, v0, :cond_2

    .line 292
    invoke-virtual {p2}, Lcom/tkay/expressad/exoplayer/c/e;->c()Z

    move-result p1

    if-eqz p1, :cond_1

    const/4 p1, 0x1

    .line 293
    iput-boolean p1, p0, Lcom/tkay/expressad/exoplayer/a;->u:Z

    .line 294
    iget-boolean p1, p0, Lcom/tkay/expressad/exoplayer/a;->v:Z

    if-eqz p1, :cond_0

    return v0

    :cond_0
    const/4 p1, -0x3

    return p1

    .line 296
    :cond_1
    iget-wide v0, p2, Lcom/tkay/expressad/exoplayer/c/e;->f:J

    iget-wide v2, p0, Lcom/tkay/expressad/exoplayer/a;->t:J

    add-long/2addr v0, v2

    iput-wide v0, p2, Lcom/tkay/expressad/exoplayer/c/e;->f:J

    goto :goto_0

    :cond_2
    const/4 p2, -0x5

    if-ne p3, p2, :cond_3

    .line 298
    iget-object p2, p1, Lcom/tkay/expressad/exoplayer/n;->a:Lcom/tkay/expressad/exoplayer/m;

    .line 299
    iget-wide v0, p2, Lcom/tkay/expressad/exoplayer/m;->l:J

    const-wide v2, 0x7fffffffffffffffL

    cmp-long v0, v0, v2

    if-eqz v0, :cond_3

    .line 300
    iget-wide v0, p2, Lcom/tkay/expressad/exoplayer/m;->l:J

    iget-wide v2, p0, Lcom/tkay/expressad/exoplayer/a;->t:J

    add-long/2addr v0, v2

    invoke-virtual {p2, v0, v1}, Lcom/tkay/expressad/exoplayer/m;->a(J)Lcom/tkay/expressad/exoplayer/m;

    move-result-object p2

    .line 301
    iput-object p2, p1, Lcom/tkay/expressad/exoplayer/n;->a:Lcom/tkay/expressad/exoplayer/m;

    :cond_3
    :goto_0
    return p3
.end method

.method public final a(I)V
    .locals 0

    .line 66
    iput p1, p0, Lcom/tkay/expressad/exoplayer/a;->p:I

    return-void
.end method

.method public a(ILjava/lang/Object;)V
    .locals 0

    return-void
.end method

.method public final a(J)V
    .locals 1

    const/4 v0, 0x0

    .line 136
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/a;->v:Z

    .line 137
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/a;->u:Z

    .line 138
    invoke-virtual {p0, p1, p2, v0}, Lcom/tkay/expressad/exoplayer/a;->a(JZ)V

    return-void
.end method

.method protected a(JZ)V
    .locals 0

    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/aa;[Lcom/tkay/expressad/exoplayer/m;Lcom/tkay/expressad/exoplayer/h/y;JZJ)V
    .locals 2

    .line 83
    iget v0, p0, Lcom/tkay/expressad/exoplayer/a;->q:I

    const/4 v1, 0x1

    if-nez v0, :cond_0

    move v0, v1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 84
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/a;->o:Lcom/tkay/expressad/exoplayer/aa;

    .line 85
    iput v1, p0, Lcom/tkay/expressad/exoplayer/a;->q:I

    .line 86
    invoke-virtual {p0, p6}, Lcom/tkay/expressad/exoplayer/a;->a(Z)V

    .line 87
    invoke-virtual {p0, p2, p3, p7, p8}, Lcom/tkay/expressad/exoplayer/a;->a([Lcom/tkay/expressad/exoplayer/m;Lcom/tkay/expressad/exoplayer/h/y;J)V

    .line 88
    invoke-virtual {p0, p4, p5, p6}, Lcom/tkay/expressad/exoplayer/a;->a(JZ)V

    return-void
.end method

.method protected a(Z)V
    .locals 0

    return-void
.end method

.method protected a([Lcom/tkay/expressad/exoplayer/m;J)V
    .locals 0

    return-void
.end method

.method public final a([Lcom/tkay/expressad/exoplayer/m;Lcom/tkay/expressad/exoplayer/h/y;J)V
    .locals 1

    .line 101
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/a;->v:Z

    xor-int/lit8 v0, v0, 0x1

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 102
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/a;->r:Lcom/tkay/expressad/exoplayer/h/y;

    const/4 p2, 0x0

    .line 103
    iput-boolean p2, p0, Lcom/tkay/expressad/exoplayer/a;->u:Z

    .line 104
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/a;->s:[Lcom/tkay/expressad/exoplayer/m;

    .line 105
    iput-wide p3, p0, Lcom/tkay/expressad/exoplayer/a;->t:J

    .line 106
    invoke-virtual {p0, p1, p3, p4}, Lcom/tkay/expressad/exoplayer/a;->a([Lcom/tkay/expressad/exoplayer/m;J)V

    return-void
.end method

.method public final a_()I
    .locals 1

    .line 76
    iget v0, p0, Lcom/tkay/expressad/exoplayer/a;->q:I

    return v0
.end method

.method protected final b(J)I
    .locals 3

    .line 315
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/a;->r:Lcom/tkay/expressad/exoplayer/h/y;

    iget-wide v1, p0, Lcom/tkay/expressad/exoplayer/a;->t:J

    sub-long/2addr p1, v1

    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/exoplayer/h/y;->a(J)I

    move-result p1

    return p1
.end method

.method public final b()Lcom/tkay/expressad/exoplayer/z;
    .locals 0

    return-object p0
.end method

.method public final b_()V
    .locals 2

    .line 93
    iget v0, p0, Lcom/tkay/expressad/exoplayer/a;->q:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    invoke-static {v1}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    const/4 v0, 0x2

    .line 94
    iput v0, p0, Lcom/tkay/expressad/exoplayer/a;->q:I

    .line 95
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/a;->n()V

    return-void
.end method

.method public c()Lcom/tkay/expressad/exoplayer/k/n;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public final f()Lcom/tkay/expressad/exoplayer/h/y;
    .locals 1

    .line 111
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/a;->r:Lcom/tkay/expressad/exoplayer/h/y;

    return-object v0
.end method

.method public final g()Z
    .locals 1

    .line 116
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/a;->u:Z

    return v0
.end method

.method public final h()V
    .locals 1

    const/4 v0, 0x1

    .line 121
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/a;->v:Z

    return-void
.end method

.method public final i()Z
    .locals 1

    .line 126
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/a;->v:Z

    return v0
.end method

.method public final j()V
    .locals 1

    .line 131
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/a;->r:Lcom/tkay/expressad/exoplayer/h/y;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/h/y;->c()V

    return-void
.end method

.method public final k()V
    .locals 3

    .line 143
    iget v0, p0, Lcom/tkay/expressad/exoplayer/a;->q:I

    const/4 v1, 0x1

    const/4 v2, 0x2

    if-ne v0, v2, :cond_0

    move v0, v1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 144
    iput v1, p0, Lcom/tkay/expressad/exoplayer/a;->q:I

    .line 145
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/a;->o()V

    return-void
.end method

.method public final l()V
    .locals 3

    .line 150
    iget v0, p0, Lcom/tkay/expressad/exoplayer/a;->q:I

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-ne v0, v1, :cond_0

    goto :goto_0

    :cond_0
    move v1, v2

    :goto_0
    invoke-static {v1}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 151
    iput v2, p0, Lcom/tkay/expressad/exoplayer/a;->q:I

    const/4 v0, 0x0

    .line 152
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/a;->r:Lcom/tkay/expressad/exoplayer/h/y;

    .line 153
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/a;->s:[Lcom/tkay/expressad/exoplayer/m;

    .line 154
    iput-boolean v2, p0, Lcom/tkay/expressad/exoplayer/a;->v:Z

    .line 155
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/a;->p()V

    return-void
.end method

.method public m()I
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method protected n()V
    .locals 0

    return-void
.end method

.method protected o()V
    .locals 0

    return-void
.end method

.method protected p()V
    .locals 0

    return-void
.end method

.method protected final q()[Lcom/tkay/expressad/exoplayer/m;
    .locals 1

    .line 256
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/a;->s:[Lcom/tkay/expressad/exoplayer/m;

    return-object v0
.end method

.method protected final r()Lcom/tkay/expressad/exoplayer/aa;
    .locals 1

    .line 263
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/a;->o:Lcom/tkay/expressad/exoplayer/aa;

    return-object v0
.end method

.method protected final s()I
    .locals 1

    .line 270
    iget v0, p0, Lcom/tkay/expressad/exoplayer/a;->p:I

    return v0
.end method

.method protected final t()Z
    .locals 1

    .line 322
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/a;->u:Z

    if-eqz v0, :cond_0

    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/a;->v:Z

    return v0

    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/a;->r:Lcom/tkay/expressad/exoplayer/h/y;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/h/y;->b()Z

    move-result v0

    return v0
.end method
