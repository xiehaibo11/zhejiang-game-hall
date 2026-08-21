.class public Lcom/bianfeng/seppellita/SepperllitaSdk;
.super Ljava/lang/Object;
.source "SepperllitaSdk.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/seppellita/SepperllitaSdk$InitCallback;
    }
.end annotation


# static fields
.field private static volatile sdk:Lcom/bianfeng/seppellita/SepperllitaSdk;


# instance fields
.field private callback:Lcom/bianfeng/seppellita/SepperllitaCallback;

.field private configUtils:Lcom/bianfeng/seppellita/utils/ConfigUtils;

.field private volatile context:Landroid/content/Context;

.field private dbManager:Lcom/bianfeng/seppellita/db/DBManager;

.field private eventBeanManager:Lcom/bianfeng/seppellita/manager/EventBeanManager;

.field private initCallback:Lcom/bianfeng/seppellita/SepperllitaSdk$InitCallback;

.field private volatile isPostImmediately:Z

.field private mSiteID:Ljava/lang/String;

.field private netManager:Lcom/bianfeng/seppellita/net/NetManager;

.field private policysManager:Lcom/bianfeng/seppellita/manager/IPolicysManager;


# direct methods
.method private constructor <init>()V
    .locals 1

    .line 203
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 54
    iput-boolean v0, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->isPostImmediately:Z

    const/4 v0, 0x0

    .line 55
    iput-object v0, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->context:Landroid/content/Context;

    .line 56
    new-instance v0, Lcom/bianfeng/seppellita/SepperllitaSdk$1;

    invoke-direct {v0, p0}, Lcom/bianfeng/seppellita/SepperllitaSdk$1;-><init>(Lcom/bianfeng/seppellita/SepperllitaSdk;)V

    iput-object v0, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->callback:Lcom/bianfeng/seppellita/SepperllitaCallback;

    return-void
.end method

.method static synthetic access$000(Lcom/bianfeng/seppellita/SepperllitaSdk;)Z
    .locals 0

    .line 44
    iget-boolean p0, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->isPostImmediately:Z

    return p0
.end method

.method static synthetic access$002(Lcom/bianfeng/seppellita/SepperllitaSdk;Z)Z
    .locals 0

    .line 44
    iput-boolean p1, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->isPostImmediately:Z

    return p1
.end method

.method static synthetic access$100(Lcom/bianfeng/seppellita/SepperllitaSdk;Ljava/util/List;)V
    .locals 0

    .line 44
    invoke-direct {p0, p1}, Lcom/bianfeng/seppellita/SepperllitaSdk;->post(Ljava/util/List;)V

    return-void
.end method

.method static synthetic access$200(Lcom/bianfeng/seppellita/SepperllitaSdk;)Landroid/content/Context;
    .locals 0

    .line 44
    iget-object p0, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->context:Landroid/content/Context;

    return-object p0
.end method

