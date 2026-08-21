.class public final Lcom/kwad/components/ad/interstitial/d/j;
.super Lcom/kwad/components/ad/interstitial/d/b;

# interfaces
.implements Lcom/kwad/sdk/widget/c;


# instance fields
.field private cr:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field private dJ:Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

.field private final eC:Lcom/kwad/components/core/video/a$a;

.field private ew:Landroid/widget/ImageView;

.field private ex:Lcom/kwad/sdk/core/video/videoview/a;

.field private jQ:Lcom/kwad/sdk/widget/KSFrameLayout;

.field private jR:Lcom/kwad/sdk/widget/KSFrameLayout;

.field private jf:Lcom/kwad/components/ad/interstitial/d/c;

.field private ka:Lcom/kwad/components/ad/interstitial/d/h;

.field private lb:Lcom/kwad/components/core/video/f;

.field protected mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

.field protected mContext:Landroid/content/Context;

.field private mIsAudioEnable:Z


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/b;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/interstitial/d/j;->mIsAudioEnable:Z

    new-instance v0, Lcom/kwad/components/ad/interstitial/d/j$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/interstitial/d/j$1;-><init>(Lcom/kwad/components/ad/interstitial/d/j;)V

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j;->ka:Lcom/kwad/components/ad/interstitial/d/h;

    new-instance v0, Lcom/kwad/components/ad/interstitial/d/j$4;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/interstitial/d/j$4;-><init>(Lcom/kwad/components/ad/interstitial/d/j;)V

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j;->eC:Lcom/kwad/components/core/video/a$a;

    return-void
.end method

.method private a(Landroid/view/View;Z)Lcom/kwad/components/ad/interstitial/d/c$b;
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/interstitial/d/c$b;

    invoke-virtual {p1}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-direct {v0, p1}, Lcom/kwad/components/ad/interstitial/d/c$b;-><init>(Landroid/content/Context;)V

    invoke-virtual {v0, p2}, Lcom/kwad/components/ad/interstitial/d/c$b;->k(Z)Lcom/kwad/components/ad/interstitial/d/c$b;

    move-result-object p1

    iget-object p2, p0, Lcom/kwad/components/ad/interstitial/d/j;->jQ:Lcom/kwad/sdk/widget/KSFrameLayout;

    invoke-virtual {p2}, Lcom/kwad/sdk/widget/KSFrameLayout;->getTouchCoords()Lcom/kwad/sdk/utils/ac$a;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/kwad/components/ad/interstitial/d/c$b;->a(Lcom/kwad/sdk/utils/ac$a;)Lcom/kwad/components/ad/interstitial/d/c$b;

    move-result-object p1

    const/4 p2, 0x3

    invoke-virtual {p1, p2}, Lcom/kwad/components/ad/interstitial/d/c$b;->y(I)Lcom/kwad/components/ad/interstitial/d/c$b;

    move-result-object p1

    const/16 p2, 0x55

    invoke-virtual {p1, p2}, Lcom/kwad/components/ad/interstitial/d/c$b;->z(I)Lcom/kwad/components/ad/interstitial/d/c$b;

    move-result-object p1

    return-object p1
.end method

.method static synthetic a(Lcom/kwad/components/ad/interstitial/d/j;)Lcom/kwad/components/core/video/f;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/j;->lb:Lcom/kwad/components/core/video/f;

    return-object p0
.end method

.method static synthetic a(Lcom/kwad/components/ad/interstitial/d/j;J)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/kwad/components/ad/interstitial/d/j;->c(J)V

    return-void
.end method

.method static synthetic b(Lcom/kwad/components/ad/interstitial/d/j;)Lcom/kwad/components/ad/interstitial/d/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/j;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    return-object p0
.end method

.method static synthetic c(Lcom/kwad/components/ad/interstitial/d/j;)Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object p0
.end method

