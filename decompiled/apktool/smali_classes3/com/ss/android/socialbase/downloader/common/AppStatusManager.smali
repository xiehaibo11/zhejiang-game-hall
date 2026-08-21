.class public Lcom/ss/android/socialbase/downloader/common/AppStatusManager;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/socialbase/downloader/common/AppStatusManager$AppStatusChangeListener;,
        Lcom/ss/android/socialbase/downloader/common/AppStatusManager$InnerAppStatusChangeCaller;,
        Lcom/ss/android/socialbase/downloader/common/AppStatusManager$Holder;
    }
.end annotation


# static fields
.field private static final STATUS_BACKGROUND:I = 0x0

.field private static final STATUS_FOREGROUND:I = 0x1

.field private static final STATUS_UNKNOWN:I = -0x1

.field private static final TAG:Ljava/lang/String; = "AppStatusManager"


# instance fields
.field private volatile isActivityOnPause:Z

.field private volatile mAppStatus:I

.field private final mAppStatusChangeListeners:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/common/AppStatusManager$AppStatusChangeListener;",
            ">;"
        }
    .end annotation
.end field

.field private mApplication:Landroid/app/Application;

.field private final mCallbacks:Landroid/app/Application$ActivityLifecycleCallbacks;

.field private mInnerAppStatusChangeCaller:Lcom/ss/android/socialbase/downloader/common/AppStatusManager$InnerAppStatusChangeCaller;

.field private mTopActivity:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Landroid/app/Activity;",
            ">;"
        }
    .end annotation
.end field

.field private mTopActivityHashCode:I


# direct methods
.method private constructor <init>()V
    .locals 1

    .line 70
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 31
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->mAppStatusChangeListeners:Ljava/util/List;

    const/4 v0, -0x1

    .line 34
    iput v0, p0, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->mAppStatus:I

    const/4 v0, 0x0

    .line 35
    iput-boolean v0, p0, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->isActivityOnPause:Z

    .line 168
    new-instance v0, Lcom/ss/android/socialbase/downloader/common/AppStatusManager$1;

    invoke-direct {v0, p0}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager$1;-><init>(Lcom/ss/android/socialbase/downloader/common/AppStatusManager;)V

    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->mCallbacks:Landroid/app/Application$ActivityLifecycleCallbacks;

    return-void
.end method

.method synthetic constructor <init>(Lcom/ss/android/socialbase/downloader/common/AppStatusManager$1;)V
    .locals 0

    .line 22
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;-><init>()V

    return-void
.end method

.method static synthetic access$202(Lcom/ss/android/socialbase/downloader/common/AppStatusManager;Ljava/lang/ref/WeakReference;)Ljava/lang/ref/WeakReference;
    .locals 0

    .line 22
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->mTopActivity:Ljava/lang/ref/WeakReference;

    return-object p1
.end method

.method static synthetic access$300(Lcom/ss/android/socialbase/downloader/common/AppStatusManager;)I
    .locals 0

    .line 22
    iget p0, p0, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->mTopActivityHashCode:I

    return p0
.end method

.method static synthetic access$302(Lcom/ss/android/socialbase/downloader/common/AppStatusManager;I)I
    .locals 0

    .line 22
    iput p1, p0, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->mTopActivityHashCode:I

    return p1
.end method

.method static synthetic access$402(Lcom/ss/android/socialbase/downloader/common/AppStatusManager;Z)Z
    .locals 0

    .line 22
    iput-boolean p1, p0, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->isActivityOnPause:Z

    return p1
.end method

.method static synthetic access$500(Lcom/ss/android/socialbase/downloader/common/AppStatusManager;)V
    .locals 0

    .line 22
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->dispatchAppForeground()V

    return-void
.end method

.method static synthetic access$600(Lcom/ss/android/socialbase/downloader/common/AppStatusManager;)V
    .locals 0

    .line 22
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->dispatchAppBackground()V

    return-void
.end method

