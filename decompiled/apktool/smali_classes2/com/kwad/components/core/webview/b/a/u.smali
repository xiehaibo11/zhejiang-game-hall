.class public final Lcom/kwad/components/core/webview/b/a/u;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/webview/c/a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/core/webview/b/a/u$a;
    }
.end annotation


# instance fields
.field private WI:Lcom/kwad/components/core/webview/b/a/u$a;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/webview/b/a/u$a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/a/u;->WI:Lcom/kwad/components/core/webview/b/a/u$a;

    return-void
.end method

.method public final a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
    .locals 1

    iget-object p2, p0, Lcom/kwad/components/core/webview/b/a/u;->WI:Lcom/kwad/components/core/webview/b/a/u$a;

    if-eqz p2, :cond_0

    new-instance p2, Lcom/kwad/components/core/webview/b/b/m;

    invoke-direct {p2}, Lcom/kwad/components/core/webview/b/b/m;-><init>()V

    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, v0}, Lcom/kwad/components/core/webview/b/b/m;->parseJson(Lorg/json/JSONObject;)V

    iget-object p1, p0, Lcom/kwad/components/core/webview/b/a/u;->WI:Lcom/kwad/components/core/webview/b/a/u$a;

    invoke-interface {p1, p2}, Lcom/kwad/components/core/webview/b/a/u$a;->a(Lcom/kwad/components/core/webview/b/b/m;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    :cond_0
    return-void
.end method

.method public final getKey()Ljava/lang/String;
    .locals 1

    const-string v0, "updateVideoMuteState"

    return-object v0
.end method

.method public final onDestroy()V
    .locals 1

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/core/webview/b/a/u;->WI:Lcom/kwad/components/core/webview/b/a/u$a;

    return-void
.end method
