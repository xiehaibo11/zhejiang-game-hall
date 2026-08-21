.class final Lcom/kwad/sdk/core/webview/b/a$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/core/webview/b/a;->Eg()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic ayD:Lcom/kwad/sdk/core/webview/b/a;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/core/webview/b/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/webview/b/a$3;->ayD:Lcom/kwad/sdk/core/webview/b/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    :try_start_0
    iget-object v0, p0, Lcom/kwad/sdk/core/webview/b/a$3;->ayD:Lcom/kwad/sdk/core/webview/b/a;

    invoke-static {v0}, Lcom/kwad/sdk/core/webview/b/a;->c(Lcom/kwad/sdk/core/webview/b/a;)Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_3

    invoke-interface {v0}, Ljava/util/List;->isEmpty()Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_1

    :cond_0
    iget-object v1, p0, Lcom/kwad/sdk/core/webview/b/a$3;->ayD:Lcom/kwad/sdk/core/webview/b/a;

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/webview/b/a;->a(Lcom/kwad/sdk/core/webview/b/a;Ljava/util/List;)V

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_1
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/h/a/b;

    iget v2, v1, Lcom/kwad/sdk/h/a/b;->packageType:I

    const/4 v3, 0x1

    if-ne v2, v3, :cond_1

    iget v2, v1, Lcom/kwad/sdk/h/a/b;->loadType:I

    if-eq v2, v3, :cond_2

    iget v2, v1, Lcom/kwad/sdk/h/a/b;->loadType:I

    const/4 v3, 0x2

    if-ne v2, v3, :cond_1

    iget-object v2, p0, Lcom/kwad/sdk/core/webview/b/a$3;->ayD:Lcom/kwad/sdk/core/webview/b/a;

    invoke-static {v2}, Lcom/kwad/sdk/core/webview/b/a;->a(Lcom/kwad/sdk/core/webview/b/a;)Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/kwad/sdk/utils/ag;->isWifiConnected(Landroid/content/Context;)Z

    move-result v2

    if-eqz v2, :cond_1

    :cond_2
    iget-object v2, p0, Lcom/kwad/sdk/core/webview/b/a$3;->ayD:Lcom/kwad/sdk/core/webview/b/a;

    invoke-static {v2, v1}, Lcom/kwad/sdk/core/webview/b/a;->a(Lcom/kwad/sdk/core/webview/b/a;Lcom/kwad/sdk/h/a/b;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :cond_3
    :goto_1
    return-void

    :catchall_0
    move-exception v0

    const-class v1, Lcom/kwad/sdk/service/a/d;

    invoke-static {v1}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/service/a/d;

    invoke-interface {v1, v0}, Lcom/kwad/sdk/service/a/d;->gatherException(Ljava/lang/Throwable;)V

    return-void
.end method
