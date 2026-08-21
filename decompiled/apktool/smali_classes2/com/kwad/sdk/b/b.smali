.class public final Lcom/kwad/sdk/b/b;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/b/b$a;
    }
.end annotation


# static fields
.field private static final ajA:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# instance fields
.field private final ajB:Ljava/util/concurrent/atomic/AtomicBoolean;

.field private final ajC:Ljava/util/concurrent/atomic/AtomicBoolean;

.field private final ajD:Landroid/content/BroadcastReceiver;

.field private final mListeners:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/sdk/b/a;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/kwad/sdk/b/b;->ajA:Ljava/util/Map;

    return-void
.end method

.method private constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-direct {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/b/b;->ajB:Ljava/util/concurrent/atomic/AtomicBoolean;

    new-instance v0, Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-direct {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/b/b;->ajC:Ljava/util/concurrent/atomic/AtomicBoolean;

    new-instance v0, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/b/b;->mListeners:Ljava/util/List;

    new-instance v0, Lcom/kwad/sdk/b/b$1;

    invoke-direct {v0, p0}, Lcom/kwad/sdk/b/b$1;-><init>(Lcom/kwad/sdk/b/b;)V

    iput-object v0, p0, Lcom/kwad/sdk/b/b;->ajD:Landroid/content/BroadcastReceiver;

    return-void
.end method

.method synthetic constructor <init>(B)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/b/b;-><init>()V

    return-void
.end method

.method static synthetic a(Lcom/kwad/sdk/b/b;Landroid/content/Context;Ljava/lang/String;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/kwad/sdk/b/b;->w(Landroid/content/Context;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/sdk/b/b;Ljava/lang/String;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/sdk/b/b;->ce(Ljava/lang/String;)V

    return-void
.end method

.method private declared-synchronized aF(Landroid/content/Context;)V
    .locals 1

    monitor-enter p0

    :try_start_0
    iget-object v0, p0, Lcom/kwad/sdk/b/b;->ajB:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_0

    monitor-exit p0

    return-void

    :cond_0
    :try_start_1
    const-string v0, "com.smile.gifmaker"

    invoke-static {p1, v0}, Lcom/kwad/sdk/b/b;->y(Landroid/content/Context;Ljava/lang/String;)V

    const-string v0, "com.kuaishou.nebula"

    invoke-static {p1, v0}, Lcom/kwad/sdk/b/b;->y(Landroid/content/Context;Ljava/lang/String;)V

    const-string v0, "com.tencent.mm"

    invoke-static {p1, v0}, Lcom/kwad/sdk/b/b;->y(Landroid/content/Context;Ljava/lang/String;)V

    iget-object p1, p0, Lcom/kwad/sdk/b/b;->ajB:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v0, 0x1

    invoke-virtual {p1, v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method private ce(Ljava/lang/String;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "unInstallApp packageName: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "AppInstallManager"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {p1}, Lcom/kwad/sdk/b/b;->ci(Ljava/lang/String;)V

    invoke-static {p1}, Lcom/kwad/sdk/b/b;->cf(Ljava/lang/String;)V

    invoke-direct {p0, p1}, Lcom/kwad/sdk/b/b;->ch(Ljava/lang/String;)V

    return-void
.end method

.method private static cf(Ljava/lang/String;)V
    .locals 2

    :try_start_0
    new-instance v0, Lcom/kwad/sdk/utils/InstalledAppInfoManager$AppPackageInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/utils/InstalledAppInfoManager$AppPackageInfo;-><init>()V

    iput-object p0, v0, Lcom/kwad/sdk/utils/InstalledAppInfoManager$AppPackageInfo;->packageName:Ljava/lang/String;

    invoke-static {v0}, Lcom/kwad/sdk/utils/InstalledAppInfoManager;->a(Lcom/kwad/sdk/utils/InstalledAppInfoManager$AppPackageInfo;)Lorg/json/JSONObject;

    move-result-object p0

    const-class v0, Lcom/kwad/sdk/service/a/b;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/b;

    const/4 v1, 0x2

    invoke-interface {v0, p0, v1}, Lcom/kwad/sdk/service/a/b;->e(Lorg/json/JSONObject;I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p0

    invoke-static {p0}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    return-void
.end method

.method private cg(Ljava/lang/String;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/b/b;->mListeners:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/b/a;

    :try_start_0
    invoke-interface {v1, p1}, Lcom/kwad/sdk/b/a;->S(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    invoke-static {v1}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method private ch(Ljava/lang/String;)V
    .locals 1

    iget-object p1, p0, Lcom/kwad/sdk/b/b;->mListeners:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    goto :goto_0

    :cond_0
    return-void
.end method

.method private static ci(Ljava/lang/String;)V
    .locals 7

    invoke-virtual {p0}, Ljava/lang/String;->hashCode()I

    move-result v0

    const v1, -0x3a01688a

    const-string v2, "com.smile.gifmaker"

    const-string v3, "com.kuaishou.nebula"

    const-string v4, "com.tencent.mm"

    const/4 v5, 0x2

    const/4 v6, 0x1

    if-eq v0, v1, :cond_2

    const v1, 0x1c3c4cd3

    if-eq v0, v1, :cond_1

    const v1, 0x62e6cf33

    if-eq v0, v1, :cond_0

    goto :goto_0

    :cond_0
    invoke-virtual {p0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_3

    const/4 p0, 0x0

    goto :goto_1

    :cond_1
    invoke-virtual {p0, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_3

    move p0, v6

    goto :goto_1

    :cond_2
    invoke-virtual {p0, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_3

    move p0, v5

    goto :goto_1

    :cond_3
    :goto_0
    const/4 p0, -0x1

    :goto_1
    const-string v0, ""

    if-eqz p0, :cond_6

    if-eq p0, v6, :cond_5

    if-eq p0, v5, :cond_4

    goto :goto_2

    :cond_4
    sget-object p0, Lcom/kwad/sdk/b/b;->ajA:Ljava/util/Map;

    invoke-interface {p0, v4, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :goto_2
    return-void

    :cond_5
    sget-object p0, Lcom/kwad/sdk/b/b;->ajA:Ljava/util/Map;

    invoke-interface {p0, v3, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void

    :cond_6
    sget-object p0, Lcom/kwad/sdk/b/b;->ajA:Ljava/util/Map;

    invoke-interface {p0, v2, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method private w(Landroid/content/Context;Ljava/lang/String;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "installApp packageName: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "AppInstallManager"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {p1, p2}, Lcom/kwad/sdk/b/b;->y(Landroid/content/Context;Ljava/lang/String;)V

    invoke-static {p1, p2}, Lcom/kwad/sdk/b/b;->x(Landroid/content/Context;Ljava/lang/String;)V

    invoke-direct {p0, p2}, Lcom/kwad/sdk/b/b;->cg(Ljava/lang/String;)V

    return-void
.end method

.method private static x(Landroid/content/Context;Ljava/lang/String;)V
    .locals 1

    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object p0

    const/4 v0, 0x0

    invoke-virtual {p0, p1, v0}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object p1

    if-eqz p1, :cond_0

    invoke-static {p1, p0}, Lcom/kwad/sdk/utils/InstalledAppInfoManager;->a(Landroid/content/pm/PackageInfo;Landroid/content/pm/PackageManager;)Lcom/kwad/sdk/utils/InstalledAppInfoManager$AppPackageInfo;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/utils/InstalledAppInfoManager;->a(Lcom/kwad/sdk/utils/InstalledAppInfoManager$AppPackageInfo;)Lorg/json/JSONObject;

    move-result-object p0

    const-class p1, Lcom/kwad/sdk/service/a/b;

    invoke-static {p1}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/kwad/sdk/service/a/b;

    const/4 v0, 0x1

    invoke-interface {p1, p0, v0}, Lcom/kwad/sdk/service/a/b;->e(Lorg/json/JSONObject;I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception p0

    invoke-static {p0}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    return-void
.end method

.method private static y(Landroid/content/Context;Ljava/lang/String;)V
    .locals 7

    invoke-virtual {p1}, Ljava/lang/String;->hashCode()I

    move-result v0

    const v1, -0x3a01688a

    const/4 v2, 0x2

    const/4 v3, 0x1

    const-string v4, "com.smile.gifmaker"

    const-string v5, "com.kuaishou.nebula"

    const-string v6, "com.tencent.mm"

    if-eq v0, v1, :cond_2

    const v1, 0x1c3c4cd3

    if-eq v0, v1, :cond_1

    const v1, 0x62e6cf33

    if-eq v0, v1, :cond_0

    goto :goto_0

    :cond_0
    invoke-virtual {p1, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_3

    const/4 p1, 0x0

    goto :goto_1

    :cond_1
    invoke-virtual {p1, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_3

    move p1, v3

    goto :goto_1

    :cond_2
    invoke-virtual {p1, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_3

    move p1, v2

    goto :goto_1

    :cond_3
    :goto_0
    const/4 p1, -0x1

    :goto_1
    if-eqz p1, :cond_6

    if-eq p1, v3, :cond_5

    if-eq p1, v2, :cond_4

    goto :goto_2

    :cond_4
    sget-object p1, Lcom/kwad/sdk/b/b;->ajA:Ljava/util/Map;

    invoke-static {p0, v6}, Lcom/kwad/sdk/utils/k;->J(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-interface {p1, v6, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :goto_2
    return-void

    :cond_5
    sget-object p1, Lcom/kwad/sdk/b/b;->ajA:Ljava/util/Map;

    invoke-static {p0, v5}, Lcom/kwad/sdk/utils/k;->J(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-interface {p1, v5, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void

    :cond_6
    sget-object p1, Lcom/kwad/sdk/b/b;->ajA:Ljava/util/Map;

    invoke-static {p0, v4}, Lcom/kwad/sdk/utils/k;->J(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-interface {p1, v4, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public static yB()Lcom/kwad/sdk/b/b;
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/b/b$a;->yC()Lcom/kwad/sdk/b/b;

    move-result-object v0

    return-object v0
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/b/a;)V
    .locals 1

    if-nez p1, :cond_0

    return-void

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/sdk/b/b;->checkInit()V

    iget-object v0, p0, Lcom/kwad/sdk/b/b;->mListeners:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public final b(Lcom/kwad/sdk/b/a;)V
    .locals 1

    if-nez p1, :cond_0

    return-void

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/sdk/b/b;->checkInit()V

    iget-object v0, p0, Lcom/kwad/sdk/b/b;->mListeners:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    return-void
.end method

.method public final declared-synchronized checkInit()V
    .locals 3

    monitor-enter p0

    :try_start_0
    iget-object v0, p0, Lcom/kwad/sdk/b/b;->ajC:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_0

    monitor-exit p0

    return-void

    :cond_0
    :try_start_1
    new-instance v0, Landroid/content/IntentFilter;

    invoke-direct {v0}, Landroid/content/IntentFilter;-><init>()V

    const-string v1, "android.intent.action.PACKAGE_ADDED"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    const-string v1, "android.intent.action.PACKAGE_REMOVED"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    const-string v1, "package"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addDataScheme(Ljava/lang/String;)V

    invoke-static {}, Lcom/kwad/sdk/service/ServiceProvider;->HD()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/sdk/b/b;->ajD:Landroid/content/BroadcastReceiver;

    invoke-virtual {v1, v2, v0}, Landroid/content/Context;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;

    iget-object v0, p0, Lcom/kwad/sdk/b/b;->ajC:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    :try_start_2
    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    monitor-exit p0

    return-void

    :catchall_1
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final getVersion(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string p1, ""

    return-object p1

    :cond_0
    invoke-direct {p0, p1}, Lcom/kwad/sdk/b/b;->aF(Landroid/content/Context;)V

    sget-object p1, Lcom/kwad/sdk/b/b;->ajA:Ljava/util/Map;

    invoke-interface {p1, p2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    return-object p1
.end method