.method private checkAppForeground()Z
    .locals 3

    const/4 v0, 0x0

    .line 228
    :try_start_0
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->mApplication:Landroid/app/Application;

    if-nez v1, :cond_0

    return v0

    :cond_0
    const-string v2, "activity"

    .line 232
    invoke-virtual {v1, v2}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Landroid/app/ActivityManager;

    .line 234
    invoke-virtual {v1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v2

    .line 235
    invoke-static {v1}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->getCurProcessName(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return v0

    :catchall_0
    move-exception v1

    .line 237
    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V

    return v0
.end method

.method private collectAppSwitchListeners()[Ljava/lang/Object;
    .locals 2

    .line 138
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->mAppStatusChangeListeners:Ljava/util/List;

    monitor-enter v0

    .line 139
    :try_start_0
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->mAppStatusChangeListeners:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_0

    .line 140
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->mAppStatusChangeListeners:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->toArray()[Ljava/lang/Object;

    move-result-object v1

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    .line 142
    :goto_0
    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method private dispatchAppBackground()V
    .locals 4

    const/4 v0, 0x0

    .line 159
    iput v0, p0, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->mAppStatus:I

    .line 160
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->collectAppSwitchListeners()[Ljava/lang/Object;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 162
    array-length v2, v1

    :goto_0
    if-ge v0, v2, :cond_0

    aget-object v3, v1, v0

    .line 163
    check-cast v3, Lcom/ss/android/socialbase/downloader/common/AppStatusManager$AppStatusChangeListener;

    invoke-interface {v3}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager$AppStatusChangeListener;->onAppBackground()V

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_0
    return-void
.end method

.method private dispatchAppForeground()V
    .locals 4

    const/4 v0, 0x1

    .line 148
    iput v0, p0, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->mAppStatus:I

    .line 149
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->collectAppSwitchListeners()[Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 151
    array-length v1, v0

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_0

    aget-object v3, v0, v2

    .line 152
    check-cast v3, Lcom/ss/android/socialbase/downloader/common/AppStatusManager$AppStatusChangeListener;

    invoke-interface {v3}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager$AppStatusChangeListener;->onAppForeground()V

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_0
    return-void
.end method

.method public static getInstance()Lcom/ss/android/socialbase/downloader/common/AppStatusManager;
    .locals 1

    .line 38
    invoke-static {}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager$Holder;->access$000()Lcom/ss/android/socialbase/downloader/common/AppStatusManager;

    move-result-object v0

    return-object v0
.end method


# virtual methods
.method public getTopActivity()Landroid/app/Activity;
    .locals 1

    .line 133
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->mTopActivity:Ljava/lang/ref/WeakReference;

    if-nez v0, :cond_0

    const/4 v0, 0x0

    goto :goto_0

    :cond_0
    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/Activity;

    :goto_0
    return-object v0
.end method

.method public init(Landroid/content/Context;)V
    .locals 1

    .line 74
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->mApplication:Landroid/app/Application;

    if-nez v0, :cond_1

    .line 75
    instance-of v0, p1, Landroid/app/Application;

    if-eqz v0, :cond_1

    .line 76
    monitor-enter p0

    .line 77
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->mApplication:Landroid/app/Application;

    if-nez v0, :cond_0

    .line 78
    check-cast p1, Landroid/app/Application;

    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->mApplication:Landroid/app/Application;

    .line 79
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->mCallbacks:Landroid/app/Application$ActivityLifecycleCallbacks;

    invoke-virtual {p1, v0}, Landroid/app/Application;->registerActivityLifecycleCallbacks(Landroid/app/Application$ActivityLifecycleCallbacks;)V

    .line 81
    :cond_0
    monitor-exit p0

    goto :goto_0

    :catchall_0
    move-exception p1

    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1

    :cond_1
    :goto_0
    return-void
.end method

.method public isAppFocus()Z
    .locals 1

    .line 106
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->isAppForeground()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-boolean v0, p0, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->isActivityOnPause:Z

    if-nez v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public isAppForeground()Z
    .locals 2

    .line 94
    iget v0, p0, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->mAppStatus:I

    const/4 v1, -0x1

    if-ne v0, v1, :cond_0

    .line 96
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->checkAppForeground()Z

    move-result v0

    .line 97
    iput v0, p0, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->mAppStatus:I

    :cond_0
    const/4 v1, 0x1

    if-ne v0, v1, :cond_1

    goto :goto_0

    :cond_1
    const/4 v1, 0x0

    :goto_0
    return v1
.end method

.method public registerAppSwitchListener(Lcom/ss/android/socialbase/downloader/common/AppStatusManager$AppStatusChangeListener;)V
    .locals 2

    if-nez p1, :cond_0

    return-void

    .line 116
    :cond_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->mAppStatusChangeListeners:Ljava/util/List;

    monitor-enter v0

    .line 117
    :try_start_0
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->mAppStatusChangeListeners:Ljava/util/List;

    invoke-interface {v1, p1}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 118
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->mAppStatusChangeListeners:Ljava/util/List;

    invoke-interface {v1, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 120
    :cond_1
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method public setInnerAppStatusChangeCaller(Lcom/ss/android/socialbase/downloader/common/AppStatusManager$InnerAppStatusChangeCaller;)V
    .locals 0

    .line 87
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->mInnerAppStatusChangeCaller:Lcom/ss/android/socialbase/downloader/common/AppStatusManager$InnerAppStatusChangeCaller;

    return-void
.end method

.method public unregisterAppSwitchListener(Lcom/ss/android/socialbase/downloader/common/AppStatusManager$AppStatusChangeListener;)V
    .locals 2

    .line 127
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->mAppStatusChangeListeners:Ljava/util/List;

    monitor-enter v0

    .line 128
    :try_start_0
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->mAppStatusChangeListeners:Ljava/util/List;

    invoke-interface {v1, p1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    .line 129
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method
