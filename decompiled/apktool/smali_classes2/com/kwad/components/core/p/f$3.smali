.class final Lcom/kwad/components/core/p/f$3;
.super Lcom/kwad/sdk/core/network/m;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/p/f;->pF()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/kwad/sdk/core/network/m<",
        "Lcom/kwad/components/core/p/e;",
        "Lcom/kwad/sdk/core/response/model/SdkConfigData;",
        ">;"
    }
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/core/network/m;-><init>()V

    return-void
.end method

.method private static au(Ljava/lang/String;)Lcom/kwad/sdk/core/response/model/SdkConfigData;
    .locals 1

    invoke-static {}, Lcom/kwad/components/core/p/f;->pG()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, p0}, Lcom/kwad/sdk/utils/y;->ag(Landroid/content/Context;Ljava/lang/String;)V

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    new-instance p0, Lcom/kwad/sdk/core/response/model/SdkConfigData;

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/model/SdkConfigData;-><init>()V

    invoke-virtual {p0, v0}, Lcom/kwad/sdk/core/response/model/SdkConfigData;->parseJson(Lorg/json/JSONObject;)V

    :try_start_0
    invoke-static {}, Lcom/kwad/sdk/core/config/d;->xs()Z

    invoke-static {}, Lcom/kwad/sdk/core/config/d;->zb()Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    :goto_0
    return-object p0
.end method

.method private static pH()Lcom/kwad/components/core/p/e;
    .locals 1

    new-instance v0, Lcom/kwad/components/core/p/e;

    invoke-direct {v0}, Lcom/kwad/components/core/p/e;-><init>()V

    return-object v0
.end method


# virtual methods
.method public final synthetic createRequest()Lcom/kwad/sdk/core/network/g;
    .locals 1

    invoke-static {}, Lcom/kwad/components/core/p/f$3;->pH()Lcom/kwad/components/core/p/e;

    move-result-object v0

    return-object v0
.end method

.method public final synthetic parseData(Ljava/lang/String;)Lcom/kwad/sdk/core/network/BaseResultData;
    .locals 0

    invoke-static {p1}, Lcom/kwad/components/core/p/f$3;->au(Ljava/lang/String;)Lcom/kwad/sdk/core/response/model/SdkConfigData;

    move-result-object p1

    return-object p1
.end method
