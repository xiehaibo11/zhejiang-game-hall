.class public final Lcom/tkay/core/common/d;
.super Ljava/lang/Object;


# instance fields
.field a:Lcom/tkay/core/common/f/d;

.field b:Lcom/tkay/core/common/f/aj;

.field c:J

.field d:Lcom/tkay/core/api/TYBaseAdAdapter;

.field e:I

.field f:Ljava/lang/Runnable;

.field g:Ljava/lang/Runnable;

.field h:Z

.field i:Z

.field private j:Ljava/lang/Boolean;


# direct methods
.method private constructor <init>(I)V
    .locals 0

    .line 36
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 37
    iput p1, p0, Lcom/tkay/core/common/d;->e:I

    return-void
.end method

.method private a(J)V
    .locals 0

    .line 62
    iput-wide p1, p0, Lcom/tkay/core/common/d;->c:J

    return-void
.end method

.method private a(JLjava/lang/Runnable;JLjava/lang/Runnable;)V
    .locals 3

    const-wide/16 v0, -0x1

    cmp-long v2, p1, v0

    if-eqz v2, :cond_0

    if-eqz p3, :cond_0

    .line 80
    new-instance v2, Lcom/tkay/core/common/d$1;

    invoke-direct {v2, p0, p3}, Lcom/tkay/core/common/d$1;-><init>(Lcom/tkay/core/common/d;Ljava/lang/Runnable;)V

    iput-object v2, p0, Lcom/tkay/core/common/d;->f:Ljava/lang/Runnable;

    .line 90
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p3

    iget-object v2, p0, Lcom/tkay/core/common/d;->f:Ljava/lang/Runnable;

    invoke-virtual {p3, v2, p1, p2}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;J)V

    :cond_0
    cmp-long p1, p4, v0

    if-eqz p1, :cond_1

    if-eqz p6, :cond_1

    .line 94
    new-instance p1, Lcom/tkay/core/common/d$2;

    invoke-direct {p1, p0, p6}, Lcom/tkay/core/common/d$2;-><init>(Lcom/tkay/core/common/d;Ljava/lang/Runnable;)V

    iput-object p1, p0, Lcom/tkay/core/common/d;->g:Ljava/lang/Runnable;

    .line 104
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    iget-object p2, p0, Lcom/tkay/core/common/d;->g:Ljava/lang/Runnable;

    invoke-virtual {p1, p2, p4, p5}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;J)V

    :cond_1
    return-void
.end method

.method private a(Lcom/tkay/core/api/TYBaseAdAdapter;)V
    .locals 0

    .line 66
    iput-object p1, p0, Lcom/tkay/core/common/d;->d:Lcom/tkay/core/api/TYBaseAdAdapter;

    return-void
.end method

.method private a(Lcom/tkay/core/common/f/aj;)V
    .locals 0

    .line 146
    iput-object p1, p0, Lcom/tkay/core/common/d;->b:Lcom/tkay/core/common/f/aj;

    return-void
.end method

.method private a(Lcom/tkay/core/common/f/d;)V
    .locals 0

    .line 54
    iput-object p1, p0, Lcom/tkay/core/common/d;->a:Lcom/tkay/core/common/f/d;

    return-void
.end method

