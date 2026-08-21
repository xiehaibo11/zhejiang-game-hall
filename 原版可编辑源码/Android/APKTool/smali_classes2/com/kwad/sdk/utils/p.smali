.class public Lcom/kwad/sdk/utils/p;
.super Ljava/lang/Object;


# static fields
.field private static aIm:Ljava/lang/String; = ""

.field private static aIn:Ljava/lang/String; = ""

.field private static aIo:Ljava/lang/String; = ""


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Ljava/lang/String;Ljava/io/InputStream;)Ljava/lang/String;
    .locals 3

    const-class v0, Lcom/kwad/sdk/utils/p;

    monitor-enter v0

    :try_start_0
    new-instance v1, Lcom/kwad/sdk/pngencrypt/o;

    const/4 v2, 0x1

    invoke-direct {v1, p1, v2}, Lcom/kwad/sdk/pngencrypt/o;-><init>(Ljava/io/InputStream;Z)V

    invoke-virtual {v1}, Lcom/kwad/sdk/pngencrypt/o;->GU()V

    invoke-virtual {v1}, Lcom/kwad/sdk/pngencrypt/o;->GT()Lcom/kwad/sdk/pngencrypt/chunk/w;

    move-result-object p1

    invoke-virtual {p1, p0}, Lcom/kwad/sdk/pngencrypt/chunk/w;->fl(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1}, Lcom/kwad/sdk/pngencrypt/o;->end()V

    monitor-exit v0

    return-object p0

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0
.end method

.method public static db(I)Ljava/lang/String;
    .locals 7

    const-string p0, "ksad_common_encrypt_image.png"

    invoke-static {}, Lcom/kwad/sdk/service/ServiceProvider;->HD()Landroid/content/Context;

    move-result-object v0

    sget-object v1, Lcom/kwad/sdk/utils/p;->aIm:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    return-object v1

    :cond_0
    const-string v1, "aes_key"

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    const-string v3, "EncryptUtils"

    if-eqz v2, :cond_1

    const-string v2, "EncryptUtils getKey get id is error "

    invoke-static {v3, v2}, Lcom/kwad/sdk/core/e/c;->e(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    const/4 v2, 0x0

    :try_start_0
    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v4

    invoke-virtual {v4}, Landroid/content/res/Resources;->getAssets()Landroid/content/res/AssetManager;

    move-result-object v4

    invoke-virtual {v4, p0}, Landroid/content/res/AssetManager;->open(Ljava/lang/String;)Ljava/io/InputStream;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v4

    :try_start_1
    new-instance v5, Ljava/lang/StringBuilder;

    const-string v6, "EncryptUtils getKey get InputStream from loader is null,  e: "

    invoke-direct {v5, v6}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v3, v4}, Lcom/kwad/sdk/core/e/c;->e(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    if-nez v2, :cond_2

    invoke-virtual {v0}, Landroid/content/Context;->getAssets()Landroid/content/res/AssetManager;

    move-result-object v0

    invoke-virtual {v0, p0}, Landroid/content/res/AssetManager;->open(Ljava/lang/String;)Ljava/io/InputStream;

    move-result-object v2

    :cond_2
    invoke-static {v1, v2}, Lcom/kwad/sdk/utils/p;->a(Ljava/lang/String;Ljava/io/InputStream;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_3

    const-string v0, "EncryptUtils getKey get encryptedKey is invalid "

    invoke-static {v3, v0}, Lcom/kwad/sdk/core/e/c;->e(Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    sput-object p0, Lcom/kwad/sdk/utils/p;->aIm:Ljava/lang/String;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    return-object p0

    :catchall_1
    move-exception p0

    invoke-static {p0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    const-string p0, ""

    return-object p0
.end method
