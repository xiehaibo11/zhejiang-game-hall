.class public Lcom/reyun/tracking/utils/d;
.super Ljava/lang/Object;


# static fields
.field private static a:Ljava/lang/Runnable;


# direct methods
.method static synthetic a(Ljava/lang/Runnable;)Ljava/lang/Runnable;
    .locals 0

    sput-object p0, Lcom/reyun/tracking/utils/d;->a:Ljava/lang/Runnable;

    return-object p0
.end method

.method private static a(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    const-string v0, "pkgInfo"

    invoke-virtual {p0, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string p0, "https://log.reyun.com/receive/pkginfo"

    return-object p0

    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "https://log.trackingio.com/"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static a()V
    .locals 4

    sget-object v0, Lcom/reyun/tracking/utils/d;->a:Ljava/lang/Runnable;

    if-nez v0, :cond_1

    sget-boolean v0, Lcom/reyun/tracking/a/i;->c:Z

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    invoke-static {}, Lcom/reyun/tracking/sdk/a;->a()Lcom/reyun/tracking/sdk/a;

    move-result-object v0

    new-instance v1, Lcom/reyun/tracking/utils/e;

    invoke-direct {v1}, Lcom/reyun/tracking/utils/e;-><init>()V

    sput-object v1, Lcom/reyun/tracking/utils/d;->a:Ljava/lang/Runnable;

    const-wide/32 v2, 0xea60

    invoke-virtual {v0, v1, v2, v3}, Lcom/reyun/tracking/sdk/a;->a(Ljava/lang/Runnable;J)V

    :cond_1
    :goto_0
    return-void
.end method

.method public static a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/reyun/tracking/utils/n;)V
    .locals 1

    sget-boolean p0, Lcom/reyun/tracking/a/i;->c:Z

    if-eqz p0, :cond_0

    const/16 p0, 0x1a7f

    const-string p1, "slog.trackingio.com"

    invoke-static {p1, p0}, Lcom/reyun/tracking/utils/p;->a(Ljava/lang/String;I)Lcom/reyun/tracking/utils/p;

    move-result-object p0

    const/4 p1, 0x0

    new-instance v0, Lcom/reyun/tracking/utils/w;

    invoke-direct {v0, p3, p2}, Lcom/reyun/tracking/utils/w;-><init>(Lcom/reyun/tracking/utils/n;Ljava/lang/String;)V

    invoke-virtual {p0, p2, p1, v0}, Lcom/reyun/tracking/utils/p;->a(Ljava/lang/String;Ljava/lang/String;Lcom/reyun/tracking/utils/n;)Ljava/lang/Runnable;

    move-result-object p0

    goto :goto_0

    :cond_0
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string p1, "https://log.trackingio.com/"

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0, p3}, Lcom/reyun/tracking/utils/l;->a(Ljava/lang/String;Lcom/reyun/tracking/utils/n;)Ljava/lang/Runnable;

    move-result-object p0

    :goto_0
    invoke-static {}, Lcom/reyun/tracking/sdk/a;->a()Lcom/reyun/tracking/sdk/a;

    move-result-object p1

    invoke-virtual {p1, p0}, Lcom/reyun/tracking/sdk/a;->a(Ljava/lang/Runnable;)V

    invoke-static {}, Lcom/reyun/tracking/utils/d;->a()V

    return-void
.end method

