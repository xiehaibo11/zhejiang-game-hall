.class final Lcom/kwad/sdk/KsAdSDKImpl$5;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/collector/h;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/KsAdSDKImpl;->initOnConfigRefresh(Lcom/kwad/sdk/core/response/model/SdkConfigData;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic ahc:Lcom/kwad/sdk/KsAdSDKImpl;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/KsAdSDKImpl;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/KsAdSDKImpl$5;->ahc:Lcom/kwad/sdk/KsAdSDKImpl;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final c(Lorg/json/JSONArray;)V
    .locals 1

    invoke-static {}, Lcom/kwad/components/core/o/a;->pA()Lcom/kwad/components/core/o/a;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/o/a;->c(Lorg/json/JSONArray;)V

    return-void
.end method
