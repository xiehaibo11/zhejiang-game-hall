.class public final Lcom/kwad/sdk/core/b/a/ex;
.super Ljava/lang/Object;


# static fields
.field public static aou:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/Class<",
            "+",
            "Lcom/kwad/sdk/core/response/a/a;",
            ">;",
            "Lcom/kwad/sdk/core/d;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 3

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdInfo$AdAggregateInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/h;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/h;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardWebTaskCloseInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/he;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/he;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdInfo$SmallAppJumpInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/hs;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/hs;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$CycleAggregateInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/cf;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/cf;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/PhotoInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/gj;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/gj;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdInfo$AdvertiserInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/am;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/am;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdStyleInfo$AdBrowseInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/k;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/k;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/commercial/model/WebViewLoadMsg;

    new-instance v2, Lcom/kwad/sdk/core/b/a/jm;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/jm;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AggregationCardInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/an;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/an;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdProductInfo$SpikeInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/ht;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/ht;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/request/model/b;

    new-instance v2, Lcom/kwad/sdk/core/b/a/cl;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/cl;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/request/model/StatusInfo$SplashAdInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/hv;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/hv;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/request/model/StatusInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/ij;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/ij;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchEcInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/gi;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/gi;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/commercial/model/HybridLoadMsg;

    new-instance v2, Lcom/kwad/sdk/core/b/a/ed;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/ed;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/internal/api/b;

    new-instance v2, Lcom/kwad/sdk/core/b/a/hx;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/hx;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayEndInfo$EndTopToolBarInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/cu;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/cu;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdInfo$H5Config;

    new-instance v2, Lcom/kwad/sdk/core/b/a/dw;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/dw;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$InterstitialCardInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/ep;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/ep;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTemplate;

    new-instance v2, Lcom/kwad/sdk/core/b/a/fk;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/fk;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/FeedSlideConf;

    new-instance v2, Lcom/kwad/sdk/core/b/a/de;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/de;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/TemplateConfig;

    new-instance v2, Lcom/kwad/sdk/core/b/a/ir;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/ir;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdInfo$AdFeedInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/o;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/o;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;

    new-instance v2, Lcom/kwad/sdk/core/b/a/jg;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/jg;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdInfo$AdPreloadInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/aa;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/aa;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayEndInfo$AdWebCardInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/al;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/al;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/internal/api/a;

    new-instance v2, Lcom/kwad/sdk/core/b/a/u;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/u;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdInfo$ComplianceInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/br;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/br;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdInfo$AdTrackInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/aj;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/aj;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/HttpDnsInfo$IpInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/es;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/es;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdStyleInfo$FeedAdInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/db;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/db;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/network/k;

    new-instance v2, Lcom/kwad/sdk/core/b/a/fw;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/fw;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RotateInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/hh;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/hh;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTag;

    new-instance v2, Lcom/kwad/sdk/core/b/a/fj;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/fj;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/hy;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/hy;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/h/a/b;

    new-instance v2, Lcom/kwad/sdk/core/b/a/gc;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/gc;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/y;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/y;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/utils/b/a;

    new-instance v2, Lcom/kwad/sdk/core/b/a/fa;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/fa;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$BaseMatrixTemplate;

    new-instance v2, Lcom/kwad/sdk/core/b/a/bb;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/bb;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$DetailCommonInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/ci;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/ci;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/m/k$a;

    new-instance v2, Lcom/kwad/sdk/core/b/a/jo;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/jo;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdInfo$PlayableStyleInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/gq;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/gq;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdStyleInfo$ExposeTagInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/cx;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/cx;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/t;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/t;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;

    new-instance v2, Lcom/kwad/sdk/core/b/a/fh;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/fh;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/TKAdLiveShopItemInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/in;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/in;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/i;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/i;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdInfo$AdInsertScreenInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/s;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/s;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/internal/api/NativeAdExtraDataImpl;

    new-instance v2, Lcom/kwad/sdk/core/b/a/fo;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/fo;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/gh;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/gh;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/network/j;

    new-instance v2, Lcom/kwad/sdk/core/b/a/fv;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/fv;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MerchantLiveReservationInfo$LiveReservationPlayEndInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/fc;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/fc;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/commercial/model/SDKInitMsg;

    new-instance v2, Lcom/kwad/sdk/core/b/a/hi;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/hi;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/z;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/z;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$ActivityMiddlePageInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/g;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/g;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdInfo$CallBackStrategyInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/bh;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/bh;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/m/k$a$a;

    new-instance v2, Lcom/kwad/sdk/core/b/a/ig;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/ig;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdStyleInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/ah;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/ah;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/HttpDnsInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/ec;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/ec;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdInfo$AdShowVideoH5Info;

    new-instance v2, Lcom/kwad/sdk/core/b/a/ad;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/ad;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashSlideInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/id;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/id;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$EndCardInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/ct;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/ct;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$DetailWebCardInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/ck;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/ck;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$PreLandingPageTKInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/gs;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/gs;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdInfo$FullScreenVideoInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/dn;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/dn;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdInfo$NativeAdInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/fp;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/fp;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdInfo$CutRuleInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/ce;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/ce;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashEndCardTKInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/hw;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/hw;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/gk;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/gk;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$DrawAdInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/cr;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/cr;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdInfo$MaterialSize;

    new-instance v2, Lcom/kwad/sdk/core/b/a/fi;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/fi;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$StyleInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/il;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/il;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;

    new-instance v2, Lcom/kwad/sdk/core/b/a/jl;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/jl;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/request/model/StatusInfo$NativeAdStyleControl;

    new-instance v2, Lcom/kwad/sdk/core/b/a/fs;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/fs;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    new-instance v2, Lcom/kwad/sdk/core/b/a/n;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/n;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/ac;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/ac;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayEndInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/gm;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/gm;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$ShakeInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/hm;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/hm;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/scene/URLPackage;

    new-instance v2, Lcom/kwad/sdk/core/b/a/iy;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/iy;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/request/model/StatusInfo$NativeAdRequestInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/fq;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/fq;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$FullScreenInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/dm;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/dm;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/PageInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/ge;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/ge;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/internal/api/SceneImpl;

    new-instance v2, Lcom/kwad/sdk/core/b/a/hl;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/hl;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdInfo$UnDownloadConf;

    new-instance v2, Lcom/kwad/sdk/core/b/a/iz;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/iz;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo$DeeplinkItemInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/ch;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/ch;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/l;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/l;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/CouponInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/cb;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/cb;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdProductInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/ab;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/ab;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/threads/d;

    new-instance v2, Lcom/kwad/sdk/core/b/a/iv;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/iv;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$FeedInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/dc;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/dc;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdTemplate;

    new-instance v2, Lcom/kwad/sdk/core/b/a/ai;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/ai;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/ag;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/ag;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/hc;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/hc;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdInfo$NativeAdShakeInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/fr;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/fr;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$DownloadTexts;

    new-instance v2, Lcom/kwad/sdk/core/b/a/cq;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/cq;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/ABParams;

    new-instance v2, Lcom/kwad/sdk/core/b/a/a;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/a;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/report/m;

    new-instance v2, Lcom/kwad/sdk/core/b/a/cv;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/cv;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$InstalledActivateInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/em;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/em;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MerchantLiveReservationInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/fl;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/fl;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$WidgetAdInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/jn;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/jn;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/ae;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/ae;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$ActionBarInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/c;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/c;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$DetailTopToolBarInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/cj;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/cj;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/imageloader/ImageLoaderInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/eg;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/eg;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/r;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/r;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$TemplateData;

    new-instance v2, Lcom/kwad/sdk/core/b/a/it;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/it;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdStatusInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/af;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/af;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/h/a/a;

    new-instance v2, Lcom/kwad/sdk/core/b/a/gb;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/gb;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/request/model/StatusInfo$SplashStyleControl;

    new-instance v2, Lcom/kwad/sdk/core/b/a/ie;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/ie;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashActionBarInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/hu;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/hu;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdStyleInfo$ExtraDisplayInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/cz;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/cz;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/PhotoInfo$BaseInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/ba;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/ba;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$BottomBannerInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/bf;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/bf;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/co;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/co;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$Styles;

    new-instance v2, Lcom/kwad/sdk/core/b/a/im;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/im;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/commercial/model/WebCloseStatus;

    new-instance v2, Lcom/kwad/sdk/core/b/a/jk;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/jk;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/request/model/f;

    new-instance v2, Lcom/kwad/sdk/core/b/a/ip;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/ip;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RotateDegreeInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/hg;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/hg;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdInfo$UnDownloadRegionConf;

    new-instance v2, Lcom/kwad/sdk/core/b/a/ja;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/ja;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$ActionBarInfoNew;

    new-instance v2, Lcom/kwad/sdk/core/b/a/d;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/d;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoTaskInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/hd;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/hd;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$NeoVideoInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/fu;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/fu;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/response/model/PhotoInfo$VideoInfo;

    new-instance v2, Lcom/kwad/sdk/core/b/a/je;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/je;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    const-class v1, Lcom/kwad/sdk/core/threads/b;

    new-instance v2, Lcom/kwad/sdk/core/b/a/iu;

    invoke-direct {v2}, Lcom/kwad/sdk/core/b/a/iu;-><init>()V

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {}, Lcom/kwad/sdk/core/b/a/ex;->AQ()V

    return-void
