.class public final Lcom/kwad/components/ad/reward/l;
.super Lcom/kwad/components/ad/k/b;


# instance fields
.field private qp:Lcom/kwad/components/ad/reward/c/d;

.field private qq:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Lcom/kwad/components/ad/reward/j;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>(Lcom/kwad/components/ad/reward/j;Lorg/json/JSONObject;Ljava/lang/String;)V
    .locals 0

    const/4 p3, 0x0

    invoke-direct {p0, p2, p3}, Lcom/kwad/components/ad/k/b;-><init>(Lorg/json/JSONObject;Ljava/lang/String;)V

    new-instance p2, Ljava/lang/ref/WeakReference;

    invoke-direct {p2, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object p2, p0, Lcom/kwad/components/ad/reward/l;->qq:Ljava/lang/ref/WeakReference;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/l;)Lcom/kwad/components/ad/reward/c/d;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/l;->qp:Lcom/kwad/components/ad/reward/c/d;

    return-object p0
.end method


# virtual methods
.method public final a(Lcom/kwad/components/ad/reward/c/d;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/l;->qp:Lcom/kwad/components/ad/reward/c/d;

    return-void
.end method

.method public final a(Lcom/kwad/components/core/webview/a;)V
    .locals 7

    invoke-super {p0, p1}, Lcom/kwad/components/ad/k/b;->a(Lcom/kwad/components/core/webview/a;)V

    new-instance v0, Lcom/kwad/components/ad/reward/h/b;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/l;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {v1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/reward/l;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    sget-object v3, Lcom/kwad/components/core/playable/PlayableSource;->ENDCARD_CLICK:Lcom/kwad/components/core/playable/PlayableSource;

    invoke-direct {v0, v1, v2, v3}, Lcom/kwad/components/ad/reward/h/b;-><init>(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/playable/PlayableSource;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/ad/reward/c/f;

    new-instance v1, Lcom/kwad/components/ad/reward/l$1;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/reward/l$1;-><init>(Lcom/kwad/components/ad/reward/l;)V

    invoke-direct {v0, v1}, Lcom/kwad/components/ad/reward/c/f;-><init>(Lcom/kwad/components/ad/reward/c/d;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/e;

    new-instance v1, Lcom/kwad/components/ad/reward/l$2;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/reward/l$2;-><init>(Lcom/kwad/components/ad/reward/l;)V

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/e;-><init>(Lcom/kwad/components/core/webview/jshandler/i;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l;->qq:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/reward/j;

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    move-object v2, v0

    new-instance v0, Lcom/kwad/components/ad/reward/j/p;

    const-wide/16 v4, -0x1

    iget-object v6, p0, Lcom/kwad/components/ad/reward/l;->cE:Lcom/kwad/sdk/core/webview/b;

    const-string v3, "native_id"

    move-object v1, v0

    invoke-direct/range {v1 .. v6}, Lcom/kwad/components/ad/reward/j/p;-><init>(Lcom/kwad/components/ad/reward/j;Ljava/lang/String;JLcom/kwad/sdk/core/webview/b;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->b(Lcom/kwad/sdk/core/webview/c/a;)V

    return-void
.end method

.method public final fD()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l;->qq:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/reward/j;

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    if-eqz v0, :cond_1

    const/4 v0, 0x1

    goto :goto_1

    :cond_1
    const/4 v0, 0x0

    :goto_1
    const-string v1, "end_card"

    invoke-static {v0, v1}, Lcom/kwad/components/ad/reward/monitor/a;->a(ZLjava/lang/String;)V

    return-void
.end method

.method public final fE()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l;->qq:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/reward/j;

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    if-eqz v0, :cond_1

    const/4 v0, 0x1

    goto :goto_1

    :cond_1
    const/4 v0, 0x0

    :goto_1
    iget-object v1, p0, Lcom/kwad/components/ad/reward/l;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {p0, v1}, Lcom/kwad/components/ad/reward/l;->o(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "end_card"

    invoke-static {v0, v2, v1}, Lcom/kwad/components/ad/reward/monitor/a;->a(ZLjava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final fF()V
    .locals 6

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l;->qq:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/reward/j;

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    if-eqz v0, :cond_1

    const/4 v0, 0x1

    goto :goto_1

    :cond_1
    const/4 v0, 0x0

    :goto_1
    iget-object v1, p0, Lcom/kwad/components/ad/reward/l;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {p0, v1}, Lcom/kwad/components/ad/reward/l;->o(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v1

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/l;->getLoadTime()J

    move-result-wide v4

    sub-long/2addr v2, v4

    const-string v4, "end_card"

    invoke-static {v0, v4, v1, v2, v3}, Lcom/kwad/components/ad/reward/monitor/a;->a(ZLjava/lang/String;Ljava/lang/String;J)V

    return-void
.end method