.method private c(J)V
    .locals 2

    long-to-float p1, p1

    const/high16 p2, 0x447a0000    # 1000.0f

    div-float/2addr p1, p2

    float-to-double p1, p1

    invoke-static {p1, p2}, Ljava/lang/Math;->ceil(D)D

    move-result-wide p1

    double-to-int p1, p1

    iget-object p2, p0, Lcom/kwad/components/ad/interstitial/d/j;->cr:Ljava/util/List;

    if-eqz p2, :cond_2

    invoke-interface {p2}, Ljava/util/List;->isEmpty()Z

    move-result p2

    if-eqz p2, :cond_0

    goto :goto_0

    :cond_0
    iget-object p2, p0, Lcom/kwad/components/ad/interstitial/d/j;->cr:Ljava/util/List;

    invoke-interface {p2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p2

    :cond_1
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    if-lt p1, v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 v1, 0x0

    invoke-static {v0, p1, v1}, Lcom/kwad/sdk/core/report/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;ILorg/json/JSONObject;)V

    invoke-interface {p2}, Ljava/util/Iterator;->remove()V

    :cond_2
    :goto_0
    return-void
.end method

.method static synthetic d(Lcom/kwad/components/ad/interstitial/d/j;)Lcom/kwad/sdk/core/video/videoview/a;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/j;->ex:Lcom/kwad/sdk/core/video/videoview/a;

    return-object p0
.end method

