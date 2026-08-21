.class public Lcom/huawei/hms/api/HuaweiApiClientImpl;
.super Lcom/huawei/hms/api/HuaweiApiClient;
.source "HuaweiApiClientImpl.java"

# interfaces
.implements Lcom/huawei/hms/support/api/client/InnerApiClient;
.implements Landroid/content/ServiceConnection;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/huawei/hms/api/HuaweiApiClientImpl$e;,
        Lcom/huawei/hms/api/HuaweiApiClientImpl$h;,
        Lcom/huawei/hms/api/HuaweiApiClientImpl$f;,
        Lcom/huawei/hms/api/HuaweiApiClientImpl$g;
    }
.end annotation


# static fields
.field private static final B:Ljava/lang/Object;

.field private static final C:Ljava/lang/Object;

.field public static final DEFAULT_ACCOUNT:Ljava/lang/String; = "<<default account>>"

.field public static final SIGN_IN_MODE_OPTIONAL:I = 0x2

.field public static final SIGN_IN_MODE_REQUIRED:I = 0x1


# instance fields
.field private A:Lcom/huawei/updatesdk/service/otaupdate/CheckUpdateCallBack;

.field private a:I

.field private final b:Landroid/content/Context;

.field private final c:Ljava/lang/String;

.field private d:Ljava/lang/String;

.field private e:Ljava/lang/String;

.field private volatile f:Lcom/huawei/hms/core/aidl/d;

.field private g:Ljava/lang/String;

.field private h:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Landroid/app/Activity;",
            ">;"
        }
    .end annotation
.end field

.field private i:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Landroid/app/Activity;",
            ">;"
        }
    .end annotation
.end field

.field private j:Z

.field private k:Ljava/util/concurrent/atomic/AtomicInteger;

.field private l:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/huawei/hms/support/api/entity/auth/Scope;",
            ">;"
        }
    .end annotation
.end field

.field private m:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/huawei/hms/support/api/entity/auth/PermissionInfo;",
            ">;"
        }
    .end annotation
.end field

.field private n:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Lcom/huawei/hms/api/Api<",
            "*>;",
            "Lcom/huawei/hms/api/Api$ApiOptions;",
            ">;"
        }
    .end annotation
.end field

.field private o:Lcom/huawei/hms/support/api/client/SubAppInfo;

.field private p:J

.field private q:I

.field private final r:Ljava/lang/Object;

.field private final s:Ljava/util/concurrent/locks/ReentrantLock;

.field private final t:Ljava/util/concurrent/locks/Condition;

.field private u:Lcom/huawei/hms/api/ConnectionResult;

.field private v:Lcom/huawei/hms/api/HuaweiApiClient$ConnectionCallbacks;

.field private w:Lcom/huawei/hms/api/HuaweiApiClient$OnConnectionFailedListener;

.field private x:Landroid/os/Handler;

.field private y:Landroid/os/Handler;

