.class public Lcom/bytedance/pangle/GlobalParam;
.super Ljava/lang/Object;


# static fields
.field private static mInstance:Lcom/bytedance/pangle/GlobalParam;


# instance fields
.field private hasInit:Z

.field private mAutoFetch:Z

.field private mCheckMatchHostAbi:Z

.field private mCheckPermission:Z

.field private mCloseFlipped:Z

.field private mCustomTag:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;>;"
        }
    .end annotation
.end field

.field private mDebug:Z

.field private mDexOptDelayTime:J

.field private mDid:Ljava/lang/String;

.field private mDownloadDir:Ljava/io/File;

.field private mDownloaderProvider:Lcom/bytedance/pangle/download/IDownloaderProvider;

.field private mFastDex2oat:Z

.field private mHostUrl:Ljava/lang/String;

.field private mInstallThreads:I

.field private mLogger:Lcom/bytedance/pangle/log/IZeusLogger;

.field private mPostBgDexOptByInit:Z

.field private mReporter:Lcom/bytedance/pangle/log/IZeusReporter;

.field private mRequestHeader:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mSignature:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private unInstallPluginWhenHostChange:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Boolean;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 3

    .line 21
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 24
    iput-boolean v0, p0, Lcom/bytedance/pangle/GlobalParam;->hasInit:Z

    const/4 v0, 0x1

    .line 25
    iput-boolean v0, p0, Lcom/bytedance/pangle/GlobalParam;->mDebug:Z

    const/4 v1, 0x4

    .line 29
    iput v1, p0, Lcom/bytedance/pangle/GlobalParam;->mInstallThreads:I

    .line 30
    iput-boolean v0, p0, Lcom/bytedance/pangle/GlobalParam;->mCheckMatchHostAbi:Z

    .line 35
    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    iput-object v1, p0, Lcom/bytedance/pangle/GlobalParam;->mRequestHeader:Ljava/util/Map;

    .line 36
    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    iput-object v1, p0, Lcom/bytedance/pangle/GlobalParam;->unInstallPluginWhenHostChange:Ljava/util/Map;

    .line 37
    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    iput-object v1, p0, Lcom/bytedance/pangle/GlobalParam;->mCustomTag:Ljava/util/Map;

    .line 38
    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    iput-object v1, p0, Lcom/bytedance/pangle/GlobalParam;->mSignature:Ljava/util/Map;

    const-wide/16 v1, 0x3a98

    .line 41
    iput-wide v1, p0, Lcom/bytedance/pangle/GlobalParam;->mDexOptDelayTime:J

    .line 42
    iput-boolean v0, p0, Lcom/bytedance/pangle/GlobalParam;->mPostBgDexOptByInit:Z

    .line 44
    iput-boolean v0, p0, Lcom/bytedance/pangle/GlobalParam;->mAutoFetch:Z

    return-void
.end method

.method private ensureInit()V
    .locals 1

    .line 225
    iget-boolean v0, p0, Lcom/bytedance/pangle/GlobalParam;->hasInit:Z

    if-nez v0, :cond_0

    return-void

    .line 226
    :cond_0
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0}, Ljava/lang/RuntimeException;-><init>()V

    throw v0
.end method

.method public static getInstance()Lcom/bytedance/pangle/GlobalParam;
    .locals 2

    .line 48
    sget-object v0, Lcom/bytedance/pangle/GlobalParam;->mInstance:Lcom/bytedance/pangle/GlobalParam;

    if-nez v0, :cond_1

    .line 49
    const-class v0, Lcom/bytedance/pangle/GlobalParam;

    monitor-enter v0

    .line 50
    :try_start_0
    sget-object v1, Lcom/bytedance/pangle/GlobalParam;->mInstance:Lcom/bytedance/pangle/GlobalParam;

    if-nez v1, :cond_0

    .line 51
    new-instance v1, Lcom/bytedance/pangle/GlobalParam;

    invoke-direct {v1}, Lcom/bytedance/pangle/GlobalParam;-><init>()V

    sput-object v1, Lcom/bytedance/pangle/GlobalParam;->mInstance:Lcom/bytedance/pangle/GlobalParam;

    .line 53
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 55
    :cond_1
    :goto_0
    sget-object v0, Lcom/bytedance/pangle/GlobalParam;->mInstance:Lcom/bytedance/pangle/GlobalParam;

    return-object v0
.end method


