.class final Lcom/loc/br$f;
.super Ljava/lang/Object;
.source "HttpUrlUtil.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/loc/br;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "f"
.end annotation


# instance fields
.field a:J

.field b:J

.field c:Lcom/loc/br$c;

.field d:Lcom/loc/br$a;

.field e:Lcom/loc/br$c;

.field f:Ljava/lang/String;

.field g:Ljava/net/URL;

.field final synthetic h:Lcom/loc/br;


# direct methods
.method constructor <init>(Lcom/loc/br;)V
    .locals 2

    iput-object p1, p0, Lcom/loc/br$f;->h:Lcom/loc/br;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lcom/loc/br$f;->a:J

    iput-wide v0, p0, Lcom/loc/br$f;->b:J

    new-instance p1, Lcom/loc/br$c;

    invoke-direct {p1}, Lcom/loc/br$c;-><init>()V

    iput-object p1, p0, Lcom/loc/br$f;->c:Lcom/loc/br$c;

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 5

    iget-object v0, p0, Lcom/loc/br$f;->c:Lcom/loc/br$c;

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    iget-wide v3, p0, Lcom/loc/br$f;->b:J

    sub-long/2addr v1, v3

    iput-wide v1, v0, Lcom/loc/br$c;->h:J

    return-void
.end method

