.class public final Lcom/kwad/components/ad/reward/g;
.super Lcom/kwad/components/ad/k/b;


# instance fields
.field private oN:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/sdk/core/response/model/AdTemplate;",
            ">;"
        }
    .end annotation
.end field

.field private oO:Z

.field private oP:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/components/core/e/d/c;",
            ">;"
        }
    .end annotation
.end field

.field private oQ:Lcom/kwad/components/core/webview/jshandler/n$b;


# direct methods
.method public constructor <init>(Ljava/util/List;Lorg/json/JSONObject;Lcom/kwad/components/core/webview/jshandler/n$b;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/kwad/sdk/core/response/model/AdTemplate;",
            ">;",
            "Lorg/json/JSONObject;",
            "Lcom/kwad/components/core/webview/jshandler/n$b;",
            ")V"
        }
    .end annotation

    const/4 v0, 0x0

    invoke-direct {p0, p2, v0}, Lcom/kwad/components/ad/k/b;-><init>(Lorg/json/JSONObject;Ljava/lang/String;)V

    const/4 p2, 0x0

    iput-boolean p2, p0, Lcom/kwad/components/ad/reward/g;->oO:Z

    new-instance p2, Ljava/util/ArrayList;

    invoke-direct {p2}, Ljava/util/ArrayList;-><init>()V

    iput-object p2, p0, Lcom/kwad/components/ad/reward/g;->oP:Ljava/util/List;

    iput-object p1, p0, Lcom/kwad/components/ad/reward/g;->oN:Ljava/util/List;

    iput-object p3, p0, Lcom/kwad/components/ad/reward/g;->oQ:Lcom/kwad/components/core/webview/jshandler/n$b;

    if-eqz p1, :cond_0

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p1

    if-lez p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/reward/g;->oN:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result p2

    if-eqz p2, :cond_0

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/kwad/sdk/core/response/model/AdTemplate;

    new-instance p3, Lcom/kwad/components/core/e/d/c;

    invoke-direct {p3, p2}, Lcom/kwad/components/core/e/d/c;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object p2, p0, Lcom/kwad/components/ad/reward/g;->oP:Ljava/util/List;

    invoke-interface {p2, p3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_0
    return-void
.end method


# virtual methods
.method public final a(Landroid/widget/FrameLayout;Lcom/kwad/sdk/core/view/AdBaseFrameLayout;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/e/d/c;I)V
    .locals 6

    iget-object v3, p0, Lcom/kwad/components/ad/reward/g;->oN:Ljava/util/List;

    iget-object v4, p0, Lcom/kwad/components/ad/reward/g;->oP:Ljava/util/List;

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move v5, p5

    invoke-super/range {v0 .. v5}, Lcom/kwad/components/ad/k/b;->a(Landroid/widget/FrameLayout;Lcom/kwad/sdk/core/view/AdBaseFrameLayout;Ljava/util/List;Ljava/util/List;I)V

    return-void
.end method

.method public final a(Lcom/kwad/components/core/webview/a;)V
    .locals 4

    invoke-super {p0, p1}, Lcom/kwad/components/ad/k/b;->a(Lcom/kwad/components/core/webview/a;)V

    new-instance v0, Ljava/util/ArrayList;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/g;->oN:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v2

    const/4 v3, 0x1

    sub-int/2addr v2, v3

    invoke-interface {v1, v3, v2}, Ljava/util/List;->subList(II)Ljava/util/List;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/util/ArrayList;-><init>(Ljava/util/Collection;)V

    new-instance v1, Lcom/kwad/components/core/webview/jshandler/n;

    invoke-direct {v1, v0}, Lcom/kwad/components/core/webview/jshandler/n;-><init>(Ljava/util/List;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/g;->oQ:Lcom/kwad/components/core/webview/jshandler/n$b;

    invoke-virtual {v1, v0}, Lcom/kwad/components/core/webview/jshandler/n;->a(Lcom/kwad/components/core/webview/jshandler/n$b;)V

    invoke-virtual {p1, v1}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    return-void
.end method

.method public final b(Lcom/kwad/sdk/core/webview/b;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/g;->oN:Ljava/util/List;

    invoke-virtual {p1, v0}, Lcom/kwad/sdk/core/webview/b;->setAdTemplateList(Ljava/util/List;)V

    return-void
.end method

.method public final bv()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/g;->oO:Z

    if-eqz v0, :cond_0

    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/g;->Hd:Z

    return v0

    :cond_0
    invoke-super {p0}, Lcom/kwad/components/ad/k/b;->bv()Z

    move-result v0

    return v0
.end method

.method public final fA()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/k/b;->fA()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/g;->cB:Lcom/kwad/sdk/core/webview/KsAdWebView;

    new-instance v1, Lcom/kwad/components/ad/reward/g$1;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/reward/g$1;-><init>(Lcom/kwad/components/ad/reward/g;)V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setOnTouchListener(Landroid/view/View$OnTouchListener;)V

    return-void
.end method

.method public final fB()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public final fC()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/g;->cG:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/g;->cG:Lcom/kwad/components/core/webview/jshandler/am;

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rA()V

    :cond_0
    return-void
.end method

.method public final fD()V
    .locals 2

    const/4 v0, 0x1

    const-string v1, "middle_play_end_card"

    invoke-static {v0, v1}, Lcom/kwad/components/ad/reward/monitor/a;->a(ZLjava/lang/String;)V

    return-void
.end method

.method public final fE()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/g;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/g;->o(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x1

    const-string v2, "middle_play_end_card"

    invoke-static {v1, v2, v0}, Lcom/kwad/components/ad/reward/monitor/a;->a(ZLjava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final fF()V
    .locals 5

    iget-object v0, p0, Lcom/kwad/components/ad/reward/g;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/g;->o(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/g;->getLoadTime()J

    move-result-wide v3

    sub-long/2addr v1, v3

    const/4 v3, 0x1

    const-string v4, "middle_play_end_card"

    invoke-static {v3, v4, v0, v1, v2}, Lcom/kwad/components/ad/reward/monitor/a;->a(ZLjava/lang/String;Ljava/lang/String;J)V

    return-void
.end method

.method public final getName()Ljava/lang/String;
    .locals 1

    const-string v0, "MiddlePlayEndCard"

    return-object v0
.end method

.method public final o(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/g;->oN:Ljava/util/List;

    if-eqz v0, :cond_1

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    const/4 v1, 0x2

    if-ge v0, v1, :cond_0

    goto :goto_0

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/ad/reward/g;->oN:Ljava/util/List;

    const/4 v0, 0x1

    invoke-interface {p1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/b;->aZ(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object p1

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "getUrl: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-object p1

    :cond_1
    :goto_0
    invoke-super {p0, p1}, Lcom/kwad/components/ad/k/b;->o(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public final z(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/g;->oO:Z

    return-void
.end method
