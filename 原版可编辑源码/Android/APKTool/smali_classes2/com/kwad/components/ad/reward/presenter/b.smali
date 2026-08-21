.class public Lcom/kwad/components/ad/reward/presenter/b;
.super Lcom/kwad/components/ad/reward/presenter/a;


# instance fields
.field private rY:Landroid/widget/ImageView;

.field private rZ:Lcom/kwad/sdk/core/response/model/AdInfo;


# direct methods
.method public constructor <init>(Lcom/kwad/sdk/core/response/model/AdInfo;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/a;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/b;->rZ:Lcom/kwad/sdk/core/response/model/AdInfo;

    return-void
.end method

.method private static a(Landroid/widget/ImageView;Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 2

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    new-instance v0, Lcom/kwad/sdk/core/imageloader/core/DisplayImageOptionsCompat$Builder;

    invoke-direct {v0}, Lcom/kwad/sdk/core/imageloader/core/DisplayImageOptionsCompat$Builder;-><init>()V

    const/16 v1, 0x32

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/imageloader/core/DisplayImageOptionsCompat$Builder;->setBlurRadius(I)Lcom/kwad/sdk/core/imageloader/core/DisplayImageOptionsCompat$Builder;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/core/imageloader/core/DisplayImageOptionsCompat$Builder;->build()Lcom/kwad/sdk/core/imageloader/core/DisplayImageOptionsCompat;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/ad/reward/presenter/b$1;

    invoke-direct {v1}, Lcom/kwad/components/ad/reward/presenter/b$1;-><init>()V

    invoke-static {p0, p1, p2, v0, v1}, Lcom/kwad/sdk/core/imageloader/KSImageLoader;->loadImage(Landroid/widget/ImageView;Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/imageloader/core/DisplayImageOptionsCompat;Lcom/kwad/sdk/core/imageloader/core/listener/ImageLoadingListener;)V

    return-void
.end method


# virtual methods
.method public final ah()V
    .locals 4

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/b;->hx()Z

    move-result v1

    if-nez v1, :cond_0

    iget-object v1, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->adInfoList:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_0

    iget-object v1, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->adInfoList:Ljava/util/List;

    const/4 v2, 0x0

    invoke-interface {v1, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->P(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/b;->rY:Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/b;->hz()I

    move-result v3

    invoke-virtual {v2, v3}, Landroid/widget/ImageView;->setVisibility(I)V

    :try_start_0
    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/b;->rY:Landroid/widget/ImageView;

    invoke-static {v2, v1, v0}, Lcom/kwad/components/ad/reward/presenter/b;->a(Landroid/widget/ImageView;Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    :cond_0
    return-void
.end method

.method protected hy()I
    .locals 1

    sget v0, Lcom/kwad/sdk/R$id;->ksad_blur_video_cover:I

    return v0
.end method

.method protected hz()I
    .locals 2

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/b;->getContext()Landroid/content/Context;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/j;->s(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/kwad/sdk/utils/ai;->IN()Z

    move-result v0

    if-nez v0, :cond_0

    return v1

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/j;->r(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-static {}, Lcom/kwad/sdk/utils/ai;->IN()Z

    move-result v0

    if-nez v0, :cond_1

    return v1

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->ct(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-static {}, Lcom/kwad/sdk/utils/ai;->IN()Z

    move-result v0

    if-nez v0, :cond_2

    return v1

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/b;->rZ:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/j;->g(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_3

    return v1

    :cond_3
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/b;->rZ:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->co(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_4

    invoke-static {}, Lcom/kwad/components/ad/reward/a/b;->gP()Z

    move-result v0

    if-eqz v0, :cond_4

    invoke-static {}, Lcom/kwad/sdk/utils/ai;->IN()Z

    move-result v0

    if-nez v0, :cond_4

    return v1

    :cond_4
    const/16 v0, 0x8

    return v0
.end method

.method public final onCreate()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onCreate()V

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/b;->hy()I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/b;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/b;->rY:Landroid/widget/ImageView;

    return-void
.end method
