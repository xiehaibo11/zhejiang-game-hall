.class public Lcom/bytedance/pangle/h;
.super Ljava/lang/Object;


# static fields
.field private static volatile d:Lcom/bytedance/pangle/h;


# instance fields
.field a:Z

.field final b:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/bytedance/pangle/ZeusPluginStateListener;",
            ">;"
        }
    .end annotation
.end field

.field final c:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/bytedance/pangle/ZeusPluginEventCallback;",
            ">;"
        }
    .end annotation
.end field

.field private final e:Landroid/os/Handler;


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 41
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 57
    new-instance v0, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    iput-object v0, p0, Lcom/bytedance/pangle/h;->b:Ljava/util/List;

    .line 58
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/bytedance/pangle/h;->c:Ljava/util/List;

    .line 59
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/bytedance/pangle/h;->e:Landroid/os/Handler;

    return-void
.end method

.method public static a()Lcom/bytedance/pangle/h;
    .locals 2

    .line 46
    sget-object v0, Lcom/bytedance/pangle/h;->d:Lcom/bytedance/pangle/h;

    if-nez v0, :cond_1

    .line 47
    const-class v0, Lcom/bytedance/pangle/h;

    monitor-enter v0

    .line 48
    :try_start_0
    sget-object v1, Lcom/bytedance/pangle/h;->d:Lcom/bytedance/pangle/h;

    if-nez v1, :cond_0

    .line 49
    new-instance v1, Lcom/bytedance/pangle/h;

    invoke-direct {v1}, Lcom/bytedance/pangle/h;-><init>()V

    sput-object v1, Lcom/bytedance/pangle/h;->d:Lcom/bytedance/pangle/h;

    .line 51
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 53
    :cond_1
    :goto_0
    sget-object v0, Lcom/bytedance/pangle/h;->d:Lcom/bytedance/pangle/h;

    return-object v0
.end method

