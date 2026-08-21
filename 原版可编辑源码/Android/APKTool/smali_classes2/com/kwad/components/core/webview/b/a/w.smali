.class public final Lcom/kwad/components/core/webview/b/a/w;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/webview/c/a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/core/webview/b/a/w$a;
    }
.end annotation


# instance fields
.field private WN:Lcom/kwad/components/core/webview/b/a/w$a;


# direct methods
.method public constructor <init>(Lcom/kwad/components/core/webview/b/a/w$a;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/a/w;->WN:Lcom/kwad/components/core/webview/b/a/w$a;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/core/webview/b/a/w;)Lcom/kwad/components/core/webview/b/a/w$a;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/webview/b/a/w;->WN:Lcom/kwad/components/core/webview/b/a/w$a;

    return-object p0
.end method


# virtual methods
.method public final a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
    .locals 2

    :try_start_0
    const-string p2, "UpdateLiveCurrentShopInfoHandler"

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "handleJsCall: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p2, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    new-instance p2, Lcom/kwad/sdk/core/response/model/TKAdLiveShopItemInfo;

    invoke-direct {p2}, Lcom/kwad/sdk/core/response/model/TKAdLiveShopItemInfo;-><init>()V

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, v0}, Lcom/kwad/sdk/core/response/model/TKAdLiveShopItemInfo;->parseJson(Lorg/json/JSONObject;)V

    new-instance p1, Lcom/kwad/components/core/webview/b/a/w$1;

    invoke-direct {p1, p0, p2}, Lcom/kwad/components/core/webview/b/a/w$1;-><init>(Lcom/kwad/components/core/webview/b/a/w;Lcom/kwad/sdk/core/response/model/TKAdLiveShopItemInfo;)V

    invoke-static {p1}, Lcom/kwad/sdk/utils/bj;->postOnUiThread(Ljava/lang/Runnable;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    return-void
.end method

.method public final getKey()Ljava/lang/String;
    .locals 1

    const-string v0, "updateLiveCurrentShopInfo"

    return-object v0
.end method

.method public final onDestroy()V
    .locals 0

    return-void
.end method
