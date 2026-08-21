.class final Lcom/mbridge/msdk/click/j$a$1;
.super Ljava/lang/Object;
.source "WebViewSpiderLoader.java"

# interfaces
.implements Lcom/mbridge/msdk/click/i$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/click/j$a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/click/j$a;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/click/j$a;)V
    .locals 0

    .line 282
    iput-object p1, p0, Lcom/mbridge/msdk/click/j$a$1;->a:Lcom/mbridge/msdk/click/j$a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private a()V
    .locals 3

    .line 321
    iget-object v0, p0, Lcom/mbridge/msdk/click/j$a$1;->a:Lcom/mbridge/msdk/click/j$a;

    iget-object v0, v0, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    monitor-enter v0

    .line 322
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/click/j$a$1;->a:Lcom/mbridge/msdk/click/j$a;

    iget-object v1, v1, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v1}, Lcom/mbridge/msdk/click/j;->f(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    move-result-object v1

    const/4 v2, 0x1

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->setSuccess(Z)V

    .line 323
    iget-object v1, p0, Lcom/mbridge/msdk/click/j$a$1;->a:Lcom/mbridge/msdk/click/j$a;

    invoke-static {v1}, Lcom/mbridge/msdk/click/j$a;->a(Lcom/mbridge/msdk/click/j$a;)V

    .line 324
    monitor-exit v0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method


# virtual methods
.method public final a(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 329
    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 330
    iget-object p1, p0, Lcom/mbridge/msdk/click/j$a$1;->a:Lcom/mbridge/msdk/click/j$a;

    iget-object p1, p1, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {p1}, Lcom/mbridge/msdk/click/j;->f(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    move-result-object p1

    invoke-virtual {p1, p3}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->setExceptionMsg(Ljava/lang/String;)V

    .line 332
    :cond_0
    invoke-static {p4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_1

    .line 333
    iget-object p1, p0, Lcom/mbridge/msdk/click/j$a$1;->a:Lcom/mbridge/msdk/click/j$a;

    iget-object p1, p1, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {p1}, Lcom/mbridge/msdk/click/j;->f(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    move-result-object p1

    invoke-virtual {p1, p4}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->setContent(Ljava/lang/String;)V

    .line 335
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/click/j$a$1;->a:Lcom/mbridge/msdk/click/j$a;

    invoke-static {p1, p2}, Lcom/mbridge/msdk/click/j$a;->a(Lcom/mbridge/msdk/click/j$a;Ljava/lang/String;)Z

    .line 336
    iget-object p1, p0, Lcom/mbridge/msdk/click/j$a$1;->a:Lcom/mbridge/msdk/click/j$a;

    const/4 p4, 0x1

    const/4 v0, 0x0

    invoke-static {p1, p4, v0, p2, p3}, Lcom/mbridge/msdk/click/j$a;->a(Lcom/mbridge/msdk/click/j$a;ZZLjava/lang/String;Ljava/lang/String;)V

    .line 337
    invoke-direct {p0}, Lcom/mbridge/msdk/click/j$a$1;->a()V

    return-void
.end method

.method public final a(Ljava/lang/String;ZLjava/lang/String;)V
    .locals 2

    .line 314
    iget-object p2, p0, Lcom/mbridge/msdk/click/j$a$1;->a:Lcom/mbridge/msdk/click/j$a;

    invoke-static {p2, p1}, Lcom/mbridge/msdk/click/j$a;->a(Lcom/mbridge/msdk/click/j$a;Ljava/lang/String;)Z

    .line 315
    iget-object p2, p0, Lcom/mbridge/msdk/click/j$a$1;->a:Lcom/mbridge/msdk/click/j$a;

    iget-object p2, p2, Lcom/mbridge/msdk/click/j$a;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {p2}, Lcom/mbridge/msdk/click/j;->f(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    move-result-object p2

    invoke-virtual {p2, p3}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->setContent(Ljava/lang/String;)V

    .line 316
    iget-object p2, p0, Lcom/mbridge/msdk/click/j$a$1;->a:Lcom/mbridge/msdk/click/j$a;

    const/4 p3, 0x1

    const/4 v0, 0x0

    const-string v1, "timeout"

    invoke-static {p2, p3, v0, p1, v1}, Lcom/mbridge/msdk/click/j$a;->a(Lcom/mbridge/msdk/click/j$a;ZZLjava/lang/String;Ljava/lang/String;)V

    .line 317
    invoke-direct {p0}, Lcom/mbridge/msdk/click/j$a$1;->a()V

    return-void
.end method

.method public final a(Ljava/lang/String;)Z
    .locals 5

    .line 286
    iget-object v0, p0, Lcom/mbridge/msdk/click/j$a$1;->a:Lcom/mbridge/msdk/click/j$a;

    invoke-static {v0, p1}, Lcom/mbridge/msdk/click/j$a;->a(Lcom/mbridge/msdk/click/j$a;Ljava/lang/String;)Z

    move-result v0

    .line 287
    iget-object v1, p0, Lcom/mbridge/msdk/click/j$a$1;->a:Lcom/mbridge/msdk/click/j$a;

    const/4 v2, 0x0

    const/4 v3, 0x1

    const-string v4, ""

    invoke-static {v1, v2, v3, p1, v4}, Lcom/mbridge/msdk/click/j$a;->a(Lcom/mbridge/msdk/click/j$a;ZZLjava/lang/String;Ljava/lang/String;)V

    if-eqz v0, :cond_0

    .line 290
    invoke-direct {p0}, Lcom/mbridge/msdk/click/j$a$1;->a()V

    :cond_0
    return v0
.end method

.method public final b(Ljava/lang/String;)Z
    .locals 5

    .line 297
    iget-object v0, p0, Lcom/mbridge/msdk/click/j$a$1;->a:Lcom/mbridge/msdk/click/j$a;

    invoke-static {v0, p1}, Lcom/mbridge/msdk/click/j$a;->a(Lcom/mbridge/msdk/click/j$a;Ljava/lang/String;)Z

    move-result v0

    .line 298
    iget-object v1, p0, Lcom/mbridge/msdk/click/j$a$1;->a:Lcom/mbridge/msdk/click/j$a;

    const-string v2, ""

    const/4 v3, 0x1

    const/4 v4, 0x0

    invoke-static {v1, v4, v3, p1, v2}, Lcom/mbridge/msdk/click/j$a;->a(Lcom/mbridge/msdk/click/j$a;ZZLjava/lang/String;Ljava/lang/String;)V

    if-eqz v0, :cond_0

    .line 300
    iget-object v1, p0, Lcom/mbridge/msdk/click/j$a$1;->a:Lcom/mbridge/msdk/click/j$a;

    invoke-static {v1, v3, v3, p1, v2}, Lcom/mbridge/msdk/click/j$a;->a(Lcom/mbridge/msdk/click/j$a;ZZLjava/lang/String;Ljava/lang/String;)V

    .line 301
    invoke-direct {p0}, Lcom/mbridge/msdk/click/j$a$1;->a()V

    :cond_0
    return v0
.end method

.method public final c(Ljava/lang/String;)Z
    .locals 3

    .line 308
    iget-object v0, p0, Lcom/mbridge/msdk/click/j$a$1;->a:Lcom/mbridge/msdk/click/j$a;

    const/4 v1, 0x0

    const-string v2, ""

    invoke-static {v0, v1, v1, p1, v2}, Lcom/mbridge/msdk/click/j$a;->a(Lcom/mbridge/msdk/click/j$a;ZZLjava/lang/String;Ljava/lang/String;)V

    return v1
.end method
