.class public final Lcom/kwad/components/ad/interstitial/d/g;
.super Lcom/kwad/components/ad/interstitial/d/b;

# interfaces
.implements Lcom/kwad/components/core/video/a$c;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/ad/interstitial/d/g$a;
    }
.end annotation


# static fields
.field private static kP:J = 0x3e8L


# instance fields
.field private jf:Lcom/kwad/components/ad/interstitial/d/c;

.field private kQ:Lcom/kwad/components/ad/interstitial/d/g$a;

.field private kR:I

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/b;-><init>()V

    return-void
.end method

.method private D(I)V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/g;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->jg:Lcom/kwad/components/ad/interstitial/f/f;

    if-nez v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    if-nez p1, :cond_1

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/g;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    invoke-virtual {p1}, Lcom/kwad/components/ad/interstitial/d/c;->cU()Z

    move-result p1

    if-nez p1, :cond_2

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/g;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/g;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/interstitial/d/g;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {p1, v1, v2}, Lcom/kwad/components/ad/interstitial/d/c;->b(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/g;->dr()V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/g;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    const/4 v1, -0x1

    iget-object v2, p1, Lcom/kwad/components/ad/interstitial/d/c;->ex:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-virtual {p1, v0, v1, v2}, Lcom/kwad/components/ad/interstitial/d/c;->a(ZILcom/kwad/sdk/core/video/videoview/a;)V

    return-void

    :cond_1
    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/g;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v1, v1, Lcom/kwad/components/ad/interstitial/d/c;->jg:Lcom/kwad/components/ad/interstitial/f/f;

    invoke-virtual {v1, v0, p1}, Lcom/kwad/components/ad/interstitial/f/f;->b(ZI)V

    :cond_2
    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/interstitial/d/g;)I
    .locals 0

    iget p0, p0, Lcom/kwad/components/ad/interstitial/d/g;->kR:I

    return p0
.end method

.method static synthetic a(Lcom/kwad/components/ad/interstitial/d/g;I)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/interstitial/d/g;->D(I)V

    return-void
.end method

.method static synthetic dX()J
    .locals 2

    sget-wide v0, Lcom/kwad/components/ad/interstitial/d/g;->kP:J

    return-wide v0
.end method

.method private dr()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/g;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->ex:Lcom/kwad/sdk/core/video/videoview/a;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/g;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->ex:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/video/videoview/a;->release()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/g;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->hG:Lcom/kwad/components/ad/interstitial/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/interstitial/d;->dismiss()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/g;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-boolean v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->jk:Z

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/g;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/g;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;->onAdClosed()V

    :cond_1
    return-void
.end method


# virtual methods
.method public final ah()V
    .locals 5

    invoke-super {p0}, Lcom/kwad/components/ad/interstitial/d/b;->ah()V

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, " onBind"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "InterstitialPlayablePresenter"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/g;->Gk()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/interstitial/d/c;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/g;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/g;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iget-object v1, v0, Lcom/kwad/sdk/core/response/model/AdInfo;->adInsertScreenInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdInsertScreenInfo;

    iget v1, v1, Lcom/kwad/sdk/core/response/model/AdInfo$AdInsertScreenInfo;->autoCloseTime:I

    int-to-long v1, v1

    const-wide/16 v3, 0x0

    cmp-long v3, v1, v3

    if-lez v3, :cond_0

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/a/b;->b(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v3

    int-to-long v3, v3

    invoke-static {v3, v4, v1, v2}, Ljava/lang/Math;->min(JJ)J

    move-result-wide v1

    long-to-int v1, v1

    goto :goto_0

    :cond_0
    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/a/b;->b(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v1

    :goto_0
    iput v1, p0, Lcom/kwad/components/ad/interstitial/d/g;->kR:I

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/g;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v1, v1, Lcom/kwad/components/ad/interstitial/d/c;->jg:Lcom/kwad/components/ad/interstitial/f/f;

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/g;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v1, v1, Lcom/kwad/components/ad/interstitial/d/c;->jg:Lcom/kwad/components/ad/interstitial/f/f;

    const/4 v2, 0x1

    iget v3, p0, Lcom/kwad/components/ad/interstitial/d/g;->kR:I

    invoke-virtual {v1, v2, v3}, Lcom/kwad/components/ad/interstitial/f/f;->b(ZI)V

    :cond_1
    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aU(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_2

    iput-object v1, p0, Lcom/kwad/components/ad/interstitial/d/g;->kQ:Lcom/kwad/components/ad/interstitial/d/g$a;

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/g;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/interstitial/d/c;->a(Lcom/kwad/components/core/video/a$c;)V

    return-void

    :cond_2
    new-instance v0, Lcom/kwad/components/ad/interstitial/d/g$a;

    const/4 v2, 0x0

    invoke-direct {v0, p0, v2}, Lcom/kwad/components/ad/interstitial/d/g$a;-><init>(Lcom/kwad/components/ad/interstitial/d/g;B)V

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/g;->kQ:Lcom/kwad/components/ad/interstitial/d/g$a;

    const-wide/16 v2, 0x3e8

    invoke-static {v0, v1, v2, v3}, Lcom/kwad/sdk/utils/bj;->a(Ljava/lang/Runnable;Ljava/lang/Object;J)V

    return-void
.end method

.method public final bj()V
    .locals 0

    return-void
.end method

.method public final bk()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/g;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    invoke-virtual {v0}, Lcom/kwad/components/ad/interstitial/d/c;->cU()Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/g;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/g;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/interstitial/d/g;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1, v2}, Lcom/kwad/components/ad/interstitial/d/c;->b(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/g;->dr()V

    :cond_0
    return-void
.end method

.method public final cN()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/interstitial/d/b;->cN()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/g;->kQ:Lcom/kwad/components/ad/interstitial/d/g$a;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/interstitial/d/g$a;->r(Z)V

    :cond_0
    return-void
.end method

.method public final cO()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/interstitial/d/b;->cO()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/g;->kQ:Lcom/kwad/components/ad/interstitial/d/g$a;

    if-eqz v0, :cond_0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/interstitial/d/g$a;->r(Z)V

    :cond_0
    return-void
.end method

.method public final d(J)V
    .locals 2

    const-wide/16 v0, 0x3e8

    div-long/2addr p1, v0

    long-to-int p1, p1

    iget p2, p0, Lcom/kwad/components/ad/interstitial/d/g;->kR:I

    sub-int/2addr p2, p1

    invoke-direct {p0, p2}, Lcom/kwad/components/ad/interstitial/d/g;->D(I)V

    return-void
.end method

.method public final onCreate()V
    .locals 0

    invoke-super {p0}, Lcom/kwad/components/ad/interstitial/d/b;->onCreate()V

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/interstitial/d/b;->onUnbind()V

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, " onUnbind"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "InterstitialPlayablePresenter"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/g;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/interstitial/d/c;->b(Lcom/kwad/components/core/video/a$c;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/g;->kQ:Lcom/kwad/components/ad/interstitial/d/g$a;

    if-eqz v0, :cond_0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/interstitial/d/g$a;->q(Z)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/g;->kQ:Lcom/kwad/components/ad/interstitial/d/g$a;

    invoke-static {v0}, Lcom/kwad/sdk/utils/bj;->b(Ljava/lang/Runnable;)V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/g;->kQ:Lcom/kwad/components/ad/interstitial/d/g$a;

    :cond_0
    return-void
.end method

.method public final onVideoPlayStart()V
    .locals 0

    return-void
.end method
