.class public Lcom/reyun/tracking/utils/s;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/reyun/tracking/utils/n;


# instance fields
.field private a:Landroid/content/Context;

.field private b:Ljava/lang/String;

.field private c:J

.field private d:Ljava/util/Map;

.field private e:Z


# direct methods
.method public constructor <init>(Ljava/lang/String;Landroid/content/Context;JLjava/util/Map;)V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-wide/16 v0, -0x1

    iput-wide v0, p0, Lcom/reyun/tracking/utils/s;->c:J

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/reyun/tracking/utils/s;->e:Z

    iput-object p2, p0, Lcom/reyun/tracking/utils/s;->a:Landroid/content/Context;

    iput-object p1, p0, Lcom/reyun/tracking/utils/s;->b:Ljava/lang/String;

    iput-wide p3, p0, Lcom/reyun/tracking/utils/s;->c:J

    iput-object p5, p0, Lcom/reyun/tracking/utils/s;->d:Ljava/util/Map;

    return-void
.end method

.method static synthetic a(Lcom/reyun/tracking/utils/s;)Ljava/util/Map;
    .locals 0

    iget-object p0, p0, Lcom/reyun/tracking/utils/s;->d:Ljava/util/Map;

    return-object p0
.end method

.method private a()V
    .locals 2

    invoke-static {}, Lcom/reyun/tracking/sdk/Tracking;->getDataShareRunnable()Ljava/lang/Runnable;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/reyun/tracking/sdk/a;->a()Lcom/reyun/tracking/sdk/a;

    move-result-object v0

    invoke-static {}, Lcom/reyun/tracking/sdk/Tracking;->getDataShareRunnable()Ljava/lang/Runnable;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/reyun/tracking/sdk/a;->a(Ljava/lang/Runnable;)V

    invoke-static {}, Lcom/reyun/tracking/sdk/Tracking;->removeDataShareRunnable()V

    :cond_0
    return-void
.end method

.method static synthetic b(Lcom/reyun/tracking/utils/s;)Landroid/content/Context;
    .locals 0

    iget-object p0, p0, Lcom/reyun/tracking/utils/s;->a:Landroid/content/Context;

    return-object p0
.end method

