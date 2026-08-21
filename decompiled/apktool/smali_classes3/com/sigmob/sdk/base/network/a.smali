.class public Lcom/sigmob/sdk/base/network/a;
.super Lcom/czhj/sdk/common/network/SigmobRequest;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/sdk/common/network/SigmobRequest<",
        "Lcom/sigmob/sdk/base/models/rtb/BidResponse;",
        ">;"
    }
.end annotation


# instance fields
.field private final a:Lcom/sigmob/sdk/base/network/d$a;

.field private final b:Lcom/sigmob/sdk/base/models/LoadAdRequest;

.field private c:Lcom/czhj/sdk/common/models/Network$Builder;

.field private d:Lcom/czhj/sdk/common/models/AdSlot$Builder;

.field private e:Lcom/czhj/sdk/common/models/Device$Builder;

.field private f:Lcom/czhj/sdk/common/models/App$Builder;


# direct methods
.method public constructor <init>(Ljava/lang/String;Lcom/sigmob/sdk/base/models/LoadAdRequest;Lcom/sigmob/sdk/base/network/d$a;)V
    .locals 2

    const/4 v0, 0x1

    const/4 v1, 0x0

    invoke-direct {p0, p1, v0, v1}, Lcom/czhj/sdk/common/network/SigmobRequest;-><init>(Ljava/lang/String;ILcom/czhj/volley/Response$ErrorListener;)V

    invoke-static {p3}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;)Z

    iput-object p3, p0, Lcom/sigmob/sdk/base/network/a;->a:Lcom/sigmob/sdk/base/network/d$a;

    iput-object p2, p0, Lcom/sigmob/sdk/base/network/a;->b:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    new-instance p1, Lcom/czhj/volley/DefaultRetryPolicy;

    const/4 p2, 0x0

    const/16 p3, 0x2710

    const/4 v0, 0x0

    invoke-direct {p1, p3, p2, v0}, Lcom/czhj/volley/DefaultRetryPolicy;-><init>(IIF)V

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/base/network/a;->setRetryPolicy(Lcom/czhj/volley/RetryPolicy;)Lcom/czhj/volley/Request;

    invoke-virtual {p0, p2}, Lcom/sigmob/sdk/base/network/a;->setShouldCache(Z)Lcom/czhj/volley/Request;

    return-void
.end method

.method private a(ILjava/lang/String;Ljava/lang/String;ILjava/lang/String;)V
    .locals 1

    new-instance v0, Lcom/sigmob/sdk/base/network/a$1;

    invoke-direct {v0, p0, p3, p2, p1}, Lcom/sigmob/sdk/base/network/a$1;-><init>(Lcom/sigmob/sdk/base/network/a;Ljava/lang/String;Ljava/lang/String;I)V

    const-string p1, "server_error"

    const/4 p2, 0x0

    invoke-static {p1, p4, p5, p2, v0}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;ILjava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V

    return-void
.end method

.method public static b()Lcom/czhj/sdk/common/models/App$Builder;
    .locals 2

    invoke-static {}, Lcom/czhj/sdk/common/models/ModelBuilderCreator;->createApp()Lcom/czhj/sdk/common/models/App$Builder;

    move-result-object v0

    invoke-static {}, Lcom/sigmob/windad/WindAds;->sharedAds()Lcom/sigmob/windad/WindAds;

    move-result-object v1

    invoke-virtual {v1}, Lcom/sigmob/windad/WindAds;->getAppId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/App$Builder;->app_id(Ljava/lang/String;)Lcom/czhj/sdk/common/models/App$Builder;

    return-object v0
.end method

.method public static c()Lcom/czhj/sdk/common/models/User$Builder;
    .locals 2

    new-instance v0, Lcom/czhj/sdk/common/models/User$Builder;

    invoke-direct {v0}, Lcom/czhj/sdk/common/models/User$Builder;-><init>()V

    invoke-static {}, Lcom/sigmob/sdk/base/c;->a()Lcom/sigmob/sdk/base/c;

    move-result-object v1

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/c;->d()Z

    move-result v1

    xor-int/lit8 v1, v1, 0x1

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    iput-object v1, v0, Lcom/czhj/sdk/common/models/User$Builder;->is_minor:Ljava/lang/Boolean;

    invoke-static {}, Lcom/sigmob/sdk/base/c;->a()Lcom/sigmob/sdk/base/c;

    move-result-object v1

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/c;->e()Z

    move-result v1

    xor-int/lit8 v1, v1, 0x1

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    iput-object v1, v0, Lcom/czhj/sdk/common/models/User$Builder;->disable_personalized_recommendation:Ljava/lang/Boolean;

    invoke-static {}, Lcom/sigmob/sdk/base/c;->a()Lcom/sigmob/sdk/base/c;

    move-result-object v1

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/c;->f()Z

    move-result v1

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    iput-object v1, v0, Lcom/czhj/sdk/common/models/User$Builder;->change_recommendation_state:Ljava/lang/Boolean;

    return-object v0
