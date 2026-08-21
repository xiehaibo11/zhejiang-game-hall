.class public final Lcom/kwad/components/ad/interstitial/aggregate/c;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/ad/interstitial/aggregate/c$b;,
        Lcom/kwad/components/ad/interstitial/aggregate/c$a;
    }
.end annotation


# instance fields
.field private volatile hY:Z

.field private hZ:Lcom/kwad/sdk/core/network/m;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/kwad/sdk/core/network/m<",
            "Lcom/kwad/components/core/p/a;",
            "Lcom/kwad/components/core/response/model/AdResultData;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method private constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/c;->hY:Z

    return-void
.end method

.method synthetic constructor <init>(B)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/aggregate/c;-><init>()V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/interstitial/aggregate/c;Lcom/kwad/components/core/response/model/AdResultData;J)V
    .locals 0

    invoke-static {p1, p2, p3}, Lcom/kwad/components/ad/interstitial/aggregate/c;->a(Lcom/kwad/components/core/response/model/AdResultData;J)V

    return-void
.end method

.method private a(Lcom/kwad/components/core/p/a/b;Lcom/kwad/components/core/p/h;)V
    .locals 1

    new-instance v0, Lcom/kwad/components/core/m/a;

    invoke-direct {v0, p1}, Lcom/kwad/components/core/m/a;-><init>(Lcom/kwad/components/core/p/a/b;)V

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/c;->hZ:Lcom/kwad/sdk/core/network/m;

    new-instance p1, Lcom/kwad/components/ad/interstitial/aggregate/c$2;

    invoke-direct {p1, p0, p2}, Lcom/kwad/components/ad/interstitial/aggregate/c$2;-><init>(Lcom/kwad/components/ad/interstitial/aggregate/c;Lcom/kwad/components/core/p/h;)V

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/core/network/m;->request(Lcom/kwad/sdk/core/network/h;)V

    return-void
.end method

.method private static a(Lcom/kwad/components/core/response/model/AdResultData;J)V
    .locals 3

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    invoke-virtual {p0}, Lcom/kwad/components/core/response/model/AdResultData;->getAdTemplateList()Ljava/util/List;

    move-result-object v2

    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v2

    if-lez v2, :cond_0

    invoke-virtual {p0}, Lcom/kwad/components/core/response/model/AdResultData;->getAdTemplateList()Ljava/util/List;

    move-result-object p0

    const/4 v2, 0x0

    invoke-interface {p0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/kwad/sdk/core/response/model/AdTemplate;

    if-eqz p0, :cond_0

    invoke-static {}, Lcom/kwad/components/core/o/a;->pA()Lcom/kwad/components/core/o/a;

    move-result-object v2

    sub-long/2addr v0, p1

    invoke-virtual {v2, p0, v0, v1}, Lcom/kwad/components/core/o/a;->f(Lcom/kwad/sdk/core/response/model/AdTemplate;J)V

    :cond_0
    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/interstitial/aggregate/c;Z)Z
    .locals 0

    const/4 p1, 0x0

    iput-boolean p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/c;->hY:Z

    return p1
.end method

.method public static ct()Lcom/kwad/components/ad/interstitial/aggregate/c;
    .locals 1

    invoke-static {}, Lcom/kwad/components/ad/interstitial/aggregate/c$a;->cu()Lcom/kwad/components/ad/interstitial/aggregate/c;

    move-result-object v0

    return-object v0
.end method


# virtual methods
.method public final a(IILcom/kwad/sdk/internal/api/SceneImpl;Lcom/kwad/components/ad/interstitial/aggregate/c$b;)V
    .locals 6

    iget-boolean p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/c;->hY:Z

    if-eqz p1, :cond_0

    return-void

    :cond_0
    invoke-virtual {p3}, Lcom/kwad/sdk/internal/api/SceneImpl;->clone()Lcom/kwad/sdk/internal/api/SceneImpl;

    move-result-object p1

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v4

    const/16 v0, 0x10

    invoke-virtual {p1, v0}, Lcom/kwad/sdk/internal/api/SceneImpl;->setAdStyle(I)V

    invoke-virtual {p1, p2}, Lcom/kwad/sdk/internal/api/SceneImpl;->setAdNum(I)V

    new-instance p2, Lcom/kwad/components/core/p/a/b;

    invoke-direct {p2, p1}, Lcom/kwad/components/core/p/a/b;-><init>(Lcom/kwad/sdk/internal/api/SceneImpl;)V

    new-instance p1, Lcom/kwad/components/ad/interstitial/aggregate/c$1;

    move-object v0, p1

    move-object v1, p0

    move-object v2, p3

    move-object v3, p4

    invoke-direct/range {v0 .. v5}, Lcom/kwad/components/ad/interstitial/aggregate/c$1;-><init>(Lcom/kwad/components/ad/interstitial/aggregate/c;Lcom/kwad/sdk/internal/api/SceneImpl;Lcom/kwad/components/ad/interstitial/aggregate/c$b;J)V

    invoke-direct {p0, p2, p1}, Lcom/kwad/components/ad/interstitial/aggregate/c;->a(Lcom/kwad/components/core/p/a/b;Lcom/kwad/components/core/p/h;)V

    return-void
.end method

.method public final release()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/c;->hZ:Lcom/kwad/sdk/core/network/m;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/sdk/core/network/m;->cancel()V

    :cond_0
    return-void
.end method
