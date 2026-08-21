.class public final Lcom/kwad/sdk/core/b/a/jc;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/d;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/d<",
        "Lcom/kwad/components/core/webview/jshandler/y$a;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/kwad/components/core/webview/jshandler/y$a;Lorg/json/JSONObject;)V
    .locals 3

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v0, "type"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->type:I

    const-string v0, "appName"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->appName:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->appName:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    const-string v2, ""

    if-ne v0, v1, :cond_1

    iput-object v2, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->appName:Ljava/lang/String;

    :cond_1
    const-string v0, "pkgName"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->UA:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->UA:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_2

    iput-object v2, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->UA:Ljava/lang/String;

    :cond_2
    const-string v0, "version"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->version:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->version:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_3

    iput-object v2, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->version:Ljava/lang/String;

    :cond_3
    const-string v0, "versionCode"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->versionCode:I

    const-string v0, "appSize"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->UB:I

    const-string v0, "md5"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->UC:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->UC:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_4

    iput-object v2, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->UC:Ljava/lang/String;

    :cond_4
    const-string v0, "url"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->url:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->url:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_5

    iput-object v2, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->url:Ljava/lang/String;

    :cond_5
    const-string v0, "appLink"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->UD:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->UD:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_6

    iput-object v2, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->UD:Ljava/lang/String;

    :cond_6
    const-string v0, "icon"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->icon:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->icon:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_7

    iput-object v2, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->icon:Ljava/lang/String;

    :cond_7
    const-string v0, "desc"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->qm:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->qm:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_8

    iput-object v2, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->qm:Ljava/lang/String;

    :cond_8
    const-string v0, "appId"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->appId:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->appId:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_9

    iput-object v2, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->appId:Ljava/lang/String;

    :cond_9
    const-string v0, "marketUri"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->UE:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->UE:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_a

    iput-object v2, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->UE:Ljava/lang/String;

    :cond_a
    const-string v0, "disableLandingPageDeepLink"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->UF:Z

    const-string v0, "isLandscapeSupported"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->UG:Z

    const-string v0, "isFromLive"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result p1

    iput-boolean p1, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->UH:Z

    return-void
.end method

.method private static b(Lcom/kwad/components/core/webview/jshandler/y$a;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 3

    if-nez p1, :cond_0

    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :cond_0
    iget v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->type:I

    if-eqz v0, :cond_1

    iget v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->type:I

    const-string v1, "type"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->appName:Ljava/lang/String;

    const-string v1, ""

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->appName:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->appName:Ljava/lang/String;

    const-string v2, "appName"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->UA:Ljava/lang/String;

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->UA:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->UA:Ljava/lang/String;

    const-string v2, "pkgName"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->version:Ljava/lang/String;

    if-eqz v0, :cond_4

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->version:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_4

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->version:Ljava/lang/String;

    const-string v2, "version"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_4
    iget v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->versionCode:I

    if-eqz v0, :cond_5

    iget v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->versionCode:I

    const-string v2, "versionCode"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_5
    iget v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->UB:I

    if-eqz v0, :cond_6

    iget v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->UB:I

    const-string v2, "appSize"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_6
    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->UC:Ljava/lang/String;

    if-eqz v0, :cond_7

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->UC:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_7

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->UC:Ljava/lang/String;

    const-string v2, "md5"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_7
    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->url:Ljava/lang/String;

    if-eqz v0, :cond_8

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->url:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_8

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->url:Ljava/lang/String;

    const-string v2, "url"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_8
    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->UD:Ljava/lang/String;

    if-eqz v0, :cond_9

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->UD:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_9

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->UD:Ljava/lang/String;

    const-string v2, "appLink"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_9
    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->icon:Ljava/lang/String;

    if-eqz v0, :cond_a

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->icon:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_a

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->icon:Ljava/lang/String;

    const-string v2, "icon"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_a
    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->qm:Ljava/lang/String;

    if-eqz v0, :cond_b

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->qm:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_b

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->qm:Ljava/lang/String;

    const-string v2, "desc"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_b
    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->appId:Ljava/lang/String;

    if-eqz v0, :cond_c

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->appId:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_c

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->appId:Ljava/lang/String;

    const-string v2, "appId"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_c
    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->UE:Ljava/lang/String;

    if-eqz v0, :cond_d

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->UE:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_d

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->UE:Ljava/lang/String;

    const-string v1, "marketUri"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_d
    iget-boolean v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->UF:Z

    if-eqz v0, :cond_e

    iget-boolean v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->UF:Z

    const-string v1, "disableLandingPageDeepLink"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Z)V

    :cond_e
    iget-boolean v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->UG:Z

    if-eqz v0, :cond_f

    iget-boolean v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->UG:Z

    const-string v1, "isLandscapeSupported"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Z)V

    :cond_f
    iget-boolean v0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->UH:Z

    if-eqz v0, :cond_10

    iget-boolean p0, p0, Lcom/kwad/components/core/webview/jshandler/y$a;->UH:Z

    const-string v0, "isFromLive"

    invoke-static {p1, v0, p0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Z)V

    :cond_10
    return-object p1
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)V
    .locals 0

    check-cast p1, Lcom/kwad/components/core/webview/jshandler/y$a;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/jc;->a(Lcom/kwad/components/core/webview/jshandler/y$a;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final bridge synthetic b(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 0

    check-cast p1, Lcom/kwad/components/core/webview/jshandler/y$a;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/jc;->b(Lcom/kwad/components/core/webview/jshandler/y$a;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method
