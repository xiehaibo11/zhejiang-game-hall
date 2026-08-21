.class public abstract Lcom/tkay/basead/d/b;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/basead/d/b$a;
    }
.end annotation


# instance fields
.field private a:Lcom/tkay/basead/d/b$a;

.field protected b:Landroid/content/Context;

.field protected c:Lcom/tkay/core/common/f/i;

.field protected d:Lcom/tkay/basead/d/c;

.field protected e:Lcom/tkay/core/common/f/z;

.field protected f:Lcom/tkay/core/common/a/g;

.field protected g:Lcom/tkay/basead/a/c;

.field protected h:Lcom/tkay/basead/e/a;

.field protected i:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Lcom/tkay/basead/a/c;",
            ">;"
        }
    .end annotation
.end field

.field protected j:Ljava/lang/String;

.field private k:Z


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/tkay/basead/d/b$a;Lcom/tkay/core/common/f/i;)V
    .locals 1

    .line 71
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 69
    iput-boolean v0, p0, Lcom/tkay/basead/d/b;->k:Z

    .line 72
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/basead/d/b;->b:Landroid/content/Context;

    .line 73
    iput-object p2, p0, Lcom/tkay/basead/d/b;->a:Lcom/tkay/basead/d/b$a;

    .line 74
    iput-object p3, p0, Lcom/tkay/basead/d/b;->c:Lcom/tkay/core/common/f/i;

    return-void
.end method

