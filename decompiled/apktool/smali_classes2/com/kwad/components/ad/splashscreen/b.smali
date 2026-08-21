.class public final Lcom/kwad/components/ad/splashscreen/b;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/ad/splashscreen/b$a;,
        Lcom/kwad/components/ad/splashscreen/b$b;
    }
.end annotation


# static fields
.field private static final mHandler:Landroid/os/Handler;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    sput-object v0, Lcom/kwad/components/ad/splashscreen/b;->mHandler:Landroid/os/Handler;

    return-void
.end method

.method private static a(Lcom/kwad/components/core/p/a/b;)V
    .locals 5

    iget-object v0, p0, Lcom/kwad/components/core/p/a/b;->PN:Lcom/kwad/sdk/internal/api/SceneImpl;

    invoke-virtual {v0}, Lcom/kwad/sdk/internal/api/SceneImpl;->getBidResponse()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-virtual {v0}, Lcom/kwad/sdk/internal/api/SceneImpl;->getBidResponseV2()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    goto :goto_0

    :cond_0
    invoke-static {}, Lcom/kwad/components/core/o/a;->pA()Lcom/kwad/components/core/o/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/kwad/components/core/o/a;->pD()V

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    invoke-static {}, Lcom/kwad/components/ad/splashscreen/monitor/a;->kN()Lcom/kwad/components/ad/splashscreen/monitor/a;

    iget-wide v3, v0, Lcom/kwad/sdk/internal/api/SceneImpl;->posId:J

    invoke-static {v3, v4}, Lcom/kwad/components/ad/splashscreen/monitor/a;->n(J)V

    const/4 v3, 0x4

    invoke-virtual {v0, v3}, Lcom/kwad/sdk/internal/api/SceneImpl;->setAdStyle(I)V

    const/4 v3, 0x5

    invoke-virtual {v0, v3}, Lcom/kwad/sdk/internal/api/SceneImpl;->setAdNum(I)V

    const-string v3, "KsAdSplashScreenLoadManager"

    const-string v4, "loadSplashScreenCache "

    invoke-static {v3, v4}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {}, Lcom/kwad/components/ad/KsAdLoadManager;->M()Lcom/kwad/components/ad/KsAdLoadManager;

    new-instance v3, Lcom/kwad/components/core/p/a/a$a;

    invoke-direct {v3}, Lcom/kwad/components/core/p/a/a$a;-><init>()V

    invoke-virtual {v3, p0}, Lcom/kwad/components/core/p/a/a$a;->e(Lcom/kwad/components/core/p/a/b;)Lcom/kwad/components/core/p/a/a$a;

    move-result-object p0

    const/4 v3, 0x0

    invoke-virtual {p0, v3}, Lcom/kwad/components/core/p/a/a$a;->aF(Z)Lcom/kwad/components/core/p/a/a$a;

    move-result-object p0

    new-instance v3, Lcom/kwad/components/ad/splashscreen/b$4;

    invoke-direct {v3, v0, v1, v2}, Lcom/kwad/components/ad/splashscreen/b$4;-><init>(Lcom/kwad/sdk/internal/api/SceneImpl;J)V

    invoke-virtual {p0, v3}, Lcom/kwad/components/core/p/a/a$a;->a(Lcom/kwad/components/core/p/b;)Lcom/kwad/components/core/p/a/a$a;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/core/p/a/a$a;->pI()Lcom/kwad/components/core/p/a/a;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/components/ad/KsAdLoadManager;->a(Lcom/kwad/components/core/p/a/a;)V

    :cond_1
    :goto_0
    return-void
.end method

.method static synthetic b(Lcom/kwad/components/core/p/a/b;)V
    .locals 0

    invoke-static {p0}, Lcom/kwad/components/ad/splashscreen/b;->a(Lcom/kwad/components/core/p/a/b;)V

    return-void
.end method

.method static synthetic ks()Landroid/os/Handler;
    .locals 1

    sget-object v0, Lcom/kwad/components/ad/splashscreen/b;->mHandler:Landroid/os/Handler;

    return-object v0
.end method

