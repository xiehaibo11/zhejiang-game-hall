.class final Lcom/kwad/components/ad/reward/n$1;
.super Lcom/kwad/sdk/core/network/m;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/n;->a(ILcom/kwad/components/ad/reward/j;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
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

.field final synthetic qt:Lcom/kwad/components/ad/reward/j;


# direct methods
.method constructor <init>(ILcom/kwad/components/ad/reward/j;)V
    .locals 0

    iput p1, p0, Lcom/kwad/components/ad/reward/n$1;->qs:I

    iput-object p2, p0, Lcom/kwad/components/ad/reward/n$1;->qt:Lcom/kwad/components/ad/reward/j;

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

    iget v1, p0, Lcom/kwad/components/ad/reward/n$1;->qs:I

    iget-object v2, p0, Lcom/kwad/components/ad/reward/n$1;->qt:Lcom/kwad/components/ad/reward/j;

    iget-object v2, v2, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {v0, v1, v2}, Lcom/kwad/components/core/p/d;-><init>(ILcom/kwad/sdk/core/response/model/AdTemplate;)V

    return-object v0
.end method


# virtual methods
.method public final synthetic createRequest()Lcom/kwad/sdk/core/network/g;
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/n$1;->gy()Lcom/kwad/components/core/p/d;

    move-result-object v0

    return-object v0
.end method

.method public final synthetic parseData(Ljava/lang/String;)Lcom/kwad/sdk/core/network/BaseResultData;
    .locals 0

    invoke-static {p1}, Lcom/kwad/components/ad/reward/n$1;->M(Ljava/lang/String;)Lcom/kwad/components/ad/reward/model/RewardCallBackRespInfo;

    move-result-object p1

    return-object p1
.end method
