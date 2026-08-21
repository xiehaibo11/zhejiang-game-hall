.class final Lcom/kwad/components/ad/reward/h$b;
.super Lcom/kwad/sdk/core/network/m;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/reward/h;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "b"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/kwad/sdk/core/network/m<",
        "Lcom/kwad/components/ad/reward/i;",
        "Lcom/kwad/sdk/core/network/BaseResultData;",
        ">;"
    }
.end annotation


# instance fields
.field private adTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private oT:Lcom/kwad/sdk/core/network/p;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/kwad/sdk/core/network/p<",
            "Lcom/kwad/components/ad/reward/i;",
            "Lcom/kwad/sdk/core/network/BaseResultData;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/sdk/core/network/m;-><init>()V

    new-instance v0, Lcom/kwad/components/ad/reward/h$b$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/h$b$1;-><init>(Lcom/kwad/components/ad/reward/h$b;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/h$b;->oT:Lcom/kwad/sdk/core/network/p;

    iput-object p1, p0, Lcom/kwad/components/ad/reward/h$b;->adTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/h$b;)Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/h$b;->adTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object p0
.end method

.method private fJ()Lcom/kwad/components/ad/reward/i;
    .locals 2

    new-instance v0, Lcom/kwad/components/ad/reward/i;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/h$b;->adTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {v0, v1}, Lcom/kwad/components/ad/reward/i;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    return-object v0
.end method


# virtual methods
.method public final synthetic createRequest()Lcom/kwad/sdk/core/network/g;
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/h$b;->fJ()Lcom/kwad/components/ad/reward/i;

    move-result-object v0

    return-object v0
.end method

.method public final fI()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/h$b;->oT:Lcom/kwad/sdk/core/network/p;

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/h$b;->request(Lcom/kwad/sdk/core/network/h;)V

    return-void
.end method

.method public final parseData(Ljava/lang/String;)Lcom/kwad/sdk/core/network/BaseResultData;
    .locals 2

    new-instance v0, Lcom/kwad/components/ad/reward/RewardCallbackVerifyHelper$ServerCallbackNetworking$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/RewardCallbackVerifyHelper$ServerCallbackNetworking$2;-><init>(Lcom/kwad/components/ad/reward/h$b;)V

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/network/BaseResultData;->parseJson(Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-object v0
.end method
