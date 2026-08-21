.class public final Lcom/kwad/sdk/core/b/a/q;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/d;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/d<",
        "Lcom/kwad/components/core/webview/jshandler/n$a;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/kwad/components/core/webview/jshandler/n$a;Lorg/json/JSONObject;)V
    .locals 4

    if-nez p1, :cond_0

    return-void

    :cond_0
    new-instance v0, Ljava/lang/Long;

    const-string v1, "-1"

    invoke-direct {v0, v1}, Ljava/lang/Long;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Long;->longValue()J

    move-result-wide v2

    const-string v0, "creativeId"

    invoke-virtual {p1, v0, v2, v3}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;J)J

    move-result-wide v2

    iput-wide v2, p0, Lcom/kwad/components/core/webview/jshandler/n$a;->creativeId:J

    new-instance v0, Ljava/lang/Integer;

    invoke-direct {v0, v1}, Ljava/lang/Integer;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const-string v1, "adStyle"

    invoke-virtual {p1, v1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p1

    iput p1, p0, Lcom/kwad/components/core/webview/jshandler/n$a;->adStyle:I

    return-void
.end method

.method private static b(Lcom/kwad/components/core/webview/jshandler/n$a;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 3

    if-nez p1, :cond_0

    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :cond_0
    iget-wide v0, p0, Lcom/kwad/components/core/webview/jshandler/n$a;->creativeId:J

    const-string v2, "creativeId"

    invoke-static {p1, v2, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    iget p0, p0, Lcom/kwad/components/core/webview/jshandler/n$a;->adStyle:I

    const-string v0, "adStyle"

    invoke-static {p1, v0, p0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    return-object p1
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)V
    .locals 0

    check-cast p1, Lcom/kwad/components/core/webview/jshandler/n$a;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/q;->a(Lcom/kwad/components/core/webview/jshandler/n$a;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final bridge synthetic b(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 0

    check-cast p1, Lcom/kwad/components/core/webview/jshandler/n$a;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/q;->b(Lcom/kwad/components/core/webview/jshandler/n$a;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method
