.class final Lcom/mbridge/msdk/click/j$1;
.super Ljava/lang/Object;
.source "WebViewSpiderLoader.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/click/j;->a(Lcom/mbridge/msdk/foundation/same/e/a$a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/click/j;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/click/j;)V
    .locals 0

    .line 471
    iput-object p1, p0, Lcom/mbridge/msdk/click/j$1;->a:Lcom/mbridge/msdk/click/j;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 475
    iget-object v0, p0, Lcom/mbridge/msdk/click/j$1;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v0}, Lcom/mbridge/msdk/click/j;->g(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/e;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 476
    iget-object v0, p0, Lcom/mbridge/msdk/click/j$1;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v0}, Lcom/mbridge/msdk/click/j;->f(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->isSuccess()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 477
    iget-object v0, p0, Lcom/mbridge/msdk/click/j$1;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v0}, Lcom/mbridge/msdk/click/j;->g(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/e;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/click/j$1;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v1}, Lcom/mbridge/msdk/click/j;->f(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    move-result-object v1

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/click/e;->b(Ljava/lang/Object;)V

    goto :goto_0

    .line 479
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/click/j$1;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v0}, Lcom/mbridge/msdk/click/j;->g(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/e;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/click/j$1;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v1}, Lcom/mbridge/msdk/click/j;->f(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/click/j$1;->a:Lcom/mbridge/msdk/click/j;

    invoke-static {v2}, Lcom/mbridge/msdk/click/j;->f(Lcom/mbridge/msdk/click/j;)Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getMsg()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v1, v2}, Lcom/mbridge/msdk/click/e;->a(Ljava/lang/Object;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method