.end method

.method private static AQ()V
    .locals 0
    .annotation runtime Lcom/ksad/annotation/invoker/ForInvoker;
        methodId = "registerHolder"
    .end annotation

    invoke-static {}, Lcom/kwad/sdk/core/b/a/bs;->AQ()V

    invoke-static {}, Lcom/kwad/sdk/core/b/a/bt;->AQ()V

    invoke-static {}, Lcom/kwad/sdk/core/b/a/bu;->AQ()V

    invoke-static {}, Lcom/kwad/sdk/core/b/a/bv;->AQ()V

    invoke-static {}, Lcom/kwad/sdk/core/b/a/bw;->AQ()V

    invoke-static {}, Lcom/kwad/sdk/core/b/a/bx;->AQ()V

    invoke-static {}, Lcom/kwad/sdk/core/b/a/by;->AQ()V

    invoke-static {}, Lcom/kwad/sdk/core/b/a/bz;->AQ()V

    invoke-static {}, Lcom/kwad/sdk/core/b/a/dg;->AQ()V

    invoke-static {}, Lcom/kwad/sdk/core/b/a/dh;->AQ()V

    invoke-static {}, Lcom/kwad/sdk/core/b/a/di;->AQ()V

    invoke-static {}, Lcom/kwad/sdk/core/b/a/dj;->AQ()V

    invoke-static {}, Lcom/kwad/sdk/core/b/a/dk;->AQ()V

    invoke-static {}, Lcom/kwad/sdk/core/b/a/dl;->AQ()V

    return-void
.end method

.method public static AR()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/Class<",
            "+",
            "Lcom/kwad/sdk/core/response/a/a;",
            ">;",
            "Lcom/kwad/sdk/core/d;",
            ">;"
        }
    .end annotation

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    return-object v0
.end method

.method public static getHolder(Ljava/lang/Class;)Lcom/kwad/sdk/core/d;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Class<",
            "+",
            "Lcom/kwad/sdk/core/response/a/a;",
            ">;)",
            "Lcom/kwad/sdk/core/d;"
        }
    .end annotation

    sget-object v0, Lcom/kwad/sdk/core/b/a/ex;->aou:Ljava/util/Map;

    invoke-interface {v0, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/kwad/sdk/core/d;

    return-object p0
.end method
