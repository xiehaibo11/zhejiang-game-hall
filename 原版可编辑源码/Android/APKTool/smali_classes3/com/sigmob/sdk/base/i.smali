.class public Lcom/sigmob/sdk/base/i;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/base/i$a;
    }
.end annotation


# static fields
.field private static final a:Ljava/lang/String; = "sdkConfigVer"

.field private static b:Lcom/sigmob/sdk/base/i;

.field private static c:Z


# instance fields
.field private final d:Landroid/os/Handler;

.field private final e:Ljava/lang/Runnable;

.field private final f:Ljava/lang/String;

.field private g:Z

.field private h:J

.field private i:Lcom/sigmob/sdk/base/models/config/SdkConfig;

.field private j:Lcom/sigmob/sdk/base/models/config/SdkConfig;

.field private k:Lcom/sigmob/sdk/base/i$a;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>()V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "4.9.0"

    iput-object v0, p0, Lcom/sigmob/sdk/base/i;->f:Ljava/lang/String;

    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lcom/sigmob/sdk/base/i;->h:J

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/sigmob/sdk/base/i;->i:Lcom/sigmob/sdk/base/models/config/SdkConfig;

    iput-object v0, p0, Lcom/sigmob/sdk/base/i;->j:Lcom/sigmob/sdk/base/models/config/SdkConfig;

    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/sigmob/sdk/base/i;->d:Landroid/os/Handler;

    new-instance v0, Lcom/sigmob/sdk/base/i$1;

    invoke-direct {v0, p0}, Lcom/sigmob/sdk/base/i$1;-><init>(Lcom/sigmob/sdk/base/i;)V

    iput-object v0, p0, Lcom/sigmob/sdk/base/i;->e:Ljava/lang/Runnable;

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/sigmob/sdk/base/i;->g:Z

    invoke-direct {p0}, Lcom/sigmob/sdk/base/i;->R()V

    return-void
.end method

