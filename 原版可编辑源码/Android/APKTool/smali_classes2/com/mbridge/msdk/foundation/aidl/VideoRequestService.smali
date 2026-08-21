.class public Lcom/mbridge/msdk/foundation/aidl/VideoRequestService;
.super Landroid/app/Service;
.source "VideoRequestService.java"


# instance fields
.field private volatile a:Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener;

.field private volatile b:Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 26
    invoke-direct {p0}, Landroid/app/Service;-><init>()V

    const/4 v0, 0x0

    .line 28
    iput-object v0, p0, Lcom/mbridge/msdk/foundation/aidl/VideoRequestService;->a:Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener;

    .line 29
    iput-object v0, p0, Lcom/mbridge/msdk/foundation/aidl/VideoRequestService;->b:Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface;

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/foundation/aidl/VideoRequestService;)Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener;
    .locals 0

    .line 26
    iget-object p0, p0, Lcom/mbridge/msdk/foundation/aidl/VideoRequestService;->a:Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener;

    return-object p0
.end method

.method static synthetic a(Lcom/mbridge/msdk/foundation/aidl/VideoRequestService;Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener;)Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener;
    .locals 0

    .line 26
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/aidl/VideoRequestService;->a:Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener;

    return-object p1
.end method


# virtual methods
.method public onBind(Landroid/content/Intent;)Landroid/os/IBinder;
    .locals 1

    .line 102
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/aidl/VideoRequestService;->b:Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface;

    const/4 v0, 0x0

    if-eqz p1, :cond_0

    .line 104
    :try_start_0
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/aidl/VideoRequestService;->b:Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface;

    check-cast p1, Landroid/os/IBinder;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p1

    :catchall_0
    :cond_0
    return-object v0
.end method

.method public onCreate()V
    .locals 1

    .line 33
    invoke-super {p0}, Landroid/app/Service;->onCreate()V

    .line 34
    new-instance v0, Lcom/mbridge/msdk/foundation/aidl/VideoRequestService$1;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/foundation/aidl/VideoRequestService$1;-><init>(Lcom/mbridge/msdk/foundation/aidl/VideoRequestService;)V

    iput-object v0, p0, Lcom/mbridge/msdk/foundation/aidl/VideoRequestService;->b:Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface;

    return-void
.end method

.method public unbindService(Landroid/content/ServiceConnection;)V
    .locals 0

    .line 115
    invoke-super {p0, p1}, Landroid/app/Service;->unbindService(Landroid/content/ServiceConnection;)V

    const/4 p1, 0x0

    .line 116
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/aidl/VideoRequestService;->b:Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface;

    .line 117
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/aidl/VideoRequestService;->a:Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener;

    return-void
.end method
