.class final Lcom/tkay/expressad/exoplayer/e;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/k/n;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/e$a;
    }
.end annotation


# instance fields
.field private final a:Lcom/tkay/expressad/exoplayer/k/z;

.field private final b:Lcom/tkay/expressad/exoplayer/e$a;

.field private c:Lcom/tkay/expressad/exoplayer/y;

.field private d:Lcom/tkay/expressad/exoplayer/k/n;


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/exoplayer/e$a;Lcom/tkay/expressad/exoplayer/k/c;)V
    .locals 0

    .line 58
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 59
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/e;->b:Lcom/tkay/expressad/exoplayer/e$a;

    .line 60
    new-instance p1, Lcom/tkay/expressad/exoplayer/k/z;

    invoke-direct {p1, p2}, Lcom/tkay/expressad/exoplayer/k/z;-><init>(Lcom/tkay/expressad/exoplayer/k/c;)V

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/e;->a:Lcom/tkay/expressad/exoplayer/k/z;

    return-void
.end method

.method private f()V
    .locals 3

    .line 161
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e;->d:Lcom/tkay/expressad/exoplayer/k/n;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/k/n;->d()J

    move-result-wide v0

    .line 162
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/e;->a:Lcom/tkay/expressad/exoplayer/k/z;

    invoke-virtual {v2, v0, v1}, Lcom/tkay/expressad/exoplayer/k/z;->a(J)V

    .line 163
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e;->d:Lcom/tkay/expressad/exoplayer/k/n;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/k/n;->e()Lcom/tkay/expressad/exoplayer/v;

    move-result-object v0

    .line 164
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/e;->a:Lcom/tkay/expressad/exoplayer/k/z;

    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/k/z;->e()Lcom/tkay/expressad/exoplayer/v;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/v;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 165
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/e;->a:Lcom/tkay/expressad/exoplayer/k/z;

    invoke-virtual {v1, v0}, Lcom/tkay/expressad/exoplayer/k/z;->a(Lcom/tkay/expressad/exoplayer/v;)Lcom/tkay/expressad/exoplayer/v;

    .line 166
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/e;->b:Lcom/tkay/expressad/exoplayer/e$a;

    invoke-interface {v1, v0}, Lcom/tkay/expressad/exoplayer/e$a;->a(Lcom/tkay/expressad/exoplayer/v;)V

    :cond_0
    return-void
.end method

.method private g()Z
    .locals 1

    .line 175
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e;->c:Lcom/tkay/expressad/exoplayer/y;

    if-eqz v0, :cond_1

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/y;->v()Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e;->c:Lcom/tkay/expressad/exoplayer/y;

    .line 176
    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/y;->u()Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e;->c:Lcom/tkay/expressad/exoplayer/y;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/y;->g()Z

    move-result v0

    if-nez v0, :cond_1

    :cond_0
    const/4 v0, 0x1

    return v0

    :cond_1
    const/4 v0, 0x0

    return v0
.end method


# virtual methods
.method public final a(Lcom/tkay/expressad/exoplayer/v;)Lcom/tkay/expressad/exoplayer/v;
    .locals 1

    .line 146
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e;->d:Lcom/tkay/expressad/exoplayer/k/n;

    if-eqz v0, :cond_0

    .line 147
    invoke-interface {v0, p1}, Lcom/tkay/expressad/exoplayer/k/n;->a(Lcom/tkay/expressad/exoplayer/v;)Lcom/tkay/expressad/exoplayer/v;

    move-result-object p1

    .line 149
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e;->a:Lcom/tkay/expressad/exoplayer/k/z;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/exoplayer/k/z;->a(Lcom/tkay/expressad/exoplayer/v;)Lcom/tkay/expressad/exoplayer/v;

    .line 150
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e;->b:Lcom/tkay/expressad/exoplayer/e$a;

    invoke-interface {v0, p1}, Lcom/tkay/expressad/exoplayer/e$a;->a(Lcom/tkay/expressad/exoplayer/v;)V

    return-object p1
