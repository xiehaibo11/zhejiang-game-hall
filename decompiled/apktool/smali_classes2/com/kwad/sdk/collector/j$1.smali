.class final Lcom/kwad/sdk/collector/j$1;
.super Lcom/kwad/sdk/core/network/m;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/collector/j;->b(Landroid/content/Context;Ljava/util/List;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/kwad/sdk/core/network/m<",
        "Lcom/kwad/sdk/collector/a/b;",
        "Lcom/kwad/sdk/collector/CollectResponse;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic ajM:Ljava/util/List;


# direct methods
.method constructor <init>(Ljava/util/List;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/collector/j$1;->ajM:Ljava/util/List;

    invoke-direct {p0}, Lcom/kwad/sdk/core/network/m;-><init>()V

    return-void
.end method

.method private static cm(Ljava/lang/String;)Lcom/kwad/sdk/collector/CollectResponse;
    .locals 2

    new-instance v0, Lcom/kwad/sdk/collector/CollectResponse;

    invoke-direct {v0}, Lcom/kwad/sdk/collector/CollectResponse;-><init>()V

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/collector/CollectResponse;->parseJson(Lorg/json/JSONObject;)V

    return-object v0
.end method

.method private yJ()Lcom/kwad/sdk/collector/a/b;
    .locals 2

    new-instance v0, Lcom/kwad/sdk/collector/a/b;

    iget-object v1, p0, Lcom/kwad/sdk/collector/j$1;->ajM:Ljava/util/List;

    invoke-direct {v0, v1}, Lcom/kwad/sdk/collector/a/b;-><init>(Ljava/util/Collection;)V

    return-object v0
.end method


# virtual methods
.method public final synthetic createRequest()Lcom/kwad/sdk/core/network/g;
    .locals 1

    invoke-direct {p0}, Lcom/kwad/sdk/collector/j$1;->yJ()Lcom/kwad/sdk/collector/a/b;

    move-result-object v0

    return-object v0
.end method

.method public final enableMonitorReport()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public final synthetic parseData(Ljava/lang/String;)Lcom/kwad/sdk/core/network/BaseResultData;
    .locals 0

    invoke-static {p1}, Lcom/kwad/sdk/collector/j$1;->cm(Ljava/lang/String;)Lcom/kwad/sdk/collector/CollectResponse;

    move-result-object p1

    return-object p1
.end method
