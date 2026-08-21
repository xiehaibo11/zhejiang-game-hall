.class public final Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;
.super Ljava/lang/Object;
.source "FileUtils.java"


# static fields
.field private static UTILS_FILE_DIR:Ljava/lang/String;

.field private static mContext:Landroid/content/Context;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 10
    const-string v0, "bianfeng"

    sput-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->UTILS_FILE_DIR:Ljava/lang/String;

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
    .param p0, "path"    # Ljava/lang/String;

    .line 180
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->mContext:Landroid/content/Context;

    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->UTILS_FILE_DIR:Ljava/lang/String;

    invoke-static {v0, v1, p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SDCardHelper;->getInsideFilePath(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
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
    .param p0, "context"    # Landroid/content/Context;

    .line 14
    sput-object p0, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->mContext:Landroid/content/Context;

    .line 15
    return-void
.end method

.method public static isFileExist(Ljava/lang/String;)Z
    .locals 1
    .param p0, "filePath"    # Ljava/lang/String;

    .line 184
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SDCardHelper;->isFileExist(Ljava/lang/String;)Z

    move-result v0

    return v0
.end method

.method public static isFileExistInSdCard(Ljava/lang/String;)Z
    .locals 2
    .param p0, "filePath"    # Ljava/lang/String;

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

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SDCardHelper;->isFileExist(Ljava/lang/String;)Z

    move-result v0

    return v0
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
    .param p0, "filePath"    # Ljava/lang/String;

    .line 145
    :try_start_0
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->mContext:Landroid/content/Context;

    invoke-static {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SDCardHelper;->loadBitmapFromSDCard(Landroid/content/Context;Ljava/lang/String;)Landroid/graphics/Bitmap;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 146
    :catch_0
    move-exception v0

    .line 148
    const/4 v0, 0x0

    return-object v0
.end method

.method public static loadFileFromSDCard(Ljava/lang/String;)[B
    .locals 1
    .param p0, "fileDir"    # Ljava/lang/String;

    .line 136
    :try_start_0
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->mContext:Landroid/content/Context;

    invoke-static {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SDCardHelper;->loadFileFromSDCard(Landroid/content/Context;Ljava/lang/String;)[B

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 137
    :catch_0
    move-exception v0

    .line 139
    const/4 v0, 0x0

    return-object v0
.end method

.method public static readBitmapToSDCardPrivateCacheDir(Ljava/lang/String;)Landroid/graphics/Bitmap;
    .locals 2
    .param p0, "fileName"    # Ljava/lang/String;

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

    move-result-object v0

    .line 120
    .local v0, "path":Ljava/lang/String;
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->loadBitmapFromSDCard(Ljava/lang/String;)Landroid/graphics/Bitmap;

    move-result-object v1

    return-object v1
.end method

.method public static readFileToSDCardCustomDir(Ljava/lang/String;)[B
    .locals 2
    .param p0, "fileName"    # Ljava/lang/String;

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

    move-result-object v0

    .line 60
    .local v0, "path":Ljava/lang/String;
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->loadFileFromSDCard(Ljava/lang/String;)[B

    move-result-object v1

    return-object v1
.end method

.method public static readFileToSDCardPrivateCacheDir(Ljava/lang/String;)[B
    .locals 2
    .param p0, "fileName"    # Ljava/lang/String;

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

    move-result-object v0

    .line 100
    .local v0, "path":Ljava/lang/String;
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->loadFileFromSDCard(Ljava/lang/String;)[B

    move-result-object v1

    return-object v1
.end method

.method public static readFileToSDCardPrivateFilesDir(Ljava/lang/String;)[B
    .locals 2
    .param p0, "fileName"    # Ljava/lang/String;

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

    move-result-object v0

    .line 80
    .local v0, "path":Ljava/lang/String;
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->loadFileFromSDCard(Ljava/lang/String;)[B

    move-result-object v1

    return-object v1
.end method

.method public static readFileToSDCardPublicDir(Ljava/lang/String;)[B
    .locals 2
    .param p0, "fileName"    # Ljava/lang/String;

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

    move-result-object v0

    .line 39
    .local v0, "path":Ljava/lang/String;
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->loadFileFromSDCard(Ljava/lang/String;)[B

    move-result-object v1

    return-object v1
.end method

.method public static removeBitmapToSDCardPrivateCacheDir(Ljava/lang/String;)Z
    .locals 2
    .param p0, "fileName"    # Ljava/lang/String;

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

    move-result-object v0

    .line 125
    .local v0, "path":Ljava/lang/String;
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->removeFileFromSDCard(Ljava/lang/String;)Z

    move-result v1

    return v1
.end method

.method public static removeFileFromSDCard(Ljava/lang/String;)Z
    .locals 2
    .param p0, "filePath"    # Ljava/lang/String;

    .line 194
    :try_start_0
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SDCardHelper;->removeFileFromSDCard(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 195
    const/4 v0, 0x1

    return v0

    .line 196
    :catch_0
    move-exception v0

    .line 197
    .local v0, "e":Ljava/lang/Exception;
    const/4 v1, 0x0

    return v1
.end method

.method public static removeFileToSDCardCustomDir(Ljava/lang/String;)Z
    .locals 2
    .param p0, "fileName"    # Ljava/lang/String;

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

    move-result-object v0

    .line 65
    .local v0, "path":Ljava/lang/String;
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->removeFileFromSDCard(Ljava/lang/String;)Z

    move-result v1

    return v1
.end method

.method public static removeFileToSDCardPrivateCacheDir(Ljava/lang/String;)Z
    .locals 2
    .param p0, "fileName"    # Ljava/lang/String;

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

    move-result-object v0

    .line 105
    .local v0, "path":Ljava/lang/String;
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->removeFileFromSDCard(Ljava/lang/String;)Z

    move-result v1

    return v1
.end method

.method public static removeFileToSDCardPrivateFilesDir(Ljava/lang/String;)Z
    .locals 2
    .param p0, "fileName"    # Ljava/lang/String;

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

    move-result-object v0

    .line 85
    .local v0, "path":Ljava/lang/String;
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->removeFileFromSDCard(Ljava/lang/String;)Z

    move-result v1

    return v1
.end method

.method public static removeFileToSDCardPublicDir(Ljava/lang/String;)Z
    .locals 2
    .param p0, "fileName"    # Ljava/lang/String;

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

    move-result-object v0

    .line 44
    .local v0, "path":Ljava/lang/String;
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->removeFileFromSDCard(Ljava/lang/String;)Z

    move-result v1

    return v1
.end method

.method public static removeInsideFile(Ljava/lang/String;)Z
    .locals 2
    .param p0, "fileName"    # Ljava/lang/String;

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

    move-result-object v0

    .line 130
    .local v0, "path":Ljava/lang/String;
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->removeFileFromSDCard(Ljava/lang/String;)Z

    move-result v1

    return v1
.end method

.method public static saveBitmapToSDCardPrivateCacheDir(Landroid/graphics/Bitmap;Ljava/lang/String;)Z
    .locals 1
    .param p0, "bitmap"    # Landroid/graphics/Bitmap;
    .param p1, "fileName"    # Ljava/lang/String;

    .line 111
    :try_start_0
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->mContext:Landroid/content/Context;

    invoke-static {p0, p1, v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SDCardHelper;->saveBitmapToSDCardPrivateCacheDir(Landroid/graphics/Bitmap;Ljava/lang/String;Landroid/content/Context;)Z

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return v0

    .line 112
    :catch_0
    move-exception v0

    .line 114
    const/4 v0, 0x0

    return v0
.end method

.method public static saveFileToSDCardCustomDir([BLjava/lang/String;)Z
    .locals 2
    .param p0, "data"    # [B
    .param p1, "fileName"    # Ljava/lang/String;

    .line 50
    :try_start_0
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->mContext:Landroid/content/Context;

    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->UTILS_FILE_DIR:Ljava/lang/String;

    invoke-static {v0, p0, v1, p1}, Lcom/bianfeng/ymnsdk/utilslib/cache/SDCardHelper;->saveFileToSDCardCustomDir(Landroid/content/Context;[BLjava/lang/String;Ljava/lang/String;)Z

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return v0

    .line 51
    :catch_0
    move-exception v0

    .line 53
    const/4 v0, 0x0

    return v0
.end method

.method public static saveFileToSDCardPrivateCacheDir([BLjava/lang/String;)Z
    .locals 1
    .param p0, "data"    # [B
    .param p1, "fileName"    # Ljava/lang/String;

    .line 91
    :try_start_0
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->mContext:Landroid/content/Context;

    invoke-static {p0, p1, v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SDCardHelper;->saveFileToSDCardPrivateCacheDir([BLjava/lang/String;Landroid/content/Context;)Z

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return v0

    .line 92
    :catch_0
    move-exception v0

    .line 94
    const/4 v0, 0x0

    return v0
.end method

.method public static saveFileToSDCardPrivateFilesDir([BLjava/lang/String;)Z
    .locals 2
    .param p0, "data"    # [B
    .param p1, "fileName"    # Ljava/lang/String;

    .line 71
    :try_start_0
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->UTILS_FILE_DIR:Ljava/lang/String;

    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->mContext:Landroid/content/Context;

    invoke-static {p0, v0, p1, v1}, Lcom/bianfeng/ymnsdk/utilslib/cache/SDCardHelper;->saveFileToSDCardPrivateFilesDir([BLjava/lang/String;Ljava/lang/String;Landroid/content/Context;)Z

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return v0

    .line 72
    :catch_0
    move-exception v0

    .line 74
    const/4 v0, 0x0

    return v0
.end method

.method public static saveFileToSDCardPublicDir([BLjava/lang/String;)Z
    .locals 2
    .param p0, "data"    # [B
    .param p1, "fileName"    # Ljava/lang/String;

    .line 29
    :try_start_0
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->mContext:Landroid/content/Context;

    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->UTILS_FILE_DIR:Ljava/lang/String;

    invoke-static {v0, p0, v1, p1}, Lcom/bianfeng/ymnsdk/utilslib/cache/SDCardHelper;->saveFileToSDCardPublicDir(Landroid/content/Context;[BLjava/lang/String;Ljava/lang/String;)Z

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return v0

    .line 30
    :catch_0
    move-exception v0

    .line 31
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 32
    const/4 v1, 0x0

    return v1
.end method
