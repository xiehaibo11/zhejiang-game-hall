.class public final Lcom/kwad/components/ad/draw/c;
.super Lcom/kwad/sdk/api/core/AbstractKsDrawAd;

# interfaces
.implements Lcom/kwad/components/core/internal/api/a;


# instance fields
.field private bD:Lcom/kwad/sdk/api/KsDrawAd$AdInteractionListener;

.field private final bJ:Lcom/kwad/sdk/core/h/b;

.field private bO:Lcom/kwad/components/ad/draw/b;

.field private bP:Lcom/kwad/components/core/internal/api/c;

.field private final bQ:Lcom/kwad/sdk/api/KsDrawAd$AdInteractionListener;

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;


# direct methods
.method public constructor <init>(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/sdk/api/core/AbstractKsDrawAd;-><init>()V

    new-instance v0, Lcom/kwad/components/core/internal/api/c;

    invoke-direct {v0}, Lcom/kwad/components/core/internal/api/c;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/draw/c;->bP:Lcom/kwad/components/core/internal/api/c;

    new-instance v0, Lcom/kwad/components/ad/draw/c$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/draw/c$1;-><init>(Lcom/kwad/components/ad/draw/c;)V

    iput-object v0, p0, Lcom/kwad/components/ad/draw/c;->bJ:Lcom/kwad/sdk/core/h/b;

    new-instance v0, Lcom/kwad/components/ad/draw/c$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/draw/c$2;-><init>(Lcom/kwad/components/ad/draw/c;)V

    iput-object v0, p0, Lcom/kwad/components/ad/draw/c;->bQ:Lcom/kwad/sdk/api/KsDrawAd$AdInteractionListener;

    iput-object p1, p0, Lcom/kwad/components/ad/draw/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->bi(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/sdk/core/response/model/b;->getUrl()Ljava/lang/String;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/ad/draw/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1, v0}, Lcom/kwad/sdk/core/imageloader/KSImageLoader;->preloadImage(Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    invoke-static {}, Lcom/kwad/components/ad/h/b;->fa()Lcom/kwad/components/ad/h/b;

    move-result-object p1

    invoke-virtual {p1, p0}, Lcom/kwad/components/ad/h/b;->a(Lcom/kwad/components/core/internal/api/a;)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/draw/c;)Lcom/kwad/components/core/internal/api/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/draw/c;->bP:Lcom/kwad/components/core/internal/api/c;

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/draw/c;)Lcom/kwad/sdk/api/KsDrawAd$AdInteractionListener;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/draw/c;->bD:Lcom/kwad/sdk/api/KsDrawAd$AdInteractionListener;

    return-object p0
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/internal/api/b;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/draw/c;->bP:Lcom/kwad/components/core/internal/api/c;

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/internal/api/c;->a(Lcom/kwad/components/core/internal/api/b;)V

    return-void
.end method

