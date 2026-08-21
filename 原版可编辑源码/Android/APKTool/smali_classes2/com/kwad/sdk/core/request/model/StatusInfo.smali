.class public Lcom/kwad/sdk/core/request/model/StatusInfo;
.super Lcom/kwad/sdk/core/response/a/a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/core/request/model/StatusInfo$SplashStyleControl;,
        Lcom/kwad/sdk/core/request/model/StatusInfo$NativeAdStyleControl;,
        Lcom/kwad/sdk/core/request/model/StatusInfo$NativeAdRequestInfo;,
        Lcom/kwad/sdk/core/request/model/StatusInfo$SplashAdInfo;
    }
.end annotation


# instance fields
.field public aur:I

.field public aus:I

.field public aut:Lcom/kwad/sdk/core/request/model/StatusInfo$SplashAdInfo;

.field public auu:Lcom/kwad/sdk/core/request/model/StatusInfo$NativeAdRequestInfo;

.field public auv:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/sdk/core/request/model/f;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method private constructor <init>(Lcom/kwad/sdk/internal/api/SceneImpl;)V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/a/a;-><init>()V

    const-class v0, Lcom/kwad/sdk/service/a/e;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/e;

    invoke-interface {v0}, Lcom/kwad/sdk/service/a/e;->isPersonalRecommend()Z

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/request/model/StatusInfo;->aur:I

    const-class v0, Lcom/kwad/sdk/service/a/e;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/e;

    invoke-interface {v0}, Lcom/kwad/sdk/service/a/e;->isProgrammaticRecommend()Z

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/request/model/StatusInfo;->aus:I

    invoke-static {}, Lcom/kwad/sdk/core/d/a;->AY()Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/request/model/StatusInfo;->auv:Ljava/util/List;

    invoke-static {p1}, Lcom/kwad/sdk/core/request/model/StatusInfo$NativeAdRequestInfo;->create(Lcom/kwad/sdk/internal/api/SceneImpl;)Lcom/kwad/sdk/core/request/model/StatusInfo$NativeAdRequestInfo;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/request/model/StatusInfo;->auu:Lcom/kwad/sdk/core/request/model/StatusInfo$NativeAdRequestInfo;

    invoke-static {p1}, Lcom/kwad/sdk/core/request/model/StatusInfo$SplashAdInfo;->create(Lcom/kwad/sdk/internal/api/SceneImpl;)Lcom/kwad/sdk/core/request/model/StatusInfo$SplashAdInfo;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/sdk/core/request/model/StatusInfo;->aut:Lcom/kwad/sdk/core/request/model/StatusInfo$SplashAdInfo;

    return-void
.end method

.method public static b(Lcom/kwad/sdk/internal/api/SceneImpl;)Lcom/kwad/sdk/core/request/model/StatusInfo;
    .locals 1

    new-instance v0, Lcom/kwad/sdk/core/request/model/StatusInfo;

    invoke-direct {v0, p0}, Lcom/kwad/sdk/core/request/model/StatusInfo;-><init>(Lcom/kwad/sdk/internal/api/SceneImpl;)V

    return-object v0
.end method