.field private z:Lcom/huawei/hms/api/CheckUpdatelistener;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 1
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    sput-object v0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->B:Ljava/lang/Object;

    .line 3
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    sput-object v0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->C:Ljava/lang/Object;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 3

    .line 1
    invoke-direct {p0}, Lcom/huawei/hms/api/HuaweiApiClient;-><init>()V

    const/4 v0, -0x1

    .line 2
    iput v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->a:I

    const/4 v0, 0x0

    .line 48
    iput-boolean v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->j:Z

    .line 50
    new-instance v1, Ljava/util/concurrent/atomic/AtomicInteger;

    const/4 v2, 0x1

    invoke-direct {v1, v2}, Ljava/util/concurrent/atomic/AtomicInteger;-><init>(I)V

    iput-object v1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->k:Ljava/util/concurrent/atomic/AtomicInteger;

    const-wide/16 v1, 0x0

    .line 63
    iput-wide v1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->p:J

    .line 65
    iput v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->q:I

    .line 67
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->r:Ljava/lang/Object;

    .line 69
    new-instance v0, Ljava/util/concurrent/locks/ReentrantLock;

    invoke-direct {v0}, Ljava/util/concurrent/locks/ReentrantLock;-><init>()V

    iput-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->s:Ljava/util/concurrent/locks/ReentrantLock;

    .line 71
    invoke-virtual {v0}, Ljava/util/concurrent/locks/ReentrantLock;->newCondition()Ljava/util/concurrent/locks/Condition;

    move-result-object v0

    iput-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->t:Ljava/util/concurrent/locks/Condition;

    const/4 v0, 0x0

    .line 86
    iput-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->x:Landroid/os/Handler;

    .line 91
    iput-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->y:Landroid/os/Handler;

    .line 94
    iput-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->z:Lcom/huawei/hms/api/CheckUpdatelistener;

    .line 170
    iput-object p1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->b:Landroid/content/Context;

    .line 171
    invoke-static {p1}, Lcom/huawei/hms/utils/Util;->getAppId(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->c:Ljava/lang/String;

    .line 172
    iput-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->d:Ljava/lang/String;

    .line 173
    invoke-static {p1}, Lcom/huawei/hms/utils/Util;->getCpId(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->e:Ljava/lang/String;

    return-void
.end method

.method static synthetic a(Lcom/huawei/hms/api/HuaweiApiClientImpl;)Lcom/huawei/hms/api/CheckUpdatelistener;
    .locals 0

    .line 1
    iget-object p0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->z:Lcom/huawei/hms/api/CheckUpdatelistener;

    return-object p0
.end method

.method static synthetic a(Lcom/huawei/hms/api/HuaweiApiClientImpl;Lcom/huawei/hms/api/CheckUpdatelistener;)Lcom/huawei/hms/api/CheckUpdatelistener;
    .locals 0

    .line 2
    iput-object p1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->z:Lcom/huawei/hms/api/CheckUpdatelistener;

    return-object p1
.end method

.method private a()V
    .locals 4

    .line 6
    new-instance v0, Landroid/content/Intent;

    const-string v1, "com.huawei.hms.core.aidlservice"

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 7
    iget-object v1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->b:Landroid/content/Context;

    invoke-static {v1}, Lcom/huawei/hms/utils/HMSPackageManager;->getInstance(Landroid/content/Context;)Lcom/huawei/hms/utils/HMSPackageManager;

    move-result-object v1

    invoke-virtual {v1}, Lcom/huawei/hms/utils/HMSPackageManager;->refresh()V

    .line 8
    iget-object v1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->b:Landroid/content/Context;

    invoke-static {v1}, Lcom/huawei/hms/utils/HMSPackageManager;->getInstance(Landroid/content/Context;)Lcom/huawei/hms/utils/HMSPackageManager;

    move-result-object v1

    invoke-virtual {v1}, Lcom/huawei/hms/utils/HMSPackageManager;->getHMSPackageName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;

    .line 9
    sget-object v1, Lcom/huawei/hms/api/HuaweiApiClientImpl;->B:Ljava/lang/Object;

    monitor-enter v1

    .line 10
    :try_start_0
    iget-object v2, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->b:Landroid/content/Context;

    const/4 v3, 0x1

    invoke-virtual {v2, v0, p0, v3}, Landroid/content/Context;->bindService(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 12
    invoke-direct {p0}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->i()V

    .line 13
    monitor-exit v1

    return-void

    .line 15
    :cond_0
    monitor-exit v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 16
    invoke-direct {p0, v3}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->c(I)V

    const-string v0, "HuaweiApiClientImpl"

    const-string v1, "In connect, bind core service fail"

    .line 17
    invoke-static {v0, v1}, Lcom/huawei/hms/support/log/HMSLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 18
    invoke-direct {p0}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->b()V

    return-void

    :catchall_0
    move-exception v0

    .line 19
    :try_start_1
    monitor-exit v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw v0
.end method

.method private a(I)V
    .locals 4

    const/4 v0, 0x2

    const/4 v1, 0x0

    if-ne p1, v0, :cond_1

    .line 20
    sget-object v2, Lcom/huawei/hms/api/HuaweiApiClientImpl;->B:Ljava/lang/Object;

    monitor-enter v2

    .line 21
    :try_start_0
    iget-object v3, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->x:Landroid/os/Handler;

    if-eqz v3, :cond_0

    .line 22
    iget-object v3, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->x:Landroid/os/Handler;

    invoke-virtual {v3, p1}, Landroid/os/Handler;->removeMessages(I)V

    .line 23
    iput-object v1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->x:Landroid/os/Handler;

    .line 25
    :cond_0
    monitor-exit v2

    goto :goto_0

    :catchall_0
    move-exception p1

    monitor-exit v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1

    :cond_1
    :goto_0
    const/4 v2, 0x3

    if-ne p1, v2, :cond_3

    .line 28
    sget-object v2, Lcom/huawei/hms/api/HuaweiApiClientImpl;->C:Ljava/lang/Object;

    monitor-enter v2

    .line 29
    :try_start_1
    iget-object v3, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->y:Landroid/os/Handler;

    if-eqz v3, :cond_2

    .line 30
    iget-object v3, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->y:Landroid/os/Handler;

    invoke-virtual {v3, p1}, Landroid/os/Handler;->removeMessages(I)V

    .line 31
    iput-object v1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->y:Landroid/os/Handler;

    .line 33
    :cond_2
    monitor-exit v2

    goto :goto_1

    :catchall_1
    move-exception p1

    monitor-exit v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    throw p1

    .line 36
    :cond_3
    :goto_1
    sget-object p1, Lcom/huawei/hms/api/HuaweiApiClientImpl;->B:Ljava/lang/Object;

    monitor-enter p1

    .line 37
    :try_start_2
    iget-object v2, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->x:Landroid/os/Handler;

    if-eqz v2, :cond_4

    .line 38
    iget-object v2, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->x:Landroid/os/Handler;

    invoke-virtual {v2, v0}, Landroid/os/Handler;->removeMessages(I)V

    .line 39
    iput-object v1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->x:Landroid/os/Handler;

    .line 41
    :cond_4
    monitor-exit p1

    return-void

    :catchall_2
    move-exception v0

    monitor-exit p1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    throw v0
.end method

.method static synthetic a(Lcom/huawei/hms/api/HuaweiApiClientImpl;I)V
    .locals 0

    .line 4
    invoke-direct {p0, p1}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->c(I)V

    return-void
.end method

.method static synthetic a(Lcom/huawei/hms/api/HuaweiApiClientImpl;Lcom/huawei/hms/support/api/ResolveResult;)V
    .locals 0

    .line 5
    invoke-direct {p0, p1}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->b(Lcom/huawei/hms/support/api/ResolveResult;)V

    return-void
.end method

.method private a(Lcom/huawei/hms/support/api/ResolveResult;)V
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/huawei/hms/support/api/ResolveResult<",
            "Lcom/huawei/hms/support/api/entity/core/ConnectResp;",
            ">;)V"
        }
    .end annotation

    const-string v0, "HuaweiApiClientImpl"

    const-string v1, "Enter onConnectionResult"

    .line 42
    invoke-static {v0, v1}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 43
    iget-object v1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->f:Lcom/huawei/hms/core/aidl/d;

    if-eqz v1, :cond_c

    iget-object v1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->k:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v1}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v1

    const/4 v2, 0x2

    if-eq v1, v2, :cond_0

    goto/16 :goto_3

    :cond_0
    const/4 v1, 0x3

    .line 50
    invoke-direct {p0, v1}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->a(I)V

    .line 53
    invoke-virtual {p1}, Lcom/huawei/hms/support/api/ResolveResult;->getValue()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/huawei/hms/support/api/entity/core/ConnectResp;

    if-eqz v2, :cond_1

    .line 55
    iget-object v2, v2, Lcom/huawei/hms/support/api/entity/core/ConnectResp;->sessionId:Ljava/lang/String;

    iput-object v2, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->g:Ljava/lang/String;

    .line 59
    :cond_1
    iget-object v2, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->o:Lcom/huawei/hms/support/api/client/SubAppInfo;

    const/4 v3, 0x0

    if-nez v2, :cond_2

    move-object v2, v3

    goto :goto_0

    :cond_2
    invoke-virtual {v2}, Lcom/huawei/hms/support/api/client/SubAppInfo;->getSubAppID()Ljava/lang/String;

    move-result-object v2

    .line 60
    :goto_0
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_3

    .line 61
    iput-object v2, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->d:Ljava/lang/String;

    .line 64
    :cond_3
    invoke-virtual {p1}, Lcom/huawei/hms/support/api/client/Result;->getStatus()Lcom/huawei/hms/support/api/client/Status;

    move-result-object v2

    invoke-virtual {v2}, Lcom/huawei/hms/support/api/client/Status;->getStatusCode()I

    move-result v2

    .line 65
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "Enter onConnectionResult, connect to server result: "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v0, v4}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 67
    sget-object v4, Lcom/huawei/hms/support/api/client/Status;->SUCCESS:Lcom/huawei/hms/support/api/client/Status;

    invoke-virtual {p1}, Lcom/huawei/hms/support/api/client/Result;->getStatus()Lcom/huawei/hms/support/api/client/Status;

    move-result-object v5

    invoke-virtual {v4, v5}, Lcom/huawei/hms/support/api/client/Status;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_8

    .line 68
    invoke-virtual {p1}, Lcom/huawei/hms/support/api/ResolveResult;->getValue()Ljava/lang/Object;

    move-result-object v2

    if-eqz v2, :cond_4

    .line 69
    invoke-static {}, Lcom/huawei/hms/api/ProtocolNegotiate;->getInstance()Lcom/huawei/hms/api/ProtocolNegotiate;

    move-result-object v2

    invoke-virtual {p1}, Lcom/huawei/hms/support/api/ResolveResult;->getValue()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/huawei/hms/support/api/entity/core/ConnectResp;

    iget-object p1, p1, Lcom/huawei/hms/support/api/entity/core/ConnectResp;->protocolVersion:Ljava/util/List;

    invoke-virtual {v2, p1}, Lcom/huawei/hms/api/ProtocolNegotiate;->negotiate(Ljava/util/List;)I

    .line 72
    :cond_4
    invoke-direct {p0, v1}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->c(I)V

    .line 73
    iput-object v3, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->u:Lcom/huawei/hms/api/ConnectionResult;

    .line 75
    iget-object p1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->v:Lcom/huawei/hms/api/HuaweiApiClient$ConnectionCallbacks;

    if-eqz p1, :cond_5

    .line 76
    invoke-interface {p1}, Lcom/huawei/hms/api/HuaweiApiClient$ConnectionCallbacks;->onConnected()V

    .line 80
    :cond_5
    iget-object p1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->h:Ljava/lang/ref/WeakReference;

    if-eqz p1, :cond_6

    .line 81
    invoke-direct {p0}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->n()V

    .line 84
    :cond_6
    invoke-virtual {p0}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->getApiMap()Ljava/util/Map;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_7
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_b

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 85
    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/huawei/hms/api/Api;

    invoke-virtual {v2}, Lcom/huawei/hms/api/Api;->getmConnetctPostList()Ljava/util/List;

    move-result-object v2

    if-eqz v2, :cond_7

    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/huawei/hms/api/Api;

    invoke-virtual {v2}, Lcom/huawei/hms/api/Api;->getmConnetctPostList()Ljava/util/List;

    move-result-object v2

    invoke-interface {v2}, Ljava/util/List;->isEmpty()Z

    move-result v2

    if-nez v2, :cond_7

    const-string v2, "Enter onConnectionResult, get the ConnetctPostList "

    .line 86
    invoke-static {v0, v2}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 87
    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/huawei/hms/api/Api;

    invoke-virtual {v1}, Lcom/huawei/hms/api/Api;->getmConnetctPostList()Ljava/util/List;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_1
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_7

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/huawei/hms/common/api/ConnectionPostProcessor;

    const-string v3, "Enter onConnectionResult, processor.run"

    .line 88
    invoke-static {v0, v3}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 89
    iget-object v3, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->h:Ljava/lang/ref/WeakReference;

    invoke-interface {v2, p0, v3}, Lcom/huawei/hms/common/api/ConnectionPostProcessor;->run(Lcom/huawei/hms/api/HuaweiApiClient;Ljava/lang/ref/WeakReference;)V

    goto :goto_1

    .line 94
    :cond_8
    invoke-virtual {p1}, Lcom/huawei/hms/support/api/client/Result;->getStatus()Lcom/huawei/hms/support/api/client/Status;

    move-result-object v0

    const/4 v4, 0x1

    if-eqz v0, :cond_9

    .line 95
    invoke-virtual {p1}, Lcom/huawei/hms/support/api/client/Result;->getStatus()Lcom/huawei/hms/support/api/client/Status;

    move-result-object p1

    invoke-virtual {p1}, Lcom/huawei/hms/support/api/client/Status;->getStatusCode()I

    move-result p1

    const/16 v0, 0x3e9

    if-ne p1, v0, :cond_9

    .line 96
    invoke-direct {p0}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->o()V

    .line 97
    invoke-direct {p0, v4}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->c(I)V

    .line 99
    iget-object p1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->v:Lcom/huawei/hms/api/HuaweiApiClient$ConnectionCallbacks;

    if-eqz p1, :cond_b

    .line 100
    invoke-interface {p1, v1}, Lcom/huawei/hms/api/HuaweiApiClient$ConnectionCallbacks;->onConnectionSuspended(I)V

    goto :goto_2

    .line 103
    :cond_9
    invoke-direct {p0}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->o()V

    .line 105
    invoke-direct {p0, v4}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->c(I)V

    .line 107
    iget-object p1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->w:Lcom/huawei/hms/api/HuaweiApiClient$OnConnectionFailedListener;

    if-eqz p1, :cond_b

    .line 109
    iget-object p1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->h:Ljava/lang/ref/WeakReference;

    if-eqz p1, :cond_a

    invoke-virtual {p1}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object p1

    if-eqz p1, :cond_a

    .line 110
    invoke-static {}, Lcom/huawei/hms/api/HuaweiApiAvailability;->getInstance()Lcom/huawei/hms/api/HuaweiApiAvailability;

    move-result-object p1

    iget-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->h:Ljava/lang/ref/WeakReference;

    .line 111
    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/Activity;

    invoke-virtual {p1, v0, v2}, Lcom/huawei/hms/api/HuaweiApiAvailability;->getResolveErrorPendingIntent(Landroid/app/Activity;I)Landroid/app/PendingIntent;

    move-result-object v3

    .line 113
    :cond_a
    new-instance p1, Lcom/huawei/hms/api/ConnectionResult;

    invoke-direct {p1, v2, v3}, Lcom/huawei/hms/api/ConnectionResult;-><init>(ILandroid/app/PendingIntent;)V

    .line 114
    iget-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->w:Lcom/huawei/hms/api/HuaweiApiClient$OnConnectionFailedListener;

    invoke-interface {v0, p1}, Lcom/huawei/hms/api/HuaweiApiClient$OnConnectionFailedListener;->onConnectionFailed(Lcom/huawei/hms/api/ConnectionResult;)V

    .line 115
    iput-object p1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->u:Lcom/huawei/hms/api/ConnectionResult;

    :cond_b
    :goto_2
    return-void

    :cond_c
    :goto_3
    const-string p1, "Invalid onConnectionResult"

    .line 116
    invoke-static {v0, p1}, Lcom/huawei/hms/support/log/HMSLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic a(Lcom/huawei/hms/api/HuaweiApiClientImpl;Z)Z
    .locals 0

    .line 3
    iput-boolean p1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->j:Z

    return p1
.end method

.method static synthetic b(Lcom/huawei/hms/api/HuaweiApiClientImpl;)Ljava/util/concurrent/atomic/AtomicInteger;
    .locals 0

    .line 1
    iget-object p0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->k:Ljava/util/concurrent/atomic/AtomicInteger;

    return-object p0
.end method

