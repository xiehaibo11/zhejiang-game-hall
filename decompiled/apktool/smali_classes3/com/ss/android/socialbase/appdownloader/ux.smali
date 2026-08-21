.class public Lcom/ss/android/socialbase/appdownloader/ux;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/socialbase/appdownloader/ux$rg;
    }
.end annotation


# instance fields
.field private c:Landroid/os/Handler;

.field private df:Z

.field private fw:Ljava/lang/Runnable;

.field private pp:Ljava/lang/ref/SoftReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/SoftReference<",
            "Lcom/ss/android/socialbase/appdownloader/view/JumpUnknownSourceActivity;",
            ">;"
        }
    .end annotation
.end field

.field private pt:J

.field private q:J

.field private final rg:Ljava/util/Queue;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Queue<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method private constructor <init>()V
    .locals 2

    .line 56
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 37
    new-instance v0, Ljava/util/ArrayDeque;

    invoke-direct {v0}, Ljava/util/ArrayDeque;-><init>()V

    iput-object v0, p0, Lcom/ss/android/socialbase/appdownloader/ux;->rg:Ljava/util/Queue;

    const/4 v0, 0x0

    .line 39
    iput-boolean v0, p0, Lcom/ss/android/socialbase/appdownloader/ux;->df:Z

    .line 47
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/ss/android/socialbase/appdownloader/ux;->c:Landroid/os/Handler;

    .line 49
    new-instance v0, Lcom/ss/android/socialbase/appdownloader/ux$1;

    invoke-direct {v0, p0}, Lcom/ss/android/socialbase/appdownloader/ux$1;-><init>(Lcom/ss/android/socialbase/appdownloader/ux;)V

    iput-object v0, p0, Lcom/ss/android/socialbase/appdownloader/ux;->fw:Ljava/lang/Runnable;

    .line 57
    invoke-static {}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->getInstance()Lcom/ss/android/socialbase/downloader/common/AppStatusManager;

    move-result-object v0

    new-instance v1, Lcom/ss/android/socialbase/appdownloader/ux$2;

    invoke-direct {v1, p0}, Lcom/ss/android/socialbase/appdownloader/ux$2;-><init>(Lcom/ss/android/socialbase/appdownloader/ux;)V

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->registerAppSwitchListener(Lcom/ss/android/socialbase/downloader/common/AppStatusManager$AppStatusChangeListener;)V

    return-void
.end method

.method synthetic constructor <init>(Lcom/ss/android/socialbase/appdownloader/ux$1;)V
    .locals 0

    .line 24
    invoke-direct {p0}, Lcom/ss/android/socialbase/appdownloader/ux;-><init>()V

    return-void
.end method

.method private df(Landroid/content/Context;IZ)I
    .locals 0

    .line 192
    invoke-static {p1, p2, p3}, Lcom/ss/android/socialbase/appdownloader/q;->df(Landroid/content/Context;IZ)I

    move-result p1

    const/4 p2, 0x1

    if-ne p1, p2, :cond_0

    .line 194
    iput-boolean p2, p0, Lcom/ss/android/socialbase/appdownloader/ux;->df:Z

    .line 196
    :cond_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p2

    iput-wide p2, p0, Lcom/ss/android/socialbase/appdownloader/ux;->q:J

    return p1
.end method

.method static synthetic df(Lcom/ss/android/socialbase/appdownloader/ux;)Ljava/util/Queue;
    .locals 0

    .line 24
    iget-object p0, p0, Lcom/ss/android/socialbase/appdownloader/ux;->rg:Ljava/util/Queue;

    return-object p0
.end method

.method static synthetic pp(Lcom/ss/android/socialbase/appdownloader/ux;)Landroid/os/Handler;
    .locals 0

    .line 24
    iget-object p0, p0, Lcom/ss/android/socialbase/appdownloader/ux;->c:Landroid/os/Handler;

    return-object p0
.end method

.method static synthetic pt(Lcom/ss/android/socialbase/appdownloader/ux;)Ljava/lang/Runnable;
    .locals 0

    .line 24
    iget-object p0, p0, Lcom/ss/android/socialbase/appdownloader/ux;->fw:Ljava/lang/Runnable;

    return-object p0
.end method

.method private pt()Z
    .locals 4

    .line 188
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iget-wide v2, p0, Lcom/ss/android/socialbase/appdownloader/ux;->q:J

    sub-long/2addr v0, v2

    const-wide/16 v2, 0x3e8

    cmp-long v0, v0, v2

    if-gez v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method static synthetic q(Lcom/ss/android/socialbase/appdownloader/ux;)J
    .locals 2

    .line 24
    iget-wide v0, p0, Lcom/ss/android/socialbase/appdownloader/ux;->pt:J

    return-wide v0
.end method

