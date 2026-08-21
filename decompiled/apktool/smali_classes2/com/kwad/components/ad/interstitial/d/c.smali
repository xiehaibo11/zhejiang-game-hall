.class public final Lcom/kwad/components/ad/interstitial/d/c;
.super Lcom/kwad/sdk/mvp/a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/ad/interstitial/d/c$b;,
        Lcom/kwad/components/ad/interstitial/d/c$c;,
        Lcom/kwad/components/ad/interstitial/d/c$d;,
        Lcom/kwad/components/ad/interstitial/d/c$a;,
        Lcom/kwad/components/ad/interstitial/d/c$e;
    }
.end annotation


# instance fields
.field public dJ:Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

.field public ex:Lcom/kwad/sdk/core/video/videoview/a;

.field public gt:Lcom/kwad/components/core/webview/b/e/e;

.field public hG:Lcom/kwad/components/ad/interstitial/d;

.field public hx:Lcom/kwad/components/ad/interstitial/e/b;

.field public hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

.field public jg:Lcom/kwad/components/ad/interstitial/f/f;

.field private jh:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/components/ad/interstitial/d/c$e;",
            ">;"
        }
    .end annotation
.end field

.field public ji:Z

.field public jj:Z

.field public jk:Z

.field public jl:Lcom/kwad/components/ad/interstitial/d/c$a;

.field public jm:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/components/ad/interstitial/d/c$a;",
            ">;"
        }
    .end annotation
.end field

.field public jn:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/components/ad/interstitial/d/h;",
            ">;"
        }
    .end annotation
.end field

.field public jo:Lcom/kwad/sdk/widget/KSFrameLayout;

.field public jp:Lcom/kwad/components/ad/interstitial/d/c$d;

.field public jq:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/components/ad/interstitial/d/c$c;",
            ">;"
        }
    .end annotation
.end field

.field public jr:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/components/core/video/a$c;",
            ">;"
        }
    .end annotation
.end field

.field public volatile js:Z

.field public jt:Z

.field public ju:I

.field public mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

.field private mHandler:Landroid/os/Handler;


# direct methods
.method public constructor <init>()V
    .locals 2

    invoke-direct {p0}, Lcom/kwad/sdk/mvp/a;-><init>()V

    new-instance v0, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/c;->jm:Ljava/util/List;

    new-instance v0, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/c;->jn:Ljava/util/List;

    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/c;->mHandler:Landroid/os/Handler;

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/interstitial/d/c;->js:Z

    const/4 v0, -0x1

    iput v0, p0, Lcom/kwad/components/ad/interstitial/d/c;->ju:I

    new-instance v0, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/c;->jr:Ljava/util/List;

    new-instance v0, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/c;->jh:Ljava/util/List;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/c;->jq:Ljava/util/List;

    return-void
.end method

