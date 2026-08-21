.class final Lcom/ymnsdk/replugin/util/DownloadTimerUtils$1;
.super Landroid/os/Handler;
.source "DownloadTimerUtils.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ymnsdk/replugin/util/DownloadTimerUtils;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# direct methods
.method constructor <init>(Landroid/os/Looper;)V
    .locals 0

    .line 17
    invoke-direct {p0, p1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 0

    .line 20
    invoke-super {p0, p1}, Landroid/os/Handler;->handleMessage(Landroid/os/Message;)V

    .line 21
    sget-object p1, Lcom/ymnsdk/replugin/util/DownloadTimerUtils;->callback:Lcom/ymnsdk/replugin/download/TimerCallback;

    if-eqz p1, :cond_0

    .line 22
    sget-object p1, Lcom/ymnsdk/replugin/util/DownloadTimerUtils;->callback:Lcom/ymnsdk/replugin/download/TimerCallback;

    invoke-interface {p1}, Lcom/ymnsdk/replugin/download/TimerCallback;->callTime()V

    :cond_0
    const/4 p1, 0x1

    .line 24
    invoke-static {p1}, Lcom/ymnsdk/replugin/util/DownloadTimerUtils;->access$002(Z)Z

    return-void
.end method