# virtual methods
.method public addRequestHeader(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 99
    invoke-direct {p0}, Lcom/bytedance/pangle/GlobalParam;->ensureInit()V

    .line 100
    iget-object v0, p0, Lcom/bytedance/pangle/GlobalParam;->mRequestHeader:Ljava/util/Map;

    invoke-interface {v0, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public autoFetch()Z
    .locals 1

    .line 240
    iget-boolean v0, p0, Lcom/bytedance/pangle/GlobalParam;->mAutoFetch:Z

    return v0
.end method

.method public checkMatchHostAbi()Z
    .locals 1

    .line 140
    iget-boolean v0, p0, Lcom/bytedance/pangle/GlobalParam;->mCheckMatchHostAbi:Z

    return v0
.end method

.method public checkPermission()Z
    .locals 1

    .line 148
    iget-boolean v0, p0, Lcom/bytedance/pangle/GlobalParam;->mCheckPermission:Z

    return v0
.end method

.method public getCustomTag(Ljava/lang/String;)Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 217
    iget-object v0, p0, Lcom/bytedance/pangle/GlobalParam;->mCustomTag:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/util/Map;

    return-object p1
.end method

.method public getDexOptDelayTime()J
    .locals 2

    .line 213
    iget-wide v0, p0, Lcom/bytedance/pangle/GlobalParam;->mDexOptDelayTime:J

    return-wide v0
.end method

.method public getDid()Ljava/lang/String;
    .locals 1

    .line 205
    iget-object v0, p0, Lcom/bytedance/pangle/GlobalParam;->mDid:Ljava/lang/String;

    return-object v0
.end method

.method public getDownloadDir()Ljava/io/File;
    .locals 1

    .line 193
    iget-object v0, p0, Lcom/bytedance/pangle/GlobalParam;->mDownloadDir:Ljava/io/File;

    return-object v0
.end method

.method public getDownloaderProvider()Lcom/bytedance/pangle/download/IDownloaderProvider;
    .locals 1

    .line 209
    iget-object v0, p0, Lcom/bytedance/pangle/GlobalParam;->mDownloaderProvider:Lcom/bytedance/pangle/download/IDownloaderProvider;

    return-object v0
.end method

.method public getHostUrl()Ljava/lang/String;
    .locals 1

    .line 185
    iget-object v0, p0, Lcom/bytedance/pangle/GlobalParam;->mHostUrl:Ljava/lang/String;

    return-object v0
.end method

.method public getInstallThreads()I
    .locals 1

    .line 181
    iget v0, p0, Lcom/bytedance/pangle/GlobalParam;->mInstallThreads:I

    return v0
.end method

.method public getLogger()Lcom/bytedance/pangle/log/IZeusLogger;
    .locals 1

    .line 197
    iget-object v0, p0, Lcom/bytedance/pangle/GlobalParam;->mLogger:Lcom/bytedance/pangle/log/IZeusLogger;

    return-object v0
.end method

.method public getReporter()Lcom/bytedance/pangle/log/IZeusReporter;
    .locals 1

    .line 189
    iget-object v0, p0, Lcom/bytedance/pangle/GlobalParam;->mReporter:Lcom/bytedance/pangle/log/IZeusReporter;

    return-object v0
.end method

.method public getRequestHeader()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 201
    iget-object v0, p0, Lcom/bytedance/pangle/GlobalParam;->mRequestHeader:Ljava/util/Map;

    return-object v0
.end method

.method public getSignature(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 231
    iget-object v0, p0, Lcom/bytedance/pangle/GlobalParam;->mSignature:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    return-object p1
.end method

.method public init()V
    .locals 1

    const/4 v0, 0x1

    .line 221
    iput-boolean v0, p0, Lcom/bytedance/pangle/GlobalParam;->hasInit:Z

    return-void
.end method

.method public isCloseFlipped()Z
    .locals 1

    .line 136
    iget-boolean v0, p0, Lcom/bytedance/pangle/GlobalParam;->mCloseFlipped:Z

    return v0
.end method

.method public isDebug()Z
    .locals 1

    .line 164
    iget-boolean v0, p0, Lcom/bytedance/pangle/GlobalParam;->mDebug:Z

    return v0
.end method

.method public isFastDex2oat()Z
    .locals 1

    .line 168
    iget-boolean v0, p0, Lcom/bytedance/pangle/GlobalParam;->mFastDex2oat:Z

    return v0
.end method

.method public isPostBgDexOptByInit()Z
    .locals 1

    .line 70
    iget-boolean v0, p0, Lcom/bytedance/pangle/GlobalParam;->mPostBgDexOptByInit:Z

    return v0
.end method

.method public postBgDexOptByInit(Z)V
    .locals 0

    .line 65
    invoke-direct {p0}, Lcom/bytedance/pangle/GlobalParam;->ensureInit()V

    .line 66
    iget-boolean p1, p0, Lcom/bytedance/pangle/GlobalParam;->mPostBgDexOptByInit:Z

    iput-boolean p1, p0, Lcom/bytedance/pangle/GlobalParam;->mPostBgDexOptByInit:Z

    return-void
.end method

.method public setAutoFetch(Z)V
    .locals 0

    .line 235
    invoke-direct {p0}, Lcom/bytedance/pangle/GlobalParam;->ensureInit()V

    .line 236
    iput-boolean p1, p0, Lcom/bytedance/pangle/GlobalParam;->mAutoFetch:Z

    return-void
.end method

.method public setCheckMatchHostAbi(Z)V
    .locals 0

    .line 144
    iput-boolean p1, p0, Lcom/bytedance/pangle/GlobalParam;->mCheckMatchHostAbi:Z

    return-void
.end method

.method public setCheckPermission(Z)V
    .locals 0

    .line 152
    iput-boolean p1, p0, Lcom/bytedance/pangle/GlobalParam;->mCheckPermission:Z

    return-void
.end method

.method public setCloseFlipped(Z)V
    .locals 0

    .line 127
    invoke-direct {p0}, Lcom/bytedance/pangle/GlobalParam;->ensureInit()V

    .line 128
    iput-boolean p1, p0, Lcom/bytedance/pangle/GlobalParam;->mCloseFlipped:Z

    return-void
.end method

.method public setCustomTag(Ljava/lang/String;Ljava/util/Map;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 160
    iget-object v0, p0, Lcom/bytedance/pangle/GlobalParam;->mCustomTag:Ljava/util/Map;

    invoke-interface {v0, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public setDebug(Z)V
    .locals 0

    .line 60
    invoke-direct {p0}, Lcom/bytedance/pangle/GlobalParam;->ensureInit()V

    .line 61
    iput-boolean p1, p0, Lcom/bytedance/pangle/GlobalParam;->mDebug:Z

    return-void
.end method

.method public setDexOptDelayTime(J)V
    .locals 0

    .line 122
    invoke-direct {p0}, Lcom/bytedance/pangle/GlobalParam;->ensureInit()V

    .line 123
    iput-wide p1, p0, Lcom/bytedance/pangle/GlobalParam;->mDexOptDelayTime:J

    return-void
.end method

.method public setDid(Ljava/lang/String;)V
    .locals 0

    .line 132
    iput-object p1, p0, Lcom/bytedance/pangle/GlobalParam;->mDid:Ljava/lang/String;

    return-void
.end method

.method public setDownloadDir(Ljava/io/File;)V
    .locals 0

    .line 89
    invoke-direct {p0}, Lcom/bytedance/pangle/GlobalParam;->ensureInit()V

    .line 90
    iput-object p1, p0, Lcom/bytedance/pangle/GlobalParam;->mDownloadDir:Ljava/io/File;

    return-void
.end method

.method public setDownloaderProvider(Lcom/bytedance/pangle/download/IDownloaderProvider;)V
    .locals 0

    .line 117
    invoke-direct {p0}, Lcom/bytedance/pangle/GlobalParam;->ensureInit()V

    .line 118
    iput-object p1, p0, Lcom/bytedance/pangle/GlobalParam;->mDownloaderProvider:Lcom/bytedance/pangle/download/IDownloaderProvider;

    return-void
.end method

.method public setFastDex2oat(Z)V
    .locals 0

    .line 172
    iput-boolean p1, p0, Lcom/bytedance/pangle/GlobalParam;->mFastDex2oat:Z

    return-void
.end method

.method public setHostUrl(Ljava/lang/String;)V
    .locals 0

    .line 74
    invoke-direct {p0}, Lcom/bytedance/pangle/GlobalParam;->ensureInit()V

    .line 75
    iput-object p1, p0, Lcom/bytedance/pangle/GlobalParam;->mHostUrl:Ljava/lang/String;

    return-void
.end method

.method public setInstallThreads(I)V
    .locals 0

    .line 94
    invoke-direct {p0}, Lcom/bytedance/pangle/GlobalParam;->ensureInit()V

    .line 95
    iput p1, p0, Lcom/bytedance/pangle/GlobalParam;->mInstallThreads:I

    return-void
.end method

.method public setLogger(Lcom/bytedance/pangle/log/IZeusLogger;)V
    .locals 0

    .line 84
    invoke-direct {p0}, Lcom/bytedance/pangle/GlobalParam;->ensureInit()V

    .line 85
    iput-object p1, p0, Lcom/bytedance/pangle/GlobalParam;->mLogger:Lcom/bytedance/pangle/log/IZeusLogger;

    return-void
.end method

.method public setReporter(Lcom/bytedance/pangle/log/IZeusReporter;)V
    .locals 0

    .line 79
    invoke-direct {p0}, Lcom/bytedance/pangle/GlobalParam;->ensureInit()V

    .line 80
    iput-object p1, p0, Lcom/bytedance/pangle/GlobalParam;->mReporter:Lcom/bytedance/pangle/log/IZeusReporter;

    return-void
.end method

.method public setSignature(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 176
    invoke-direct {p0}, Lcom/bytedance/pangle/GlobalParam;->ensureInit()V

    .line 177
    iget-object v0, p0, Lcom/bytedance/pangle/GlobalParam;->mSignature:Ljava/util/Map;

    invoke-interface {v0, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public setUnInstallPluginWhenHostChange(Ljava/lang/String;Z)V
    .locals 1

    .line 104
    invoke-direct {p0}, Lcom/bytedance/pangle/GlobalParam;->ensureInit()V

    .line 105
    iget-object v0, p0, Lcom/bytedance/pangle/GlobalParam;->unInstallPluginWhenHostChange:Ljava/util/Map;

    invoke-static {p2}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object p2

    invoke-interface {v0, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public unInstallPluginWhenHostChange(Ljava/lang/String;)Z
    .locals 1

    .line 109
    iget-object v0, p0, Lcom/bytedance/pangle/GlobalParam;->unInstallPluginWhenHostChange:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/Boolean;

    if-nez p1, :cond_0

    const/4 p1, 0x0

    return p1

    .line 113
    :cond_0
    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p1

    return p1
.end method
