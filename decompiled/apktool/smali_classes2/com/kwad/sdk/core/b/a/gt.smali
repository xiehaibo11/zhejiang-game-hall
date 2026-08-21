.class public final Lcom/kwad/sdk/core/b/a/gt;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/d;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/d<",
        "Lcom/kwad/components/ad/splashscreen/SplashPreloadManager$PreLoadItem;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/kwad/components/ad/splashscreen/SplashPreloadManager$PreLoadItem;Lorg/json/JSONObject;)V
    .locals 2

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v0, "cacheTime"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager$PreLoadItem;->cacheTime:J

    const-string v0, "expiredTime"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager$PreLoadItem;->expiredTime:J

    const-string v0, "preloadId"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager$PreLoadItem;->preloadId:Ljava/lang/String;

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager$PreLoadItem;->preloadId:Ljava/lang/String;

    sget-object v0, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne p1, v0, :cond_1

    const-string p1, ""

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager$PreLoadItem;->preloadId:Ljava/lang/String;

    :cond_1
    return-void
.end method

.method private static b(Lcom/kwad/components/ad/splashscreen/SplashPreloadManager$PreLoadItem;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 5

    if-nez p1, :cond_0

    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :cond_0
    iget-wide v0, p0, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager$PreLoadItem;->cacheTime:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-eqz v0, :cond_1

    iget-wide v0, p0, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager$PreLoadItem;->cacheTime:J

    const-string v4, "cacheTime"

    invoke-static {p1, v4, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_1
    iget-wide v0, p0, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager$PreLoadItem;->expiredTime:J

    cmp-long v0, v0, v2

    if-eqz v0, :cond_2

    iget-wide v0, p0, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager$PreLoadItem;->expiredTime:J

    const-string v2, "expiredTime"

    invoke-static {p1, v2, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager$PreLoadItem;->preloadId:Ljava/lang/String;

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager$PreLoadItem;->preloadId:Ljava/lang/String;

    const-string v1, ""

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_3

    iget-object p0, p0, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager$PreLoadItem;->preloadId:Ljava/lang/String;

    const-string v0, "preloadId"

    invoke-static {p1, v0, p0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    return-object p1
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)V
    .locals 0

    check-cast p1, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager$PreLoadItem;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/gt;->a(Lcom/kwad/components/ad/splashscreen/SplashPreloadManager$PreLoadItem;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final bridge synthetic b(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 0

    check-cast p1, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager$PreLoadItem;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/gt;->b(Lcom/kwad/components/ad/splashscreen/SplashPreloadManager$PreLoadItem;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method
