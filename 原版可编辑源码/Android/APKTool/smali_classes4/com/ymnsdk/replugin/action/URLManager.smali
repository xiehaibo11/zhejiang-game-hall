.class public Lcom/ymnsdk/replugin/action/URLManager;
.super Ljava/lang/Object;
.source "URLManager.java"


# static fields
.field private static REQUSET_URL:Ljava/lang/String; = "https://plugin-res.imeete.com/res"

.field private static hostList:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 25
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    sput-object v0, Lcom/ymnsdk/replugin/action/URLManager;->hostList:Ljava/util/List;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 16
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static declared-synchronized getHost()Ljava/lang/String;
    .locals 6

    const-class v0, Lcom/ymnsdk/replugin/action/URLManager;

    monitor-enter v0

    .line 28
    :try_start_0
    invoke-static {}, Lcom/ymnsdk/replugin/action/URLManager;->initHost()V

    .line 29
    sget-object v1, Lcom/ymnsdk/replugin/action/URLManager;->hostList:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_0

    .line 31
    sget-object v1, Lcom/ymnsdk/replugin/action/URLManager;->hostList:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    .line 32
    invoke-static {}, Ljava/lang/Math;->random()D

    move-result-wide v2

    add-int/lit8 v1, v1, 0x0

    add-int/lit8 v1, v1, 0x1

    int-to-double v4, v1

    mul-double/2addr v2, v4

    double-to-int v1, v2

    add-int/lit8 v1, v1, 0x0

    .line 33
    sget-object v2, Lcom/ymnsdk/replugin/action/URLManager;->hostList:Ljava/util/List;

    invoke-interface {v2, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-object v1

    .line 36
    :cond_0
    :try_start_1
    invoke-static {}, Lcom/ymnsdk/replugin/util/ResourceUtil;->urlOnSdCard4Public()Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 37
    invoke-virtual {v1}, Ljava/lang/String;->isEmpty()Z

    move-result v2

    if-nez v2, :cond_1

    const-string v2, "ymn"

    .line 38
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "host is "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 39
    monitor-exit v0

    return-object v1

    :catch_0
    move-exception v1

    .line 42
    :try_start_2
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    const-string v1, "ymn"

    .line 44
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "host is "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v3, Lcom/ymnsdk/replugin/action/URLManager;->REQUSET_URL:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 45
    sget-object v1, Lcom/ymnsdk/replugin/action/URLManager;->REQUSET_URL:Ljava/lang/String;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method

.method private static initHost()V
    .locals 2

    .line 49
    sget-object v0, Lcom/ymnsdk/replugin/action/URLManager;->hostList:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    .line 51
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getUpdateServerAddress()Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 52
    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_0

    .line 54
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getListFrom(Ljava/lang/String;)Ljava/util/List;

    move-result-object v0

    sput-object v0, Lcom/ymnsdk/replugin/action/URLManager;->hostList:Ljava/util/List;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 56
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method
