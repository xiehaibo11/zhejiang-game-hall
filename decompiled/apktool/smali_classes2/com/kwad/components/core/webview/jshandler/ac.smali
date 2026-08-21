.class public final Lcom/kwad/components/core/webview/jshandler/ac;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/webview/c/a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/core/webview/jshandler/ac$a;,
        Lcom/kwad/components/core/webview/jshandler/ac$b;
    }
.end annotation


# instance fields
.field private final TL:Lcom/kwad/sdk/core/webview/b;

.field private final TT:Landroid/os/Handler;

.field private final UR:Lcom/kwad/components/core/webview/jshandler/ac$b;


# direct methods
.method static synthetic a(Lcom/kwad/components/core/webview/jshandler/ac;)Lcom/kwad/sdk/core/webview/b;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/webview/jshandler/ac;->TL:Lcom/kwad/sdk/core/webview/b;

    return-object p0
.end method


# virtual methods
.method public final a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
    .locals 5

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/ac$a;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/jshandler/ac$a;-><init>()V

    new-instance v1, Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {v1}, Lcom/kwad/sdk/core/response/model/AdTemplate;-><init>()V

    :try_start_0
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v2}, Lcom/kwad/components/core/webview/jshandler/ac$a;->parseJson(Lorg/json/JSONObject;)V

    new-instance p1, Lorg/json/JSONObject;

    iget-object v2, v0, Lcom/kwad/components/core/webview/jshandler/ac$a;->UY:Ljava/lang/String;

    invoke-direct {p1, v2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, p1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->parseJson(Lorg/json/JSONObject;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    :goto_0
    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/d;->bY(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result p1

    if-nez p1, :cond_0

    return-void

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/core/webview/jshandler/ac;->TL:Lcom/kwad/sdk/core/webview/b;

    iget-object p1, p1, Lcom/kwad/sdk/core/webview/b;->ayf:Lcom/kwad/sdk/utils/af;

    const/4 v2, 0x0

    if-eqz p1, :cond_1

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p1

    iget-object p1, p1, Lcom/kwad/sdk/core/response/model/AdInfo;->downloadId:Ljava/lang/String;

    iget-object v3, p0, Lcom/kwad/components/core/webview/jshandler/ac;->TL:Lcom/kwad/sdk/core/webview/b;

    iget-object v3, v3, Lcom/kwad/sdk/core/webview/b;->ayf:Lcom/kwad/sdk/utils/af;

    invoke-virtual {v3, p1}, Lcom/kwad/sdk/utils/af;->fy(Ljava/lang/String;)Lcom/kwad/sdk/core/webview/a;

    move-result-object p1

    check-cast p1, Lcom/kwad/components/core/e/d/c;

    goto :goto_1

    :cond_1
    move-object p1, v2

    :goto_1
    iget-object v3, p0, Lcom/kwad/components/core/webview/jshandler/ac;->TL:Lcom/kwad/sdk/core/webview/b;

    iget-boolean v3, v3, Lcom/kwad/sdk/core/webview/b;->ayg:Z

    if-eqz v3, :cond_2

    iget-object v3, p0, Lcom/kwad/components/core/webview/jshandler/ac;->TT:Landroid/os/Handler;

    new-instance v4, Lcom/kwad/components/core/webview/jshandler/ac$1;

    invoke-direct {v4, p0, v0, v1, p1}, Lcom/kwad/components/core/webview/jshandler/ac$1;-><init>(Lcom/kwad/components/core/webview/jshandler/ac;Lcom/kwad/components/core/webview/jshandler/ac$a;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/e/d/c;)V

    invoke-virtual {v3, v4}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    goto :goto_2

    :cond_2
    iget-object p1, p0, Lcom/kwad/components/core/webview/jshandler/ac;->UR:Lcom/kwad/components/core/webview/jshandler/ac$b;

    if-eqz p1, :cond_3

    iget-object p1, p0, Lcom/kwad/components/core/webview/jshandler/ac;->TT:Landroid/os/Handler;

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/ac$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/webview/jshandler/ac$2;-><init>(Lcom/kwad/components/core/webview/jshandler/ac;)V

    invoke-virtual {p1, v0}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :cond_3
    :goto_2
    invoke-interface {p2, v2}, Lcom/kwad/sdk/core/webview/c/c;->a(Lcom/kwad/sdk/core/b;)V

    return-void
.end method

.method public final getKey()Ljava/lang/String;
    .locals 1

    const-string v0, "clickAction"

    return-object v0
.end method

.method public final onDestroy()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/ac;->TT:Landroid/os/Handler;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    return-void
.end method
