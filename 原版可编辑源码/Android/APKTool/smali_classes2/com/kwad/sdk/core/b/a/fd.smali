.class public final Lcom/kwad/sdk/core/b/a/fd;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/d;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/d<",
        "Lcom/kwad/components/core/webview/jshandler/an$a;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/kwad/components/core/webview/jshandler/an$a;Lorg/json/JSONObject;)V
    .locals 3

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v0, "status"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/core/webview/jshandler/an$a;->status:I

    const-string v0, "totalWatchingDuration"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/core/webview/jshandler/an$a;->totalWatchingDuration:J

    const-string v0, "watchingUserCount"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/core/webview/jshandler/an$a;->watchingUserCount:I

    const-string v0, "displayWatchingUserCount"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/core/webview/jshandler/an$a;->displayWatchingUserCount:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/an$a;->displayWatchingUserCount:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    const-string v2, ""

    if-ne v0, v1, :cond_1

    iput-object v2, p0, Lcom/kwad/components/core/webview/jshandler/an$a;->displayWatchingUserCount:Ljava/lang/String;

    :cond_1
    const-string v0, "liveDuration"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/core/webview/jshandler/an$a;->liveDuration:J

    const-string v0, "likeUserCount"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/core/webview/jshandler/an$a;->likeUserCount:I

    const-string v0, "displayLikeUserCount"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/components/core/webview/jshandler/an$a;->displayLikeUserCount:Ljava/lang/String;

    iget-object p1, p0, Lcom/kwad/components/core/webview/jshandler/an$a;->displayLikeUserCount:Ljava/lang/String;

    sget-object v0, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne p1, v0, :cond_2

    iput-object v2, p0, Lcom/kwad/components/core/webview/jshandler/an$a;->displayLikeUserCount:Ljava/lang/String;

    :cond_2
    return-void
.end method

.method private static b(Lcom/kwad/components/core/webview/jshandler/an$a;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 6

    if-nez p1, :cond_0

    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :cond_0
    iget v0, p0, Lcom/kwad/components/core/webview/jshandler/an$a;->status:I

    if-eqz v0, :cond_1

    iget v0, p0, Lcom/kwad/components/core/webview/jshandler/an$a;->status:I

    const-string v1, "status"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_1
    iget-wide v0, p0, Lcom/kwad/components/core/webview/jshandler/an$a;->totalWatchingDuration:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-eqz v0, :cond_2

    iget-wide v0, p0, Lcom/kwad/components/core/webview/jshandler/an$a;->totalWatchingDuration:J

    const-string v4, "totalWatchingDuration"

    invoke-static {p1, v4, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_2
    iget v0, p0, Lcom/kwad/components/core/webview/jshandler/an$a;->watchingUserCount:I

    if-eqz v0, :cond_3

    iget v0, p0, Lcom/kwad/components/core/webview/jshandler/an$a;->watchingUserCount:I

    const-string v1, "watchingUserCount"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_3
    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/an$a;->displayWatchingUserCount:Ljava/lang/String;

    const-string v1, ""

    if-eqz v0, :cond_4

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/an$a;->displayWatchingUserCount:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_4

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/an$a;->displayWatchingUserCount:Ljava/lang/String;

    const-string v4, "displayWatchingUserCount"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_4
    iget-wide v4, p0, Lcom/kwad/components/core/webview/jshandler/an$a;->liveDuration:J

    cmp-long v0, v4, v2

    if-eqz v0, :cond_5

    iget-wide v2, p0, Lcom/kwad/components/core/webview/jshandler/an$a;->liveDuration:J

    const-string v0, "liveDuration"

    invoke-static {p1, v0, v2, v3}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_5
    iget v0, p0, Lcom/kwad/components/core/webview/jshandler/an$a;->likeUserCount:I

    if-eqz v0, :cond_6

    iget v0, p0, Lcom/kwad/components/core/webview/jshandler/an$a;->likeUserCount:I

    const-string v2, "likeUserCount"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_6
    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/an$a;->displayLikeUserCount:Ljava/lang/String;

    if-eqz v0, :cond_7

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/an$a;->displayLikeUserCount:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_7

    iget-object p0, p0, Lcom/kwad/components/core/webview/jshandler/an$a;->displayLikeUserCount:Ljava/lang/String;

    const-string v0, "displayLikeUserCount"

    invoke-static {p1, v0, p0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_7
    return-object p1
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)V
    .locals 0

    check-cast p1, Lcom/kwad/components/core/webview/jshandler/an$a;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/fd;->a(Lcom/kwad/components/core/webview/jshandler/an$a;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final bridge synthetic b(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 0

    check-cast p1, Lcom/kwad/components/core/webview/jshandler/an$a;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/fd;->b(Lcom/kwad/components/core/webview/jshandler/an$a;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method
