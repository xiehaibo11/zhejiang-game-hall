.class public Lcom/bykv/vk/openvk/downloadnew/pt;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bykv/vk/openvk/downloadnew/pt$rg;,
        Lcom/bykv/vk/openvk/downloadnew/pt$pt;,
        Lcom/bykv/vk/openvk/downloadnew/pt$pp;,
        Lcom/bykv/vk/openvk/downloadnew/pt$df;,
        Lcom/bykv/vk/openvk/downloadnew/pt$q;
    }
.end annotation


# static fields
.field private static c:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/Integer;",
            "Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadAdapter$OnEventLogHandler;",
            ">;"
        }
    .end annotation
.end field

.field public static df:Z

.field private static final fw:Lcom/ss/android/download/api/download/rg/rg;

.field private static pp:Landroid/content/Context;

.field private static final pt:Ljava/util/concurrent/atomic/AtomicBoolean;

.field public static q:Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadVisitor;

.field public static volatile rg:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 91
    new-instance v0, Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    sput-object v0, Lcom/bykv/vk/openvk/downloadnew/pt;->pt:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v0, 0x1

    .line 95
    sput-boolean v0, Lcom/bykv/vk/openvk/downloadnew/pt;->df:Z

    .line 105
    :try_start_0
    sget-object v0, Landroid/os/Environment;->DIRECTORY_DOWNLOADS:Ljava/lang/String;

    invoke-static {v0}, Landroid/os/Environment;->getExternalStoragePublicDirectory(Ljava/lang/String;)Ljava/io/File;

    move-result-object v0

    invoke-virtual {v0}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/bykv/vk/openvk/downloadnew/pt;->rg:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 724
    :catchall_0
    new-instance v0, Lcom/bykv/vk/openvk/downloadnew/pt$6;

    invoke-direct {v0}, Lcom/bykv/vk/openvk/downloadnew/pt$6;-><init>()V

    sput-object v0, Lcom/bykv/vk/openvk/downloadnew/pt;->fw:Lcom/ss/android/download/api/download/rg/rg;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 85
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static c()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method private static df(Lcom/ss/android/download/api/model/df;)Lorg/json/JSONObject;
    .locals 4

    .line 700
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "category"

    .line 702
    invoke-virtual {p0}, Lcom/ss/android/download/api/model/df;->rg()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "tag"

    .line 703
    invoke-virtual {p0}, Lcom/ss/android/download/api/model/df;->df()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "label"

    .line 704
    invoke-virtual {p0}, Lcom/ss/android/download/api/model/df;->q()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "isAd"

    .line 705
    invoke-virtual {p0}, Lcom/ss/android/download/api/model/df;->pt()Z

    move-result v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Z)Lorg/json/JSONObject;

    const-string v1, "adId"

    .line 706
    invoke-virtual {p0}, Lcom/ss/android/download/api/model/df;->pp()J

    move-result-wide v2

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v1, "logExtra"

    .line 707
    invoke-virtual {p0}, Lcom/ss/android/download/api/model/df;->c()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "extValue"

    .line 708
    invoke-virtual {p0}, Lcom/ss/android/download/api/model/df;->fw()J

    move-result-wide v2

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v1, "extJson"

    .line 709
    invoke-virtual {p0}, Lcom/ss/android/download/api/model/df;->ux()Lorg/json/JSONObject;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "paramsJson"

    .line 710
    invoke-virtual {p0}, Lcom/ss/android/download/api/model/df;->rz()Lorg/json/JSONObject;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "eventSource"

    .line 711
    invoke-virtual {p0}, Lcom/ss/android/download/api/model/df;->b()I

    move-result v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "extraObject"

    .line 712
    invoke-virtual {p0}, Lcom/ss/android/download/api/model/df;->hq()Ljava/lang/Object;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "clickTrackUrl"

    .line 713
    invoke-virtual {p0}, Lcom/ss/android/download/api/model/df;->bm()Ljava/util/List;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "isV3"

    .line 714
    invoke-virtual {p0}, Lcom/ss/android/download/api/model/df;->oh()Z

    move-result v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Z)Lorg/json/JSONObject;

    const-string v1, "V3EventName"

    .line 715
    invoke-virtual {p0}, Lcom/ss/android/download/api/model/df;->f()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "V3EventParams"

    .line 716
    invoke-virtual {p0}, Lcom/ss/android/download/api/model/df;->v()Lorg/json/JSONObject;

    move-result-object p0

    invoke-virtual {v0, v1, p0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 718
    invoke-virtual {p0}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    return-object v0
.end method

.method public static df()V
    .locals 2

    .line 193
    invoke-static {}, Lcom/bykv/vk/openvk/downloadnew/pt;->rg()Lcom/ss/android/downloadlib/ux;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ss/android/downloadlib/ux;->fw()V

    .line 194
    invoke-static {}, Lcom/bykv/vk/openvk/downloadnew/pt;->pp()Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadVisitor;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 195
    invoke-static {}, Lcom/bykv/vk/openvk/downloadnew/pt;->pp()Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadVisitor;

    move-result-object v0

    sget-object v1, Lcom/bykv/vk/openvk/downloadnew/pt;->rg:Ljava/lang/String;

    invoke-interface {v0, v1}, Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadVisitor;->clearAllData(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method static synthetic df(Ljava/lang/String;)V
    .locals 0

    .line 85
    invoke-static {p0}, Lcom/bykv/vk/openvk/downloadnew/pt;->q(Ljava/lang/String;)V

    return-void
.end method

.method private static df(Landroid/content/Context;)Z
    .locals 5

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return v0

    .line 254
    :cond_0
    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    .line 256
    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v1

    .line 257
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1

    const-string v1, ""

    .line 261
    :cond_1
    invoke-static {}, Lcom/bykv/vk/openvk/downloadnew/pt;->c()Z

    move-result v2

    if-eqz v2, :cond_2

    .line 263
    :try_start_0
    invoke-static {p0}, Lcom/ss/android/downloadlib/ux;->rg(Landroid/content/Context;)Lcom/ss/android/downloadlib/ux;

    move-result-object v2

    const-string v3, "pangolin"

    invoke-virtual {v2, v3}, Lcom/ss/android/downloadlib/ux;->rg(Ljava/lang/String;)Lcom/ss/android/download/api/rg;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    .line 265
    :catchall_0
    invoke-static {p0}, Lcom/ss/android/downloadlib/ux;->rg(Landroid/content/Context;)Lcom/ss/android/downloadlib/ux;

    move-result-object v2

    invoke-virtual {v2}, Lcom/ss/android/downloadlib/ux;->rg()Lcom/ss/android/download/api/rg;

    move-result-object v2

    goto :goto_0

    .line 268
    :cond_2
    invoke-static {p0}, Lcom/ss/android/downloadlib/ux;->rg(Landroid/content/Context;)Lcom/ss/android/downloadlib/ux;

    move-result-object v2

    invoke-virtual {v2}, Lcom/ss/android/downloadlib/ux;->rg()Lcom/ss/android/download/api/rg;

    move-result-object v2

    :goto_0
    if-nez v2, :cond_3

    return v0

    .line 276
    :cond_3
    new-instance v0, Lcom/ss/android/download/api/model/rg$rg;

    invoke-direct {v0}, Lcom/ss/android/download/api/model/rg$rg;-><init>()V

    const-string v3, "143"

    .line 277
    invoke-virtual {v0, v3}, Lcom/ss/android/download/api/model/rg$rg;->df(Ljava/lang/String;)Lcom/ss/android/download/api/model/rg$rg;

    move-result-object v0

    const-string v3, "open_news"

    .line 278
    invoke-virtual {v0, v3}, Lcom/ss/android/download/api/model/rg$rg;->rg(Ljava/lang/String;)Lcom/ss/android/download/api/model/rg$rg;

    move-result-object v0

    const-string v3, "5.1.1.4"

    .line 279
    invoke-virtual {v0, v3}, Lcom/ss/android/download/api/model/rg$rg;->q(Ljava/lang/String;)Lcom/ss/android/download/api/model/rg$rg;

    move-result-object v0

    const/16 v3, 0x13fa

    .line 280
    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Lcom/ss/android/download/api/model/rg$rg;->pt(Ljava/lang/String;)Lcom/ss/android/download/api/model/rg$rg;

    move-result-object v0

    .line 281
    invoke-virtual {v0}, Lcom/ss/android/download/api/model/rg$rg;->rg()Lcom/ss/android/download/api/model/rg;

    move-result-object v0

    .line 283
    new-instance v3, Lcom/bykv/vk/openvk/downloadnew/pt$q;

    invoke-direct {v3}, Lcom/bykv/vk/openvk/downloadnew/pt$q;-><init>()V

    invoke-interface {v2, v3}, Lcom/ss/android/download/api/rg;->rg(Lcom/ss/android/download/api/config/rz;)Lcom/ss/android/download/api/rg;

    move-result-object v2

    new-instance v3, Lcom/bykv/vk/openvk/downloadnew/pt$rg;

    invoke-direct {v3}, Lcom/bykv/vk/openvk/downloadnew/pt$rg;-><init>()V

    .line 285
    invoke-interface {v2, v3}, Lcom/ss/android/download/api/rg;->rg(Lcom/ss/android/download/api/config/fw;)Lcom/ss/android/download/api/rg;

    move-result-object v2

    new-instance v3, Lcom/bykv/vk/openvk/downloadnew/pt$pt;

    invoke-direct {v3, p0}, Lcom/bykv/vk/openvk/downloadnew/pt$pt;-><init>(Landroid/content/Context;)V

    .line 287
    invoke-interface {v2, v3}, Lcom/ss/android/download/api/rg;->rg(Lcom/ss/android/download/api/config/hq;)Lcom/ss/android/download/api/rg;

    move-result-object v2

    new-instance v3, Lcom/bykv/vk/openvk/downloadnew/pt$df;

    const/4 v4, 0x0

    invoke-direct {v3, v4}, Lcom/bykv/vk/openvk/downloadnew/pt$df;-><init>(Lcom/bykv/vk/openvk/downloadnew/pt$1;)V

    .line 289
    invoke-interface {v2, v3}, Lcom/ss/android/download/api/rg;->rg(Lcom/ss/android/download/api/config/ux;)Lcom/ss/android/download/api/rg;

    move-result-object v2

    new-instance v3, Lcom/bykv/vk/openvk/downloadnew/pt$3;

    invoke-direct {v3}, Lcom/bykv/vk/openvk/downloadnew/pt$3;-><init>()V

    .line 291
    invoke-interface {v2, v3}, Lcom/ss/android/download/api/rg;->rg(Lcom/ss/android/download/api/config/bm;)Lcom/ss/android/download/api/rg;

    move-result-object v2

    new-instance v3, Lcom/bykv/vk/openvk/downloadnew/pt$2;

    invoke-direct {v3}, Lcom/bykv/vk/openvk/downloadnew/pt$2;-><init>()V

    .line 301
    invoke-interface {v2, v3}, Lcom/ss/android/download/api/rg;->rg(Lcom/ss/android/download/api/config/df;)Lcom/ss/android/download/api/rg;

    move-result-object v2

    .line 311
    invoke-interface {v2, v0}, Lcom/ss/android/download/api/rg;->rg(Lcom/ss/android/download/api/model/rg;)Lcom/ss/android/download/api/rg;

    move-result-object v0

    new-instance v2, Lcom/bykv/vk/openvk/downloadnew/pt$1;

    invoke-direct {v2}, Lcom/bykv/vk/openvk/downloadnew/pt$1;-><init>()V

    .line 312
    invoke-interface {v0, v2}, Lcom/ss/android/download/api/rg;->rg(Lcom/ss/android/download/api/config/z;)Lcom/ss/android/download/api/rg;

    move-result-object v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ".TTFileProvider"

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 318
    invoke-interface {v0, v1}, Lcom/ss/android/download/api/rg;->rg(Ljava/lang/String;)Lcom/ss/android/download/api/rg;

    move-result-object v0

    .line 319
    invoke-static {}, Lcom/bykv/vk/openvk/downloadnew/pt;->pp()Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadVisitor;

    move-result-object v1

    if-eqz v1, :cond_4

    invoke-static {}, Lcom/bykv/vk/openvk/downloadnew/pt;->pp()Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadVisitor;

    move-result-object v1

    invoke-interface {v1}, Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadVisitor;->getDownloadSettings()Lorg/json/JSONObject;

    move-result-object v1

    goto :goto_1

    :cond_4
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    :goto_1
    invoke-static {p0, v1}, Lcom/bykv/vk/openvk/downloadnew/pt;->rg(Landroid/content/Context;Lorg/json/JSONObject;)Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;

    move-result-object v1

    invoke-interface {v0, v1}, Lcom/ss/android/download/api/rg;->rg(Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;)Lcom/ss/android/download/api/rg;

    move-result-object v0

    .line 320
    invoke-interface {v0}, Lcom/ss/android/download/api/rg;->rg()V

    .line 323
    invoke-static {}, Lcom/ss/android/downloadlib/utils/rg;->rg()V

    .line 327
    invoke-static {p0}, Lcom/ss/android/downloadlib/ux;->rg(Landroid/content/Context;)Lcom/ss/android/downloadlib/ux;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ss/android/downloadlib/ux;->pt()Lcom/ss/android/downloadad/api/rg;

    move-result-object v0

    const/4 v1, 0x1

    invoke-interface {v0, v1}, Lcom/ss/android/downloadad/api/rg;->rg(I)V

    .line 328
    invoke-static {p0}, Lcom/ss/android/downloadlib/ux;->rg(Landroid/content/Context;)Lcom/ss/android/downloadlib/ux;

    move-result-object p0

    sget-object v0, Lcom/bykv/vk/openvk/downloadnew/pt;->fw:Lcom/ss/android/download/api/download/rg/rg;

    invoke-virtual {p0, v0}, Lcom/ss/android/downloadlib/ux;->rg(Lcom/ss/android/download/api/download/rg/rg;)V

    .line 330
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pt;->bm()Lcom/ss/android/socialbase/appdownloader/pt;

    move-result-object p0

    new-instance v0, Lcom/bykv/vk/openvk/downloadnew/pt$4;

    invoke-direct {v0}, Lcom/bykv/vk/openvk/downloadnew/pt$4;-><init>()V

    invoke-virtual {p0, v0}, Lcom/ss/android/socialbase/appdownloader/pt;->rg(Lcom/ss/android/socialbase/downloader/depend/IInstallAppHandler;)V

    .line 339
    invoke-static {}, Lcom/bykv/vk/openvk/downloadnew/pt;->pp()Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadVisitor;

    move-result-object p0

    invoke-interface {p0}, Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadVisitor;->getTTDownloadEventLogger()Lcom/bykv/vk/openvk/TTDownloadEventLogger;

    move-result-object p0

    if-eqz p0, :cond_5

    .line 341
    invoke-interface {p0}, Lcom/bykv/vk/openvk/TTDownloadEventLogger;->onDownloadConfigReady()V

    :cond_5
    return v1
.end method

.method private static getContext()Landroid/content/Context;
    .locals 1

    .line 392
    sget-object v0, Lcom/bykv/vk/openvk/downloadnew/pt;->pp:Landroid/content/Context;

    if-nez v0, :cond_0

    invoke-static {}, Lcom/bykv/vk/openvk/TTAppContextHolder;->getContext()Landroid/content/Context;

    move-result-object v0

    :cond_0
    return-object v0
.end method

.method private static pp()Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadVisitor;
    .locals 3

    .line 111
    sget-object v0, Lcom/bykv/vk/openvk/downloadnew/pt;->q:Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadVisitor;

    if-nez v0, :cond_1

    .line 112
    invoke-static {}, Lcom/bykv/vk/openvk/TTVfSdk;->getVfManager()Lcom/bykv/vk/openvk/TTVfManager;

    move-result-object v0

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return-object v0

    .line 116
    :cond_0
    const-class v1, Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadVisitor;

    const/4 v2, 0x1

    invoke-static {v2}, Lcom/bykv/vk/openvk/downloadnew/df;->rg(I)Landroid/os/Bundle;

    move-result-object v2

    invoke-interface {v0, v1, v2}, Lcom/bykv/vk/openvk/TTVfManager;->getExtra(Ljava/lang/Class;Landroid/os/Bundle;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadVisitor;

    :cond_1
    return-object v0
.end method

.method static synthetic pt()Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadVisitor;
    .locals 1

    .line 85
    invoke-static {}, Lcom/bykv/vk/openvk/downloadnew/pt;->pp()Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadVisitor;

    move-result-object v0

    return-object v0
.end method

.method public static q()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/Integer;",
            "Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadAdapter$OnEventLogHandler;",
            ">;"
        }
    .end annotation

    .line 216
    sget-object v0, Lcom/bykv/vk/openvk/downloadnew/pt;->c:Ljava/util/Map;

    return-object v0
.end method

.method private static q(Ljava/lang/String;)V
    .locals 2

    .line 123
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 126
    :cond_0
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/c;->rg()Lcom/ss/android/downloadlib/addownload/model/c;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/ss/android/downloadlib/addownload/model/c;->rg(Ljava/lang/String;)Lcom/ss/android/downloadad/api/rg/df;

    move-result-object v0

    if-nez v0, :cond_1

    return-void

    .line 130
    :cond_1
    invoke-virtual {v0}, Lcom/ss/android/downloadad/api/rg/df;->fw()Lorg/json/JSONObject;

    move-result-object v0

    if-nez v0, :cond_2

    return-void

    .line 135
    :cond_2
    invoke-static {}, Lcom/bykv/vk/openvk/downloadnew/pt;->pp()Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadVisitor;

    move-result-object v1

    if-eqz v1, :cond_3

    .line 136
    invoke-static {}, Lcom/bykv/vk/openvk/downloadnew/pt;->pp()Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadVisitor;

    move-result-object v1

    invoke-interface {v1, v0, p0}, Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadVisitor;->checkAutoControl(Lorg/json/JSONObject;Ljava/lang/String;)V

    :cond_3
    return-void
.end method

.method public static rg()Lcom/ss/android/downloadlib/ux;
    .locals 1

    .line 175
    invoke-static {}, Lcom/bykv/vk/openvk/downloadnew/pt;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/bykv/vk/openvk/downloadnew/pt;->rg(Landroid/content/Context;)V

    .line 176
    invoke-static {}, Lcom/bykv/vk/openvk/downloadnew/pt;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/downloadlib/ux;->rg(Landroid/content/Context;)Lcom/ss/android/downloadlib/ux;

    move-result-object v0

    return-object v0
.end method

.method private static rg(Landroid/content/Context;Lorg/json/JSONObject;)Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;
    .locals 2

    const v0, 0x3dffffff    # 0.12499999f

    const-string v1, "download_exp_switch_temp"

    .line 350
    invoke-virtual {p1, v1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p1

    .line 351
    new-instance v0, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;

    invoke-direct {v0, p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;-><init>(Landroid/content/Context;)V

    new-instance p0, Lcom/bykv/vk/openvk/downloadnew/pt$5;

    invoke-direct {p0}, Lcom/bykv/vk/openvk/downloadnew/pt$5;-><init>()V

    .line 352
    invoke-virtual {v0, p0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->downloadSetting(Lcom/ss/android/socialbase/downloader/depend/IDownloadSettings;)Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;

    move-result-object p0

    .line 361
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->downloadExpSwitch(I)Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;

    move-result-object p0

    new-instance p1, Lcom/bykv/vk/openvk/downloadnew/pt$pp;

    invoke-direct {p1}, Lcom/bykv/vk/openvk/downloadnew/pt$pp;-><init>()V

    .line 362
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->httpService(Lcom/ss/android/socialbase/downloader/network/IDownloadHttpService;)Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;

    move-result-object p0

    return-object p0
.end method

.method static synthetic rg(Lcom/ss/android/download/api/model/df;)Lorg/json/JSONObject;
    .locals 0

    .line 85
    invoke-static {p0}, Lcom/bykv/vk/openvk/downloadnew/pt;->df(Lcom/ss/android/download/api/model/df;)Lorg/json/JSONObject;

    move-result-object p0

    return-object p0
.end method

.method public static rg(I)V
    .locals 1

    .line 200
    sget-object v0, Lcom/bykv/vk/openvk/downloadnew/pt;->c:Ljava/util/Map;

    if-eqz v0, :cond_0

    .line 201
    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    invoke-interface {v0, p0}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    return-void
.end method

.method public static rg(ILcom/bykv/vk/openvk/downloadnew/core/ITTDownloadAdapter$OnEventLogHandler;)V
    .locals 1

    if-eqz p1, :cond_1

    .line 207
    sget-object v0, Lcom/bykv/vk/openvk/downloadnew/pt;->c:Ljava/util/Map;

    if-nez v0, :cond_0

    .line 208
    new-instance v0, Ljava/util/WeakHashMap;

    invoke-direct {v0}, Ljava/util/WeakHashMap;-><init>()V

    invoke-static {v0}, Ljava/util/Collections;->synchronizedMap(Ljava/util/Map;)Ljava/util/Map;

    move-result-object v0

    sput-object v0, Lcom/bykv/vk/openvk/downloadnew/pt;->c:Ljava/util/Map;

    .line 210
    :cond_0
    sget-object v0, Lcom/bykv/vk/openvk/downloadnew/pt;->c:Ljava/util/Map;

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    invoke-interface {v0, p0, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_1
    return-void
.end method

.method public static rg(Landroid/content/Context;)V
    .locals 2

    if-nez p0, :cond_0

    .line 143
    invoke-static {}, Lcom/bykv/vk/openvk/TTAppContextHolder;->getContext()Landroid/content/Context;

    move-result-object p0

    :cond_0
    if-nez p0, :cond_1

    return-void

    .line 148
    :cond_1
    sget-object v0, Lcom/bykv/vk/openvk/downloadnew/pt;->pt:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    if-nez v0, :cond_4

    .line 149
    const-class v0, Lcom/bykv/vk/openvk/downloadnew/pt;

    monitor-enter v0

    .line 150
    :try_start_0
    sget-object v1, Lcom/bykv/vk/openvk/downloadnew/pt;->pt:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v1}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v1

    if-nez v1, :cond_3

    .line 151
    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    sput-object p0, Lcom/bykv/vk/openvk/downloadnew/pt;->pp:Landroid/content/Context;

    .line 152
    invoke-static {}, Lcom/bykv/vk/openvk/downloadnew/pt;->pp()Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadVisitor;

    move-result-object p0

    if-eqz p0, :cond_2

    .line 153
    invoke-static {}, Lcom/bykv/vk/openvk/downloadnew/pt;->pp()Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadVisitor;

    move-result-object p0

    sget-boolean v1, Lcom/bykv/vk/openvk/downloadnew/pt;->df:Z

    invoke-interface {p0, v1}, Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadVisitor;->initPath(Z)Ljava/lang/String;

    move-result-object p0

    .line 154
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 155
    sput-object p0, Lcom/bykv/vk/openvk/downloadnew/pt;->rg:Ljava/lang/String;

    .line 158
    :cond_2
    sget-object p0, Lcom/bykv/vk/openvk/downloadnew/pt;->pp:Landroid/content/Context;

    invoke-static {p0}, Lcom/bykv/vk/openvk/downloadnew/pt;->df(Landroid/content/Context;)Z

    move-result p0

    .line 159
    sget-object v1, Lcom/bykv/vk/openvk/downloadnew/pt;->pt:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v1, p0}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    .line 161
    :cond_3
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0

    :cond_4
    :goto_0
    return-void
.end method

.method public static rg(Ljava/lang/String;)V
    .locals 1

    .line 169
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 170
    sput-object p0, Lcom/bykv/vk/openvk/downloadnew/pt;->rg:Ljava/lang/String;

    :cond_0
    return-void
.end method

.method public static rg(Landroid/app/Activity;Lcom/bykv/vk/openvk/downloadnew/core/ExitInstallListener;)Z
    .locals 2

    .line 763
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/rg/rg;->rg()Lcom/ss/android/downloadlib/addownload/rg/rg;

    move-result-object v0

    new-instance v1, Lcom/bykv/vk/openvk/downloadnew/pt$7;

    invoke-direct {v1, p1}, Lcom/bykv/vk/openvk/downloadnew/pt$7;-><init>(Lcom/bykv/vk/openvk/downloadnew/core/ExitInstallListener;)V

    const/4 p1, 0x0

    invoke-virtual {v0, p0, p1, v1}, Lcom/ss/android/downloadlib/addownload/rg/rg;->rg(Landroid/app/Activity;ZLcom/ss/android/downloadlib/addownload/rg/rg$rg;)Z

    move-result p0

    return p0
.end method

.method public static rg(Landroid/content/Context;Landroid/net/Uri;Lcom/ss/android/download/api/download/DownloadModel;Lcom/ss/android/download/api/download/DownloadEventConfig;Lcom/ss/android/download/api/download/DownloadController;)Z
    .locals 7

    .line 184
    invoke-static {}, Lcom/bykv/vk/openvk/downloadnew/pt;->rg()Lcom/ss/android/downloadlib/ux;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ss/android/downloadlib/ux;->pp()Lcom/ss/android/downloadad/api/df;

    move-result-object v1

    move-object v2, p0

    move-object v3, p1

    move-object v4, p2

    move-object v5, p3

    move-object v6, p4

    invoke-interface/range {v1 .. v6}, Lcom/ss/android/downloadad/api/df;->rg(Landroid/content/Context;Landroid/net/Uri;Lcom/ss/android/download/api/download/DownloadModel;Lcom/ss/android/download/api/download/DownloadEventConfig;Lcom/ss/android/download/api/download/DownloadController;)Z

    move-result p0

    return p0
.end method

.method public static rg(Landroid/content/Context;Landroid/net/Uri;Lcom/ss/android/download/api/download/DownloadModel;Lcom/ss/android/download/api/download/DownloadEventConfig;Lcom/ss/android/download/api/download/DownloadController;Lcom/ss/android/download/api/config/IDownloadButtonClickListener;)Z
    .locals 8

    .line 180
    invoke-static {}, Lcom/bykv/vk/openvk/downloadnew/pt;->rg()Lcom/ss/android/downloadlib/ux;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ss/android/downloadlib/ux;->pp()Lcom/ss/android/downloadad/api/df;

    move-result-object v1

    move-object v2, p0

    move-object v3, p1

    move-object v4, p2

    move-object v5, p3

    move-object v6, p4

    move-object v7, p5

    invoke-interface/range {v1 .. v7}, Lcom/ss/android/downloadad/api/df;->rg(Landroid/content/Context;Landroid/net/Uri;Lcom/ss/android/download/api/download/DownloadModel;Lcom/ss/android/download/api/download/DownloadEventConfig;Lcom/ss/android/download/api/download/DownloadController;Lcom/ss/android/download/api/config/IDownloadButtonClickListener;)Z

    move-result p0

    return p0
.end method

.method public static rg(Landroid/content/Context;Ljava/lang/String;)Z
    .locals 2

    const/4 v0, 0x0

    if-eqz p0, :cond_2

    .line 376
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_0

    .line 380
    :cond_0
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pt;->bm()Lcom/ss/android/socialbase/appdownloader/pt;

    move-result-object v1

    invoke-virtual {v1, p0}, Lcom/ss/android/socialbase/appdownloader/pt;->df(Landroid/content/Context;)Ljava/util/List;

    move-result-object p0

    .line 381
    invoke-interface {p0}, Ljava/util/List;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_2

    .line 382
    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :cond_1
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    if-eqz v1, :cond_1

    .line 383
    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getUrl()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    const/4 p0, 0x1

    return p0

    :cond_2
    :goto_0
    return v0
.end method

.method public static rg(Landroid/net/Uri;)Z
    .locals 0

    .line 188
    invoke-static {p0}, Lcom/ss/android/downloadlib/df/bm;->rg(Landroid/net/Uri;)Z

    move-result p0

    return p0
.end method

.method public static rg(Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;Ljava/lang/Object;)Z
    .locals 10

    .line 220
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_2

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    if-nez p2, :cond_0

    goto :goto_1

    .line 225
    :cond_0
    invoke-static {}, Lcom/bykv/vk/openvk/downloadnew/pt;->q()Ljava/util/Map;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 227
    invoke-interface {v0}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_1
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/Map$Entry;

    .line 228
    invoke-interface {v2}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v5

    .line 229
    invoke-interface {v2}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v2

    move-object v4, v2

    check-cast v4, Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadAdapter$OnEventLogHandler;

    if-eqz v4, :cond_1

    .line 231
    invoke-virtual {p2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v6

    move-object v7, p0

    move-object v8, p1

    move-object v9, p3

    invoke-interface/range {v4 .. v9}, Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadAdapter$OnEventLogHandler;->onEventLog(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)Z

    move-result v2

    if-nez v1, :cond_1

    if-nez v2, :cond_1

    const/4 v1, 0x1

    goto :goto_0

    :cond_2
    :goto_1
    return v1
.end method
