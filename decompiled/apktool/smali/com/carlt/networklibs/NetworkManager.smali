.class public Lcom/carlt/networklibs/NetworkManager;
.super Ljava/lang/Object;
.source "NetworkManager.java"


# static fields
.field private static volatile manager:Lcom/carlt/networklibs/NetworkManager;


# instance fields
.field private application:Landroid/app/Application;

.field private receiver:Lcom/carlt/networklibs/NetworkStateReceiver;


# direct methods
.method private constructor <init>()V
    .locals 1

    .line 20
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 21
    new-instance v0, Lcom/carlt/networklibs/NetworkStateReceiver;

    invoke-direct {v0}, Lcom/carlt/networklibs/NetworkStateReceiver;-><init>()V

    iput-object v0, p0, Lcom/carlt/networklibs/NetworkManager;->receiver:Lcom/carlt/networklibs/NetworkStateReceiver;

    return-void
.end method

.method public static getInstance()Lcom/carlt/networklibs/NetworkManager;
    .locals 2

    .line 25
    sget-object v0, Lcom/carlt/networklibs/NetworkManager;->manager:Lcom/carlt/networklibs/NetworkManager;

    if-nez v0, :cond_1

    .line 26
    const-class v0, Lcom/carlt/networklibs/NetworkManager;

    monitor-enter v0

    .line 27
    :try_start_0
    sget-object v1, Lcom/carlt/networklibs/NetworkManager;->manager:Lcom/carlt/networklibs/NetworkManager;

    if-nez v1, :cond_0

    .line 28
    new-instance v1, Lcom/carlt/networklibs/NetworkManager;

    invoke-direct {v1}, Lcom/carlt/networklibs/NetworkManager;-><init>()V

    sput-object v1, Lcom/carlt/networklibs/NetworkManager;->manager:Lcom/carlt/networklibs/NetworkManager;

    .line 30
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 33
    :cond_1
    :goto_0
    sget-object v0, Lcom/carlt/networklibs/NetworkManager;->manager:Lcom/carlt/networklibs/NetworkManager;

    return-object v0
.end method


# virtual methods
.method public getApplication()Landroid/app/Application;
    .locals 2

    .line 37
    iget-object v0, p0, Lcom/carlt/networklibs/NetworkManager;->application:Landroid/app/Application;

    if-eqz v0, :cond_0

    return-object v0

    .line 38
    :cond_0
    new-instance v0, Ljava/lang/RuntimeException;

    const-string v1, "please call init method in your app"

    invoke-direct {v0, v1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public init(Landroid/app/Application;)V
    .locals 2

    .line 45
    iput-object p1, p0, Lcom/carlt/networklibs/NetworkManager;->application:Landroid/app/Application;

    .line 47
    new-instance p1, Landroid/content/IntentFilter;

    invoke-direct {p1}, Landroid/content/IntentFilter;-><init>()V

    const-string v0, "android.net.conn.CONNECTIVITY_CHANGE"

    .line 48
    invoke-virtual {p1, v0}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 49
    iget-object v0, p0, Lcom/carlt/networklibs/NetworkManager;->application:Landroid/app/Application;

    iget-object v1, p0, Lcom/carlt/networklibs/NetworkManager;->receiver:Lcom/carlt/networklibs/NetworkStateReceiver;

    invoke-virtual {v0, v1, p1}, Landroid/app/Application;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;

    return-void
.end method

.method public registerObserver(Ljava/lang/Object;)V
    .locals 1

    .line 67
    iget-object v0, p0, Lcom/carlt/networklibs/NetworkManager;->receiver:Lcom/carlt/networklibs/NetworkStateReceiver;

    invoke-virtual {v0, p1}, Lcom/carlt/networklibs/NetworkStateReceiver;->registerObserver(Ljava/lang/Object;)V

    return-void
.end method

.method public unRegisterAllObserver()V
    .locals 1

    .line 75
    iget-object v0, p0, Lcom/carlt/networklibs/NetworkManager;->receiver:Lcom/carlt/networklibs/NetworkStateReceiver;

    invoke-virtual {v0}, Lcom/carlt/networklibs/NetworkStateReceiver;->unRegisterAllObserver()V

    return-void
.end method

.method public unRegisterObserver(Ljava/lang/Object;)V
    .locals 1

    .line 71
    iget-object v0, p0, Lcom/carlt/networklibs/NetworkManager;->receiver:Lcom/carlt/networklibs/NetworkStateReceiver;

    invoke-virtual {v0, p1}, Lcom/carlt/networklibs/NetworkStateReceiver;->unRegisterObserver(Ljava/lang/Object;)V

    return-void
.end method