.end method

.method public final a()V
    .locals 1

    .line 67
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e;->a:Lcom/tkay/expressad/exoplayer/k/z;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/z;->a()V

    return-void
.end method

.method public final a(J)V
    .locals 1

    .line 83
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e;->a:Lcom/tkay/expressad/exoplayer/k/z;

    invoke-virtual {v0, p1, p2}, Lcom/tkay/expressad/exoplayer/k/z;->a(J)V

    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/y;)V
    .locals 2

    .line 95
    invoke-interface {p1}, Lcom/tkay/expressad/exoplayer/y;->c()Lcom/tkay/expressad/exoplayer/k/n;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 96
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/e;->d:Lcom/tkay/expressad/exoplayer/k/n;

    if-eq v0, v1, :cond_1

    if-nez v1, :cond_0

    .line 101
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/e;->d:Lcom/tkay/expressad/exoplayer/k/n;

    .line 102
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/e;->c:Lcom/tkay/expressad/exoplayer/y;

    .line 103
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/e;->a:Lcom/tkay/expressad/exoplayer/k/z;

    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/k/z;->e()Lcom/tkay/expressad/exoplayer/v;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/tkay/expressad/exoplayer/k/n;->a(Lcom/tkay/expressad/exoplayer/v;)Lcom/tkay/expressad/exoplayer/v;

    .line 104
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/e;->f()V

    goto :goto_0

    .line 98
    :cond_0
    new-instance p1, Ljava/lang/IllegalStateException;

    const-string v0, "Multiple renderer media clocks enabled."

    invoke-direct {p1, v0}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    invoke-static {p1}, Lcom/tkay/expressad/exoplayer/g;->a(Ljava/lang/RuntimeException;)Lcom/tkay/expressad/exoplayer/g;

    move-result-object p1

    throw p1

    :cond_1
    :goto_0
    return-void
.end method

.method public final b()V
    .locals 1

    .line 74
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e;->a:Lcom/tkay/expressad/exoplayer/k/z;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/z;->b()V

    return-void
.end method

.method public final b(Lcom/tkay/expressad/exoplayer/y;)V
    .locals 1

    .line 115
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e;->c:Lcom/tkay/expressad/exoplayer/y;

    if-ne p1, v0, :cond_0

    const/4 p1, 0x0

    .line 116
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/e;->d:Lcom/tkay/expressad/exoplayer/k/n;

    .line 117
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/e;->c:Lcom/tkay/expressad/exoplayer/y;

    :cond_0
    return-void
.end method

.method public final c()J
    .locals 2

    .line 125
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/e;->g()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 126
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/e;->f()V

    .line 127
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e;->d:Lcom/tkay/expressad/exoplayer/k/n;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/k/n;->d()J

    move-result-wide v0

    return-wide v0

    .line 129
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e;->a:Lcom/tkay/expressad/exoplayer/k/z;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/z;->d()J

    move-result-wide v0

    return-wide v0
.end method

.method public final d()J
    .locals 2

    .line 137
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/e;->g()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 138
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e;->d:Lcom/tkay/expressad/exoplayer/k/n;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/k/n;->d()J

    move-result-wide v0

    return-wide v0

    .line 140
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e;->a:Lcom/tkay/expressad/exoplayer/k/z;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/z;->d()J

    move-result-wide v0

    return-wide v0
.end method

.method public final e()Lcom/tkay/expressad/exoplayer/v;
    .locals 1

    .line 156
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e;->d:Lcom/tkay/expressad/exoplayer/k/n;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/k/n;->e()Lcom/tkay/expressad/exoplayer/v;

    move-result-object v0

    return-object v0

    .line 157
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e;->a:Lcom/tkay/expressad/exoplayer/k/z;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/z;->e()Lcom/tkay/expressad/exoplayer/v;

    move-result-object v0

    return-object v0
.end method