.method private q()V
    .locals 5

    .line 83
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x1d

    if-lt v0, v1, :cond_0

    .line 85
    invoke-static {}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->getInstance()Lcom/ss/android/socialbase/downloader/common/AppStatusManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->isAppForeground()Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    .line 91
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/ux;->rg:Ljava/util/Queue;

    monitor-enter v0

    .line 92
    :try_start_0
    iget-object v1, p0, Lcom/ss/android/socialbase/appdownloader/ux;->rg:Ljava/util/Queue;

    invoke-interface {v1}, Ljava/util/Queue;->poll()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Integer;

    .line 93
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 95
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/ux;->c:Landroid/os/Handler;

    iget-object v2, p0, Lcom/ss/android/socialbase/appdownloader/ux;->fw:Ljava/lang/Runnable;

    invoke-virtual {v0, v2}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    const/4 v0, 0x0

    if-eqz v1, :cond_2

    .line 97
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getAppContext()Landroid/content/Context;

    move-result-object v2

    .line 98
    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object v3

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v4

    if-eq v3, v4, :cond_1

    .line 99
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/ux;->c:Landroid/os/Handler;

    new-instance v3, Lcom/ss/android/socialbase/appdownloader/ux$3;

    invoke-direct {v3, p0, v2, v1}, Lcom/ss/android/socialbase/appdownloader/ux$3;-><init>(Lcom/ss/android/socialbase/appdownloader/ux;Landroid/content/Context;Ljava/lang/Integer;)V

    invoke-virtual {v0, v3}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    goto :goto_0

    .line 106
    :cond_1
    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    invoke-direct {p0, v2, v1, v0}, Lcom/ss/android/socialbase/appdownloader/ux;->df(Landroid/content/Context;IZ)I

    .line 108
    :goto_0
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/ux;->c:Landroid/os/Handler;

    iget-object v1, p0, Lcom/ss/android/socialbase/appdownloader/ux;->fw:Ljava/lang/Runnable;

    const-wide/16 v2, 0x4e20

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    goto :goto_1

    .line 110
    :cond_2
    iput-boolean v0, p0, Lcom/ss/android/socialbase/appdownloader/ux;->df:Z

    :goto_1
    return-void

    :catchall_0
    move-exception v1

    .line 93
    :try_start_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw v1
.end method

.method static synthetic rg(Lcom/ss/android/socialbase/appdownloader/ux;Landroid/content/Context;IZ)I
    .locals 0

    .line 24
    invoke-direct {p0, p1, p2, p3}, Lcom/ss/android/socialbase/appdownloader/ux;->df(Landroid/content/Context;IZ)I

    move-result p0

    return p0
.end method

.method static synthetic rg(Lcom/ss/android/socialbase/appdownloader/ux;J)J
    .locals 0

    .line 24
    iput-wide p1, p0, Lcom/ss/android/socialbase/appdownloader/ux;->pt:J

    return-wide p1
.end method

.method public static rg()Lcom/ss/android/socialbase/appdownloader/ux;
    .locals 1

    .line 126
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/ux$rg;->rg()Lcom/ss/android/socialbase/appdownloader/ux;

    move-result-object v0

    return-object v0
.end method

.method static synthetic rg(Lcom/ss/android/socialbase/appdownloader/ux;)V
    .locals 0

    .line 24
    invoke-direct {p0}, Lcom/ss/android/socialbase/appdownloader/ux;->q()V

    return-void
.end method


# virtual methods
.method public df()Lcom/ss/android/socialbase/appdownloader/view/JumpUnknownSourceActivity;
    .locals 2

    .line 205
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/ux;->pp:Ljava/lang/ref/SoftReference;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    move-object v0, v1

    goto :goto_0

    :cond_0
    invoke-virtual {v0}, Ljava/lang/ref/SoftReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ss/android/socialbase/appdownloader/view/JumpUnknownSourceActivity;

    .line 206
    :goto_0
    iput-object v1, p0, Lcom/ss/android/socialbase/appdownloader/ux;->pp:Ljava/lang/ref/SoftReference;

    return-object v0
.end method

