.class final Lcom/tkay/expressad/a/h$a$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/a/g$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/a/h$a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/a/h$a;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/a/h$a;)V
    .locals 0

    .line 280
    iput-object p1, p0, Lcom/tkay/expressad/a/h$a$1;->a:Lcom/tkay/expressad/a/h$a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private b()V
    .locals 3

    .line 319
    iget-object v0, p0, Lcom/tkay/expressad/a/h$a$1;->a:Lcom/tkay/expressad/a/h$a;

    iget-object v0, v0, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    monitor-enter v0

    .line 320
    :try_start_0
    iget-object v1, p0, Lcom/tkay/expressad/a/h$a$1;->a:Lcom/tkay/expressad/a/h$a;

    iget-object v1, v1, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v1}, Lcom/tkay/expressad/a/h;->g(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/c$b;

    move-result-object v1

    const/4 v2, 0x1

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/a/c$b;->a(Z)V

    .line 321
    iget-object v1, p0, Lcom/tkay/expressad/a/h$a$1;->a:Lcom/tkay/expressad/a/h$a;

    invoke-static {v1}, Lcom/tkay/expressad/a/h$a;->a(Lcom/tkay/expressad/a/h$a;)V

    .line 322
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method


# virtual methods
.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 312
    iget-object v0, p0, Lcom/tkay/expressad/a/h$a$1;->a:Lcom/tkay/expressad/a/h$a;

    invoke-static {v0, p1}, Lcom/tkay/expressad/a/h$a;->a(Lcom/tkay/expressad/a/h$a;Ljava/lang/String;)Z

    .line 313
    iget-object p1, p0, Lcom/tkay/expressad/a/h$a$1;->a:Lcom/tkay/expressad/a/h$a;

    iget-object p1, p1, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {p1}, Lcom/tkay/expressad/a/h;->g(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/c$b;

    move-result-object p1

    invoke-virtual {p1, p2}, Lcom/tkay/expressad/a/c$b;->c(Ljava/lang/String;)V

    .line 314
    iget-object p1, p0, Lcom/tkay/expressad/a/h$a$1;->a:Lcom/tkay/expressad/a/h$a;

    const/4 p2, 0x1

    const/4 v0, 0x0

    invoke-static {p1, p2, v0}, Lcom/tkay/expressad/a/h$a;->a(Lcom/tkay/expressad/a/h$a;ZZ)V

    .line 315
    invoke-direct {p0}, Lcom/tkay/expressad/a/h$a$1;->b()V

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 327
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 328
    iget-object v0, p0, Lcom/tkay/expressad/a/h$a$1;->a:Lcom/tkay/expressad/a/h$a;

    iget-object v0, v0, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v0}, Lcom/tkay/expressad/a/h;->g(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/c$b;

    move-result-object v0

    invoke-virtual {v0, p2}, Lcom/tkay/expressad/a/c$b;->b(Ljava/lang/String;)V

    .line 330
    :cond_0
    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_1

    .line 331
    iget-object p2, p0, Lcom/tkay/expressad/a/h$a$1;->a:Lcom/tkay/expressad/a/h$a;

    iget-object p2, p2, Lcom/tkay/expressad/a/h$a;->a:Lcom/tkay/expressad/a/h;

    invoke-static {p2}, Lcom/tkay/expressad/a/h;->g(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/c$b;

    move-result-object p2

    invoke-virtual {p2, p3}, Lcom/tkay/expressad/a/c$b;->c(Ljava/lang/String;)V

    .line 333
    :cond_1
    iget-object p2, p0, Lcom/tkay/expressad/a/h$a$1;->a:Lcom/tkay/expressad/a/h$a;

    invoke-static {p2, p1}, Lcom/tkay/expressad/a/h$a;->a(Lcom/tkay/expressad/a/h$a;Ljava/lang/String;)Z

    .line 334
    iget-object p1, p0, Lcom/tkay/expressad/a/h$a$1;->a:Lcom/tkay/expressad/a/h$a;

    const/4 p2, 0x1

    const/4 p3, 0x0

    invoke-static {p1, p2, p3}, Lcom/tkay/expressad/a/h$a;->a(Lcom/tkay/expressad/a/h$a;ZZ)V

    .line 335
    invoke-direct {p0}, Lcom/tkay/expressad/a/h$a$1;->b()V

    return-void
.end method

.method public final a()Z
    .locals 2

    .line 306
    iget-object v0, p0, Lcom/tkay/expressad/a/h$a$1;->a:Lcom/tkay/expressad/a/h$a;

    const/4 v1, 0x0

    invoke-static {v0, v1, v1}, Lcom/tkay/expressad/a/h$a;->a(Lcom/tkay/expressad/a/h$a;ZZ)V

    return v1
.end method

.method public final a(Ljava/lang/String;)Z
    .locals 3

    .line 284
    iget-object v0, p0, Lcom/tkay/expressad/a/h$a$1;->a:Lcom/tkay/expressad/a/h$a;

    invoke-static {v0, p1}, Lcom/tkay/expressad/a/h$a;->a(Lcom/tkay/expressad/a/h$a;Ljava/lang/String;)Z

    move-result p1

    .line 285
    iget-object v0, p0, Lcom/tkay/expressad/a/h$a$1;->a:Lcom/tkay/expressad/a/h$a;

    const/4 v1, 0x0

    const/4 v2, 0x1

    invoke-static {v0, v1, v2}, Lcom/tkay/expressad/a/h$a;->a(Lcom/tkay/expressad/a/h$a;ZZ)V

    if-eqz p1, :cond_0

    .line 288
    invoke-direct {p0}, Lcom/tkay/expressad/a/h$a$1;->b()V

    :cond_0
    return p1
.end method

.method public final b(Ljava/lang/String;)Z
    .locals 3

    .line 295
    iget-object v0, p0, Lcom/tkay/expressad/a/h$a$1;->a:Lcom/tkay/expressad/a/h$a;

    invoke-static {v0, p1}, Lcom/tkay/expressad/a/h$a;->a(Lcom/tkay/expressad/a/h$a;Ljava/lang/String;)Z

    move-result p1

    .line 296
    iget-object v0, p0, Lcom/tkay/expressad/a/h$a$1;->a:Lcom/tkay/expressad/a/h$a;

    const/4 v1, 0x1

    const/4 v2, 0x0

    invoke-static {v0, v2, v1}, Lcom/tkay/expressad/a/h$a;->a(Lcom/tkay/expressad/a/h$a;ZZ)V

    if-eqz p1, :cond_0

    .line 298
    iget-object v0, p0, Lcom/tkay/expressad/a/h$a$1;->a:Lcom/tkay/expressad/a/h$a;

    invoke-static {v0, v1, v1}, Lcom/tkay/expressad/a/h$a;->a(Lcom/tkay/expressad/a/h$a;ZZ)V

    .line 299
    invoke-direct {p0}, Lcom/tkay/expressad/a/h$a$1;->b()V

    :cond_0
    return p1
.end method
