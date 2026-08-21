.class public Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;
.super Ljava/lang/Object;
.source "CustomViewMessageWrap.java"

# interfaces
.implements Lcom/mbridge/msdk/system/NoProGuard;


# instance fields
.field private apkDisplayInfo:Lcom/mbridge/msdk/out/ApkDisplayInfo;

.field private campaignEx:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field private layoutFilePath:Ljava/lang/String;

.field private views:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Landroid/view/View;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 31
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public constructor <init>(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;)V
    .locals 0

    .line 38
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 39
    iput-object p1, p0, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->campaignEx:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-nez p1, :cond_0

    const/4 p1, 0x0

    goto :goto_0

    .line 40
    :cond_0
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getApkDisplayInfo()Lcom/mbridge/msdk/out/ApkDisplayInfo;

    move-result-object p1

    :goto_0
    iput-object p1, p0, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->apkDisplayInfo:Lcom/mbridge/msdk/out/ApkDisplayInfo;

    .line 41
    iput-object p2, p0, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->layoutFilePath:Ljava/lang/String;

    return-void
.end method

.method private static copyAssetsDir2Phone(Landroid/content/Context;Ljava/lang/String;)V
    .locals 9

    const/4 v0, 0x0

    .line 213
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getAssets()Landroid/content/res/AssetManager;

    move-result-object v1

    invoke-virtual {v1, p1}, Landroid/content/res/AssetManager;->list(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    .line 214
    array-length v2, v1

    const/4 v3, 0x0

    if-lez v2, :cond_1

    .line 215
    new-instance v2, Ljava/io/File;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v5, Lcom/mbridge/msdk/foundation/same/b/c;->j:Lcom/mbridge/msdk/foundation/same/b/c;

    invoke-static {v5}, Lcom/mbridge/msdk/foundation/same/b/e;->b(Lcom/mbridge/msdk/foundation/same/b/c;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v5, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-direct {v2, v4}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 216
    invoke-virtual {v2}, Ljava/io/File;->mkdirs()Z

    .line 217
    array-length v2, v1

    move v4, v3

    :goto_0
    if-ge v4, v2, :cond_0

    aget-object v5, v1, v4

    .line 218
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object p1, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v6, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 219
    invoke-static {p0, p1}, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->copyAssetsDir2Phone(Landroid/content/Context;Ljava/lang/String;)V

    .line 220
    sget-object v5, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {p1, v5}, Ljava/lang/String;->lastIndexOf(Ljava/lang/String;)I

    move-result v5

    invoke-virtual {p1, v3, v5}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object p1

    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    :cond_0
    move-object p0, v0

    goto :goto_2

    .line 223
    :cond_1
    invoke-virtual {p0}, Landroid/content/Context;->getAssets()Landroid/content/res/AssetManager;

    move-result-object p0

    invoke-virtual {p0, p1}, Landroid/content/res/AssetManager;->open(Ljava/lang/String;)Ljava/io/InputStream;

    move-result-object p0
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_3
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    .line 224
    :try_start_1
    new-instance v1, Ljava/io/File;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v4, Lcom/mbridge/msdk/foundation/same/b/c;->j:Lcom/mbridge/msdk/foundation/same/b/c;

    invoke-static {v4}, Lcom/mbridge/msdk/foundation/same/b/e;->b(Lcom/mbridge/msdk/foundation/same/b/c;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v4, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {v1, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 225
    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result p1

    if-eqz p1, :cond_2

    invoke-virtual {v1}, Ljava/io/File;->length()J

    move-result-wide v4

    const-wide/16 v6, 0x0

    cmp-long p1, v4, v6

    if-nez p1, :cond_4

    .line 226
    :cond_2
    new-instance p1, Ljava/io/FileOutputStream;

    invoke-direct {p1, v1}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;)V
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_2
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    const/16 v0, 0x400

    :try_start_2
    new-array v0, v0, [B

    .line 229
    :goto_1
    invoke-virtual {p0, v0}, Ljava/io/InputStream;->read([B)I

    move-result v1

    const/4 v2, -0x1

    if-eq v1, v2, :cond_3

    .line 230
    invoke-virtual {p1, v0, v3, v1}, Ljava/io/FileOutputStream;->write([BII)V
    :try_end_2
    .catch Ljava/io/IOException; {:try_start_2 .. :try_end_2} :catch_1
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_1

    :cond_3
    move-object v0, p1

    :cond_4
    :goto_2
    if-eqz v0, :cond_5

    .line 239
    :try_start_3
    invoke-virtual {v0}, Ljava/io/FileOutputStream;->flush()V

    .line 240
    invoke-virtual {v0}, Ljava/io/FileOutputStream;->close()V
    :try_end_3
    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_3} :catch_0

    :catch_0
    :cond_5
    if-eqz p0, :cond_7

    .line 247
    :try_start_4
    invoke-virtual {p0}, Ljava/io/InputStream;->close()V
    :try_end_4
    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_4} :catch_5

    goto :goto_4

    :catchall_0
    move-exception v0

    move-object v8, p1

    move-object p1, p0

    move-object p0, v0

    move-object v0, v8

    goto :goto_5

    :catch_1
    move-exception v0

    move-object v8, p1

    move-object p1, p0

    move-object p0, v0

    move-object v0, v8

    goto :goto_3

    :catchall_1
    move-exception p1

    move-object v8, p1

    move-object p1, p0

    move-object p0, v8

    goto :goto_5

    :catch_2
    move-exception p1

    move-object v8, p1

    move-object p1, p0

    move-object p0, v8

    goto :goto_3

    :catchall_2
    move-exception p0

    move-object p1, v0

    goto :goto_5

    :catch_3
    move-exception p0

    move-object p1, v0

    :goto_3
    :try_start_5
    const-string v1, "wrap"

    .line 235
    invoke-virtual {p0}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-static {v1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_3

    if-eqz v0, :cond_6

    .line 239
    :try_start_6
    invoke-virtual {v0}, Ljava/io/FileOutputStream;->flush()V

    .line 240
    invoke-virtual {v0}, Ljava/io/FileOutputStream;->close()V
    :try_end_6
    .catch Ljava/io/IOException; {:try_start_6 .. :try_end_6} :catch_4

    :catch_4
    :cond_6
    if-eqz p1, :cond_7

    .line 247
    :try_start_7
    invoke-virtual {p1}, Ljava/io/InputStream;->close()V
    :try_end_7
    .catch Ljava/io/IOException; {:try_start_7 .. :try_end_7} :catch_5

    :catch_5
    :cond_7
    :goto_4
    return-void

    :catchall_3
    move-exception p0

    :goto_5
    if-eqz v0, :cond_8

    .line 239
    :try_start_8
    invoke-virtual {v0}, Ljava/io/FileOutputStream;->flush()V

    .line 240
    invoke-virtual {v0}, Ljava/io/FileOutputStream;->close()V
    :try_end_8
    .catch Ljava/io/IOException; {:try_start_8 .. :try_end_8} :catch_6

    :catch_6
    :cond_8
    if-eqz p1, :cond_9

    .line 247
    :try_start_9
    invoke-virtual {p1}, Ljava/io/InputStream;->close()V
    :try_end_9
    .catch Ljava/io/IOException; {:try_start_9 .. :try_end_9} :catch_7

    .line 252
    :catch_7
    :cond_9
    throw p0
.end method

.method public static final copyViewFile(Landroid/content/Context;Ljava/lang/String;)V
    .locals 0

    .line 206
    invoke-static {p0, p1}, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->copyAssetsDir2Phone(Landroid/content/Context;Ljava/lang/String;)V

    return-void
.end method

.method public static final getMessage(Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;Ljava/lang/String;)Ljava/lang/String;
    .locals 5

    const-string v0, "CustomViewMessageWrap"

    .line 162
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    :cond_0
    const-string v1, ""

    .line 167
    :try_start_0
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    const/4 v3, 0x0

    new-array v4, v3, [Ljava/lang/Class;

    .line 168
    invoke-virtual {v2, p1, v4}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object p1

    const/4 v2, 0x1

    .line 169
    invoke-virtual {p1, v2}, Ljava/lang/reflect/Method;->setAccessible(Z)V

    new-array v2, v3, [Ljava/lang/Object;

    .line 170
    invoke-virtual {p1, p0, v2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    if-eqz p0, :cond_1

    .line 172
    invoke-static {p0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/NoSuchMethodException; {:try_start_0 .. :try_end_0} :catch_2
    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/IllegalAccessException; {:try_start_0 .. :try_end_0} :catch_0

    move-object v1, p0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 179
    invoke-virtual {p0}, Ljava/lang/IllegalAccessException;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :catch_1
    move-exception p0

    .line 177
    invoke-virtual {p0}, Ljava/lang/reflect/InvocationTargetException;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :catch_2
    move-exception p0

    .line 175
    invoke-virtual {p0}, Ljava/lang/NoSuchMethodException;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-object v1
.end method

.method public static final getViewFilePath(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    const-string v0, "mbridge_download_dialog_view"

    .line 192
    invoke-static {p0, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 193
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v1, Lcom/mbridge/msdk/foundation/same/b/c;->j:Lcom/mbridge/msdk/foundation/same/b/c;

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/same/b/e;->b(Lcom/mbridge/msdk/foundation/same/b/c;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "/"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, ".xml"

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_0
    const-string p0, ""

    return-object p0
.end method


# virtual methods
.method public checkIsNull(Ljava/lang/Object;)Z
    .locals 0

    if-nez p1, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return p1
.end method

.method public getApplicationContext()Ljava/lang/String;
    .locals 1

    .line 76
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->campaignEx:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->checkIsNull(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, ""

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->campaignEx:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppDesc()Ljava/lang/String;

    move-result-object v0

    :goto_0
    return-object v0
.end method

.method public getApplicationDeveloper()Ljava/lang/String;
    .locals 1

    .line 125
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->apkDisplayInfo:Lcom/mbridge/msdk/out/ApkDisplayInfo;

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->checkIsNull(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, ""

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->apkDisplayInfo:Lcom/mbridge/msdk/out/ApkDisplayInfo;

    invoke-virtual {v0}, Lcom/mbridge/msdk/out/ApkDisplayInfo;->getDevName()Ljava/lang/String;

    move-result-object v0

    :goto_0
    return-object v0
.end method

.method public getApplicationImage()Ljava/lang/String;
    .locals 1

    .line 146
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->campaignEx:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->checkIsNull(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, ""

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->campaignEx:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImageUrl()Ljava/lang/String;

    move-result-object v0

    :goto_0
    return-object v0
.end method

.method public getApplicationLogo()Ljava/lang/String;
    .locals 1

    .line 142
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->campaignEx:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->checkIsNull(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, ""

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->campaignEx:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getIconUrl()Ljava/lang/String;

    move-result-object v0

    :goto_0
    return-object v0
.end method

.method public getApplicationName()Ljava/lang/String;
    .locals 1

    .line 69
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->apkDisplayInfo:Lcom/mbridge/msdk/out/ApkDisplayInfo;

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->checkIsNull(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, ""

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->apkDisplayInfo:Lcom/mbridge/msdk/out/ApkDisplayInfo;

    invoke-virtual {v0}, Lcom/mbridge/msdk/out/ApkDisplayInfo;->getAppName()Ljava/lang/String;

    move-result-object v0

    :goto_0
    return-object v0
.end method

.method public getApplicationNameFromCampaign()Ljava/lang/String;
    .locals 1

    .line 73
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->campaignEx:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->checkIsNull(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, ""

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->campaignEx:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppName()Ljava/lang/String;

    move-result-object v0

    :goto_0
    return-object v0
.end method

.method public getApplicationPermissions()Ljava/lang/String;
    .locals 5

    .line 99
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->apkDisplayInfo:Lcom/mbridge/msdk/out/ApkDisplayInfo;

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->checkIsNull(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, ""

    return-object v0

    .line 103
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 104
    iget-object v1, p0, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->apkDisplayInfo:Lcom/mbridge/msdk/out/ApkDisplayInfo;

    invoke-virtual {v1}, Lcom/mbridge/msdk/out/ApkDisplayInfo;->getPermDescAllList()Ljava/util/ArrayList;

    move-result-object v1

    if-eqz v1, :cond_2

    .line 105
    invoke-virtual {v1}, Ljava/util/ArrayList;->size()I

    move-result v2

    if-lez v2, :cond_2

    const/4 v2, 0x0

    .line 106
    :goto_0
    invoke-virtual {v1}, Ljava/util/ArrayList;->size()I

    move-result v3

    if-ge v2, v3, :cond_2

    .line 107
    invoke-virtual {v1, v2}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 108
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_1

    .line 109
    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 110
    invoke-virtual {v1}, Ljava/util/ArrayList;->size()I

    move-result v3

    add-int/lit8 v3, v3, -0x1

    if-ge v2, v3, :cond_1

    const-string v3, "\n"

    .line 111
    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_1
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 116
    :cond_2
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getApplicationPrivacy()Ljava/lang/String;
    .locals 1

    .line 81
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->apkDisplayInfo:Lcom/mbridge/msdk/out/ApkDisplayInfo;

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->checkIsNull(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, ""

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->apkDisplayInfo:Lcom/mbridge/msdk/out/ApkDisplayInfo;

    invoke-virtual {v0}, Lcom/mbridge/msdk/out/ApkDisplayInfo;->getPriUrl()Ljava/lang/String;

    move-result-object v0

    :goto_0
    return-object v0
.end method

.method public getApplicationScore()Ljava/lang/String;
    .locals 6

    .line 138
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->campaignEx:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->checkIsNull(Ljava/lang/Object;)Z

    move-result v0

    const/4 v1, 0x0

    const/4 v2, 0x1

    const-string v3, "\u5df2\u6709 %s \u4eba\u8bc4\u5206"

    if-eqz v0, :cond_0

    new-array v0, v2, [Ljava/lang/Object;

    const v2, 0x186a0

    new-instance v4, Ljava/util/Random;

    invoke-direct {v4}, Ljava/util/Random;-><init>()V

    const/16 v5, 0x2710

    invoke-virtual {v4, v5}, Ljava/util/Random;->nextInt(I)I

    move-result v4

    add-int/2addr v4, v2

    invoke-static {v4}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    aput-object v2, v0, v1

    invoke-static {v3, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_0
    new-array v0, v2, [Ljava/lang/Object;

    iget-object v2, p0, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->campaignEx:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNumberRating()I

    move-result v2

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    aput-object v2, v0, v1

    invoke-static {v3, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    :goto_0
    return-object v0
.end method

.method public getApplicationUpdateTime()Ljava/lang/String;
    .locals 1

    .line 90
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->apkDisplayInfo:Lcom/mbridge/msdk/out/ApkDisplayInfo;

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->checkIsNull(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, ""

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->apkDisplayInfo:Lcom/mbridge/msdk/out/ApkDisplayInfo;

    invoke-virtual {v0}, Lcom/mbridge/msdk/out/ApkDisplayInfo;->getUpdateTime()Ljava/lang/String;

    move-result-object v0

    :goto_0
    return-object v0
.end method

.method public getApplicationVersion()Ljava/lang/String;
    .locals 1

    .line 134
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->apkDisplayInfo:Lcom/mbridge/msdk/out/ApkDisplayInfo;

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->checkIsNull(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, ""

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->apkDisplayInfo:Lcom/mbridge/msdk/out/ApkDisplayInfo;

    invoke-virtual {v0}, Lcom/mbridge/msdk/out/ApkDisplayInfo;->getAppVersion()Ljava/lang/String;

    move-result-object v0

    :goto_0
    return-object v0
.end method

.method public getCampaignEx()Lcom/mbridge/msdk/foundation/entity/CampaignEx;
    .locals 1

    .line 46
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->campaignEx:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    return-object v0
.end method

.method public getLayoutFilePath()Ljava/lang/String;
    .locals 1

    .line 158
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->layoutFilePath:Ljava/lang/String;

    return-object v0
.end method

.method public getStarCount()I
    .locals 2

    .line 150
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->campaignEx:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->checkIsNull(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x5

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->campaignEx:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRating()D

    move-result-wide v0

    invoke-static {v0, v1}, Ljava/lang/Math;->ceil(D)D

    move-result-wide v0

    double-to-int v0, v0

    :goto_0
    return v0
.end method

.method public getView(Ljava/lang/String;)Landroid/view/View;
    .locals 1

    .line 50
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->views:Ljava/util/Map;

    if-eqz v0, :cond_0

    .line 51
    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/view/View;

    return-object p1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public putView(Ljava/lang/String;Landroid/view/View;)V
    .locals 1

    .line 57
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->views:Ljava/util/Map;

    if-nez v0, :cond_0

    .line 58
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->views:Ljava/util/Map;

    .line 60
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->views:Ljava/util/Map;

    invoke-interface {v0, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method
