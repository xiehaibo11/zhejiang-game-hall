.class final Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$7;
.super Lcom/kwad/sdk/core/network/m;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->checkRequest(I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/kwad/sdk/core/network/m<",
        "Lcom/kwad/components/core/p/d;",
        "Lcom/kwad/components/ad/reward/model/RewardCallBackRespInfo;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic qs:I

.field final synthetic rW:Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;I)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$7;->rW:Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;

    iput p2, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$7;->qs:I

    invoke-direct {p0}, Lcom/kwad/sdk/core/network/m;-><init>()V

    return-void
.end method

.method private static M(Ljava/lang/String;)Lcom/kwad/components/ad/reward/model/RewardCallBackRespInfo;
    .locals 1

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    new-instance p0, Lcom/kwad/components/ad/reward/model/RewardCallBackRespInfo;

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/model/RewardCallBackRespInfo;-><init>()V

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/model/RewardCallBackRespInfo;->parseJson(Lorg/json/JSONObject;)V

    return-object p0
.end method

.method private gy()Lcom/kwad/components/core/p/d;
    .locals 3

    new-instance v0, Lcom/kwad/components/core/p/d;

    iget v1, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$7;->qs:I

    iget-object v2, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$7;->rW:Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;

    invoke-static {v2}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->access$000(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v2

    invoke-direct {v0, v1, v2}, Lcom/kwad/components/core/p/d;-><init>(ILcom/kwad/sdk/core/response/model/AdTemplate;)V

    return-object v0
.end method


# virtual methods
.method public final synthetic createRequest()Lcom/kwad/sdk/core/network/g;
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$7;->gy()Lcom/kwad/components/core/p/d;

    move-result-object v0

    return-object v0
.end method

.method public final synthetic parseData(Ljava/lang/String;)Lcom/kwad/sdk/core/network/BaseResultData;
    .locals 0

    invoke-static {p1}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$7;->M(Ljava/lang/String;)Lcom/kwad/components/ad/reward/model/RewardCallBackRespInfo;

    move-result-object p1

    return-object p1
.end method