.method public static a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;ILcom/reyun/tracking/utils/n;)V
    .locals 1

    invoke-static {p3, p0}, Lcom/reyun/tracking/a/h;->b(Lorg/json/JSONObject;Landroid/content/Context;)V

    invoke-static {p3, p0}, Lcom/reyun/tracking/a/h;->a(Lorg/json/JSONObject;Landroid/content/Context;)V

    sget-boolean p0, Lcom/reyun/tracking/a/i;->c:Z

    if-eqz p0, :cond_0

    const/16 p0, 0x1a7f

    const-string p4, "slog.trackingio.com"

    invoke-static {p4, p0}, Lcom/reyun/tracking/utils/p;->a(Ljava/lang/String;I)Lcom/reyun/tracking/utils/p;

    move-result-object p0

    invoke-virtual {p3}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p4

    new-instance v0, Lcom/reyun/tracking/utils/w;

    invoke-direct {v0, p5, p2}, Lcom/reyun/tracking/utils/w;-><init>(Lcom/reyun/tracking/utils/n;Ljava/lang/String;)V

    invoke-virtual {p0, p2, p4, v0}, Lcom/reyun/tracking/utils/p;->a(Ljava/lang/String;Ljava/lang/String;Lcom/reyun/tracking/utils/n;)Ljava/lang/Runnable;

    move-result-object p0

    goto :goto_0

    :cond_0
    invoke-static {p2}, Lcom/reyun/tracking/utils/d;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p3}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, v0, p4, p5}, Lcom/reyun/tracking/utils/l;->a(Ljava/lang/String;Ljava/lang/String;ILcom/reyun/tracking/utils/n;)Ljava/lang/Runnable;

    move-result-object p0

    :goto_0
    invoke-static {}, Lcom/reyun/tracking/sdk/Tracking;->getOnDataUploadListener()Lcom/reyun/tracking/sdk/p;

    move-result-object p4

    if-eqz p4, :cond_1

    const-string p4, "receive/tkio/sdklog"

    invoke-virtual {p4, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-nez p2, :cond_1

    invoke-static {}, Lcom/reyun/tracking/sdk/Tracking;->getOnDataUploadListener()Lcom/reyun/tracking/sdk/p;

    move-result-object p2

    invoke-virtual {p3}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-interface {p2, p1, p3}, Lcom/reyun/tracking/sdk/p;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    invoke-static {}, Lcom/reyun/tracking/sdk/a;->a()Lcom/reyun/tracking/sdk/a;

    move-result-object p1

    invoke-virtual {p1, p0}, Lcom/reyun/tracking/sdk/a;->a(Ljava/lang/Runnable;)V

    invoke-static {}, Lcom/reyun/tracking/utils/d;->a()V

    return-void
.end method

.method public static a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;Lcom/reyun/tracking/utils/n;)V
    .locals 3

    const-string v0, "data"

    invoke-virtual {p3, v0}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v0

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    :goto_0
    :try_start_0
    invoke-virtual {v0}, Lorg/json/JSONArray;->length()I

    move-result v2

    if-ge v1, v2, :cond_0

    invoke-virtual {v0, v1}, Lorg/json/JSONArray;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lorg/json/JSONObject;

    invoke-static {v2, p0}, Lcom/reyun/tracking/a/h;->b(Lorg/json/JSONObject;Landroid/content/Context;)V

    invoke-static {v2, p0}, Lcom/reyun/tracking/a/h;->a(Lorg/json/JSONObject;Landroid/content/Context;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :catch_0
    nop

    :cond_0
    sget-boolean p0, Lcom/reyun/tracking/a/i;->c:Z

    if-eqz p0, :cond_1

    const/16 p0, 0x1a7f

    const-string v0, "slog.trackingio.com"

    invoke-static {v0, p0}, Lcom/reyun/tracking/utils/p;->a(Ljava/lang/String;I)Lcom/reyun/tracking/utils/p;

    move-result-object p0

    invoke-virtual {p3}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Lcom/reyun/tracking/utils/w;

    invoke-direct {v1, p4, p2}, Lcom/reyun/tracking/utils/w;-><init>(Lcom/reyun/tracking/utils/n;Ljava/lang/String;)V

    invoke-virtual {p0, p2, v0, v1}, Lcom/reyun/tracking/utils/p;->a(Ljava/lang/String;Ljava/lang/String;Lcom/reyun/tracking/utils/n;)Ljava/lang/Runnable;

    move-result-object p0

    goto :goto_1

    :cond_1
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "https://log.trackingio.com/"

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p3}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x1

    invoke-static {p0, v0, v1, p4}, Lcom/reyun/tracking/utils/l;->a(Ljava/lang/String;Ljava/lang/String;ILcom/reyun/tracking/utils/n;)Ljava/lang/Runnable;

    move-result-object p0

    :goto_1
    invoke-static {}, Lcom/reyun/tracking/sdk/Tracking;->getOnDataUploadListener()Lcom/reyun/tracking/sdk/p;

    move-result-object p4

    if-eqz p4, :cond_2

    const-string p4, "receive/tkio/sdklog"

    invoke-virtual {p4, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-nez p2, :cond_2

    invoke-static {}, Lcom/reyun/tracking/sdk/Tracking;->getOnDataUploadListener()Lcom/reyun/tracking/sdk/p;

    move-result-object p2

    invoke-virtual {p3}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-interface {p2, p1, p3}, Lcom/reyun/tracking/sdk/p;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    invoke-static {}, Lcom/reyun/tracking/sdk/a;->a()Lcom/reyun/tracking/sdk/a;

    move-result-object p1

    invoke-virtual {p1, p0}, Lcom/reyun/tracking/sdk/a;->b(Ljava/lang/Runnable;)V

    invoke-static {}, Lcom/reyun/tracking/utils/d;->a()V

    return-void
.end method
