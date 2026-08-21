.class public Lcom/mbridge/msdk/foundation/download/download/ResourceManager;
.super Ljava/lang/Object;
.source "ResourceManager.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/foundation/download/download/ResourceManager$ResourceManagerHolder;
    }
.end annotation


# static fields
.field public static final EXPIRE_TIME:I = 0xf731400

.field public static final KEY_INDEX_HTML:Ljava/lang/String; = "foldername"

.field public static final KEY_MD5CHECK:Ljava/lang/String; = "nc"

.field public static final KEY_MD5FILENAME:Ljava/lang/String; = "md5filename"

.field private static TAG:Ljava/lang/String; = "ResourceManager"


# instance fields
.field private mFileSaveSDDir:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 43
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 44
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/download/download/ResourceManager;->init()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/mbridge/msdk/foundation/download/download/ResourceManager$1;)V
    .locals 0

    .line 29
    invoke-direct {p0}, Lcom/mbridge/msdk/foundation/download/download/ResourceManager;-><init>()V

    return-void
.end method

.method static synthetic access$100(Lcom/mbridge/msdk/foundation/download/download/ResourceManager;)Ljava/lang/String;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/mbridge/msdk/foundation/download/download/ResourceManager;->mFileSaveSDDir:Ljava/lang/String;

    return-object p0
.end method

.method public static getinstance()Lcom/mbridge/msdk/foundation/download/download/ResourceManager;
    .locals 1

    .line 48
    sget-object v0, Lcom/mbridge/msdk/foundation/download/download/ResourceManager$ResourceManagerHolder;->instance:Lcom/mbridge/msdk/foundation/download/download/ResourceManager;

    return-object v0
.end method

.method private save(Ljava/lang/String;Ljava/lang/String;Ljava/io/File;)Ljava/lang/String;
    .locals 2

    .line 140
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/mbridge/msdk/foundation/download/download/ResourceManager;->mFileSaveSDDir:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "/"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ak;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/SameMD5;->getMD5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 143
    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/x;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_0

    .line 146
    invoke-static {p3}, Lcom/mbridge/msdk/foundation/tools/x;->b(Ljava/io/File;)Ljava/lang/String;

    move-result-object p1

    :cond_0
    return-object p1
.end method


