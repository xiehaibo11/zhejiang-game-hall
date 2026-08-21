.class public final Lcom/kwad/sdk/core/b/a/fg;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/d;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/d<",
        "Lcom/kwad/sdk/core/webview/b/a/b;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/kwad/sdk/core/webview/b/a/b;Lorg/json/JSONObject;)V
    .locals 3

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v0, "Status"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/webview/b/a/b;->status:I

    const-string v0, "Content-Encoding"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/webview/b/a/b;->contentEncoding:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/webview/b/a/b;->contentEncoding:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    const-string v2, ""

    if-ne v0, v1, :cond_1

    iput-object v2, p0, Lcom/kwad/sdk/core/webview/b/a/b;->contentEncoding:Ljava/lang/String;

    :cond_1
    const-string v0, "Cache-Control"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/webview/b/a/b;->ayL:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/webview/b/a/b;->ayL:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_2

    iput-object v2, p0, Lcom/kwad/sdk/core/webview/b/a/b;->ayL:Ljava/lang/String;

    :cond_2
    const-string v0, "Content-Type"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/webview/b/a/b;->ayJ:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/webview/b/a/b;->ayJ:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_3

    iput-object v2, p0, Lcom/kwad/sdk/core/webview/b/a/b;->ayJ:Ljava/lang/String;

    :cond_3
    new-instance v0, Lcom/kwad/sdk/core/webview/b/a/a;

    invoke-direct {v0}, Lcom/kwad/sdk/core/webview/b/a/a;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/webview/b/a/b;->ayM:Lcom/kwad/sdk/core/webview/b/a/a;

    iget-object p0, p0, Lcom/kwad/sdk/core/webview/b/a/b;->ayM:Lcom/kwad/sdk/core/webview/b/a/a;

    const-string v0, "headers"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/kwad/sdk/core/webview/b/a/a;->parseJson(Lorg/json/JSONObject;)V

    return-void
.end method

.method private static b(Lcom/kwad/sdk/core/webview/b/a/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 3

    if-nez p1, :cond_0

    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :cond_0
    iget v0, p0, Lcom/kwad/sdk/core/webview/b/a/b;->status:I

    if-eqz v0, :cond_1

    iget v0, p0, Lcom/kwad/sdk/core/webview/b/a/b;->status:I

    const-string v1, "Status"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_1
    iget-object v0, p0, Lcom/kwad/sdk/core/webview/b/a/b;->contentEncoding:Ljava/lang/String;

    const-string v1, ""

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/sdk/core/webview/b/a/b;->contentEncoding:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/kwad/sdk/core/webview/b/a/b;->contentEncoding:Ljava/lang/String;

    const-string v2, "Content-Encoding"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    iget-object v0, p0, Lcom/kwad/sdk/core/webview/b/a/b;->ayL:Ljava/lang/String;

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/kwad/sdk/core/webview/b/a/b;->ayL:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/kwad/sdk/core/webview/b/a/b;->ayL:Ljava/lang/String;

    const-string v2, "Cache-Control"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    iget-object v0, p0, Lcom/kwad/sdk/core/webview/b/a/b;->ayJ:Ljava/lang/String;

    if-eqz v0, :cond_4

    iget-object v0, p0, Lcom/kwad/sdk/core/webview/b/a/b;->ayJ:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_4

    iget-object v0, p0, Lcom/kwad/sdk/core/webview/b/a/b;->ayJ:Ljava/lang/String;

    const-string v1, "Content-Type"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_4
    iget-object p0, p0, Lcom/kwad/sdk/core/webview/b/a/b;->ayM:Lcom/kwad/sdk/core/webview/b/a/a;

    const-string v0, "headers"

    invoke-static {p1, v0, p0}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    return-object p1
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)V
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/webview/b/a/b;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/fg;->a(Lcom/kwad/sdk/core/webview/b/a/b;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final bridge synthetic b(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/webview/b/a/b;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/fg;->b(Lcom/kwad/sdk/core/webview/b/a/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method