.method private b()V
    .locals 3

    .line 11
    invoke-direct {p0}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->o()V

    .line 12
    iget-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->w:Lcom/huawei/hms/api/HuaweiApiClient$OnConnectionFailedListener;

    if-eqz v0, :cond_2

    .line 14
    iget-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->b:Landroid/content/Context;

    invoke-static {v0}, Lcom/huawei/hms/utils/UIUtil;->isBackground(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x7

    goto :goto_0

    :cond_0
    const/4 v0, 0x6

    :goto_0
    const/4 v1, 0x0

    .line 21
    iget-object v2, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->h:Ljava/lang/ref/WeakReference;

    if-eqz v2, :cond_1

    invoke-virtual {v2}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 23
    invoke-static {}, Lcom/huawei/hms/api/HuaweiApiAvailability;->getInstance()Lcom/huawei/hms/api/HuaweiApiAvailability;

    move-result-object v1

    iget-object v2, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->h:Ljava/lang/ref/WeakReference;

    invoke-virtual {v2}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Landroid/app/Activity;

    invoke-virtual {v1, v2, v0}, Lcom/huawei/hms/api/HuaweiApiAvailability;->getResolveErrorPendingIntent(Landroid/app/Activity;I)Landroid/app/PendingIntent;

    move-result-object v1

    .line 25
    :cond_1
    new-instance v2, Lcom/huawei/hms/api/ConnectionResult;

    invoke-direct {v2, v0, v1}, Lcom/huawei/hms/api/ConnectionResult;-><init>(ILandroid/app/PendingIntent;)V

    .line 26
    iget-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->w:Lcom/huawei/hms/api/HuaweiApiClient$OnConnectionFailedListener;

    invoke-interface {v0, v2}, Lcom/huawei/hms/api/HuaweiApiClient$OnConnectionFailedListener;->onConnectionFailed(Lcom/huawei/hms/api/ConnectionResult;)V

    .line 27
    iput-object v2, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->u:Lcom/huawei/hms/api/ConnectionResult;

    :cond_2
    return-void
.end method

.method private b(I)V
    .locals 3

    .line 3
    iget-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->h:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 5
    invoke-static {}, Lcom/huawei/hms/api/HuaweiApiAvailability;->getInstance()Lcom/huawei/hms/api/HuaweiApiAvailability;

    move-result-object v0

    iget-object v1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->h:Ljava/lang/ref/WeakReference;

    invoke-virtual {v1}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/app/Activity;

    invoke-virtual {v0, v1, p1}, Lcom/huawei/hms/api/HuaweiApiAvailability;->getResolveErrorPendingIntent(Landroid/app/Activity;I)Landroid/app/PendingIntent;

    move-result-object v0

    .line 6
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "connect 2.0 fail: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "HuaweiApiClientImpl"

    invoke-static {v2, v1}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    .line 8
    :goto_0
    new-instance v1, Lcom/huawei/hms/api/ConnectionResult;

    invoke-direct {v1, p1, v0}, Lcom/huawei/hms/api/ConnectionResult;-><init>(ILandroid/app/PendingIntent;)V

    .line 9
    iget-object p1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->w:Lcom/huawei/hms/api/HuaweiApiClient$OnConnectionFailedListener;

    invoke-interface {p1, v1}, Lcom/huawei/hms/api/HuaweiApiClient$OnConnectionFailedListener;->onConnectionFailed(Lcom/huawei/hms/api/ConnectionResult;)V

    .line 10
    iput-object v1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->u:Lcom/huawei/hms/api/ConnectionResult;

    return-void
.end method

.method static synthetic b(Lcom/huawei/hms/api/HuaweiApiClientImpl;Lcom/huawei/hms/support/api/ResolveResult;)V
    .locals 0

    .line 2
    invoke-direct {p0, p1}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->a(Lcom/huawei/hms/support/api/ResolveResult;)V

    return-void
.end method

.method private b(Lcom/huawei/hms/support/api/ResolveResult;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/huawei/hms/support/api/ResolveResult<",
            "Lcom/huawei/hms/support/api/entity/core/DisconnectResp;",
            ">;)V"
        }
    .end annotation

    .line 28
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Enter onDisconnectionResult, disconnect from server result: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 29
    invoke-virtual {p1}, Lcom/huawei/hms/support/api/client/Result;->getStatus()Lcom/huawei/hms/support/api/client/Status;

    move-result-object p1

    invoke-virtual {p1}, Lcom/huawei/hms/support/api/client/Status;->getStatusCode()I

    move-result p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "HuaweiApiClientImpl"

    .line 30
    invoke-static {v0, p1}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 33
    invoke-direct {p0}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->o()V

    const/4 p1, 0x1

    .line 34
    invoke-direct {p0, p1}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->c(I)V

    return-void
.end method

.method private c()Lcom/huawei/hms/support/api/entity/core/ConnectInfo;
    .locals 5

    .line 10
    new-instance v0, Lcom/huawei/hms/utils/PackageManagerHelper;

    iget-object v1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->b:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/huawei/hms/utils/PackageManagerHelper;-><init>(Landroid/content/Context;)V

    iget-object v1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->b:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/huawei/hms/utils/PackageManagerHelper;->getPackageSignature(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    if-nez v0, :cond_0

    const-string v0, ""

    .line 13
    :cond_0
    iget-object v1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->o:Lcom/huawei/hms/support/api/client/SubAppInfo;

    if-nez v1, :cond_1

    const/4 v1, 0x0

    goto :goto_0

    :cond_1
    invoke-virtual {v1}, Lcom/huawei/hms/support/api/client/SubAppInfo;->getSubAppID()Ljava/lang/String;

    move-result-object v1

    .line 15
    :goto_0
    new-instance v2, Lcom/huawei/hms/support/api/entity/core/ConnectInfo;

    invoke-virtual {p0}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->getApiNameList()Ljava/util/List;

    move-result-object v3

    iget-object v4, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->l:Ljava/util/List;

    invoke-direct {v2, v3, v4, v0, v1}, Lcom/huawei/hms/support/api/entity/core/ConnectInfo;-><init>(Ljava/util/List;Ljava/util/List;Ljava/lang/String;Ljava/lang/String;)V

    return-object v2
.end method

.method private c(I)V
    .locals 1

    .line 2
    iget-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->k:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/atomic/AtomicInteger;->set(I)V

    const/4 v0, 0x1

    if-eq p1, v0, :cond_0

    const/4 v0, 0x3

    if-eq p1, v0, :cond_0

    const/4 v0, 0x2

    if-ne p1, v0, :cond_1

    .line 4
    :cond_0
    iget-object p1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->s:Ljava/util/concurrent/locks/ReentrantLock;

    invoke-virtual {p1}, Ljava/util/concurrent/locks/ReentrantLock;->lock()V

    .line 6
    :try_start_0
    iget-object p1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->t:Ljava/util/concurrent/locks/Condition;

    invoke-interface {p1}, Ljava/util/concurrent/locks/Condition;->signalAll()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 8
    iget-object p1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->s:Ljava/util/concurrent/locks/ReentrantLock;

    invoke-virtual {p1}, Ljava/util/concurrent/locks/ReentrantLock;->unlock()V

    :cond_1
    return-void

    :catchall_0
    move-exception p1

    iget-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->s:Ljava/util/concurrent/locks/ReentrantLock;

    invoke-virtual {v0}, Ljava/util/concurrent/locks/ReentrantLock;->unlock()V

    .line 9
    throw p1
.end method

.method static synthetic c(Lcom/huawei/hms/api/HuaweiApiClientImpl;)V
    .locals 0

    .line 1
    invoke-direct {p0}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->b()V

    return-void
.end method

.method private d()Lcom/huawei/hms/support/api/entity/core/DisconnectInfo;
    .locals 3

    .line 2
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 4
    iget-object v1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->n:Ljava/util/Map;

    if-eqz v1, :cond_0

    .line 5
    invoke-interface {v1}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    .line 6
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 7
    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/huawei/hms/api/Api;

    .line 8
    invoke-virtual {v2}, Lcom/huawei/hms/api/Api;->getApiName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 11
    :cond_0
    new-instance v1, Lcom/huawei/hms/support/api/entity/core/DisconnectInfo;

    iget-object v2, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->l:Ljava/util/List;

    invoke-direct {v1, v2, v0}, Lcom/huawei/hms/support/api/entity/core/DisconnectInfo;-><init>(Ljava/util/List;Ljava/util/List;)V

    return-object v1
.end method

.method static synthetic d(Lcom/huawei/hms/api/HuaweiApiClientImpl;)Ljava/lang/ref/WeakReference;
    .locals 0

    .line 1
    iget-object p0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->h:Ljava/lang/ref/WeakReference;

    return-object p0
.end method

.method private e()I
    .locals 3

    .line 1
    iget-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->b:Landroid/content/Context;

    invoke-static {v0}, Lcom/huawei/hms/utils/Util;->getHmsVersion(Landroid/content/Context;)I

    move-result v0

    const v1, 0x138d9d8

    if-eqz v0, :cond_1

    if-ge v0, v1, :cond_0

    goto :goto_0

    :cond_0
    return v0

    .line 7
    :cond_1
    :goto_0
    invoke-direct {p0}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->f()I

    move-result v0

    .line 10
    invoke-direct {p0}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->h()Z

    move-result v2

    if-eqz v2, :cond_3

    if-ge v0, v1, :cond_2

    goto :goto_1

    :cond_2
    move v1, v0

    :goto_1
    return v1

    :cond_3
    const v1, 0x13a54c0

    if-ge v0, v1, :cond_4

    move v0, v1

    :cond_4
    return v0
.end method

.method private f()I
    .locals 4

    .line 1
    invoke-virtual {p0}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->getApiMap()Ljava/util/Map;

    move-result-object v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    .line 5
    :cond_0
    invoke-interface {v0}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v0

    .line 8
    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_1
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/huawei/hms/api/Api;

    .line 9
    invoke-virtual {v2}, Lcom/huawei/hms/api/Api;->getApiName()Ljava/lang/String;

    move-result-object v2

    .line 10
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_1

    .line 11
    invoke-static {}, Lcom/huawei/hms/api/HuaweiApiAvailability;->getApiMap()Ljava/util/Map;

    move-result-object v3

    .line 12
    invoke-interface {v3, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Integer;

    if-eqz v2, :cond_1

    .line 14
    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    if-le v2, v1, :cond_1

    move v1, v2

    goto :goto_0

    :cond_2
    return v1
.end method

.method private g()V
    .locals 1

    .line 1
    new-instance v0, Lcom/huawei/hms/api/HuaweiApiClientImpl$a;

    invoke-direct {v0, p0}, Lcom/huawei/hms/api/HuaweiApiClientImpl$a;-><init>(Lcom/huawei/hms/api/HuaweiApiClientImpl;)V

    iput-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->A:Lcom/huawei/updatesdk/service/otaupdate/CheckUpdateCallBack;

    return-void
.end method

.method private h()Z
    .locals 3

    .line 1
    iget-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->n:Ljava/util/Map;

    if-eqz v0, :cond_1

    .line 2
    invoke-interface {v0}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    .line 3
    :cond_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 4
    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/huawei/hms/api/Api;

    .line 5
    invoke-virtual {v1}, Lcom/huawei/hms/api/Api;->getApiName()Ljava/lang/String;

    move-result-object v1

    const-string v2, "HuaweiGame.API"

    invoke-virtual {v2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_1
    const/4 v0, 0x0

    return v0
.end method

.method private i()V
    .locals 4

    .line 1
    iget-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->x:Landroid/os/Handler;

    const/4 v1, 0x2

    if-eqz v0, :cond_0

    .line 2
    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeMessages(I)V

    goto :goto_0

    .line 4
    :cond_0
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v2

    new-instance v3, Lcom/huawei/hms/api/HuaweiApiClientImpl$b;

    invoke-direct {v3, p0}, Lcom/huawei/hms/api/HuaweiApiClientImpl$b;-><init>(Lcom/huawei/hms/api/HuaweiApiClientImpl;)V

    invoke-direct {v0, v2, v3}, Landroid/os/Handler;-><init>(Landroid/os/Looper;Landroid/os/Handler$Callback;)V

    iput-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->x:Landroid/os/Handler;

    .line 22
    :goto_0
    iget-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->x:Landroid/os/Handler;

    const-wide/16 v2, 0x1388

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    return-void
.end method

.method private j()V
    .locals 5

    .line 1
    sget-object v0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->C:Ljava/lang/Object;

    monitor-enter v0

    .line 2
    :try_start_0
    iget-object v1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->y:Landroid/os/Handler;

    const/4 v2, 0x3

    if-eqz v1, :cond_0

    .line 3
    iget-object v1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->y:Landroid/os/Handler;

    invoke-virtual {v1, v2}, Landroid/os/Handler;->removeMessages(I)V

    goto :goto_0

    .line 5
    :cond_0
    new-instance v1, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v3

    new-instance v4, Lcom/huawei/hms/api/HuaweiApiClientImpl$c;

    invoke-direct {v4, p0}, Lcom/huawei/hms/api/HuaweiApiClientImpl$c;-><init>(Lcom/huawei/hms/api/HuaweiApiClientImpl;)V

    invoke-direct {v1, v3, v4}, Landroid/os/Handler;-><init>(Landroid/os/Looper;Landroid/os/Handler$Callback;)V

    iput-object v1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->y:Landroid/os/Handler;

    .line 20
    :goto_0
    iget-object v1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->y:Landroid/os/Handler;

    const-wide/16 v3, 0xbb8

    invoke-virtual {v1, v2, v3, v4}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    move-result v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v2, "HuaweiApiClientImpl"

    .line 21
    :try_start_1
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "sendEmptyMessageDelayed for onConnectionResult 3 seconds. the result is : "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/huawei/hms/support/log/HMSLog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 22
    monitor-exit v0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw v1
.end method

.method private k()V
    .locals 3

    const-string v0, "HuaweiApiClientImpl"

    const-string v1, "Enter sendConnectApiServceRequest."

    .line 1
    invoke-static {v0, v1}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 2
    invoke-direct {p0}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->c()Lcom/huawei/hms/support/api/entity/core/ConnectInfo;

    move-result-object v0

    .line 5
    invoke-static {p0, v0}, Lcom/huawei/hms/support/api/core/ConnectService;->connect(Lcom/huawei/hms/support/api/client/ApiClient;Lcom/huawei/hms/support/api/entity/core/ConnectInfo;)Lcom/huawei/hms/support/api/client/PendingResult;

    move-result-object v0

    new-instance v1, Lcom/huawei/hms/api/HuaweiApiClientImpl$f;

    const/4 v2, 0x0

    invoke-direct {v1, p0, v2}, Lcom/huawei/hms/api/HuaweiApiClientImpl$f;-><init>(Lcom/huawei/hms/api/HuaweiApiClientImpl;Lcom/huawei/hms/api/HuaweiApiClientImpl$a;)V

    invoke-virtual {v0, v1}, Lcom/huawei/hms/support/api/client/PendingResult;->setResultCallback(Lcom/huawei/hms/support/api/client/ResultCallback;)V

    return-void
.end method

.method private l()V
    .locals 3

    .line 1
    invoke-direct {p0}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->d()Lcom/huawei/hms/support/api/entity/core/DisconnectInfo;

    move-result-object v0

    .line 4
    invoke-static {p0, v0}, Lcom/huawei/hms/support/api/core/ConnectService;->disconnect(Lcom/huawei/hms/support/api/client/ApiClient;Lcom/huawei/hms/support/api/entity/core/DisconnectInfo;)Lcom/huawei/hms/support/api/ResolvePendingResult;

    move-result-object v0

    new-instance v1, Lcom/huawei/hms/api/HuaweiApiClientImpl$g;

    const/4 v2, 0x0

    invoke-direct {v1, p0, v2}, Lcom/huawei/hms/api/HuaweiApiClientImpl$g;-><init>(Lcom/huawei/hms/api/HuaweiApiClientImpl;Lcom/huawei/hms/api/HuaweiApiClientImpl$a;)V

    invoke-virtual {v0, v1}, Lcom/huawei/hms/support/api/PendingResultImpl;->setResultCallback(Lcom/huawei/hms/support/api/client/ResultCallback;)V

    return-void
.end method

.method private m()V
    .locals 3

    const-string v0, "HuaweiApiClientImpl"

    const-string v1, "Enter sendForceConnectApiServceRequest."

    .line 1
    invoke-static {v0, v1}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 2
    invoke-direct {p0}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->c()Lcom/huawei/hms/support/api/entity/core/ConnectInfo;

    move-result-object v0

    .line 5
    invoke-static {p0, v0}, Lcom/huawei/hms/support/api/core/ConnectService;->forceConnect(Lcom/huawei/hms/support/api/client/ApiClient;Lcom/huawei/hms/support/api/entity/core/ConnectInfo;)Lcom/huawei/hms/support/api/client/PendingResult;

    move-result-object v0

    new-instance v1, Lcom/huawei/hms/api/HuaweiApiClientImpl$f;

    const/4 v2, 0x0

    invoke-direct {v1, p0, v2}, Lcom/huawei/hms/api/HuaweiApiClientImpl$f;-><init>(Lcom/huawei/hms/api/HuaweiApiClientImpl;Lcom/huawei/hms/api/HuaweiApiClientImpl$a;)V

    invoke-virtual {v0, v1}, Lcom/huawei/hms/support/api/client/PendingResult;->setResultCallback(Lcom/huawei/hms/support/api/client/ResultCallback;)V

    return-void
.end method

.method private n()V
    .locals 3

    .line 1
    iget-boolean v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->j:Z

    if-eqz v0, :cond_0

    const-string v0, "HuaweiApiClientImpl"

    const-string v1, "Connect notice has been shown."

    .line 2
    invoke-static {v0, v1}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 6
    :cond_0
    invoke-static {}, Lcom/huawei/hms/api/HuaweiApiAvailability;->getInstance()Lcom/huawei/hms/api/HuaweiApiAvailability;

    move-result-object v0

    iget-object v1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->b:Landroid/content/Context;

    invoke-virtual {v0, v1}, Lcom/huawei/hms/api/HuaweiApiAvailability;->isHuaweiMobileNoticeAvailable(Landroid/content/Context;)I

    move-result v0

    if-nez v0, :cond_1

    const/4 v0, 0x0

    const-string v1, "5.3.0.301"

    .line 8
    invoke-static {p0, v0, v1}, Lcom/huawei/hms/support/api/core/ConnectService;->getNotice(Lcom/huawei/hms/support/api/client/ApiClient;ILjava/lang/String;)Lcom/huawei/hms/support/api/client/PendingResult;

    move-result-object v0

    new-instance v1, Lcom/huawei/hms/api/HuaweiApiClientImpl$h;

    const/4 v2, 0x0

    invoke-direct {v1, p0, v2}, Lcom/huawei/hms/api/HuaweiApiClientImpl$h;-><init>(Lcom/huawei/hms/api/HuaweiApiClientImpl;Lcom/huawei/hms/api/HuaweiApiClientImpl$a;)V

    .line 10
    invoke-virtual {v0, v1}, Lcom/huawei/hms/support/api/client/PendingResult;->setResultCallback(Lcom/huawei/hms/support/api/client/ResultCallback;)V

    :cond_1
    return-void
.end method

.method private o()V
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->b:Landroid/content/Context;

    invoke-static {v0, p0}, Lcom/huawei/hms/utils/Util;->unBindServiceCatchException(Landroid/content/Context;Landroid/content/ServiceConnection;)V

    const/4 v0, 0x0

    .line 2
    iput-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->f:Lcom/huawei/hms/core/aidl/d;

    return-void
.end method


# virtual methods
.method public asyncRequest(Landroid/os/Bundle;Ljava/lang/String;ILcom/huawei/hms/support/api/client/ResultCallback;)I
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/os/Bundle;",
            "Ljava/lang/String;",
            "I",
            "Lcom/huawei/hms/support/api/client/ResultCallback<",
            "Lcom/huawei/hms/support/api/client/BundleResult;",
            ">;)I"
        }
    .end annotation

    const-string v0, "HuaweiApiClientImpl"

    const-string v1, "Enter asyncRequest."

    .line 1
    invoke-static {v0, v1}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    if-eqz p4, :cond_2

    if-eqz p2, :cond_2

    if-nez p1, :cond_0

    goto :goto_0

    .line 9
    :cond_0
    invoke-virtual {p0}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->innerIsConnected()Z

    move-result v1

    if-nez v1, :cond_1

    const-string p1, "client is unConnect."

    .line 10
    invoke-static {v0, p1}, Lcom/huawei/hms/support/log/HMSLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    const p1, 0x3611c81b

    return p1

    .line 15
    :cond_1
    new-instance v1, Lcom/huawei/hms/core/aidl/b;

    invoke-direct {v1, p2, p3}, Lcom/huawei/hms/core/aidl/b;-><init>(Ljava/lang/String;I)V

    .line 16
    invoke-virtual {v1}, Lcom/huawei/hms/core/aidl/b;->c()I

    move-result p2

    invoke-static {p2}, Lcom/huawei/hms/core/aidl/a;->a(I)Lcom/huawei/hms/core/aidl/e;

    move-result-object p2

    .line 19
    invoke-virtual {v1, p1}, Lcom/huawei/hms/core/aidl/b;->a(Landroid/os/Bundle;)Lcom/huawei/hms/core/aidl/b;

    .line 22
    new-instance p1, Lcom/huawei/hms/core/aidl/RequestHeader;

    .line 23
    invoke-virtual {p0}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->getAppID()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {p0}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->getPackageName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->getSessionId()Ljava/lang/String;

    move-result-object v3

    const v4, 0x2ff858d

    invoke-direct {p1, p3, v2, v4, v3}, Lcom/huawei/hms/core/aidl/RequestHeader;-><init>(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)V

    .line 24
    invoke-virtual {p0}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->getApiNameList()Ljava/util/List;

    move-result-object p3

    invoke-virtual {p1, p3}, Lcom/huawei/hms/core/aidl/RequestHeader;->setApiNameList(Ljava/util/List;)V

    .line 26
    new-instance p3, Landroid/os/Bundle;

    invoke-direct {p3}, Landroid/os/Bundle;-><init>()V

    invoke-virtual {p2, p1, p3}, Lcom/huawei/hms/core/aidl/e;->a(Lcom/huawei/hms/core/aidl/IMessageEntity;Landroid/os/Bundle;)Landroid/os/Bundle;

    move-result-object p1

    iput-object p1, v1, Lcom/huawei/hms/core/aidl/b;->b:Landroid/os/Bundle;

    .line 29
    :try_start_0
    invoke-virtual {p0}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->getService()Lcom/huawei/hms/core/aidl/d;

    move-result-object p1

    new-instance p2, Lcom/huawei/hms/api/HuaweiApiClientImpl$d;

    invoke-direct {p2, p0, p4}, Lcom/huawei/hms/api/HuaweiApiClientImpl$d;-><init>(Lcom/huawei/hms/api/HuaweiApiClientImpl;Lcom/huawei/hms/support/api/client/ResultCallback;)V

    invoke-interface {p1, v1, p2}, Lcom/huawei/hms/core/aidl/d;->a(Lcom/huawei/hms/core/aidl/b;Lcom/huawei/hms/core/aidl/c;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    const/4 p1, 0x0

    return p1

    :catch_0
    move-exception p1

    .line 47
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string p3, "remote exception:"

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Landroid/os/RemoteException;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/huawei/hms/support/log/HMSLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    const p1, 0x3611c819

    return p1

    :cond_2
    :goto_0
    const-string p1, "arguments is invalid."

    .line 48
    invoke-static {v0, p1}, Lcom/huawei/hms/support/log/HMSLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    const p1, 0x3611c818

    return p1
.end method

.method public checkUpdate(Landroid/app/Activity;Lcom/huawei/hms/api/CheckUpdatelistener;)V
    .locals 3

    .line 1
    iget-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->b:Landroid/content/Context;

    invoke-static {v0}, Lcom/huawei/hms/utils/Util;->isAvailableLibExist(Landroid/content/Context;)Z

    move-result v0

    const-string v1, "HuaweiApiClientImpl"

    if-eqz v0, :cond_4

    const-string v0, "Enter checkUpdate"

    .line 2
    invoke-static {v1, v0}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    if-nez p2, :cond_0

    const-string p1, "listener is null!"

    .line 5
    invoke-static {v1, p1}, Lcom/huawei/hms/support/log/HMSLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_0
    if-eqz p1, :cond_3

    .line 9
    invoke-virtual {p1}, Landroid/app/Activity;->isFinishing()Z

    move-result v0

    if-eqz v0, :cond_1

    goto :goto_0

    .line 15
    :cond_1
    iput-object p2, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->z:Lcom/huawei/hms/api/CheckUpdatelistener;

    .line 16
    iget-object p2, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->A:Lcom/huawei/updatesdk/service/otaupdate/CheckUpdateCallBack;

    if-nez p2, :cond_2

    .line 17
    invoke-direct {p0}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->g()V

    .line 20
    :cond_2
    iget-object p2, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->A:Lcom/huawei/updatesdk/service/otaupdate/CheckUpdateCallBack;

    const/4 v0, 0x0

    const/4 v1, 0x1

    invoke-static {p1, p2, v1, v0, v1}, Lcom/huawei/updatesdk/UpdateSdkAPI;->checkClientOTAUpdate(Landroid/content/Context;Lcom/huawei/updatesdk/service/otaupdate/CheckUpdateCallBack;ZIZ)V

    goto :goto_1

    .line 21
    :cond_3
    :goto_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "checkUpdate, activity is illegal: "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/huawei/hms/support/log/HMSLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p1, -0x1

    .line 22
    invoke-interface {p2, p1}, Lcom/huawei/hms/api/CheckUpdatelistener;->onResult(I)V

    return-void

    :cond_4
    const-string p1, "available lib does not exist."

    .line 33
    invoke-static {v1, p1}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    :goto_1
    return-void
.end method

.method public connect(I)V
    .locals 0

    const/4 p1, 0x0

    .line 49
    invoke-virtual {p0, p1}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->connect(Landroid/app/Activity;)V

    return-void
.end method

.method public connect(Landroid/app/Activity;)V
    .locals 5

    const-string v0, "HuaweiApiClientImpl"

    const-string v1, "====== HMSSDK version: 50300301 ======"

    .line 1
    invoke-static {v0, v1}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 3
    iget-object v1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->k:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v1}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v1

    .line 5
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Enter connect, Connection Status: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v2, 0x3

    if-eq v1, v2, :cond_5

    const/4 v2, 0x5

    if-eq v1, v2, :cond_5

    const/4 v3, 0x2

    if-eq v1, v3, :cond_5

    const/4 v4, 0x4

    if-ne v1, v4, :cond_0

    goto/16 :goto_1

    :cond_0
    if-eqz p1, :cond_1

    .line 13
    new-instance v1, Ljava/lang/ref/WeakReference;

    invoke-direct {v1, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object v1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->h:Ljava/lang/ref/WeakReference;

    .line 14
    new-instance v1, Ljava/lang/ref/WeakReference;

    invoke-direct {v1, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object v1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->i:Ljava/lang/ref/WeakReference;

    .line 21
    :cond_1
    iget-object p1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->c:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->b:Landroid/content/Context;

    invoke-static {p1}, Lcom/huawei/hms/utils/Util;->getAppId(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    :cond_2
    iget-object p1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->c:Ljava/lang/String;

    :goto_0
    iput-object p1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->d:Ljava/lang/String;

    .line 23
    invoke-direct {p0}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->e()I

    move-result p1

    .line 24
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "connect minVersion:"

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 26
    invoke-static {p1}, Lcom/huawei/hms/api/HuaweiApiAvailability;->setServicesVersionCode(I)V

    .line 27
    iget-object v1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->b:Landroid/content/Context;

    invoke-static {v1, p1}, Lcom/huawei/hms/api/HuaweiMobileServicesUtil;->isHuaweiMobileServicesAvailable(Landroid/content/Context;I)I

    move-result p1

    .line 28
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "In connect, isHuaweiMobileServicesAvailable result: "

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 30
    iget-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->b:Landroid/content/Context;

    invoke-static {v0}, Lcom/huawei/hms/utils/HMSPackageManager;->getInstance(Landroid/content/Context;)Lcom/huawei/hms/utils/HMSPackageManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/huawei/hms/utils/HMSPackageManager;->getHmsVersionCode()I

    move-result v0

    iput v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->q:I

    if-nez p1, :cond_4

    .line 33
    invoke-direct {p0, v2}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->c(I)V

    .line 35
    iget-object p1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->f:Lcom/huawei/hms/core/aidl/d;

    if-nez p1, :cond_3

    .line 37
    invoke-direct {p0}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->a()V

    goto :goto_1

    .line 40
    :cond_3
    invoke-direct {p0, v3}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->c(I)V

    .line 42
    invoke-direct {p0}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->k()V

    .line 44
    invoke-direct {p0}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->j()V

    goto :goto_1

    .line 47
    :cond_4
    iget-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->w:Lcom/huawei/hms/api/HuaweiApiClient$OnConnectionFailedListener;

    if-eqz v0, :cond_5

    .line 48
    invoke-direct {p0, p1}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->b(I)V

    :cond_5
    :goto_1
    return-void
.end method

.method public connectForeground()V
    .locals 4

    const-string v0, "HuaweiApiClientImpl"

    const-string v1, "====== HMSSDK version: 50300301 ======"

    .line 1
    invoke-static {v0, v1}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 3
    iget-object v1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->k:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v1}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v1

    .line 5
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Enter forceConnect, Connection Status: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v0, 0x3

    if-eq v1, v0, :cond_2

    const/4 v0, 0x5

    if-eq v1, v0, :cond_2

    const/4 v0, 0x2

    if-eq v1, v0, :cond_2

    const/4 v0, 0x4

    if-ne v1, v0, :cond_0

    goto :goto_1

    .line 14
    :cond_0
    iget-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->c:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->b:Landroid/content/Context;

    invoke-static {v0}, Lcom/huawei/hms/utils/Util;->getAppId(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_1
    iget-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->c:Ljava/lang/String;

    :goto_0
    iput-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->d:Ljava/lang/String;

    .line 16
    invoke-direct {p0}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->m()V

    :cond_2
    :goto_1
    return-void
.end method

.method public disableLifeCycleManagement(Landroid/app/Activity;)V
    .locals 1

    .line 1
    iget v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->a:I

    if-ltz v0, :cond_1

    .line 2
    invoke-static {p1}, Lcom/huawei/hms/common/internal/AutoLifecycleFragment;->getInstance(Landroid/app/Activity;)Lcom/huawei/hms/common/internal/AutoLifecycleFragment;

    move-result-object p1

    if-nez p1, :cond_0

    return-void

    .line 6
    :cond_0
    iget v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->a:I

    invoke-virtual {p1, v0}, Lcom/huawei/hms/common/internal/AutoLifecycleFragment;->stopAutoManage(I)V

    return-void

    .line 9
    :cond_1
    new-instance p1, Ljava/lang/IllegalStateException;

    const-string v0, "disableLifeCycleManagement failed"

    invoke-direct {p1, v0}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public discardAndReconnect()Lcom/huawei/hms/support/api/client/PendingResult;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Lcom/huawei/hms/support/api/client/PendingResult<",
            "Lcom/huawei/hms/support/api/client/Status;",
            ">;"
        }
    .end annotation

    .line 1
    new-instance v0, Lcom/huawei/hms/api/HuaweiApiClientImpl$e;

    const/4 v1, 0x0

    invoke-direct {v0, p0, v1, v1}, Lcom/huawei/hms/api/HuaweiApiClientImpl$e;-><init>(Lcom/huawei/hms/support/api/client/ApiClient;Ljava/lang/String;Lcom/huawei/hms/core/aidl/IMessageEntity;)V

    return-object v0
.end method

.method public disconnect()V
    .locals 4

    .line 1
    iget-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->k:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    .line 3
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Enter disconnect, Connection Status: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "HuaweiApiClientImpl"

    invoke-static {v2, v1}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v1, 0x2

    const/4 v2, 0x4

    if-eq v0, v1, :cond_2

    const/4 v3, 0x3

    if-eq v0, v3, :cond_1

    const/4 v3, 0x5

    if-eq v0, v3, :cond_0

    goto :goto_0

    .line 12
    :cond_0
    invoke-direct {p0, v1}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->a(I)V

    .line 13
    invoke-direct {p0, v2}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->c(I)V

    goto :goto_0

    .line 21
    :cond_1
    invoke-direct {p0, v2}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->c(I)V

    .line 23
    invoke-direct {p0}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->l()V

    goto :goto_0

    .line 24
    :cond_2
    invoke-direct {p0, v2}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->c(I)V

    :goto_0
    return-void
.end method

.method public getApiMap()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Lcom/huawei/hms/api/Api<",
            "*>;",
            "Lcom/huawei/hms/api/Api$ApiOptions;",
            ">;"
        }
    .end annotation

    .line 1
    iget-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->n:Ljava/util/Map;

    return-object v0
.end method

.method public getApiNameList()Ljava/util/List;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 1
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 2
    iget-object v1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->n:Ljava/util/Map;

    if-eqz v1, :cond_0

    .line 3
    invoke-interface {v1}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    .line 4
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 5
    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/huawei/hms/api/Api;

    .line 6
    invoke-virtual {v2}, Lcom/huawei/hms/api/Api;->getApiName()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_0
    return-object v0
.end method

.method public getAppID()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->d:Ljava/lang/String;

    return-object v0
.end method

.method public getConnectionResult(Lcom/huawei/hms/api/Api;)Lcom/huawei/hms/api/ConnectionResult;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/huawei/hms/api/Api<",
            "*>;)",
            "Lcom/huawei/hms/api/ConnectionResult;"
        }
    .end annotation

    .line 1
    invoke-virtual {p0}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->isConnected()Z

    move-result p1

    const/4 v0, 0x0

    if-eqz p1, :cond_0

    .line 2
    iput-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->u:Lcom/huawei/hms/api/ConnectionResult;

    .line 3
    new-instance p1, Lcom/huawei/hms/api/ConnectionResult;

    const/4 v1, 0x0

    invoke-direct {p1, v1, v0}, Lcom/huawei/hms/api/ConnectionResult;-><init>(ILandroid/app/PendingIntent;)V

    return-object p1

    .line 5
    :cond_0
    iget-object p1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->u:Lcom/huawei/hms/api/ConnectionResult;

    if-eqz p1, :cond_1

    return-object p1

    .line 8
    :cond_1
    new-instance p1, Lcom/huawei/hms/api/ConnectionResult;

    const/16 v1, 0xd

    invoke-direct {p1, v1, v0}, Lcom/huawei/hms/api/ConnectionResult;-><init>(ILandroid/app/PendingIntent;)V

    return-object p1
.end method

.method public getContext()Landroid/content/Context;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->b:Landroid/content/Context;

    return-object v0
.end method

.method public getCpID()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->e:Ljava/lang/String;

    return-object v0
.end method

.method public getPackageName()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->b:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getPermissionInfos()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/huawei/hms/support/api/entity/auth/PermissionInfo;",
            ">;"
        }
    .end annotation

    .line 1
    iget-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->m:Ljava/util/List;

    return-object v0
.end method

.method public getScopes()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/huawei/hms/support/api/entity/auth/Scope;",
            ">;"
        }
    .end annotation

    .line 1
    iget-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->l:Ljava/util/List;

    return-object v0
.end method

.method public getService()Lcom/huawei/hms/core/aidl/d;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->f:Lcom/huawei/hms/core/aidl/d;

    return-object v0
.end method

.method public getSessionId()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->g:Ljava/lang/String;

    return-object v0
.end method

.method public final getSubAppInfo()Lcom/huawei/hms/support/api/client/SubAppInfo;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->o:Lcom/huawei/hms/support/api/client/SubAppInfo;

    return-object v0
.end method

.method public getTopActivity()Landroid/app/Activity;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->i:Ljava/lang/ref/WeakReference;

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return-object v0

    .line 4
    :cond_0
    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/Activity;

    return-object v0
.end method

.method public getTransportName()Ljava/lang/String;
    .locals 1

    .line 1
    const-class v0, Lcom/huawei/hms/api/IPCTransport;

    invoke-virtual {v0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public hasConnectedApi(Lcom/huawei/hms/api/Api;)Z
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/huawei/hms/api/Api<",
            "*>;)Z"
        }
    .end annotation

    .line 1
    invoke-virtual {p0}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->isConnected()Z

    move-result p1

    return p1
.end method

.method public hasConnectionFailureListener(Lcom/huawei/hms/api/HuaweiApiClient$OnConnectionFailedListener;)Z
    .locals 2

    const-string v0, "onConnectionFailedListener should not be null"

    .line 1
    invoke-static {p1, v0}, Lcom/huawei/hms/utils/Checker;->checkNonNull(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;

    .line 2
    iget-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->r:Ljava/lang/Object;

    monitor-enter v0

    .line 3
    :try_start_0
    iget-object v1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->w:Lcom/huawei/hms/api/HuaweiApiClient$OnConnectionFailedListener;

    if-ne v1, p1, :cond_0

    const/4 p1, 0x1

    .line 4
    monitor-exit v0

    return p1

    .line 6
    :cond_0
    monitor-exit v0

    const/4 p1, 0x0

    return p1

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method public hasConnectionSuccessListener(Lcom/huawei/hms/api/HuaweiApiClient$ConnectionCallbacks;)Z
    .locals 2

    const-string v0, "connectionCallbacksListener should not be null"

    .line 1
    invoke-static {p1, v0}, Lcom/huawei/hms/utils/Checker;->checkNonNull(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;

    .line 2
    iget-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->r:Ljava/lang/Object;

    monitor-enter v0

    .line 3
    :try_start_0
    iget-object v1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->v:Lcom/huawei/hms/api/HuaweiApiClient$ConnectionCallbacks;

    if-ne v1, p1, :cond_0

    const/4 p1, 0x1

    .line 4
    monitor-exit v0

    return p1

    .line 6
    :cond_0
    monitor-exit v0

    const/4 p1, 0x0

    return p1

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method public holdUpConnect()Lcom/huawei/hms/api/ConnectionResult;
    .locals 3

    .line 1
    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    if-eq v0, v1, :cond_3

    .line 4
    iget-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->s:Ljava/util/concurrent/locks/ReentrantLock;

    invoke-virtual {v0}, Ljava/util/concurrent/locks/ReentrantLock;->lock()V

    const/4 v0, 0x0

    .line 6
    :try_start_0
    invoke-virtual {p0, v0}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->connect(Landroid/app/Activity;)V

    .line 7
    :goto_0
    invoke-virtual {p0}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->isConnecting()Z

    move-result v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v1, :cond_0

    .line 9
    :try_start_1
    iget-object v1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->t:Ljava/util/concurrent/locks/Condition;

    invoke-interface {v1}, Ljava/util/concurrent/locks/Condition;->await()V
    :try_end_1
    .catch Ljava/lang/InterruptedException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    .line 11
    :catch_0
    :try_start_2
    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Thread;->interrupt()V

    .line 12
    new-instance v1, Lcom/huawei/hms/api/ConnectionResult;

    const/16 v2, 0xf

    invoke-direct {v1, v2, v0}, Lcom/huawei/hms/api/ConnectionResult;-><init>(ILandroid/app/PendingIntent;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 27
    iget-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->s:Ljava/util/concurrent/locks/ReentrantLock;

    invoke-virtual {v0}, Ljava/util/concurrent/locks/ReentrantLock;->unlock()V

    return-object v1

    .line 28
    :cond_0
    :try_start_3
    invoke-virtual {p0}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->isConnected()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 29
    iput-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->u:Lcom/huawei/hms/api/ConnectionResult;

    .line 30
    new-instance v1, Lcom/huawei/hms/api/ConnectionResult;

    const/4 v2, 0x0

    invoke-direct {v1, v2, v0}, Lcom/huawei/hms/api/ConnectionResult;-><init>(ILandroid/app/PendingIntent;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 39
    iget-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->s:Ljava/util/concurrent/locks/ReentrantLock;

    invoke-virtual {v0}, Ljava/util/concurrent/locks/ReentrantLock;->unlock()V

    return-object v1

    .line 40
    :cond_1
    :try_start_4
    iget-object v1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->u:Lcom/huawei/hms/api/ConnectionResult;

    if-eqz v1, :cond_2

    .line 41
    iget-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->u:Lcom/huawei/hms/api/ConnectionResult;
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    .line 45
    iget-object v1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->s:Ljava/util/concurrent/locks/ReentrantLock;

    invoke-virtual {v1}, Ljava/util/concurrent/locks/ReentrantLock;->unlock()V

    return-object v0

    .line 46
    :cond_2
    :try_start_5
    new-instance v1, Lcom/huawei/hms/api/ConnectionResult;

    const/16 v2, 0xd

    invoke-direct {v1, v2, v0}, Lcom/huawei/hms/api/ConnectionResult;-><init>(ILandroid/app/PendingIntent;)V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    .line 48
    iget-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->s:Ljava/util/concurrent/locks/ReentrantLock;

    invoke-virtual {v0}, Ljava/util/concurrent/locks/ReentrantLock;->unlock()V

    return-object v1

    :catchall_0
    move-exception v0

    iget-object v1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->s:Ljava/util/concurrent/locks/ReentrantLock;

    invoke-virtual {v1}, Ljava/util/concurrent/locks/ReentrantLock;->unlock()V

    .line 49
    throw v0

    .line 50
    :cond_3
    new-instance v0, Ljava/lang/IllegalStateException;

    const-string v1, "blockingConnect must not be called on the UI thread"

    invoke-direct {v0, v1}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public holdUpConnect(JLjava/util/concurrent/TimeUnit;)Lcom/huawei/hms/api/ConnectionResult;
    .locals 3

    .line 51
    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    if-eq v0, v1, :cond_4

    .line 54
    iget-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->s:Ljava/util/concurrent/locks/ReentrantLock;

    invoke-virtual {v0}, Ljava/util/concurrent/locks/ReentrantLock;->lock()V

    const/4 v0, 0x0

    .line 56
    :try_start_0
    invoke-virtual {p0, v0}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->connect(Landroid/app/Activity;)V

    .line 57
    invoke-virtual {p3, p1, p2}, Ljava/util/concurrent/TimeUnit;->toNanos(J)J

    move-result-wide p1

    .line 58
    :goto_0
    invoke-virtual {p0}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->isConnecting()Z

    move-result p3

    if-eqz p3, :cond_1

    const-wide/16 v1, 0x0

    cmp-long p3, p1, v1

    if-gtz p3, :cond_0

    .line 60
    invoke-virtual {p0}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->disconnect()V

    .line 61
    new-instance p1, Lcom/huawei/hms/api/ConnectionResult;

    const/16 p2, 0xe

    invoke-direct {p1, p2, v0}, Lcom/huawei/hms/api/ConnectionResult;-><init>(ILandroid/app/PendingIntent;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 82
    iget-object p2, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->s:Ljava/util/concurrent/locks/ReentrantLock;

    invoke-virtual {p2}, Ljava/util/concurrent/locks/ReentrantLock;->unlock()V

    return-object p1

    .line 83
    :cond_0
    :try_start_1
    iget-object p3, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->t:Ljava/util/concurrent/locks/Condition;

    invoke-interface {p3, p1, p2}, Ljava/util/concurrent/locks/Condition;->awaitNanos(J)J

    move-result-wide p1
    :try_end_1
    .catch Ljava/lang/InterruptedException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    .line 85
    :catch_0
    :try_start_2
    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Thread;->interrupt()V

    .line 86
    new-instance p1, Lcom/huawei/hms/api/ConnectionResult;

    const/16 p2, 0xf

    invoke-direct {p1, p2, v0}, Lcom/huawei/hms/api/ConnectionResult;-><init>(ILandroid/app/PendingIntent;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 101
    iget-object p2, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->s:Ljava/util/concurrent/locks/ReentrantLock;

    invoke-virtual {p2}, Ljava/util/concurrent/locks/ReentrantLock;->unlock()V

    return-object p1

    .line 102
    :cond_1
    :try_start_3
    invoke-virtual {p0}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->isConnected()Z

    move-result p1

    if-eqz p1, :cond_2

    .line 103
    iput-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->u:Lcom/huawei/hms/api/ConnectionResult;

    .line 104
    new-instance p1, Lcom/huawei/hms/api/ConnectionResult;

    const/4 p2, 0x0

    invoke-direct {p1, p2, v0}, Lcom/huawei/hms/api/ConnectionResult;-><init>(ILandroid/app/PendingIntent;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 113
    iget-object p2, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->s:Ljava/util/concurrent/locks/ReentrantLock;

    invoke-virtual {p2}, Ljava/util/concurrent/locks/ReentrantLock;->unlock()V

    return-object p1

    .line 114
    :cond_2
    :try_start_4
    iget-object p1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->u:Lcom/huawei/hms/api/ConnectionResult;

    if-eqz p1, :cond_3

    .line 115
    iget-object p1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->u:Lcom/huawei/hms/api/ConnectionResult;
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    .line 119
    iget-object p2, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->s:Ljava/util/concurrent/locks/ReentrantLock;

    invoke-virtual {p2}, Ljava/util/concurrent/locks/ReentrantLock;->unlock()V

    return-object p1

    .line 120
    :cond_3
    :try_start_5
    new-instance p1, Lcom/huawei/hms/api/ConnectionResult;

    const/16 p2, 0xd

    invoke-direct {p1, p2, v0}, Lcom/huawei/hms/api/ConnectionResult;-><init>(ILandroid/app/PendingIntent;)V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    .line 122
    iget-object p2, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->s:Ljava/util/concurrent/locks/ReentrantLock;

    invoke-virtual {p2}, Ljava/util/concurrent/locks/ReentrantLock;->unlock()V

    return-object p1

    :catchall_0
    move-exception p1

    iget-object p2, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->s:Ljava/util/concurrent/locks/ReentrantLock;

    invoke-virtual {p2}, Ljava/util/concurrent/locks/ReentrantLock;->unlock()V

    .line 123
    throw p1

    .line 124
    :cond_4
    new-instance p1, Ljava/lang/IllegalStateException;

    const-string p2, "blockingConnect must not be called on the UI thread"

    invoke-direct {p1, p2}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public innerIsConnected()Z
    .locals 2

    .line 1
    iget-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->k:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    const/4 v1, 0x3

    if-eq v0, v1, :cond_1

    iget-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->k:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    const/4 v1, 0x4

    if-ne v0, v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 v0, 0x1

    :goto_1
    return v0
.end method

.method public isConnected()Z
    .locals 4

    .line 1
    iget v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->q:I

    if-nez v0, :cond_0

    .line 2
    iget-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->b:Landroid/content/Context;

    invoke-static {v0}, Lcom/huawei/hms/utils/HMSPackageManager;->getInstance(Landroid/content/Context;)Lcom/huawei/hms/utils/HMSPackageManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/huawei/hms/utils/HMSPackageManager;->getHmsVersionCode()I

    move-result v0

    iput v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->q:I

    .line 5
    :cond_0
    iget v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->q:I

    const v1, 0x138ddc0

    if-ge v0, v1, :cond_4

    .line 7
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iget-wide v2, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->p:J

    sub-long/2addr v0, v2

    const-wide/16 v2, 0x0

    cmp-long v2, v0, v2

    if-lez v2, :cond_1

    const-wide/32 v2, 0x493e0

    cmp-long v0, v0, v2

    if-gez v0, :cond_1

    .line 10
    invoke-virtual {p0}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->innerIsConnected()Z

    move-result v0

    return v0

    .line 13
    :cond_1
    invoke-virtual {p0}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->innerIsConnected()Z

    move-result v0

    if-eqz v0, :cond_3

    .line 14
    new-instance v0, Lcom/huawei/hms/support/api/entity/core/CheckConnectInfo;

    invoke-direct {v0}, Lcom/huawei/hms/support/api/entity/core/CheckConnectInfo;-><init>()V

    .line 15
    invoke-static {p0, v0}, Lcom/huawei/hms/support/api/core/ConnectService;->checkconnect(Lcom/huawei/hms/support/api/client/ApiClient;Lcom/huawei/hms/support/api/entity/core/CheckConnectInfo;)Lcom/huawei/hms/support/api/client/InnerPendingResult;

    move-result-object v0

    .line 16
    sget-object v1, Ljava/util/concurrent/TimeUnit;->MILLISECONDS:Ljava/util/concurrent/TimeUnit;

    const-wide/16 v2, 0x7d0

    .line 17
    invoke-virtual {v0, v2, v3, v1}, Lcom/huawei/hms/support/api/client/InnerPendingResult;->awaitOnAnyThread(JLjava/util/concurrent/TimeUnit;)Lcom/huawei/hms/support/api/client/Result;

    move-result-object v0

    check-cast v0, Lcom/huawei/hms/support/api/ResolveResult;

    .line 19
    invoke-virtual {v0}, Lcom/huawei/hms/support/api/client/Result;->getStatus()Lcom/huawei/hms/support/api/client/Status;

    move-result-object v0

    .line 20
    invoke-virtual {v0}, Lcom/huawei/hms/support/api/client/Status;->isSuccess()Z

    move-result v1

    const/4 v2, 0x1

    if-eqz v1, :cond_2

    .line 21
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->p:J

    return v2

    .line 25
    :cond_2
    invoke-virtual {v0}, Lcom/huawei/hms/support/api/client/Status;->getStatusCode()I

    move-result v0

    .line 26
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "isConnected is false, statuscode:"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v3, "HuaweiApiClientImpl"

    invoke-static {v3, v1}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    const v1, 0x3611c81c

    if-eq v0, v1, :cond_3

    .line 28
    invoke-direct {p0}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->o()V

    .line 29
    invoke-direct {p0, v2}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->c(I)V

    .line 30
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->p:J

    :cond_3
    const/4 v0, 0x0

    return v0

    .line 37
    :cond_4
    invoke-virtual {p0}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->innerIsConnected()Z

    move-result v0

    return v0
.end method

.method public isConnecting()Z
    .locals 2

    .line 1
    iget-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->k:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    const/4 v1, 0x2

    if-eq v0, v1, :cond_1

    const/4 v1, 0x5

    if-ne v0, v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 v0, 0x1

    :goto_1
    return v0
.end method

.method public onPause(Landroid/app/Activity;)V
    .locals 1

    const-string p1, "HuaweiApiClientImpl"

    const-string v0, "onPause"

    .line 1
    invoke-static {p1, v0}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public onResume(Landroid/app/Activity;)V
    .locals 2

    if-eqz p1, :cond_0

    const-string v0, "HuaweiApiClientImpl"

    const-string v1, "onResume"

    .line 1
    invoke-static {v0, v1}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 2
    new-instance v0, Ljava/lang/ref/WeakReference;

    invoke-direct {v0, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->i:Ljava/lang/ref/WeakReference;

    :cond_0
    return-void
.end method

.method public onServiceConnected(Landroid/content/ComponentName;Landroid/os/IBinder;)V
    .locals 1

    const-string p1, "HuaweiApiClientImpl"

    const-string v0, "Enter onServiceConnected."

    .line 1
    invoke-static {p1, v0}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v0, 0x2

    .line 4
    invoke-direct {p0, v0}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->a(I)V

    .line 6
    invoke-static {p2}, Lcom/huawei/hms/core/aidl/d$a;->a(Landroid/os/IBinder;)Lcom/huawei/hms/core/aidl/d;

    move-result-object p2

    iput-object p2, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->f:Lcom/huawei/hms/core/aidl/d;

    .line 8
    iget-object p2, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->f:Lcom/huawei/hms/core/aidl/d;

    if-nez p2, :cond_2

    const-string p2, "In onServiceConnected, mCoreService must not be null."

    .line 9
    invoke-static {p1, p2}, Lcom/huawei/hms/support/log/HMSLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 11
    invoke-direct {p0}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->o()V

    const/4 p1, 0x1

    .line 12
    invoke-direct {p0, p1}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->c(I)V

    .line 14
    iget-object p1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->w:Lcom/huawei/hms/api/HuaweiApiClient$OnConnectionFailedListener;

    if-eqz p1, :cond_1

    const/4 p1, 0x0

    .line 16
    iget-object p2, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->h:Ljava/lang/ref/WeakReference;

    const/16 v0, 0xa

    if-eqz p2, :cond_0

    invoke-virtual {p2}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object p2

    if-eqz p2, :cond_0

    .line 17
    invoke-static {}, Lcom/huawei/hms/api/HuaweiApiAvailability;->getInstance()Lcom/huawei/hms/api/HuaweiApiAvailability;

    move-result-object p1

    iget-object p2, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->h:Ljava/lang/ref/WeakReference;

    .line 18
    invoke-virtual {p2}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Landroid/app/Activity;

    invoke-virtual {p1, p2, v0}, Lcom/huawei/hms/api/HuaweiApiAvailability;->getResolveErrorPendingIntent(Landroid/app/Activity;I)Landroid/app/PendingIntent;

    move-result-object p1

    .line 20
    :cond_0
    new-instance p2, Lcom/huawei/hms/api/ConnectionResult;

    invoke-direct {p2, v0, p1}, Lcom/huawei/hms/api/ConnectionResult;-><init>(ILandroid/app/PendingIntent;)V

    .line 22
    iget-object p1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->w:Lcom/huawei/hms/api/HuaweiApiClient$OnConnectionFailedListener;

    invoke-interface {p1, p2}, Lcom/huawei/hms/api/HuaweiApiClient$OnConnectionFailedListener;->onConnectionFailed(Lcom/huawei/hms/api/ConnectionResult;)V

    .line 23
    iput-object p2, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->u:Lcom/huawei/hms/api/ConnectionResult;

    :cond_1
    return-void

    .line 29
    :cond_2
    iget-object p1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->k:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {p1}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result p1

    const/4 p2, 0x5

    if-ne p1, p2, :cond_3

    .line 30
    invoke-direct {p0, v0}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->c(I)V

    .line 32
    invoke-direct {p0}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->k()V

    .line 34
    invoke-direct {p0}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->j()V

    goto :goto_0

    .line 35
    :cond_3
    iget-object p1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->k:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {p1}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result p1

    const/4 p2, 0x3

    if-eq p1, p2, :cond_4

    .line 36
    invoke-direct {p0}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->o()V

    :cond_4
    :goto_0
    return-void
.end method

.method public onServiceDisconnected(Landroid/content/ComponentName;)V
    .locals 1

    const-string p1, "HuaweiApiClientImpl"

    const-string v0, "Enter onServiceDisconnected."

    .line 1
    invoke-static {p1, v0}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p1, 0x0

    .line 3
    iput-object p1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->f:Lcom/huawei/hms/core/aidl/d;

    const/4 p1, 0x1

    .line 5
    invoke-direct {p0, p1}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->c(I)V

    .line 7
    iget-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->v:Lcom/huawei/hms/api/HuaweiApiClient$ConnectionCallbacks;

    if-eqz v0, :cond_0

    .line 8
    invoke-interface {v0, p1}, Lcom/huawei/hms/api/HuaweiApiClient$ConnectionCallbacks;->onConnectionSuspended(I)V

    :cond_0
    return-void
.end method

.method public print(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public reconnect()V
    .locals 1

    .line 1
    invoke-virtual {p0}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->disconnect()V

    const/4 v0, 0x0

    .line 2
    invoke-virtual {p0, v0}, Lcom/huawei/hms/api/HuaweiApiClientImpl;->connect(Landroid/app/Activity;)V

    return-void
.end method

.method public removeConnectionFailureListener(Lcom/huawei/hms/api/HuaweiApiClient$OnConnectionFailedListener;)V
    .locals 2

    const-string v0, "onConnectionFailedListener should not be null"

    .line 1
    invoke-static {p1, v0}, Lcom/huawei/hms/utils/Checker;->checkNonNull(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;

    .line 2
    iget-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->r:Ljava/lang/Object;

    monitor-enter v0

    .line 3
    :try_start_0
    iget-object v1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->w:Lcom/huawei/hms/api/HuaweiApiClient$OnConnectionFailedListener;

    if-eq v1, p1, :cond_0

    const-string p1, "HuaweiApiClientImpl"

    const-string v1, "unregisterConnectionFailedListener: this onConnectionFailedListener has not been registered"

    .line 4
    invoke-static {p1, v1}, Lcom/huawei/hms/support/log/HMSLog;->w(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    .line 7
    iput-object p1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->w:Lcom/huawei/hms/api/HuaweiApiClient$OnConnectionFailedListener;

    .line 9
    :goto_0
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method public removeConnectionSuccessListener(Lcom/huawei/hms/api/HuaweiApiClient$ConnectionCallbacks;)V
    .locals 2

    const-string v0, "connectionCallbacksListener should not be null"

    .line 1
    invoke-static {p1, v0}, Lcom/huawei/hms/utils/Checker;->checkNonNull(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;

    .line 2
    iget-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->r:Ljava/lang/Object;

    monitor-enter v0

    .line 3
    :try_start_0
    iget-object v1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->v:Lcom/huawei/hms/api/HuaweiApiClient$ConnectionCallbacks;

    if-eq v1, p1, :cond_0

    const-string p1, "HuaweiApiClientImpl"

    const-string v1, "unregisterConnectionCallback: this connectionCallbacksListener has not been registered"

    .line 4
    invoke-static {p1, v1}, Lcom/huawei/hms/support/log/HMSLog;->w(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    .line 6
    iput-object p1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->v:Lcom/huawei/hms/api/HuaweiApiClient$ConnectionCallbacks;

    .line 8
    :goto_0
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method public setApiMap(Ljava/util/Map;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Lcom/huawei/hms/api/Api<",
            "*>;",
            "Lcom/huawei/hms/api/Api$ApiOptions;",
            ">;)V"
        }
    .end annotation

    .line 1
    iput-object p1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->n:Ljava/util/Map;

    return-void
.end method

.method protected setAutoLifecycleClientId(I)V
    .locals 0

    .line 1
    iput p1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->a:I

    return-void
.end method

.method public setConnectionCallbacks(Lcom/huawei/hms/api/HuaweiApiClient$ConnectionCallbacks;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->v:Lcom/huawei/hms/api/HuaweiApiClient$ConnectionCallbacks;

    return-void
.end method

.method public setConnectionFailedListener(Lcom/huawei/hms/api/HuaweiApiClient$OnConnectionFailedListener;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->w:Lcom/huawei/hms/api/HuaweiApiClient$OnConnectionFailedListener;

    return-void
.end method

.method public setHasShowNotice(Z)V
    .locals 0

    .line 1
    iput-boolean p1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->j:Z

    return-void
.end method

.method public setPermissionInfos(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/huawei/hms/support/api/entity/auth/PermissionInfo;",
            ">;)V"
        }
    .end annotation

    .line 1
    iput-object p1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->m:Ljava/util/List;

    return-void
.end method

.method public setScopes(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/huawei/hms/support/api/entity/auth/Scope;",
            ">;)V"
        }
    .end annotation

    .line 1
    iput-object p1, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->l:Ljava/util/List;

    return-void
.end method

.method public setSubAppInfo(Lcom/huawei/hms/support/api/client/SubAppInfo;)Z
    .locals 4

    const-string v0, "HuaweiApiClientImpl"

    const-string v1, "Enter setSubAppInfo"

    .line 1
    invoke-static {v0, v1}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v1, 0x0

    if-nez p1, :cond_0

    const-string p1, "subAppInfo is null"

    .line 3
    invoke-static {v0, p1}, Lcom/huawei/hms/support/log/HMSLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    return v1

    .line 7
    :cond_0
    invoke-virtual {p1}, Lcom/huawei/hms/support/api/client/SubAppInfo;->getSubAppID()Ljava/lang/String;

    move-result-object v2

    .line 8
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_1

    const-string p1, "subAppId is empty"

    .line 9
    invoke-static {v0, p1}, Lcom/huawei/hms/support/log/HMSLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    return v1

    .line 13
    :cond_1
    iget-object v3, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->c:Ljava/lang/String;

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_2

    iget-object v3, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->b:Landroid/content/Context;

    invoke-static {v3}, Lcom/huawei/hms/utils/Util;->getAppId(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v3

    goto :goto_0

    :cond_2
    iget-object v3, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->c:Ljava/lang/String;

    .line 14
    :goto_0
    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_3

    const-string p1, "subAppId is host appid"

    .line 15
    invoke-static {v0, p1}, Lcom/huawei/hms/support/log/HMSLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    return v1

    .line 20
    :cond_3
    new-instance v0, Lcom/huawei/hms/support/api/client/SubAppInfo;

    invoke-direct {v0, p1}, Lcom/huawei/hms/support/api/client/SubAppInfo;-><init>(Lcom/huawei/hms/support/api/client/SubAppInfo;)V

    iput-object v0, p0, Lcom/huawei/hms/api/HuaweiApiClientImpl;->o:Lcom/huawei/hms/support/api/client/SubAppInfo;

    const/4 p1, 0x1

    return p1
.end method