.method private b()V
    .locals 5

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "appid"

    invoke-static {}, Lcom/reyun/tracking/sdk/Tracking;->getAppId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "device_id"

    invoke-static {}, Lcom/reyun/tracking/sdk/Tracking;->getDeviceId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "create_timestamp"

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, ""

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    invoke-virtual {v2, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    invoke-virtual {v1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    new-instance v1, Lcom/reyun/tracking/utils/u;

    invoke-direct {v1, p0}, Lcom/reyun/tracking/utils/u;-><init>(Lcom/reyun/tracking/utils/s;)V

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "https://link.trackingio.com/dpquery"

    const-string v4, "application/json"

    invoke-static {v3, v4, v2, v1}, Lcom/reyun/tracking/utils/l;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/reyun/tracking/utils/n;)Ljava/lang/Runnable;

    move-result-object v1

    check-cast v1, Lcom/reyun/tracking/utils/o;

    const/4 v2, 0x0

    invoke-static {v2}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/reyun/tracking/utils/o;->a(Ljava/lang/Boolean;)V

    const/16 v2, 0x3e8

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/reyun/tracking/utils/o;->a(Ljava/lang/Integer;)V

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/reyun/tracking/utils/o;->b(Ljava/lang/Integer;)V

    invoke-static {}, Lcom/reyun/tracking/sdk/Tracking;->getOnDataUploadListener()Lcom/reyun/tracking/sdk/p;

    move-result-object v2

    if-eqz v2, :cond_0

    invoke-static {}, Lcom/reyun/tracking/sdk/Tracking;->getOnDataUploadListener()Lcom/reyun/tracking/sdk/p;

    move-result-object v2

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v3, "dpquery"

    invoke-interface {v2, v3, v0}, Lcom/reyun/tracking/sdk/p;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    invoke-static {}, Lcom/reyun/tracking/sdk/a;->a()Lcom/reyun/tracking/sdk/a;

    move-result-object v0

    const-wide/16 v2, 0x7d0

    invoke-virtual {v0, v1, v2, v3}, Lcom/reyun/tracking/sdk/a;->a(Ljava/lang/Runnable;J)V

    return-void
.end method

.method private c()V
    .locals 4

    invoke-static {}, Lcom/reyun/tracking/sdk/Tracking;->getAttributionQueryListener()Lcom/reyun/tracking/utils/IAttributionQueryListener;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    new-instance v0, Lcom/reyun/tracking/utils/v;

    invoke-direct {v0, p0}, Lcom/reyun/tracking/utils/v;-><init>(Lcom/reyun/tracking/utils/s;)V

    invoke-static {}, Lcom/reyun/tracking/sdk/a;->a()Lcom/reyun/tracking/sdk/a;

    move-result-object v1

    const-wide/16 v2, 0x3e8

    invoke-virtual {v1, v0, v2, v3}, Lcom/reyun/tracking/sdk/a;->a(Ljava/lang/Runnable;J)V

    return-void
.end method


# virtual methods
.method public a(ILjava/lang/Object;)V
    .locals 4

    iget-object p1, p0, Lcom/reyun/tracking/utils/s;->b:Ljava/lang/String;

    invoke-static {p1}, Lcom/reyun/tracking/a/a;->b(Ljava/lang/String;)Z

    move-result p1

    if-nez p1, :cond_2

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "========Request SUCCESS======== event["

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/reyun/tracking/utils/s;->b:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "]"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "Tracking"

    invoke-static {v0, p1}, Lcom/reyun/tracking/a/a;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object p1, p0, Lcom/reyun/tracking/utils/s;->b:Ljava/lang/String;

    const-string v0, "install"

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    invoke-static {p1}, Lcom/reyun/tracking/sdk/Tracking;->setIsInstallSent(Z)V

    iget-object p1, p0, Lcom/reyun/tracking/utils/s;->a:Landroid/content/Context;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    const-string v2, "tracking_install"

    const-string v3, "key_install_send_success_time"

    invoke-static {p1, v2, v3, v0, v1}, Lcom/reyun/tracking/utils/f;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;J)V

    invoke-static {}, Lcom/reyun/tracking/sdk/a;->a()Lcom/reyun/tracking/sdk/a;

    move-result-object p1

    new-instance v0, Lcom/reyun/tracking/utils/t;

    invoke-direct {v0, p0}, Lcom/reyun/tracking/utils/t;-><init>(Lcom/reyun/tracking/utils/s;)V

    const-wide/16 v1, 0x7d0

    invoke-virtual {p1, v0, v1, v2}, Lcom/reyun/tracking/sdk/a;->a(Ljava/lang/Runnable;J)V

    invoke-direct {p0}, Lcom/reyun/tracking/utils/s;->c()V

    invoke-direct {p0}, Lcom/reyun/tracking/utils/s;->b()V

    goto :goto_0

    :cond_0
    iget-object p1, p0, Lcom/reyun/tracking/utils/s;->b:Ljava/lang/String;

    const-string v0, "batch"

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    :goto_0
    invoke-direct {p0}, Lcom/reyun/tracking/utils/s;->a()V

    iget-wide v0, p0, Lcom/reyun/tracking/utils/s;->c:J

    const-wide/16 v2, 0x0

    cmp-long p1, v0, v2

    if-ltz p1, :cond_1

    iget-object p1, p0, Lcom/reyun/tracking/utils/s;->a:Landroid/content/Context;

    const-string v0, "TrackingIO"

    invoke-static {p1, v0}, Lcom/reyun/tracking/utils/i;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/reyun/tracking/utils/i;

    move-result-object p1

    iget-wide v0, p0, Lcom/reyun/tracking/utils/s;->c:J

    invoke-static {v0, v1}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/reyun/tracking/utils/i;->a(Ljava/lang/String;)V

    :cond_1
    invoke-static {}, Lcom/reyun/tracking/sdk/Tracking;->getOnDataUploadListener()Lcom/reyun/tracking/sdk/p;

    move-result-object p1

    if-eqz p1, :cond_2

    iget-boolean p1, p0, Lcom/reyun/tracking/utils/s;->e:Z

    if-eqz p1, :cond_2

    invoke-static {}, Lcom/reyun/tracking/sdk/Tracking;->getOnDataUploadListener()Lcom/reyun/tracking/sdk/p;

    move-result-object p1

    iget-object v0, p0, Lcom/reyun/tracking/utils/s;->b:Ljava/lang/String;

    invoke-virtual {p2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-interface {p1, v0, p2}, Lcom/reyun/tracking/sdk/p;->b(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    return-void
.end method

.method public a(Ljava/lang/Throwable;Ljava/lang/String;)V
    .locals 2

    if-eqz p2, :cond_1

    const-string p1, ""

    invoke-virtual {p2, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    goto :goto_0

    :cond_0
    iget-object p1, p0, Lcom/reyun/tracking/utils/s;->a:Landroid/content/Context;

    const-string p2, "TrackingIO"

    invoke-static {p1, p2}, Lcom/reyun/tracking/utils/i;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/reyun/tracking/utils/i;

    move-result-object p1

    iget-wide v0, p0, Lcom/reyun/tracking/utils/s;->c:J

    invoke-static {v0, v1}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object p2

    const/4 v0, 0x0

    invoke-virtual {p1, p2, v0}, Lcom/reyun/tracking/utils/i;->b(Ljava/lang/String;I)V

    iget-object p1, p0, Lcom/reyun/tracking/utils/s;->b:Ljava/lang/String;

    invoke-static {p1}, Lcom/reyun/tracking/a/a;->b(Ljava/lang/String;)Z

    move-result p1

    if-nez p1, :cond_1

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "********Request FAILED******** event["

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p2, p0, Lcom/reyun/tracking/utils/s;->b:Ljava/lang/String;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, "]"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "Tracking"

    invoke-static {p2, p1}, Lcom/reyun/tracking/a/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public a(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/reyun/tracking/utils/s;->e:Z

    return-void
.end method
