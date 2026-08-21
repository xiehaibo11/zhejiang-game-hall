.class public Lcom/bytedance/pangle/service/a/a;
.super Lcom/bytedance/pangle/d$a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bytedance/pangle/service/a/a$a;,
        Lcom/bytedance/pangle/service/a/a$b;
    }
.end annotation


# static fields
.field private static volatile b:Lcom/bytedance/pangle/service/a/a;


# instance fields
.field private final a:Landroid/os/Handler;

.field private final c:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Landroid/content/ComponentName;",
            "Landroid/os/IBinder;",
            ">;"
        }
    .end annotation
.end field

.field private final d:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Landroid/content/ComponentName;",
            "Lcom/bytedance/pangle/service/a/a$b;",
            ">;"
        }
    .end annotation
.end field

.field private final e:Lcom/bytedance/pangle/service/a/a$a;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/bytedance/pangle/service/a/a$a<",
            "Landroid/content/Intent;",
            ">;"
        }
    .end annotation
.end field

.field private final f:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Landroid/content/ComponentName;",
            "Lcom/bytedance/pangle/service/a;",
            ">;"
        }
    .end annotation
.end field

.field private final g:Ljava/util/HashSet;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashSet<",
            "Landroid/content/ComponentName;",
            ">;"
        }
    .end annotation
.end field

.field private final h:Ljava/util/HashSet;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashSet<",
            "Landroid/content/ComponentName;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method private constructor <init>()V
    .locals 2

    .line 141
    invoke-direct {p0}, Lcom/bytedance/pangle/d$a;-><init>()V

    .line 118
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/bytedance/pangle/service/a/a;->c:Ljava/util/HashMap;

    .line 120
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/bytedance/pangle/service/a/a;->d:Ljava/util/HashMap;

    .line 122
    new-instance v0, Lcom/bytedance/pangle/service/a/a$a;

    invoke-direct {v0, p0}, Lcom/bytedance/pangle/service/a/a$a;-><init>(Lcom/bytedance/pangle/service/a/a;)V

    iput-object v0, p0, Lcom/bytedance/pangle/service/a/a;->e:Lcom/bytedance/pangle/service/a/a$a;

    .line 124
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/bytedance/pangle/service/a/a;->f:Ljava/util/HashMap;

    .line 126
    new-instance v0, Ljava/util/HashSet;

    invoke-direct {v0}, Ljava/util/HashSet;-><init>()V

    iput-object v0, p0, Lcom/bytedance/pangle/service/a/a;->g:Ljava/util/HashSet;

    .line 128
    new-instance v0, Ljava/util/HashSet;

    invoke-direct {v0}, Ljava/util/HashSet;-><init>()V

    iput-object v0, p0, Lcom/bytedance/pangle/service/a/a;->h:Ljava/util/HashSet;

    .line 142
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/bytedance/pangle/service/a/a;->a:Landroid/os/Handler;

    return-void
.end method

.method static synthetic a(Lcom/bytedance/pangle/service/a/a;Landroid/content/Intent;Ljava/lang/String;)Landroid/content/ComponentName;
    .locals 0

    .line 28
    invoke-direct {p0, p1, p2}, Lcom/bytedance/pangle/service/a/a;->c(Landroid/content/Intent;Ljava/lang/String;)Landroid/content/ComponentName;

    move-result-object p0

    return-object p0
.end method

.method static synthetic a(Lcom/bytedance/pangle/service/a/a;Lcom/bytedance/pangle/f;)V
    .locals 0

    .line 28
    invoke-direct {p0, p1}, Lcom/bytedance/pangle/service/a/a;->b(Lcom/bytedance/pangle/f;)V

    return-void
.end method