.method public final a(I)V
    .locals 5

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    const-string v1, "----errorcode-----"

    invoke-virtual {v1, v0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    invoke-static {}, Lcom/loc/br;->a()V

    :try_start_0
    iget-object v0, p0, Lcom/loc/br$f;->c:Lcom/loc/br$c;

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    iget-wide v3, p0, Lcom/loc/br$f;->a:J

    sub-long/2addr v1, v3

    iput-wide v1, v0, Lcom/loc/br$c;->f:J

    iget-object v0, p0, Lcom/loc/br$f;->c:Lcom/loc/br$c;

    iput p1, v0, Lcom/loc/br$c;->m:I

    iget-object p1, p0, Lcom/loc/br$f;->c:Lcom/loc/br$c;

    iget-object p1, p1, Lcom/loc/br$c;->b:Lcom/loc/bt$b;

    invoke-virtual {p1}, Lcom/loc/bt$b;->e()Z

    move-result p1

    const/4 v0, 0x0

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/loc/br$f;->c:Lcom/loc/br$c;

    iget-object p1, p1, Lcom/loc/br$c;->e:Ljava/lang/String;

    invoke-static {v0, p1}, Lcom/loc/m;->a(ZLjava/lang/String;)V

    :cond_0
    iget-object p1, p0, Lcom/loc/br$f;->h:Lcom/loc/br;

    iget-object v1, p0, Lcom/loc/br$f;->c:Lcom/loc/br$c;

    iget-object v1, v1, Lcom/loc/br$c;->e:Ljava/lang/String;

    invoke-static {p1, v1}, Lcom/loc/br;->a(Lcom/loc/br;Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_3

    iget-object v1, p0, Lcom/loc/br$f;->h:Lcom/loc/br;

    invoke-static {v1}, Lcom/loc/br;->b(Lcom/loc/br;)Z

    move-result v1

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/loc/br$f;->h:Lcom/loc/br;

    invoke-static {v1}, Lcom/loc/br;->a(Lcom/loc/br;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    iget-object v1, p0, Lcom/loc/br$f;->c:Lcom/loc/br$c;

    iget-object v1, v1, Lcom/loc/br$c;->b:Lcom/loc/bt$b;

    invoke-virtual {v1}, Lcom/loc/bt$b;->b()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-static {}, Lcom/loc/m;->d()V

    :cond_1
    iget-object v1, p0, Lcom/loc/br$f;->c:Lcom/loc/br$c;

    iget-object v1, v1, Lcom/loc/br$c;->b:Lcom/loc/bt$b;

    invoke-virtual {v1}, Lcom/loc/bt$b;->c()Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/loc/br$f;->c:Lcom/loc/br$c;

    iget-object v1, v1, Lcom/loc/br$c;->b:Lcom/loc/bt$b;

    invoke-virtual {v1}, Lcom/loc/bt$b;->c()Z

    move-result v1

    iget-object v2, p0, Lcom/loc/br$f;->c:Lcom/loc/br$c;

    iget-object v2, v2, Lcom/loc/br$c;->e:Ljava/lang/String;

    invoke-static {v1, v2}, Lcom/loc/m;->a(ZLjava/lang/String;)V

    :cond_2
    iget-object v1, p0, Lcom/loc/br$f;->e:Lcom/loc/br$c;

    invoke-static {v1}, Lcom/loc/m;->c(Lcom/loc/br$c;)V

    iget-object v1, p0, Lcom/loc/br$f;->d:Lcom/loc/br$a;

    invoke-static {v0, v1}, Lcom/loc/m;->a(ZLcom/loc/br$a;)V

    iget-object v0, p0, Lcom/loc/br$f;->c:Lcom/loc/br$c;

    invoke-static {v0}, Lcom/loc/m;->b(Lcom/loc/br$c;)V

    :cond_3
    iget-object v0, p0, Lcom/loc/br$f;->g:Ljava/net/URL;

    invoke-virtual {v0}, Ljava/net/URL;->toString()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/loc/br$f;->c:Lcom/loc/br$c;

    iget-object v1, v1, Lcom/loc/br$c;->b:Lcom/loc/bt$b;

    invoke-virtual {v1}, Lcom/loc/bt$b;->c()Z

    move-result v1

    const/4 v2, 0x1

    invoke-static {v0, v1, v2, p1}, Lcom/loc/m;->a(Ljava/lang/String;ZZZ)V

    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "!!!error-"

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/loc/br$f;->c:Lcom/loc/br$c;

    invoke-virtual {v0}, Lcom/loc/br$c;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/loc/br;->a()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public final a(J)V
    .locals 2

    new-instance v0, Ljava/text/DecimalFormat;

    const-string v1, "0.00"

    invoke-direct {v0, v1}, Ljava/text/DecimalFormat;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/loc/br$f;->c:Lcom/loc/br$c;

    long-to-float p1, p1

    const/high16 p2, 0x44800000    # 1024.0f

    div-float/2addr p1, p2

    float-to-double p1, p1

    invoke-virtual {v0, p1, p2}, Ljava/text/DecimalFormat;->format(D)Ljava/lang/String;

    move-result-object p1

    iput-object p1, v1, Lcom/loc/br$c;->l:Ljava/lang/String;

    return-void
.end method

.method public final a(Lcom/loc/bt;Ljava/net/URL;)V
    .locals 3

    iput-object p2, p0, Lcom/loc/br$f;->g:Ljava/net/URL;

    iget-object v0, p0, Lcom/loc/br$f;->c:Lcom/loc/br$c;

    invoke-virtual {p2}, Ljava/net/URL;->getPath()Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/loc/br$c;->d:Ljava/lang/String;

    iget-object v0, p0, Lcom/loc/br$f;->c:Lcom/loc/br$c;

    invoke-virtual {p2}, Ljava/net/URL;->getHost()Ljava/lang/String;

    move-result-object p2

    iput-object p2, v0, Lcom/loc/br$c;->e:Ljava/lang/String;

    iget-object p2, p0, Lcom/loc/br$f;->h:Lcom/loc/br;

    invoke-static {p2}, Lcom/loc/br;->a(Lcom/loc/br;)Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_0

    invoke-virtual {p1}, Lcom/loc/bt;->u()Lcom/loc/bt$b;

    move-result-object p2

    invoke-virtual {p2}, Lcom/loc/bt$b;->b()Z

    move-result p2

    if-eqz p2, :cond_0

    iget-object p2, p0, Lcom/loc/br$f;->c:Lcom/loc/br$c;

    iget-object v0, p2, Lcom/loc/br$c;->e:Ljava/lang/String;

    const-string v1, ""

    const-string v2, "["

    invoke-virtual {v0, v2, v1}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v0

    const-string v2, "]"

    invoke-virtual {v0, v2, v1}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p2, Lcom/loc/br$c;->c:Ljava/lang/String;

    iget-object p2, p0, Lcom/loc/br$f;->c:Lcom/loc/br$c;

    iget-object v0, p0, Lcom/loc/br$f;->h:Lcom/loc/br;

    invoke-static {v0}, Lcom/loc/br;->a(Lcom/loc/br;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p2, Lcom/loc/br$c;->e:Ljava/lang/String;

    :cond_0
    invoke-virtual {p1}, Lcom/loc/bt;->u()Lcom/loc/bt$b;

    move-result-object p2

    invoke-virtual {p2}, Lcom/loc/bt$b;->b()Z

    move-result p2

    if-eqz p2, :cond_1

    iget-object p2, p0, Lcom/loc/br$f;->c:Lcom/loc/br$c;

    iget-object p2, p2, Lcom/loc/br$c;->e:Ljava/lang/String;

    invoke-virtual {p1, p2}, Lcom/loc/bt;->a(Ljava/lang/String;)V

    :cond_1
    invoke-virtual {p1}, Lcom/loc/bt;->u()Lcom/loc/bt$b;

    move-result-object p2

    invoke-virtual {p2}, Lcom/loc/bt$b;->d()Z

    move-result p2

    if-eqz p2, :cond_2

    invoke-virtual {p1}, Lcom/loc/bt;->x()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/loc/br$f;->f:Ljava/lang/String;

    :cond_2
    return-void
.end method

.method public final a(Lcom/loc/bu;)V
    .locals 7

    :try_start_0
    iget-object v0, p0, Lcom/loc/br$f;->c:Lcom/loc/br$c;

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    iget-wide v3, p0, Lcom/loc/br$f;->a:J

    sub-long/2addr v1, v3

    iput-wide v1, v0, Lcom/loc/br$c;->f:J

    if-eqz p1, :cond_0

    iget-object v0, p0, Lcom/loc/br$f;->c:Lcom/loc/br$c;

    iget-object v0, v0, Lcom/loc/br$c;->b:Lcom/loc/bt$b;

    invoke-virtual {v0}, Lcom/loc/bt$b;->c()Z

    move-result v0

    iput-boolean v0, p1, Lcom/loc/bu;->f:Z

    :cond_0
    iget-object p1, p0, Lcom/loc/br$f;->c:Lcom/loc/br$c;

    iget-object p1, p1, Lcom/loc/br$c;->b:Lcom/loc/bt$b;

    invoke-virtual {p1}, Lcom/loc/bt$b;->b()Z

    move-result p1

    const/4 v0, 0x0

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/loc/br$f;->c:Lcom/loc/br$c;

    iget-wide v1, p1, Lcom/loc/br$c;->f:J

    const-wide/16 v3, 0x2710

    cmp-long p1, v1, v3

    if-lez p1, :cond_1

    iget-object p1, p0, Lcom/loc/br$f;->c:Lcom/loc/br$c;

    iget-object p1, p1, Lcom/loc/br$c;->e:Ljava/lang/String;

    invoke-static {v0, p1}, Lcom/loc/m;->a(ZLjava/lang/String;)V

    :cond_1
    iget-object p1, p0, Lcom/loc/br$f;->c:Lcom/loc/br$c;

    iget-object p1, p1, Lcom/loc/br$c;->b:Lcom/loc/bt$b;

    invoke-virtual {p1}, Lcom/loc/bt$b;->d()Z

    move-result p1

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/loc/br$f;->f:Ljava/lang/String;

    invoke-static {v0, p1}, Lcom/loc/m;->a(ZLjava/lang/String;)V

    :cond_2
    iget-object p1, p0, Lcom/loc/br$f;->h:Lcom/loc/br;

    iget-object v1, p0, Lcom/loc/br$f;->c:Lcom/loc/br$c;

    iget-object v1, v1, Lcom/loc/br$c;->e:Ljava/lang/String;

    invoke-static {p1, v1}, Lcom/loc/br;->a(Lcom/loc/br;Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_3

    iget-object v1, p0, Lcom/loc/br$f;->c:Lcom/loc/br$c;

    invoke-static {v1}, Lcom/loc/m;->c(Lcom/loc/br$c;)V

    iget-object v1, p0, Lcom/loc/br$f;->d:Lcom/loc/br$a;

    const/4 v2, 0x1

    invoke-static {v2, v1}, Lcom/loc/m;->a(ZLcom/loc/br$a;)V

    iget-object v1, p0, Lcom/loc/br$f;->c:Lcom/loc/br$c;

    iget-wide v3, v1, Lcom/loc/br$c;->f:J

    sget v1, Lcom/loc/m;->e:I

    int-to-long v5, v1

    cmp-long v1, v3, v5

    if-lez v1, :cond_3

    iget-object v1, p0, Lcom/loc/br$f;->c:Lcom/loc/br$c;

    invoke-virtual {v1}, Lcom/loc/br$c;->a()Lcom/loc/br$c;

    move-result-object v1

    if-eqz v1, :cond_3

    iput v2, v1, Lcom/loc/br$c;->m:I

    invoke-static {v1}, Lcom/loc/m;->b(Lcom/loc/br$c;)V

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "!!!finish&error-"

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1}, Lcom/loc/br$c;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/loc/br;->a()V

    :cond_3
    iget-object v1, p0, Lcom/loc/br$f;->g:Ljava/net/URL;

    invoke-virtual {v1}, Ljava/net/URL;->toString()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/loc/br$f;->c:Lcom/loc/br$c;

    iget-object v2, v2, Lcom/loc/br$c;->b:Lcom/loc/bt$b;

    invoke-virtual {v2}, Lcom/loc/bt$b;->c()Z

    move-result v2

    invoke-static {v1, v2, v0, p1}, Lcom/loc/m;->a(Ljava/lang/String;ZZZ)V

    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "!!!finish-"

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/loc/br$f;->c:Lcom/loc/br$c;

    invoke-virtual {v0}, Lcom/loc/br$c;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/loc/br;->a()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public final b()V
    .locals 5

    iget-object v0, p0, Lcom/loc/br$f;->c:Lcom/loc/br$c;

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    iget-wide v3, p0, Lcom/loc/br$f;->b:J

    sub-long/2addr v1, v3

    iput-wide v1, v0, Lcom/loc/br$c;->i:J

    return-void
.end method

.method public final b(I)V
    .locals 1

    iget-object v0, p0, Lcom/loc/br$f;->c:Lcom/loc/br$c;

    iput p1, v0, Lcom/loc/br$c;->n:I

    return-void
.end method

.method public final c()V
    .locals 5

    iget-object v0, p0, Lcom/loc/br$f;->c:Lcom/loc/br$c;

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    iget-wide v3, p0, Lcom/loc/br$f;->b:J

    sub-long/2addr v1, v3

    iput-wide v1, v0, Lcom/loc/br$c;->j:J

    return-void
.end method

.method public final d()V
    .locals 6

    iget-object v0, p0, Lcom/loc/br$f;->c:Lcom/loc/br$c;

    invoke-virtual {v0}, Lcom/loc/br$c;->a()Lcom/loc/br$c;

    move-result-object v0

    iget-object v1, p0, Lcom/loc/br$f;->c:Lcom/loc/br$c;

    iget-wide v1, v1, Lcom/loc/br$c;->f:J

    sget v3, Lcom/loc/m;->e:I

    int-to-long v3, v3

    cmp-long v5, v1, v3

    if-lez v5, :cond_0

    const/4 v1, 0x1

    iput v1, v0, Lcom/loc/br$c;->m:I

    :cond_0
    invoke-static {v0}, Lcom/loc/m;->a(Lcom/loc/br$c;)V

    return-void
.end method
