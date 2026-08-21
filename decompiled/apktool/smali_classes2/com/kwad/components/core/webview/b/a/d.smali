.class public Lcom/kwad/components/core/webview/b/a/d;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/webview/c/a;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Lcom/kwad/components/core/webview/b/b/g;)V
    .locals 0

    return-void
.end method

.method public final a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
    .locals 1

    new-instance p2, Lcom/kwad/components/core/webview/b/b/g;

    invoke-direct {p2}, Lcom/kwad/components/core/webview/b/b/g;-><init>()V

    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, v0}, Lcom/kwad/components/core/webview/b/b/g;->parseJson(Lorg/json/JSONObject;)V

    invoke-virtual {p0, p2}, Lcom/kwad/components/core/webview/b/a/d;->a(Lcom/kwad/components/core/webview/b/b/g;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    return-void
.end method

.method public final getKey()Ljava/lang/String;
    .locals 1

    const-string v0, "commonLog"

    return-object v0
.end method

.method public final onDestroy()V
    .locals 0

    return-void
.end method