.method private declared-synchronized a(Landroid/content/Intent;Lcom/bytedance/pangle/f;Ljava/lang/String;)Z
    .locals 3

    monitor-enter p0

    .line 282
    :try_start_0
    invoke-virtual {p1}, Landroid/content/Intent;->getComponent()Landroid/content/ComponentName;

    move-result-object v0

    .line 285
    iget-object v1, p0, Lcom/bytedance/pangle/service/a/a;->f:Ljava/util/HashMap;

    invoke-virtual {v1, v0}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 287
    invoke-static {p1, p3}, Lcom/bytedance/pangle/service/a/a;->d(Landroid/content/Intent;Ljava/lang/String;)Lcom/bytedance/pangle/service/a;

    move-result-object p3
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez p3, :cond_0

    const/4 p1, 0x0

    .line 289
    monitor-exit p0

    return p1

    .line 291
    :cond_0
    :try_start_1
    iget-object v1, p0, Lcom/bytedance/pangle/service/a/a;->f:Ljava/util/HashMap;

    invoke-virtual {v1, v0, p3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 293
    :cond_1
    iget-object p3, p0, Lcom/bytedance/pangle/service/a/a;->f:Ljava/util/HashMap;

    invoke-virtual {p3, v0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p3

    check-cast p3, Lcom/bytedance/pangle/service/a;

    .line 296
    iget-object v1, p0, Lcom/bytedance/pangle/service/a/a;->c:Ljava/util/HashMap;

    invoke-virtual {v1, v0}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 298
    iget-object v1, p0, Lcom/bytedance/pangle/service/a/a;->c:Ljava/util/HashMap;

    invoke-interface {p3, p1}, Lcom/bytedance/pangle/service/a;->onBind(Landroid/content/Intent;)Landroid/os/IBinder;

    move-result-object p3

    invoke-virtual {v1, v0, p3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 302
    :cond_2
    iget-object p3, p0, Lcom/bytedance/pangle/service/a/a;->c:Ljava/util/HashMap;

    invoke-virtual {p3, v0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p3

    check-cast p3, Landroid/os/IBinder;

    if-eqz p3, :cond_4

    .line 305
    iget-object v1, p0, Lcom/bytedance/pangle/service/a/a;->d:Ljava/util/HashMap;

    invoke-virtual {v1, v0}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_3

    .line 306
    iget-object v1, p0, Lcom/bytedance/pangle/service/a/a;->d:Ljava/util/HashMap;

    invoke-virtual {v1, v0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bytedance/pangle/service/a/a$b;

    invoke-virtual {v1, p2}, Lcom/bytedance/pangle/service/a/a$b;->contains(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_4

    .line 308
    iget-object v1, p0, Lcom/bytedance/pangle/service/a/a;->d:Ljava/util/HashMap;

    invoke-virtual {v1, v0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bytedance/pangle/service/a/a$b;

    invoke-virtual {v1, p2}, Lcom/bytedance/pangle/service/a/a$b;->add(Ljava/lang/Object;)Z

    .line 309
    iget-object v1, p0, Lcom/bytedance/pangle/service/a/a;->e:Lcom/bytedance/pangle/service/a/a$a;

    invoke-virtual {v1, p2, p1}, Lcom/bytedance/pangle/service/a/a$a;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 312
    invoke-interface {p2, v0, p3}, Lcom/bytedance/pangle/f;->a(Landroid/content/ComponentName;Landroid/os/IBinder;)V

    goto :goto_0

    .line 316
    :cond_3
    new-instance v1, Lcom/bytedance/pangle/service/a/a$b;

    invoke-direct {v1, p0}, Lcom/bytedance/pangle/service/a/a$b;-><init>(Lcom/bytedance/pangle/service/a/a;)V

    .line 317
    invoke-virtual {v1, p2}, Lcom/bytedance/pangle/service/a/a$b;->add(Ljava/lang/Object;)Z

    .line 318
    iget-object v2, p0, Lcom/bytedance/pangle/service/a/a;->d:Ljava/util/HashMap;

    invoke-virtual {v2, v0, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 319
    iget-object v1, p0, Lcom/bytedance/pangle/service/a/a;->e:Lcom/bytedance/pangle/service/a/a$a;

    invoke-virtual {v1, p2, p1}, Lcom/bytedance/pangle/service/a/a$a;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 322
    invoke-interface {p2, v0, p3}, Lcom/bytedance/pangle/f;->a(Landroid/content/ComponentName;Landroid/os/IBinder;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :cond_4
    :goto_0
    const/4 p1, 0x1

    .line 325
    monitor-exit p0

    return p1

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method static synthetic a(Lcom/bytedance/pangle/service/a/a;Landroid/content/Intent;Lcom/bytedance/pangle/f;Ljava/lang/String;)Z
    .locals 0

    .line 28
    invoke-direct {p0, p1, p2, p3}, Lcom/bytedance/pangle/service/a/a;->a(Landroid/content/Intent;Lcom/bytedance/pangle/f;Ljava/lang/String;)Z

    move-result p0

    return p0
.end method

.method public static b()Lcom/bytedance/pangle/service/a/a;
    .locals 2

    .line 131
    sget-object v0, Lcom/bytedance/pangle/service/a/a;->b:Lcom/bytedance/pangle/service/a/a;

    if-nez v0, :cond_1

    .line 132
    const-class v0, Lcom/bytedance/pangle/service/a/a;

    monitor-enter v0

    .line 133
    :try_start_0
    sget-object v1, Lcom/bytedance/pangle/service/a/a;->b:Lcom/bytedance/pangle/service/a/a;

    if-nez v1, :cond_0

    .line 134
    new-instance v1, Lcom/bytedance/pangle/service/a/a;

    invoke-direct {v1}, Lcom/bytedance/pangle/service/a/a;-><init>()V

    sput-object v1, Lcom/bytedance/pangle/service/a/a;->b:Lcom/bytedance/pangle/service/a/a;

    .line 136
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 138
    :cond_1
    :goto_0
    sget-object v0, Lcom/bytedance/pangle/service/a/a;->b:Lcom/bytedance/pangle/service/a/a;

    return-object v0
.end method

.method private declared-synchronized b(Lcom/bytedance/pangle/f;)V
    .locals 4

    monitor-enter p0

    .line 343
    :try_start_0
    iget-object v0, p0, Lcom/bytedance/pangle/service/a/a;->d:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->keySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/content/ComponentName;

    .line 344
    iget-object v2, p0, Lcom/bytedance/pangle/service/a/a;->d:Ljava/util/HashMap;

    invoke-virtual {v2, v1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/bytedance/pangle/service/a/a$b;

    .line 345
    invoke-virtual {v2, p1}, Lcom/bytedance/pangle/service/a/a$b;->contains(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 346
    invoke-virtual {v2, p1}, Lcom/bytedance/pangle/service/a/a$b;->remove(Ljava/lang/Object;)Z

    .line 347
    iget-object v0, p0, Lcom/bytedance/pangle/service/a/a;->e:Lcom/bytedance/pangle/service/a/a$a;

    invoke-virtual {v0, p1}, Lcom/bytedance/pangle/service/a/a$a;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/content/Intent;

    .line 348
    invoke-virtual {v2}, Lcom/bytedance/pangle/service/a/a$b;->size()I

    move-result v0

    if-nez v0, :cond_1

    .line 350
    iget-object v0, p0, Lcom/bytedance/pangle/service/a/a;->d:Ljava/util/HashMap;

    invoke-virtual {v0, v1}, Ljava/util/HashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 353
    iget-object v0, p0, Lcom/bytedance/pangle/service/a/a;->f:Ljava/util/HashMap;

    invoke-virtual {v0, v1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bytedance/pangle/service/a;

    if-eqz v0, :cond_1

    .line 355
    invoke-interface {v0, p1}, Lcom/bytedance/pangle/service/a;->onUnbind(Landroid/content/Intent;)Z

    .line 359
    :cond_1
    invoke-direct {p0, v1}, Lcom/bytedance/pangle/service/a/a;->b(Landroid/content/ComponentName;)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 360
    monitor-exit p0

    return-void

    .line 363
    :cond_2
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method private b(Landroid/content/ComponentName;)Z
    .locals 2

    .line 233
    iget-object v0, p0, Lcom/bytedance/pangle/service/a/a;->g:Ljava/util/HashSet;

    invoke-virtual {v0, p1}, Ljava/util/HashSet;->contains(Ljava/lang/Object;)Z

    move-result v0

    const/4 v1, 0x1

    if-nez v0, :cond_0

    .line 234
    iget-object v0, p0, Lcom/bytedance/pangle/service/a/a;->d:Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    if-nez v0, :cond_1

    .line 236
    invoke-direct {p0, p1}, Lcom/bytedance/pangle/service/a/a;->c(Landroid/content/ComponentName;)V

    return v1

    .line 241
    :cond_0
    iget-object v0, p0, Lcom/bytedance/pangle/service/a/a;->h:Ljava/util/HashSet;

    invoke-virtual {v0, p1}, Ljava/util/HashSet;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/bytedance/pangle/service/a/a;->d:Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 243
    invoke-direct {p0, p1}, Lcom/bytedance/pangle/service/a/a;->c(Landroid/content/ComponentName;)V

    return v1

    :cond_1
    const/4 p1, 0x0

    return p1
.end method

.method private declared-synchronized c(Landroid/content/Intent;Ljava/lang/String;)Landroid/content/ComponentName;
    .locals 2

    monitor-enter p0

    .line 163
    :try_start_0
    invoke-virtual {p1}, Landroid/content/Intent;->getComponent()Landroid/content/ComponentName;

    move-result-object v0

    .line 164
    iget-object v1, p0, Lcom/bytedance/pangle/service/a/a;->f:Ljava/util/HashMap;

    invoke-virtual {v1, v0}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 166
    invoke-static {p1, p2}, Lcom/bytedance/pangle/service/a/a;->d(Landroid/content/Intent;Ljava/lang/String;)Lcom/bytedance/pangle/service/a;

    move-result-object p2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez p2, :cond_0

    .line 168
    monitor-exit p0

    return-object v0

    .line 170
    :cond_0
    :try_start_1
    iget-object v1, p0, Lcom/bytedance/pangle/service/a/a;->f:Ljava/util/HashMap;

    invoke-virtual {v1, v0, p2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 172
    iget-object p2, p0, Lcom/bytedance/pangle/service/a/a;->g:Ljava/util/HashSet;

    invoke-virtual {p2, v0}, Ljava/util/HashSet;->add(Ljava/lang/Object;)Z

    .line 174
    :cond_1
    iget-object p2, p0, Lcom/bytedance/pangle/service/a/a;->f:Ljava/util/HashMap;

    invoke-virtual {p2, v0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/bytedance/pangle/service/a;

    if-eqz p2, :cond_2

    const/4 v1, 0x0

    .line 176
    invoke-interface {p2, p1, v1, v1}, Lcom/bytedance/pangle/service/a;->onStartCommand(Landroid/content/Intent;II)I
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 178
    :cond_2
    monitor-exit p0

    return-object v0

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method private c(Landroid/content/ComponentName;)V
    .locals 2

    .line 252
    iget-object v0, p0, Lcom/bytedance/pangle/service/a/a;->f:Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bytedance/pangle/service/a;

    .line 253
    iget-object v1, p0, Lcom/bytedance/pangle/service/a/a;->h:Ljava/util/HashSet;

    invoke-virtual {v1, p1}, Ljava/util/HashSet;->remove(Ljava/lang/Object;)Z

    .line 254
    iget-object v1, p0, Lcom/bytedance/pangle/service/a/a;->c:Ljava/util/HashMap;

    invoke-virtual {v1, p1}, Ljava/util/HashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 255
    iget-object v1, p0, Lcom/bytedance/pangle/service/a/a;->g:Ljava/util/HashSet;

    invoke-virtual {v1, p1}, Ljava/util/HashSet;->remove(Ljava/lang/Object;)Z

    if-eqz v0, :cond_0

    .line 258
    invoke-interface {v0}, Lcom/bytedance/pangle/service/a;->onDestroy()V

    :cond_0
    return-void
.end method

.method private static d(Landroid/content/Intent;Ljava/lang/String;)Lcom/bytedance/pangle/service/a;
    .locals 0

    .line 182
    invoke-static {p0, p1}, Lcom/bytedance/pangle/service/a/a;->e(Landroid/content/Intent;Ljava/lang/String;)Lcom/bytedance/pangle/service/a;

    move-result-object p0

    if-eqz p0, :cond_0

    .line 184
    invoke-interface {p0}, Lcom/bytedance/pangle/service/a;->onCreate()V

    :cond_0
    return-object p0
.end method

.method private static e(Landroid/content/Intent;Ljava/lang/String;)Lcom/bytedance/pangle/service/a;
    .locals 2

    .line 190
    invoke-virtual {p0}, Landroid/content/Intent;->getComponent()Landroid/content/ComponentName;

    move-result-object p0

    .line 191
    invoke-static {}, Lcom/bytedance/pangle/plugin/PluginManager;->getInstance()Lcom/bytedance/pangle/plugin/PluginManager;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/bytedance/pangle/plugin/PluginManager;->getPlugin(Ljava/lang/String;)Lcom/bytedance/pangle/plugin/Plugin;

    move-result-object v0

    .line 194
    :try_start_0
    invoke-static {p1}, Lcom/bytedance/pangle/Zeus;->loadPlugin(Ljava/lang/String;)Z

    move-result p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    .line 195
    :try_start_1
    iget-object v1, v0, Lcom/bytedance/pangle/plugin/Plugin;->mClassLoader:Lcom/bytedance/pangle/PluginClassLoader;

    invoke-virtual {p0}, Landroid/content/ComponentName;->getClassName()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1, p0}, Lcom/bytedance/pangle/PluginClassLoader;->loadClass(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p0

    invoke-virtual {p0}, Ljava/lang/Class;->newInstance()Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/bytedance/pangle/service/a;

    .line 196
    invoke-interface {p0, v0}, Lcom/bytedance/pangle/service/a;->attach(Lcom/bytedance/pangle/plugin/Plugin;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    goto :goto_0

    :catch_1
    move-exception p0

    const/4 p1, 0x0

    .line 199
    :goto_0
    invoke-static {p1}, Ljava/lang/String;->valueOf(Z)Ljava/lang/String;

    move-result-object p1

    const-string v0, "newServiceInstance failed! loadPlugin = "

    invoke-virtual {v0, p1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "Zeus/service_pangle"

    invoke-static {v0, p1, p0}, Lcom/bytedance/pangle/log/ZeusLogger;->errReport(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 200
    new-instance p1, Ljava/lang/RuntimeException;

    invoke-direct {p1, p0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw p1
.end method


# virtual methods
.method public final a(Landroid/content/Intent;Ljava/lang/String;)Landroid/content/ComponentName;
    .locals 2

    .line 147
    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    if-ne v0, v1, :cond_0

    .line 148
    invoke-direct {p0, p1, p2}, Lcom/bytedance/pangle/service/a/a;->c(Landroid/content/Intent;Ljava/lang/String;)Landroid/content/ComponentName;

    move-result-object p1

    return-object p1

    .line 150
    :cond_0
    iget-object v0, p0, Lcom/bytedance/pangle/service/a/a;->a:Landroid/os/Handler;

    new-instance v1, Lcom/bytedance/pangle/service/a/a$1;

    invoke-direct {v1, p0, p1, p2}, Lcom/bytedance/pangle/service/a/a$1;-><init>(Lcom/bytedance/pangle/service/a/a;Landroid/content/Intent;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    .line 157
    invoke-virtual {p1}, Landroid/content/Intent;->getComponent()Landroid/content/ComponentName;

    move-result-object p1

    return-object p1
.end method

.method public final a(Lcom/bytedance/pangle/f;)V
    .locals 2

    .line 330
    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    if-ne v0, v1, :cond_0

    .line 331
    invoke-direct {p0, p1}, Lcom/bytedance/pangle/service/a/a;->b(Lcom/bytedance/pangle/f;)V

    return-void

    .line 333
    :cond_0
    iget-object v0, p0, Lcom/bytedance/pangle/service/a/a;->a:Landroid/os/Handler;

    new-instance v1, Lcom/bytedance/pangle/service/a/a$4;

    invoke-direct {v1, p0, p1}, Lcom/bytedance/pangle/service/a/a$4;-><init>(Lcom/bytedance/pangle/service/a/a;Lcom/bytedance/pangle/f;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public final declared-synchronized a(Landroid/content/ComponentName;)Z
    .locals 1

    monitor-enter p0

    .line 222
    :try_start_0
    iget-object v0, p0, Lcom/bytedance/pangle/service/a/a;->f:Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 223
    iget-object v0, p0, Lcom/bytedance/pangle/service/a/a;->h:Ljava/util/HashSet;

    invoke-virtual {v0, p1}, Ljava/util/HashSet;->add(Ljava/lang/Object;)Z

    .line 226
    invoke-direct {p0, p1}, Lcom/bytedance/pangle/service/a/a;->b(Landroid/content/ComponentName;)Z

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return p1

    :cond_0
    const/4 p1, 0x0

    .line 228
    monitor-exit p0

    return p1

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final a(Landroid/content/Intent;Lcom/bytedance/pangle/f;ILjava/lang/String;)Z
    .locals 8

    .line 264
    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    if-ne v0, v1, :cond_0

    .line 265
    invoke-direct {p0, p1, p2, p4}, Lcom/bytedance/pangle/service/a/a;->a(Landroid/content/Intent;Lcom/bytedance/pangle/f;Ljava/lang/String;)Z

    move-result p1

    return p1

    .line 267
    :cond_0
    iget-object v0, p0, Lcom/bytedance/pangle/service/a/a;->a:Landroid/os/Handler;

    new-instance v7, Lcom/bytedance/pangle/service/a/a$3;

    move-object v1, v7

    move-object v2, p0

    move-object v3, p1

    move-object v4, p2

    move v5, p3

    move-object v6, p4

    invoke-direct/range {v1 .. v6}, Lcom/bytedance/pangle/service/a/a$3;-><init>(Lcom/bytedance/pangle/service/a/a;Landroid/content/Intent;Lcom/bytedance/pangle/f;ILjava/lang/String;)V

    invoke-virtual {v0, v7}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    const/4 p1, 0x1

    return p1
.end method

.method public asBinder()Landroid/os/IBinder;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public final b(Landroid/content/Intent;Ljava/lang/String;)Z
    .locals 1

    .line 206
    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object p2

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v0

    if-ne p2, v0, :cond_0

    .line 207
    invoke-static {}, Lcom/bytedance/pangle/service/a/a;->b()Lcom/bytedance/pangle/service/a/a;

    move-result-object p2

    invoke-virtual {p1}, Landroid/content/Intent;->getComponent()Landroid/content/ComponentName;

    move-result-object p1

    invoke-virtual {p2, p1}, Lcom/bytedance/pangle/service/a/a;->a(Landroid/content/ComponentName;)Z

    goto :goto_0

    .line 209
    :cond_0
    iget-object p2, p0, Lcom/bytedance/pangle/service/a/a;->a:Landroid/os/Handler;

    new-instance v0, Lcom/bytedance/pangle/service/a/a$2;

    invoke-direct {v0, p0, p1}, Lcom/bytedance/pangle/service/a/a$2;-><init>(Lcom/bytedance/pangle/service/a/a;Landroid/content/Intent;)V

    invoke-virtual {p2, v0}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    const/4 p1, 0x1

    return p1
.end method
