.class public Lcom/oppo/oiface/engine/OifaceGameEngineManager;
.super Ljava/lang/Object;
.source "OifaceGameEngineManager.java"


# static fields
.field private static final TAG:Ljava/lang/String; = "OppoManager"

.field private static mOppoManager:Lcom/oppo/oiface/engine/OifaceGameEngineManager; = null

.field private static mService:Lcom/oppo/oiface/engine/IOIfaceService; = null

.field private static final oppoSdkVersion:Ljava/lang/String; = "2.1"


# instance fields
.field private mCallbacks:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Lcom/oppo/oiface/engine/CallBack;",
            ">;"
        }
    .end annotation
.end field

.field private mDeathRecipient:Landroid/os/IBinder$DeathRecipient;

.field private mRemote:Landroid/os/IBinder;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>()V
    .locals 1

    .line 34
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 62
    new-instance v0, Lcom/oppo/oiface/engine/OifaceGameEngineManager$2;

    invoke-direct {v0, p0}, Lcom/oppo/oiface/engine/OifaceGameEngineManager$2;-><init>(Lcom/oppo/oiface/engine/OifaceGameEngineManager;)V

    iput-object v0, p0, Lcom/oppo/oiface/engine/OifaceGameEngineManager;->mDeathRecipient:Landroid/os/IBinder$DeathRecipient;

    .line 35
    invoke-direct {p0}, Lcom/oppo/oiface/engine/OifaceGameEngineManager;->connectOifaceService()Z

    return-void
.end method

.method static synthetic access$000(Lcom/oppo/oiface/engine/OifaceGameEngineManager;)Ljava/lang/ref/WeakReference;
    .locals 0

    .line 25
    iget-object p0, p0, Lcom/oppo/oiface/engine/OifaceGameEngineManager;->mCallbacks:Ljava/lang/ref/WeakReference;

    return-object p0
.end method

.method static synthetic access$102(Lcom/oppo/oiface/engine/IOIfaceService;)Lcom/oppo/oiface/engine/IOIfaceService;
    .locals 0

    .line 25
    sput-object p0, Lcom/oppo/oiface/engine/OifaceGameEngineManager;->mService:Lcom/oppo/oiface/engine/IOIfaceService;

    return-object p0
.end method

