.class public Lcom/reyun/tracking/b/h;
.super Ljava/lang/Object;


# instance fields
.field private a:Z

.field private b:J


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/reyun/tracking/b/h;->a:Z

    return-void
.end method

.method private static a(Ljava/lang/String;)Ljava/lang/String;
    .locals 8

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return-object v0

    :cond_0
    :try_start_0
    const-string v1, "android.os.SystemProperties"

    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    const-string v2, "get"

    const/4 v3, 0x2

    new-array v4, v3, [Ljava/lang/Class;

    const-class v5, Ljava/lang/String;

    const/4 v6, 0x0

    aput-object v5, v4, v6

    const-class v5, Ljava/lang/String;

    const/4 v7, 0x1

    aput-object v5, v4, v7

    invoke-virtual {v1, v2, v4}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v2

    new-array v3, v3, [Ljava/lang/Object;

    aput-object p0, v3, v6

    const-string p0, "unknown"

    aput-object p0, v3, v7

    invoke-virtual {v2, v1, v3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move-object v0, p0

    :catch_0
    return-object v0
.end method

.method private a(Landroid/content/Context;)V
    .locals 2

    const-string v0, "oaid_start"

    const/4 v1, 0x0

    invoke-static {p1, v0, v1}, Lcom/reyun/tracking/utils/c;->a(Landroid/content/Context;Ljava/lang/String;Ljava/util/Map;)V

    return-void
.end method

.method private a(Landroid/content/Context;Ljava/lang/String;Lcom/reyun/tracking/b/l;)V
    .locals 2

    new-instance v0, Ljava/lang/Thread;

    new-instance v1, Lcom/reyun/tracking/b/j;

    invoke-direct {v1, p0, p1, p3, p2}, Lcom/reyun/tracking/b/j;-><init>(Lcom/reyun/tracking/b/h;Landroid/content/Context;Lcom/reyun/tracking/b/l;Ljava/lang/String;)V

    invoke-direct {v0, v1}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    invoke-virtual {v0}, Ljava/lang/Thread;->start()V

    return-void
.end method

.method private a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
    .locals 5

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    iget-wide v3, p0, Lcom/reyun/tracking/b/h;->b:J

    sub-long/2addr v1, v3

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    const-string v2, "_oaid_interval_time"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "_oaid_code"

    invoke-interface {v0, v1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string p2, "_oaid_errmsg"

    invoke-interface {v0, p2, p3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string p2, "oaid_end"

    invoke-static {p1, p2, v0}, Lcom/reyun/tracking/utils/c;->a(Landroid/content/Context;Ljava/lang/String;Ljava/util/Map;)V

    return-void
.end method

.method private a(Landroid/content/Context;Ljava/lang/String;Z)V
    .locals 0

    invoke-static {p1, p2, p3}, Lcom/reyun/tracking/a/h;->a(Landroid/content/Context;Ljava/lang/String;Z)V

    return-void
.end method

.method static synthetic a(Lcom/reyun/tracking/b/h;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    invoke-direct {p0, p1, p2, p3}, Lcom/reyun/tracking/b/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic a(Lcom/reyun/tracking/b/h;Landroid/content/Context;Ljava/lang/String;Z)V
    .locals 0

    invoke-direct {p0, p1, p2, p3}, Lcom/reyun/tracking/b/h;->a(Landroid/content/Context;Ljava/lang/String;Z)V

    return-void
.end method

.method static synthetic a(Lcom/reyun/tracking/b/h;Lcom/reyun/tracking/b/l;Ljava/lang/String;Z)V
    .locals 0

    invoke-direct {p0, p1, p2, p3}, Lcom/reyun/tracking/b/h;->a(Lcom/reyun/tracking/b/l;Ljava/lang/String;Z)V

    return-void
.end method

.method private a(Lcom/reyun/tracking/b/l;Ljava/lang/String;Z)V
    .locals 1

    iget-boolean v0, p0, Lcom/reyun/tracking/b/h;->a:Z

    if-nez v0, :cond_0

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/reyun/tracking/b/h;->a:Z

    if-eqz p1, :cond_0

    invoke-interface {p1, p2, p3}, Lcom/reyun/tracking/b/l;->a(Ljava/lang/String;Z)V

    :cond_0
    return-void
.end method

.method public static a()Z
    .locals 2

    const-string v0, "ro.build.freeme.label"

    invoke-static {v0}, Lcom/reyun/tracking/b/h;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    const-string v1, "FREEMEOS"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method static synthetic a(Lcom/reyun/tracking/b/h;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/reyun/tracking/b/h;->a:Z

    return p0
.end method

.method public static b()Z
    .locals 2

    const-string v0, "ro.ssui.product"

    invoke-static {v0}, Lcom/reyun/tracking/b/h;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    const-string v1, "unknown"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method


# virtual methods
.method public a(Landroid/content/Context;Lcom/reyun/tracking/b/l;)V
    .locals 20

    move-object/from16 v1, p0

    move-object/from16 v2, p1

    move-object/from16 v3, p2

    const-string v0, ""

    const-string v4, "unknown"

    const-string v5, "TrackingIO"

    const/4 v6, 0x0

    :try_start_0
    const-string v7, "tracking_device_id_cache"

    const-string v8, "oaid"

    invoke-static {v2, v7, v8, v0}, Lcom/reyun/tracking/utils/f;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "spOaid :"

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-static {v5, v8}, Lcom/reyun/tracking/a/a;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v8

    if-nez v8, :cond_0

    invoke-virtual {v4, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v8

    if-nez v8, :cond_0

    const-string v8, "^[0]+-[0]+-[0]+-[0]+-[0]+$"

    invoke-static {v8, v7}, Ljava/util/regex/Pattern;->matches(Ljava/lang/String;Ljava/lang/CharSequence;)Z

    move-result v8

    if-nez v8, :cond_0

    const-string v8, "^[0]+$"

    invoke-static {v8, v7}, Ljava/util/regex/Pattern;->matches(Ljava/lang/String;Ljava/lang/CharSequence;)Z

    move-result v8

    if-nez v8, :cond_0

    const-string v0, "sp\u6709oaid"

    invoke-static {v5, v0}, Lcom/reyun/tracking/a/a;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-direct {v1, v2, v7, v6}, Lcom/reyun/tracking/b/h;->a(Landroid/content/Context;Ljava/lang/String;Z)V

    invoke-direct {v1, v3, v7, v6}, Lcom/reyun/tracking/b/h;->a(Lcom/reyun/tracking/b/l;Ljava/lang/String;Z)V

    return-void

    :cond_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v7

    iput-wide v7, v1, Lcom/reyun/tracking/b/h;->b:J

    invoke-direct/range {p0 .. p1}, Lcom/reyun/tracking/b/h;->a(Landroid/content/Context;)V

    new-instance v7, Lcom/reyun/tracking/b/m;

    invoke-direct {v7, v2}, Lcom/reyun/tracking/b/m;-><init>(Landroid/content/Context;)V

    iget-object v7, v7, Lcom/reyun/tracking/b/m;->b:Ljava/lang/String;

    invoke-static {}, Lcom/reyun/tracking/sdk/a;->a()Lcom/reyun/tracking/sdk/a;

    move-result-object v8

    new-instance v9, Lcom/reyun/tracking/b/i;

    invoke-direct {v9, v1, v3}, Lcom/reyun/tracking/b/i;-><init>(Lcom/reyun/tracking/b/h;Lcom/reyun/tracking/b/l;)V

    const-wide/16 v10, 0x1388

    invoke-virtual {v8, v9, v10, v11}, Lcom/reyun/tracking/sdk/a;->a(Ljava/lang/Runnable;J)V

    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v8

    if-nez v8, :cond_1

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "oaid realTime:"

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-static {v5, v8}, Lcom/reyun/tracking/a/a;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-direct {v1, v2, v7, v6}, Lcom/reyun/tracking/b/h;->a(Landroid/content/Context;Ljava/lang/String;Z)V

    invoke-direct {v1, v3, v7, v6}, Lcom/reyun/tracking/b/h;->a(Lcom/reyun/tracking/b/l;Ljava/lang/String;Z)V

    const-string v7, "100001"

    invoke-direct {v1, v2, v7, v0}, Lcom/reyun/tracking/b/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_1
    sget-object v7, Landroid/os/Build;->MANUFACTURER:Ljava/lang/String;

    invoke-static {}, Lcom/reyun/tracking/b/h;->a()Z

    move-result v8

    if-eqz v8, :cond_2

    const-string v7, "FERRMEOS"

    goto :goto_0

    :cond_2
    invoke-static {}, Lcom/reyun/tracking/b/h;->b()Z

    move-result v8

    if-eqz v8, :cond_3

    const-string v7, "SSUI"

    :cond_3
    :goto_0
    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v8

    if-nez v8, :cond_7

    invoke-virtual {v7}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object v7

    const-string v8, "ASUS"

    const-string v9, "HUAWEI"

    const-string v10, "HONOR"

    const-string v11, "OPPO"

    const-string v12, "ONEPLUS"

    const-string v13, "ZTE"

    const-string v14, "FERRMEOS"

    const-string v15, "SSUI"

    const-string v16, "SAMSUNG"

    const-string v17, "MEIZU"

    const-string v18, "MOTOLORA"

    const-string v19, "LENOVO"

    filled-new-array/range {v8 .. v19}, [Ljava/lang/String;

    move-result-object v8

    invoke-static {v8}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v8

    invoke-interface {v8, v7}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v8

    if-eqz v8, :cond_4

    invoke-direct {v1, v2, v7, v3}, Lcom/reyun/tracking/b/h;->a(Landroid/content/Context;Ljava/lang/String;Lcom/reyun/tracking/b/l;)V

    goto/16 :goto_3

    :cond_4
    const-string v8, "VIVO"

    invoke-virtual {v8, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v8
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v9, "100002"

    if-eqz v8, :cond_5

    :try_start_1
    new-instance v7, Lcom/reyun/tracking/b/a/m;

    invoke-direct {v7, v2}, Lcom/reyun/tracking/b/a/m;-><init>(Landroid/content/Context;)V

    invoke-virtual {v7}, Lcom/reyun/tracking/b/a/m;->a()Ljava/lang/String;

    move-result-object v7

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v10, "oaid vivo:"

    invoke-virtual {v8, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-static {v5, v8}, Lcom/reyun/tracking/a/a;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-direct {v1, v2, v7, v6}, Lcom/reyun/tracking/b/h;->a(Landroid/content/Context;Ljava/lang/String;Z)V

    invoke-direct {v1, v3, v7, v6}, Lcom/reyun/tracking/b/h;->a(Lcom/reyun/tracking/b/l;Ljava/lang/String;Z)V

    :goto_1
    invoke-direct {v1, v2, v9, v0}, Lcom/reyun/tracking/b/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_3

    :cond_5
    const-string v8, "NUBIA"

    invoke-virtual {v8, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_6

    new-instance v7, Lcom/reyun/tracking/b/a/f;

    invoke-direct {v7, v2}, Lcom/reyun/tracking/b/a/f;-><init>(Landroid/content/Context;)V

    invoke-virtual {v7}, Lcom/reyun/tracking/b/a/f;->a()Ljava/lang/String;

    move-result-object v7

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v10, "oaid NUBIA:"

    invoke-virtual {v8, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-static {v5, v8}, Lcom/reyun/tracking/a/a;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-direct {v1, v2, v7, v6}, Lcom/reyun/tracking/b/h;->a(Landroid/content/Context;Ljava/lang/String;Z)V

    invoke-direct {v1, v3, v7, v6}, Lcom/reyun/tracking/b/h;->a(Lcom/reyun/tracking/b/l;Ljava/lang/String;Z)V

    goto :goto_1

    :cond_6
    const-string v0, "oaid error:unknown manufacturer"

    invoke-static {v5, v0}, Lcom/reyun/tracking/a/a;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-direct {v1, v2, v4, v6}, Lcom/reyun/tracking/b/h;->a(Landroid/content/Context;Ljava/lang/String;Z)V

    invoke-direct {v1, v3, v4, v6}, Lcom/reyun/tracking/b/h;->a(Lcom/reyun/tracking/b/l;Ljava/lang/String;Z)V

    const-string v0, "100006"

    const-string v7, "unknown manufacturer"

    :goto_2
    invoke-direct {v1, v2, v0, v7}, Lcom/reyun/tracking/b/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_3

    :cond_7
    const-string v0, "oaid error:manufacturer is empty"

    invoke-static {v5, v0}, Lcom/reyun/tracking/a/a;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-direct {v1, v3, v4, v6}, Lcom/reyun/tracking/b/h;->a(Lcom/reyun/tracking/b/l;Ljava/lang/String;Z)V

    const-string v0, "100007"

    const-string v7, "manufacturer is empty"
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    const-string v0, "oaid error:unknown"

    invoke-static {v5, v0}, Lcom/reyun/tracking/a/a;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-direct {v1, v3, v4, v6}, Lcom/reyun/tracking/b/h;->a(Lcom/reyun/tracking/b/l;Ljava/lang/String;Z)V

    const-string v0, "100004"

    invoke-direct {v1, v2, v0, v4}, Lcom/reyun/tracking/b/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    :goto_3
    return-void
.end method
