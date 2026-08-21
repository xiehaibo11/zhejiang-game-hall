.class public Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager;
.super Ljava/lang/Object;


# static fields
.field private static final FETCH_PLUGIN_SETTINGS_URL:Ljava/lang/String; = "/webcast/openapi/pangle/setting/"

.field private static final HOST:Ljava/lang/String; = "https://webcast-open.douyin.com"

.field private static final MATERIAL_NAME:Ljava/lang/String; = "material"

.field private static final TAG:Ljava/lang/String; = "LiveInitMaterialManager"


# instance fields
.field private volatile isDownloading:Z

.field private final mRetryCount:Ljava/util/concurrent/atomic/AtomicInteger;


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 20
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 27
    new-instance v0, Ljava/util/concurrent/atomic/AtomicInteger;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Ljava/util/concurrent/atomic/AtomicInteger;-><init>(I)V

    iput-object v0, p0, Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager;->mRetryCount:Ljava/util/concurrent/atomic/AtomicInteger;

    return-void
.end method

.method static synthetic access$000(Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager;Landroid/content/Context;)Lcom/bytedance/android/openliveplugin/material/ConfigParams;
    .locals 0

    .line 20
    invoke-direct {p0, p1}, Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager;->getLocalConfigParams(Landroid/content/Context;)Lcom/bytedance/android/openliveplugin/material/ConfigParams;

    move-result-object p0

    return-object p0
.end method

.method static synthetic access$102(Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager;Z)Z
    .locals 0

    .line 20
    iput-boolean p1, p0, Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager;->isDownloading:Z

    return p1
.end method

.method static synthetic access$200(Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager;)Ljava/util/concurrent/atomic/AtomicInteger;
    .locals 0

    .line 20
    iget-object p0, p0, Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager;->mRetryCount:Ljava/util/concurrent/atomic/AtomicInteger;

    return-object p0
.end method

.method static synthetic access$300(Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/bytedance/android/openliveplugin/material/ILiveMaterialGet;)V
    .locals 0

    .line 20
    invoke-direct/range {p0 .. p5}, Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager;->download(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/bytedance/android/openliveplugin/material/ILiveMaterialGet;)V

    return-void
.end method

