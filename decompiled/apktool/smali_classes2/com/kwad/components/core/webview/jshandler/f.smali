.class public final Lcom/kwad/components/core/webview/jshandler/f;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/webview/c/a;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static aG(Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/l$a;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/jshandler/l$a;-><init>()V

    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/jshandler/l$a;->parseJson(Lorg/json/JSONObject;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    iget-object p0, v0, Lcom/kwad/components/core/webview/jshandler/l$a;->key:Ljava/lang/String;

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    const-string v1, ""

    if-eqz p0, :cond_0

    return-object v1

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/service/ServiceProvider;->getContext()Landroid/content/Context;

    move-result-object p0

    iget-object v0, v0, Lcom/kwad/components/core/webview/jshandler/l$a;->key:Ljava/lang/String;

    const-string v2, "ksadsdk_js_storage_cache_name"

    invoke-static {p0, v2, v0, v1}, Lcom/kwad/sdk/utils/y;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method


# virtual methods
.method public final a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
    .locals 1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    invoke-static {p1}, Lcom/kwad/components/core/webview/jshandler/f;->aG(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/l$a;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/jshandler/l$a;-><init>()V

    iput-object p1, v0, Lcom/kwad/components/core/webview/jshandler/l$a;->value:Ljava/lang/String;

    invoke-interface {p2, v0}, Lcom/kwad/sdk/core/webview/c/c;->a(Lcom/kwad/sdk/core/b;)V

    return-void

    :cond_0
    const/4 p1, -0x1

    const-string v0, "data is empty"

    invoke-interface {p2, p1, v0}, Lcom/kwad/sdk/core/webview/c/c;->onError(ILjava/lang/String;)V

    return-void
.end method

.method public final getKey()Ljava/lang/String;
    .locals 1

    const-string v0, "getStorageItem"

    return-object v0
.end method

.method public final onDestroy()V
    .locals 0

    return-void
.end method
