.class public final Lcom/kwad/sdk/core/b/a/cc;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/d;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/d<",
        "Lcom/kwad/components/core/webview/jshandler/ac$a;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/kwad/components/core/webview/jshandler/ac$a;Lorg/json/JSONObject;)V
    .locals 2

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v0, "clickActionButton"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/components/core/webview/jshandler/ac$a;->UX:Z

    const-string v0, "adTemplate"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/core/webview/jshandler/ac$a;->UY:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/ac$a;->UY:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_1

    const-string v0, ""

    iput-object v0, p0, Lcom/kwad/components/core/webview/jshandler/ac$a;->UY:Ljava/lang/String;

    :cond_1
    const-string v0, "area"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/core/webview/jshandler/ac$a;->UZ:I

    new-instance v0, Lcom/kwad/sdk/core/webview/d/b/c;

    invoke-direct {v0}, Lcom/kwad/sdk/core/webview/d/b/c;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/webview/jshandler/ac$a;->Va:Lcom/kwad/sdk/core/webview/d/b/c;

    iget-object p0, p0, Lcom/kwad/components/core/webview/jshandler/ac$a;->Va:Lcom/kwad/sdk/core/webview/d/b/c;

    const-string v0, "logParam"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/kwad/sdk/core/webview/d/b/c;->parseJson(Lorg/json/JSONObject;)V

    return-void
.end method

.method private static b(Lcom/kwad/components/core/webview/jshandler/ac$a;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 2

    if-nez p1, :cond_0

    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :cond_0
    iget-boolean v0, p0, Lcom/kwad/components/core/webview/jshandler/ac$a;->UX:Z

    if-eqz v0, :cond_1

    iget-boolean v0, p0, Lcom/kwad/components/core/webview/jshandler/ac$a;->UX:Z

    const-string v1, "clickActionButton"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Z)V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/ac$a;->UY:Ljava/lang/String;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/ac$a;->UY:Ljava/lang/String;

    const-string v1, ""

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/ac$a;->UY:Ljava/lang/String;

    const-string v1, "adTemplate"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    iget v0, p0, Lcom/kwad/components/core/webview/jshandler/ac$a;->UZ:I

    if-eqz v0, :cond_3

    iget v0, p0, Lcom/kwad/components/core/webview/jshandler/ac$a;->UZ:I

    const-string v1, "area"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_3
    iget-object p0, p0, Lcom/kwad/components/core/webview/jshandler/ac$a;->Va:Lcom/kwad/sdk/core/webview/d/b/c;

    const-string v0, "logParam"

    invoke-static {p1, v0, p0}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    return-object p1
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)V
    .locals 0

    check-cast p1, Lcom/kwad/components/core/webview/jshandler/ac$a;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/cc;->a(Lcom/kwad/components/core/webview/jshandler/ac$a;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final bridge synthetic b(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 0

    check-cast p1, Lcom/kwad/components/core/webview/jshandler/ac$a;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/cc;->b(Lcom/kwad/components/core/webview/jshandler/ac$a;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method
