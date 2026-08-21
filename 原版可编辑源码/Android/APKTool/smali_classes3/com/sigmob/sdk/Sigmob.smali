.class public Lcom/sigmob/sdk/Sigmob;
.super Ljava/lang/Object;


# static fields
.field private static a:Lcom/sigmob/sdk/Sigmob;

.field private static b:Z

.field public static macroCommon:Lcom/sigmob/sdk/base/models/SigMacroCommon;


# instance fields
.field private c:Lcom/sigmob/windad/WindAdError;

.field private d:Lcom/czhj/sdk/common/ThreadPool/RepeatingHandlerRunnable;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/sigmob/sdk/Sigmob;->d:Lcom/czhj/sdk/common/ThreadPool/RepeatingHandlerRunnable;

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/Sigmob;Lcom/sigmob/windad/WindAdError;)Lcom/sigmob/windad/WindAdError;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/Sigmob;->c:Lcom/sigmob/windad/WindAdError;

    return-object p1
.end method

.method private a([B)Ljava/lang/String;
    .locals 2

    if-eqz p1, :cond_1

    array-length v0, p1

    if-nez v0, :cond_0

    goto :goto_1

    :cond_0
    new-instance v0, Ljava/io/ByteArrayOutputStream;

    invoke-direct {v0}, Ljava/io/ByteArrayOutputStream;-><init>()V

    new-instance v1, Ljava/util/zip/DeflaterOutputStream;

    invoke-direct {v1, v0}, Ljava/util/zip/DeflaterOutputStream;-><init>(Ljava/io/OutputStream;)V

    :try_start_0
    invoke-virtual {v1, p1}, Ljava/util/zip/DeflaterOutputStream;->write([B)V

    invoke-virtual {v1}, Ljava/util/zip/DeflaterOutputStream;->flush()V

    invoke-virtual {v1}, Ljava/util/zip/DeflaterOutputStream;->close()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    invoke-virtual {v0}, Ljava/io/ByteArrayOutputStream;->toByteArray()[B

    move-result-object p1

    const/4 v0, 0x2

    invoke-static {p1, v0}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p1

    return-object p1

    :cond_1
    :goto_1
    const/4 p1, 0x0

    return-object p1
.end method

.method static synthetic a()V
    .locals 0

    invoke-static {}, Lcom/sigmob/sdk/Sigmob;->d()V

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/Sigmob;)V
    .locals 0

    invoke-direct {p0}, Lcom/sigmob/sdk/Sigmob;->k()V

    return-void
.end method

.method static synthetic b()V
    .locals 0

    invoke-static {}, Lcom/sigmob/sdk/Sigmob;->f()V

    return-void
.end method

.method static synthetic b(Lcom/sigmob/sdk/Sigmob;)V
    .locals 0

    invoke-direct {p0}, Lcom/sigmob/sdk/Sigmob;->h()V

    return-void
.end method

.method private c()V
    .locals 0

    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->b()V

    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->j()V

    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->h()V

    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->g()V

    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->f()V

    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->i()V

    return-void
.end method

.method static synthetic c(Lcom/sigmob/sdk/Sigmob;)V
    .locals 0

    invoke-direct {p0}, Lcom/sigmob/sdk/Sigmob;->c()V

    return-void
.end method

.method public static createRequest()Lcom/czhj/sdk/common/models/BidRequest$Builder;
    .locals 5

    const-string v0, "4.9.0"

    new-instance v1, Lcom/czhj/sdk/common/models/BidRequest$Builder;

    invoke-direct {v1}, Lcom/czhj/sdk/common/models/BidRequest$Builder;-><init>()V

    :try_start_0
    invoke-static {}, Lcom/sigmob/sdk/base/network/a;->b()Lcom/czhj/sdk/common/models/App$Builder;

    move-result-object v2

    invoke-virtual {v2}, Lcom/czhj/sdk/common/models/App$Builder;->build()Lcom/czhj/sdk/common/models/App;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/czhj/sdk/common/models/BidRequest$Builder;->app(Lcom/czhj/sdk/common/models/App;)Lcom/czhj/sdk/common/models/BidRequest$Builder;

    invoke-static {}, Lcom/czhj/sdk/common/models/ModelBuilderCreator;->createDevice()Lcom/czhj/sdk/common/models/Device$Builder;

    move-result-object v2

    invoke-static {}, Lcom/czhj/sdk/common/models/ModelBuilderCreator;->createDeviceId()Lcom/czhj/sdk/common/models/DeviceId$Builder;

    move-result-object v3

    invoke-virtual {v3}, Lcom/czhj/sdk/common/models/DeviceId$Builder;->build()Lcom/czhj/sdk/common/models/DeviceId;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/czhj/sdk/common/models/Device$Builder;->did(Lcom/czhj/sdk/common/models/DeviceId;)Lcom/czhj/sdk/common/models/Device$Builder;

    invoke-virtual {v2}, Lcom/czhj/sdk/common/models/Device$Builder;->build()Lcom/czhj/sdk/common/models/Device;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/czhj/sdk/common/models/BidRequest$Builder;->device(Lcom/czhj/sdk/common/models/Device;)Lcom/czhj/sdk/common/models/BidRequest$Builder;

    invoke-static {}, Lcom/czhj/sdk/common/models/ModelBuilderCreator;->createNetwork()Lcom/czhj/sdk/common/models/Network$Builder;

    move-result-object v2

    invoke-virtual {v2}, Lcom/czhj/sdk/common/models/Network$Builder;->build()Lcom/czhj/sdk/common/models/Network;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/czhj/sdk/common/models/BidRequest$Builder;->network(Lcom/czhj/sdk/common/models/Network;)Lcom/czhj/sdk/common/models/BidRequest$Builder;

    invoke-static {}, Lcom/czhj/sdk/common/models/ModelBuilderCreator;->createAdSlot()Lcom/czhj/sdk/common/models/AdSlot$Builder;

    move-result-object v2

    iget-object v3, v2, Lcom/czhj/sdk/common/models/AdSlot$Builder;->material_type:Ljava/util/List;

    sget-object v4, Lcom/sigmob/sdk/splash/a;->b:Lcom/sigmob/sdk/splash/a;

    invoke-virtual {v4}, Lcom/sigmob/sdk/splash/a;->a()I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-interface {v3, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    iget-object v3, v2, Lcom/czhj/sdk/common/models/AdSlot$Builder;->material_type:Ljava/util/List;

    sget-object v4, Lcom/sigmob/sdk/splash/a;->c:Lcom/sigmob/sdk/splash/a;

    invoke-virtual {v4}, Lcom/sigmob/sdk/splash/a;->a()I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-interface {v3, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    iget-object v3, v2, Lcom/czhj/sdk/common/models/AdSlot$Builder;->material_type:Ljava/util/List;

    sget-object v4, Lcom/sigmob/sdk/splash/a;->d:Lcom/sigmob/sdk/splash/a;

    invoke-virtual {v4}, Lcom/sigmob/sdk/splash/a;->a()I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-interface {v3, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    iget-object v3, v2, Lcom/czhj/sdk/common/models/AdSlot$Builder;->creative_type:Ljava/util/List;

    sget-object v4, Lcom/sigmob/sdk/base/common/l;->b:Lcom/sigmob/sdk/base/common/l;

    invoke-virtual {v4}, Lcom/sigmob/sdk/base/common/l;->a()I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-interface {v3, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    iget-object v3, v2, Lcom/czhj/sdk/common/models/AdSlot$Builder;->creative_type:Ljava/util/List;

    sget-object v4, Lcom/sigmob/sdk/base/common/l;->g:Lcom/sigmob/sdk/base/common/l;

    invoke-virtual {v4}, Lcom/sigmob/sdk/base/common/l;->a()I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-interface {v3, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    iget-object v3, v2, Lcom/czhj/sdk/common/models/AdSlot$Builder;->creative_type:Ljava/util/List;

    sget-object v4, Lcom/sigmob/sdk/base/common/l;->a:Lcom/sigmob/sdk/base/common/l;

    invoke-virtual {v4}, Lcom/sigmob/sdk/base/common/l;->a()I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-interface {v3, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    iget-object v3, v2, Lcom/czhj/sdk/common/models/AdSlot$Builder;->creative_type:Ljava/util/List;

    sget-object v4, Lcom/sigmob/sdk/base/common/l;->c:Lcom/sigmob/sdk/base/common/l;

    invoke-virtual {v4}, Lcom/sigmob/sdk/base/common/l;->a()I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-interface {v3, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    iget-object v3, v2, Lcom/czhj/sdk/common/models/AdSlot$Builder;->creative_type:Ljava/util/List;

    sget-object v4, Lcom/sigmob/sdk/base/common/l;->e:Lcom/sigmob/sdk/base/common/l;

    invoke-virtual {v4}, Lcom/sigmob/sdk/base/common/l;->a()I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-interface {v3, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    iget-object v3, v2, Lcom/czhj/sdk/common/models/AdSlot$Builder;->creative_type:Ljava/util/List;

    sget-object v4, Lcom/sigmob/sdk/base/common/l;->f:Lcom/sigmob/sdk/base/common/l;

    invoke-virtual {v4}, Lcom/sigmob/sdk/base/common/l;->a()I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-interface {v3, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    iget-object v3, v2, Lcom/czhj/sdk/common/models/AdSlot$Builder;->creative_type:Ljava/util/List;

    sget-object v4, Lcom/sigmob/sdk/base/common/l;->h:Lcom/sigmob/sdk/base/common/l;

    invoke-virtual {v4}, Lcom/sigmob/sdk/base/common/l;->a()I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-interface {v3, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    iget-object v3, v1, Lcom/czhj/sdk/common/models/BidRequest$Builder;->slots:Ljava/util/List;

    invoke-virtual {v2}, Lcom/czhj/sdk/common/models/AdSlot$Builder;->build()Lcom/czhj/sdk/common/models/AdSlot;

    move-result-object v2

    invoke-interface {v3, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    iput-object v2, v1, Lcom/czhj/sdk/common/models/BidRequest$Builder;->req_timestamp:Ljava/lang/Long;

    invoke-static {}, Lcom/sigmob/sdk/base/network/a;->d()Lcom/czhj/sdk/common/models/Privacy$Builder;

    move-result-object v2

    invoke-virtual {v2}, Lcom/czhj/sdk/common/models/Privacy$Builder;->build()Lcom/czhj/sdk/common/models/Privacy;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/czhj/sdk/common/models/BidRequest$Builder;->privacy(Lcom/czhj/sdk/common/models/Privacy;)Lcom/czhj/sdk/common/models/BidRequest$Builder;

    invoke-static {}, Lcom/sigmob/sdk/base/network/a;->c()Lcom/czhj/sdk/common/models/User$Builder;

    move-result-object v2

    invoke-virtual {v2}, Lcom/czhj/sdk/common/models/User$Builder;->build()Lcom/czhj/sdk/common/models/User;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/czhj/sdk/common/models/BidRequest$Builder;->user(Lcom/czhj/sdk/common/models/User;)Lcom/czhj/sdk/common/models/BidRequest$Builder;

    const/4 v2, 0x1

    invoke-static {v2}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v2

    iput-object v2, v1, Lcom/czhj/sdk/common/models/BidRequest$Builder;->disable_mediation:Ljava/lang/Boolean;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    invoke-static {v0}, Lcom/czhj/sdk/common/models/ModelBuilderCreator;->createVersion(Ljava/lang/String;)Lcom/czhj/sdk/common/models/Version$Builder;

    move-result-object v2

    invoke-virtual {v2, v0}, Lcom/czhj/sdk/common/models/Version$Builder;->version_str(Ljava/lang/String;)Lcom/czhj/sdk/common/models/Version$Builder;

    invoke-virtual {v2}, Lcom/czhj/sdk/common/models/Version$Builder;->build()Lcom/czhj/sdk/common/models/Version;

    move-result-object v0

    invoke-virtual {v1, v0}, Lcom/czhj/sdk/common/models/BidRequest$Builder;->sdk_version(Lcom/czhj/sdk/common/models/Version;)Lcom/czhj/sdk/common/models/BidRequest$Builder;

    :cond_0
    invoke-static {}, Lcom/czhj/sdk/common/models/ModelBuilderCreator;->createWXProgramReq()Lcom/czhj/sdk/common/models/WXProgramReq$Builder;

    move-result-object v0

    invoke-virtual {v0}, Lcom/czhj/sdk/common/models/WXProgramReq$Builder;->build()Lcom/czhj/sdk/common/models/WXProgramReq;

    move-result-object v0

    invoke-virtual {v1, v0}, Lcom/czhj/sdk/common/models/BidRequest$Builder;->wx_program_req(Lcom/czhj/sdk/common/models/WXProgramReq;)Lcom/czhj/sdk/common/models/BidRequest$Builder;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :goto_0
    return-object v1
.end method

.method private static d()V
    .locals 3

    :try_start_0
    invoke-static {}, Lcom/sigmob/sdk/base/c;->a()Lcom/sigmob/sdk/base/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/c;->i()Z

    move-result v0

    invoke-static {}, Lcom/sigmob/sdk/base/i;->a()Lcom/sigmob/sdk/base/i;

    move-result-object v1

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/i;->G()Z

    move-result v1

    const-string v2, "LocationService"

    if-eqz v0, :cond_0

    if-nez v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    invoke-static {v2, v0}, Lcom/sigmob/sdk/base/services/j;->a(Ljava/lang/String;Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v0

    const-string v1, "updateLocationMonitor fail"

    invoke-static {v1, v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_1
    return-void
.end method

.method static synthetic d(Lcom/sigmob/sdk/Sigmob;)V
    .locals 0

    invoke-direct {p0}, Lcom/sigmob/sdk/Sigmob;->i()V

    return-void
.end method

.method static synthetic e(Lcom/sigmob/sdk/Sigmob;)Lcom/czhj/sdk/common/ThreadPool/RepeatingHandlerRunnable;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/Sigmob;->d:Lcom/czhj/sdk/common/ThreadPool/RepeatingHandlerRunnable;

    return-object p0
.end method

.method private static e()V
    .locals 2

    :try_start_0
    const-string v0, "AppInstallService"

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/sigmob/sdk/base/services/j;->a(Ljava/lang/String;Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    const-string v1, "initAppInstallService fail"

    invoke-static {v1, v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_0
    return-void
.end method

.method private static f()V
    .locals 3

    :try_start_0
    invoke-static {}, Lcom/sigmob/sdk/base/c;->a()Lcom/sigmob/sdk/base/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/c;->i()Z

    move-result v0

    invoke-static {}, Lcom/sigmob/sdk/base/i;->a()Lcom/sigmob/sdk/base/i;

    move-result-object v1

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/i;->J()Z

    move-result v1

    const-string v2, "WifiScanService"

    if-eqz v0, :cond_0

    if-eqz v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    invoke-static {v2, v0}, Lcom/sigmob/sdk/base/services/j;->a(Ljava/lang/String;Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v0

    const-string v1, "updateWifiScanService fail"

    invoke-static {v1, v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_1
    return-void
.end method

.method private static g()V
    .locals 2

    :try_start_0
    const-string v0, "DownloadService"

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/sigmob/sdk/base/services/j;->a(Ljava/lang/String;Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    const-string v1, "initDownloadService fail"

    invoke-static {v1, v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_0
    return-void
.end method

.method public static declared-synchronized getInstance()Lcom/sigmob/sdk/Sigmob;
    .locals 2

    const-class v0, Lcom/sigmob/sdk/Sigmob;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/sigmob/sdk/Sigmob;->a:Lcom/sigmob/sdk/Sigmob;

    if-nez v1, :cond_0

    monitor-enter v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    new-instance v1, Lcom/sigmob/sdk/Sigmob;

    invoke-direct {v1}, Lcom/sigmob/sdk/Sigmob;-><init>()V

    sput-object v1, Lcom/sigmob/sdk/Sigmob;->a:Lcom/sigmob/sdk/Sigmob;

    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    throw v1

    :cond_0
    :goto_0
    sget-object v1, Lcom/sigmob/sdk/Sigmob;->a:Lcom/sigmob/sdk/Sigmob;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    monitor-exit v0

    return-object v1

    :catchall_1
    move-exception v1

    monitor-exit v0

    throw v1
.end method

.method private h()V
    .locals 4

    new-instance v0, Lcom/czhj/sdk/common/network/JsonRequest;

    invoke-static {}, Lcom/sigmob/sdk/base/i;->d()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Lcom/sigmob/sdk/Sigmob$5;

    invoke-direct {v2, p0}, Lcom/sigmob/sdk/Sigmob$5;-><init>(Lcom/sigmob/sdk/Sigmob;)V

    const/4 v3, 0x0

    invoke-direct {v0, v1, v2, v3}, Lcom/czhj/sdk/common/network/JsonRequest;-><init>(Ljava/lang/String;Lcom/czhj/sdk/common/network/JsonRequest$Listener;I)V

    invoke-static {}, Lcom/czhj/sdk/common/network/Networking;->getRequestQueue()Lcom/czhj/sdk/common/network/SigmobRequestQueue;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/czhj/sdk/common/network/SigmobRequestQueue;->add(Lcom/czhj/volley/Request;)Lcom/czhj/volley/Request;

    return-void
.end method

.method private i()V
    .locals 4

    invoke-static {}, Lcom/sigmob/sdk/Sigmob;->g()V

    invoke-static {}, Lcom/sigmob/sdk/Sigmob;->e()V

    invoke-static {}, Lcom/sigmob/sdk/b;->a()V

    invoke-static {}, Lcom/sigmob/sdk/base/i;->a()Lcom/sigmob/sdk/base/i;

    move-result-object v0

    new-instance v1, Lcom/sigmob/sdk/Sigmob$6;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/Sigmob$6;-><init>(Lcom/sigmob/sdk/Sigmob;)V

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/i;->a(Lcom/sigmob/sdk/base/i$a;)Lcom/sigmob/sdk/base/i;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/i;->f()V

    invoke-static {}, Lcom/sigmob/sdk/base/i;->a()Lcom/sigmob/sdk/base/i;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/i;->N()Z

    move-result v0

    if-eqz v0, :cond_1

    const-class v0, Lcom/sigmob/windad/WindAds;

    invoke-virtual {v0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v0

    const-string v1, "\\."

    invoke-virtual {v0, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v0

    array-length v1, v0

    const/4 v2, 0x2

    if-gt v1, v2, :cond_0

    return-void

    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const/4 v2, 0x0

    aget-object v2, v0, v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "."

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v3, 0x1

    aget-object v0, v0, v3

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {}, Lcom/czhj/sdk/common/exceptions/CrashHandler;->getInstance()Lcom/czhj/sdk/common/exceptions/CrashHandler;

    move-result-object v1

    new-instance v2, Lcom/sigmob/sdk/Sigmob$7;

    invoke-direct {v2, p0, v0}, Lcom/sigmob/sdk/Sigmob$7;-><init>(Lcom/sigmob/sdk/Sigmob;Ljava/lang/String;)V

    invoke-virtual {v1, v2}, Lcom/czhj/sdk/common/exceptions/CrashHandler;->add(Lcom/czhj/sdk/common/exceptions/CrashHandler$CrashHandlerListener;)V

    :cond_1
    invoke-direct {p0}, Lcom/sigmob/sdk/Sigmob;->j()V

    return-void
.end method

.method private j()V
    .locals 1

    invoke-static {}, Lcom/sigmob/sdk/b;->b()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/ImageManager;->with(Landroid/content/Context;)Lcom/czhj/sdk/common/utils/ImageManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/czhj/sdk/common/utils/ImageManager;->clearCache()V

    return-void
.end method

.method private k()V
    .locals 3

    new-instance v0, Lcom/sigmob/sdk/Sigmob$8;

    new-instance v1, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v2

    invoke-direct {v1, v2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    invoke-direct {v0, p0, v1}, Lcom/sigmob/sdk/Sigmob$8;-><init>(Lcom/sigmob/sdk/Sigmob;Landroid/os/Handler;)V

    iput-object v0, p0, Lcom/sigmob/sdk/Sigmob;->d:Lcom/czhj/sdk/common/ThreadPool/RepeatingHandlerRunnable;

    invoke-static {}, Lcom/sigmob/sdk/base/i;->a()Lcom/sigmob/sdk/base/i;

    move-result-object v1

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/i;->A()I

    move-result v1

    int-to-long v1, v1

    invoke-virtual {v0, v1, v2}, Lcom/czhj/sdk/common/ThreadPool/RepeatingHandlerRunnable;->startRepeating(J)V

    return-void
.end method


# virtual methods
.method public getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/Sigmob;->macroCommon:Lcom/sigmob/sdk/base/models/SigMacroCommon;

    if-nez v0, :cond_0

    new-instance v0, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/models/SigMacroCommon;-><init>()V

    sput-object v0, Lcom/sigmob/sdk/Sigmob;->macroCommon:Lcom/sigmob/sdk/base/models/SigMacroCommon;

    :cond_0
    sget-object v0, Lcom/sigmob/sdk/Sigmob;->macroCommon:Lcom/sigmob/sdk/base/models/SigMacroCommon;

    return-object v0
.end method

.method public getSDKToken()Ljava/lang/String;
    .locals 3

    invoke-static {}, Lcom/sigmob/sdk/Sigmob;->createRequest()Lcom/czhj/sdk/common/models/BidRequest$Builder;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "2.01|"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/czhj/sdk/common/models/BidRequest$Builder;->build()Lcom/czhj/sdk/common/models/BidRequest;

    move-result-object v0

    invoke-virtual {v0}, Lcom/czhj/sdk/common/models/BidRequest;->encode()[B

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/sigmob/sdk/Sigmob;->a([B)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    const-string v2, "token_request"

    invoke-static {v2, v1, v1, v1}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "getSDKToken: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    return-object v0
.end method

.method public getSigMobError()Lcom/sigmob/windad/WindAdError;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/Sigmob;->c:Lcom/sigmob/windad/WindAdError;

    return-object v0
.end method

.method public init()V
    .locals 4

    sget-object v0, Lcom/sigmob/sdk/base/h;->e:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    sput-boolean v0, Lcom/czhj/volley/VolleyLog;->DEBUG:Z

    new-instance v0, Lcom/sigmob/sdk/Sigmob$1;

    invoke-direct {v0, p0}, Lcom/sigmob/sdk/Sigmob$1;-><init>(Lcom/sigmob/sdk/Sigmob;)V

    const-string v1, "init"

    invoke-static {v1, v0}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Lcom/sigmob/sdk/base/common/z$a;)V

    invoke-static {}, Lcom/sigmob/sdk/base/i;->a()Lcom/sigmob/sdk/base/i;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/i;->L()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    new-instance v2, Lcom/sigmob/sdk/Sigmob$2;

    invoke-direct {v2, p0}, Lcom/sigmob/sdk/Sigmob$2;-><init>(Lcom/sigmob/sdk/Sigmob;)V

    const-string v3, "permission"

    invoke-static {v3, v1, v0, v2}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V

    :cond_0
    invoke-static {}, Lcom/czhj/sdk/common/ThreadPool/ThreadPoolFactory$BackgroundThreadPool;->getInstance()Lcom/czhj/sdk/common/ThreadPool/ThreadPoolFactory$BackgroundThreadPool;

    move-result-object v0

    new-instance v1, Lcom/sigmob/sdk/Sigmob$3;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/Sigmob$3;-><init>(Lcom/sigmob/sdk/Sigmob;)V

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/ThreadPool/ThreadPoolFactory$BackgroundThreadPool;->submit(Ljava/lang/Runnable;)V

    invoke-static {}, Lcom/czhj/sdk/common/ThreadPool/ThreadPoolFactory$BackgroundThreadPool;->getInstance()Lcom/czhj/sdk/common/ThreadPool/ThreadPoolFactory$BackgroundThreadPool;

    move-result-object v0

    new-instance v1, Lcom/sigmob/sdk/Sigmob$4;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/Sigmob$4;-><init>(Lcom/sigmob/sdk/Sigmob;)V

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/ThreadPool/ThreadPoolFactory$BackgroundThreadPool;->submit(Ljava/lang/Runnable;)V

    const/4 v0, 0x1

    sput-boolean v0, Lcom/sigmob/sdk/Sigmob;->b:Z

    return-void
.end method
