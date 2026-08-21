.class public Lcom/sigmob/sdk/base/services/e;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/base/services/j$a;


# static fields
.field private static final a:Landroid/location/LocationListener;

.field private static b:Landroid/location/LocationManager;

.field private static c:Ljava/lang/String;


# instance fields
.field private d:Lcom/sigmob/sdk/base/services/k;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Lcom/sigmob/sdk/base/services/e$1;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/services/e$1;-><init>()V

    sput-object v0, Lcom/sigmob/sdk/base/services/e;->a:Landroid/location/LocationListener;

    const-string v0, "network"

    sput-object v0, Lcom/sigmob/sdk/base/services/e;->c:Ljava/lang/String;

    return-void
.end method

.method constructor <init>()V
    .locals 4

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    sget-object v0, Lcom/sigmob/sdk/base/services/k;->b:Lcom/sigmob/sdk/base/services/k;

    iput-object v0, p0, Lcom/sigmob/sdk/base/services/e;->d:Lcom/sigmob/sdk/base/services/k;

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    invoke-static {}, Lcom/sigmob/sdk/base/services/e;->a()Landroid/location/LocationManager;

    move-result-object v0

    if-eqz v0, :cond_1

    new-instance v1, Landroid/location/Criteria;

    invoke-direct {v1}, Landroid/location/Criteria;-><init>()V

    const/4 v2, 0x2

    invoke-virtual {v1, v2}, Landroid/location/Criteria;->setAccuracy(I)V

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Landroid/location/Criteria;->setAltitudeRequired(Z)V

    invoke-virtual {v1, v2}, Landroid/location/Criteria;->setBearingRequired(Z)V

    invoke-virtual {v1, v2}, Landroid/location/Criteria;->setCostAllowed(Z)V

    const/4 v3, 0x1

    invoke-virtual {v1, v3}, Landroid/location/Criteria;->setPowerRequirement(I)V

    invoke-virtual {v0, v1, v2}, Landroid/location/LocationManager;->getBestProvider(Landroid/location/Criteria;Z)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/sigmob/sdk/base/services/e;->c:Ljava/lang/String;

    :cond_1
    return-void
.end method

.method static a()Landroid/location/LocationManager;
    .locals 2

    sget-object v0, Lcom/sigmob/sdk/base/services/e;->b:Landroid/location/LocationManager;

    if-nez v0, :cond_1

    const-class v0, Lcom/sigmob/sdk/base/services/e;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/sigmob/sdk/base/services/e;->b:Landroid/location/LocationManager;

    if-nez v1, :cond_0

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v1

    invoke-virtual {v1}, Lcom/czhj/sdk/common/ClientMetadata;->getLocationManager()Landroid/location/LocationManager;

    move-result-object v1

    sput-object v1, Lcom/sigmob/sdk/base/services/e;->b:Landroid/location/LocationManager;

    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    :cond_1
    :goto_0
    sget-object v0, Lcom/sigmob/sdk/base/services/e;->b:Landroid/location/LocationManager;

    return-object v0
.end method

.method private f()V
    .locals 2

    :try_start_0
    sget-object v0, Lcom/sigmob/sdk/base/services/e;->b:Landroid/location/LocationManager;

    if-eqz v0, :cond_0

    sget-object v0, Lcom/sigmob/sdk/base/services/e;->b:Landroid/location/LocationManager;

    sget-object v1, Lcom/sigmob/sdk/base/services/e;->a:Landroid/location/LocationListener;

    invoke-virtual {v0, v1}, Landroid/location/LocationManager;->removeUpdates(Landroid/location/LocationListener;)V

    :cond_0
    const/4 v0, 0x0

    sput-object v0, Lcom/sigmob/sdk/base/services/e;->b:Landroid/location/LocationManager;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method private g()V
    .locals 6

    :try_start_0
    invoke-static {}, Lcom/sigmob/sdk/base/services/e;->a()Landroid/location/LocationManager;

    move-result-object v0

    if-eqz v0, :cond_0

    sget-object v1, Lcom/sigmob/sdk/base/services/e;->c:Ljava/lang/String;

    if-eqz v1, :cond_0

    sget-object v1, Lcom/sigmob/sdk/base/services/e;->c:Ljava/lang/String;

    invoke-virtual {v0, v1}, Landroid/location/LocationManager;->isProviderEnabled(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_0

    const-string v1, "private :use_location "

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    sget-object v1, Lcom/sigmob/sdk/base/services/e;->c:Ljava/lang/String;

    const-wide/16 v2, 0x2710

    const/high16 v4, 0x41200000    # 10.0f

    sget-object v5, Lcom/sigmob/sdk/base/services/e;->a:Landroid/location/LocationListener;

    invoke-virtual/range {v0 .. v5}, Landroid/location/LocationManager;->requestLocationUpdates(Ljava/lang/String;JFLandroid/location/LocationListener;)V

    sget-object v0, Lcom/sigmob/sdk/base/services/k;->a:Lcom/sigmob/sdk/base/services/k;

    iput-object v0, p0, Lcom/sigmob/sdk/base/services/e;->d:Lcom/sigmob/sdk/base/services/k;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method


# virtual methods
.method public b()Z
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/base/services/e;->d:Lcom/sigmob/sdk/base/services/k;

    sget-object v1, Lcom/sigmob/sdk/base/services/k;->a:Lcom/sigmob/sdk/base/services/k;

    if-eq v0, v1, :cond_0

    invoke-direct {p0}, Lcom/sigmob/sdk/base/services/e;->g()V

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public c()Lcom/sigmob/sdk/base/services/k;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/services/e;->d:Lcom/sigmob/sdk/base/services/k;

    return-object v0
.end method

.method public d()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/base/services/e;->d:Lcom/sigmob/sdk/base/services/k;

    sget-object v1, Lcom/sigmob/sdk/base/services/k;->a:Lcom/sigmob/sdk/base/services/k;

    if-ne v0, v1, :cond_0

    invoke-direct {p0}, Lcom/sigmob/sdk/base/services/e;->f()V

    sget-object v0, Lcom/sigmob/sdk/base/services/k;->b:Lcom/sigmob/sdk/base/services/k;

    iput-object v0, p0, Lcom/sigmob/sdk/base/services/e;->d:Lcom/sigmob/sdk/base/services/k;

    :cond_0
    return-void
.end method

.method public e()Ljava/lang/Error;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method
