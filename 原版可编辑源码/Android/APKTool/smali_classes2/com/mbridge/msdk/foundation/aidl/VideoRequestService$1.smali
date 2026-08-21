.class final Lcom/mbridge/msdk/foundation/aidl/VideoRequestService$1;
.super Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface$Stub;
.source "VideoRequestService.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/foundation/aidl/VideoRequestService;->onCreate()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/foundation/aidl/VideoRequestService;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/foundation/aidl/VideoRequestService;)V
    .locals 0

    .line 34
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/aidl/VideoRequestService$1;->a:Lcom/mbridge/msdk/foundation/aidl/VideoRequestService;

    invoke-direct {p0}, Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface$Stub;-><init>()V

    return-void
.end method


# virtual methods
.method public final registerListener(Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener;)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 93
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/aidl/VideoRequestService$1;->a:Lcom/mbridge/msdk/foundation/aidl/VideoRequestService;

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/aidl/VideoRequestService;->a(Lcom/mbridge/msdk/foundation/aidl/VideoRequestService;Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener;)Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener;

    return-void
.end method

.method public final requestVideo([Ljava/lang/String;)V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 37
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/aidl/VideoRequestService$1;->a:Lcom/mbridge/msdk/foundation/aidl/VideoRequestService;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/aidl/VideoRequestService;->a(Lcom/mbridge/msdk/foundation/aidl/VideoRequestService;)Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 40
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/f/b;->a()Ljava/util/concurrent/ThreadPoolExecutor;

    move-result-object v0

    new-instance v1, Lcom/mbridge/msdk/foundation/aidl/VideoRequestService$1$1;

    invoke-direct {v1, p0, p1}, Lcom/mbridge/msdk/foundation/aidl/VideoRequestService$1$1;-><init>(Lcom/mbridge/msdk/foundation/aidl/VideoRequestService$1;[Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Ljava/util/concurrent/ThreadPoolExecutor;->execute(Ljava/lang/Runnable;)V

    :cond_0
    return-void
.end method