.method private a(Z)V
    .locals 0

    .line 128
    invoke-static {p1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/common/d;->j:Ljava/lang/Boolean;

    return-void
.end method

.method private a()Z
    .locals 3

    .line 1045
    iget-object v0, p0, Lcom/tkay/core/common/d;->j:Ljava/lang/Boolean;

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eqz v0, :cond_0

    move v0, v1

    goto :goto_0

    :cond_0
    move v0, v2

    :goto_0
    if-eqz v0, :cond_4

    .line 1137
    iget-boolean v0, p0, Lcom/tkay/core/common/d;->h:Z

    if-nez v0, :cond_2

    iget-boolean v0, p0, Lcom/tkay/core/common/d;->i:Z

    if-eqz v0, :cond_1

    goto :goto_1

    :cond_1
    move v0, v2

    goto :goto_2

    :cond_2
    :goto_1
    move v0, v1

    :goto_2
    if-nez v0, :cond_3

    goto :goto_3

    :cond_3
    return v2

    :cond_4
    :goto_3
    return v1
.end method

.method private b()Z
    .locals 1

    .line 45
    iget-object v0, p0, Lcom/tkay/core/common/d;->j:Ljava/lang/Boolean;

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method private c()Lcom/tkay/core/common/f/d;
    .locals 1

    .line 50
    iget-object v0, p0, Lcom/tkay/core/common/d;->a:Lcom/tkay/core/common/f/d;

    return-object v0
.end method

.method private d()J
    .locals 2

    .line 58
    iget-wide v0, p0, Lcom/tkay/core/common/d;->c:J

    return-wide v0
.end method

.method private e()V
    .locals 1

    const/4 v0, 0x0

    .line 70
    iput-object v0, p0, Lcom/tkay/core/common/d;->d:Lcom/tkay/core/api/TYBaseAdAdapter;

    return-void
.end method

.method private f()I
    .locals 1

    .line 74
    iget v0, p0, Lcom/tkay/core/common/d;->e:I

    return v0
.end method

.method private g()V
    .locals 3

    .line 2114
    iget-object v0, p0, Lcom/tkay/core/common/d;->f:Ljava/lang/Runnable;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 2115
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    iget-object v2, p0, Lcom/tkay/core/common/d;->f:Ljava/lang/Runnable;

    invoke-virtual {v0, v2}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/Runnable;)V

    .line 2116
    iput-object v1, p0, Lcom/tkay/core/common/d;->f:Ljava/lang/Runnable;

    .line 2121
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/common/d;->g:Ljava/lang/Runnable;

    if-eqz v0, :cond_1

    .line 2122
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    iget-object v2, p0, Lcom/tkay/core/common/d;->g:Ljava/lang/Runnable;

    invoke-virtual {v0, v2}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/Runnable;)V

    .line 2123
    iput-object v1, p0, Lcom/tkay/core/common/d;->g:Ljava/lang/Runnable;

    :cond_1
    return-void
.end method

.method private h()V
    .locals 2

    .line 114
    iget-object v0, p0, Lcom/tkay/core/common/d;->f:Ljava/lang/Runnable;

    if-eqz v0, :cond_0

    .line 115
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/common/d;->f:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/Runnable;)V

    const/4 v0, 0x0

    .line 116
    iput-object v0, p0, Lcom/tkay/core/common/d;->f:Ljava/lang/Runnable;

    :cond_0
    return-void
.end method

.method private i()V
    .locals 2

    .line 121
    iget-object v0, p0, Lcom/tkay/core/common/d;->g:Ljava/lang/Runnable;

    if-eqz v0, :cond_0

    .line 122
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/common/d;->g:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/Runnable;)V

    const/4 v0, 0x0

    .line 123
    iput-object v0, p0, Lcom/tkay/core/common/d;->g:Ljava/lang/Runnable;

    :cond_0
    return-void
.end method

.method private j()Ljava/lang/Boolean;
    .locals 1

    .line 132
    iget-object v0, p0, Lcom/tkay/core/common/d;->j:Ljava/lang/Boolean;

    return-object v0
.end method

.method private k()Z
    .locals 1

    .line 137
    iget-boolean v0, p0, Lcom/tkay/core/common/d;->h:Z

    if-nez v0, :cond_1

    iget-boolean v0, p0, Lcom/tkay/core/common/d;->i:Z

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    return v0

    :cond_1
    :goto_0
    const/4 v0, 0x1

    return v0
.end method

.method private l()Lcom/tkay/core/common/f/aj;
    .locals 1

    .line 142
    iget-object v0, p0, Lcom/tkay/core/common/d;->b:Lcom/tkay/core/common/f/aj;

    return-object v0
.end method
