.class public Lcom/qihoo360/replugin/base/LocalBroadcastHelper;
.super Ljava/lang/Object;
.source "LocalBroadcastHelper.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 33
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static sendBroadcastSyncUi(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 1

    .line 45
    :try_start_0
    new-instance v0, Lcom/qihoo360/replugin/base/LocalBroadcastHelper$1;

    invoke-direct {v0, p0, p1}, Lcom/qihoo360/replugin/base/LocalBroadcastHelper$1;-><init>(Landroid/content/Context;Landroid/content/Intent;)V

    const/16 p0, 0x2710

    invoke-static {v0, p0}, Lcom/qihoo360/replugin/base/ThreadUtils;->syncToMainThread(Ljava/util/concurrent/Callable;I)Ljava/lang/Object;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p0

    .line 53
    new-instance p1, Ljava/lang/RuntimeException;

    invoke-direct {p1, p0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw p1
.end method
