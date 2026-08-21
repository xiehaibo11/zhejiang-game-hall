.class public Lcom/bianfeng/fastvo/FastResource;
.super Ljava/lang/Object;
.source "FastResource.java"


# static fields
.field private static context:Landroid/content/Context;


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 24
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static createNewFile(Ljava/lang/String;)Z
    .locals 1

    .line 45
    :try_start_0
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/io/File;->createNewFile()Z

    move-result p0
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :catch_0
    move-exception p0

    .line 47
    invoke-virtual {p0}, Ljava/io/IOException;->printStackTrace()V

    const/4 p0, 0x0

    return p0
.end method

.method public static defaultDataDir(Landroid/content/Context;)Ljava/lang/String;
    .locals 1

    .line 36
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->getSDCardPrivateCacheDir()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "/bftj/data/"

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static getApplication()Landroid/content/Context;
    .locals 1

    .line 21
    sget-object v0, Lcom/bianfeng/fastvo/FastResource;->context:Landroid/content/Context;

    return-object v0
.end method

.method public static mkDataFile(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    .line 40
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v1, Lcom/bianfeng/fastvo/FastResource;->context:Landroid/content/Context;

    invoke-static {v1}, Lcom/bianfeng/fastvo/FastResource;->defaultDataDir(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static regist(Landroid/content/Context;)V
    .locals 0

    .line 28
    sput-object p0, Lcom/bianfeng/fastvo/FastResource;->context:Landroid/content/Context;

    .line 29
    invoke-static {p0}, Lcom/bianfeng/fastvo/FastResource;->defaultDataDir(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/bianfeng/fastvo/util/FileUtil;->mkFileDirs(Ljava/lang/String;)Z

    return-void
.end method
