.class public final Lcom/mbridge/msdk/video/js/a/c$b;
.super Ljava/lang/Object;
.source "DefaultJSCommon.java"

# interfaces
.implements Lcom/mbridge/msdk/video/js/c$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/video/js/a/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "b"
.end annotation


# instance fields
.field private a:Lcom/mbridge/msdk/video/js/c;

.field private b:Lcom/mbridge/msdk/video/js/c$a;


# direct methods
.method public constructor <init>(Lcom/mbridge/msdk/video/js/c;Lcom/mbridge/msdk/video/js/c$a;)V
    .locals 0

    .line 274
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 275
    iput-object p1, p0, Lcom/mbridge/msdk/video/js/a/c$b;->a:Lcom/mbridge/msdk/video/js/c;

    .line 276
    iput-object p2, p0, Lcom/mbridge/msdk/video/js/a/c$b;->b:Lcom/mbridge/msdk/video/js/c$a;

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 1

    .line 348
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/c$b;->b:Lcom/mbridge/msdk/video/js/c$a;

    if-eqz v0, :cond_0

    .line 349
    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/c$a;->a()V

    :cond_0
    return-void
.end method

.method public final a(ILjava/lang/String;)V
    .locals 1

    .line 362
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/c$b;->b:Lcom/mbridge/msdk/video/js/c$a;

    if-eqz v0, :cond_0

    .line 363
    invoke-interface {v0, p1, p2}, Lcom/mbridge/msdk/video/js/c$a;->a(ILjava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final a(Z)V
    .locals 1

    .line 355
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/c$b;->b:Lcom/mbridge/msdk/video/js/c$a;

    if-eqz v0, :cond_0

    .line 356
    invoke-interface {v0, p1}, Lcom/mbridge/msdk/video/js/c$a;->a(Z)V

    :cond_0
    return-void
.end method

.method public final b()V
    .locals 1

    .line 369
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/c$b;->b:Lcom/mbridge/msdk/video/js/c$a;

    if-eqz v0, :cond_0

    .line 370
    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/c$a;->b()V

    :cond_0
    return-void
.end method

.method public final onDismissLoading(Lcom/mbridge/msdk/out/Campaign;)V
    .locals 1

    .line 293
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/c$b;->b:Lcom/mbridge/msdk/video/js/c$a;

    if-eqz v0, :cond_0

    .line 294
    invoke-interface {v0, p1}, Lcom/mbridge/msdk/video/js/c$a;->onDismissLoading(Lcom/mbridge/msdk/out/Campaign;)V

    :cond_0
    return-void
.end method

.method public final onDownloadFinish(Lcom/mbridge/msdk/out/Campaign;)V
    .locals 1

    .line 334
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/c$b;->b:Lcom/mbridge/msdk/video/js/c$a;

    if-eqz v0, :cond_0

    .line 335
    invoke-interface {v0, p1}, Lcom/mbridge/msdk/video/js/c$a;->onDownloadFinish(Lcom/mbridge/msdk/out/Campaign;)V

    :cond_0
    return-void
.end method

.method public final onDownloadProgress(I)V
    .locals 1

    .line 341
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/c$b;->b:Lcom/mbridge/msdk/video/js/c$a;

    if-eqz v0, :cond_0

    .line 342
    invoke-interface {v0, p1}, Lcom/mbridge/msdk/video/js/c$a;->onDownloadProgress(I)V

    :cond_0
    return-void
.end method

.method public final onDownloadStart(Lcom/mbridge/msdk/out/Campaign;)V
    .locals 1

    .line 327
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/c$b;->b:Lcom/mbridge/msdk/video/js/c$a;

    if-eqz v0, :cond_0

    .line 328
    invoke-interface {v0, p1}, Lcom/mbridge/msdk/video/js/c$a;->onDownloadStart(Lcom/mbridge/msdk/out/Campaign;)V

    :cond_0
    return-void
.end method

.method public final onFinishRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V
    .locals 1

    .line 307
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/c$b;->b:Lcom/mbridge/msdk/video/js/c$a;

    if-eqz v0, :cond_0

    .line 308
    invoke-interface {v0, p1, p2}, Lcom/mbridge/msdk/video/js/c$a;->onFinishRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V

    .line 310
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/video/js/a/c$b;->a:Lcom/mbridge/msdk/video/js/c;

    if-eqz p1, :cond_1

    .line 311
    invoke-interface {p1}, Lcom/mbridge/msdk/video/js/c;->e()V

    :cond_1
    return-void
.end method

.method public final onInterceptDefaultLoadingDialog()Z
    .locals 1

    .line 281
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/c$b;->b:Lcom/mbridge/msdk/video/js/c$a;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/c$a;->onInterceptDefaultLoadingDialog()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public final onRedirectionFailed(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V
    .locals 1

    .line 317
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/c$b;->b:Lcom/mbridge/msdk/video/js/c$a;

    if-eqz v0, :cond_0

    .line 318
    invoke-interface {v0, p1, p2}, Lcom/mbridge/msdk/video/js/c$a;->onRedirectionFailed(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V

    .line 320
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/video/js/a/c$b;->a:Lcom/mbridge/msdk/video/js/c;

    if-eqz p1, :cond_1

    .line 321
    invoke-interface {p1}, Lcom/mbridge/msdk/video/js/c;->e()V

    :cond_1
    return-void
.end method

.method public final onShowLoading(Lcom/mbridge/msdk/out/Campaign;)V
    .locals 1

    .line 286
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/c$b;->b:Lcom/mbridge/msdk/video/js/c$a;

    if-eqz v0, :cond_0

    .line 287
    invoke-interface {v0, p1}, Lcom/mbridge/msdk/video/js/c$a;->onShowLoading(Lcom/mbridge/msdk/out/Campaign;)V

    :cond_0
    return-void
.end method

.method public final onStartRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V
    .locals 1

    .line 300
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/c$b;->b:Lcom/mbridge/msdk/video/js/c$a;

    if-eqz v0, :cond_0

    .line 301
    invoke-interface {v0, p1, p2}, Lcom/mbridge/msdk/video/js/c$a;->onStartRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V

    :cond_0
    return-void
.end method
