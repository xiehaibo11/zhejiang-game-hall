.class public Lcom/bianfeng/addpermission/common/ReadAssetsFileUtils;
.super Ljava/lang/Object;
.source "ReadAssetsFileUtils.java"


# static fields
.field private static volatile fileUtils:Lcom/bianfeng/addpermission/common/ReadAssetsFileUtils;


# instance fields
.field private fileName:Ljava/lang/String;

.field private hasRead:Z

.field private sb:Ljava/lang/StringBuilder;


# direct methods
.method private constructor <init>()V
    .locals 1

    .line 24
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "ymn_private_data"

    .line 26
    iput-object v0, p0, Lcom/bianfeng/addpermission/common/ReadAssetsFileUtils;->fileName:Ljava/lang/String;

    const/4 v0, 0x0

    .line 27
    iput-boolean v0, p0, Lcom/bianfeng/addpermission/common/ReadAssetsFileUtils;->hasRead:Z

    return-void
.end method

.method public static getInstance()Lcom/bianfeng/addpermission/common/ReadAssetsFileUtils;
    .locals 2

    .line 31
    sget-object v0, Lcom/bianfeng/addpermission/common/ReadAssetsFileUtils;->fileUtils:Lcom/bianfeng/addpermission/common/ReadAssetsFileUtils;

    if-nez v0, :cond_1

    .line 33
    const-class v0, Lcom/bianfeng/addpermission/common/ReadAssetsFileUtils;

    monitor-enter v0

    .line 34
    :try_start_0
    sget-object v1, Lcom/bianfeng/addpermission/common/ReadAssetsFileUtils;->fileUtils:Lcom/bianfeng/addpermission/common/ReadAssetsFileUtils;

    if-nez v1, :cond_0

    .line 35
    new-instance v1, Lcom/bianfeng/addpermission/common/ReadAssetsFileUtils;

    invoke-direct {v1}, Lcom/bianfeng/addpermission/common/ReadAssetsFileUtils;-><init>()V

    sput-object v1, Lcom/bianfeng/addpermission/common/ReadAssetsFileUtils;->fileUtils:Lcom/bianfeng/addpermission/common/ReadAssetsFileUtils;

    .line 37
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 39
    :cond_1
    :goto_0
    sget-object v0, Lcom/bianfeng/addpermission/common/ReadAssetsFileUtils;->fileUtils:Lcom/bianfeng/addpermission/common/ReadAssetsFileUtils;

    return-object v0
.end method