.method static synthetic e(Lcom/kwad/components/ad/interstitial/d/j;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/j;->getContext()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method private ea()V
    .locals 6

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j;->dJ:Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsAdVideoPlayConfig;->isVideoSoundEnable()Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/components/ad/interstitial/d/j;->mIsAudioEnable:Z

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->bi(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/core/response/model/b;->getUrl()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const/4 v2, 0x0

    if-nez v1, :cond_0

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/j;->ew:Landroid/widget/ImageView;

    invoke-virtual {v1, v2}, Landroid/widget/ImageView;->setImageDrawable(Landroid/graphics/drawable/Drawable;)V

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/j;->ew:Landroid/widget/ImageView;

    iget-object v3, p0, Lcom/kwad/components/ad/interstitial/d/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1, v0, v3}, Lcom/kwad/sdk/core/imageloader/KSImageLoader;->loadImage(Landroid/widget/ImageView;Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j;->ew:Landroid/widget/ImageView;

    const/4 v1, 0x0

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j;->ew:Landroid/widget/ImageView;

    const/16 v1, 0x8

    :goto_0
    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    invoke-static {}, Lcom/kwad/sdk/core/config/d;->zz()I

    move-result v0

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/j;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->F(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_1

    return-void

    :cond_1
    if-gez v0, :cond_3

    invoke-static {}, Lcom/kwad/sdk/core/diskcache/b/a;->Au()Lcom/kwad/sdk/core/diskcache/b/a;

    move-result-object v0

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/diskcache/b/a;->bR(Ljava/lang/String;)Ljava/io/File;

    move-result-object v0

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-virtual {v0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    move-object v1, v0

    goto :goto_1

    :cond_2
    move-object v1, v2

    goto :goto_1

    :cond_3
    if-nez v0, :cond_4

    goto :goto_1

    :cond_4
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/kwad/sdk/core/videocache/c/a;->bj(Landroid/content/Context;)Lcom/kwad/sdk/core/videocache/f;

    move-result-object v0

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/videocache/f;->dN(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    :goto_1
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_5

    return-void

    :cond_5
    new-instance v0, Lcom/kwad/sdk/contentalliance/a/a/b$a;

    iget-object v3, p0, Lcom/kwad/components/ad/interstitial/d/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {v0, v3}, Lcom/kwad/sdk/contentalliance/a/a/b$a;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/contentalliance/a/a/b$a;->cn(Ljava/lang/String;)Lcom/kwad/sdk/contentalliance/a/a/b$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/d;->ch(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/PhotoInfo;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/f;->b(Lcom/kwad/sdk/core/response/model/PhotoInfo;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/contentalliance/a/a/b$a;->co(Ljava/lang/String;)Lcom/kwad/sdk/contentalliance/a/a/b$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mVideoPlayerStatus:Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/contentalliance/a/a/b$a;->a(Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;)Lcom/kwad/sdk/contentalliance/a/a/b$a;

    move-result-object v0

    new-instance v1, Lcom/kwad/sdk/contentalliance/a/a/a;

    iget-object v3, p0, Lcom/kwad/components/ad/interstitial/d/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    invoke-direct {v1, v3, v4, v5}, Lcom/kwad/sdk/contentalliance/a/a/a;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;J)V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/contentalliance/a/a/b$a;->b(Lcom/kwad/sdk/contentalliance/a/a/a;)Lcom/kwad/sdk/contentalliance/a/a/b$a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/contentalliance/a/a/b$a;->yS()Lcom/kwad/sdk/contentalliance/a/a/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/j;->ex:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-virtual {v1, v0, v2}, Lcom/kwad/sdk/core/video/videoview/a;->a(Lcom/kwad/sdk/contentalliance/a/a/b;Ljava/util/Map;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j;->ex:Lcom/kwad/sdk/core/video/videoview/a;

    iget-boolean v1, p0, Lcom/kwad/components/ad/interstitial/d/j;->mIsAudioEnable:Z

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/video/videoview/a;->setVideoSoundEnable(Z)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j;->lb:Lcom/kwad/components/core/video/f;

    new-instance v1, Lcom/kwad/components/ad/interstitial/d/j$2;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/interstitial/d/j$2;-><init>(Lcom/kwad/components/ad/interstitial/d/j;)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/video/f;->setVideoPlayCallback(Lcom/kwad/components/core/video/a$c;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j;->ex:Lcom/kwad/sdk/core/video/videoview/a;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/j;->lb:Lcom/kwad/components/core/video/f;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/video/videoview/a;->setController(Lcom/kwad/sdk/core/video/videoview/b;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j;->jR:Lcom/kwad/sdk/widget/KSFrameLayout;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/widget/KSFrameLayout;->setClickable(Z)V

    new-instance v0, Lcom/kwad/sdk/widget/f;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/j;->jR:Lcom/kwad/sdk/widget/KSFrameLayout;

    invoke-virtual {v1}, Lcom/kwad/sdk/widget/KSFrameLayout;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/interstitial/d/j;->jR:Lcom/kwad/sdk/widget/KSFrameLayout;

    invoke-direct {v0, v1, v2, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/content/Context;Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j;->jR:Lcom/kwad/sdk/widget/KSFrameLayout;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/j;->ex:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/widget/KSFrameLayout;->addView(Landroid/view/View;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    new-instance v1, Lcom/kwad/components/ad/interstitial/d/j$3;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/interstitial/d/j$3;-><init>(Lcom/kwad/components/ad/interstitial/d/j;)V

    iput-object v1, v0, Lcom/kwad/components/ad/interstitial/d/c;->jp:Lcom/kwad/components/ad/interstitial/d/c$d;

    return-void
.end method

.method private eb()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-boolean v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->jk:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;->onAdClicked()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    const/4 v1, 0x1

    iput-boolean v1, v0, Lcom/kwad/components/ad/interstitial/d/c;->ji:Z

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-boolean v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->jk:Z

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    invoke-virtual {v0}, Lcom/kwad/components/ad/interstitial/d/c;->ck()V

    :cond_1
    return-void
.end method

.method static synthetic f(Lcom/kwad/components/ad/interstitial/d/j;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/j;->eb()V

    return-void
.end method

.method static synthetic g(Lcom/kwad/components/ad/interstitial/d/j;)Lcom/kwad/components/core/e/d/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/j;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    return-object p0
.end method

.method static synthetic h(Lcom/kwad/components/ad/interstitial/d/j;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/j;->getContext()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method


# virtual methods
.method public final a(Landroid/view/View;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    const/4 v1, 0x1

    invoke-direct {p0, p1, v1}, Lcom/kwad/components/ad/interstitial/d/j;->a(Landroid/view/View;Z)Lcom/kwad/components/ad/interstitial/d/c$b;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/kwad/components/ad/interstitial/d/c;->a(Lcom/kwad/components/ad/interstitial/d/c$b;)V

    return-void
.end method

.method public final ah()V
    .locals 4

    invoke-super {p0}, Lcom/kwad/components/ad/interstitial/d/b;->ah()V

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/j;->Gk()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/interstitial/d/c;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->dJ:Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j;->dJ:Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->bd(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j;->cr:Ljava/util/List;

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->ex:Lcom/kwad/sdk/core/video/videoview/a;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j;->ex:Lcom/kwad/sdk/core/video/videoview/a;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/j;->cr:Ljava/util/List;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/video/videoview/a;->setTag(Ljava/lang/Object;)V

    new-instance v0, Lcom/kwad/components/core/video/f;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/j;->mContext:Landroid/content/Context;

    iget-object v2, p0, Lcom/kwad/components/ad/interstitial/d/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v3, p0, Lcom/kwad/components/ad/interstitial/d/j;->ex:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-direct {v0, v1, v2, v3}, Lcom/kwad/components/core/video/f;-><init>(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/video/videoview/c;)V

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j;->lb:Lcom/kwad/components/core/video/f;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/j;->dJ:Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

    invoke-interface {v1}, Lcom/kwad/sdk/api/KsAdVideoPlayConfig;->isDataFlowAutoStart()Z

    move-result v1

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/video/f;->setDataFlowAutoStart(Z)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j;->lb:Lcom/kwad/components/core/video/f;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/j;->eC:Lcom/kwad/components/core/video/a$a;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/video/f;->setAdClickListener(Lcom/kwad/components/core/video/a$a;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j;->lb:Lcom/kwad/components/core/video/f;

    invoke-virtual {v0}, Lcom/kwad/components/core/video/f;->qC()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/j;->ea()V

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/j;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    sget v1, Lcom/kwad/sdk/R$dimen;->ksad_interstitial_card_radius:I

    invoke-virtual {v0, v1}, Landroid/content/res/Resources;->getDimension(I)F

    move-result v0

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/j;->jR:Lcom/kwad/sdk/widget/KSFrameLayout;

    const/4 v2, 0x0

    invoke-virtual {v1, v0, v0, v2, v2}, Lcom/kwad/sdk/widget/KSFrameLayout;->setRadius(FFFF)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/j;->ka:Lcom/kwad/components/ad/interstitial/d/h;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/interstitial/d/c;->a(Lcom/kwad/components/ad/interstitial/d/h;)V

    return-void
.end method

.method public final b(Landroid/view/View;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    const/4 v1, 0x0

    invoke-direct {p0, p1, v1}, Lcom/kwad/components/ad/interstitial/d/j;->a(Landroid/view/View;Z)Lcom/kwad/components/ad/interstitial/d/c$b;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/kwad/components/ad/interstitial/d/c;->a(Lcom/kwad/components/ad/interstitial/d/c$b;)V

    return-void
.end method

.method public final onCreate()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/interstitial/d/b;->onCreate()V

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/j;->getRootView()Landroid/view/View;

    move-result-object v0

    sget v1, Lcom/kwad/sdk/R$id;->ksad_container:I

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/widget/KSFrameLayout;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j;->jQ:Lcom/kwad/sdk/widget/KSFrameLayout;

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/j;->getRootView()Landroid/view/View;

    move-result-object v0

    sget v1, Lcom/kwad/sdk/R$id;->ksad_video_container:I

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/widget/KSFrameLayout;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j;->jR:Lcom/kwad/sdk/widget/KSFrameLayout;

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/j;->getRootView()Landroid/view/View;

    move-result-object v0

    sget v1, Lcom/kwad/sdk/R$id;->ksad_video_first_frame_container:I

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j;->ew:Landroid/widget/ImageView;

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j;->jR:Lcom/kwad/sdk/widget/KSFrameLayout;

    const/4 v1, 0x4

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/widget/KSFrameLayout;->setVisibility(I)V

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/j;->getContext()Landroid/content/Context;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j;->mContext:Landroid/content/Context;

    return-void
.end method

.method public final onDestroy()V
    .locals 0

    invoke-super {p0}, Lcom/kwad/components/ad/interstitial/d/b;->onDestroy()V

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/interstitial/d/b;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    const/4 v1, 0x0

    iput-object v1, v0, Lcom/kwad/components/ad/interstitial/d/c;->jp:Lcom/kwad/components/ad/interstitial/d/c$d;

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/j;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/j;->ka:Lcom/kwad/components/ad/interstitial/d/h;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/interstitial/d/c;->b(Lcom/kwad/components/ad/interstitial/d/h;)V

    return-void
.end method