.method private static b()V
    .locals 8

    const-string v0, ":"

    .line 138
    :try_start_0
    invoke-static {}, Lcom/bytedance/pangle/Zeus;->getAppApplication()Landroid/app/Application;

    move-result-object v1

    invoke-virtual {v1}, Landroid/app/Application;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v1

    invoke-static {}, Lcom/bytedance/pangle/Zeus;->getAppApplication()Landroid/app/Application;

    move-result-object v2

    invoke-virtual {v2}, Landroid/app/Application;->getPackageName()Ljava/lang/String;

    move-result-object v2

    const/16 v3, 0x8

    invoke-virtual {v1, v2, v3}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object v1

    if-eqz v1, :cond_6

    .line 139
    iget-object v2, v1, Landroid/content/pm/PackageInfo;->providers:[Landroid/content/pm/ProviderInfo;

    if-nez v2, :cond_0

    goto/16 :goto_3

    .line 143
    :cond_0
    iget-object v1, v1, Landroid/content/pm/PackageInfo;->providers:[Landroid/content/pm/ProviderInfo;

    array-length v2, v1

    const/4 v3, 0x0

    :goto_0
    if-ge v3, v2, :cond_5

    aget-object v4, v1, v3

    .line 144
    iget-object v5, v4, Landroid/content/pm/ProviderInfo;->authority:Ljava/lang/String;

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_4

    iget-object v5, v4, Landroid/content/pm/ProviderInfo;->authority:Ljava/lang/String;

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/bytedance/pangle/Zeus;->getAppApplication()Landroid/app/Application;

    move-result-object v7

    invoke-virtual {v7}, Landroid/app/Application;->getPackageName()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, ".pangle.servermanager."

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v5

    if-eqz v5, :cond_4

    .line 147
    iget-object v5, v4, Landroid/content/pm/ProviderInfo;->processName:Ljava/lang/String;

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v6, "main"

    if-nez v5, :cond_2

    :try_start_1
    iget-object v5, v4, Landroid/content/pm/ProviderInfo;->processName:Ljava/lang/String;

    invoke-virtual {v5, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_1

    goto :goto_1

    .line 150
    :cond_1
    iget-object v5, v4, Landroid/content/pm/ProviderInfo;->processName:Ljava/lang/String;

    invoke-virtual {v5, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v5

    const/4 v7, 0x1

    aget-object v5, v5, v7

    goto :goto_2

    :cond_2
    :goto_1
    move-object v5, v6

    .line 152
    :goto_2
    invoke-static {}, Lcom/bytedance/pangle/Zeus;->getServerManagerHashMap()Ljava/util/HashMap;

    move-result-object v7

    invoke-virtual {v7, v5}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Landroid/content/pm/ProviderInfo;

    if-eqz v7, :cond_3

    .line 153
    invoke-static {v5, v6}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v6

    if-eqz v6, :cond_3

    iget-object v6, v4, Landroid/content/pm/ProviderInfo;->name:Ljava/lang/String;

    const-class v7, Lcom/bytedance/pangle/servermanager/MainServerManager;

    invoke-virtual {v7}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v7

    invoke-static {v6, v7}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_4

    .line 158
    :cond_3
    invoke-static {}, Lcom/bytedance/pangle/Zeus;->getServerManagerHashMap()Ljava/util/HashMap;

    move-result-object v6

    invoke-virtual {v6, v5, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_4
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_5
    return-void

    :cond_6
    :goto_3
    const-string v0, "Zeus/init_pangle"

    const-string v2, "initServerManager failed. packageInfo:"

    .line 140
    invoke-static {v1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/bytedance/pangle/log/ZeusLogger;->errReport(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 162
    new-instance v1, Ljava/lang/RuntimeException;

    invoke-direct {v1, v0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v1
.end method

.method private c()[Ljava/lang/Object;
    .locals 2

    .line 233
    iget-object v0, p0, Lcom/bytedance/pangle/h;->c:Ljava/util/List;

    monitor-enter v0

    .line 234
    :try_start_0
    iget-object v1, p0, Lcom/bytedance/pangle/h;->c:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_0

    .line 235
    iget-object v1, p0, Lcom/bytedance/pangle/h;->c:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->toArray()[Ljava/lang/Object;

    move-result-object v1

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    .line 237
    :goto_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v1, :cond_1

    const/4 v0, 0x0

    new-array v0, v0, [Ljava/lang/Object;

    return-object v0

    :cond_1
    return-object v1

    :catchall_0
    move-exception v1

    :try_start_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw v1
.end method


# virtual methods
.method public final a(IILjava/lang/String;ILjava/lang/Throwable;)V
    .locals 14

    .line 203
    invoke-direct {p0}, Lcom/bytedance/pangle/h;->c()[Ljava/lang/Object;

    move-result-object v0

    .line 204
    array-length v1, v0

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_0

    aget-object v5, v0, v2

    move-object v11, p0

    .line 205
    iget-object v12, v11, Lcom/bytedance/pangle/h;->e:Landroid/os/Handler;

    new-instance v13, Lcom/bytedance/pangle/h$4;

    move-object v3, v13

    move-object v4, p0

    move v6, p1

    move/from16 v7, p2

    move-object/from16 v8, p3

    move/from16 v9, p4

    move-object/from16 v10, p5

    invoke-direct/range {v3 .. v10}, Lcom/bytedance/pangle/h$4;-><init>(Lcom/bytedance/pangle/h;Ljava/lang/Object;IILjava/lang/String;ILjava/lang/Throwable;)V

    invoke-virtual {v12, v13}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_0
    move-object v11, p0

    return-void
.end method

.method final declared-synchronized a(Landroid/app/Application;Z)V
    .locals 8

    monitor-enter p0

    .line 62
    :try_start_0
    iget-boolean v0, p0, Lcom/bytedance/pangle/h;->a:Z

    if-eqz v0, :cond_0

    const-string p1, "Zeus/init_pangle"

    const-string p2, "ZeusManager zeus has been inited!"

    .line 63
    invoke-static {p1, p2}, Lcom/bytedance/pangle/log/ZeusLogger;->w(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 64
    monitor-exit p0

    return-void

    :cond_0
    const/16 v1, 0xbb8

    const/4 v2, 0x0

    const/4 v3, 0x0

    const/4 v4, -0x1

    const/4 v5, 0x0

    move-object v0, p0

    .line 66
    :try_start_1
    invoke-virtual/range {v0 .. v5}, Lcom/bytedance/pangle/h;->a(IILjava/lang/String;ILjava/lang/Throwable;)V

    .line 67
    invoke-static {p1}, Lcom/bytedance/pangle/Zeus;->setAppContext(Landroid/app/Application;)V

    .line 68
    invoke-static {}, Lcom/bytedance/pangle/GlobalParam;->getInstance()Lcom/bytedance/pangle/GlobalParam;

    move-result-object v0

    .line 69
    invoke-virtual {v0}, Lcom/bytedance/pangle/GlobalParam;->init()V

    if-eqz p1, :cond_7

    .line 75
    invoke-virtual {v0}, Lcom/bytedance/pangle/GlobalParam;->isDebug()Z

    move-result v1

    invoke-static {v1}, Lcom/bytedance/pangle/log/ZeusLogger;->setDebug(Z)V

    const-string v1, "Zeus/init_pangle"

    .line 76
    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "ZeusManager init, context = "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v3, ", hParam = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/bytedance/pangle/log/ZeusLogger;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 79
    new-instance v1, Lcom/bytedance/pangle/h$1;

    invoke-direct {v1, p0}, Lcom/bytedance/pangle/h$1;-><init>(Lcom/bytedance/pangle/h;)V

    invoke-static {v1}, Lcom/bytedance/pangle/d/e;->a(Ljava/lang/Runnable;)V

    .line 87
    invoke-static {}, Lcom/bytedance/pangle/GlobalParam;->getInstance()Lcom/bytedance/pangle/GlobalParam;

    move-result-object v1

    invoke-virtual {v1}, Lcom/bytedance/pangle/GlobalParam;->isPostBgDexOptByInit()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 88
    invoke-static {}, Lcom/bytedance/pangle/e/f;->a()V

    :cond_1
    if-eqz p2, :cond_2

    .line 92
    invoke-static {}, Lcom/bytedance/pangle/Zeus;->onPrivacyAgreed()V

    .line 94
    :cond_2
    invoke-static {}, Lcom/bytedance/pangle/c/b;->a()Lcom/bytedance/pangle/c/b;

    move-result-object p2

    new-instance v1, Lcom/bytedance/pangle/h$2;

    invoke-direct {v1, p0}, Lcom/bytedance/pangle/h$2;-><init>(Lcom/bytedance/pangle/h;)V

    .line 1038
    iget-object v2, p2, Lcom/bytedance/pangle/c/b;->a:Ljava/util/List;

    monitor-enter v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 1039
    :try_start_2
    iget-object p2, p2, Lcom/bytedance/pangle/c/b;->a:Ljava/util/List;

    invoke-interface {p2, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 1040
    monitor-exit v2
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 101
    :try_start_3
    invoke-virtual {v0}, Lcom/bytedance/pangle/GlobalParam;->isCloseFlipped()Z

    move-result p2

    if-nez p2, :cond_3

    .line 102
    invoke-static {}, Lcom/bytedance/pangle/b;->a()V

    .line 1287
    :cond_3
    sget p2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v0, 0x1d

    const/4 v1, 0x1

    if-ne p2, v0, :cond_4

    move p2, v1

    goto :goto_0

    :cond_4
    const/4 p2, 0x0

    :goto_0
    if-eqz p2, :cond_5

    .line 107
    new-instance p2, Lcom/bytedance/pangle/h$3;

    invoke-direct {p2, p0}, Lcom/bytedance/pangle/h$3;-><init>(Lcom/bytedance/pangle/h;)V

    invoke-static {p2}, Lcom/bytedance/pangle/d/e;->a(Ljava/lang/Runnable;)V

    .line 119
    :cond_5
    invoke-static {}, Lcom/bytedance/pangle/util/i;->i()Z

    move-result p2
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    if-eqz p2, :cond_6

    .line 2223
    :try_start_4
    invoke-static {}, Lcom/bytedance/pangle/d/a;->a()Ljava/lang/Object;

    move-result-object p2

    const-string v0, "mHiddenApiWarningShown"

    .line 2224
    sget-object v2, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-static {p2, v0, v2}, Lcom/bytedance/pangle/util/FieldUtils;->writeField(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;)V

    const-string p2, "Zeus/init_pangle"

    const-string v0, "ZeusManager disableApiWarningShownForAndroidP, true"

    .line 2225
    invoke-static {p2, v0}, Lcom/bytedance/pangle/log/ZeusLogger;->w(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_0
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    goto :goto_1

    :catch_0
    move-exception p2

    :try_start_5
    const-string v0, "Zeus/init_pangle"

    const-string v2, "disableApiWarningShownForAndroidP failed"

    .line 2227
    invoke-static {v0, v2, p2}, Lcom/bytedance/pangle/log/ZeusLogger;->errReport(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 122
    :cond_6
    :goto_1
    invoke-static {}, Lcom/bytedance/pangle/h;->b()V

    .line 123
    invoke-static {}, Lcom/bytedance/pangle/provider/ContentProviderManager;->getInstance()Lcom/bytedance/pangle/provider/ContentProviderManager;

    move-result-object p2

    invoke-virtual {p2}, Lcom/bytedance/pangle/provider/ContentProviderManager;->initSystemContentProviderInfo()V

    .line 126
    invoke-static {p1}, Lcom/bytedance/pangle/receiver/b;->a(Landroid/app/Application;)V

    .line 127
    iput-boolean v1, p0, Lcom/bytedance/pangle/h;->a:Z

    const/16 v3, 0xc1c

    const/4 v4, 0x0

    const/4 v5, 0x0

    const/4 v6, -0x1

    const/4 v7, 0x0

    move-object v2, p0

    .line 128
    invoke-virtual/range {v2 .. v7}, Lcom/bytedance/pangle/h;->a(IILjava/lang/String;ILjava/lang/Throwable;)V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_1

    .line 129
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    .line 1040
    :try_start_6
    monitor-exit v2
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_0

    :try_start_7
    throw p1

    .line 71
    :cond_7
    new-instance p1, Ljava/lang/IllegalArgumentException;

    const-string p2, "context must be not null !!!"

    invoke-direct {p1, p2}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p1
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_1

    :catchall_1
    move-exception p1

    monitor-exit p0

    throw p1
.end method
