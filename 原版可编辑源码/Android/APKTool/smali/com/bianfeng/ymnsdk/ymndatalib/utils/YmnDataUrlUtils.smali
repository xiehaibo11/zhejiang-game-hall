.class public Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDataUrlUtils;
.super Ljava/lang/Object;
.source "YmnDataUrlUtils.java"


# static fields
.field public static volatile checkDebugUrl:Z

.field public static volatile urlUtils:Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDataUrlUtils;


# instance fields
.field public debug_url:Ljava/lang/String;

.field public post_url:Ljava/lang/String;

.field public test_ymndata_post:Ljava/lang/String;

.field public test_ymndata_white_list:Ljava/lang/String;

.field public ymndata_post_url:Ljava/lang/String;

.field public ymndata_white_list_url:Ljava/lang/String;


# direct methods
.method public static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 2
    const-string v0, "https://sluice.imeete.com/api/data/receiver"

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDataUrlUtils;->ymndata_post_url:Ljava/lang/String;

    .line 3
    const-string v0, "https://sdk-config.imeete.net/sluice/whitelist"

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDataUrlUtils;->ymndata_white_list_url:Ljava/lang/String;

    .line 4
    const-string v0, "ymndata_post_url"

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDataUrlUtils;->test_ymndata_post:Ljava/lang/String;

    .line 5
    const-string v0, "ymndata_white_list_url"

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDataUrlUtils;->test_ymndata_white_list:Ljava/lang/String;

    return-void
.end method

.method public static getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDataUrlUtils;
    .locals 2

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDataUrlUtils;->urlUtils:Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDataUrlUtils;

    if-nez v0, :cond_1

    .line 2
    const-class v0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDataUrlUtils;

    monitor-enter v0

    .line 3
    :try_start_0
    sget-object v1, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDataUrlUtils;->urlUtils:Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDataUrlUtils;

    if-nez v1, :cond_0

    .line 4
    new-instance v1, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDataUrlUtils;

    invoke-direct {v1}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDataUrlUtils;-><init>()V

    sput-object v1, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDataUrlUtils;->urlUtils:Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDataUrlUtils;

    .line 6
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 8
    :cond_1
    :goto_0
    sget-object v0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDataUrlUtils;->urlUtils:Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDataUrlUtils;

    return-object v0
.end method

.method private hasDebug(Ljava/lang/String;)Z
    .locals 1

    .line 1
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;->getDebugUrl(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 2
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 3
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDataUrlUtils;->debug_url:Ljava/lang/String;

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method


# virtual methods
.method public getYmndataPostUrl()Ljava/lang/String;
    .locals 2

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDataUrlUtils;->test_ymndata_post:Ljava/lang/String;

    invoke-direct {p0, v0}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDataUrlUtils;->hasDebug(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 2
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u6d4b\u8bd5\uff1a"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDataUrlUtils;->debug_url:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDatalibLogger;->i(Ljava/lang/String;)V

    .line 3
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDataUrlUtils;->debug_url:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "/api/data/receiver"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 5
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDataUrlUtils;->ymndata_post_url:Ljava/lang/String;

    return-object v0
.end method

.method public get_ymndata_white_list()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDataUrlUtils;->test_ymndata_white_list:Ljava/lang/String;

    invoke-direct {p0, v0}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDataUrlUtils;->hasDebug(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 2
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDataUrlUtils;->debug_url:Ljava/lang/String;

    return-object v0

    .line 4
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDataUrlUtils;->ymndata_white_list_url:Ljava/lang/String;

    return-object v0
.end method

.method public setYmndataPostUrl(Ljava/lang/String;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDataUrlUtils;->ymndata_post_url:Ljava/lang/String;

    return-void
.end method

.method public set_ymndata_white_list(Ljava/lang/String;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDataUrlUtils;->ymndata_white_list_url:Ljava/lang/String;

    return-void
.end method
