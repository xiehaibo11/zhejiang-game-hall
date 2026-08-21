.class final Lcom/kwad/sdk/KsAdSDKImpl$4;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/p/f$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/KsAdSDKImpl;->initConfigRequestManager()V
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

    iput-object p1, p0, Lcom/kwad/sdk/KsAdSDKImpl$4;->ahc:Lcom/kwad/sdk/KsAdSDKImpl;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/core/response/model/SdkConfigData;)V
    .locals 2

    const-string v0, "KSAdSDK"

    const-string v1, "onConfigRefresh()"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->i(Ljava/lang/String;Ljava/lang/String;)V

    :try_start_0
    iget-object v0, p0, Lcom/kwad/sdk/KsAdSDKImpl$4;->ahc:Lcom/kwad/sdk/KsAdSDKImpl;

    invoke-static {v0, p1}, Lcom/kwad/sdk/KsAdSDKImpl;->access$200(Lcom/kwad/sdk/KsAdSDKImpl;Lcom/kwad/sdk/core/response/model/SdkConfigData;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    invoke-static {p1}, Lcom/kwad/components/core/d/a;->b(Ljava/lang/Throwable;)V

    return-void
.end method

.method public final on()V
    .locals 2

    const-string v0, "KSAdSDK"

    const-string v1, "onCacheLoaded()"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->M(Ljava/lang/String;Ljava/lang/String;)V

    const-class v0, Lcom/kwad/components/a/a/a;

    invoke-static {v0}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/a/a/a;

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/kwad/sdk/service/ServiceProvider;->getContext()Landroid/content/Context;

    :cond_0
    return-void
.end method
