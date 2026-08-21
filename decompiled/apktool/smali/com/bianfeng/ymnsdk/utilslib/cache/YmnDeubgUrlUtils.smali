.class public Lcom/bianfeng/ymnsdk/utilslib/cache/YmnDeubgUrlUtils;
.super Ljava/lang/Object;
.source "YmnDeubgUrlUtils.java"


# static fields
.field private static volatile urlUtils:Lcom/bianfeng/ymnsdk/utilslib/cache/YmnDeubgUrlUtils;


# instance fields
.field private urlMap:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method private constructor <init>()V
    .locals 1

    .line 20
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 22
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/cache/YmnDeubgUrlUtils;->urlMap:Ljava/util/Map;

    .line 21
    return-void
.end method

.method public static getInstance()Lcom/bianfeng/ymnsdk/utilslib/cache/YmnDeubgUrlUtils;
    .locals 2

    .line 25
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/YmnDeubgUrlUtils;->urlUtils:Lcom/bianfeng/ymnsdk/utilslib/cache/YmnDeubgUrlUtils;

    if-nez v0, :cond_1

    .line 26
    const-class v0, Lcom/bianfeng/ymnsdk/utilslib/cache/YmnDeubgUrlUtils;

    monitor-enter v0

    .line 27
    :try_start_0
    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/cache/YmnDeubgUrlUtils;->urlUtils:Lcom/bianfeng/ymnsdk/utilslib/cache/YmnDeubgUrlUtils;

    if-nez v1, :cond_0

    .line 28
    new-instance v1, Lcom/bianfeng/ymnsdk/utilslib/cache/YmnDeubgUrlUtils;

    invoke-direct {v1}, Lcom/bianfeng/ymnsdk/utilslib/cache/YmnDeubgUrlUtils;-><init>()V

    sput-object v1, Lcom/bianfeng/ymnsdk/utilslib/cache/YmnDeubgUrlUtils;->urlUtils:Lcom/bianfeng/ymnsdk/utilslib/cache/YmnDeubgUrlUtils;

    .line 30
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 32
    :cond_1
    :goto_0
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/YmnDeubgUrlUtils;->urlUtils:Lcom/bianfeng/ymnsdk/utilslib/cache/YmnDeubgUrlUtils;

    return-object v0
.end method


# virtual methods
.method public getDebugUrl()Ljava/lang/String;
    .locals 4

    .line 41
    const-string v0, ""

    :try_start_0
    new-instance v1, Ljava/io/File;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/SDCardHelper;->getSDCardBaseDir()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v3, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ".bftj/sdk/ymnDebug"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 42
    .local v1, "file":Ljava/io/File;
    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v2

    if-nez v2, :cond_0

    .line 43
    return-object v0

    .line 45
    :cond_0
    new-instance v2, Ljava/util/Properties;

    invoke-direct {v2}, Ljava/util/Properties;-><init>()V

    .line 46
    .local v2, "properties":Ljava/util/Properties;
    new-instance v3, Ljava/io/FileInputStream;

    invoke-direct {v3, v1}, Ljava/io/FileInputStream;-><init>(Ljava/io/File;)V

    invoke-virtual {v2, v3}, Ljava/util/Properties;->load(Ljava/io/InputStream;)V

    .line 47
    const-string v3, "url_host_ymnsdk"

    invoke-virtual {v2, v3}, Ljava/util/Properties;->getProperty(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 48
    .end local v1    # "file":Ljava/io/File;
    .end local v2    # "properties":Ljava/util/Properties;
    :catch_0
    move-exception v1

    .line 49
    .local v1, "e":Ljava/lang/Exception;
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 50
    return-object v0
.end method

.method public getDebugUrl(Ljava/lang/String;)Ljava/lang/String;
    .locals 2
    .param p1, "key"    # Ljava/lang/String;

    .line 75
    :try_start_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/cache/YmnDeubgUrlUtils;->urlMap:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 76
    :catch_0
    move-exception v0

    .line 77
    .local v0, "e":Ljava/lang/Exception;
    const/4 v1, 0x0

    return-object v1
.end method

.method public initDebugUrl()V
    .locals 4

    .line 55
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/YmnDeubgUrlUtils;->getDebugUrl()Ljava/lang/String;

    move-result-object v0

    .line 56
    .local v0, "data":Ljava/lang/String;
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 57
    return-void

    .line 60
    :cond_0
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;->getGsonUtils()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->isJsonObject(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 61
    return-void

    .line 63
    :cond_1
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;->getGsonUtils()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getMapFrom(Ljava/lang/String;)Ljava/util/Map;

    move-result-object v1

    .line 64
    .local v1, "map":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;"
    const-string v2, "data"

    invoke-interface {v1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    .line 65
    .local v2, "urldata":Ljava/lang/Object;
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;->getGsonUtils()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v3

    invoke-virtual {v3, v2}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getMapFrom(Ljava/lang/Object;)Ljava/util/Map;

    move-result-object v3

    iput-object v3, p0, Lcom/bianfeng/ymnsdk/utilslib/cache/YmnDeubgUrlUtils;->urlMap:Ljava/util/Map;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 70
    .end local v1    # "map":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;"
    .end local v2    # "urldata":Ljava/lang/Object;
    nop

    .line 71
    return-void

    .line 66
    :catch_0
    move-exception v1

    .line 67
    .local v1, "e":Ljava/lang/Exception;
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 68
    const-string v2, "ymnsdk"

    const-string v3, "\u6d4b\u8bd5\u8def\u5f84\u683c\u5f0f\u914d\u7f6e\u9519\u8bef"

    invoke-static {v2, v3}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 69
    return-void
.end method