.method private static a(JLcom/kwad/sdk/core/response/model/AdTemplate;)I
    .locals 4

    const-wide/16 v0, -0x1

    cmp-long v0, p0, v0

    const/4 v1, -0x1

    if-nez v0, :cond_0

    return v1

    :cond_0
    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p2

    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/a;->H(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v2

    long-to-float p2, v2

    const/high16 v0, 0x447a0000    # 1000.0f

    div-float/2addr p2, v0

    const/4 v0, 0x0

    cmpl-float v0, p2, v0

    if-eqz v0, :cond_1

    long-to-float p0, p0

    div-float/2addr p0, p2

    const/high16 p1, 0x42c80000    # 100.0f

    mul-float/2addr p0, p1

    invoke-static {p0}, Ljava/lang/Math;->round(F)I

    move-result v1

    :cond_1
    return v1
.end method

.method private static a(Lcom/kwad/sdk/core/video/videoview/a;)J
    .locals 2

    if-nez p0, :cond_0

    const-wide/16 v0, -0x1

    return-wide v0

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/sdk/core/video/videoview/a;->getCurrentPosition()J

    move-result-wide v0

    return-wide v0
.end method

.method private a(IILandroid/content/Context;)V
    .locals 1

    iget-object p3, p0, Lcom/kwad/components/ad/interstitial/d/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    new-instance v0, Lcom/kwad/sdk/core/report/j;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/j;-><init>()V

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/core/report/j;->ck(I)Lcom/kwad/sdk/core/report/j;

    move-result-object p1

    invoke-virtual {p1, p2}, Lcom/kwad/sdk/core/report/j;->cg(I)Lcom/kwad/sdk/core/report/j;

    move-result-object p1

    invoke-static {}, Lcom/kwad/sdk/utils/ai;->IN()Z

    move-result p2

    const/4 v0, 0x1

    if-eqz p2, :cond_0

    const/4 p2, 0x2

    goto :goto_0

    :cond_0
    move p2, v0

    :goto_0
    invoke-virtual {p1, p2}, Lcom/kwad/sdk/core/report/j;->cr(I)Lcom/kwad/sdk/core/report/j;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/sdk/core/report/j;->Ca()Lcom/kwad/sdk/core/report/z$b;

    move-result-object p1

    const/4 p2, 0x0

    invoke-static {p3, p1, p2}, Lcom/kwad/sdk/core/report/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/report/z$b;Lorg/json/JSONObject;)V

    iget-boolean p1, p0, Lcom/kwad/components/ad/interstitial/d/c;->jk:Z

    if-nez p1, :cond_1

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/c;->hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    if-eqz p1, :cond_1

    invoke-interface {p1}, Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;->onAdClicked()V

    :cond_1
    iput-boolean v0, p0, Lcom/kwad/components/ad/interstitial/d/c;->ji:Z

    iget-boolean p1, p0, Lcom/kwad/components/ad/interstitial/d/c;->jk:Z

    if-nez p1, :cond_2

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/c;->ck()V

    :cond_2
    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/interstitial/d/c;IILandroid/content/Context;)V
    .locals 0

    invoke-direct {p0, p1, p2, p3}, Lcom/kwad/components/ad/interstitial/d/c;->a(IILandroid/content/Context;)V

    return-void
.end method