.method private R()V
    .locals 6

    iget-object v0, p0, Lcom/sigmob/sdk/base/i;->i:Lcom/sigmob/sdk/base/models/config/SdkConfig;

    if-nez v0, :cond_0

    new-instance v0, Lcom/sigmob/sdk/base/models/config/SdkConfig$Builder;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/models/config/SdkConfig$Builder;-><init>()V

    new-instance v1, Lcom/sigmob/sdk/base/models/config/Common$Builder;

    invoke-direct {v1}, Lcom/sigmob/sdk/base/models/config/Common$Builder;-><init>()V

    new-instance v2, Lcom/sigmob/sdk/base/models/config/Android$Builder;

    invoke-direct {v2}, Lcom/sigmob/sdk/base/models/config/Android$Builder;-><init>()V

    new-instance v3, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig$Builder;

    invoke-direct {v3}, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig$Builder;-><init>()V

    invoke-virtual {v3}, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig$Builder;->build()Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/sigmob/sdk/base/models/config/Common$Builder;->endpoints(Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;)Lcom/sigmob/sdk/base/models/config/Common$Builder;

    new-instance v3, Lcom/sigmob/sdk/base/models/config/RvConfig$Builder;

    invoke-direct {v3}, Lcom/sigmob/sdk/base/models/config/RvConfig$Builder;-><init>()V

    const/4 v4, 0x4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v3, v4}, Lcom/sigmob/sdk/base/models/config/RvConfig$Builder;->cacheTop(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/config/RvConfig$Builder;

    invoke-virtual {v3}, Lcom/sigmob/sdk/base/models/config/RvConfig$Builder;->build()Lcom/sigmob/sdk/base/models/config/RvConfig;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/sigmob/sdk/base/models/config/Common$Builder;->rv_config(Lcom/sigmob/sdk/base/models/config/RvConfig;)Lcom/sigmob/sdk/base/models/config/Common$Builder;

    const/16 v3, 0x3e8

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/sigmob/sdk/base/models/config/Common$Builder;->configRefresh(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/config/Common$Builder;

    const/4 v3, 0x1

    invoke-static {v3}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v4

    invoke-virtual {v1, v4}, Lcom/sigmob/sdk/base/models/config/Common$Builder;->disable_up_location(Ljava/lang/Boolean;)Lcom/sigmob/sdk/base/models/config/Common$Builder;

    const/4 v4, 0x0

    invoke-static {v4}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v5

    invoke-virtual {v1, v5}, Lcom/sigmob/sdk/base/models/config/Common$Builder;->is_gdpr_region(Ljava/lang/Boolean;)Lcom/sigmob/sdk/base/models/config/Common$Builder;

    invoke-static {v4}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v5

    invoke-virtual {v1, v5}, Lcom/sigmob/sdk/base/models/config/Common$Builder;->enable_debug_level(Ljava/lang/Boolean;)Lcom/sigmob/sdk/base/models/config/Common$Builder;

    invoke-static {v3}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v5

    invoke-virtual {v2, v5}, Lcom/sigmob/sdk/base/models/config/Android$Builder;->disable_boot_mark(Ljava/lang/Boolean;)Lcom/sigmob/sdk/base/models/config/Android$Builder;

    invoke-static {v3}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v5

    invoke-virtual {v2, v5}, Lcom/sigmob/sdk/base/models/config/Android$Builder;->disableUpAppInfo(Ljava/lang/Boolean;)Lcom/sigmob/sdk/base/models/config/Android$Builder;

    invoke-static {v3}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/sigmob/sdk/base/models/config/Android$Builder;->oaid_api_is_disable(Ljava/lang/Boolean;)Lcom/sigmob/sdk/base/models/config/Android$Builder;

    invoke-static {v4}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/sigmob/sdk/base/models/config/Android$Builder;->enable_permission(Ljava/lang/Boolean;)Lcom/sigmob/sdk/base/models/config/Android$Builder;

    invoke-static {v4}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/sigmob/sdk/base/models/config/Android$Builder;->enable_report_crash(Ljava/lang/Boolean;)Lcom/sigmob/sdk/base/models/config/Android$Builder;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/config/Common$Builder;->build()Lcom/sigmob/sdk/base/models/config/Common;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/models/config/SdkConfig$Builder;->common_config(Lcom/sigmob/sdk/base/models/config/Common;)Lcom/sigmob/sdk/base/models/config/SdkConfig$Builder;

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/config/Android$Builder;->build()Lcom/sigmob/sdk/base/models/config/Android;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/models/config/SdkConfig$Builder;->android_config(Lcom/sigmob/sdk/base/models/config/Android;)Lcom/sigmob/sdk/base/models/config/SdkConfig$Builder;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/config/SdkConfig$Builder;->build()Lcom/sigmob/sdk/base/models/config/SdkConfig;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/base/i;->i:Lcom/sigmob/sdk/base/models/config/SdkConfig;

    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Default config: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/i;->i:Lcom/sigmob/sdk/base/models/config/SdkConfig;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/config/SdkConfig;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    return-void
.end method

.method private S()V
    .locals 2

    invoke-static {}, Lcom/sigmob/sdk/b;->b()Landroid/content/Context;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v0

    invoke-static {}, Lcom/sigmob/sdk/base/i;->c()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/ClientMetadata;->isNetworkConnected(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-static {}, Lcom/sigmob/sdk/base/c;->a()Lcom/sigmob/sdk/base/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/c;->i()Z

    move-result v0

    if-nez v0, :cond_1

    goto :goto_0

    :cond_1
    invoke-direct {p0}, Lcom/sigmob/sdk/base/i;->T()V

    return-void

    :cond_2
    :goto_0
    const-string v0, "Can\'t load an ad because there is no network connectivity."

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    invoke-direct {p0}, Lcom/sigmob/sdk/base/i;->V()V

    return-void
.end method

.method private T()V
    .locals 4

    invoke-static {}, Lcom/czhj/sdk/common/network/Networking;->getRequestQueue()Lcom/czhj/sdk/common/network/SigmobRequestQueue;

    move-result-object v0

    new-instance v1, Lcom/sigmob/sdk/base/network/e;

    invoke-static {}, Lcom/sigmob/sdk/base/i;->c()Ljava/lang/String;

    move-result-object v2

    new-instance v3, Lcom/sigmob/sdk/base/i$2;

    invoke-direct {v3, p0}, Lcom/sigmob/sdk/base/i$2;-><init>(Lcom/sigmob/sdk/base/i;)V

    invoke-direct {v1, v2, v3}, Lcom/sigmob/sdk/base/network/e;-><init>(Ljava/lang/String;Lcom/sigmob/sdk/base/network/e$a;)V

    if-nez v0, :cond_0

    const-string v0, "queue is null"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    invoke-direct {p0}, Lcom/sigmob/sdk/base/i;->V()V

    return-void

    :cond_0
    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/network/SigmobRequestQueue;->add(Lcom/czhj/volley/Request;)Lcom/czhj/volley/Request;

    const-string v0, "update sdk config"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    return-void
.end method

.method private U()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/base/i;->d:Landroid/os/Handler;

    iget-object v1, p0, Lcom/sigmob/sdk/base/i;->e:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    return-void
.end method

.method private V()V
    .locals 6

    invoke-direct {p0}, Lcom/sigmob/sdk/base/i;->U()V

    iget-boolean v0, p0, Lcom/sigmob/sdk/base/i;->g:Z

    if-eqz v0, :cond_0

    const-wide/16 v0, 0x7530

    iget-object v2, p0, Lcom/sigmob/sdk/base/i;->d:Landroid/os/Handler;

    iget-object v3, p0, Lcom/sigmob/sdk/base/i;->e:Ljava/lang/Runnable;

    iget-wide v4, p0, Lcom/sigmob/sdk/base/i;->h:J

    invoke-static {v0, v1, v4, v5}, Ljava/lang/Math;->max(JJ)J

    move-result-wide v0

    invoke-virtual {v2, v3, v0, v1}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    :cond_0
    return-void
.end method

.method private W()Lcom/sigmob/sdk/base/models/config/SplashConfig;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->i()Lcom/sigmob/sdk/base/models/config/Common;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->i()Lcom/sigmob/sdk/base/models/config/Common;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/Common;->splash_config:Lcom/sigmob/sdk/base/models/config/SplashConfig;

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method private X()Lcom/sigmob/sdk/base/models/config/NativeConfig;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->i()Lcom/sigmob/sdk/base/models/config/Common;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->i()Lcom/sigmob/sdk/base/models/config/Common;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/Common;->native_config:Lcom/sigmob/sdk/base/models/config/NativeConfig;

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public static a()Lcom/sigmob/sdk/base/i;
    .locals 2

    sget-object v0, Lcom/sigmob/sdk/base/i;->b:Lcom/sigmob/sdk/base/i;

    if-nez v0, :cond_1

    const-class v0, Lcom/sigmob/sdk/base/i;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/sigmob/sdk/base/i;->b:Lcom/sigmob/sdk/base/i;

    if-nez v1, :cond_0

    new-instance v1, Lcom/sigmob/sdk/base/i;

    invoke-direct {v1}, Lcom/sigmob/sdk/base/i;-><init>()V

    sput-object v1, Lcom/sigmob/sdk/base/i;->b:Lcom/sigmob/sdk/base/i;

    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    :cond_1
    :goto_0
    sget-object v0, Lcom/sigmob/sdk/base/i;->b:Lcom/sigmob/sdk/base/i;

    return-object v0
.end method

.method static synthetic a(Lcom/sigmob/sdk/base/i;)V
    .locals 0

    invoke-direct {p0}, Lcom/sigmob/sdk/base/i;->S()V

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/base/i;Lcom/sigmob/sdk/base/models/config/SdkConfig;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/base/i;->b(Lcom/sigmob/sdk/base/models/config/SdkConfig;)V

    return-void
.end method

.method private a(Lcom/sigmob/sdk/base/models/config/SdkConfig;)V
    .locals 4

    if-eqz p1, :cond_2

    const/4 v0, 0x0

    new-instance v1, Ljava/io/File;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/sigmob/sdk/base/utils/b;->a()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "/config"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-virtual {v1}, Ljava/io/File;->delete()Z

    :cond_0
    invoke-virtual {v1}, Ljava/io/File;->getParentFile()Ljava/io/File;

    move-result-object v2

    invoke-virtual {v2}, Ljava/io/File;->mkdirs()Z

    :try_start_0
    new-instance v2, Ljava/io/ObjectOutputStream;

    new-instance v3, Ljava/io/FileOutputStream;

    invoke-direct {v3, v1}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;)V

    invoke-direct {v2, v3}, Ljava/io/ObjectOutputStream;-><init>(Ljava/io/OutputStream;)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_1
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    invoke-virtual {p1, v2}, Lcom/sigmob/sdk/base/models/config/SdkConfig;->encode(Ljava/io/OutputStream;)V

    invoke-static {}, Lcom/sigmob/sdk/base/utils/c;->a()Landroid/content/SharedPreferences;

    move-result-object p1

    invoke-interface {p1}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object p1

    const-string v0, "sdkConfigVer"

    const-string v1, "4.9.0"

    invoke-interface {p1, v0, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    move-result-object p1

    invoke-interface {p1}, Landroid/content/SharedPreferences$Editor;->apply()V
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    invoke-virtual {v2}, Ljava/io/ObjectOutputStream;->close()V
    :try_end_2
    .catch Ljava/io/IOException; {:try_start_2 .. :try_end_2} :catch_2

    goto :goto_3

    :catchall_0
    move-exception p1

    move-object v0, v2

    goto :goto_1

    :catch_0
    move-exception p1

    move-object v0, v2

    goto :goto_0

    :catchall_1
    move-exception p1

    goto :goto_1

    :catch_1
    move-exception p1

    :goto_0
    :try_start_3
    invoke-virtual {p1}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    if-eqz v0, :cond_2

    :try_start_4
    invoke-virtual {v0}, Ljava/io/ObjectOutputStream;->close()V
    :try_end_4
    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_4} :catch_2

    goto :goto_3

    :catch_2
    move-exception p1

    invoke-virtual {p1}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    goto :goto_3

    :goto_1
    if-eqz v0, :cond_1

    :try_start_5
    invoke-virtual {v0}, Ljava/io/ObjectOutputStream;->close()V
    :try_end_5
    .catch Ljava/io/IOException; {:try_start_5 .. :try_end_5} :catch_3

    goto :goto_2

    :catch_3
    move-exception v0

    invoke-virtual {v0}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :cond_1
    :goto_2
    throw p1

    :cond_2
    :goto_3
    return-void
.end method

.method public static b()Ljava/lang/String;
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "appId="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/sigmob/windad/WindAds;->sharedAds()Lcom/sigmob/windad/WindAds;

    move-result-object v1

    invoke-virtual {v1}, Lcom/sigmob/windad/WindAds;->getAppId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "&"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "sdkVersion=4.9.0"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method static synthetic b(Lcom/sigmob/sdk/base/i;)V
    .locals 0

    invoke-direct {p0}, Lcom/sigmob/sdk/base/i;->V()V

    return-void
.end method

.method static synthetic b(Lcom/sigmob/sdk/base/i;Lcom/sigmob/sdk/base/models/config/SdkConfig;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/base/i;->a(Lcom/sigmob/sdk/base/models/config/SdkConfig;)V

    return-void
.end method

.method private b(Lcom/sigmob/sdk/base/models/config/SdkConfig;)V
    .locals 8

    if-eqz p1, :cond_1

    iget-object v0, p1, Lcom/sigmob/sdk/base/models/config/SdkConfig;->common_config:Lcom/sigmob/sdk/base/models/config/Common;

    if-eqz v0, :cond_1

    iput-object p1, p0, Lcom/sigmob/sdk/base/i;->j:Lcom/sigmob/sdk/base/models/config/SdkConfig;

    iget-object v0, p1, Lcom/sigmob/sdk/base/models/config/SdkConfig;->common_config:Lcom/sigmob/sdk/base/models/config/Common;

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/Common;->configRefresh:Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    mul-int/lit16 v0, v0, 0x3e8

    int-to-long v0, v0

    iput-wide v0, p0, Lcom/sigmob/sdk/base/i;->h:J

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "config: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/config/SdkConfig;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    iget-object p1, p0, Lcom/sigmob/sdk/base/i;->k:Lcom/sigmob/sdk/base/i$a;

    if-eqz p1, :cond_0

    invoke-interface {p1}, Lcom/sigmob/sdk/base/i$a;->a()V

    :cond_0
    invoke-static {}, Lcom/czhj/sdk/common/models/Config;->sharedInstance()Lcom/czhj/sdk/common/models/Config;

    move-result-object v0

    sget-boolean v1, Lcom/sigmob/sdk/base/i;->c:Z

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->P()Z

    move-result v2

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->O()Z

    move-result v3

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->K()I

    move-result v4

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->k()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->C()I

    move-result v6

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->B()I

    move-result v7

    invoke-virtual/range {v0 .. v7}, Lcom/czhj/sdk/common/models/Config;->update(ZZZILjava/lang/String;II)V

    :cond_1
    return-void
.end method

.method public static c()Ljava/lang/String;
    .locals 4

    invoke-static {}, Lcom/sigmob/windad/WindAds;->sharedAds()Lcom/sigmob/windad/WindAds;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/windad/WindAds;->getOptions()Lcom/sigmob/windad/WindAdOptions;

    move-result-object v0

    const-string v1, "?"

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/sigmob/windad/WindAdOptions;->getExtData()Ljava/util/HashMap;

    move-result-object v2

    if-eqz v2, :cond_1

    invoke-virtual {v0}, Lcom/sigmob/windad/WindAdOptions;->getExtData()Ljava/util/HashMap;

    move-result-object v0

    const-string v2, "sigdemo_conf_url"

    invoke-virtual {v0, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    if-eqz v0, :cond_1

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    const/16 v2, 0x3f

    invoke-virtual {v0, v2}, Ljava/lang/String;->indexOf(I)I

    move-result v2

    const/4 v3, -0x1

    if-ne v2, v3, :cond_0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/sigmob/sdk/base/i;->b()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "&"

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/sigmob/sdk/base/i;->b()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_1
    const-string v0, "https://adservice.sigmob.cn/sigmob/config"

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_2

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/sigmob/sdk/base/i;->b()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_2
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "https://adservice.sigmob.cn/sigmob/config?"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/sigmob/sdk/base/i;->b()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static d()Ljava/lang/String;
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "https://adservice.sigmob.cn/extconfig?"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/sigmob/sdk/base/i;->b()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static g()Z
    .locals 1

    sget-boolean v0, Lcom/sigmob/sdk/base/i;->c:Z

    return v0
.end method


# virtual methods
.method public A()I
    .locals 3

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->i()Lcom/sigmob/sdk/base/models/config/Common;

    move-result-object v0

    const/16 v1, 0xa

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->i()Lcom/sigmob/sdk/base/models/config/Common;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/Common;->tracking_retry_interval:Ljava/lang/Integer;

    const/16 v2, 0xb4

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/czhj/wire/Wire;->get(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    goto :goto_0

    :cond_0
    move v0, v1

    :goto_0
    if-ge v0, v1, :cond_1

    goto :goto_1

    :cond_1
    move v1, v0

    :goto_1
    mul-int/lit16 v1, v1, 0x3e8

    return v1
.end method

.method public B()I
    .locals 2

    sget-object v0, Lcom/sigmob/sdk/base/models/config/Common;->DEFAULT_MAX_SEND_LOG_RECORDS:Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->i()Lcom/sigmob/sdk/base/models/config/Common;

    move-result-object v1

    if-eqz v1, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->i()Lcom/sigmob/sdk/base/models/config/Common;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/Common;->max_send_log_records:Ljava/lang/Integer;

    sget-object v1, Lcom/sigmob/sdk/base/models/config/Common;->DEFAULT_MAX_SEND_LOG_RECORDS:Ljava/lang/Integer;

    invoke-static {v0, v1}, Lcom/czhj/wire/Wire;->get(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    :cond_0
    const/16 v1, 0xa

    if-ge v0, v1, :cond_1

    sget-object v0, Lcom/sigmob/sdk/base/models/config/Common;->DEFAULT_MAX_SEND_LOG_RECORDS:Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    :cond_1
    return v0
.end method

.method public C()I
    .locals 3

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->i()Lcom/sigmob/sdk/base/models/config/Common;

    move-result-object v0

    const/4 v1, 0x3

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->i()Lcom/sigmob/sdk/base/models/config/Common;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/Common;->send_log_interval:Ljava/lang/Integer;

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/czhj/wire/Wire;->get(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    if-ge v0, v1, :cond_0

    goto :goto_0

    :cond_0
    move v1, v0

    :cond_1
    :goto_0
    return v1
.end method

.method public D()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->i()Lcom/sigmob/sdk/base/models/config/Common;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->i()Lcom/sigmob/sdk/base/models/config/Common;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/Common;->dclog_blacklist:Ljava/util/List;

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public E()Z
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->i()Lcom/sigmob/sdk/base/models/config/Common;

    move-result-object v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->i()Lcom/sigmob/sdk/base/models/config/Common;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/Common;->enable_debug_level:Ljava/lang/Boolean;

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/czhj/wire/Wire;->get(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    return v0

    :cond_0
    return v1
.end method

.method public F()J
    .locals 7

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->i()Lcom/sigmob/sdk/base/models/config/Common;

    move-result-object v0

    const-wide/16 v1, 0x0

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->i()Lcom/sigmob/sdk/base/models/config/Common;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/Common;->load_interval:Ljava/lang/Integer;

    const/4 v3, 0x0

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-static {v0, v3}, Lcom/czhj/wire/Wire;->get(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    int-to-long v3, v0

    const-wide/16 v5, 0x1

    cmp-long v0, v3, v5

    if-gez v0, :cond_0

    return-wide v1

    :cond_0
    const-wide/16 v0, 0x3e8

    mul-long/2addr v3, v0

    return-wide v3

    :cond_1
    return-wide v1
.end method

.method public G()Z
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->i()Lcom/sigmob/sdk/base/models/config/Common;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->i()Lcom/sigmob/sdk/base/models/config/Common;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/Common;->disable_up_location:Ljava/lang/Boolean;

    const/4 v1, 0x0

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/czhj/wire/Wire;->get(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x1

    return v0
.end method

.method public H()Z
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->j()Lcom/sigmob/sdk/base/models/config/Android;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->j()Lcom/sigmob/sdk/base/models/config/Android;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/Android;->disableUpAppInfo:Ljava/lang/Boolean;

    const/4 v1, 0x0

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/czhj/wire/Wire;->get(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x1

    return v0
.end method

.method public I()I
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->j()Lcom/sigmob/sdk/base/models/config/Android;

    move-result-object v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->j()Lcom/sigmob/sdk/base/models/config/Android;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/Android;->report_log:Ljava/lang/Integer;

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/czhj/wire/Wire;->get(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0

    :cond_0
    return v1
.end method

.method public J()Z
    .locals 3

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->j()Lcom/sigmob/sdk/base/models/config/Android;

    move-result-object v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/Android;->up_wifi_list_interval:Ljava/lang/Integer;

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/czhj/wire/Wire;->get(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const/16 v2, 0x3c

    if-lt v0, v2, :cond_0

    const/4 v1, 0x1

    :cond_0
    return v1
.end method

.method public K()I
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->j()Lcom/sigmob/sdk/base/models/config/Android;

    move-result-object v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->j()Lcom/sigmob/sdk/base/models/config/Android;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/Android;->disable_up_oaid:Ljava/lang/Integer;

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/czhj/wire/Wire;->get(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0

    :cond_0
    return v1
.end method

.method public L()Z
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->j()Lcom/sigmob/sdk/base/models/config/Android;

    move-result-object v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->j()Lcom/sigmob/sdk/base/models/config/Android;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/Android;->enable_permission:Ljava/lang/Boolean;

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/czhj/wire/Wire;->get(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    return v0

    :cond_0
    return v1
.end method

.method public M()I
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->j()Lcom/sigmob/sdk/base/models/config/Android;

    move-result-object v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->j()Lcom/sigmob/sdk/base/models/config/Android;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/Android;->apk_expired_time:Ljava/lang/Integer;

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/czhj/wire/Wire;->get(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0

    :cond_0
    return v1
.end method

.method public N()Z
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->j()Lcom/sigmob/sdk/base/models/config/Android;

    move-result-object v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->j()Lcom/sigmob/sdk/base/models/config/Android;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/Android;->enable_report_crash:Ljava/lang/Boolean;

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/czhj/wire/Wire;->get(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    return v0

    :cond_0
    return v1
.end method

.method public O()Z
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->j()Lcom/sigmob/sdk/base/models/config/Android;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->j()Lcom/sigmob/sdk/base/models/config/Android;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/Android;->oaid_api_is_disable:Ljava/lang/Boolean;

    const/4 v1, 0x0

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/czhj/wire/Wire;->get(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x1

    return v0
.end method

.method public P()Z
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->j()Lcom/sigmob/sdk/base/models/config/Android;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->j()Lcom/sigmob/sdk/base/models/config/Android;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/Android;->disable_boot_mark:Ljava/lang/Boolean;

    const/4 v1, 0x0

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/czhj/wire/Wire;->get(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x1

    return v0
.end method

.method public Q()I
    .locals 1

    const/16 v0, 0x14

    return v0
.end method

.method public a(Lcom/sigmob/sdk/base/i$a;)Lcom/sigmob/sdk/base/i;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/i;->k:Lcom/sigmob/sdk/base/i$a;

    sget-object p1, Lcom/sigmob/sdk/base/i;->b:Lcom/sigmob/sdk/base/i;

    return-object p1
.end method

.method public a(Ljava/lang/String;)Z
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->v()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->i()Lcom/sigmob/sdk/base/models/config/Common;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/Common;->anti_fraud_log:Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;->events:Ljava/util/List;

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->i()Lcom/sigmob/sdk/base/models/config/Common;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/Common;->anti_fraud_log:Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;->events:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result p1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public e()V
    .locals 6

    invoke-static {}, Lcom/sigmob/sdk/base/utils/c;->a()Landroid/content/SharedPreferences;

    move-result-object v0

    const/4 v1, 0x0

    const-string v2, "sdkConfigVer"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    new-instance v2, Ljava/io/File;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/sigmob/sdk/base/utils/b;->a()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "/config"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-direct {v2, v3}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    const-string v3, "4.9.0"

    invoke-virtual {v3, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-virtual {v2}, Ljava/io/File;->exists()Z

    move-result v0

    if-eqz v0, :cond_1

    :try_start_0
    new-instance v0, Ljava/io/ObjectInputStream;

    new-instance v3, Ljava/io/FileInputStream;

    invoke-direct {v3, v2}, Ljava/io/FileInputStream;-><init>(Ljava/io/File;)V

    invoke-direct {v0, v3}, Ljava/io/ObjectInputStream;-><init>(Ljava/io/InputStream;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    sget-object v1, Lcom/sigmob/sdk/base/models/config/SdkConfig;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v1, v0}, Lcom/czhj/wire/ProtoAdapter;->decode(Ljava/io/InputStream;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/sigmob/sdk/base/models/config/SdkConfig;

    invoke-direct {p0, v1}, Lcom/sigmob/sdk/base/i;->b(Lcom/sigmob/sdk/base/models/config/SdkConfig;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    invoke-virtual {v0}, Ljava/io/ObjectInputStream;->close()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    goto :goto_2

    :catchall_0
    move-exception v1

    goto :goto_0

    :catchall_1
    move-exception v0

    move-object v5, v1

    move-object v1, v0

    move-object v0, v5

    :goto_0
    :try_start_3
    iget-object v2, p0, Lcom/sigmob/sdk/base/i;->i:Lcom/sigmob/sdk/base/models/config/SdkConfig;

    invoke-direct {p0, v2}, Lcom/sigmob/sdk/base/i;->b(Lcom/sigmob/sdk/base/models/config/SdkConfig;)V

    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_3

    if-eqz v0, :cond_2

    :try_start_4
    invoke-virtual {v0}, Ljava/io/ObjectInputStream;->close()V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_2

    goto :goto_2

    :catchall_2
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    goto :goto_2

    :catchall_3
    move-exception v1

    if-eqz v0, :cond_0

    :try_start_5
    invoke-virtual {v0}, Ljava/io/ObjectInputStream;->close()V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_4

    goto :goto_1

    :catchall_4
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :cond_0
    :goto_1
    throw v1

    :cond_1
    iget-object v0, p0, Lcom/sigmob/sdk/base/i;->i:Lcom/sigmob/sdk/base/models/config/SdkConfig;

    invoke-direct {p0, v0}, Lcom/sigmob/sdk/base/i;->b(Lcom/sigmob/sdk/base/models/config/SdkConfig;)V

    :cond_2
    :goto_2
    return-void
.end method

.method public f()V
    .locals 2

    invoke-direct {p0}, Lcom/sigmob/sdk/base/i;->U()V

    iget-object v0, p0, Lcom/sigmob/sdk/base/i;->d:Landroid/os/Handler;

    iget-object v1, p0, Lcom/sigmob/sdk/base/i;->e:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public h()Lcom/sigmob/sdk/base/models/config/SdkConfig;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/i;->j:Lcom/sigmob/sdk/base/models/config/SdkConfig;

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/base/i;->i:Lcom/sigmob/sdk/base/models/config/SdkConfig;

    :cond_0
    return-object v0
.end method

.method public i()Lcom/sigmob/sdk/base/models/config/Common;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->h()Lcom/sigmob/sdk/base/models/config/SdkConfig;

    move-result-object v0

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return-object v0

    :cond_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->h()Lcom/sigmob/sdk/base/models/config/SdkConfig;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/SdkConfig;->common_config:Lcom/sigmob/sdk/base/models/config/Common;

    return-object v0
.end method

.method public j()Lcom/sigmob/sdk/base/models/config/Android;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->h()Lcom/sigmob/sdk/base/models/config/SdkConfig;

    move-result-object v0

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return-object v0

    :cond_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->h()Lcom/sigmob/sdk/base/models/config/SdkConfig;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/SdkConfig;->android_config:Lcom/sigmob/sdk/base/models/config/Android;

    return-object v0
.end method

.method public k()Ljava/lang/String;
    .locals 3

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->i()Lcom/sigmob/sdk/base/models/config/Common;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/Common;->endpoints:Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;->log:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    const-string v0, "https://dc.sigmob.cn/log"

    :cond_0
    const/16 v1, 0x3f

    invoke-virtual {v0, v1}, Ljava/lang/String;->indexOf(I)I

    move-result v1

    const/4 v2, -0x1

    if-ne v1, v2, :cond_1

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "?"

    :goto_0
    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/sigmob/sdk/base/i;->b()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_1
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "&"

    goto :goto_0
.end method

.method public l()Ljava/lang/String;
    .locals 3

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->i()Lcom/sigmob/sdk/base/models/config/Common;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/Common;->endpoints:Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;->ads:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    const-string v0, "https://adservice.sigmob.cn/ad/v4"

    :cond_0
    const/16 v1, 0x3f

    invoke-virtual {v0, v1}, Ljava/lang/String;->indexOf(I)I

    move-result v1

    const/4 v2, -0x1

    if-ne v1, v2, :cond_1

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "?"

    :goto_0
    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/sigmob/sdk/base/i;->b()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_1
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "&"

    goto :goto_0
.end method

.method public m()Ljava/lang/String;
    .locals 3

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->i()Lcom/sigmob/sdk/base/models/config/Common;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/Common;->endpoints:Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;->hb_ads:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    const-string v0, "https://adservice.sigmob.cn/hb/v2/ad"

    :cond_0
    const/16 v1, 0x3f

    invoke-virtual {v0, v1}, Ljava/lang/String;->indexOf(I)I

    move-result v1

    const/4 v2, -0x1

    if-ne v1, v2, :cond_1

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "?"

    :goto_0
    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/sigmob/sdk/base/i;->b()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_1
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "&"

    goto :goto_0
.end method

.method public n()Lcom/sigmob/sdk/base/models/config/RvConfig;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->i()Lcom/sigmob/sdk/base/models/config/Common;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->i()Lcom/sigmob/sdk/base/models/config/Common;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/Common;->rv_config:Lcom/sigmob/sdk/base/models/config/RvConfig;

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public o()I
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->n()Lcom/sigmob/sdk/base/models/config/RvConfig;

    move-result-object v0

    const/4 v1, 0x5

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->n()Lcom/sigmob/sdk/base/models/config/RvConfig;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/RvConfig;->cacheTop:Ljava/lang/Integer;

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/czhj/wire/Wire;->get(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0

    :cond_0
    return v1
.end method

.method public p()J
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->n()Lcom/sigmob/sdk/base/models/config/RvConfig;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->n()Lcom/sigmob/sdk/base/models/config/RvConfig;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/RvConfig;->ad_load_timeout:Ljava/lang/Integer;

    const/16 v1, 0x2d

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/czhj/wire/Wire;->get(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const/16 v1, 0xa

    if-ge v0, v1, :cond_0

    move v0, v1

    :cond_0
    mul-int/lit16 v0, v0, 0x3e8

    int-to-long v0, v0

    return-wide v0

    :cond_1
    const-wide/32 v0, 0xafc8

    return-wide v0
.end method

.method public q()Lcom/sigmob/sdk/base/models/config/DialogSetting;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->n()Lcom/sigmob/sdk/base/models/config/RvConfig;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->n()Lcom/sigmob/sdk/base/models/config/RvConfig;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/RvConfig;->close_dialog_setting:Lcom/sigmob/sdk/base/models/config/DialogSetting;

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public r()I
    .locals 2

    invoke-direct {p0}, Lcom/sigmob/sdk/base/i;->W()Lcom/sigmob/sdk/base/models/config/SplashConfig;

    move-result-object v0

    const/16 v1, 0x32

    if-nez v0, :cond_0

    return v1

    :cond_0
    invoke-direct {p0}, Lcom/sigmob/sdk/base/i;->W()Lcom/sigmob/sdk/base/models/config/SplashConfig;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/SplashConfig;->cacheTop:Ljava/lang/Integer;

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/czhj/wire/Wire;->get(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0
.end method

.method public s()J
    .locals 4

    invoke-direct {p0}, Lcom/sigmob/sdk/base/i;->W()Lcom/sigmob/sdk/base/models/config/SplashConfig;

    move-result-object v0

    const/4 v1, 0x2

    if-eqz v0, :cond_0

    invoke-direct {p0}, Lcom/sigmob/sdk/base/i;->W()Lcom/sigmob/sdk/base/models/config/SplashConfig;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/SplashConfig;->material_expired_time:Ljava/lang/Integer;

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/czhj/wire/Wire;->get(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v1

    :cond_0
    if-gez v1, :cond_1

    int-to-long v0, v1

    return-wide v0

    :cond_1
    int-to-long v0, v1

    const-wide/16 v2, 0x18

    mul-long/2addr v0, v2

    const-wide/16 v2, 0x3c

    mul-long/2addr v0, v2

    mul-long/2addr v0, v2

    const-wide/16 v2, 0x3e8

    mul-long/2addr v0, v2

    return-wide v0
.end method

.method public t()I
    .locals 2

    invoke-direct {p0}, Lcom/sigmob/sdk/base/i;->X()Lcom/sigmob/sdk/base/models/config/NativeConfig;

    move-result-object v0

    const/16 v1, 0x32

    if-eqz v0, :cond_0

    invoke-direct {p0}, Lcom/sigmob/sdk/base/i;->X()Lcom/sigmob/sdk/base/models/config/NativeConfig;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/NativeConfig;->cacheTop:Ljava/lang/Integer;

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/czhj/wire/Wire;->get(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0

    :cond_0
    return v1
.end method

.method public u()J
    .locals 2

    invoke-direct {p0}, Lcom/sigmob/sdk/base/i;->X()Lcom/sigmob/sdk/base/models/config/NativeConfig;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-direct {p0}, Lcom/sigmob/sdk/base/i;->X()Lcom/sigmob/sdk/base/models/config/NativeConfig;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/NativeConfig;->ad_load_timeout:Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const/16 v1, 0xa

    if-ge v0, v1, :cond_0

    move v0, v1

    :cond_0
    mul-int/lit16 v0, v0, 0x3e8

    int-to-long v0, v0

    return-wide v0

    :cond_1
    const-wide/32 v0, 0xafc8

    return-wide v0
.end method

.method public v()Z
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->i()Lcom/sigmob/sdk/base/models/config/Common;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->i()Lcom/sigmob/sdk/base/models/config/Common;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/Common;->anti_fraud_log:Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->i()Lcom/sigmob/sdk/base/models/config/Common;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/Common;->anti_fraud_log:Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;->events:Ljava/util/List;

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public w()I
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->v()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->i()Lcom/sigmob/sdk/base/models/config/Common;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/Common;->anti_fraud_log:Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;->motion_config:Lcom/sigmob/sdk/base/models/config/MotionConfig;

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->i()Lcom/sigmob/sdk/base/models/config/Common;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/Common;->anti_fraud_log:Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;->motion_config:Lcom/sigmob/sdk/base/models/config/MotionConfig;

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/MotionConfig;->interval:Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public x()I
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->v()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->i()Lcom/sigmob/sdk/base/models/config/Common;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/Common;->anti_fraud_log:Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;->motion_config:Lcom/sigmob/sdk/base/models/config/MotionConfig;

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->i()Lcom/sigmob/sdk/base/models/config/Common;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/Common;->anti_fraud_log:Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;->motion_config:Lcom/sigmob/sdk/base/models/config/MotionConfig;

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/MotionConfig;->count:Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public y()I
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->v()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->i()Lcom/sigmob/sdk/base/models/config/Common;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/Common;->anti_fraud_log:Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;->motion_config:Lcom/sigmob/sdk/base/models/config/MotionConfig;

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->i()Lcom/sigmob/sdk/base/models/config/Common;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/Common;->anti_fraud_log:Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;->motion_config:Lcom/sigmob/sdk/base/models/config/MotionConfig;

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/MotionConfig;->queue_max:Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    add-int/lit8 v0, v0, -0x32

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->i()Lcom/sigmob/sdk/base/models/config/Common;

    move-result-object v1

    iget-object v1, v1, Lcom/sigmob/sdk/base/models/config/Common;->anti_fraud_log:Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;

    iget-object v1, v1, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;->motion_config:Lcom/sigmob/sdk/base/models/config/MotionConfig;

    iget-object v1, v1, Lcom/sigmob/sdk/base/models/config/MotionConfig;->count:Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    mul-int/lit8 v1, v1, 0x2

    if-ge v0, v1, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->i()Lcom/sigmob/sdk/base/models/config/Common;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/Common;->anti_fraud_log:Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;->motion_config:Lcom/sigmob/sdk/base/models/config/MotionConfig;

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/MotionConfig;->count:Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    mul-int/lit8 v0, v0, 0x2

    add-int/lit8 v0, v0, 0x32

    return v0

    :cond_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->i()Lcom/sigmob/sdk/base/models/config/Common;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/Common;->anti_fraud_log:Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;->motion_config:Lcom/sigmob/sdk/base/models/config/MotionConfig;

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/MotionConfig;->queue_max:Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0

    :cond_1
    const/4 v0, 0x0

    return v0
.end method

.method public z()J
    .locals 5

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->i()Lcom/sigmob/sdk/base/models/config/Common;

    move-result-object v0

    const-wide/16 v1, 0xb4

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->i()Lcom/sigmob/sdk/base/models/config/Common;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/config/Common;->tracking_expiration_time:Ljava/lang/Integer;

    const v3, 0x15180

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-static {v0, v3}, Lcom/czhj/wire/Wire;->get(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    int-to-long v3, v0

    goto :goto_0

    :cond_0
    move-wide v3, v1

    :goto_0
    cmp-long v0, v3, v1

    if-gez v0, :cond_1

    goto :goto_1

    :cond_1
    move-wide v1, v3

    :goto_1
    const-wide/16 v3, 0x3e8

    mul-long/2addr v1, v3

    return-wide v1
.end method
