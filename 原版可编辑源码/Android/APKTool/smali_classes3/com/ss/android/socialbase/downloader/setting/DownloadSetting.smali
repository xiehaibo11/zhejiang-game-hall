.class public Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;
.super Ljava/lang/Object;


# static fields
.field private static final POOL_SIZE:I = 0x10

.field private static final sCache:Lcom/ss/android/socialbase/downloader/utils/LruCache;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/ss/android/socialbase/downloader/utils/LruCache<",
            "Ljava/lang/Integer;",
            "Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;",
            ">;"
        }
    .end annotation
.end field

.field private static sDisabledTaskKeys:Lorg/json/JSONObject;

.field private static final sGlobal:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

.field private static sGlobalBugFixDefault:Ljava/lang/Boolean;

.field private static sGlobalBugFixSetting:Lorg/json/JSONObject;

.field private static sGlobalSetting:Lorg/json/JSONObject;
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation
.end field

.field private static sLastSetting:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

.field private static sTaskSettingDisabled:Z


# instance fields
.field private final mBugFixDefault:Ljava/lang/Boolean;

.field private final mBugFixSetting:Lorg/json/JSONObject;

.field private mDownloadId:I

.field private final mTaskSetting:Lorg/json/JSONObject;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 41
    new-instance v0, Lcom/ss/android/socialbase/downloader/utils/LruCache;

    const/16 v1, 0x10

    invoke-direct {v0, v1, v1}, Lcom/ss/android/socialbase/downloader/utils/LruCache;-><init>(II)V

    sput-object v0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->sCache:Lcom/ss/android/socialbase/downloader/utils/LruCache;

    .line 43
    new-instance v0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;-><init>(Lorg/json/JSONObject;)V

    sput-object v0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->sGlobal:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    .line 68
    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->init()V

    return-void
.end method