.method public static a(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 0

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->aO(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p0

    if-eqz p0, :cond_0

    invoke-static {}, Lcom/kwad/sdk/utils/ai;->IN()Z

    move-result p0

    if-nez p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method private static b(Lcom/kwad/sdk/core/video/videoview/a;)I
    .locals 7

    const/4 v0, -0x1

    if-nez p0, :cond_0

    return v0

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/sdk/core/video/videoview/a;->getDuration()J

    move-result-wide v1

    invoke-virtual {p0}, Lcom/kwad/sdk/core/video/videoview/a;->getCurrentPosition()J

    move-result-wide v3

    const-wide/16 v5, 0x0

    cmp-long p0, v1, v5

    if-eqz p0, :cond_1

    long-to-float p0, v3

    long-to-float v0, v1

    div-float/2addr p0, v0

    const/high16 v0, 0x42c80000    # 100.0f

    mul-float/2addr p0, v0

    invoke-static {p0}, Ljava/lang/Math;->round(F)I

    move-result v0

    :cond_1
    return v0
.end method


# virtual methods
.method public final M(Landroid/content/Context;)Z
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    if-eqz v0, :cond_1

    if-nez p1, :cond_0

    goto :goto_0

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->bv(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p1

    return p1

    :cond_1
    :goto_0
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "isPlayable illegal params: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, ", context: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "InterstitialCallerContext"

    invoke-static {v0, p1}, Lcom/kwad/sdk/core/e/c;->w(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p1, 0x0

    return p1
.end method

.method public final a(Landroid/content/Context;III)V
    .locals 1

    new-instance p3, Lcom/kwad/components/core/e/d/a$a;

    invoke-direct {p3, p1}, Lcom/kwad/components/core/e/d/a$a;-><init>(Landroid/content/Context;)V

    iget-object p4, p0, Lcom/kwad/components/ad/interstitial/d/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {p3, p4}, Lcom/kwad/components/core/e/d/a$a;->P(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p3

    iget-object p4, p0, Lcom/kwad/components/ad/interstitial/d/c;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-virtual {p3, p4}, Lcom/kwad/components/core/e/d/a$a;->b(Lcom/kwad/components/core/e/d/c;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p3

    const/4 p4, 0x0

    invoke-virtual {p3, p4}, Lcom/kwad/components/core/e/d/a$a;->am(Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p3

    const/4 p4, 0x2

    invoke-virtual {p3, p4}, Lcom/kwad/components/core/e/d/a$a;->ao(I)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p3

    const/4 p4, 0x6

    invoke-virtual {p3, p4}, Lcom/kwad/components/core/e/d/a$a;->am(I)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p3

    invoke-virtual {p3, p2}, Lcom/kwad/components/core/e/d/a$a;->an(I)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p3

    new-instance p4, Lcom/kwad/components/ad/interstitial/d/c$3;

    const/16 v0, 0x9

    invoke-direct {p4, p0, v0, p2, p1}, Lcom/kwad/components/ad/interstitial/d/c$3;-><init>(Lcom/kwad/components/ad/interstitial/d/c;IILandroid/content/Context;)V

    invoke-virtual {p3, p4}, Lcom/kwad/components/core/e/d/a$a;->a(Lcom/kwad/components/core/e/d/a$b;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/components/core/e/d/a;->a(Lcom/kwad/components/core/e/d/a$a;)I

    return-void
.end method

.method public final a(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdInfo;Lcom/kwad/sdk/core/response/model/AdTemplate;Landroid/view/View;)V
    .locals 2

    if-nez p4, :cond_0

    return-void

    :cond_0
    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/a;->bi(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/b;

    move-result-object p2

    invoke-virtual {p2}, Lcom/kwad/sdk/core/response/model/b;->getUrl()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Lcom/kwad/sdk/utils/bc;->isNullString(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    return-void

    :cond_1
    sget-object v0, Lcom/kwad/sdk/core/imageloader/KSImageLoader;->IMGOPTION_NORMAL:Lcom/kwad/sdk/core/imageloader/core/DisplayImageOptionsCompat;

    new-instance v1, Lcom/kwad/components/ad/interstitial/d/c$4;

    invoke-direct {v1, p0, p1, p4}, Lcom/kwad/components/ad/interstitial/d/c$4;-><init>(Lcom/kwad/components/ad/interstitial/d/c;Landroid/content/Context;Landroid/view/View;)V

    invoke-static {p2, p3, v0, v1}, Lcom/kwad/sdk/core/imageloader/KSImageLoader;->loadImage(Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/imageloader/core/DisplayImageOptionsCompat;Lcom/kwad/sdk/core/imageloader/core/listener/ImageLoadingListener;)V

    return-void
.end method

.method public final a(Lcom/kwad/components/ad/interstitial/d/c$a;)V
    .locals 1

    if-nez p1, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/c;->jm:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public final a(Lcom/kwad/components/ad/interstitial/d/c$b;)V
    .locals 5

    invoke-virtual {p1}, Lcom/kwad/components/ad/interstitial/d/c$b;->cV()I

    move-result v0

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-ne v0, v2, :cond_0

    move v0, v2

    goto :goto_0

    :cond_0
    move v0, v1

    :goto_0
    invoke-static {}, Lcom/kwad/components/ad/interstitial/a/b;->cD()Z

    move-result v3

    if-nez v3, :cond_1

    if-nez v0, :cond_1

    invoke-virtual {p1}, Lcom/kwad/components/ad/interstitial/d/c$b;->cX()Z

    move-result v3

    if-nez v3, :cond_1

    iget-boolean v3, p1, Lcom/kwad/components/ad/interstitial/d/c$b;->jK:Z

    if-eqz v3, :cond_2

    :cond_1
    new-instance v3, Lcom/kwad/components/core/e/d/a$a;

    invoke-virtual {p1}, Lcom/kwad/components/ad/interstitial/d/c$b;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-direct {v3, v4}, Lcom/kwad/components/core/e/d/a$a;-><init>(Landroid/content/Context;)V

    iget-object v4, p0, Lcom/kwad/components/ad/interstitial/d/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v3, v4}, Lcom/kwad/components/core/e/d/a$a;->P(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v3

    iget-object v4, p0, Lcom/kwad/components/ad/interstitial/d/c;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-virtual {v3, v4}, Lcom/kwad/components/core/e/d/a$a;->b(Lcom/kwad/components/core/e/d/c;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v3

    invoke-virtual {v3, v0}, Lcom/kwad/components/core/e/d/a$a;->am(Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v0

    invoke-virtual {v0, v2}, Lcom/kwad/components/core/e/d/a$a;->am(I)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v0

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/c$b;->c(Lcom/kwad/components/ad/interstitial/d/c$b;)I

    move-result v2

    invoke-virtual {v0, v2}, Lcom/kwad/components/core/e/d/a$a;->an(I)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v0

    invoke-virtual {p1}, Lcom/kwad/components/ad/interstitial/d/c$b;->cV()I

    move-result v2

    invoke-virtual {v0, v2}, Lcom/kwad/components/core/e/d/a$a;->ao(I)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v0

    new-instance v2, Lcom/kwad/components/ad/interstitial/d/c$1;

    invoke-direct {v2, p0, p1}, Lcom/kwad/components/ad/interstitial/d/c$1;-><init>(Lcom/kwad/components/ad/interstitial/d/c;Lcom/kwad/components/ad/interstitial/d/c$b;)V

    invoke-virtual {v0, v2}, Lcom/kwad/components/core/e/d/a$a;->a(Lcom/kwad/components/core/e/d/a$b;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/components/core/e/d/a;->a(Lcom/kwad/components/core/e/d/a$a;)I

    move-result p1

    if-nez p1, :cond_2

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/c;->hG:Lcom/kwad/components/ad/interstitial/d;

    if-eqz p1, :cond_2

    invoke-static {}, Lcom/kwad/components/ad/interstitial/a/b;->cG()Z

    move-result p1

    if-eqz p1, :cond_2

    const/4 p1, -0x1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/c;->ex:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-virtual {p0, v1, p1, v0}, Lcom/kwad/components/ad/interstitial/d/c;->a(ZILcom/kwad/sdk/core/video/videoview/a;)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/c;->mHandler:Landroid/os/Handler;

    new-instance v0, Lcom/kwad/components/ad/interstitial/d/c$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/interstitial/d/c$2;-><init>(Lcom/kwad/components/ad/interstitial/d/c;)V

    const-wide/16 v1, 0x1f4

    invoke-virtual {p1, v0, v1, v2}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    :cond_2
    return-void
.end method

.method public final a(Lcom/kwad/components/ad/interstitial/d/c$e;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/c;->jh:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public final a(Lcom/kwad/components/ad/interstitial/d/h;)V
    .locals 1

    if-nez p1, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/c;->jn:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public final a(Lcom/kwad/components/core/video/a$c;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/c;->jr:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/c;->jr:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_0
    return-void
.end method

.method public final a(ZILcom/kwad/sdk/core/video/videoview/a;)V
    .locals 10

    if-eqz p3, :cond_0

    invoke-static {p3}, Lcom/kwad/components/ad/interstitial/d/c;->a(Lcom/kwad/sdk/core/video/videoview/a;)J

    move-result-wide v0

    invoke-static {p3}, Lcom/kwad/components/ad/interstitial/d/c;->b(Lcom/kwad/sdk/core/video/videoview/a;)I

    move-result p2

    goto :goto_0

    :cond_0
    int-to-long v0, p2

    iget-object p2, p0, Lcom/kwad/components/ad/interstitial/d/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0, v1, p2}, Lcom/kwad/components/ad/interstitial/d/c;->a(JLcom/kwad/sdk/core/response/model/AdTemplate;)I

    move-result p2

    :goto_0
    move v6, p2

    move-wide v4, v0

    if-eqz p1, :cond_1

    const/16 p1, 0xe

    goto :goto_1

    :cond_1
    const/4 p1, 0x1

    :goto_1
    move v3, p1

    iget-object v2, p0, Lcom/kwad/components/ad/interstitial/d/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/c;->hG:Lcom/kwad/components/ad/interstitial/d;

    invoke-virtual {p1}, Lcom/kwad/components/ad/interstitial/d;->getTimerHelper()Lcom/kwad/sdk/utils/bi;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/sdk/utils/bi;->getTime()J

    move-result-wide v7

    const/4 v9, 0x0

    invoke-static/range {v2 .. v9}, Lcom/kwad/sdk/core/report/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;IJIJLorg/json/JSONObject;)V

    return-void
.end method

.method public final b(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/ad/interstitial/d/c;->js:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    invoke-static {p1, p2}, Lcom/kwad/components/core/page/a;->launch(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/components/ad/interstitial/d/c;->js:Z

    return-void
.end method

.method public final b(Lcom/kwad/components/ad/interstitial/d/c$a;)V
    .locals 1

    if-nez p1, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/c;->jm:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    return-void
.end method

.method public final b(Lcom/kwad/components/ad/interstitial/d/c$b;)V
    .locals 6

    new-instance v0, Lcom/kwad/sdk/core/report/j;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/j;-><init>()V

    invoke-virtual {p1}, Lcom/kwad/components/ad/interstitial/d/c$b;->getTouchCoords()Lcom/kwad/sdk/utils/ac$a;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/j;->c(Lcom/kwad/sdk/utils/ac$a;)Lcom/kwad/sdk/core/report/j;

    invoke-virtual {p1}, Lcom/kwad/components/ad/interstitial/d/c$b;->cW()Z

    move-result v1

    if-nez v1, :cond_0

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/c$b;->d(Lcom/kwad/components/ad/interstitial/d/c$b;)Z

    move-result v1

    if-nez v1, :cond_0

    const/16 v1, 0x99

    invoke-virtual {p1, v1}, Lcom/kwad/components/ad/interstitial/d/c$b;->z(I)Lcom/kwad/components/ad/interstitial/d/c$b;

    :cond_0
    new-instance v1, Lcom/kwad/sdk/core/report/j;

    invoke-direct {v1}, Lcom/kwad/sdk/core/report/j;-><init>()V

    invoke-virtual {p1}, Lcom/kwad/components/ad/interstitial/d/c$b;->cY()I

    move-result v2

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/core/report/j;->cg(I)Lcom/kwad/sdk/core/report/j;

    move-result-object v1

    invoke-virtual {p1}, Lcom/kwad/components/ad/interstitial/d/c$b;->getTouchCoords()Lcom/kwad/sdk/utils/ac$a;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/core/report/j;->c(Lcom/kwad/sdk/utils/ac$a;)Lcom/kwad/sdk/core/report/j;

    move-result-object v1

    invoke-static {}, Lcom/kwad/sdk/utils/ai;->IN()Z

    move-result v2

    const/4 v3, 0x1

    if-eqz v2, :cond_1

    const/4 v2, 0x2

    goto :goto_0

    :cond_1
    move v2, v3

    :goto_0
    invoke-virtual {v1, v2}, Lcom/kwad/sdk/core/report/j;->cr(I)Lcom/kwad/sdk/core/report/j;

    move-result-object v1

    invoke-virtual {p1}, Lcom/kwad/components/ad/interstitial/d/c$b;->cZ()D

    move-result-wide v4

    invoke-virtual {v1, v4, v5}, Lcom/kwad/sdk/core/report/j;->i(D)Lcom/kwad/sdk/core/report/j;

    move-result-object p1

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 v2, 0x0

    invoke-static {v1, p1, v2}, Lcom/kwad/sdk/core/report/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/report/j;Lorg/json/JSONObject;)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/c;->ex:Lcom/kwad/sdk/core/video/videoview/a;

    if-eqz p1, :cond_2

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/c;->a(Lcom/kwad/sdk/core/video/videoview/a;)J

    move-result-wide v1

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/c;->ex:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/c;->b(Lcom/kwad/sdk/core/video/videoview/a;)I

    move-result p1

    invoke-virtual {v0, v1, v2}, Lcom/kwad/sdk/core/report/j;->af(J)Lcom/kwad/sdk/core/report/j;

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/core/report/j;->cl(I)Lcom/kwad/sdk/core/report/j;

    :cond_2
    iget-boolean p1, p0, Lcom/kwad/components/ad/interstitial/d/c;->jk:Z

    if-nez p1, :cond_3

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/c;->hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    if-eqz p1, :cond_3

    invoke-interface {p1}, Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;->onAdClicked()V

    :cond_3
    iput-boolean v3, p0, Lcom/kwad/components/ad/interstitial/d/c;->ji:Z

    iget-boolean p1, p0, Lcom/kwad/components/ad/interstitial/d/c;->jk:Z

    if-nez p1, :cond_4

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/c;->ck()V

    :cond_4
    return-void
.end method

.method public final b(Lcom/kwad/components/ad/interstitial/d/h;)V
    .locals 1

    if-nez p1, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/c;->jn:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    return-void
.end method

.method public final b(Lcom/kwad/components/core/video/a$c;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/c;->jr:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    return-void
.end method

.method public final cP()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/c;->jh:Ljava/util/List;

    if-eqz v0, :cond_1

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/c;->jh:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/components/ad/interstitial/d/c$e;

    if-eqz v1, :cond_0

    invoke-interface {v1}, Lcom/kwad/components/ad/interstitial/d/c$e;->onError()V

    goto :goto_0

    :cond_1
    return-void
.end method

.method public final cQ()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/c;->jp:Lcom/kwad/components/ad/interstitial/d/c$d;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/components/ad/interstitial/d/c$d;->db()V

    :cond_0
    return-void
.end method

.method public final cR()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/c;->jq:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/components/ad/interstitial/d/c$c;

    invoke-interface {v1}, Lcom/kwad/components/ad/interstitial/d/c$c;->da()V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final cS()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/c;->jn:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/components/ad/interstitial/d/h;

    invoke-interface {v1}, Lcom/kwad/components/ad/interstitial/d/h;->du()V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final cT()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/c;->jn:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/components/ad/interstitial/d/h;

    invoke-interface {v1}, Lcom/kwad/components/ad/interstitial/d/h;->dv()V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final cU()Z
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/c;->jg:Lcom/kwad/components/ad/interstitial/f/f;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/kwad/components/ad/interstitial/f/f;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 v0, 0x1

    :goto_1
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "isH5Interstitial :"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "InterstitialCallerContext"

    invoke-static {v2, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return v0
.end method

.method public final ck()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/c;->jm:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/components/ad/interstitial/d/c$a;

    invoke-interface {v1}, Lcom/kwad/components/ad/interstitial/d/c$a;->ck()V

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/c;->jl:Lcom/kwad/components/ad/interstitial/d/c$a;

    if-eqz v0, :cond_1

    invoke-interface {v0}, Lcom/kwad/components/ad/interstitial/d/c$a;->ck()V

    :cond_1
    return-void
.end method

.method public final release()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/c;->mHandler:Landroid/os/Handler;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/c;->jr:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/c;->jh:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/c;->jq:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/c;->jn:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/c;->hx:Lcom/kwad/components/ad/interstitial/e/b;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/ad/interstitial/e/b;->sz()V

    :cond_0
    return-void
.end method