.method public rg(Landroid/content/Context;IZ)I
    .locals 4

    if-eqz p3, :cond_0

    .line 133
    invoke-direct {p0, p1, p2, p3}, Lcom/ss/android/socialbase/appdownloader/ux;->df(Landroid/content/Context;IZ)I

    move-result p1

    return p1

    .line 135
    :cond_0
    invoke-direct {p0}, Lcom/ss/android/socialbase/appdownloader/ux;->pt()Z

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_1

    .line 137
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/ux;->c:Landroid/os/Handler;

    new-instance v2, Lcom/ss/android/socialbase/appdownloader/ux$4;

    invoke-direct {v2, p0, p1, p2, p3}, Lcom/ss/android/socialbase/appdownloader/ux$4;-><init>(Lcom/ss/android/socialbase/appdownloader/ux;Landroid/content/Context;IZ)V

    const-wide/16 p1, 0x3e8

    invoke-virtual {v0, v2, p1, p2}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    return v1

    .line 146
    :cond_1
    invoke-static {}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->getInstance()Lcom/ss/android/socialbase/downloader/common/AppStatusManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->isAppForeground()Z

    move-result v0

    if-eqz v0, :cond_2

    const-string v0, "leaves"

    const-string v1, "on Foreground"

    .line 147
    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 149
    invoke-direct {p0, p1, p2, p3}, Lcom/ss/android/socialbase/appdownloader/ux;->df(Landroid/content/Context;IZ)I

    move-result p1

    return p1

    .line 152
    :cond_2
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/df;->rg()Z

    move-result v0

    if-eqz v0, :cond_3

    return v1

    .line 156
    :cond_3
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x1d

    if-ge v0, v2, :cond_4

    move v0, v1

    goto :goto_0

    :cond_4
    const/4 v0, 0x0

    .line 158
    :goto_0
    iget-object v2, p0, Lcom/ss/android/socialbase/appdownloader/ux;->rg:Ljava/util/Queue;

    invoke-interface {v2}, Ljava/util/Queue;->isEmpty()Z

    move-result v2

    if-eqz v2, :cond_5

    iget-boolean v2, p0, Lcom/ss/android/socialbase/appdownloader/ux;->df:Z

    if-nez v2, :cond_5

    if-eqz v0, :cond_5

    .line 160
    invoke-direct {p0, p1, p2, p3}, Lcom/ss/android/socialbase/appdownloader/ux;->df(Landroid/content/Context;IZ)I

    move-result p1

    return p1

    .line 163
    :cond_5
    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtainGlobal()Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object p1

    const/4 p3, 0x3

    const-string v2, "install_queue_size"

    invoke-virtual {p1, v2, p3}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result p1

    .line 164
    iget-object p3, p0, Lcom/ss/android/socialbase/appdownloader/ux;->rg:Ljava/util/Queue;

    monitor-enter p3

    .line 165
    :goto_1
    :try_start_0
    iget-object v2, p0, Lcom/ss/android/socialbase/appdownloader/ux;->rg:Ljava/util/Queue;

    invoke-interface {v2}, Ljava/util/Queue;->size()I

    move-result v2

    if-le v2, p1, :cond_6

    .line 166
    iget-object v2, p0, Lcom/ss/android/socialbase/appdownloader/ux;->rg:Ljava/util/Queue;

    invoke-interface {v2}, Ljava/util/Queue;->poll()Ljava/lang/Object;

    goto :goto_1

    .line 168
    :cond_6
    monitor-exit p3
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-eqz v0, :cond_7

    .line 171
    iget-object p1, p0, Lcom/ss/android/socialbase/appdownloader/ux;->c:Landroid/os/Handler;

    iget-object p3, p0, Lcom/ss/android/socialbase/appdownloader/ux;->fw:Ljava/lang/Runnable;

    invoke-virtual {p1, p3}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 172
    invoke-static {p2}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object p1

    const-wide/16 v2, 0x4e20

    const-string p3, "install_queue_timeout"

    invoke-virtual {p1, p3, v2, v3}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optLong(Ljava/lang/String;J)J

    move-result-wide v2

    .line 173
    iget-object p1, p0, Lcom/ss/android/socialbase/appdownloader/ux;->c:Landroid/os/Handler;

    iget-object p3, p0, Lcom/ss/android/socialbase/appdownloader/ux;->fw:Ljava/lang/Runnable;

    invoke-virtual {p1, p3, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    .line 176
    :cond_7
    iget-object p1, p0, Lcom/ss/android/socialbase/appdownloader/ux;->rg:Ljava/util/Queue;

    monitor-enter p1

    .line 177
    :try_start_1
    iget-object p3, p0, Lcom/ss/android/socialbase/appdownloader/ux;->rg:Ljava/util/Queue;

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-interface {p3, v0}, Ljava/util/Queue;->contains(Ljava/lang/Object;)Z

    move-result p3

    if-nez p3, :cond_8

    .line 178
    iget-object p3, p0, Lcom/ss/android/socialbase/appdownloader/ux;->rg:Ljava/util/Queue;

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    invoke-interface {p3, p2}, Ljava/util/Queue;->offer(Ljava/lang/Object;)Z

    .line 180
    :cond_8
    monitor-exit p1

    return v1

    :catchall_0
    move-exception p2

    monitor-exit p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p2

    :catchall_1
    move-exception p1

    .line 168
    :try_start_2
    monitor-exit p3
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    throw p1
.end method

.method public rg(Lcom/ss/android/socialbase/appdownloader/view/JumpUnknownSourceActivity;)V
    .locals 1

    .line 201
    new-instance v0, Ljava/lang/ref/SoftReference;

    invoke-direct {v0, p1}, Ljava/lang/ref/SoftReference;-><init>(Ljava/lang/Object;)V

    iput-object v0, p0, Lcom/ss/android/socialbase/appdownloader/ux;->pp:Ljava/lang/ref/SoftReference;

    return-void
.end method

.method rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Ljava/lang/String;)V
    .locals 0

    if-eqz p1, :cond_0

    .line 115
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 116
    invoke-direct {p0}, Lcom/ss/android/socialbase/appdownloader/ux;->q()V

    :cond_0
    return-void
.end method