.end method

.method public static d()Lcom/czhj/sdk/common/models/Privacy$Builder;
    .locals 2

    new-instance v0, Lcom/czhj/sdk/common/models/Privacy$Builder;

    invoke-direct {v0}, Lcom/czhj/sdk/common/models/Privacy$Builder;-><init>()V

    invoke-static {}, Lcom/sigmob/sdk/base/c;->a()Lcom/sigmob/sdk/base/c;

    move-result-object v1

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/c;->b()I

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/Privacy$Builder;->age(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/Privacy$Builder;

    invoke-static {}, Lcom/sigmob/sdk/base/c;->a()Lcom/sigmob/sdk/base/c;

    move-result-object v1

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/c;->c()I

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/Privacy$Builder;->child_protection(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/Privacy$Builder;

    :try_start_0
    invoke-static {}, Lcom/sigmob/sdk/base/c;->a()Lcom/sigmob/sdk/base/c;

    move-result-object v1

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/c;->g()I

    move-result v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    const/4 v1, 0x0

    :goto_0
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/Privacy$Builder;->gdpr_consent(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/Privacy$Builder;

    return-object v0
.end method

.method private e()V
    .locals 3

    invoke-static {}, Lcom/sigmob/sdk/base/network/a;->b()Lcom/czhj/sdk/common/models/App$Builder;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/base/network/a;->f:Lcom/czhj/sdk/common/models/App$Builder;

    invoke-static {}, Lcom/czhj/sdk/common/models/ModelBuilderCreator;->createDevice()Lcom/czhj/sdk/common/models/Device$Builder;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/base/network/a;->e:Lcom/czhj/sdk/common/models/Device$Builder;

    invoke-static {}, Lcom/czhj/sdk/common/models/ModelBuilderCreator;->createDeviceId()Lcom/czhj/sdk/common/models/DeviceId$Builder;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/base/network/a;->b:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getUserId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/DeviceId$Builder;->user_id(Ljava/lang/String;)Lcom/czhj/sdk/common/models/DeviceId$Builder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/network/a;->e:Lcom/czhj/sdk/common/models/Device$Builder;

    invoke-virtual {v0}, Lcom/czhj/sdk/common/models/DeviceId$Builder;->build()Lcom/czhj/sdk/common/models/DeviceId;

    move-result-object v0

    invoke-virtual {v1, v0}, Lcom/czhj/sdk/common/models/Device$Builder;->did(Lcom/czhj/sdk/common/models/DeviceId;)Lcom/czhj/sdk/common/models/Device$Builder;

    invoke-static {}, Lcom/czhj/sdk/common/models/ModelBuilderCreator;->createNetwork()Lcom/czhj/sdk/common/models/Network$Builder;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/base/network/a;->c:Lcom/czhj/sdk/common/models/Network$Builder;

    invoke-static {}, Lcom/czhj/sdk/common/models/ModelBuilderCreator;->createAdSlot()Lcom/czhj/sdk/common/models/AdSlot$Builder;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/base/network/a;->d:Lcom/czhj/sdk/common/models/AdSlot$Builder;

    iget-object v0, v0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->adslot_type:Ljava/util/List;

    iget-object v1, p0, Lcom/sigmob/sdk/base/network/a;->b:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getAdType()I

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    iget-object v0, p0, Lcom/sigmob/sdk/base/network/a;->b:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getAdType()I

    move-result v0

    const/4 v1, 0x1

    const/4 v2, 0x2

    if-ne v0, v2, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/base/network/a;->d:Lcom/czhj/sdk/common/models/AdSlot$Builder;

    iget-object v0, v0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->material_type:Ljava/util/List;

    sget-object v2, Lcom/sigmob/sdk/splash/a;->b:Lcom/sigmob/sdk/splash/a;

    invoke-virtual {v2}, Lcom/sigmob/sdk/splash/a;->a()I

    move-result v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    iget-object v0, p0, Lcom/sigmob/sdk/base/network/a;->d:Lcom/czhj/sdk/common/models/AdSlot$Builder;

    iget-object v0, v0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->material_type:Ljava/util/List;

    sget-object v2, Lcom/sigmob/sdk/splash/a;->c:Lcom/sigmob/sdk/splash/a;

    invoke-virtual {v2}, Lcom/sigmob/sdk/splash/a;->a()I

    move-result v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    iget-object v0, p0, Lcom/sigmob/sdk/base/network/a;->d:Lcom/czhj/sdk/common/models/AdSlot$Builder;

    iget-object v0, v0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->material_type:Ljava/util/List;

    sget-object v2, Lcom/sigmob/sdk/splash/a;->d:Lcom/sigmob/sdk/splash/a;

    invoke-virtual {v2}, Lcom/sigmob/sdk/splash/a;->a()I

    move-result v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    iget-object v0, p0, Lcom/sigmob/sdk/base/network/a;->d:Lcom/czhj/sdk/common/models/AdSlot$Builder;

    iget-object v0, v0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->creative_type:Ljava/util/List;

    sget-object v2, Lcom/sigmob/sdk/base/common/l;->b:Lcom/sigmob/sdk/base/common/l;

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/common/l;->a()I

    move-result v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    iget-object v0, p0, Lcom/sigmob/sdk/base/network/a;->d:Lcom/czhj/sdk/common/models/AdSlot$Builder;

    iget-object v0, v0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->creative_type:Ljava/util/List;

    sget-object v2, Lcom/sigmob/sdk/base/common/l;->g:Lcom/sigmob/sdk/base/common/l;

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/common/l;->a()I

    move-result v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto/16 :goto_0

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/base/network/a;->b:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getAdType()I

    move-result v0

    if-eq v0, v1, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/base/network/a;->b:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getAdType()I

    move-result v0

    const/4 v2, 0x4

    if-ne v0, v2, :cond_2

    :cond_1
    iget-object v0, p0, Lcom/sigmob/sdk/base/network/a;->d:Lcom/czhj/sdk/common/models/AdSlot$Builder;

    iget-object v0, v0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->creative_type:Ljava/util/List;

    sget-object v2, Lcom/sigmob/sdk/base/common/l;->a:Lcom/sigmob/sdk/base/common/l;

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/common/l;->a()I

    move-result v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    iget-object v0, p0, Lcom/sigmob/sdk/base/network/a;->d:Lcom/czhj/sdk/common/models/AdSlot$Builder;

    iget-object v0, v0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->creative_type:Ljava/util/List;

    sget-object v2, Lcom/sigmob/sdk/base/common/l;->c:Lcom/sigmob/sdk/base/common/l;

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/common/l;->a()I

    move-result v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    iget-object v0, p0, Lcom/sigmob/sdk/base/network/a;->d:Lcom/czhj/sdk/common/models/AdSlot$Builder;

    iget-object v0, v0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->creative_type:Ljava/util/List;

    sget-object v2, Lcom/sigmob/sdk/base/common/l;->e:Lcom/sigmob/sdk/base/common/l;

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/common/l;->a()I

    move-result v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    iget-object v0, p0, Lcom/sigmob/sdk/base/network/a;->d:Lcom/czhj/sdk/common/models/AdSlot$Builder;

    iget-object v0, v0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->creative_type:Ljava/util/List;

    sget-object v2, Lcom/sigmob/sdk/base/common/l;->f:Lcom/sigmob/sdk/base/common/l;

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/common/l;->a()I

    move-result v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    iget-object v0, p0, Lcom/sigmob/sdk/base/network/a;->d:Lcom/czhj/sdk/common/models/AdSlot$Builder;

    iget-object v0, v0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->creative_type:Ljava/util/List;

    sget-object v2, Lcom/sigmob/sdk/base/common/l;->h:Lcom/sigmob/sdk/base/common/l;

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/common/l;->a()I

    move-result v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_2
    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->e()Lcom/sigmob/sdk/base/common/f;

    move-result-object v0

    iget-object v2, p0, Lcom/sigmob/sdk/base/network/a;->b:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getAdType()I

    move-result v2

    invoke-virtual {v0, v2}, Lcom/sigmob/sdk/base/common/f;->a(I)Ljava/util/Map;

    move-result-object v0

    if-eqz v0, :cond_3

    iget-object v2, p0, Lcom/sigmob/sdk/base/network/a;->d:Lcom/czhj/sdk/common/models/AdSlot$Builder;

    invoke-virtual {v2, v0}, Lcom/czhj/sdk/common/models/AdSlot$Builder;->ad_caches(Ljava/util/Map;)Lcom/czhj/sdk/common/models/AdSlot$Builder;

    :cond_3
    :goto_0
    iget-object v0, p0, Lcom/sigmob/sdk/base/network/a;->d:Lcom/czhj/sdk/common/models/AdSlot$Builder;

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/AdSlot$Builder;->sdk_strategy_index(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/AdSlot$Builder;

    iget-object v0, p0, Lcom/sigmob/sdk/base/network/a;->b:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getPlacementId()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_4

    iget-object v0, p0, Lcom/sigmob/sdk/base/network/a;->d:Lcom/czhj/sdk/common/models/AdSlot$Builder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/network/a;->b:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getPlacementId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/AdSlot$Builder;->adslot_id(Ljava/lang/String;)Lcom/czhj/sdk/common/models/AdSlot$Builder;

    :cond_4
    iget-object v0, p0, Lcom/sigmob/sdk/base/network/a;->d:Lcom/czhj/sdk/common/models/AdSlot$Builder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/network/a;->b:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getLastCrid()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/AdSlot$Builder;->latest_crid(Ljava/lang/String;)Lcom/czhj/sdk/common/models/AdSlot$Builder;

    iget-object v0, p0, Lcom/sigmob/sdk/base/network/a;->d:Lcom/czhj/sdk/common/models/AdSlot$Builder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/network/a;->b:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getLastCampid()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/AdSlot$Builder;->latest_camp_id(Ljava/lang/String;)Lcom/czhj/sdk/common/models/AdSlot$Builder;

    iget-object v0, p0, Lcom/sigmob/sdk/base/network/a;->d:Lcom/czhj/sdk/common/models/AdSlot$Builder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/network/a;->b:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getAdCount()I

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/AdSlot$Builder;->ad_count(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/AdSlot$Builder;

    iget-object v0, p0, Lcom/sigmob/sdk/base/network/a;->d:Lcom/czhj/sdk/common/models/AdSlot$Builder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/network/a;->b:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getBidFloor()I

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/AdSlot$Builder;->bidfloor(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/AdSlot$Builder;

    return-void
.end method

.method private f()Lcom/czhj/sdk/common/models/BidRequest$Builder;
    .locals 4

    const-string v0, "4.9.0"

    new-instance v1, Lcom/czhj/sdk/common/models/BidRequest$Builder;

    invoke-direct {v1}, Lcom/czhj/sdk/common/models/BidRequest$Builder;-><init>()V

    :try_start_0
    invoke-static {}, Lcom/czhj/sdk/common/models/ModelBuilderCreator;->createDevice()Lcom/czhj/sdk/common/models/Device$Builder;

    move-result-object v2

    invoke-virtual {v2}, Lcom/czhj/sdk/common/models/Device$Builder;->build()Lcom/czhj/sdk/common/models/Device;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/czhj/sdk/common/models/BidRequest$Builder;->device(Lcom/czhj/sdk/common/models/Device;)Lcom/czhj/sdk/common/models/BidRequest$Builder;

    invoke-static {}, Lcom/sigmob/sdk/base/network/a;->c()Lcom/czhj/sdk/common/models/User$Builder;

    move-result-object v2

    invoke-virtual {v2}, Lcom/czhj/sdk/common/models/User$Builder;->build()Lcom/czhj/sdk/common/models/User;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/czhj/sdk/common/models/BidRequest$Builder;->user(Lcom/czhj/sdk/common/models/User;)Lcom/czhj/sdk/common/models/BidRequest$Builder;

    invoke-static {}, Lcom/sigmob/sdk/base/network/a;->d()Lcom/czhj/sdk/common/models/Privacy$Builder;

    move-result-object v2

    invoke-virtual {v2}, Lcom/czhj/sdk/common/models/Privacy$Builder;->build()Lcom/czhj/sdk/common/models/Privacy;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/czhj/sdk/common/models/BidRequest$Builder;->privacy(Lcom/czhj/sdk/common/models/Privacy;)Lcom/czhj/sdk/common/models/BidRequest$Builder;

    iget-object v2, p0, Lcom/sigmob/sdk/base/network/a;->f:Lcom/czhj/sdk/common/models/App$Builder;

    invoke-virtual {v2}, Lcom/czhj/sdk/common/models/App$Builder;->build()Lcom/czhj/sdk/common/models/App;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/czhj/sdk/common/models/BidRequest$Builder;->app(Lcom/czhj/sdk/common/models/App;)Lcom/czhj/sdk/common/models/BidRequest$Builder;

    iget-object v2, v1, Lcom/czhj/sdk/common/models/BidRequest$Builder;->slots:Ljava/util/List;

    iget-object v3, p0, Lcom/sigmob/sdk/base/network/a;->d:Lcom/czhj/sdk/common/models/AdSlot$Builder;

    invoke-virtual {v3}, Lcom/czhj/sdk/common/models/AdSlot$Builder;->build()Lcom/czhj/sdk/common/models/AdSlot;

    move-result-object v3

    invoke-interface {v2, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    iget-object v2, p0, Lcom/sigmob/sdk/base/network/a;->e:Lcom/czhj/sdk/common/models/Device$Builder;

    invoke-virtual {v2}, Lcom/czhj/sdk/common/models/Device$Builder;->build()Lcom/czhj/sdk/common/models/Device;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/czhj/sdk/common/models/BidRequest$Builder;->device(Lcom/czhj/sdk/common/models/Device;)Lcom/czhj/sdk/common/models/BidRequest$Builder;

    iget-object v2, p0, Lcom/sigmob/sdk/base/network/a;->c:Lcom/czhj/sdk/common/models/Network$Builder;

    invoke-virtual {v2}, Lcom/czhj/sdk/common/models/Network$Builder;->build()Lcom/czhj/sdk/common/models/Network;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/czhj/sdk/common/models/BidRequest$Builder;->network(Lcom/czhj/sdk/common/models/Network;)Lcom/czhj/sdk/common/models/BidRequest$Builder;

    iget-object v2, p0, Lcom/sigmob/sdk/base/network/a;->b:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getOptions()Ljava/util/Map;

    move-result-object v2

    if-eqz v2, :cond_0

    iget-object v2, p0, Lcom/sigmob/sdk/base/network/a;->b:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getOptions()Ljava/util/Map;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/czhj/sdk/common/models/BidRequest$Builder;->options(Ljava/util/Map;)Lcom/czhj/sdk/common/models/BidRequest$Builder;

    :cond_0
    iget-object v2, p0, Lcom/sigmob/sdk/base/network/a;->b:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->isExpired()Z

    move-result v2

    invoke-static {v2}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v2

    iput-object v2, v1, Lcom/czhj/sdk/common/models/BidRequest$Builder;->ad_is_expired:Ljava/lang/Boolean;

    iget-object v2, p0, Lcom/sigmob/sdk/base/network/a;->b:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getRequest_scene_type()I

    move-result v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    iput-object v2, v1, Lcom/czhj/sdk/common/models/BidRequest$Builder;->request_scene_type:Ljava/lang/Integer;

    new-instance v2, Lcom/czhj/sdk/common/models/HeaderBidding$Builder;

    invoke-direct {v2}, Lcom/czhj/sdk/common/models/HeaderBidding$Builder;-><init>()V

    iget-object v3, p0, Lcom/sigmob/sdk/base/network/a;->b:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v3}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getBidToken()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_1

    iget-object v3, p0, Lcom/sigmob/sdk/base/network/a;->b:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v3}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getBidToken()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/czhj/sdk/common/models/HeaderBidding$Builder;->bid_token(Ljava/lang/String;)Lcom/czhj/sdk/common/models/HeaderBidding$Builder;

    :cond_1
    iget-object v3, p0, Lcom/sigmob/sdk/base/network/a;->b:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v3}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getCurrency()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_2

    iget-object v3, p0, Lcom/sigmob/sdk/base/network/a;->b:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v3}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getCurrency()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/czhj/sdk/common/models/HeaderBidding$Builder;->cur(Ljava/lang/String;)Lcom/czhj/sdk/common/models/HeaderBidding$Builder;

    :cond_2
    invoke-virtual {v2}, Lcom/czhj/sdk/common/models/HeaderBidding$Builder;->build()Lcom/czhj/sdk/common/models/HeaderBidding;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/czhj/sdk/common/models/BidRequest$Builder;->header_bidding(Lcom/czhj/sdk/common/models/HeaderBidding;)Lcom/czhj/sdk/common/models/BidRequest$Builder;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_3

    invoke-static {v0}, Lcom/czhj/sdk/common/models/ModelBuilderCreator;->createVersion(Ljava/lang/String;)Lcom/czhj/sdk/common/models/Version$Builder;

    move-result-object v2

    invoke-virtual {v2, v0}, Lcom/czhj/sdk/common/models/Version$Builder;->version_str(Ljava/lang/String;)Lcom/czhj/sdk/common/models/Version$Builder;

    invoke-virtual {v2}, Lcom/czhj/sdk/common/models/Version$Builder;->build()Lcom/czhj/sdk/common/models/Version;

    move-result-object v0

    invoke-virtual {v1, v0}, Lcom/czhj/sdk/common/models/BidRequest$Builder;->sdk_version(Lcom/czhj/sdk/common/models/Version;)Lcom/czhj/sdk/common/models/BidRequest$Builder;

    :cond_3
    const/4 v0, 0x1

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    iput-object v0, v1, Lcom/czhj/sdk/common/models/BidRequest$Builder;->disable_mediation:Ljava/lang/Boolean;

    invoke-static {}, Lcom/czhj/sdk/common/models/ModelBuilderCreator;->createWXProgramReq()Lcom/czhj/sdk/common/models/WXProgramReq$Builder;

    move-result-object v0

    invoke-virtual {v0}, Lcom/czhj/sdk/common/models/WXProgramReq$Builder;->build()Lcom/czhj/sdk/common/models/WXProgramReq;

    move-result-object v0

    invoke-virtual {v1, v0}, Lcom/czhj/sdk/common/models/BidRequest$Builder;->wx_program_req(Lcom/czhj/sdk/common/models/WXProgramReq;)Lcom/czhj/sdk/common/models/BidRequest$Builder;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :goto_0
    return-object v1
.end method


# virtual methods
.method public a()Lcom/sigmob/sdk/base/network/d$a;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/network/a;->a:Lcom/sigmob/sdk/base/network/d$a;

    return-object v0
.end method

.method protected a(Lcom/sigmob/sdk/base/models/rtb/BidResponse;)V
    .locals 11

    if-eqz p1, :cond_3

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "ads Response: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, " ["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, "]"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    iget-object v0, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->uid:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    const-string v1, "KGpfzbYsn4T9Jyuq"

    invoke-static {v0, v1}, Lcom/czhj/sdk/common/utils/AESUtil;->DecryptString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/czhj/sdk/common/ClientMetadata;->setUid(Ljava/lang/String;)V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/base/network/a;->b:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    iget-object v1, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->request_id:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->setRequestId(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/LoadAdRequest;

    iget-object v0, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->ads:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_2

    :try_start_0
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    const/4 v1, 0x0

    :goto_0
    iget-object v2, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->ads:Ljava/util/List;

    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v2

    if-ge v1, v2, :cond_1

    iget-object v2, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->ads:Ljava/util/List;

    invoke-interface {v2, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    move-object v3, v2

    check-cast v3, Lcom/sigmob/sdk/base/models/rtb/Ad;

    iget-object v4, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->request_id:Ljava/lang/String;

    iget-object v5, p0, Lcom/sigmob/sdk/base/network/a;->b:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    iget-object v6, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->slot_ad_setting:Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;

    iget-object v7, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->scene:Lcom/sigmob/sdk/base/models/rtb/Template;

    iget-object v8, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->uid:Ljava/lang/String;

    iget-object v9, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->expiration_time:Ljava/lang/Integer;

    iget-object v10, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->bidding_response:Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;

    invoke-static/range {v3 .. v10}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->adUnit(Lcom/sigmob/sdk/base/models/rtb/Ad;Ljava/lang/String;Lcom/sigmob/sdk/base/models/LoadAdRequest;Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;Lcom/sigmob/sdk/base/models/rtb/Template;Ljava/lang/String;Ljava/lang/Integer;Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v2

    iget-object v3, p0, Lcom/sigmob/sdk/base/network/a;->b:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v3}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getAdType()I

    move-result v3

    invoke-virtual {v2, v3}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->setAd_type(I)V

    iget-object v3, p0, Lcom/sigmob/sdk/base/network/a;->b:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v3}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->isHalfInterstitial()Z

    move-result v3

    invoke-virtual {v2, v3}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->setHalfInterstitial(Z)V

    invoke-virtual {v0, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_1
    iget-object p1, p0, Lcom/sigmob/sdk/base/network/a;->a:Lcom/sigmob/sdk/base/network/d$a;

    iget-object v1, p0, Lcom/sigmob/sdk/base/network/a;->b:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-interface {p1, v0, v1}, Lcom/sigmob/sdk/base/network/d$a;->a(Ljava/util/List;Lcom/sigmob/sdk/base/models/LoadAdRequest;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    const-string v0, "ads Response: error "

    invoke-static {v0, p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    goto :goto_1

    :cond_2
    iget-object v0, p0, Lcom/sigmob/sdk/base/network/a;->b:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getAdType()I

    move-result v2

    iget-object v0, p0, Lcom/sigmob/sdk/base/network/a;->b:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getPlacementId()Ljava/lang/String;

    move-result-object v3

    iget-object v4, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->request_id:Ljava/lang/String;

    iget-object v0, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->error_code:Ljava/lang/Long;

    invoke-virtual {v0}, Ljava/lang/Long;->intValue()I

    move-result v5

    iget-object v6, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->error_message:Ljava/lang/String;

    move-object v1, p0

    invoke-direct/range {v1 .. v6}, Lcom/sigmob/sdk/base/network/a;->a(ILjava/lang/String;Ljava/lang/String;ILjava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/network/a;->a:Lcom/sigmob/sdk/base/network/d$a;

    iget-object v1, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->error_code:Ljava/lang/Long;

    invoke-virtual {v1}, Ljava/lang/Long;->intValue()I

    move-result v1

    iget-object v2, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->error_message:Ljava/lang/String;

    iget-object p1, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->request_id:Ljava/lang/String;

    iget-object v3, p0, Lcom/sigmob/sdk/base/network/a;->b:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-interface {v0, v1, v2, p1, v3}, Lcom/sigmob/sdk/base/network/d$a;->a(ILjava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/LoadAdRequest;)V

    return-void

    :cond_3
    :goto_1
    iget-object p1, p0, Lcom/sigmob/sdk/base/network/a;->a:Lcom/sigmob/sdk/base/network/d$a;

    sget-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_INFORMATION_LOSE:Lcom/sigmob/windad/WindAdError;

    invoke-virtual {v0}, Lcom/sigmob/windad/WindAdError;->getErrorCode()I

    move-result v0

    const/4 v1, 0x0

    iget-object v2, p0, Lcom/sigmob/sdk/base/network/a;->b:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    const-string v3, "bidResponse is null"

    invoke-interface {p1, v0, v3, v1, v2}, Lcom/sigmob/sdk/base/network/d$a;->a(ILjava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/LoadAdRequest;)V

    return-void
.end method

.method public deliverError(Lcom/czhj/volley/VolleyError;)V
    .locals 4

    instance-of v0, p1, Lcom/czhj/volley/ParseError;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/base/network/a;->a:Lcom/sigmob/sdk/base/network/d$a;

    sget-object v2, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_INFORMATION_LOSE:Lcom/sigmob/windad/WindAdError;

    goto :goto_0

    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/sigmob/sdk/base/network/a;->b:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getPlacementId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " ERROR_SIGMOB_NETWORK "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/czhj/volley/VolleyError;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/network/a;->a:Lcom/sigmob/sdk/base/network/d$a;

    sget-object v2, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_NETWORK:Lcom/sigmob/windad/WindAdError;

    :goto_0
    invoke-virtual {v2}, Lcom/sigmob/windad/WindAdError;->getErrorCode()I

    move-result v2

    invoke-virtual {p1}, Lcom/czhj/volley/VolleyError;->getMessage()Ljava/lang/String;

    move-result-object p1

    iget-object v3, p0, Lcom/sigmob/sdk/base/network/a;->b:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-interface {v0, v2, p1, v1, v3}, Lcom/sigmob/sdk/base/network/d$a;->a(ILjava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/LoadAdRequest;)V

    return-void
.end method

.method protected synthetic deliverResponse(Ljava/lang/Object;)V
    .locals 0

    check-cast p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse;

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/base/network/a;->a(Lcom/sigmob/sdk/base/models/rtb/BidResponse;)V

    return-void
.end method

.method public getBody()[B
    .locals 3

    const/4 v0, 0x0

    :try_start_0
    iget-object v1, p0, Lcom/sigmob/sdk/base/network/a;->b:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    if-eqz v1, :cond_0

    invoke-direct {p0}, Lcom/sigmob/sdk/base/network/a;->e()V

    invoke-direct {p0}, Lcom/sigmob/sdk/base/network/a;->f()Lcom/czhj/sdk/common/models/BidRequest$Builder;

    move-result-object v1

    invoke-virtual {v1}, Lcom/czhj/sdk/common/models/BidRequest$Builder;->build()Lcom/czhj/sdk/common/models/BidRequest;

    move-result-object v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :cond_0
    move-object v1, v0

    :goto_0
    if-nez v1, :cond_1

    const-string v1, "builder Ads Post entry fail "

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    return-object v0

    :cond_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/network/a;->getUrl()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " send Bid request: "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Lcom/czhj/sdk/common/models/BidRequest;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    :try_start_1
    invoke-virtual {v1}, Lcom/czhj/sdk/common/models/BidRequest;->encode()[B

    move-result-object v0

    const-string v2, "KGpfzbYsn4T9Jyuq"

    invoke-static {v0, v2}, Lcom/czhj/sdk/common/utils/AESUtil;->Encrypt([BLjava/lang/String;)[B

    move-result-object v0
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    return-object v0

    :catch_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    invoke-virtual {v1}, Lcom/czhj/sdk/common/models/BidRequest;->encode()[B

    move-result-object v0

    return-object v0
.end method

.method public getBodyContentType()Ljava/lang/String;
    .locals 1

    const-string v0, "application/octet-stream"

    return-object v0
.end method

.method public getHeaders()Ljava/util/Map;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    invoke-super {p0}, Lcom/czhj/sdk/common/network/SigmobRequest;->getHeaders()Ljava/util/Map;

    move-result-object v0

    const-string v1, "e"

    const-string v2, "1"

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-object v0
.end method

.method protected parseNetworkResponse(Lcom/czhj/volley/NetworkResponse;)Lcom/czhj/volley/Response;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/volley/NetworkResponse;",
            ")",
            "Lcom/czhj/volley/Response<",
            "Lcom/sigmob/sdk/base/models/rtb/BidResponse;",
            ">;"
        }
    .end annotation

    :try_start_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "ads Response start"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p1, Lcom/czhj/volley/NetworkResponse;->data:[B

    invoke-virtual {v0, v1}, Lcom/czhj/wire/ProtoAdapter;->decode([B)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;

    if-eqz v0, :cond_0

    invoke-static {p1}, Lcom/czhj/volley/toolbox/HttpHeaderParser;->parseCacheHeaders(Lcom/czhj/volley/NetworkResponse;)Lcom/czhj/volley/Cache$Entry;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/czhj/volley/Response;->success(Ljava/lang/Object;Lcom/czhj/volley/Cache$Entry;)Lcom/czhj/volley/Response;

    move-result-object p1

    return-object p1

    :cond_0
    new-instance v0, Lcom/czhj/volley/ParseError;

    invoke-direct {v0, p1}, Lcom/czhj/volley/ParseError;-><init>(Lcom/czhj/volley/NetworkResponse;)V

    invoke-static {v0}, Lcom/czhj/volley/Response;->error(Lcom/czhj/volley/VolleyError;)Lcom/czhj/volley/Response;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p1

    :catchall_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    new-instance v0, Lcom/czhj/volley/ParseError;

    invoke-direct {v0, p1}, Lcom/czhj/volley/ParseError;-><init>(Ljava/lang/Throwable;)V

    invoke-static {v0}, Lcom/czhj/volley/Response;->error(Lcom/czhj/volley/VolleyError;)Lcom/czhj/volley/Response;

    move-result-object p1

    return-object p1
.end method
