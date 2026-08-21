.class final Lcom/kwad/sdk/core/response/model/SdkConfigData$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/core/response/model/SdkConfigData;->parseJson(Lorg/json/JSONObject;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/c<",
        "Lcom/kwad/sdk/h/a/a;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic auF:Lcom/kwad/sdk/core/response/model/SdkConfigData;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/core/response/model/SdkConfigData;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/response/model/SdkConfigData$1;->auF:Lcom/kwad/sdk/core/response/model/SdkConfigData;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static CF()Lcom/kwad/sdk/h/a/a;
    .locals 1

    new-instance v0, Lcom/kwad/sdk/h/a/a;

    invoke-direct {v0}, Lcom/kwad/sdk/h/a/a;-><init>()V

    return-object v0
.end method


# virtual methods
.method public final synthetic yV()Lcom/kwad/sdk/core/b;
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/core/response/model/SdkConfigData$1;->CF()Lcom/kwad/sdk/h/a/a;

    move-result-object v0

    return-object v0
.end method