.method private download(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/bytedance/android/openliveplugin/material/ILiveMaterialGet;)V
    .locals 10

    .line 92
    iget-boolean v0, p0, Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager;->isDownloading:Z

    const-string v1, "LiveInitMaterialManager"

    if-eqz v0, :cond_0

    const-string p1, "live init : Downloading..."

    .line 93
    invoke-static {v1, p1}, Lcom/bytedance/android/openliveplugin/material/TTLogger;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 97
    :cond_0
    :try_start_0
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->with(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v0

    .line 98
    invoke-virtual {v0, p2}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->url(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v0

    .line 99
    invoke-virtual {v0, p3}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->savePath(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v0

    .line 100
    invoke-virtual {v0, p4}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->name(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v0

    const/4 v2, 0x3

    .line 101
    invoke-virtual {v0, v2}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->retryCount(I)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v0

    const/4 v2, 0x0

    .line 102
    invoke-virtual {v0, v2}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->needRetryDelay(Z)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object v0

    new-instance v9, Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager$1;

    move-object v2, v9

    move-object v3, p0

    move-object v4, p1

    move-object v5, p5

    move-object v6, p2

    move-object v7, p3

    move-object v8, p4

    invoke-direct/range {v2 .. v8}, Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager$1;-><init>(Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager;Landroid/content/Context;Lcom/bytedance/android/openliveplugin/material/ILiveMaterialGet;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 103
    invoke-virtual {v0, v9}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->subThreadListener(Lcom/ss/android/socialbase/downloader/depend/IDownloadListener;)Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    move-result-object p1

    .line 136
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadTask;->download()I

    const-string p1, "live init : Download start."

    .line 137
    invoke-static {v1, p1}, Lcom/bytedance/android/openliveplugin/material/TTLogger;->d(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p1, 0x1

    .line 138
    iput-boolean p1, p0, Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager;->isDownloading:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 140
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string p3, "live init : Download file error: "

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/bytedance/android/openliveplugin/material/TTLogger;->e(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method private getLocalConfigParams(Landroid/content/Context;)Lcom/bytedance/android/openliveplugin/material/ConfigParams;
    .locals 8

    .line 146
    new-instance v0, Ljava/io/File;

    invoke-direct {p0, p1}, Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager;->getMaterialDownloadPath(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p1

    invoke-direct {v0, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 147
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result p1

    const/4 v1, 0x0

    if-nez p1, :cond_0

    return-object v1

    .line 150
    :cond_0
    invoke-virtual {v0}, Ljava/io/File;->listFiles()[Ljava/io/File;

    move-result-object p1

    if-eqz p1, :cond_7

    .line 151
    array-length v0, p1

    if-gtz v0, :cond_1

    goto/16 :goto_3

    .line 156
    :cond_1
    array-length v0, p1

    const/4 v2, 0x0

    move-object v3, v1

    move-object v4, v3

    :goto_0
    if-ge v2, v0, :cond_5

    aget-object v5, p1, v2

    .line 157
    invoke-virtual {v5}, Ljava/io/File;->isFile()Z

    move-result v6

    if-eqz v6, :cond_2

    invoke-virtual {v5}, Ljava/io/File;->getName()Ljava/lang/String;

    move-result-object v6

    const-string v7, "_config"

    invoke-virtual {v6, v7}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v6

    if-eqz v6, :cond_2

    move-object v3, v5

    .line 160
    :cond_2
    invoke-virtual {v5}, Ljava/io/File;->isFile()Z

    move-result v6

    if-eqz v6, :cond_3

    invoke-virtual {v5}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v6

    const-string v7, ".lic"

    invoke-virtual {v6, v7}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_3

    move-object v4, v5

    :cond_3
    if-eqz v3, :cond_4

    if-eqz v4, :cond_4

    goto :goto_1

    :cond_4
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_5
    :goto_1
    if-eqz v3, :cond_7

    .line 169
    invoke-static {v3}, Lcom/bytedance/android/openliveplugin/material/ZipFileUtil;->readTextFile(Ljava/io/File;)Ljava/lang/String;

    move-result-object p1

    .line 171
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 172
    new-instance p1, Lcom/bytedance/android/openliveplugin/material/ConfigParams;

    invoke-direct {p1}, Lcom/bytedance/android/openliveplugin/material/ConfigParams;-><init>()V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_1

    :try_start_1
    const-string v1, "appid"

    .line 173
    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v1

    iput-wide v1, p1, Lcom/bytedance/android/openliveplugin/material/ConfigParams;->appID:J

    const-string v1, "webcast_appid"

    .line 174
    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v1

    iput-wide v1, p1, Lcom/bytedance/android/openliveplugin/material/ConfigParams;->webcastAppID:J

    const-string v1, "ttsdk_appid"

    .line 175
    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v1

    iput-wide v1, p1, Lcom/bytedance/android/openliveplugin/material/ConfigParams;->ttsdkAppID:J

    const-string v1, "client_key"

    .line 176
    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p1, Lcom/bytedance/android/openliveplugin/material/ConfigParams;->clientKey:Ljava/lang/String;

    const-string v1, "version"

    .line 177
    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p1, Lcom/bytedance/android/openliveplugin/material/ConfigParams;->version:J

    if-eqz v4, :cond_6

    .line 179
    invoke-virtual {v4}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p1, Lcom/bytedance/android/openliveplugin/material/ConfigParams;->ttSDKLicensePath:Ljava/lang/String;
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_0

    :cond_6
    move-object v1, p1

    goto :goto_3

    :catch_0
    move-exception v0

    move-object v1, p1

    goto :goto_2

    :catch_1
    move-exception v0

    .line 182
    :goto_2
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "live init : parse local file error : "

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v2, "LiveInitMaterialManager"

    invoke-static {v2, p1}, Lcom/bytedance/android/openliveplugin/material/TTLogger;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 183
    invoke-virtual {v0}, Lorg/json/JSONException;->printStackTrace()V

    :cond_7
    :goto_3
    return-object v1
.end method

.method private getMaterialDownloadPath(Landroid/content/Context;)Ljava/lang/String;
    .locals 1

    .line 190
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1}, Landroid/content/Context;->getFilesDir()Ljava/io/File;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    sget-object p1, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "pangle_"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "com.byted.live.lite"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object p1, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, ".msdata_lc"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object p1, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method private startCheckLiveInitMaterial(Ljava/lang/String;Landroid/app/Application;)Lcom/bytedance/android/openliveplugin/material/ResPackage;
    .locals 4

    .line 69
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_2

    if-nez p2, :cond_0

    goto :goto_0

    .line 72
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "https://webcast-open.douyin.com/webcast/openapi/pangle/setting/?app_id="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "&package_name="

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 73
    invoke-virtual {p2}, Landroid/app/Application;->getPackageName()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 74
    invoke-static {}, Lcom/bytedance/android/openliveplugin/net/NetApi;->getInstance()Lcom/bytedance/android/openliveplugin/net/NetApi;

    move-result-object p2

    const/4 v0, 0x0

    invoke-virtual {p2, v0, p1, v1}, Lcom/bytedance/android/openliveplugin/net/NetApi;->request(ZLjava/lang/String;[B)Ljava/lang/String;

    move-result-object p1

    .line 75
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_1

    return-object v1

    .line 79
    :cond_1
    :try_start_0
    new-instance p2, Lorg/json/JSONObject;

    invoke-direct {p2, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 80
    new-instance p1, Lcom/bytedance/android/openliveplugin/material/ResPackage;

    invoke-direct {p1}, Lcom/bytedance/android/openliveplugin/material/ResPackage;-><init>()V

    const-string v0, "status_code"

    .line 81
    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v2

    iput-wide v2, p1, Lcom/bytedance/android/openliveplugin/material/ResPackage;->statusCode:J

    const-string v0, "data"

    .line 82
    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    const-string v0, "setting_url"

    .line 83
    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p1, Lcom/bytedance/android/openliveplugin/material/ResPackage;->resUrl:Ljava/lang/String;

    const-string v0, "version"

    .line 84
    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v2

    iput-wide v2, p1, Lcom/bytedance/android/openliveplugin/material/ResPackage;->version:J
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    :cond_2
    :goto_0
    return-object v1
.end method


# virtual methods
.method public run(Ljava/lang/String;Landroid/app/Application;Lcom/bytedance/android/openliveplugin/material/ILiveMaterialGet;)V
    .locals 7

    .line 31
    invoke-direct {p0, p1, p2}, Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager;->startCheckLiveInitMaterial(Ljava/lang/String;Landroid/app/Application;)Lcom/bytedance/android/openliveplugin/material/ResPackage;

    move-result-object p1

    if-eqz p1, :cond_6

    .line 32
    invoke-virtual {p1}, Lcom/bytedance/android/openliveplugin/material/ResPackage;->isLegal()Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_1

    :cond_0
    const-wide/16 v0, 0x0

    .line 43
    invoke-direct {p0, p2}, Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager;->getLocalConfigParams(Landroid/content/Context;)Lcom/bytedance/android/openliveplugin/material/ConfigParams;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 45
    iget-wide v0, v2, Lcom/bytedance/android/openliveplugin/material/ConfigParams;->version:J

    .line 47
    :cond_1
    iget-wide v3, p1, Lcom/bytedance/android/openliveplugin/material/ResPackage;->version:J

    cmp-long v0, v3, v0

    if-lez v0, :cond_4

    .line 49
    iget-object v0, p1, Lcom/bytedance/android/openliveplugin/material/ResPackage;->resUrl:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    const-string p1, "live init : material task res download url empty error"

    .line 50
    invoke-static {p1}, Lcom/bytedance/android/openliveplugin/material/TTLogger;->e(Ljava/lang/String;)V

    return-void

    .line 54
    :cond_2
    new-instance v0, Ljava/io/File;

    invoke-direct {p0, p2}, Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager;->getMaterialDownloadPath(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {v0}, Lcom/bytedance/android/openliveplugin/material/ZipFileUtil;->removeDir(Ljava/io/File;)Z

    .line 55
    new-instance v0, Ljava/io/File;

    invoke-direct {p0, p2}, Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager;->getMaterialDownloadPath(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 56
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v1

    if-nez v1, :cond_3

    .line 57
    invoke-virtual {v0}, Ljava/io/File;->mkdir()Z

    :cond_3
    const-string v0, "live init : start download material res"

    .line 59
    invoke-static {v0}, Lcom/bytedance/android/openliveplugin/material/TTLogger;->d(Ljava/lang/String;)V

    .line 60
    iget-object v3, p1, Lcom/bytedance/android/openliveplugin/material/ResPackage;->resUrl:Ljava/lang/String;

    invoke-direct {p0, p2}, Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager;->getMaterialDownloadPath(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v4

    const-string v5, "material"

    move-object v1, p0

    move-object v2, p2

    move-object v6, p3

    invoke-direct/range {v1 .. v6}, Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager;->download(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/bytedance/android/openliveplugin/material/ILiveMaterialGet;)V

    goto :goto_0

    :cond_4
    if-eqz p3, :cond_5

    .line 63
    invoke-interface {p3, v2}, Lcom/bytedance/android/openliveplugin/material/ILiveMaterialGet;->onMaterialGet(Lcom/bytedance/android/openliveplugin/material/ConfigParams;)V

    :cond_5
    :goto_0
    return-void

    :cond_6
    :goto_1
    const-string p1, "live init : material task res package null error"

    .line 33
    invoke-static {p1}, Lcom/bytedance/android/openliveplugin/material/TTLogger;->e(Ljava/lang/String;)V

    .line 35
    invoke-direct {p0, p2}, Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager;->getLocalConfigParams(Landroid/content/Context;)Lcom/bytedance/android/openliveplugin/material/ConfigParams;

    move-result-object p1

    if-eqz p1, :cond_7

    if-eqz p3, :cond_7

    .line 37
    invoke-interface {p3, p1}, Lcom/bytedance/android/openliveplugin/material/ILiveMaterialGet;->onMaterialGet(Lcom/bytedance/android/openliveplugin/material/ConfigParams;)V

    :cond_7
    return-void
.end method