.method public final ae()Z
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method public final b(Lcom/kwad/components/core/internal/api/b;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/draw/c;->bP:Lcom/kwad/components/core/internal/api/c;

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/internal/api/c;->b(Lcom/kwad/components/core/internal/api/b;)V

    return-void
.end method

.method public final getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/draw/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object v0
.end method

.method public final getDrawView2(Landroid/content/Context;)Landroid/view/View;
    .locals 4

    const-string v0, "show"

    const-string v1, "draw"

    if-eqz p1, :cond_4

    invoke-static {}, Lcom/kwad/sdk/KsAdSDKImpl;->get()Lcom/kwad/sdk/KsAdSDKImpl;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/KsAdSDKImpl;->hasInitFinish()Z

    move-result v2

    if-nez v2, :cond_0

    goto/16 :goto_2

    :cond_0
    :try_start_0
    invoke-static {p1}, Lcom/kwad/sdk/m/l;->wrapContextIfNeed(Landroid/content/Context;)Landroid/content/Context;

    move-result-object p1

    invoke-static {v1, v0}, Lcom/kwad/sdk/i/a;->ah(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v2, p0, Lcom/kwad/components/ad/draw/c;->bO:Lcom/kwad/components/ad/draw/b;

    if-nez v2, :cond_1

    new-instance v2, Lcom/kwad/components/ad/draw/b;

    invoke-direct {v2, p1}, Lcom/kwad/components/ad/draw/b;-><init>(Landroid/content/Context;)V

    iput-object v2, p0, Lcom/kwad/components/ad/draw/c;->bO:Lcom/kwad/components/ad/draw/b;

    iget-object v3, p0, Lcom/kwad/components/ad/draw/c;->bJ:Lcom/kwad/sdk/core/h/b;

    invoke-virtual {v2, v3}, Lcom/kwad/components/ad/draw/b;->setPageExitListener(Lcom/kwad/sdk/core/h/b;)V

    iget-object v2, p0, Lcom/kwad/components/ad/draw/c;->bO:Lcom/kwad/components/ad/draw/b;

    iget-object v3, p0, Lcom/kwad/components/ad/draw/c;->bD:Lcom/kwad/sdk/api/KsDrawAd$AdInteractionListener;

    invoke-virtual {v2, v3}, Lcom/kwad/components/ad/draw/b;->setAdInteractionListener(Lcom/kwad/sdk/api/KsDrawAd$AdInteractionListener;)V

    iget-object v2, p0, Lcom/kwad/components/ad/draw/c;->bO:Lcom/kwad/components/ad/draw/b;

    iget-object v3, p0, Lcom/kwad/components/ad/draw/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v2, v3}, Lcom/kwad/components/ad/draw/b;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    goto :goto_0

    :cond_1
    const-string v2, "KSDrawAdControl"

    const-string v3, "mDrawVideoView is not null"

    invoke-static {v2, v3}, Lcom/kwad/sdk/core/e/c;->i(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    invoke-static {v1, v0}, Lcom/kwad/sdk/i/a;->ai(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v0

    invoke-static {}, Lcom/kwad/sdk/KsAdSDKImpl;->get()Lcom/kwad/sdk/KsAdSDKImpl;

    move-result-object v1

    invoke-virtual {v1}, Lcom/kwad/sdk/KsAdSDKImpl;->getIsExternal()Z

    move-result v1

    if-eqz v1, :cond_3

    new-instance v1, Ljava/lang/RuntimeException;

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "context:"

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "--classloader:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Class;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object p1

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {v1, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    sget p1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x13

    if-lt p1, v2, :cond_2

    invoke-virtual {v1, v0}, Ljava/lang/RuntimeException;->addSuppressed(Ljava/lang/Throwable;)V

    :cond_2
    invoke-static {v1}, Lcom/kwad/components/core/d/a;->b(Ljava/lang/Throwable;)V

    :goto_1
    iget-object p1, p0, Lcom/kwad/components/ad/draw/c;->bO:Lcom/kwad/components/ad/draw/b;

    return-object p1

    :cond_3
    throw v0

    :cond_4
    :goto_2
    const/4 p1, 0x0

    return-object p1
.end method

.method public final getECPM()I
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/draw/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aJ(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    return v0
.end method

.method public final getInteractionType()I
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/draw/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aI(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    return v0
.end method

.method public final getMaterialType()I
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/draw/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aW(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    return v0
.end method

.method public final getMediaExtraInfo()Ljava/util/Map;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    invoke-static {}, Lcom/kwad/sdk/core/config/d;->zt()Z

    move-result v1

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/kwad/components/ad/draw/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-wide v1, v1, Lcom/kwad/sdk/core/response/model/AdTemplate;->llsid:J

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    const-string v2, "llsid"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    return-object v0
.end method

.method public final reportAdExposureFailed(ILcom/kwad/sdk/api/model/AdExposureFailedReason;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/draw/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0, p1, p2}, Lcom/kwad/sdk/core/report/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;ILcom/kwad/sdk/api/model/AdExposureFailedReason;)V

    return-void
.end method

.method public final setAdInteractionListener(Lcom/kwad/sdk/api/KsDrawAd$AdInteractionListener;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/draw/c;->bD:Lcom/kwad/sdk/api/KsDrawAd$AdInteractionListener;

    return-void
.end method

.method public final setBidEcpm(I)V
    .locals 4

    int-to-long v0, p1

    const-wide/16 v2, -0x1

    invoke-virtual {p0, v0, v1, v2, v3}, Lcom/kwad/components/ad/draw/c;->setBidEcpm(JJ)V

    return-void
.end method

.method public final setBidEcpm(JJ)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/draw/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-wide p1, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mBidEcpm:J

    iget-object p1, p0, Lcom/kwad/components/ad/draw/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1, p3, p4}, Lcom/kwad/sdk/core/report/a;->i(Lcom/kwad/sdk/core/response/model/AdTemplate;J)V

    return-void
.end method
