.class public Lcom/tkay/network/adx/AdxTYInitManager;
.super Lcom/tkay/core/api/TYInitMediation;


# static fields
.field private static volatile a:Lcom/tkay/network/adx/AdxTYInitManager;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 12
    invoke-direct {p0}, Lcom/tkay/core/api/TYInitMediation;-><init>()V

    return-void
.end method

.method public static getInstance()Lcom/tkay/network/adx/AdxTYInitManager;
    .locals 2

    .line 17
    sget-object v0, Lcom/tkay/network/adx/AdxTYInitManager;->a:Lcom/tkay/network/adx/AdxTYInitManager;

    if-nez v0, :cond_1

    .line 18
    const-class v0, Lcom/tkay/network/adx/AdxTYInitManager;

    monitor-enter v0

    .line 19
    :try_start_0
    sget-object v1, Lcom/tkay/network/adx/AdxTYInitManager;->a:Lcom/tkay/network/adx/AdxTYInitManager;

    if-nez v1, :cond_0

    .line 20
    new-instance v1, Lcom/tkay/network/adx/AdxTYInitManager;

    invoke-direct {v1}, Lcom/tkay/network/adx/AdxTYInitManager;-><init>()V

    sput-object v1, Lcom/tkay/network/adx/AdxTYInitManager;->a:Lcom/tkay/network/adx/AdxTYInitManager;

    .line 21
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1

    .line 23
    :cond_1
    :goto_0
    sget-object v0, Lcom/tkay/network/adx/AdxTYInitManager;->a:Lcom/tkay/network/adx/AdxTYInitManager;

    return-object v0
.end method


# virtual methods
.method public getNetworkName()Ljava/lang/String;
    .locals 1

    const-string v0, "Adx"

    return-object v0
.end method

.method public getNetworkSDKClass()Ljava/lang/String;
    .locals 1

    const-string v0, "com.tkay.core.api.TYSDK"

    return-object v0
.end method

.method public getResourceStatus()Ljava/util/List;
    .locals 2

    .line 43
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    const-string v1, "tkay_myoffer_full_screen"

    .line 46
    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    const-string v1, "tkay_myoffer_splash_ad_layout_asseblem_vertical_port"

    .line 49
    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    return-object v0
.end method

.method public initSDK(Landroid/content/Context;Ljava/util/Map;Lcom/tkay/core/api/MediationInitCallback;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;",
            "Lcom/tkay/core/api/MediationInitCallback;",
            ")V"
        }
    .end annotation

    return-void
.end method