.method private constructor <init>(Lorg/json/JSONObject;)V
    .locals 4

    .line 89
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 90
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->mTaskSetting:Lorg/json/JSONObject;

    const/4 v0, 0x0

    if-eqz p1, :cond_2

    const-string v1, "bugfix"

    .line 94
    invoke-static {v1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->isTaskKeyDisabled(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_2

    .line 95
    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p1

    if-eqz p1, :cond_1

    const-string v1, "default"

    .line 97
    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-static {v1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->isTaskKeyDisabled(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_1

    const/4 v0, 0x0

    .line 98
    invoke-virtual {p1, v1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    const/4 v2, 0x1

    if-ne v1, v2, :cond_0

    move v0, v2

    :cond_0
    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    :cond_1
    move-object v3, v0

    move-object v0, p1

    move-object p1, v3

    goto :goto_0

    :cond_2
    move-object p1, v0

    .line 103
    :goto_0
    iput-object v0, p0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->mBugFixSetting:Lorg/json/JSONObject;

    .line 104
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->mBugFixDefault:Ljava/lang/Boolean;

    return-void
.end method

.method public static addTaskDownloadSetting(ILorg/json/JSONObject;)V
    .locals 5

    if-eqz p1, :cond_5

    .line 339
    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->getGlobalSettings()Lorg/json/JSONObject;

    move-result-object v0

    if-eq p1, v0, :cond_5

    sget-boolean v0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->sTaskSettingDisabled:Z

    if-eqz v0, :cond_0

    goto :goto_1

    .line 342
    :cond_0
    sget-object v0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->sCache:Lcom/ss/android/socialbase/downloader/utils/LruCache;

    monitor-enter v0

    .line 343
    :try_start_0
    sget-object v1, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->sLastSetting:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    if-eqz v1, :cond_1

    .line 344
    iget-object v2, v1, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->mTaskSetting:Lorg/json/JSONObject;

    if-ne v2, p1, :cond_1

    .line 345
    iput p0, v1, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->mDownloadId:I

    goto :goto_0

    :cond_1
    const/4 v1, 0x0

    .line 348
    sget-object v2, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->sCache:Lcom/ss/android/socialbase/downloader/utils/LruCache;

    invoke-virtual {v2}, Lcom/ss/android/socialbase/downloader/utils/LruCache;->values()Ljava/util/Collection;

    move-result-object v2

    invoke-interface {v2}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :cond_2
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_3

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    .line 349
    iget-object v4, v3, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->mTaskSetting:Lorg/json/JSONObject;

    if-ne v4, p1, :cond_2

    .line 351
    iput p0, v3, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->mDownloadId:I

    move-object v1, v3

    :cond_3
    if-nez v1, :cond_4

    .line 356
    new-instance v1, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    invoke-direct {v1, p1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;-><init>(Lorg/json/JSONObject;)V

    .line 357
    iput p0, v1, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->mDownloadId:I

    .line 359
    :cond_4
    sput-object v1, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->sLastSetting:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    .line 361
    :goto_0
    sget-object p1, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->sCache:Lcom/ss/android/socialbase/downloader/utils/LruCache;

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    invoke-virtual {p1, p0, v1}, Lcom/ss/android/socialbase/downloader/utils/LruCache;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 362
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0

    :cond_5
    :goto_1
    return-void
.end method

.method private static create(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;
    .locals 1

    .line 376
    sget-boolean v0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->sTaskSettingDisabled:Z

    if-eqz v0, :cond_0

    .line 377
    sget-object p0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->sGlobal:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    return-object p0

    .line 379
    :cond_0
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getAppContext()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 381
    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getDownloadInfo(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p0

    if-eqz p0, :cond_1

    .line 383
    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->create(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object p0

    return-object p0

    .line 386
    :cond_1
    sget-object p0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->sGlobal:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    return-object p0
.end method

.method private static create(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;
    .locals 1

    .line 390
    sget-boolean v0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->sTaskSettingDisabled:Z

    if-eqz v0, :cond_0

    .line 391
    sget-object p0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->sGlobal:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    return-object p0

    .line 394
    :cond_0
    :try_start_0
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getDownloadSettingString()Ljava/lang/String;

    move-result-object p0

    .line 395
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 396
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 397
    new-instance p0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    invoke-direct {p0, v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;-><init>(Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    move-exception p0

    .line 400
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 402
    :cond_1
    sget-object p0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->sGlobal:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    return-object p0
.end method

.method public static getGlobalSettings()Lorg/json/JSONObject;
    .locals 1

    .line 109
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getDownloadSetting()Lorg/json/JSONObject;

    move-result-object v0

    return-object v0
.end method

.method public static init()V
    .locals 6

    .line 75
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getDownloadSetting()Lorg/json/JSONObject;

    move-result-object v0

    const/4 v1, 0x0

    const-string v2, "disable_task_setting"

    .line 76
    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v2

    const/4 v3, 0x1

    if-ne v2, v3, :cond_0

    move v2, v3

    goto :goto_0

    :cond_0
    move v2, v1

    :goto_0
    sput-boolean v2, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->sTaskSettingDisabled:Z

    const-string v2, "disabled_task_keys"

    .line 77
    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v2

    sput-object v2, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->sDisabledTaskKeys:Lorg/json/JSONObject;

    const-string v2, "bugfix"

    .line 78
    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v0

    const/4 v2, 0x0

    if-eqz v0, :cond_2

    const-string v4, "default"

    .line 81
    invoke-virtual {v0, v4}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_2

    .line 82
    invoke-virtual {v0, v4, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v2

    if-ne v2, v3, :cond_1

    move v1, v3

    :cond_1
    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v2

    .line 85
    :cond_2
    sput-object v0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->sGlobalBugFixSetting:Lorg/json/JSONObject;

    .line 86
    sput-object v2, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->sGlobalBugFixDefault:Ljava/lang/Boolean;

    return-void
.end method

.method public static isTaskKeyDisabled(Ljava/lang/String;)Z
    .locals 2

    .line 309
    sget-object v0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->sDisabledTaskKeys:Lorg/json/JSONObject;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 310
    invoke-virtual {v0, p0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    const/4 v0, 0x1

    if-ne p0, v0, :cond_0

    return v0

    :cond_0
    return v1
.end method

.method public static obtain(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;
    .locals 1

    const/4 v0, 0x0

    .line 143
    invoke-static {p0, v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(ILcom/ss/android/socialbase/downloader/model/DownloadInfo;)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object p0

    return-object p0
.end method

.method private static obtain(ILcom/ss/android/socialbase/downloader/model/DownloadInfo;)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;
    .locals 3

    .line 163
    sget-object v0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->sLastSetting:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    if-eqz v0, :cond_0

    .line 164
    iget v1, v0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->mDownloadId:I

    if-ne v1, p0, :cond_0

    return-object v0

    .line 167
    :cond_0
    sget-object v0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->sCache:Lcom/ss/android/socialbase/downloader/utils/LruCache;

    monitor-enter v0

    .line 168
    :try_start_0
    sget-object v1, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->sCache:Lcom/ss/android/socialbase/downloader/utils/LruCache;

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/ss/android/socialbase/downloader/utils/LruCache;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    .line 169
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-nez v1, :cond_2

    if-nez p1, :cond_1

    .line 171
    invoke-static {p0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->create(I)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object p1

    goto :goto_0

    :cond_1
    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->create(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object p1

    :goto_0
    move-object v1, p1

    .line 172
    sget-object p1, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->sCache:Lcom/ss/android/socialbase/downloader/utils/LruCache;

    monitor-enter p1

    .line 173
    :try_start_1
    sget-object v0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->sCache:Lcom/ss/android/socialbase/downloader/utils/LruCache;

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v0, v2, v1}, Lcom/ss/android/socialbase/downloader/utils/LruCache;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 174
    monitor-exit p1

    goto :goto_1

    :catchall_0
    move-exception p0

    monitor-exit p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p0

    .line 176
    :cond_2
    :goto_1
    iput p0, v1, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->mDownloadId:I

    .line 177
    sput-object v1, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->sLastSetting:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    return-object v1

    :catchall_1
    move-exception p0

    .line 169
    :try_start_2
    monitor-exit v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    throw p0
.end method

.method public static obtain(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;
    .locals 1

    if-nez p0, :cond_0

    .line 157
    sget-object p0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->sGlobal:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    return-object p0

    .line 159
    :cond_0
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getId()I

    move-result v0

    invoke-static {v0, p0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtain(ILcom/ss/android/socialbase/downloader/model/DownloadInfo;)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object p0

    return-object p0
.end method

.method public static obtain(Lorg/json/JSONObject;)Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;
    .locals 4

    if-eqz p0, :cond_4

    .line 318
    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->getGlobalSettings()Lorg/json/JSONObject;

    move-result-object v0

    if-eq p0, v0, :cond_4

    sget-boolean v0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->sTaskSettingDisabled:Z

    if-eqz v0, :cond_0

    goto :goto_0

    .line 321
    :cond_0
    sget-object v0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->sLastSetting:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    if-eqz v0, :cond_1

    .line 322
    iget-object v1, v0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->mTaskSetting:Lorg/json/JSONObject;

    if-ne v1, p0, :cond_1

    return-object v0

    .line 325
    :cond_1
    sget-object v0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->sCache:Lcom/ss/android/socialbase/downloader/utils/LruCache;

    monitor-enter v0

    .line 326
    :try_start_0
    sget-object v1, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->sCache:Lcom/ss/android/socialbase/downloader/utils/LruCache;

    invoke-virtual {v1}, Lcom/ss/android/socialbase/downloader/utils/LruCache;->values()Ljava/util/Collection;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_2
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_3

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    .line 327
    iget-object v3, v2, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->mTaskSetting:Lorg/json/JSONObject;

    if-ne v3, p0, :cond_2

    .line 328
    sput-object v2, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->sLastSetting:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    .line 329
    monitor-exit v0

    return-object v2

    .line 332
    :cond_3
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 333
    new-instance v0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    invoke-direct {v0, p0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;-><init>(Lorg/json/JSONObject;)V

    .line 334
    sput-object v0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->sLastSetting:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    return-object v0

    :catchall_0
    move-exception p0

    .line 332
    :try_start_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p0

    .line 319
    :cond_4
    :goto_0
    sget-object p0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->sGlobal:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    return-object p0
.end method

.method public static obtainGlobal()Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;
    .locals 1

    .line 132
    sget-object v0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->sGlobal:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    return-object v0
.end method

.method public static removeTaskDownloadSetting(I)V
    .locals 2

    .line 366
    sget-object v0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->sLastSetting:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    if-eqz v0, :cond_0

    .line 367
    iget v0, v0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->mDownloadId:I

    if-ne v0, p0, :cond_0

    const/4 v0, 0x0

    .line 368
    sput-object v0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->sLastSetting:Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    .line 370
    :cond_0
    sget-object v0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->sCache:Lcom/ss/android/socialbase/downloader/utils/LruCache;

    monitor-enter v0

    .line 371
    :try_start_0
    sget-object v1, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->sCache:Lcom/ss/android/socialbase/downloader/utils/LruCache;

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    invoke-virtual {v1, p0}, Lcom/ss/android/socialbase/downloader/utils/LruCache;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 372
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0
.end method

.method public static setGlobalBugFix(Ljava/lang/String;Z)V
    .locals 1

    .line 119
    :try_start_0
    sget-object v0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->sGlobalBugFixSetting:Lorg/json/JSONObject;

    if-nez v0, :cond_0

    .line 120
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    sput-object v0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->sGlobalBugFixSetting:Lorg/json/JSONObject;

    .line 122
    :cond_0
    sget-object v0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->sGlobalBugFixSetting:Lorg/json/JSONObject;

    if-eqz p1, :cond_1

    const/4 p1, 0x1

    goto :goto_0

    :cond_1
    const/4 p1, 0x0

    :goto_0
    invoke-virtual {v0, p0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method


# virtual methods
.method public has(Ljava/lang/String;)Z
    .locals 1

    .line 299
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->mTaskSetting:Lorg/json/JSONObject;

    if-eqz v0, :cond_0

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->isTaskKeyDisabled(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 300
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->mTaskSetting:Lorg/json/JSONObject;

    invoke-virtual {v0, p1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result p1

    return p1

    .line 302
    :cond_0
    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->getGlobalSettings()Lorg/json/JSONObject;

    move-result-object v0

    invoke-virtual {v0, p1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result p1

    return p1
.end method

.method public opt(Ljava/lang/String;)Ljava/lang/Object;
    .locals 1

    .line 292
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->mTaskSetting:Lorg/json/JSONObject;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->isTaskKeyDisabled(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 293
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->mTaskSetting:Lorg/json/JSONObject;

    invoke-virtual {v0, p1}, Lorg/json/JSONObject;->opt(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    return-object p1

    .line 295
    :cond_0
    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->getGlobalSettings()Lorg/json/JSONObject;

    move-result-object v0

    invoke-virtual {v0, p1}, Lorg/json/JSONObject;->opt(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    return-object p1
.end method

.method public optBoolean(Ljava/lang/String;)Z
    .locals 1

    const/4 v0, 0x0

    .line 256
    invoke-virtual {p0, p1, v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optBoolean(Ljava/lang/String;Z)Z

    move-result p1

    return p1
.end method

.method public optBoolean(Ljava/lang/String;Z)Z
    .locals 1

    .line 260
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->mTaskSetting:Lorg/json/JSONObject;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->isTaskKeyDisabled(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 261
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->mTaskSetting:Lorg/json/JSONObject;

    invoke-virtual {v0, p1, p2}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;Z)Z

    move-result p1

    return p1

    .line 263
    :cond_0
    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->getGlobalSettings()Lorg/json/JSONObject;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;Z)Z

    move-result p1

    return p1
.end method

.method public optBugFix(Ljava/lang/String;)Z
    .locals 1

    const/4 v0, 0x0

    .line 186
    invoke-virtual {p0, p1, v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optBugFix(Ljava/lang/String;Z)Z

    move-result p1

    return p1
.end method

.method public optBugFix(Ljava/lang/String;Z)Z
    .locals 3

    .line 203
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->mBugFixSetting:Lorg/json/JSONObject;

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-eqz v0, :cond_2

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->isTaskKeyDisabled(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 204
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->mBugFixSetting:Lorg/json/JSONObject;

    invoke-virtual {v0, p1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 205
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->mBugFixSetting:Lorg/json/JSONObject;

    invoke-virtual {v0, p1, p2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p1

    if-ne p1, v2, :cond_0

    move v1, v2

    :cond_0
    return v1

    .line 207
    :cond_1
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->mBugFixDefault:Ljava/lang/Boolean;

    if-eqz v0, :cond_2

    .line 208
    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p1

    return p1

    .line 211
    :cond_2
    sget-object v0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->sGlobalBugFixSetting:Lorg/json/JSONObject;

    if-eqz v0, :cond_5

    .line 212
    invoke-virtual {v0, p1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 213
    sget-object v0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->sGlobalBugFixSetting:Lorg/json/JSONObject;

    invoke-virtual {v0, p1, p2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p1

    if-ne p1, v2, :cond_3

    move v1, v2

    :cond_3
    return v1

    .line 215
    :cond_4
    sget-object p1, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->sGlobalBugFixDefault:Ljava/lang/Boolean;

    if-eqz p1, :cond_5

    .line 216
    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p1

    return p1

    :cond_5
    return p2
.end method

.method public optDouble(Ljava/lang/String;)D
    .locals 2

    const-wide/high16 v0, 0x7ff8000000000000L    # Double.NaN

    .line 245
    invoke-virtual {p0, p1, v0, v1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optDouble(Ljava/lang/String;D)D

    move-result-wide v0

    return-wide v0
.end method

.method public optDouble(Ljava/lang/String;D)D
    .locals 1

    .line 249
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->mTaskSetting:Lorg/json/JSONObject;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->isTaskKeyDisabled(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 250
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->mTaskSetting:Lorg/json/JSONObject;

    invoke-virtual {v0, p1, p2, p3}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;D)D

    move-result-wide p1

    return-wide p1

    .line 252
    :cond_0
    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->getGlobalSettings()Lorg/json/JSONObject;

    move-result-object v0

    invoke-virtual {v0, p1, p2, p3}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;D)D

    move-result-wide p1

    return-wide p1
.end method

.method public optInt(Ljava/lang/String;)I
    .locals 1

    const/4 v0, 0x0

    .line 223
    invoke-virtual {p0, p1, v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optInt(Ljava/lang/String;I)I

    move-result p1

    return p1
.end method

.method public optInt(Ljava/lang/String;I)I
    .locals 1

    .line 227
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->mTaskSetting:Lorg/json/JSONObject;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->isTaskKeyDisabled(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 228
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->mTaskSetting:Lorg/json/JSONObject;

    invoke-virtual {v0, p1, p2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p1

    return p1

    .line 230
    :cond_0
    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->getGlobalSettings()Lorg/json/JSONObject;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p1

    return p1
.end method

.method public optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;
    .locals 1

    .line 285
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->mTaskSetting:Lorg/json/JSONObject;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->isTaskKeyDisabled(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 286
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->mTaskSetting:Lorg/json/JSONObject;

    invoke-virtual {v0, p1}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object p1

    return-object p1

    .line 288
    :cond_0
    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->getGlobalSettings()Lorg/json/JSONObject;

    move-result-object v0

    invoke-virtual {v0, p1}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object p1

    return-object p1
.end method

.method public optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;
    .locals 1

    .line 278
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->mTaskSetting:Lorg/json/JSONObject;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->isTaskKeyDisabled(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 279
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->mTaskSetting:Lorg/json/JSONObject;

    invoke-virtual {v0, p1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1

    .line 281
    :cond_0
    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->getGlobalSettings()Lorg/json/JSONObject;

    move-result-object v0

    invoke-virtual {v0, p1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method

.method public optLong(Ljava/lang/String;)J
    .locals 2

    const-wide/16 v0, 0x0

    .line 234
    invoke-virtual {p0, p1, v0, v1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optLong(Ljava/lang/String;J)J

    move-result-wide v0

    return-wide v0
.end method

.method public optLong(Ljava/lang/String;J)J
    .locals 1

    .line 238
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->mTaskSetting:Lorg/json/JSONObject;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->isTaskKeyDisabled(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 239
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->mTaskSetting:Lorg/json/JSONObject;

    invoke-virtual {v0, p1, p2, p3}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;J)J

    move-result-wide p1

    return-wide p1

    .line 241
    :cond_0
    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->getGlobalSettings()Lorg/json/JSONObject;

    move-result-object v0

    invoke-virtual {v0, p1, p2, p3}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;J)J

    move-result-wide p1

    return-wide p1
.end method

.method public optString(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    const-string v0, ""

    .line 267
    invoke-virtual {p0, p1, v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 271
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->mTaskSetting:Lorg/json/JSONObject;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->isTaskKeyDisabled(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 272
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->mTaskSetting:Lorg/json/JSONObject;

    invoke-virtual {v0, p1, p2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1

    .line 274
    :cond_0
    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->getGlobalSettings()Lorg/json/JSONObject;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method
