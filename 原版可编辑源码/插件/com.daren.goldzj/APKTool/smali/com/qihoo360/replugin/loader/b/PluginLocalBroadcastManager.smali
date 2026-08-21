.class public Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager$ProxyLocalBroadcastManagerVar;,
        Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager$BroadcastRecord;,
        Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager$ReceiverRecord;
    }
.end annotation


# static fields
.field private static final f:Ljava/lang/Object;

.field private static g:Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;

.field private static h:Ljava/lang/Object;


# instance fields
.field private final a:Landroid/content/Context;

.field private final b:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Landroid/content/BroadcastReceiver;",
            "Ljava/util/ArrayList<",
            "Landroid/content/IntentFilter;",
            ">;>;"
        }
    .end annotation
.end field

.field private final c:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/util/ArrayList<",
            "Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager$ReceiverRecord;",
            ">;>;"
        }
    .end annotation
.end field

.field private final d:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager$BroadcastRecord;",
            ">;"
        }
    .end annotation
.end field

.field private final e:Landroid/os/Handler;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    sput-object v0, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;->f:Ljava/lang/Object;

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;->b:Ljava/util/HashMap;

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;->c:Ljava/util/HashMap;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;->d:Ljava/util/ArrayList;

    iput-object p1, p0, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;->a:Landroid/content/Context;

    new-instance v0, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager$1;

    invoke-virtual {p1}, Landroid/content/Context;->getMainLooper()Landroid/os/Looper;

    move-result-object p1

    invoke-direct {v0, p0, p1}, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager$1;-><init>(Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;->e:Landroid/os/Handler;

    return-void
.end method

.method private a()V
    .locals 9

    :cond_0
    iget-object v0, p0, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;->b:Ljava/util/HashMap;

    monitor-enter v0

    :try_start_0
    iget-object v1, p0, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;->d:Ljava/util/ArrayList;

    invoke-virtual {v1}, Ljava/util/ArrayList;->size()I

    move-result v1

    if-gtz v1, :cond_1

    monitor-exit v0

    return-void

    :cond_1
    new-array v1, v1, [Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager$BroadcastRecord;

    iget-object v2, p0, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;->d:Ljava/util/ArrayList;

    invoke-virtual {v2, v1}, Ljava/util/ArrayList;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    iget-object v2, p0, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;->d:Ljava/util/ArrayList;

    invoke-virtual {v2}, Ljava/util/ArrayList;->clear()V

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    array-length v0, v1

    const/4 v2, 0x0

    const/4 v3, 0x0

    :goto_0
    if-ge v3, v0, :cond_0

    aget-object v4, v1, v3

    const/4 v5, 0x0

    :goto_1
    iget-object v6, v4, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager$BroadcastRecord;->b:Ljava/util/ArrayList;

    invoke-virtual {v6}, Ljava/util/ArrayList;->size()I

    move-result v6

    if-ge v5, v6, :cond_2

    iget-object v6, v4, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager$BroadcastRecord;->b:Ljava/util/ArrayList;

    invoke-virtual {v6, v5}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager$ReceiverRecord;

    iget-object v6, v6, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager$ReceiverRecord;->b:Landroid/content/BroadcastReceiver;

    iget-object v7, p0, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;->a:Landroid/content/Context;

    iget-object v8, v4, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager$BroadcastRecord;->a:Landroid/content/Intent;

    invoke-virtual {v6, v7, v8}, Landroid/content/BroadcastReceiver;->onReceive(Landroid/content/Context;Landroid/content/Intent;)V

    add-int/lit8 v5, v5, 0x1

    goto :goto_1

    :cond_2
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :catchall_0
    move-exception v1

    :try_start_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw v1
.end method

.method static synthetic a(Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;)V
    .locals 0

    invoke-direct {p0}, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;->a()V

    return-void
.end method

.method public static getInstance(Landroid/content/Context;)Ljava/lang/Object;
    .locals 5

    sget-object v0, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;->f:Ljava/lang/Object;

    monitor-enter v0

    :try_start_0
    sget-boolean v1, Lcom/qihoo360/replugin/e;->a:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v1, :cond_0

    :try_start_1
    sget-object v1, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager$ProxyLocalBroadcastManagerVar;->a:Lcom/qihoo360/replugin/b;

    const/4 v2, 0x0

    const/4 v3, 0x1

    new-array v3, v3, [Ljava/lang/Object;

    const/4 v4, 0x0

    aput-object p0, v3, v4

    invoke-virtual {v1, v2, v3}, Lcom/qihoo360/replugin/b;->a(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    sput-object v1, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;->h:Ljava/lang/Object;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catch_0
    move-exception v1

    :try_start_2
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    sget-object v1, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;->g:Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;

    if-nez v1, :cond_2

    invoke-static {}, Lcom/qihoo360/replugin/d;->a()Landroid/content/Context;

    move-result-object v1

    if-nez v1, :cond_1

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    :cond_1
    new-instance p0, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;

    invoke-direct {p0, v1}, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;-><init>(Landroid/content/Context;)V

    sput-object p0, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;->g:Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;

    :cond_2
    sget-object p0, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;->g:Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;

    monitor-exit v0

    return-object p0

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    throw p0
.end method

.method public static registerReceiver(Ljava/lang/Object;Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)V
    .locals 0

    check-cast p0, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;

    invoke-virtual {p0, p1, p2}, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)V

    return-void
.end method

.method public static sendBroadcast(Ljava/lang/Object;Landroid/content/Intent;)Z
    .locals 0

    check-cast p0, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;

    invoke-virtual {p0, p1}, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;->sendBroadcast(Landroid/content/Intent;)Z

    move-result p0

    return p0
.end method

.method public static sendBroadcastSync(Ljava/lang/Object;Landroid/content/Intent;)V
    .locals 0

    check-cast p0, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;

    invoke-virtual {p0, p1}, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;->sendBroadcastSync(Landroid/content/Intent;)V

    return-void
.end method

.method public static unregisterReceiver(Ljava/lang/Object;Landroid/content/BroadcastReceiver;)V
    .locals 0

    check-cast p0, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;

    invoke-virtual {p0, p1}, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V

    return-void
.end method


# virtual methods
.method public registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)V
    .locals 6

    sget-boolean v0, Lcom/qihoo360/replugin/e;->a:Z

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-eqz v0, :cond_0

    :try_start_0
    sget-object v0, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager$ProxyLocalBroadcastManagerVar;->b:Lcom/qihoo360/replugin/b;

    sget-object v3, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;->h:Ljava/lang/Object;

    const/4 v4, 0x2

    new-array v4, v4, [Ljava/lang/Object;

    aput-object p1, v4, v1

    aput-object p2, v4, v2

    invoke-virtual {v0, v3, v4}, Lcom/qihoo360/replugin/b;->a(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void

    :cond_0
    iget-object v0, p0, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;->b:Ljava/util/HashMap;

    monitor-enter v0

    :try_start_1
    new-instance v3, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager$ReceiverRecord;

    invoke-direct {v3, p2, p1}, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager$ReceiverRecord;-><init>(Landroid/content/IntentFilter;Landroid/content/BroadcastReceiver;)V

    iget-object v4, p0, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;->b:Ljava/util/HashMap;

    invoke-virtual {v4, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/util/ArrayList;

    if-nez v4, :cond_1

    new-instance v4, Ljava/util/ArrayList;

    invoke-direct {v4, v2}, Ljava/util/ArrayList;-><init>(I)V

    iget-object v5, p0, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;->b:Ljava/util/HashMap;

    invoke-virtual {v5, p1, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_1
    invoke-virtual {v4, p2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    :goto_1
    invoke-virtual {p2}, Landroid/content/IntentFilter;->countActions()I

    move-result p1

    if-ge v1, p1, :cond_3

    invoke-virtual {p2, v1}, Landroid/content/IntentFilter;->getAction(I)Ljava/lang/String;

    move-result-object p1

    iget-object v4, p0, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;->c:Ljava/util/HashMap;

    invoke-virtual {v4, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/util/ArrayList;

    if-nez v4, :cond_2

    new-instance v4, Ljava/util/ArrayList;

    invoke-direct {v4, v2}, Ljava/util/ArrayList;-><init>(I)V

    iget-object v5, p0, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;->c:Ljava/util/HashMap;

    invoke-virtual {v5, p1, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_2
    invoke-virtual {v4, v3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    add-int/lit8 v1, v1, 0x1

    goto :goto_1

    :cond_3
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p1
.end method

.method public sendBroadcast(Landroid/content/Intent;)Z
    .locals 21

    move-object/from16 v1, p0

    move-object/from16 v0, p1

    sget-boolean v2, Lcom/qihoo360/replugin/e;->a:Z

    const/4 v3, 0x0

    const/4 v4, 0x1

    if-eqz v2, :cond_0

    :try_start_0
    sget-object v2, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager$ProxyLocalBroadcastManagerVar;->d:Lcom/qihoo360/replugin/b;

    sget-object v5, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;->h:Ljava/lang/Object;

    new-array v4, v4, [Ljava/lang/Object;

    aput-object v0, v4, v3

    invoke-virtual {v2, v5, v4}, Lcom/qihoo360/replugin/b;->a(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return v0

    :catch_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    return v3

    :cond_0
    iget-object v2, v1, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;->b:Ljava/util/HashMap;

    monitor-enter v2

    :try_start_1
    invoke-virtual/range {p1 .. p1}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v12

    iget-object v5, v1, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;->a:Landroid/content/Context;

    invoke-virtual {v5}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v5

    invoke-virtual {v0, v5}, Landroid/content/Intent;->resolveTypeIfNeeded(Landroid/content/ContentResolver;)Ljava/lang/String;

    move-result-object v13

    invoke-virtual/range {p1 .. p1}, Landroid/content/Intent;->getData()Landroid/net/Uri;

    move-result-object v14

    invoke-virtual/range {p1 .. p1}, Landroid/content/Intent;->getScheme()Ljava/lang/String;

    move-result-object v15

    invoke-virtual/range {p1 .. p1}, Landroid/content/Intent;->getCategories()Ljava/util/Set;

    move-result-object v16

    invoke-virtual/range {p1 .. p1}, Landroid/content/Intent;->getFlags()I

    move-result v5

    and-int/lit8 v5, v5, 0x8

    if-eqz v5, :cond_1

    const/16 v17, 0x1

    goto :goto_0

    :cond_1
    const/16 v17, 0x0

    :goto_0
    if-eqz v17, :cond_2

    const-string v5, "PluginLocalBroadcastManager"

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "Resolving type "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, " scheme "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, " of intent "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v5, v6}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    iget-object v5, v1, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;->c:Ljava/util/HashMap;

    invoke-virtual/range {p1 .. p1}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    move-object v11, v5

    check-cast v11, Ljava/util/ArrayList;

    if-eqz v11, :cond_12

    if-eqz v17, :cond_3

    const-string v5, "PluginLocalBroadcastManager"

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "Action list: "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v5, v6}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    :cond_3
    const/4 v5, 0x0

    move-object v9, v5

    const/4 v10, 0x0

    :goto_1
    invoke-virtual {v11}, Ljava/util/ArrayList;->size()I

    move-result v5

    if-ge v10, v5, :cond_f

    invoke-virtual {v11, v10}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v5

    move-object v8, v5

    check-cast v8, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager$ReceiverRecord;

    if-eqz v17, :cond_4

    const-string v5, "PluginLocalBroadcastManager"

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "Matching against filter "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v7, v8, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager$ReceiverRecord;->a:Landroid/content/IntentFilter;

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v5, v6}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    :cond_4
    iget-boolean v5, v8, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager$ReceiverRecord;->c:Z

    if-eqz v5, :cond_6

    if-eqz v17, :cond_5

    const-string v5, "PluginLocalBroadcastManager"

    const-string v6, "  Filter\'s target already added"

    invoke-static {v5, v6}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    :cond_5
    move-object v4, v9

    move/from16 v19, v10

    move-object/from16 v20, v11

    goto/16 :goto_3

    :cond_6
    iget-object v5, v8, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager$ReceiverRecord;->a:Landroid/content/IntentFilter;

    const-string v18, "PluginLocalBroadcastManager"

    move-object v6, v12

    move-object v7, v13

    move-object v3, v8

    move-object v8, v15

    move-object v4, v9

    move-object v9, v14

    move/from16 v19, v10

    move-object/from16 v10, v16

    move-object/from16 v20, v11

    move-object/from16 v11, v18

    invoke-virtual/range {v5 .. v11}, Landroid/content/IntentFilter;->match(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/net/Uri;Ljava/util/Set;Ljava/lang/String;)I

    move-result v5

    if-ltz v5, :cond_9

    if-eqz v17, :cond_7

    const-string v6, "PluginLocalBroadcastManager"

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "  Filter matched!  match=0x"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v5}, Ljava/lang/Integer;->toHexString(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v6, v5}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    :cond_7
    if-nez v4, :cond_8

    new-instance v9, Ljava/util/ArrayList;

    invoke-direct {v9}, Ljava/util/ArrayList;-><init>()V

    move-object v4, v9

    :cond_8
    invoke-virtual {v4, v3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    const/4 v5, 0x1

    iput-boolean v5, v3, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager$ReceiverRecord;->c:Z

    goto :goto_3

    :cond_9
    if-eqz v17, :cond_e

    const/4 v3, -0x4

    if-eq v5, v3, :cond_d

    const/4 v3, -0x3

    if-eq v5, v3, :cond_c

    const/4 v3, -0x2

    if-eq v5, v3, :cond_b

    const/4 v3, -0x1

    if-eq v5, v3, :cond_a

    const-string v3, "unknown reason"

    goto :goto_2

    :cond_a
    const-string v3, "type"

    goto :goto_2

    :cond_b
    const-string v3, "data"

    goto :goto_2

    :cond_c
    const-string v3, "action"

    goto :goto_2

    :cond_d
    const-string v3, "category"

    :goto_2
    const-string v5, "PluginLocalBroadcastManager"

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "  Filter did not match: "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v5, v3}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    :cond_e
    :goto_3
    move-object v9, v4

    add-int/lit8 v10, v19, 0x1

    move-object/from16 v11, v20

    const/4 v3, 0x0

    const/4 v4, 0x1

    goto/16 :goto_1

    :cond_f
    move-object v4, v9

    if-eqz v4, :cond_12

    const/4 v3, 0x0

    :goto_4
    invoke-virtual {v4}, Ljava/util/ArrayList;->size()I

    move-result v5

    if-ge v3, v5, :cond_10

    invoke-virtual {v4, v3}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager$ReceiverRecord;

    const/4 v6, 0x0

    iput-boolean v6, v5, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager$ReceiverRecord;->c:Z

    add-int/lit8 v3, v3, 0x1

    goto :goto_4

    :cond_10
    iget-object v3, v1, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;->d:Ljava/util/ArrayList;

    new-instance v5, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager$BroadcastRecord;

    invoke-direct {v5, v0, v4}, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager$BroadcastRecord;-><init>(Landroid/content/Intent;Ljava/util/ArrayList;)V

    invoke-virtual {v3, v5}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    iget-object v0, v1, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;->e:Landroid/os/Handler;

    const/4 v3, 0x1

    invoke-virtual {v0, v3}, Landroid/os/Handler;->hasMessages(I)Z

    move-result v0

    if-nez v0, :cond_11

    iget-object v0, v1, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;->e:Landroid/os/Handler;

    invoke-virtual {v0, v3}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    :cond_11
    monitor-exit v2

    return v3

    :cond_12
    monitor-exit v2

    const/4 v2, 0x0

    return v2

    :catchall_0
    move-exception v0

    monitor-exit v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw v0
.end method

.method public sendBroadcastSync(Landroid/content/Intent;)V
    .locals 4

    sget-boolean v0, Lcom/qihoo360/replugin/e;->a:Z

    if-eqz v0, :cond_0

    :try_start_0
    sget-object v0, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager$ProxyLocalBroadcastManagerVar;->e:Lcom/qihoo360/replugin/b;

    sget-object v1, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;->h:Ljava/lang/Object;

    const/4 v2, 0x1

    new-array v2, v2, [Ljava/lang/Object;

    const/4 v3, 0x0

    aput-object p1, v2, v3

    invoke-virtual {v0, v1, v2}, Lcom/qihoo360/replugin/b;->a(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void

    :cond_0
    invoke-virtual {p0, p1}, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;->sendBroadcast(Landroid/content/Intent;)Z

    move-result p1

    if-eqz p1, :cond_1

    invoke-direct {p0}, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;->a()V

    :cond_1
    return-void
.end method

.method public unregisterReceiver(Landroid/content/BroadcastReceiver;)V
    .locals 11

    sget-boolean v0, Lcom/qihoo360/replugin/e;->a:Z

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-eqz v0, :cond_0

    :try_start_0
    sget-object v0, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager$ProxyLocalBroadcastManagerVar;->c:Lcom/qihoo360/replugin/b;

    sget-object v3, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;->h:Ljava/lang/Object;

    new-array v2, v2, [Ljava/lang/Object;

    aput-object p1, v2, v1

    invoke-virtual {v0, v3, v2}, Lcom/qihoo360/replugin/b;->a(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void

    :cond_0
    iget-object v0, p0, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;->b:Ljava/util/HashMap;

    monitor-enter v0

    :try_start_1
    iget-object v3, p0, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;->b:Ljava/util/HashMap;

    invoke-virtual {v3, p1}, Ljava/util/HashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/ArrayList;

    if-nez v3, :cond_1

    monitor-exit v0

    return-void

    :cond_1
    const/4 v4, 0x0

    :goto_1
    invoke-virtual {v3}, Ljava/util/ArrayList;->size()I

    move-result v5

    if-ge v4, v5, :cond_6

    invoke-virtual {v3, v4}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Landroid/content/IntentFilter;

    const/4 v6, 0x0

    :goto_2
    invoke-virtual {v5}, Landroid/content/IntentFilter;->countActions()I

    move-result v7

    if-ge v6, v7, :cond_5

    invoke-virtual {v5, v6}, Landroid/content/IntentFilter;->getAction(I)Ljava/lang/String;

    move-result-object v7

    iget-object v8, p0, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;->c:Ljava/util/HashMap;

    invoke-virtual {v8, v7}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Ljava/util/ArrayList;

    if-eqz v8, :cond_4

    const/4 v9, 0x0

    :goto_3
    invoke-virtual {v8}, Ljava/util/ArrayList;->size()I

    move-result v10

    if-ge v9, v10, :cond_3

    invoke-virtual {v8, v9}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v10

    check-cast v10, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager$ReceiverRecord;

    iget-object v10, v10, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager$ReceiverRecord;->b:Landroid/content/BroadcastReceiver;

    if-ne v10, p1, :cond_2

    invoke-virtual {v8, v9}, Ljava/util/ArrayList;->remove(I)Ljava/lang/Object;

    add-int/lit8 v9, v9, -0x1

    :cond_2
    add-int/2addr v9, v2

    goto :goto_3

    :cond_3
    invoke-virtual {v8}, Ljava/util/ArrayList;->size()I

    move-result v8

    if-gtz v8, :cond_4

    iget-object v8, p0, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;->c:Ljava/util/HashMap;

    invoke-virtual {v8, v7}, Ljava/util/HashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    :cond_4
    add-int/lit8 v6, v6, 0x1

    goto :goto_2

    :cond_5
    add-int/lit8 v4, v4, 0x1

    goto :goto_1

    :cond_6
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p1
.end method