.method private connectOifaceService()Z
    .locals 4

    const-string v0, "oiface"

    .line 39
    invoke-static {v0}, Landroid/os/ServiceManager;->checkService(Ljava/lang/String;)Landroid/os/IBinder;

    move-result-object v0

    iput-object v0, p0, Lcom/oppo/oiface/engine/OifaceGameEngineManager;->mRemote:Landroid/os/IBinder;

    .line 40
    iget-object v0, p0, Lcom/oppo/oiface/engine/OifaceGameEngineManager;->mRemote:Landroid/os/IBinder;

    invoke-static {v0}, Lcom/oppo/oiface/engine/IOIfaceService$Stub;->asInterface(Landroid/os/IBinder;)Lcom/oppo/oiface/engine/IOIfaceService;

    move-result-object v0

    sput-object v0, Lcom/oppo/oiface/engine/OifaceGameEngineManager;->mService:Lcom/oppo/oiface/engine/IOIfaceService;

    .line 41
    sget-object v0, Lcom/oppo/oiface/engine/OifaceGameEngineManager;->mService:Lcom/oppo/oiface/engine/IOIfaceService;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 43
    :try_start_0
    new-instance v2, Lcom/oppo/oiface/engine/OifaceGameEngineManager$1;

    invoke-direct {v2, p0}, Lcom/oppo/oiface/engine/OifaceGameEngineManager$1;-><init>(Lcom/oppo/oiface/engine/OifaceGameEngineManager;)V

    invoke-interface {v0, v2}, Lcom/oppo/oiface/engine/IOIfaceService;->registerEngineClient(Lcom/oppo/oiface/engine/IOIfaceNotifier;)V

    .line 51
    iget-object v0, p0, Lcom/oppo/oiface/engine/OifaceGameEngineManager;->mRemote:Landroid/os/IBinder;

    iget-object v2, p0, Lcom/oppo/oiface/engine/OifaceGameEngineManager;->mDeathRecipient:Landroid/os/IBinder$DeathRecipient;

    invoke-interface {v0, v2, v1}, Landroid/os/IBinder;->linkToDeath(Landroid/os/IBinder$DeathRecipient;I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 v0, 0x1

    return v0

    :catch_0
    move-exception v0

    .line 54
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "IOIfaceService registerEngineClient error"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v2, "OppoManager"

    invoke-static {v2, v0}, Landroid/util/Slog;->d(Ljava/lang/String;Ljava/lang/String;)I

    const/4 v0, 0x0

    .line 55
    sput-object v0, Lcom/oppo/oiface/engine/OifaceGameEngineManager;->mService:Lcom/oppo/oiface/engine/IOIfaceService;

    :cond_0
    return v1
.end method

.method public static getInstance()Lcom/oppo/oiface/engine/OifaceGameEngineManager;
    .locals 2

    .line 80
    sget-object v0, Lcom/oppo/oiface/engine/OifaceGameEngineManager;->mService:Lcom/oppo/oiface/engine/IOIfaceService;

    if-nez v0, :cond_1

    .line 81
    const-class v0, Lcom/oppo/oiface/engine/OifaceGameEngineManager;

    monitor-enter v0

    .line 82
    :try_start_0
    sget-object v1, Lcom/oppo/oiface/engine/OifaceGameEngineManager;->mService:Lcom/oppo/oiface/engine/IOIfaceService;

    if-nez v1, :cond_0

    .line 83
    new-instance v1, Lcom/oppo/oiface/engine/OifaceGameEngineManager;

    invoke-direct {v1}, Lcom/oppo/oiface/engine/OifaceGameEngineManager;-><init>()V

    sput-object v1, Lcom/oppo/oiface/engine/OifaceGameEngineManager;->mOppoManager:Lcom/oppo/oiface/engine/OifaceGameEngineManager;

    .line 85
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 87
    :cond_1
    :goto_0
    sget-object v0, Lcom/oppo/oiface/engine/OifaceGameEngineManager;->mOppoManager:Lcom/oppo/oiface/engine/OifaceGameEngineManager;

    return-object v0
.end method


# virtual methods
.method public getMemoryUsage(I)I
    .locals 2

    .line 106
    sget-object v0, Lcom/oppo/oiface/engine/OifaceGameEngineManager;->mService:Lcom/oppo/oiface/engine/IOIfaceService;

    const/4 v1, -0x1

    if-nez v0, :cond_0

    invoke-direct {p0}, Lcom/oppo/oiface/engine/OifaceGameEngineManager;->connectOifaceService()Z

    move-result v0

    if-nez v0, :cond_0

    return v1

    .line 108
    :cond_0
    :try_start_0
    sget-object v0, Lcom/oppo/oiface/engine/OifaceGameEngineManager;->mService:Lcom/oppo/oiface/engine/IOIfaceService;

    invoke-interface {v0, p1}, Lcom/oppo/oiface/engine/IOIfaceService;->getMemoryUsage(I)I

    move-result p1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :catch_0
    move-exception p1

    .line 110
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    return v1
.end method

.method public getOifaceVersion()Ljava/lang/String;
    .locals 4

    .line 91
    sget-object v0, Lcom/oppo/oiface/engine/OifaceGameEngineManager;->mService:Lcom/oppo/oiface/engine/IOIfaceService;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    invoke-direct {p0}, Lcom/oppo/oiface/engine/OifaceGameEngineManager;->connectOifaceService()Z

    move-result v0

    if-nez v0, :cond_0

    return-object v1

    .line 93
    :cond_0
    :try_start_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v2, Lcom/oppo/oiface/engine/OifaceGameEngineManager;->mService:Lcom/oppo/oiface/engine/IOIfaceService;

    invoke-interface {v2}, Lcom/oppo/oiface/engine/IOIfaceService;->getOifaceVersion()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ":"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "2.1"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception v0

    .line 95
    sput-object v1, Lcom/oppo/oiface/engine/OifaceGameEngineManager;->mService:Lcom/oppo/oiface/engine/IOIfaceService;

    .line 96
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "getOifaceVersion error:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v2, "OppoManager"

    invoke-static {v2, v0}, Landroid/util/Slog;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-object v1
.end method

.method public systemStatus(Lcom/oppo/oiface/engine/CallBack;)V
    .locals 1

    .line 116
    sget-object v0, Lcom/oppo/oiface/engine/OifaceGameEngineManager;->mService:Lcom/oppo/oiface/engine/IOIfaceService;

    if-nez v0, :cond_0

    return-void

    .line 118
    :cond_0
    :try_start_0
    new-instance v0, Ljava/lang/ref/WeakReference;

    invoke-direct {v0, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object v0, p0, Lcom/oppo/oiface/engine/OifaceGameEngineManager;->mCallbacks:Ljava/lang/ref/WeakReference;

    .line 119
    sget-object p1, Lcom/oppo/oiface/engine/OifaceGameEngineManager;->mService:Lcom/oppo/oiface/engine/IOIfaceService;

    invoke-interface {p1}, Lcom/oppo/oiface/engine/IOIfaceService;->onAppRegister()V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 121
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public updateGameEngineInfo(Ljava/lang/String;)Z
    .locals 3

    .line 131
    sget-object v0, Lcom/oppo/oiface/engine/OifaceGameEngineManager;->mService:Lcom/oppo/oiface/engine/IOIfaceService;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    invoke-direct {p0}, Lcom/oppo/oiface/engine/OifaceGameEngineManager;->connectOifaceService()Z

    move-result v0

    if-nez v0, :cond_0

    return v1

    .line 133
    :cond_0
    :try_start_0
    sget-object v0, Lcom/oppo/oiface/engine/OifaceGameEngineManager;->mService:Lcom/oppo/oiface/engine/IOIfaceService;

    invoke-interface {v0, p1}, Lcom/oppo/oiface/engine/IOIfaceService;->updateGameEngineInfo(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 p1, 0x1

    return p1

    :catch_0
    move-exception p1

    const/4 v0, 0x0

    .line 135
    sput-object v0, Lcom/oppo/oiface/engine/OifaceGameEngineManager;->mService:Lcom/oppo/oiface/engine/IOIfaceService;

    .line 136
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "updateGameInfo error:"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "OppoManager"

    invoke-static {v0, p1}, Landroid/util/Slog;->d(Ljava/lang/String;Ljava/lang/String;)I

    return v1
.end method