# virtual methods
.method public cleanZipRes()V
    .locals 2

    .line 64
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/download/download/ResourceManager;->mFileSaveSDDir:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 65
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/DownloadTask;->getInstance()Lcom/mbridge/msdk/foundation/download/download/DownloadTask;

    move-result-object v0

    new-instance v1, Lcom/mbridge/msdk/foundation/download/download/ResourceManager$1;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/foundation/download/download/ResourceManager$1;-><init>(Lcom/mbridge/msdk/foundation/download/download/ResourceManager;)V

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/download/download/DownloadTask;->runTask(Lcom/mbridge/msdk/foundation/same/e/a;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 83
    sget-boolean v1, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v1, :cond_0

    .line 84
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method public getResDirFromCampaign(Ljava/lang/String;)Ljava/lang/String;
    .locals 8

    const-string v0, "?"

    const-string v1, ""

    const-string v2, "/"

    .line 160
    :try_start_0
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ak;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Lcom/mbridge/msdk/foundation/tools/SameMD5;->getMD5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 162
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/mbridge/msdk/foundation/download/download/ResourceManager;->mFileSaveSDDir:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 164
    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v4

    const-string v5, "foldername"

    .line 165
    invoke-virtual {v4, v5}, Landroid/net/Uri;->getQueryParameters(Ljava/lang/String;)Ljava/util/List;

    move-result-object v4

    .line 166
    sget-object v5, Lcom/mbridge/msdk/foundation/download/download/ResourceManager;->TAG:Ljava/lang/String;

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "check zip \u4e0b\u8f7d\u60c5\u51b5\uff1aurl:"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v5, v6}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 167
    sget-object v5, Lcom/mbridge/msdk/foundation/download/download/ResourceManager;->TAG:Ljava/lang/String;

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "check zip \u4e0b\u8f7d\u60c5\u51b5\uff1aindexHtml:"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v5, v6}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    if-eqz v4, :cond_2

    .line 168
    invoke-interface {v4}, Ljava/util/List;->size()I

    move-result v5

    if-lez v5, :cond_2

    const/4 v5, 0x0

    .line 169
    invoke-interface {v4, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    .line 170
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_2

    .line 171
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ".html"

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 172
    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/x;->a(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_2

    .line 173
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v3

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v3

    if-eqz v3, :cond_0

    .line 174
    invoke-virtual {v3}, Lcom/mbridge/msdk/c/a;->aL()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_0

    .line 175
    new-instance v3, Ljava/io/File;

    invoke-direct {v3, v2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 176
    invoke-static {v3}, Lcom/mbridge/msdk/foundation/tools/x;->a(Ljava/io/File;)Ljava/lang/String;

    move-result-object v4

    .line 177
    sget-object v5, Lcom/mbridge/msdk/MBridgeConstans;->OMID_JS_SERVICE_CONTENT:Ljava/lang/String;

    invoke-static {v5, v4}, Lcom/iab/omid/library/mmadbridge/ScriptInjector;->injectScriptContentIntoHtml(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    .line 178
    invoke-static {v4}, Lcom/mbridge/msdk/a/b;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    .line 179
    invoke-virtual {v4}, Ljava/lang/String;->getBytes()[B

    move-result-object v4

    invoke-static {v4, v3}, Lcom/mbridge/msdk/foundation/tools/x;->a([BLjava/io/File;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    .line 183
    :cond_0
    :try_start_1
    invoke-virtual {p1, v0}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v3

    add-int/lit8 v3, v3, 0x1

    invoke-virtual {p1, v3}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    :catch_0
    move-object p1, v1

    .line 187
    :goto_0
    :try_start_2
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_1

    .line 188
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 192
    :cond_1
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "file://"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    return-object p1

    :catch_1
    move-exception p1

    .line 197
    sget-boolean v0, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v0, :cond_2

    .line 198
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_2
    const/4 p1, 0x0

    return-object p1
.end method

.method public init()V
    .locals 1

    .line 55
    sget-object v0, Lcom/mbridge/msdk/foundation/same/b/c;->e:Lcom/mbridge/msdk/foundation/same/b/c;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/same/b/e;->b(Lcom/mbridge/msdk/foundation/same/b/c;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/foundation/download/download/ResourceManager;->mFileSaveSDDir:Ljava/lang/String;

    return-void
.end method

.method public declared-synchronized saveResFile(Ljava/lang/String;[B)Ljava/lang/String;
    .locals 4

    monitor-enter p0

    :try_start_0
    const-string v0, "unknow exception "
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz p2, :cond_4

    .line 99
    :try_start_1
    array-length v1, p2

    if-lez v1, :cond_4

    .line 101
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mbridge/msdk/foundation/download/download/ResourceManager;->mFileSaveSDDir:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "/"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ak;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/SameMD5;->getMD5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ".zip"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 102
    new-instance v2, Ljava/io/File;

    invoke-direct {v2, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 103
    invoke-static {p2, v2}, Lcom/mbridge/msdk/foundation/tools/x;->a([BLjava/io/File;)Z

    move-result p2

    if-eqz p2, :cond_2

    .line 105
    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p2

    const-string v3, "nc"

    .line 106
    invoke-virtual {p2, v3}, Landroid/net/Uri;->getQueryParameters(Ljava/lang/String;)Ljava/util/List;

    move-result-object v3

    if-eqz v3, :cond_1

    .line 108
    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v3

    if-nez v3, :cond_0

    goto :goto_0

    .line 121
    :cond_0
    invoke-direct {p0, p1, v1, v2}, Lcom/mbridge/msdk/foundation/download/download/ResourceManager;->save(Ljava/lang/String;Ljava/lang/String;Ljava/io/File;)Ljava/lang/String;

    move-result-object p1

    move-object v0, p1

    goto :goto_1

    :cond_1
    :goto_0
    const-string v3, "md5filename"

    .line 109
    invoke-virtual {p2, v3}, Landroid/net/Uri;->getQueryParameters(Ljava/lang/String;)Ljava/util/List;

    move-result-object p2

    if-eqz p2, :cond_2

    .line 110
    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result v3

    if-lez v3, :cond_2

    const/4 v3, 0x0

    .line 111
    invoke-interface {p2, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Ljava/lang/String;

    .line 112
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_2

    .line 114
    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/w;->a(Ljava/io/File;)Ljava/lang/String;

    move-result-object v3

    .line 115
    invoke-virtual {p2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_2

    .line 116
    invoke-direct {p0, p1, v1, v2}, Lcom/mbridge/msdk/foundation/download/download/ResourceManager;->save(Ljava/lang/String;Ljava/lang/String;Ljava/io/File;)Ljava/lang/String;

    move-result-object v0

    .line 125
    :cond_2
    :goto_1
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_4

    .line 126
    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/x;->b(Ljava/io/File;)Ljava/lang/String;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_2

    :catch_0
    move-exception p1

    .line 130
    :try_start_2
    sget-boolean p2, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz p2, :cond_3

    .line 131
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 133
    :cond_3
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_3

    :cond_4
    :goto_2
    move-object p1, v0

    .line 135
    :goto_3
    monitor-exit p0

    return-object p1

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method