# virtual methods
.method public init(Landroid/content/Context;)V
    .locals 5

    .line 45
    iget-boolean v0, p0, Lcom/bianfeng/addpermission/common/ReadAssetsFileUtils;->hasRead:Z

    if-nez v0, :cond_6

    const/4 v0, 0x0

    .line 49
    :try_start_0
    invoke-virtual {p1}, Landroid/content/Context;->getAssets()Landroid/content/res/AssetManager;

    move-result-object p1

    iget-object v1, p0, Lcom/bianfeng/addpermission/common/ReadAssetsFileUtils;->fileName:Ljava/lang/String;

    invoke-virtual {p1, v1}, Landroid/content/res/AssetManager;->open(Ljava/lang/String;)Ljava/io/InputStream;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_4
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-nez p1, :cond_1

    if-eqz p1, :cond_0

    .line 75
    :try_start_1
    invoke-virtual {p1}, Ljava/io/InputStream;->close()V
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 77
    invoke-virtual {p1}, Ljava/io/IOException;->printStackTrace()V

    :cond_0
    :goto_0
    return-void

    .line 53
    :cond_1
    :try_start_2
    new-instance v1, Ljava/io/BufferedReader;

    new-instance v2, Ljava/io/InputStreamReader;

    invoke-direct {v2, p1}, Ljava/io/InputStreamReader;-><init>(Ljava/io/InputStream;)V

    invoke-direct {v1, v2}, Ljava/io/BufferedReader;-><init>(Ljava/io/Reader;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_3
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 55
    :try_start_3
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/addpermission/common/ReadAssetsFileUtils;->sb:Ljava/lang/StringBuilder;

    .line 57
    :goto_1
    invoke-virtual {v1}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 58
    iget-object v2, p0, Lcom/bianfeng/addpermission/common/ReadAssetsFileUtils;->sb:Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_1

    :cond_2
    const/4 v0, 0x1

    .line 60
    iput-boolean v0, p0, Lcom/bianfeng/addpermission/common/ReadAssetsFileUtils;->hasRead:Z

    .line 61
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "\u6d4b\u8bd5---------"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/bianfeng/addpermission/common/ReadAssetsFileUtils;->sb:Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_2
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    .line 68
    :try_start_4
    invoke-virtual {v1}, Ljava/io/BufferedReader;->close()V
    :try_end_4
    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_4} :catch_1

    goto :goto_2

    :catch_1
    move-exception v0

    .line 70
    invoke-virtual {v0}, Ljava/io/IOException;->printStackTrace()V

    :goto_2
    if-eqz p1, :cond_6

    .line 75
    :try_start_5
    invoke-virtual {p1}, Ljava/io/InputStream;->close()V
    :try_end_5
    .catch Ljava/io/IOException; {:try_start_5 .. :try_end_5} :catch_6

    goto/16 :goto_8

    :catch_2
    move-exception v0

    goto :goto_3

    :catchall_0
    move-exception v1

    move-object v4, v1

    move-object v1, v0

    move-object v0, v4

    goto :goto_5

    :catch_3
    move-exception v1

    move-object v4, v1

    move-object v1, v0

    move-object v0, v4

    goto :goto_3

    :catchall_1
    move-exception p1

    move-object v1, v0

    move-object v0, p1

    move-object p1, v1

    goto :goto_5

    :catch_4
    move-exception p1

    move-object v1, v0

    move-object v0, p1

    move-object p1, v1

    .line 64
    :goto_3
    :try_start_6
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "\u6d4b\u8bd5\uff1a"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_2

    if-eqz v1, :cond_3

    .line 68
    :try_start_7
    invoke-virtual {v1}, Ljava/io/BufferedReader;->close()V
    :try_end_7
    .catch Ljava/io/IOException; {:try_start_7 .. :try_end_7} :catch_5

    goto :goto_4

    :catch_5
    move-exception v0

    .line 70
    invoke-virtual {v0}, Ljava/io/IOException;->printStackTrace()V

    :cond_3
    :goto_4
    if-eqz p1, :cond_6

    .line 75
    :try_start_8
    invoke-virtual {p1}, Ljava/io/InputStream;->close()V
    :try_end_8
    .catch Ljava/io/IOException; {:try_start_8 .. :try_end_8} :catch_6

    goto :goto_8

    :catch_6
    move-exception p1

    .line 77
    invoke-virtual {p1}, Ljava/io/IOException;->printStackTrace()V

    goto :goto_8

    :catchall_2
    move-exception v0

    :goto_5
    if-eqz v1, :cond_4

    .line 68
    :try_start_9
    invoke-virtual {v1}, Ljava/io/BufferedReader;->close()V
    :try_end_9
    .catch Ljava/io/IOException; {:try_start_9 .. :try_end_9} :catch_7

    goto :goto_6

    :catch_7
    move-exception v1

    .line 70
    invoke-virtual {v1}, Ljava/io/IOException;->printStackTrace()V

    :cond_4
    :goto_6
    if-eqz p1, :cond_5

    .line 75
    :try_start_a
    invoke-virtual {p1}, Ljava/io/InputStream;->close()V
    :try_end_a
    .catch Ljava/io/IOException; {:try_start_a .. :try_end_a} :catch_8

    goto :goto_7

    :catch_8
    move-exception p1

    .line 77
    invoke-virtual {p1}, Ljava/io/IOException;->printStackTrace()V

    .line 80
    :cond_5
    :goto_7
    throw v0

    :cond_6
    :goto_8
    return-void
.end method

.method public put(Ljava/util/List;)Ljava/lang/String;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/bianfeng/addpermission/ui/PermissionBean;",
            ">;)",
            "Ljava/lang/String;"
        }
    .end annotation

    .line 86
    iget-object v0, p0, Lcom/bianfeng/addpermission/common/ReadAssetsFileUtils;->sb:Ljava/lang/StringBuilder;

    if-eqz v0, :cond_0

    .line 88
    :try_start_0
    new-instance v0, Lcom/google/gson/Gson;

    invoke-direct {v0}, Lcom/google/gson/Gson;-><init>()V

    iget-object v1, p0, Lcom/bianfeng/addpermission/common/ReadAssetsFileUtils;->sb:Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Lcom/bianfeng/addpermission/common/ReadAssetsFileUtils$1;

    invoke-direct {v2, p0}, Lcom/bianfeng/addpermission/common/ReadAssetsFileUtils$1;-><init>(Lcom/bianfeng/addpermission/common/ReadAssetsFileUtils;)V

    invoke-virtual {v2}, Lcom/bianfeng/addpermission/common/ReadAssetsFileUtils$1;->getType()Ljava/lang/reflect/Type;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/reflect/Type;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/List;

    .line 89
    invoke-interface {p1, v0}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 91
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "\u6d4b\u8bd5-----put----"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 95
    :cond_0
    :goto_0
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/thridsdk/YmnGsonUtil;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method
