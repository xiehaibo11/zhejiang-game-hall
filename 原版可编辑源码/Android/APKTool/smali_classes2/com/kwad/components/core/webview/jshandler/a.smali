.class public final Lcom/kwad/components/core/webview/jshandler/a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/webview/c/a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/core/webview/jshandler/a$a;,
        Lcom/kwad/components/core/webview/jshandler/a$b;
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static aF(Ljava/lang/String;)Z
    .locals 1

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 p0, 0x0

    return p0

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/service/ServiceProvider;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, p0}, Lcom/kwad/sdk/utils/ak;->ak(Landroid/content/Context;Ljava/lang/String;)Z

    move-result p0

    return p0
.end method


# virtual methods
.method public final a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
    .locals 2

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/a$b;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/jshandler/a$b;-><init>()V

    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/jshandler/a$b;->parseJson(Lorg/json/JSONObject;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    new-instance p1, Lcom/kwad/components/core/webview/jshandler/a$a;

    invoke-direct {p1}, Lcom/kwad/components/core/webview/jshandler/a$a;-><init>()V

    iget-object v0, v0, Lcom/kwad/components/core/webview/jshandler/a$b;->packageName:Ljava/lang/String;

    invoke-static {v0}, Lcom/kwad/components/core/webview/jshandler/a;->aF(Ljava/lang/String;)Z

    move-result v0

    iput-boolean v0, p1, Lcom/kwad/components/core/webview/jshandler/a$a;->Tu:Z

    invoke-interface {p2, p1}, Lcom/kwad/sdk/core/webview/c/c;->a(Lcom/kwad/sdk/core/b;)V

    return-void
.end method

.method public final getKey()Ljava/lang/String;
    .locals 1

    const-string v0, "isAppInstalled"

    return-object v0
.end method

.method public final onDestroy()V
    .locals 0

    return-void
.end method
