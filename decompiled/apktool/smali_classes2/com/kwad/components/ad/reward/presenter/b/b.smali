.class public final Lcom/kwad/components/ad/reward/presenter/b/b;
.super Lcom/kwad/components/ad/reward/presenter/a;


# instance fields
.field private fH:Lcom/kwad/components/offline/api/core/adlive/IAdLiveEndRequest;

.field private gz:J

.field private final mNetworking:Lcom/kwad/sdk/core/network/m;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/kwad/sdk/core/network/m<",
            "Lcom/kwad/components/core/liveEnd/a;",
            "Lcom/kwad/components/ad/reward/model/AdLiveEndResultData;",
            ">;"
        }
    .end annotation
.end field

.field private pt:Lcom/kwad/components/ad/reward/m/p;

.field private final ss:Lcom/kwad/components/core/video/l;

.field private tM:Landroid/view/View;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/a;-><init>()V

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/b/b$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/b/b$1;-><init>(Lcom/kwad/components/ad/reward/presenter/b/b;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/b/b;->mNetworking:Lcom/kwad/sdk/core/network/m;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/b/b$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/b/b$2;-><init>(Lcom/kwad/components/ad/reward/presenter/b/b;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/b/b;->ss:Lcom/kwad/components/core/video/l;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/b/b;J)J
    .locals 0

    iput-wide p1, p0, Lcom/kwad/components/ad/reward/presenter/b/b;->gz:J

    return-wide p1
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/b/b;I)Landroid/view/View;
    .locals 0

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/reward/presenter/b/b;->findViewById(I)Landroid/view/View;

    move-result-object p0

    return-object p0
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/b/b;Landroid/view/View;)Landroid/view/View;
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/b/b;->tM:Landroid/view/View;

    return-object p1
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/b/b;Lcom/kwad/components/ad/reward/m/p;)Lcom/kwad/components/ad/reward/m/p;
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/b/b;->pt:Lcom/kwad/components/ad/reward/m/p;

    return-object p1
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/b/b;)Lcom/kwad/components/offline/api/core/adlive/IAdLiveEndRequest;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/b/b;->fH:Lcom/kwad/components/offline/api/core/adlive/IAdLiveEndRequest;

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/reward/presenter/b/b;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/b/b;->hV()V

    return-void
.end method

.method static synthetic c(Lcom/kwad/components/ad/reward/presenter/b/b;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/b/b;->hW()V

    return-void
.end method

.method static synthetic d(Lcom/kwad/components/ad/reward/presenter/b/b;)Lcom/kwad/components/ad/reward/m/p;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/b/b;->pt:Lcom/kwad/components/ad/reward/m/p;

    return-object p0
.end method

.method static synthetic e(Lcom/kwad/components/ad/reward/presenter/b/b;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/b/b;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic f(Lcom/kwad/components/ad/reward/presenter/b/b;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/b/b;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic g(Lcom/kwad/components/ad/reward/presenter/b/b;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/b/b;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic h(Lcom/kwad/components/ad/reward/presenter/b/b;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/b/b;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method private hF()V
    .locals 4

    new-instance v0, Lcom/kwad/sdk/core/report/j;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/j;-><init>()V

    new-instance v1, Lcom/kwad/sdk/core/report/z$a;

    invoke-direct {v1}, Lcom/kwad/sdk/core/report/z$a;-><init>()V

    const/16 v2, 0x18

    invoke-virtual {v0, v2}, Lcom/kwad/sdk/core/report/j;->cm(I)Lcom/kwad/sdk/core/report/j;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/j;->a(Lcom/kwad/sdk/core/report/z$a;)Lcom/kwad/sdk/core/report/j;

    invoke-static {}, Lcom/kwad/components/core/t/b;->qj()Lcom/kwad/components/core/t/b;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/b/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v2, v2, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 v3, 0x0

    invoke-virtual {v1, v2, v3, v0}, Lcom/kwad/components/core/t/b;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lorg/json/JSONObject;Lcom/kwad/sdk/core/report/j;)V

    return-void
.end method

.method private hV()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/b/b;->fH:Lcom/kwad/components/offline/api/core/adlive/IAdLiveEndRequest;

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/b/b;->mNetworking:Lcom/kwad/sdk/core/network/m;

    new-instance v1, Lcom/kwad/components/ad/reward/presenter/b/b$3;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/reward/presenter/b/b$3;-><init>(Lcom/kwad/components/ad/reward/presenter/b/b;)V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/network/m;->request(Lcom/kwad/sdk/core/network/h;)V

    return-void
.end method

.method private hW()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/b/b;->tM:Landroid/view/View;

    if-eqz v0, :cond_0

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    :cond_0
    return-void
.end method

.method static synthetic i(Lcom/kwad/components/ad/reward/presenter/b/b;)J
    .locals 2

    iget-wide v0, p0, Lcom/kwad/components/ad/reward/presenter/b/b;->gz:J

    return-wide v0
.end method

.method static synthetic j(Lcom/kwad/components/ad/reward/presenter/b/b;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/b/b;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic k(Lcom/kwad/components/ad/reward/presenter/b/b;)Landroid/view/View;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/b/b;->tM:Landroid/view/View;

    return-object p0
.end method

.method static synthetic l(Lcom/kwad/components/ad/reward/presenter/b/b;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/b/b;->hF()V

    return-void
.end method

.method static synthetic m(Lcom/kwad/components/ad/reward/presenter/b/b;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/b/b;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method


# virtual methods
.method public final ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/b/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/l/d;->jR()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/b/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/b/b;->ss:Lcom/kwad/components/core/video/l;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/l/d;->a(Lcom/kwad/components/core/video/l;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/b/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aY(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    const-class v1, Lcom/kwad/components/core/offline/api/a/a;

    invoke-static {v1}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    move-result-object v1

    check-cast v1, Lcom/kwad/components/core/offline/api/a/a;

    if-eqz v1, :cond_0

    invoke-interface {v1, v0}, Lcom/kwad/components/core/offline/api/a/a;->getAdLiveEndRequest(Ljava/lang/String;)Lcom/kwad/components/offline/api/core/adlive/IAdLiveEndRequest;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/b/b;->fH:Lcom/kwad/components/offline/api/core/adlive/IAdLiveEndRequest;

    :cond_0
    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/b/b;->mNetworking:Lcom/kwad/sdk/core/network/m;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/network/m;->cancel()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/b/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/l/d;->jR()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/b/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/b/b;->ss:Lcom/kwad/components/core/video/l;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/l/d;->b(Lcom/kwad/components/core/video/l;)V

    :cond_0
    return-void
.end method
