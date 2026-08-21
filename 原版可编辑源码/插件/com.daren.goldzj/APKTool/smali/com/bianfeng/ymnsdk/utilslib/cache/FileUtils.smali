.class public final Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;
.super Ljava/lang/Object;
.source "FileUtils.java"


# static fields
.field private static UTILS_FILE_DIR:Ljava/lang/String; = "bianfeng"

.field private static mContext:Landroid/content/Context;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 9
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getFilesDir()Ljava/lang/String;
    .locals 1

    .line 171
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SDCardHelper;->getFilesDir(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getInsideFilePath(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    .line 180
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->mContext:Landroid/content/Context;

    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->UTILS_FILE_DIR:Ljava/lang/String;

    invoke-static {v0, v1, p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SDCardHelper;->getInsideFilePath(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static getSDCardBaseDir()Ljava/lang/String;
    .locals 1

    .line 23
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/SDCardHelper;->getSDCardBaseDir()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getSDCardPrivateCacheDir()Ljava/lang/String;
    .locals 1

    .line 158
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SDCardHelper;->getSDCardPrivateCacheDir(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getSDCardPrivateFilesDir()Ljava/lang/String;
    .locals 2

    .line 163
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->mContext:Landroid/content/Context;

    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->UTILS_FILE_DIR:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/bianfeng/ymnsdk/utilslib/cache/SDCardHelper;->getSDCardPrivateFilesDir(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getSDCardPublicDir()Ljava/lang/String;
    .locals 1

    .line 153
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->UTILS_FILE_DIR:Ljava/lang/String;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SDCardHelper;->getSDCardPublicDir(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static init(Landroid/content/Context;)V
    .locals 0

    .line 14
    sput-object p0, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->mContext:Landroid/content/Context;

    return-void
.end method

.method public static isFileExist(Ljava/lang/String;)Z
    .locals 0

    .line 184
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SDCardHelper;->isFileExist(Ljava/lang/String;)Z

    move-result p0

    return p0
.end method

.method public static isFileExistInSdCard(Ljava/lang/String;)Z
    .locals 2

    .line 188
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->getSDCardBaseDir()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SDCardHelper;->isFileExist(Ljava/lang/String;)Z

    move-result p0

    return p0
.end method

.method public static isSDCardMounted()Z
    .locals 1

    .line 18
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/SDCardHelper;->isSDCardMounted()Z

    move-result v0

    return v0
.end method

.method public static loadBitmapFromSDCard(Ljava/lang/String;)Landroid/graphics/Bitmap;
    .locals 1

    .line 145
    :try_start_0
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->mContext:Landroid/content/Context;

    invoke-static {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SDCardHelper;->loadBitmapFromSDCard(Landroid/content/Context;Ljava/lang/String;)Landroid/graphics/Bitmap;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    const/4 p0, 0x0

    return-object p0
.end method

.method public static loadFileFromSDCard(Ljava/lang/String;)[B
    .locals 1

    .line 136
    :try_start_0
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->mContext:Landroid/content/Context;

    invoke-static {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SDCardHelper;->loadFileFromSDCard(Landroid/content/Context;Ljava/lang/String;)[B

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    const/4 p0, 0x0

    return-object p0
.end method

.method public static readBitmapToSDCardPrivateCacheDir(Ljava/lang/String;)Landroid/graphics/Bitmap;
    .locals 2

    .line 119
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->getSDCardPrivateCacheDir()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    .line 120
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->loadBitmapFromSDCard(Ljava/lang/String;)Landroid/graphics/Bitmap;

    move-result-object p0

    return-object p0
.end method

.method public static readFileToSDCardCustomDir(Ljava/lang/String;)[B
    .locals 2

    .line 58
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->getSDCardBaseDir()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->UTILS_FILE_DIR:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    .line 60
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->loadFileFromSDCard(Ljava/lang/String;)[B

    move-result-object p0

    return-object p0
.end method

.method public static readFileToSDCardPrivateCacheDir(Ljava/lang/String;)[B
    .locals 2

    .line 99
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->getSDCardPrivateCacheDir()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    .line 100
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->loadFileFromSDCard(Ljava/lang/String;)[B

    move-result-object p0

    return-object p0
.end method

.method public static readFileToSDCardPrivateFilesDir(Ljava/lang/String;)[B
    .locals 2

    .line 79
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->getSDCardPrivateFilesDir()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    .line 80
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->loadFileFromSDCard(Ljava/lang/String;)[B

    move-result-object p0

    return-object p0
.end method

.method public static readFileToSDCardPublicDir(Ljava/lang/String;)[B
    .locals 2

    .line 38
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->getSDCardPublicDir()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    .line 39
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->loadFileFromSDCard(Ljava/lang/String;)[B

    move-result-object p0

    return-object p0
.end method

.method public static removeBitmapToSDCardPrivateCacheDir(Ljava/lang/String;)Z
    .locals 2

    .line 124
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->getSDCardPrivateCacheDir()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    .line 125
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->removeFileFromSDCard(Ljava/lang/String;)Z

    move-result p0

    return p0
.end method

.method public static removeFileFromSDCard(Ljava/lang/String;)Z
    .locals 0

    .line 194
    :try_start_0
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SDCardHelper;->removeFileFromSDCard(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 p0, 0x1

    return p0

    :catch_0
    const/4 p0, 0x0

    return p0
.end method

.method public static removeFileToSDCardCustomDir(Ljava/lang/String;)Z
    .locals 2

    .line 64
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->getSDCardBaseDir()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->UTILS_FILE_DIR:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    .line 65
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->removeFileFromSDCard(Ljava/lang/String;)Z

    move-result p0

    return p0
.end method

.method public static removeFileToSDCardPrivateCacheDir(Ljava/lang/String;)Z
    .locals 2

    .line 104
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->getSDCardPrivateCacheDir()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    .line 105
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->removeFileFromSDCard(Ljava/lang/String;)Z

    move-result p0

    return p0
.end method

.method public static removeFileToSDCardPrivateFilesDir(Ljava/lang/String;)Z
    .locals 2

    .line 84
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->getSDCardPrivateFilesDir()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    .line 85
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->removeFileFromSDCard(Ljava/lang/String;)Z

    move-result p0

    return p0
.end method

.method public static removeFileToSDCardPublicDir(Ljava/lang/String;)Z
    .locals 2

    .line 43
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->getSDCardPublicDir()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    .line 44
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->removeFileFromSDCard(Ljava/lang/String;)Z

    move-result p0

    return p0
.end method

.method public static removeInsideFile(Ljava/lang/String;)Z
    .locals 2

    .line 129
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->getFilesDir()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->UTILS_FILE_DIR:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    .line 130
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->removeFileFromSDCard(Ljava/lang/String;)Z

    move-result p0

    return p0
.end method

.method public static saveBitmapToSDCardPrivateCacheDir(Landroid/graphics/Bitmap;Ljava/lang/String;)Z
    .locals 1

    .line 111
    :try_start_0
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->mContext:Landroid/content/Context;

    invoke-static {p0, p1, v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SDCardHelper;->saveBitmapToSDCardPrivateCacheDir(Landroid/graphics/Bitmap;Ljava/lang/String;Landroid/content/Context;)Z

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :catch_0
    const/4 p0, 0x0

    return p0
.end method

.method public static saveFileToSDCardCustomDir([BLjava/lang/String;)Z
    .locals 2

    .line 50
    :try_start_0
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->mContext:Landroid/content/Context;

    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->UTILS_FILE_DIR:Ljava/lang/String;

    invoke-static {v0, p0, v1, p1}, Lcom/bianfeng/ymnsdk/utilslib/cache/SDCardHelper;->saveFileToSDCardCustomDir(Landroid/content/Context;[BLjava/lang/String;Ljava/lang/String;)Z

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :catch_0
    const/4 p0, 0x0

    return p0
.end method

.method public static saveFileToSDCardPrivateCacheDir([BLjava/lang/String;)Z
    .locals 1

    .line 91
    :try_start_0
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->mContext:Landroid/content/Context;

    invoke-static {p0, p1, v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SDCardHelper;->saveFileToSDCardPrivateCacheDir([BLjava/lang/String;Landroid/content/Context;)Z

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :catch_0
    const/4 p0, 0x0

    return p0
.end method

.method public static saveFileToSDCardPrivateFilesDir([BLjava/lang/String;)Z
    .locals 2

    .line 71
    :try_start_0
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->UTILS_FILE_DIR:Ljava/lang/String;

    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->mContext:Landroid/content/Context;

    invoke-static {p0, v0, p1, v1}, Lcom/bianfeng/ymnsdk/utilslib/cache/SDCardHelper;->saveFileToSDCardPrivateFilesDir([BLjava/lang/String;Ljava/lang/String;Landroid/content/Context;)Z

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :catch_0
    const/4 p0, 0x0

    return p0
.end method

.method public static saveFileToSDCardPublicDir([BLjava/lang/String;)Z
    .locals 2

    .line 29
    :try_start_0
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->mContext:Landroid/content/Context;

    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->UTILS_FILE_DIR:Ljava/lang/String;

    invoke-static {v0, p0, v1, p1}, Lcom/bianfeng/ymnsdk/utilslib/cache/SDCardHelper;->saveFileToSDCardPublicDir(Landroid/content/Context;[BLjava/lang/String;Ljava/lang/String;)Z

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :catch_0
    move-exception p0

    .line 31
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    const/4 p0, 0x0

    return p0
.end method
