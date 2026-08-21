.class final Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable$1;
.super Ljava/lang/Object;
.source "ExChangeVideoBroadcast.java"

# interfaces
.implements Landroid/content/ServiceConnection;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/util/List;

.field final synthetic b:Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable;Ljava/util/List;)V
    .locals 0

    .line 108
    iput-object p1, p0, Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable$1;->b:Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable;

    iput-object p2, p0, Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable$1;->a:Ljava/util/List;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onServiceConnected(Landroid/content/ComponentName;Landroid/os/IBinder;)V
    .locals 1

    if-eqz p2, :cond_0

    .line 113
    :try_start_0
    iget-object p1, p0, Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable$1;->b:Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable;

    invoke-static {p2}, Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface$Stub;->asInterface(Landroid/os/IBinder;)Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface;

    move-result-object p2

    invoke-static {p1, p2}, Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable;->access$002(Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable;Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface;)Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 119
    :catch_0
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable$1;->b:Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable;

    invoke-static {p1}, Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable;->access$000(Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable;)Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface;

    move-result-object p1

    if-eqz p1, :cond_3

    .line 121
    :try_start_1
    iget-object p1, p0, Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable$1;->b:Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable;

    invoke-static {p1}, Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable;->access$000(Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable;)Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface;

    move-result-object p1

    new-instance p2, Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable$1$1;

    invoke-direct {p2, p0}, Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable$1$1;-><init>(Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable$1;)V

    invoke-interface {p1, p2}, Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface;->registerListener(Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener;)V

    .line 182
    iget-object p1, p0, Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable$1;->a:Ljava/util/List;

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable$1;->a:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p1

    if-lez p1, :cond_2

    .line 184
    iget-object p1, p0, Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable$1;->a:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p1

    new-array p1, p1, [Ljava/lang/String;

    const/4 p2, 0x0

    .line 185
    :goto_0
    iget-object v0, p0, Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable$1;->a:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-ge p2, v0, :cond_1

    .line 186
    iget-object v0, p0, Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable$1;->a:Ljava/util/List;

    invoke-interface {v0, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    aput-object v0, p1, p2
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    add-int/lit8 p2, p2, 0x1

    goto :goto_0

    .line 189
    :cond_1
    :try_start_2
    iget-object p2, p0, Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable$1;->b:Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable;

    invoke-static {p2}, Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable;->access$000(Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable;)Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface;

    move-result-object p2

    invoke-interface {p2, p1}, Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface;->requestVideo([Ljava/lang/String;)V

    goto :goto_1

    .line 195
    :cond_2
    iget-object p1, p0, Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable$1;->b:Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable;

    invoke-static {p1}, Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable;->access$000(Lcom/mbridge/msdk/system/ExChangeVideoBroadcast$ExChangeVideoRunnable;)Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface;

    move-result-object p1

    const/4 p2, 0x0

    invoke-interface {p1, p2}, Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface;->requestVideo([Ljava/lang/String;)V
    :try_end_2
    .catch Landroid/os/RemoteException; {:try_start_2 .. :try_end_2} :catch_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    goto :goto_1

    :catch_1
    move-exception p1

    .line 203
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :catch_2
    :cond_3
    :goto_1
    return-void
.end method

.method public final onServiceDisconnected(Landroid/content/ComponentName;)V
    .locals 0

    return-void
.end method
