.class public final Lcom/kwad/components/core/webview/jshandler/ag;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/webview/c/a;


# instance fields
.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private mContext:Landroid/content/Context;


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/core/webview/jshandler/ag;->mContext:Landroid/content/Context;

    iput-object p2, p0, Lcom/kwad/components/core/webview/jshandler/ag;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
    .locals 6

    new-instance v0, Lcom/kwad/components/core/webview/a/c;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/a/c;-><init>()V

    iget-object v1, p0, Lcom/kwad/components/core/webview/jshandler/ag;->mContext:Landroid/content/Context;

    const/4 v2, 0x2

    const/4 v3, -0x1

    if-nez v1, :cond_0

    iget-object v1, p0, Lcom/kwad/components/core/webview/jshandler/ag;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1, v2}, Lcom/kwad/sdk/core/report/a;->k(Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    const-string v1, "context\u4e3a\u7a7a"

    invoke-interface {p2, v3, v1}, Lcom/kwad/sdk/core/webview/c/c;->onError(ILjava/lang/String;)V

    :cond_0
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/a/c;->parseJson(Lorg/json/JSONObject;)V

    iget-object p1, p0, Lcom/kwad/components/core/webview/jshandler/ag;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->M(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    if-nez v1, :cond_1

    iget-object v1, p0, Lcom/kwad/components/core/webview/jshandler/ag;->mContext:Landroid/content/Context;

    iget-object p1, p1, Lcom/kwad/sdk/core/response/model/AdInfo;->adConversionInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;

    iget-object p1, p1, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->smallAppJumpInfo:Lcom/kwad/sdk/core/response/model/AdInfo$SmallAppJumpInfo;

    iget-object p1, p1, Lcom/kwad/sdk/core/response/model/AdInfo$SmallAppJumpInfo;->mediaSmallAppId:Ljava/lang/String;

    iget-object v4, v0, Lcom/kwad/components/core/webview/a/c;->Ts:Ljava/lang/String;

    iget-object v0, v0, Lcom/kwad/components/core/webview/a/c;->Tt:Ljava/lang/String;

    iget-object v5, p0, Lcom/kwad/components/core/webview/jshandler/ag;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1, p1, v4, v0, v5}, Lcom/kwad/components/core/e/d/e;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)I

    move-result p1

    const/4 v0, 0x1

    if-ne p1, v0, :cond_1

    const/4 p1, 0x0

    invoke-interface {p2, p1}, Lcom/kwad/sdk/core/webview/c/c;->a(Lcom/kwad/sdk/core/b;)V

    goto :goto_0

    :cond_1
    const-string p1, "\u8df3\u8f6c\u5931\u8d25"

    invoke-interface {p2, v3, p1}, Lcom/kwad/sdk/core/webview/c/c;->onError(ILjava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/ag;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0, v2}, Lcom/kwad/sdk/core/report/a;->k(Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    const-string v0, "\u89e3\u6790\u5931\u8d25"

    invoke-interface {p2, v3, v0}, Lcom/kwad/sdk/core/webview/c/c;->onError(ILjava/lang/String;)V

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    :goto_0
    return-void
.end method

.method public final getKey()Ljava/lang/String;
    .locals 1

    const-string v0, "openWechatMiniProgram"

    return-object v0
.end method

.method public final onDestroy()V
    .locals 0

    return-void
.end method