.method public static loadSplashScreenAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$SplashScreenAdListener;)V
    .locals 14

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    invoke-static {p0}, Lcom/kwad/sdk/internal/api/SceneImpl;->covert(Lcom/kwad/sdk/api/KsScene;)Lcom/kwad/sdk/internal/api/SceneImpl;

    move-result-object v6

    invoke-static {}, Lcom/kwad/components/ad/splashscreen/monitor/a;->kN()Lcom/kwad/components/ad/splashscreen/monitor/a;

    invoke-virtual {v6}, Lcom/kwad/sdk/internal/api/SceneImpl;->getPosId()J

    move-result-wide v2

    invoke-static {v2, v3}, Lcom/kwad/components/ad/splashscreen/monitor/a;->m(J)V

    invoke-static {}, Lcom/kwad/components/core/t/k;->qo()Lcom/kwad/components/core/t/k;

    move-result-object p0

    const-string v2, "loadSplashScreenAd"

    invoke-virtual {p0, v6, v2}, Lcom/kwad/components/core/t/k;->a(Lcom/kwad/sdk/internal/api/SceneImpl;Ljava/lang/String;)Z

    move-result p0

    const/4 v2, 0x4

    invoke-virtual {v6, v2}, Lcom/kwad/sdk/internal/api/SceneImpl;->setAdStyle(I)V

    const/4 v2, 0x1

    invoke-virtual {v6, v2}, Lcom/kwad/sdk/internal/api/SceneImpl;->setAdNum(I)V

    const-string v3, "KsAdSplashScreenLoadManager"

    const-string v4, "loadSplashScreenAd "

    invoke-static {v3, v4}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    new-instance v5, Lcom/kwad/components/ad/splashscreen/b$a;

    const/4 v3, 0x0

    invoke-direct {v5, v3}, Lcom/kwad/components/ad/splashscreen/b$a;-><init>(B)V

    invoke-static {v5, v3}, Lcom/kwad/components/ad/splashscreen/b$a;->a(Lcom/kwad/components/ad/splashscreen/b$a;Z)Z

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v8

    new-instance v4, Lcom/kwad/components/core/p/a/b;

    invoke-direct {v4, v6}, Lcom/kwad/components/core/p/a/b;-><init>(Lcom/kwad/sdk/internal/api/SceneImpl;)V

    new-instance v7, Lcom/kwad/components/ad/splashscreen/b$b;

    invoke-direct {v7, v3}, Lcom/kwad/components/ad/splashscreen/b$b;-><init>(B)V

    invoke-static {}, Lcom/kwad/components/core/o/a;->pA()Lcom/kwad/components/core/o/a;

    move-result-object v3

    invoke-virtual {v3}, Lcom/kwad/components/core/o/a;->pC()V

    sget-object v3, Lcom/kwad/components/ad/splashscreen/b;->mHandler:Landroid/os/Handler;

    new-instance v10, Lcom/kwad/components/ad/splashscreen/b$1;

    invoke-direct {v10, v4}, Lcom/kwad/components/ad/splashscreen/b$1;-><init>(Lcom/kwad/components/core/p/a/b;)V

    const-wide/16 v11, 0x3a98

    invoke-virtual {v3, v10, v11, v12}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    new-instance v10, Lcom/kwad/components/ad/splashscreen/b$2;

    invoke-direct {v10, v7, p1, v6}, Lcom/kwad/components/ad/splashscreen/b$2;-><init>(Lcom/kwad/components/ad/splashscreen/b$b;Lcom/kwad/sdk/api/KsLoadManager$SplashScreenAdListener;Lcom/kwad/sdk/internal/api/SceneImpl;)V

    sget-object v3, Lcom/kwad/components/ad/splashscreen/b/a;->Cv:Lcom/kwad/sdk/core/config/item/k;

    invoke-static {v3}, Lcom/kwad/sdk/core/config/d;->a(Lcom/kwad/sdk/core/config/item/k;)I

    move-result v3

    if-gez v3, :cond_0

    const/16 v3, 0x1388

    :cond_0
    sget-object v11, Lcom/kwad/components/ad/splashscreen/b;->mHandler:Landroid/os/Handler;

    int-to-long v12, v3

    invoke-virtual {v11, v10, v12, v13}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v11

    sub-long v0, v11, v0

    invoke-static {}, Lcom/kwad/components/ad/splashscreen/monitor/a;->kN()Lcom/kwad/components/ad/splashscreen/monitor/a;

    invoke-virtual {v6}, Lcom/kwad/sdk/internal/api/SceneImpl;->getPosId()J

    move-result-wide v11

    invoke-static {v11, v12, v0, v1}, Lcom/kwad/components/ad/splashscreen/monitor/a;->d(JJ)V

    invoke-static {}, Lcom/kwad/components/ad/KsAdLoadManager;->M()Lcom/kwad/components/ad/KsAdLoadManager;

    new-instance v3, Lcom/kwad/components/core/p/a/a$a;

    invoke-direct {v3}, Lcom/kwad/components/core/p/a/a$a;-><init>()V

    invoke-virtual {v3, v4}, Lcom/kwad/components/core/p/a/a$a;->e(Lcom/kwad/components/core/p/a/b;)Lcom/kwad/components/core/p/a/a$a;

    move-result-object v3

    invoke-virtual {v3, v2}, Lcom/kwad/components/core/p/a/a$a;->aE(Z)Lcom/kwad/components/core/p/a/a$a;

    move-result-object v2

    invoke-virtual {v2, p0}, Lcom/kwad/components/core/p/a/a$a;->aF(Z)Lcom/kwad/components/core/p/a/a$a;

    move-result-object p0

    new-instance v12, Lcom/kwad/components/ad/splashscreen/b$3;

    move-object v2, v12

    move-object v3, v7

    move-object v4, v10

    move-object v7, p1

    move-wide v10, v0

    invoke-direct/range {v2 .. v11}, Lcom/kwad/components/ad/splashscreen/b$3;-><init>(Lcom/kwad/components/ad/splashscreen/b$b;Ljava/lang/Runnable;Lcom/kwad/components/ad/splashscreen/b$a;Lcom/kwad/sdk/internal/api/SceneImpl;Lcom/kwad/sdk/api/KsLoadManager$SplashScreenAdListener;JJ)V

    invoke-virtual {p0, v12}, Lcom/kwad/components/core/p/a/a$a;->a(Lcom/kwad/components/core/p/b;)Lcom/kwad/components/core/p/a/a$a;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/core/p/a/a$a;->pI()Lcom/kwad/components/core/p/a/a;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/components/ad/KsAdLoadManager;->a(Lcom/kwad/components/core/p/a/a;)V

    return-void
.end method