.method static synthetic access$300(Lcom/bianfeng/seppellita/SepperllitaSdk;)Ljava/lang/String;
    .locals 0

    .line 44
    iget-object p0, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->mSiteID:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$400(Lcom/bianfeng/seppellita/SepperllitaSdk;Landroid/content/Context;Ljava/util/List;Ljava/lang/String;)V
    .locals 0

    .line 44
    invoke-direct {p0, p1, p2, p3}, Lcom/bianfeng/seppellita/SepperllitaSdk;->postImmediately(Landroid/content/Context;Ljava/util/List;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic access$500(Lcom/bianfeng/seppellita/SepperllitaSdk;)Lcom/bianfeng/seppellita/db/DBManager;
    .locals 0

    .line 44
    iget-object p0, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->dbManager:Lcom/bianfeng/seppellita/db/DBManager;

    return-object p0
.end method

.method static synthetic access$600(Lcom/bianfeng/seppellita/SepperllitaSdk;)Lcom/bianfeng/seppellita/utils/ConfigUtils;
    .locals 0

    .line 44
    iget-object p0, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->configUtils:Lcom/bianfeng/seppellita/utils/ConfigUtils;

    return-object p0
.end method

.method static synthetic access$700(Lcom/bianfeng/seppellita/SepperllitaSdk;)Lcom/bianfeng/seppellita/manager/IPolicysManager;
    .locals 0

    .line 44
    iget-object p0, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->policysManager:Lcom/bianfeng/seppellita/manager/IPolicysManager;

    return-object p0
.end method

.method static synthetic access$800(Lcom/bianfeng/seppellita/SepperllitaSdk;)Lcom/bianfeng/seppellita/SepperllitaSdk$InitCallback;
    .locals 0

    .line 44
    iget-object p0, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->initCallback:Lcom/bianfeng/seppellita/SepperllitaSdk$InitCallback;

    return-object p0
.end method

.method static synthetic access$900(Lcom/bianfeng/seppellita/SepperllitaSdk;)V
    .locals 0

    .line 44
    invoke-direct {p0}, Lcom/bianfeng/seppellita/SepperllitaSdk;->select()V

    return-void
.end method

.method public static getInstance()Lcom/bianfeng/seppellita/SepperllitaSdk;
    .locals 2

    .line 207
    sget-object v0, Lcom/bianfeng/seppellita/SepperllitaSdk;->sdk:Lcom/bianfeng/seppellita/SepperllitaSdk;

    if-nez v0, :cond_1

    .line 208
    const-class v0, Lcom/bianfeng/seppellita/net/UrlManager;

    monitor-enter v0

    .line 209
    :try_start_0
    sget-object v1, Lcom/bianfeng/seppellita/SepperllitaSdk;->sdk:Lcom/bianfeng/seppellita/SepperllitaSdk;

    if-nez v1, :cond_0

    .line 210
    new-instance v1, Lcom/bianfeng/seppellita/SepperllitaSdk;

    invoke-direct {v1}, Lcom/bianfeng/seppellita/SepperllitaSdk;-><init>()V

    sput-object v1, Lcom/bianfeng/seppellita/SepperllitaSdk;->sdk:Lcom/bianfeng/seppellita/SepperllitaSdk;

    .line 212
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 214
    :cond_1
    :goto_0
    sget-object v0, Lcom/bianfeng/seppellita/SepperllitaSdk;->sdk:Lcom/bianfeng/seppellita/SepperllitaSdk;

    return-object v0
.end method

.method public static getMetaData(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    .line 402
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    .line 403
    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p0

    const/16 v1, 0x80

    invoke-virtual {v0, p0, v1}, Landroid/content/pm/PackageManager;->getApplicationInfo(Ljava/lang/String;I)Landroid/content/pm/ApplicationInfo;

    move-result-object p0

    .line 405
    iget-object v0, p0, Landroid/content/pm/ApplicationInfo;->metaData:Landroid/os/Bundle;

    invoke-virtual {v0, p1}, Landroid/os/Bundle;->get(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 406
    iget-object p0, p0, Landroid/content/pm/ApplicationInfo;->metaData:Landroid/os/Bundle;

    invoke-virtual {p0, p1}, Landroid/os/Bundle;->get(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/String;

    goto :goto_0

    :cond_0
    const-string p0, ""
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 409
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    const/4 p0, 0x0

    :goto_0
    return-object p0
.end method

.method private post(Ljava/util/List;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 152
    :try_start_0
    iget-object v0, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->netManager:Lcom/bianfeng/seppellita/net/NetManager;

    iget-object v1, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->eventBeanManager:Lcom/bianfeng/seppellita/manager/EventBeanManager;

    invoke-virtual {v1, p1}, Lcom/bianfeng/seppellita/manager/EventBeanManager;->creatEventBean(Ljava/util/List;)Ljava/util/List;

    move-result-object p1

    iget-object v1, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->callback:Lcom/bianfeng/seppellita/SepperllitaCallback;

    invoke-virtual {v0, p1, v1}, Lcom/bianfeng/seppellita/net/NetManager;->postData(Ljava/util/List;Lcom/bianfeng/seppellita/SepperllitaCallback;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 154
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method private postImmediately(Landroid/content/Context;Ljava/util/List;Ljava/lang/String;)V
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;",
            "Ljava/lang/String;",
            ")V"
        }
    .end annotation

    .line 161
    :try_start_0
    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result p1

    if-nez p1, :cond_0

    return-void

    .line 164
    :cond_0
    new-instance p1, Lcom/bianfeng/netlibsdk/BasicNetwork;

    new-instance v0, Lcom/bianfeng/netlibsdk/HurlStack;

    invoke-direct {v0}, Lcom/bianfeng/netlibsdk/HurlStack;-><init>()V

    invoke-direct {p1, v0}, Lcom/bianfeng/netlibsdk/BasicNetwork;-><init>(Lcom/bianfeng/netlibsdk/HttpStack;)V

    .line 165
    iget-object v0, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->eventBeanManager:Lcom/bianfeng/seppellita/manager/EventBeanManager;

    invoke-virtual {v0, p2, p3}, Lcom/bianfeng/seppellita/manager/EventBeanManager;->creatEventBean(Ljava/util/List;Ljava/lang/String;)Ljava/util/List;

    move-result-object p2

    const/4 v0, 0x0

    .line 166
    :goto_0
    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result v1

    if-ge v0, v1, :cond_4

    .line 167
    invoke-interface {p2, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/seppellita/bean/PostDataBean;

    .line 168
    invoke-virtual {v1, p3}, Lcom/bianfeng/seppellita/bean/PostDataBean;->setSite(Ljava/lang/String;)V

    .line 169
    new-instance v2, Lcom/bianfeng/seppellita/net/PostRequest;

    invoke-direct {v2, v1}, Lcom/bianfeng/seppellita/net/PostRequest;-><init>(Lcom/bianfeng/seppellita/bean/PostDataBean;)V

    .line 170
    iget-object v3, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->callback:Lcom/bianfeng/seppellita/SepperllitaCallback;

    invoke-virtual {v2, v3}, Lcom/bianfeng/seppellita/net/PostRequest;->setCallback(Lcom/bianfeng/seppellita/SepperllitaCallback;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2

    :try_start_1
    const-string v3, "network-queue-take"

    .line 172
    invoke-virtual {v2, v3}, Lcom/bianfeng/seppellita/net/PostRequest;->addMarker(Ljava/lang/String;)V

    .line 173
    invoke-virtual {v2}, Lcom/bianfeng/seppellita/net/PostRequest;->isCanceled()Z

    move-result v3

    if-eqz v3, :cond_1

    return-void

    .line 176
    :cond_1
    invoke-virtual {p1, v2}, Lcom/bianfeng/netlibsdk/BasicNetwork;->performRequest(Lcom/bianfeng/netlibsdk/Request;)Lcom/bianfeng/netlibsdk/NetworkResponse;

    move-result-object v3

    const-string v4, "network-http-complete"

    .line 177
    invoke-virtual {v2, v4}, Lcom/bianfeng/seppellita/net/PostRequest;->addMarker(Ljava/lang/String;)V

    .line 179
    iget-boolean v4, v3, Lcom/bianfeng/netlibsdk/NetworkResponse;->notModified:Z

    if-eqz v4, :cond_2

    invoke-virtual {v2}, Lcom/bianfeng/seppellita/net/PostRequest;->hasHadResponseDelivered()Z

    move-result v4

    if-eqz v4, :cond_2

    return-void

    .line 182
    :cond_2
    invoke-virtual {v2, v3}, Lcom/bianfeng/seppellita/net/PostRequest;->parseNetworkResponse(Lcom/bianfeng/netlibsdk/NetworkResponse;)Lcom/bianfeng/netlibsdk/Response;

    move-result-object v3

    const-string v4, "network-parse-complete"

    .line 183
    invoke-virtual {v2, v4}, Lcom/bianfeng/seppellita/net/PostRequest;->addMarker(Ljava/lang/String;)V

    .line 184
    invoke-virtual {v2}, Lcom/bianfeng/seppellita/net/PostRequest;->markDelivered()V

    .line 185
    invoke-virtual {v3}, Lcom/bianfeng/netlibsdk/Response;->isSuccess()Z

    move-result v2

    if-eqz v2, :cond_3

    .line 186
    iget-object v2, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->dbManager:Lcom/bianfeng/seppellita/db/DBManager;

    invoke-virtual {v1}, Lcom/bianfeng/seppellita/bean/PostDataBean;->getIdList()Ljava/util/List;

    move-result-object v1

    invoke-virtual {v2, v1}, Lcom/bianfeng/seppellita/db/DBManager;->del(Ljava/util/List;)V
    :try_end_1
    .catch Lcom/bianfeng/netlibsdk/utils/NetException; {:try_start_1 .. :try_end_1} :catch_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_1

    :catch_0
    move-exception v1

    .line 193
    :try_start_2
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "\u6d4b\u8bd5  Unhandled exception %s"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/bianfeng/netlibsdk/utils/NetLogger;->e(Ljava/lang/String;)V

    .line 194
    new-instance v2, Lcom/bianfeng/netlibsdk/utils/NetException;

    invoke-direct {v2, v1}, Lcom/bianfeng/netlibsdk/utils/NetException;-><init>(Ljava/lang/Throwable;)V

    goto :goto_1

    :catch_1
    move-exception v1

    .line 190
    invoke-virtual {v1}, Lcom/bianfeng/netlibsdk/utils/NetException;->printStackTrace()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2

    :cond_3
    :goto_1
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :catch_2
    move-exception p1

    .line 198
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_4
    return-void
.end method

.method private select()V
    .locals 3

    .line 218
    iget-object v0, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->dbManager:Lcom/bianfeng/seppellita/db/DBManager;

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->configUtils:Lcom/bianfeng/seppellita/utils/ConfigUtils;

    if-eqz v1, :cond_0

    .line 219
    invoke-virtual {v1}, Lcom/bianfeng/seppellita/utils/ConfigUtils;->getLastTime()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->configUtils:Lcom/bianfeng/seppellita/utils/ConfigUtils;

    invoke-virtual {v2}, Lcom/bianfeng/seppellita/utils/ConfigUtils;->getCurrentTimeFormat()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lcom/bianfeng/seppellita/db/DBManager;->selectDbLastMonthByteData(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method


# virtual methods
.method public getPolicys(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 386
    iget-object v0, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->policysManager:Lcom/bianfeng/seppellita/manager/IPolicysManager;

    if-eqz v0, :cond_0

    .line 387
    invoke-interface {v0, p1, p2}, Lcom/bianfeng/seppellita/manager/IPolicysManager;->getPolicys(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1

    :cond_0
    const-string p1, ""

    return-object p1
.end method

.method public getVersion()Ljava/lang/String;
    .locals 1

    const-string v0, "1.0.3"

    return-object v0
.end method

.method public onInit(Landroid/content/Context;Ljava/lang/String;Lcom/bianfeng/seppellita/SepperllitaSdk$InitCallback;)V
    .locals 2

    .line 245
    :try_start_0
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;->initContext(Landroid/content/Context;)V

    .line 246
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->setYmnagreeprivacy()V

    const-string v0, "sl_site"

    .line 247
    invoke-static {p1, v0}, Lcom/bianfeng/seppellita/SepperllitaSdk;->getMetaData(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->mSiteID:Ljava/lang/String;

    const-string v1, "ymn-site"

    .line 248
    invoke-static {v1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 249
    new-instance v0, Lcom/bianfeng/seppellita/utils/ConfigUtils;

    iget-object v1, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->callback:Lcom/bianfeng/seppellita/SepperllitaCallback;

    invoke-direct {v0, v1}, Lcom/bianfeng/seppellita/utils/ConfigUtils;-><init>(Lcom/bianfeng/seppellita/SepperllitaCallback;)V

    iput-object v0, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->configUtils:Lcom/bianfeng/seppellita/utils/ConfigUtils;

    .line 250
    iput-object p3, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->initCallback:Lcom/bianfeng/seppellita/SepperllitaSdk$InitCallback;

    .line 251
    new-instance p3, Lcom/bianfeng/seppellita/manager/EventBeanManager;

    iget-object v0, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->configUtils:Lcom/bianfeng/seppellita/utils/ConfigUtils;

    invoke-direct {p3, p1, v0}, Lcom/bianfeng/seppellita/manager/EventBeanManager;-><init>(Landroid/content/Context;Lcom/bianfeng/seppellita/utils/ConfigUtils;)V

    iput-object p3, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->eventBeanManager:Lcom/bianfeng/seppellita/manager/EventBeanManager;

    .line 252
    new-instance p1, Lcom/bianfeng/seppellita/net/NetManager;

    iget-object p3, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->eventBeanManager:Lcom/bianfeng/seppellita/manager/EventBeanManager;

    invoke-virtual {p3}, Lcom/bianfeng/seppellita/manager/EventBeanManager;->getGetParameters()Ljava/util/Map;

    move-result-object p3

    invoke-direct {p1, p3}, Lcom/bianfeng/seppellita/net/NetManager;-><init>(Ljava/util/Map;)V

    iput-object p1, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->netManager:Lcom/bianfeng/seppellita/net/NetManager;

    .line 253
    new-instance p1, Lcom/bianfeng/seppellita/db/DBManager;

    invoke-direct {p1}, Lcom/bianfeng/seppellita/db/DBManager;-><init>()V

    iput-object p1, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->dbManager:Lcom/bianfeng/seppellita/db/DBManager;

    .line 254
    iget-object p3, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->callback:Lcom/bianfeng/seppellita/SepperllitaCallback;

    invoke-virtual {p1, p3}, Lcom/bianfeng/seppellita/db/DBManager;->setCallback(Lcom/bianfeng/seppellita/SepperllitaCallback;)V

    .line 255
    iget-object p1, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->netManager:Lcom/bianfeng/seppellita/net/NetManager;

    iget-object p3, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->callback:Lcom/bianfeng/seppellita/SepperllitaCallback;

    invoke-virtual {p1, p2, p3}, Lcom/bianfeng/seppellita/net/NetManager;->postInit(Ljava/lang/String;Lcom/bianfeng/seppellita/SepperllitaCallback;)V

    .line 256
    iget-object p1, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->dbManager:Lcom/bianfeng/seppellita/db/DBManager;

    iget-object p2, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->configUtils:Lcom/bianfeng/seppellita/utils/ConfigUtils;

    invoke-virtual {p2}, Lcom/bianfeng/seppellita/utils/ConfigUtils;->getLastTime()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/bianfeng/seppellita/db/DBManager;->delBeforeOneMouthData(Ljava/lang/String;)V

    .line 257
    new-instance p1, Lcom/bianfeng/seppellita/manager/PolicysManager;

    invoke-direct {p1}, Lcom/bianfeng/seppellita/manager/PolicysManager;-><init>()V

    iput-object p1, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->policysManager:Lcom/bianfeng/seppellita/manager/IPolicysManager;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const-string p1, "ymn"

    const-string p2, "\u521d\u59cb\u5316\u65f6\u5f02\u5e38"

    .line 259
    invoke-static {p1, p2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :goto_0
    return-void
.end method

.method public onInit(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/bianfeng/seppellita/SepperllitaSdk$InitCallback;)V
    .locals 1

    .line 225
    :try_start_0
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;->initContext(Landroid/content/Context;)V

    .line 226
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->setYmnagreeprivacy()V

    .line 227
    iput-object p3, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->mSiteID:Ljava/lang/String;

    .line 228
    new-instance p3, Lcom/bianfeng/seppellita/utils/ConfigUtils;

    iget-object v0, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->callback:Lcom/bianfeng/seppellita/SepperllitaCallback;

    invoke-direct {p3, v0}, Lcom/bianfeng/seppellita/utils/ConfigUtils;-><init>(Lcom/bianfeng/seppellita/SepperllitaCallback;)V

    iput-object p3, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->configUtils:Lcom/bianfeng/seppellita/utils/ConfigUtils;

    .line 229
    iput-object p4, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->initCallback:Lcom/bianfeng/seppellita/SepperllitaSdk$InitCallback;

    .line 230
    new-instance p3, Lcom/bianfeng/seppellita/manager/EventBeanManager;

    iget-object p4, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->configUtils:Lcom/bianfeng/seppellita/utils/ConfigUtils;

    invoke-direct {p3, p1, p4}, Lcom/bianfeng/seppellita/manager/EventBeanManager;-><init>(Landroid/content/Context;Lcom/bianfeng/seppellita/utils/ConfigUtils;)V

    iput-object p3, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->eventBeanManager:Lcom/bianfeng/seppellita/manager/EventBeanManager;

    .line 231
    new-instance p1, Lcom/bianfeng/seppellita/net/NetManager;

    iget-object p3, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->eventBeanManager:Lcom/bianfeng/seppellita/manager/EventBeanManager;

    invoke-virtual {p3}, Lcom/bianfeng/seppellita/manager/EventBeanManager;->getGetParameters()Ljava/util/Map;

    move-result-object p3

    invoke-direct {p1, p3}, Lcom/bianfeng/seppellita/net/NetManager;-><init>(Ljava/util/Map;)V

    iput-object p1, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->netManager:Lcom/bianfeng/seppellita/net/NetManager;

    .line 232
    new-instance p1, Lcom/bianfeng/seppellita/db/DBManager;

    invoke-direct {p1}, Lcom/bianfeng/seppellita/db/DBManager;-><init>()V

    iput-object p1, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->dbManager:Lcom/bianfeng/seppellita/db/DBManager;

    .line 233
    iget-object p3, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->callback:Lcom/bianfeng/seppellita/SepperllitaCallback;

    invoke-virtual {p1, p3}, Lcom/bianfeng/seppellita/db/DBManager;->setCallback(Lcom/bianfeng/seppellita/SepperllitaCallback;)V

    .line 234
    iget-object p1, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->netManager:Lcom/bianfeng/seppellita/net/NetManager;

    iget-object p3, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->callback:Lcom/bianfeng/seppellita/SepperllitaCallback;

    invoke-virtual {p1, p2, p3}, Lcom/bianfeng/seppellita/net/NetManager;->postInit(Ljava/lang/String;Lcom/bianfeng/seppellita/SepperllitaCallback;)V

    .line 235
    iget-object p1, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->dbManager:Lcom/bianfeng/seppellita/db/DBManager;

    iget-object p2, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->configUtils:Lcom/bianfeng/seppellita/utils/ConfigUtils;

    invoke-virtual {p2}, Lcom/bianfeng/seppellita/utils/ConfigUtils;->getLastTime()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/bianfeng/seppellita/db/DBManager;->delBeforeOneMouthData(Ljava/lang/String;)V

    .line 236
    new-instance p1, Lcom/bianfeng/seppellita/manager/PolicysManager;

    invoke-direct {p1}, Lcom/bianfeng/seppellita/manager/PolicysManager;-><init>()V

    iput-object p1, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->policysManager:Lcom/bianfeng/seppellita/manager/IPolicysManager;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const-string p1, "ymn"

    const-string p2, "\u521d\u59cb\u5316\u65f6\u5f02\u5e38"

    .line 238
    invoke-static {p1, p2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :goto_0
    return-void
.end method

.method public onInitOnlyPostId(Landroid/content/Context;Lcom/bianfeng/seppellita/SepperllitaSdk$InitCallback;)V
    .locals 2

    .line 266
    iput-object p2, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->initCallback:Lcom/bianfeng/seppellita/SepperllitaSdk$InitCallback;

    .line 267
    iput-object p1, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->context:Landroid/content/Context;

    .line 268
    iget-object p2, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->configUtils:Lcom/bianfeng/seppellita/utils/ConfigUtils;

    if-nez p2, :cond_0

    new-instance p2, Lcom/bianfeng/seppellita/utils/ConfigUtils;

    iget-object v0, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->callback:Lcom/bianfeng/seppellita/SepperllitaCallback;

    invoke-direct {p2, v0}, Lcom/bianfeng/seppellita/utils/ConfigUtils;-><init>(Lcom/bianfeng/seppellita/SepperllitaCallback;)V

    iput-object p2, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->configUtils:Lcom/bianfeng/seppellita/utils/ConfigUtils;

    .line 269
    :cond_0
    iget-object p2, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->eventBeanManager:Lcom/bianfeng/seppellita/manager/EventBeanManager;

    if-nez p2, :cond_1

    .line 270
    new-instance p2, Lcom/bianfeng/seppellita/manager/EventBeanManager;

    iget-object v0, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->configUtils:Lcom/bianfeng/seppellita/utils/ConfigUtils;

    const/4 v1, 0x0

    invoke-direct {p2, p1, v0, v1}, Lcom/bianfeng/seppellita/manager/EventBeanManager;-><init>(Landroid/content/Context;Lcom/bianfeng/seppellita/utils/ConfigUtils;Z)V

    iput-object p2, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->eventBeanManager:Lcom/bianfeng/seppellita/manager/EventBeanManager;

    .line 271
    :cond_1
    iget-object p2, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->netManager:Lcom/bianfeng/seppellita/net/NetManager;

    if-nez p2, :cond_2

    new-instance p2, Lcom/bianfeng/seppellita/net/NetManager;

    iget-object v0, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->eventBeanManager:Lcom/bianfeng/seppellita/manager/EventBeanManager;

    invoke-virtual {v0}, Lcom/bianfeng/seppellita/manager/EventBeanManager;->getGetParameters()Ljava/util/Map;

    move-result-object v0

    invoke-direct {p2, v0}, Lcom/bianfeng/seppellita/net/NetManager;-><init>(Ljava/util/Map;)V

    iput-object p2, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->netManager:Lcom/bianfeng/seppellita/net/NetManager;

    .line 272
    :cond_2
    iget-object p2, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->dbManager:Lcom/bianfeng/seppellita/db/DBManager;

    if-nez p2, :cond_3

    new-instance p2, Lcom/bianfeng/seppellita/db/DBManager;

    invoke-direct {p2}, Lcom/bianfeng/seppellita/db/DBManager;-><init>()V

    iput-object p2, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->dbManager:Lcom/bianfeng/seppellita/db/DBManager;

    .line 273
    :cond_3
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->init(Landroid/content/Context;)V

    .line 274
    invoke-static {}, Lcom/bianfeng/seppellita/net/UrlManager;->getInstance()Lcom/bianfeng/seppellita/net/UrlManager;

    move-result-object p2

    const-string v0, "sl_url_main"

    invoke-static {p1, v0}, Lcom/bianfeng/seppellita/SepperllitaSdk;->getMetaData(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "sl_url_alternate"

    invoke-static {p1, v1}, Lcom/bianfeng/seppellita/SepperllitaSdk;->getMetaData(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, v0, p1}, Lcom/bianfeng/seppellita/net/UrlManager;->setUrlBean(Ljava/lang/String;Ljava/lang/String;)V

    .line 275
    iget-object p1, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->dbManager:Lcom/bianfeng/seppellita/db/DBManager;

    iget-object p2, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->callback:Lcom/bianfeng/seppellita/SepperllitaCallback;

    invoke-virtual {p1, p2}, Lcom/bianfeng/seppellita/db/DBManager;->setCallback(Lcom/bianfeng/seppellita/SepperllitaCallback;)V

    .line 276
    iget-object p1, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->netManager:Lcom/bianfeng/seppellita/net/NetManager;

    iget-object p2, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->callback:Lcom/bianfeng/seppellita/SepperllitaCallback;

    const-string v0, ""

    invoke-virtual {p1, v0, p2}, Lcom/bianfeng/seppellita/net/NetManager;->postInit(Ljava/lang/String;Lcom/bianfeng/seppellita/SepperllitaCallback;)V

    .line 277
    iget-object p1, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->dbManager:Lcom/bianfeng/seppellita/db/DBManager;

    iget-object p2, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->configUtils:Lcom/bianfeng/seppellita/utils/ConfigUtils;

    invoke-virtual {p2}, Lcom/bianfeng/seppellita/utils/ConfigUtils;->getLastTime()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/bianfeng/seppellita/db/DBManager;->delBeforeOneMouthData(Ljava/lang/String;)V

    .line 278
    iget-object p1, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->policysManager:Lcom/bianfeng/seppellita/manager/IPolicysManager;

    if-nez p1, :cond_4

    new-instance p1, Lcom/bianfeng/seppellita/manager/PolicysManager;

    invoke-direct {p1}, Lcom/bianfeng/seppellita/manager/PolicysManager;-><init>()V

    iput-object p1, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->policysManager:Lcom/bianfeng/seppellita/manager/IPolicysManager;

    :cond_4
    return-void
.end method

.method public onPause()V
    .locals 1

    .line 372
    iget-object v0, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->configUtils:Lcom/bianfeng/seppellita/utils/ConfigUtils;

    if-eqz v0, :cond_0

    .line 373
    invoke-virtual {v0}, Lcom/bianfeng/seppellita/utils/ConfigUtils;->onPause()V

    .line 374
    iget-object v0, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->configUtils:Lcom/bianfeng/seppellita/utils/ConfigUtils;

    invoke-virtual {v0}, Lcom/bianfeng/seppellita/utils/ConfigUtils;->getOnLineTime()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/seppellita/event/EventManager;->onPause(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public onResume()V
    .locals 1

    .line 366
    iget-object v0, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->configUtils:Lcom/bianfeng/seppellita/utils/ConfigUtils;

    if-eqz v0, :cond_0

    .line 367
    invoke-virtual {v0}, Lcom/bianfeng/seppellita/utils/ConfigUtils;->onResume()V

    :cond_0
    return-void
.end method

.method public post(Ljava/lang/String;)V
    .locals 5

    .line 324
    invoke-static {p1}, Lcom/bianfeng/seppellita/utils/CheckKeyUtils;->check(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string p1, "\u6570\u636e\u4e0d\u5168\uff0c\u6216\u6570\u636e\u9519\u8bef,\u7f3a\u5931act\u6216pg"

    .line 325
    invoke-static {p1}, Lcom/bianfeng/seppellita/utils/SeppellitaLogger;->e(Ljava/lang/String;)V

    return-void

    .line 328
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "post---->"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/SeppellitaLogger;->i(Ljava/lang/String;)V

    .line 329
    const-class v0, Lcom/bianfeng/seppellita/SepperllitaSdk;

    monitor-enter v0

    .line 330
    :try_start_0
    iget-object v1, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->policysManager:Lcom/bianfeng/seppellita/manager/IPolicysManager;

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->policysManager:Lcom/bianfeng/seppellita/manager/IPolicysManager;

    invoke-interface {v1, p1}, Lcom/bianfeng/seppellita/manager/IPolicysManager;->getPolicys(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 331
    :cond_1
    iget-object v1, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->dbManager:Lcom/bianfeng/seppellita/db/DBManager;

    if-eqz v1, :cond_4

    iget-object v1, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->eventBeanManager:Lcom/bianfeng/seppellita/manager/EventBeanManager;

    const/4 v2, 0x1

    const/4 v3, 0x0

    if-eqz v1, :cond_2

    move v1, v2

    goto :goto_0

    :cond_2
    move v1, v3

    :goto_0
    iget-object v4, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->configUtils:Lcom/bianfeng/seppellita/utils/ConfigUtils;

    if-eqz v4, :cond_3

    goto :goto_1

    :cond_3
    move v2, v3

    :goto_1
    and-int/2addr v1, v2

    if-eqz v1, :cond_4

    .line 332
    iget-object v1, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->dbManager:Lcom/bianfeng/seppellita/db/DBManager;

    iget-object v2, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->eventBeanManager:Lcom/bianfeng/seppellita/manager/EventBeanManager;

    invoke-virtual {v2, p1}, Lcom/bianfeng/seppellita/manager/EventBeanManager;->buildDataBean(Ljava/lang/String;)Lcom/bianfeng/seppellita/bean/DataBean;

    move-result-object p1

    invoke-virtual {v1, p1}, Lcom/bianfeng/seppellita/db/DBManager;->add(Lcom/bianfeng/seppellita/bean/DataBean;)V

    .line 334
    :cond_4
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method public postBeforeInit(Ljava/lang/String;)V
    .locals 1

    .line 283
    invoke-static {}, Lcom/bianfeng/seppellita/SepperllitaSdk;->getInstance()Lcom/bianfeng/seppellita/SepperllitaSdk;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/bianfeng/seppellita/SepperllitaSdk;->post(Ljava/lang/String;)V

    const/4 p1, 0x1

    .line 284
    iput-boolean p1, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->isPostImmediately:Z

    .line 285
    invoke-direct {p0}, Lcom/bianfeng/seppellita/SepperllitaSdk;->select()V

    return-void
.end method

.method public postPrivacy(Ljava/lang/String;)V
    .locals 5

    .line 345
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v0

    const-class v1, Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p1, v1}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/util/LinkedHashMap;

    const-string v0, "pg"

    const-string v1, "P1182"

    .line 346
    invoke-virtual {p1, v0, v1}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v0, "bl"

    const-string v1, "BHO001"

    .line 347
    invoke-virtual {p1, v0, v1}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v0, "act"

    const-string v1, "push"

    .line 348
    invoke-virtual {p1, v0, v1}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 350
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    .line 351
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "post---->"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/SeppellitaLogger;->i(Ljava/lang/String;)V

    .line 352
    const-class v0, Lcom/bianfeng/seppellita/SepperllitaSdk;

    monitor-enter v0
    :try_end_0
    .catch Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException; {:try_start_0 .. :try_end_0} :catch_0

    .line 353
    :try_start_1
    iget-object v1, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->policysManager:Lcom/bianfeng/seppellita/manager/IPolicysManager;

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->policysManager:Lcom/bianfeng/seppellita/manager/IPolicysManager;

    invoke-interface {v1, p1}, Lcom/bianfeng/seppellita/manager/IPolicysManager;->getPolicys(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 354
    :cond_0
    iget-object v1, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->dbManager:Lcom/bianfeng/seppellita/db/DBManager;

    if-eqz v1, :cond_3

    iget-object v1, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->eventBeanManager:Lcom/bianfeng/seppellita/manager/EventBeanManager;

    const/4 v2, 0x1

    const/4 v3, 0x0

    if-eqz v1, :cond_1

    move v1, v2

    goto :goto_0

    :cond_1
    move v1, v3

    :goto_0
    iget-object v4, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->configUtils:Lcom/bianfeng/seppellita/utils/ConfigUtils;

    if-eqz v4, :cond_2

    goto :goto_1

    :cond_2
    move v2, v3

    :goto_1
    and-int/2addr v1, v2

    if-eqz v1, :cond_3

    .line 355
    iget-object v1, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->dbManager:Lcom/bianfeng/seppellita/db/DBManager;

    iget-object v2, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->eventBeanManager:Lcom/bianfeng/seppellita/manager/EventBeanManager;

    invoke-virtual {v2, p1}, Lcom/bianfeng/seppellita/manager/EventBeanManager;->buildDataBean(Ljava/lang/String;)Lcom/bianfeng/seppellita/bean/DataBean;

    move-result-object p1

    invoke-virtual {v1, p1}, Lcom/bianfeng/seppellita/db/DBManager;->add(Lcom/bianfeng/seppellita/bean/DataBean;)V

    .line 357
    :cond_3
    monitor-exit v0

    goto :goto_2

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    throw p1
    :try_end_2
    .catch Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException; {:try_start_2 .. :try_end_2} :catch_0

    :catch_0
    move-exception p1

    .line 359
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;->printStackTrace()V

    const-string p1, "Ymnsdk"

    const-string v0, "\u4e0a\u629b\u9690\u79c1\u6570\u636e\u5f02\u5e38"

    .line 360
    invoke-static {p1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :goto_2
    return-void
.end method

.method public postYmnId(Ljava/lang/String;)V
    .locals 5

    const-string v0, "postYmnId"

    .line 289
    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/SeppellitaLogger;->i(Ljava/lang/String;)V

    .line 290
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    const-string v1, "act"

    const-string v2, "push"

    .line 291
    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "pg"

    const-string v2, "P1109"

    .line 292
    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "blk"

    const-string v2, "BHF001"

    .line 293
    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "bl"

    const-string v2, "\u83b7\u53d6\u552f\u4e00\u7801"

    .line 294
    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "label"

    const-string v2, "\u540c\u610f"

    .line 295
    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 296
    invoke-static {}, Lcom/bianfeng/seppellita/utils/DeviceUtils;->createYmnDeviceId()Ljava/lang/String;

    move-result-object v1

    .line 297
    new-instance v2, Ljava/util/HashMap;

    invoke-direct {v2}, Ljava/util/HashMap;-><init>()V

    const-string v3, "ymn_user_id"

    .line 298
    invoke-interface {v2, v3, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 299
    iget-object v4, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->context:Landroid/content/Context;

    invoke-static {v4}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->init(Landroid/content/Context;)V

    .line 301
    :try_start_0
    invoke-static {v3, v1}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->put(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 303
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    if-nez p1, :cond_0

    const-string p1, ""

    :cond_0
    const-string v1, "channel_id"

    .line 306
    invoke-interface {v2, v1, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 307
    invoke-static {v2}, Lcom/bianfeng/seppellita/utils/SeppellitaGsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    const-string v1, "cust"

    invoke-interface {v0, v1, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 308
    new-instance p1, Ljava/util/HashMap;

    invoke-direct {p1}, Ljava/util/HashMap;-><init>()V

    const-string v1, "id"

    const-string v2, "2089"

    .line 309
    invoke-interface {p1, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 310
    invoke-static {p1}, Lcom/bianfeng/seppellita/utils/SeppellitaGsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    const-string v1, "extended"

    invoke-interface {v0, v1, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 311
    invoke-static {}, Lcom/bianfeng/seppellita/SepperllitaSdk;->getInstance()Lcom/bianfeng/seppellita/SepperllitaSdk;

    move-result-object p1

    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/SeppellitaGsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Lcom/bianfeng/seppellita/SepperllitaSdk;->post(Ljava/lang/String;)V

    .line 312
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    .line 313
    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/SeppellitaGsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-interface {p1, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    const/4 p1, 0x1

    .line 314
    iput-boolean p1, p0, Lcom/bianfeng/seppellita/SepperllitaSdk;->isPostImmediately:Z

    .line 315
    invoke-direct {p0}, Lcom/bianfeng/seppellita/SepperllitaSdk;->select()V

    return-void
.end method