.method static synthetic a(Lcom/tkay/basead/d/b;Lcom/tkay/core/common/f/h;Lcom/tkay/basead/c/e;Lcom/tkay/basead/e/c;Z)V
    .locals 3

    if-eqz p1, :cond_0

    .line 1275
    new-instance v0, Lcom/tkay/basead/c/i;

    iget-object v1, p0, Lcom/tkay/basead/d/b;->c:Lcom/tkay/core/common/f/i;

    iget-object v1, v1, Lcom/tkay/core/common/f/i;->d:Ljava/lang/String;

    const-string v2, ""

    invoke-direct {v0, v1, v2}, Lcom/tkay/basead/c/i;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    const/16 v1, 0x22

    .line 1276
    invoke-static {v1, p1, v0}, Lcom/tkay/basead/a/b;->a(ILcom/tkay/core/common/f/h;Lcom/tkay/basead/c/i;)V

    .line 1283
    :cond_0
    instance-of p1, p1, Lcom/tkay/core/common/f/y;

    if-eqz p1, :cond_1

    .line 1284
    invoke-static {}, Lcom/tkay/core/basead/b;->a()Lcom/tkay/core/basead/b;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p1

    invoke-static {}, Lcom/tkay/core/basead/b;->a()Lcom/tkay/core/basead/b;

    iget-object v0, p0, Lcom/tkay/basead/d/b;->c:Lcom/tkay/core/common/f/i;

    invoke-static {v0}, Lcom/tkay/core/basead/b;->a(Lcom/tkay/core/common/f/i;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/core/basead/b;->b(Landroid/content/Context;Ljava/lang/String;)V

    :cond_1
    if-eqz p4, :cond_2

    .line 1290
    :try_start_0
    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    move-result-object p1

    iget-object p4, p0, Lcom/tkay/basead/d/b;->c:Lcom/tkay/core/common/f/i;

    iget-object p4, p4, Lcom/tkay/core/common/f/i;->c:Ljava/lang/String;

    invoke-virtual {p1, p4}, Lcom/tkay/core/b/c;->a(Ljava/lang/String;)V

    .line 1291
    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    iget-object p1, p0, Lcom/tkay/basead/d/b;->c:Lcom/tkay/core/common/f/i;

    iget-object p1, p1, Lcom/tkay/core/common/f/i;->c:Ljava/lang/String;

    invoke-static {p1}, Lcom/tkay/core/b/c;->b(Ljava/lang/String;)V

    .line 1292
    invoke-static {}, Lcom/tkay/core/common/a/a;->a()Lcom/tkay/core/common/a/a;

    move-result-object p1

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p4

    invoke-virtual {p4}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p4

    iget-object p0, p0, Lcom/tkay/basead/d/b;->c:Lcom/tkay/core/common/f/i;

    iget-object p0, p0, Lcom/tkay/core/common/f/i;->a:Ljava/lang/String;

    invoke-virtual {p1, p4, p0}, Lcom/tkay/core/common/a/a;->b(Landroid/content/Context;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_2
    if-eqz p3, :cond_3

    .line 1300
    invoke-interface {p3, p2}, Lcom/tkay/basead/e/c;->onAdLoadFailed(Lcom/tkay/basead/c/e;)V

    :cond_3
    return-void
.end method

.method private a(Lcom/tkay/core/common/f/h;Lcom/tkay/basead/c/e;Lcom/tkay/basead/e/c;Z)V
    .locals 3

    if-eqz p1, :cond_0

    .line 275
    new-instance v0, Lcom/tkay/basead/c/i;

    iget-object v1, p0, Lcom/tkay/basead/d/b;->c:Lcom/tkay/core/common/f/i;

    iget-object v1, v1, Lcom/tkay/core/common/f/i;->d:Ljava/lang/String;

    const-string v2, ""

    invoke-direct {v0, v1, v2}, Lcom/tkay/basead/c/i;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    const/16 v1, 0x22

    .line 276
    invoke-static {v1, p1, v0}, Lcom/tkay/basead/a/b;->a(ILcom/tkay/core/common/f/h;Lcom/tkay/basead/c/i;)V

    .line 283
    :cond_0
    instance-of p1, p1, Lcom/tkay/core/common/f/y;

    if-eqz p1, :cond_1

    .line 284
    invoke-static {}, Lcom/tkay/core/basead/b;->a()Lcom/tkay/core/basead/b;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p1

    invoke-static {}, Lcom/tkay/core/basead/b;->a()Lcom/tkay/core/basead/b;

    iget-object v0, p0, Lcom/tkay/basead/d/b;->c:Lcom/tkay/core/common/f/i;

    invoke-static {v0}, Lcom/tkay/core/basead/b;->a(Lcom/tkay/core/common/f/i;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/core/basead/b;->b(Landroid/content/Context;Ljava/lang/String;)V

    :cond_1
    if-eqz p4, :cond_2

    .line 290
    :try_start_0
    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    move-result-object p1

    iget-object p4, p0, Lcom/tkay/basead/d/b;->c:Lcom/tkay/core/common/f/i;

    iget-object p4, p4, Lcom/tkay/core/common/f/i;->c:Ljava/lang/String;

    invoke-virtual {p1, p4}, Lcom/tkay/core/b/c;->a(Ljava/lang/String;)V

    .line 291
    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    iget-object p1, p0, Lcom/tkay/basead/d/b;->c:Lcom/tkay/core/common/f/i;

    iget-object p1, p1, Lcom/tkay/core/common/f/i;->c:Ljava/lang/String;

    invoke-static {p1}, Lcom/tkay/core/b/c;->b(Ljava/lang/String;)V

    .line 292
    invoke-static {}, Lcom/tkay/core/common/a/a;->a()Lcom/tkay/core/common/a/a;

    move-result-object p1

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p4

    invoke-virtual {p4}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p4

    iget-object v0, p0, Lcom/tkay/basead/d/b;->c:Lcom/tkay/core/common/f/i;

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->a:Ljava/lang/String;

    invoke-virtual {p1, p4, v0}, Lcom/tkay/core/common/a/a;->b(Landroid/content/Context;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_2
    if-eqz p3, :cond_3

    .line 300
    invoke-interface {p3, p2}, Lcom/tkay/basead/e/c;->onAdLoadFailed(Lcom/tkay/basead/c/e;)V

    :cond_3
    return-void
.end method

.method static synthetic a(Lcom/tkay/basead/d/b;)Z
    .locals 1

    const/4 v0, 0x1

    .line 48
    iput-boolean v0, p0, Lcom/tkay/basead/d/b;->k:Z

    return v0
.end method

.method private b(Lcom/tkay/basead/e/c;)V
    .locals 3

    .line 166
    :try_start_0
    iget-object v0, p0, Lcom/tkay/basead/d/b;->c:Lcom/tkay/core/common/f/i;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/basead/d/b;->c:Lcom/tkay/core/common/f/i;

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->b:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/tkay/basead/d/b;->c:Lcom/tkay/core/common/f/i;

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->a:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 173
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/d/b;->b:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/basead/d/a/a;->a(Landroid/content/Context;)Lcom/tkay/basead/d/a/a;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/basead/d/b;->c:Lcom/tkay/core/common/f/i;

    new-instance v2, Lcom/tkay/basead/d/b$1;

    invoke-direct {v2, p0, p1}, Lcom/tkay/basead/d/b$1;-><init>(Lcom/tkay/basead/d/b;Lcom/tkay/basead/e/c;)V

    invoke-virtual {v0, v1, v2}, Lcom/tkay/basead/d/a/a;->a(Lcom/tkay/core/common/f/i;Lcom/tkay/basead/d/a/a$a;)V

    return-void

    :cond_1
    :goto_0
    if-eqz p1, :cond_2

    const-string v0, "30001"

    const-string v1, "bidid\u3001placementid can not be null!"

    .line 168
    invoke-static {v0, v1}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object v0

    invoke-interface {p1, v0}, Lcom/tkay/basead/e/c;->onAdLoadFailed(Lcom/tkay/basead/c/e;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_2
    return-void

    :catchall_0
    move-exception v0

    .line 229
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    if-eqz p1, :cond_3

    .line 231
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "-9999"

    invoke-static {v1, v0}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object v0

    invoke-interface {p1, v0}, Lcom/tkay/basead/e/c;->onAdLoadFailed(Lcom/tkay/basead/c/e;)V

    :cond_3
    return-void
.end method

.method private c(Lcom/tkay/basead/e/c;)V
    .locals 4

    .line 239
    :try_start_0
    iget-object v0, p0, Lcom/tkay/basead/d/b;->b:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/basead/d/b/a;->a(Landroid/content/Context;)Lcom/tkay/basead/d/b/a;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/basead/d/b;->c:Lcom/tkay/core/common/f/i;

    iget-object v2, p0, Lcom/tkay/basead/d/b;->j:Ljava/lang/String;

    new-instance v3, Lcom/tkay/basead/d/b$2;

    invoke-direct {v3, p0, p1}, Lcom/tkay/basead/d/b$2;-><init>(Lcom/tkay/basead/d/b;Lcom/tkay/basead/e/c;)V

    invoke-virtual {v0, v1, v2, v3}, Lcom/tkay/basead/d/b/a;->a(Lcom/tkay/core/common/f/i;Ljava/lang/String;Lcom/tkay/basead/d/b/a$a;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    .line 265
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    if-eqz p1, :cond_0

    .line 267
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "-9999"

    invoke-static {v1, v0}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object v0

    invoke-interface {p1, v0}, Lcom/tkay/basead/e/c;->onAdLoadFailed(Lcom/tkay/basead/c/e;)V

    :cond_0
    return-void
.end method


# virtual methods
.method protected final a(Lcom/tkay/core/common/f/z;)Ljava/lang/String;
    .locals 3

    .line 156
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/tkay/basead/d/b;->c:Lcom/tkay/core/common/f/i;

    iget-object v1, v1, Lcom/tkay/core/common/f/i;->b:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/basead/d/b;->c:Lcom/tkay/core/common/f/i;

    iget-object v1, v1, Lcom/tkay/core/common/f/i;->c:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/basead/d/b;->c:Lcom/tkay/core/common/f/i;

    iget v1, v1, Lcom/tkay/core/common/f/i;->f:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/z;->p()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public final a(Lcom/tkay/basead/d/c;)V
    .locals 3

    .line 82
    iput-object p1, p0, Lcom/tkay/basead/d/b;->d:Lcom/tkay/basead/d/c;

    .line 83
    iget-object p1, p0, Lcom/tkay/basead/d/b;->c:Lcom/tkay/core/common/f/i;

    iget-object p1, p1, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    instance-of p1, p1, Lcom/tkay/core/common/f/aa;

    if-eqz p1, :cond_1

    .line 84
    iget-object p1, p0, Lcom/tkay/basead/d/b;->c:Lcom/tkay/core/common/f/i;

    iget-object p1, p1, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    check-cast p1, Lcom/tkay/core/common/f/aa;

    iget-object v0, p0, Lcom/tkay/basead/d/b;->d:Lcom/tkay/basead/d/c;

    if-eqz p1, :cond_1

    if-nez v0, :cond_0

    goto :goto_0

    .line 1029
    :cond_0
    invoke-virtual {v0}, Lcom/tkay/basead/d/c;->a()I

    move-result v1

    invoke-virtual {p1, v1}, Lcom/tkay/core/common/f/aa;->v(I)V

    .line 1030
    invoke-virtual {v0}, Lcom/tkay/basead/d/c;->b()I

    move-result v1

    invoke-virtual {p1, v1}, Lcom/tkay/core/common/f/aa;->w(I)V

    .line 1032
    invoke-virtual {v0}, Lcom/tkay/basead/d/c;->d()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Lcom/tkay/core/common/f/aa;->a(Ljava/lang/String;)V

    .line 1033
    invoke-virtual {v0}, Lcom/tkay/basead/d/c;->c()I

    move-result v1

    invoke-virtual {p1, v1}, Lcom/tkay/core/common/f/aa;->p(I)V

    .line 1035
    invoke-virtual {v0}, Lcom/tkay/basead/d/c;->e()I

    move-result v1

    invoke-virtual {p1, v1}, Lcom/tkay/core/common/f/aa;->o(I)V

    .line 1036
    invoke-virtual {v0}, Lcom/tkay/basead/d/c;->f()I

    move-result v1

    int-to-long v1, v1

    invoke-virtual {p1, v1, v2}, Lcom/tkay/core/common/f/aa;->b(J)V

    .line 1037
    invoke-virtual {v0}, Lcom/tkay/basead/d/c;->g()I

    move-result v1

    invoke-virtual {p1, v1}, Lcom/tkay/core/common/f/aa;->n(I)V

    .line 1039
    invoke-virtual {v0}, Lcom/tkay/basead/d/c;->h()I

    move-result v1

    invoke-virtual {p1, v1}, Lcom/tkay/core/common/f/aa;->a(I)V

    .line 1040
    invoke-virtual {v0}, Lcom/tkay/basead/d/c;->i()I

    move-result v1

    invoke-virtual {p1, v1}, Lcom/tkay/core/common/f/aa;->b(I)V

    .line 1042
    invoke-virtual {v0}, Lcom/tkay/basead/d/c;->j()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/tkay/core/common/f/aa;->b(Ljava/lang/String;)V

    nop

    :cond_1
    :goto_0
    return-void
.end method

.method public final a(Lcom/tkay/basead/e/a;)V
    .locals 0

    .line 90
    iput-object p1, p0, Lcom/tkay/basead/d/b;->h:Lcom/tkay/basead/e/a;

    return-void
.end method

.method public final a(Lcom/tkay/basead/e/c;)V
    .locals 5

    .line 144
    sget-object v0, Lcom/tkay/basead/d/b$4;->a:[I

    iget-object v1, p0, Lcom/tkay/basead/d/b;->a:Lcom/tkay/basead/d/b$a;

    invoke-virtual {v1}, Lcom/tkay/basead/d/b$a;->ordinal()I

    move-result v1

    aget v0, v0, v1

    const/4 v1, 0x1

    const-string v2, "-9999"

    if-eq v0, v1, :cond_1

    const/4 v1, 0x2

    if-eq v0, v1, :cond_0

    goto :goto_0

    .line 1239
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/tkay/basead/d/b;->b:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/basead/d/b/a;->a(Landroid/content/Context;)Lcom/tkay/basead/d/b/a;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/basead/d/b;->c:Lcom/tkay/core/common/f/i;

    iget-object v3, p0, Lcom/tkay/basead/d/b;->j:Ljava/lang/String;

    new-instance v4, Lcom/tkay/basead/d/b$2;

    invoke-direct {v4, p0, p1}, Lcom/tkay/basead/d/b$2;-><init>(Lcom/tkay/basead/d/b;Lcom/tkay/basead/e/c;)V

    invoke-virtual {v0, v1, v3, v4}, Lcom/tkay/basead/d/b/a;->a(Lcom/tkay/core/common/f/i;Ljava/lang/String;Lcom/tkay/basead/d/b/a$a;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    .line 1265
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 1267
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object v0

    invoke-interface {p1, v0}, Lcom/tkay/basead/e/c;->onAdLoadFailed(Lcom/tkay/basead/c/e;)V

    :goto_0
    return-void

    .line 1166
    :cond_1
    :try_start_1
    iget-object v0, p0, Lcom/tkay/basead/d/b;->c:Lcom/tkay/core/common/f/i;

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/tkay/basead/d/b;->c:Lcom/tkay/core/common/f/i;

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->b:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/tkay/basead/d/b;->c:Lcom/tkay/core/common/f/i;

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->a:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    goto :goto_1

    .line 1173
    :cond_2
    iget-object v0, p0, Lcom/tkay/basead/d/b;->b:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/basead/d/a/a;->a(Landroid/content/Context;)Lcom/tkay/basead/d/a/a;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/basead/d/b;->c:Lcom/tkay/core/common/f/i;

    new-instance v3, Lcom/tkay/basead/d/b$1;

    invoke-direct {v3, p0, p1}, Lcom/tkay/basead/d/b$1;-><init>(Lcom/tkay/basead/d/b;Lcom/tkay/basead/e/c;)V

    invoke-virtual {v0, v1, v3}, Lcom/tkay/basead/d/a/a;->a(Lcom/tkay/core/common/f/i;Lcom/tkay/basead/d/a/a$a;)V

    return-void

    :cond_3
    :goto_1
    const-string v0, "30001"

    const-string v1, "bidid\u3001placementid can not be null!"

    .line 1168
    invoke-static {v0, v1}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object v0

    invoke-interface {p1, v0}, Lcom/tkay/basead/e/c;->onAdLoadFailed(Lcom/tkay/basead/c/e;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    return-void

    :catchall_1
    move-exception v0

    .line 1229
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 1231
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object v0

    invoke-interface {p1, v0}, Lcom/tkay/basead/e/c;->onAdLoadFailed(Lcom/tkay/basead/c/e;)V

    return-void
.end method

.method protected final a(Lcom/tkay/core/common/f/f;)V
    .locals 3

    .line 393
    invoke-virtual {p1}, Lcom/tkay/core/common/f/f;->c()I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_1

    .line 395
    invoke-static {}, Lcom/tkay/core/common/a/b;->a()Lcom/tkay/core/common/a/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/a/b;->b()V

    .line 397
    iget-object v0, p0, Lcom/tkay/basead/d/b;->b:Landroid/content/Context;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/f;->B()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v0

    const-string v1, ",packagename:"

    if-eqz v0, :cond_0

    .line 398
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v2, "check offer installed(onAdDataLoaded):ture,dsp offerid:"

    invoke-direct {v0, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/tkay/core/common/f/f;->U()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/f;->B()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 399
    invoke-static {}, Lcom/tkay/core/common/a/b;->a()Lcom/tkay/core/common/a/b;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/tkay/core/common/a/b;->c(Lcom/tkay/core/common/f/f;)V

    return-void

    .line 401
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v2, "check offer installed(onAdDataLoaded):false,need record show,dsp offerid:"

    invoke-direct {v0, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/tkay/core/common/f/f;->U()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/f;->B()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 403
    invoke-static {}, Lcom/tkay/core/common/a/b;->a()Lcom/tkay/core/common/a/b;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/tkay/core/common/a/b;->a(Lcom/tkay/core/common/f/f;)V

    :cond_1
    return-void
.end method

.method protected final declared-synchronized a(Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;)V
    .locals 2

    monitor-enter p0

    .line 312
    :try_start_0
    iget-object v0, p0, Lcom/tkay/basead/d/b;->g:Lcom/tkay/basead/a/c;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v0, :cond_0

    .line 313
    monitor-exit p0

    return-void

    .line 315
    :cond_0
    :try_start_1
    iget-object v0, p0, Lcom/tkay/basead/d/b;->i:Ljava/util/concurrent/ConcurrentHashMap;

    if-nez v0, :cond_1

    .line 316
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    const/4 v1, 0x2

    invoke-direct {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;-><init>(I)V

    iput-object v0, p0, Lcom/tkay/basead/d/b;->i:Ljava/util/concurrent/ConcurrentHashMap;

    .line 319
    :cond_1
    iget-object v0, p0, Lcom/tkay/basead/d/b;->i:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/basead/a/c;

    if-nez v0, :cond_2

    .line 321
    iget-object v0, p0, Lcom/tkay/basead/d/b;->g:Lcom/tkay/basead/a/c;

    invoke-static {v0, p1}, Lcom/tkay/basead/d/a/b;->a(Lcom/tkay/basead/a/c;Lcom/tkay/expressad/foundation/d/c;)Lcom/tkay/basead/a/c;

    move-result-object v0

    .line 322
    iget-object v1, p0, Lcom/tkay/basead/d/b;->i:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1, v0}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_2
    if-eqz v0, :cond_3

    .line 325
    new-instance p1, Lcom/tkay/basead/c/i;

    iget-object v1, p0, Lcom/tkay/basead/d/b;->c:Lcom/tkay/core/common/f/i;

    iget-object v1, v1, Lcom/tkay/core/common/f/i;->d:Ljava/lang/String;

    invoke-direct {p1, v1, p2}, Lcom/tkay/basead/c/i;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 326
    new-instance p2, Lcom/tkay/basead/c/a;

    invoke-direct {p2}, Lcom/tkay/basead/c/a;-><init>()V

    .line 327
    iput-object p2, p1, Lcom/tkay/basead/c/i;->g:Lcom/tkay/basead/c/a;

    .line 328
    new-instance p2, Lcom/tkay/basead/d/b$3;

    invoke-direct {p2, p0}, Lcom/tkay/basead/d/b$3;-><init>(Lcom/tkay/basead/d/b;)V

    invoke-virtual {v0, p2}, Lcom/tkay/basead/a/c;->a(Lcom/tkay/basead/a/c$b;)V

    .line 353
    invoke-virtual {v0, p1}, Lcom/tkay/basead/a/c;->a(Lcom/tkay/basead/c/i;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 357
    :cond_3
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    .line 356
    :try_start_2
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    .line 359
    monitor-exit p0

    return-void

    :catchall_1
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final a(Ljava/lang/String;)V
    .locals 0

    .line 78
    iput-object p1, p0, Lcom/tkay/basead/d/b;->j:Ljava/lang/String;

    return-void
.end method

.method public b()V
    .locals 1

    const/4 v0, 0x0

    .line 389
    iput-object v0, p0, Lcom/tkay/basead/d/b;->e:Lcom/tkay/core/common/f/z;

    return-void
.end method

.method public final c()Z
    .locals 4

    .line 95
    sget-object v0, Lcom/tkay/basead/d/b$4;->a:[I

    iget-object v1, p0, Lcom/tkay/basead/d/b;->a:Lcom/tkay/basead/d/b$a;

    invoke-virtual {v1}, Lcom/tkay/basead/d/b$a;->ordinal()I

    move-result v1

    aget v0, v0, v1

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-eq v0, v2, :cond_4

    const/4 v3, 0x2

    if-eq v0, v3, :cond_0

    return v1

    .line 117
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/d/b;->e:Lcom/tkay/core/common/f/z;

    if-nez v0, :cond_1

    .line 118
    iget-object v0, p0, Lcom/tkay/basead/d/b;->b:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/basead/d/b/a;->a(Landroid/content/Context;)Lcom/tkay/basead/d/b/a;

    move-result-object v0

    iget-object v3, p0, Lcom/tkay/basead/d/b;->c:Lcom/tkay/core/common/f/i;

    invoke-virtual {v0, v3}, Lcom/tkay/basead/d/b/a;->a(Lcom/tkay/core/common/f/i;)Lcom/tkay/core/common/f/y;

    move-result-object v0

    .line 119
    iput-object v0, p0, Lcom/tkay/basead/d/b;->e:Lcom/tkay/core/common/f/z;

    .line 122
    :cond_1
    iget-boolean v0, p0, Lcom/tkay/basead/d/b;->k:Z

    if-eqz v0, :cond_2

    return v2

    .line 126
    :cond_2
    iget-object v0, p0, Lcom/tkay/basead/d/b;->e:Lcom/tkay/core/common/f/z;

    if-eqz v0, :cond_3

    instance-of v3, v0, Lcom/tkay/core/common/f/y;

    if-eqz v3, :cond_3

    check-cast v0, Lcom/tkay/core/common/f/y;

    .line 128
    invoke-virtual {v0}, Lcom/tkay/core/common/f/y;->N()Z

    move-result v0

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/tkay/basead/d/b;->e:Lcom/tkay/core/common/f/z;

    iget-object v3, p0, Lcom/tkay/basead/d/b;->c:Lcom/tkay/core/common/f/i;

    .line 129
    invoke-static {v0, v3}, Lcom/tkay/basead/a/b/c;->a(Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/i;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 130
    iput-boolean v2, p0, Lcom/tkay/basead/d/b;->k:Z

    return v2

    :cond_3
    return v1

    .line 97
    :cond_4
    iget-object v0, p0, Lcom/tkay/basead/d/b;->e:Lcom/tkay/core/common/f/z;

    if-nez v0, :cond_5

    .line 98
    iget-object v0, p0, Lcom/tkay/basead/d/b;->b:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/basead/d/a/a;->a(Landroid/content/Context;)Lcom/tkay/basead/d/a/a;

    move-result-object v0

    iget-object v3, p0, Lcom/tkay/basead/d/b;->c:Lcom/tkay/core/common/f/i;

    invoke-virtual {v0, v3}, Lcom/tkay/basead/d/a/a;->a(Lcom/tkay/core/common/f/i;)Lcom/tkay/core/common/f/f;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/basead/d/b;->e:Lcom/tkay/core/common/f/z;

    .line 101
    :cond_5
    iget-object v0, p0, Lcom/tkay/basead/d/b;->f:Lcom/tkay/core/common/a/g;

    if-eqz v0, :cond_6

    .line 103
    invoke-interface {v0}, Lcom/tkay/core/common/a/g;->isReady()Z

    move-result v0

    return v0

    .line 106
    :cond_6
    iget-boolean v0, p0, Lcom/tkay/basead/d/b;->k:Z

    if-eqz v0, :cond_7

    return v2

    .line 110
    :cond_7
    iget-object v0, p0, Lcom/tkay/basead/d/b;->e:Lcom/tkay/core/common/f/z;

    if-eqz v0, :cond_8

    iget-object v3, p0, Lcom/tkay/basead/d/b;->c:Lcom/tkay/core/common/f/i;

    invoke-static {v0, v3}, Lcom/tkay/basead/a/b/c;->a(Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/i;)Z

    move-result v0

    if-eqz v0, :cond_8

    .line 111
    iput-boolean v2, p0, Lcom/tkay/basead/d/b;->k:Z

    return v2

    :cond_8
    return v1
.end method

.method protected final declared-synchronized d()V
    .locals 2

    monitor-enter p0

    .line 367
    :try_start_0
    iget-object v0, p0, Lcom/tkay/basead/d/b;->g:Lcom/tkay/basead/a/c;

    if-eqz v0, :cond_0

    .line 368
    iget-object v0, p0, Lcom/tkay/basead/d/b;->g:Lcom/tkay/basead/a/c;

    invoke-virtual {v0}, Lcom/tkay/basead/a/c;->d()V

    const/4 v0, 0x0

    .line 369
    iput-object v0, p0, Lcom/tkay/basead/d/b;->g:Lcom/tkay/basead/a/c;

    .line 371
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/d/b;->i:Ljava/util/concurrent/ConcurrentHashMap;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/tkay/basead/d/b;->i:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0}, Ljava/util/concurrent/ConcurrentHashMap;->size()I

    move-result v0

    if-lez v0, :cond_2

    .line 372
    iget-object v0, p0, Lcom/tkay/basead/d/b;->i:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0}, Ljava/util/concurrent/ConcurrentHashMap;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    .line 373
    :cond_1
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    .line 374
    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 375
    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/basead/a/c;

    if-eqz v1, :cond_1

    .line 377
    invoke-virtual {v1}, Lcom/tkay/basead/a/c;->d()V

    .line 378
    invoke-interface {v0}, Ljava/util/Iterator;->remove()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    .line 382
    :cond_2
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final e()Lcom/tkay/core/common/f/h;
    .locals 1

    .line 385
    iget-object v0, p0, Lcom/tkay/basead/d/b;->e:Lcom/tkay/core/common/f/z;

    return-object v0
.end method
