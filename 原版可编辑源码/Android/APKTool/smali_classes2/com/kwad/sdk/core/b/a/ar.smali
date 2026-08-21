.class public final Lcom/kwad/sdk/core/b/a/ar;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/d;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/d<",
        "Lcom/kwad/components/core/webview/jshandler/aj$a;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/kwad/components/core/webview/jshandler/aj$a;Lorg/json/JSONObject;)V
    .locals 2

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v0, "progress"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;)D

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/core/webview/jshandler/aj$a;->Vf:D

    const-string v0, "status"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    iput p1, p0, Lcom/kwad/components/core/webview/jshandler/aj$a;->status:I

    return-void
.end method

.method private static b(Lcom/kwad/components/core/webview/jshandler/aj$a;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 4

    if-nez p1, :cond_0

    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :cond_0
    iget-wide v0, p0, Lcom/kwad/components/core/webview/jshandler/aj$a;->Vf:D

    const-wide/16 v2, 0x0

    cmpl-double v0, v0, v2

    if-eqz v0, :cond_1

    iget-wide v0, p0, Lcom/kwad/components/core/webview/jshandler/aj$a;->Vf:D

    const-string v2, "progress"

    invoke-static {p1, v2, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;D)V

    :cond_1
    iget v0, p0, Lcom/kwad/components/core/webview/jshandler/aj$a;->status:I

    if-eqz v0, :cond_2

    iget p0, p0, Lcom/kwad/components/core/webview/jshandler/aj$a;->status:I

    const-string v0, "status"

    invoke-static {p1, v0, p0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_2
    return-object p1
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)V
    .locals 0

    check-cast p1, Lcom/kwad/components/core/webview/jshandler/aj$a;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/ar;->a(Lcom/kwad/components/core/webview/jshandler/aj$a;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final bridge synthetic b(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 0

    check-cast p1, Lcom/kwad/components/core/webview/jshandler/aj$a;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/ar;->b(Lcom/kwad/components/core/webview/jshandler/aj$a;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method
