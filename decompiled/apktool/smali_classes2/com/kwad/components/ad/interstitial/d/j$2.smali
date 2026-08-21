.class final Lcom/kwad/components/ad/interstitial/d/j$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/video/f$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/interstitial/d/j;->ea()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field private cs:Z

.field final synthetic lc:Lcom/kwad/components/ad/interstitial/d/j;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/interstitial/d/j;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d/j$2;->lc:Lcom/kwad/components/ad/interstitial/d/j;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 p1, 0x0

    iput-boolean p1, p0, Lcom/kwad/components/ad/interstitial/d/j$2;->cs:Z

    return-void
.end method


# virtual methods
.method public final bj()V
    .locals 5

    iget-boolean v0, p0, Lcom/kwad/components/ad/interstitial/d/j$2;->cs:Z

    if-nez v0, :cond_0

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/ad/interstitial/d/j$2;->cs:Z

    invoke-static {}, Lcom/kwad/components/core/o/a;->pA()Lcom/kwad/components/core/o/a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/j$2;->lc:Lcom/kwad/components/ad/interstitial/d/j;

    invoke-static {v1}, Lcom/kwad/components/ad/interstitial/d/j;->c(Lcom/kwad/components/ad/interstitial/d/j;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v1

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    const/4 v4, 0x0

    invoke-virtual {v0, v1, v2, v3, v4}, Lcom/kwad/components/core/o/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;JI)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j$2;->lc:Lcom/kwad/components/ad/interstitial/d/j;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/j;->b(Lcom/kwad/components/ad/interstitial/d/j;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->jr:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/components/core/video/a$c;

    invoke-interface {v1}, Lcom/kwad/components/core/video/a$c;->bj()V

    goto :goto_0

    :cond_1
    return-void
.end method

.method public final bk()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j$2;->lc:Lcom/kwad/components/ad/interstitial/d/j;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/j;->c(Lcom/kwad/components/ad/interstitial/d/j;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/report/a;->aA(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j$2;->lc:Lcom/kwad/components/ad/interstitial/d/j;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/j;->b(Lcom/kwad/components/ad/interstitial/d/j;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object v0

    iget-boolean v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->jk:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j$2;->lc:Lcom/kwad/components/ad/interstitial/d/j;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/j;->b(Lcom/kwad/components/ad/interstitial/d/j;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j$2;->lc:Lcom/kwad/components/ad/interstitial/d/j;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/j;->b(Lcom/kwad/components/ad/interstitial/d/j;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;->onVideoPlayEnd()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j$2;->lc:Lcom/kwad/components/ad/interstitial/d/j;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/j;->b(Lcom/kwad/components/ad/interstitial/d/j;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->jr:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/components/core/video/a$c;

    invoke-interface {v1}, Lcom/kwad/components/core/video/a$c;->bk()V

    goto :goto_0

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j$2;->lc:Lcom/kwad/components/ad/interstitial/d/j;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/j;->b(Lcom/kwad/components/ad/interstitial/d/j;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object v0

    const/4 v1, 0x1

    iput-boolean v1, v0, Lcom/kwad/components/ad/interstitial/d/c;->jt:Z

    return-void
.end method

.method public final d(J)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j$2;->lc:Lcom/kwad/components/ad/interstitial/d/j;

    invoke-static {v0, p1, p2}, Lcom/kwad/components/ad/interstitial/d/j;->a(Lcom/kwad/components/ad/interstitial/d/j;J)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j$2;->lc:Lcom/kwad/components/ad/interstitial/d/j;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/j;->b(Lcom/kwad/components/ad/interstitial/d/j;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->jr:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/components/core/video/a$c;

    invoke-interface {v1, p1, p2}, Lcom/kwad/components/core/video/a$c;->d(J)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final onVideoPlayError(II)V
    .locals 2

    invoke-static {}, Lcom/kwad/components/ad/interstitial/monitor/b;->cL()Lcom/kwad/components/ad/interstitial/monitor/b;

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j$2;->lc:Lcom/kwad/components/ad/interstitial/d/j;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/j;->c(Lcom/kwad/components/ad/interstitial/d/j;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    invoke-static {p2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, p1, v1}, Lcom/kwad/components/ad/interstitial/monitor/b;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;ILjava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j$2;->lc:Lcom/kwad/components/ad/interstitial/d/j;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/j;->b(Lcom/kwad/components/ad/interstitial/d/j;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j$2;->lc:Lcom/kwad/components/ad/interstitial/d/j;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/j;->b(Lcom/kwad/components/ad/interstitial/d/j;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    invoke-interface {v0, p1, p2}, Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;->onVideoPlayError(II)V

    :cond_0
    return-void
.end method

.method public final onVideoPlayStart()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j$2;->lc:Lcom/kwad/components/ad/interstitial/d/j;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/j;->c(Lcom/kwad/components/ad/interstitial/d/j;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/report/a;->j(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    invoke-static {}, Lcom/kwad/components/ad/interstitial/monitor/b;->cL()Lcom/kwad/components/ad/interstitial/monitor/b;

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j$2;->lc:Lcom/kwad/components/ad/interstitial/d/j;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/j;->c(Lcom/kwad/components/ad/interstitial/d/j;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/monitor/b;->j(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j$2;->lc:Lcom/kwad/components/ad/interstitial/d/j;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/j;->b(Lcom/kwad/components/ad/interstitial/d/j;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object v0

    iget-boolean v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->jk:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j$2;->lc:Lcom/kwad/components/ad/interstitial/d/j;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/j;->b(Lcom/kwad/components/ad/interstitial/d/j;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j$2;->lc:Lcom/kwad/components/ad/interstitial/d/j;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/j;->b(Lcom/kwad/components/ad/interstitial/d/j;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;->onVideoPlayStart()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j$2;->lc:Lcom/kwad/components/ad/interstitial/d/j;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/j;->b(Lcom/kwad/components/ad/interstitial/d/j;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->jr:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/components/core/video/a$c;

    invoke-interface {v1}, Lcom/kwad/components/core/video/a$c;->onVideoPlayStart()V

    goto :goto_0

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j$2;->lc:Lcom/kwad/components/ad/interstitial/d/j;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/j;->b(Lcom/kwad/components/ad/interstitial/d/j;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object v0

    const/4 v1, 0x0

    iput-boolean v1, v0, Lcom/kwad/components/ad/interstitial/d/c;->jt:Z

    return-void
.end method
