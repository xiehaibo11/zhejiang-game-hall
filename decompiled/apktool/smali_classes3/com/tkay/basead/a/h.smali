.class public Lcom/tkay/basead/a/h;
.super Ljava/lang/Object;


# static fields
.field private static volatile b:Lcom/tkay/basead/a/h;


# instance fields
.field a:Lcom/tkay/basead/a/g;

.field private c:Landroid/content/Context;

.field private d:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Lcom/tkay/core/common/f/h;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method private constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 31
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 32
    iput-object p1, p0, Lcom/tkay/basead/a/h;->c:Landroid/content/Context;

    .line 33
    new-instance p1, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {p1}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object p1, p0, Lcom/tkay/basead/a/h;->d:Ljava/util/concurrent/ConcurrentHashMap;

    return-void
.end method

.method public static a(Landroid/content/Context;)Lcom/tkay/basead/a/h;
    .locals 2

    .line 37
    sget-object v0, Lcom/tkay/basead/a/h;->b:Lcom/tkay/basead/a/h;

    if-nez v0, :cond_1

    .line 38
    const-class v0, Lcom/tkay/basead/a/h;

    monitor-enter v0

    .line 39
    :try_start_0
    sget-object v1, Lcom/tkay/basead/a/h;->b:Lcom/tkay/basead/a/h;

    if-nez v1, :cond_0

    .line 40
    new-instance v1, Lcom/tkay/basead/a/h;

    invoke-direct {v1, p0}, Lcom/tkay/basead/a/h;-><init>(Landroid/content/Context;)V

    sput-object v1, Lcom/tkay/basead/a/h;->b:Lcom/tkay/basead/a/h;

    .line 41
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0

    .line 43
    :cond_1
    :goto_0
    sget-object p0, Lcom/tkay/basead/a/h;->b:Lcom/tkay/basead/a/h;

    return-object p0
.end method

.method private b()V
    .locals 2

    .line 64
    iget-object v0, p0, Lcom/tkay/basead/a/h;->a:Lcom/tkay/basead/a/g;

    if-eqz v0, :cond_0

    .line 65
    iget-object v0, p0, Lcom/tkay/basead/a/h;->c:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/core/common/m;->a(Landroid/content/Context;)Lcom/tkay/core/common/m;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/basead/a/h;->a:Lcom/tkay/basead/a/g;

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/m;->a(Landroid/content/BroadcastReceiver;)V

    const/4 v0, 0x0

    .line 66
    iput-object v0, p0, Lcom/tkay/basead/a/h;->a:Lcom/tkay/basead/a/g;

    :cond_0
    return-void
.end method


# virtual methods
.method public final a()V
    .locals 3

    .line 47
    iget-object v0, p0, Lcom/tkay/basead/a/h;->c:Landroid/content/Context;

    if-nez v0, :cond_0

    return-void

    .line 50
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/a/h;->a:Lcom/tkay/basead/a/g;

    if-nez v0, :cond_1

    .line 51
    new-instance v0, Lcom/tkay/basead/a/g;

    invoke-direct {v0}, Lcom/tkay/basead/a/g;-><init>()V

    iput-object v0, p0, Lcom/tkay/basead/a/h;->a:Lcom/tkay/basead/a/g;

    .line 53
    new-instance v0, Landroid/content/IntentFilter;

    invoke-direct {v0}, Landroid/content/IntentFilter;-><init>()V

    const-string v1, "action_offer_download_start"

    .line 54
    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    const-string v1, "action_offer_download_end"

    .line 55
    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    const-string v1, "action_offer_install_start"

    .line 56
    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    const-string v1, "action_offer_install_successful"

    .line 57
    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 59
    iget-object v1, p0, Lcom/tkay/basead/a/h;->c:Landroid/content/Context;

    invoke-static {v1}, Lcom/tkay/core/common/m;->a(Landroid/content/Context;)Lcom/tkay/core/common/m;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/basead/a/h;->a:Lcom/tkay/basead/a/g;

    invoke-virtual {v1, v2, v0}, Lcom/tkay/core/common/m;->a(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)V

    :cond_1
    return-void
.end method

.method public final a(Ljava/lang/String;Lcom/tkay/core/common/f/h;)V
    .locals 1

    .line 71
    iget-object v0, p0, Lcom/tkay/basead/a/h;->d:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1, p2}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 75
    iget-object v0, p0, Lcom/tkay/basead/a/h;->d:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/core/common/f/h;

    if-eqz p1, :cond_0

    .line 77
    new-instance v0, Lcom/tkay/basead/c/i;

    const-string v1, ""

    invoke-direct {v0, v1, v1}, Lcom/tkay/basead/c/i;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 78
    new-instance v1, Lcom/tkay/basead/c/b;

    invoke-direct {v1}, Lcom/tkay/basead/c/b;-><init>()V

    iput-object v1, v0, Lcom/tkay/basead/c/i;->i:Lcom/tkay/basead/c/b;

    .line 79
    iget-object v1, v0, Lcom/tkay/basead/c/i;->i:Lcom/tkay/basead/c/b;

    iput-object p2, v1, Lcom/tkay/basead/c/b;->a:Ljava/lang/String;

    const/16 p2, 0x12

    .line 80
    invoke-static {p2, p1, v0}, Lcom/tkay/basead/a/b;->a(ILcom/tkay/core/common/f/h;Lcom/tkay/basead/c/i;)V

    :cond_0
    return-void
.end method

.method public final b(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 85
    iget-object v0, p0, Lcom/tkay/basead/a/h;->d:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/core/common/f/h;

    if-eqz p1, :cond_0

    .line 87
    new-instance v0, Lcom/tkay/basead/c/i;

    const-string v1, ""

    invoke-direct {v0, v1, v1}, Lcom/tkay/basead/c/i;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 88
    new-instance v1, Lcom/tkay/basead/c/b;

    invoke-direct {v1}, Lcom/tkay/basead/c/b;-><init>()V

    iput-object v1, v0, Lcom/tkay/basead/c/i;->i:Lcom/tkay/basead/c/b;

    .line 89
    iget-object v1, v0, Lcom/tkay/basead/c/i;->i:Lcom/tkay/basead/c/b;

    iput-object p2, v1, Lcom/tkay/basead/c/b;->a:Ljava/lang/String;

    const/16 p2, 0x13

    .line 90
    invoke-static {p2, p1, v0}, Lcom/tkay/basead/a/b;->a(ILcom/tkay/core/common/f/h;Lcom/tkay/basead/c/i;)V

    :cond_0
    return-void
.end method

.method public final c(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 95
    iget-object v0, p0, Lcom/tkay/basead/a/h;->d:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/core/common/f/h;

    if-eqz p1, :cond_0

    .line 97
    new-instance v0, Lcom/tkay/basead/c/i;

    const-string v1, ""

    invoke-direct {v0, v1, v1}, Lcom/tkay/basead/c/i;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 98
    new-instance v1, Lcom/tkay/basead/c/b;

    invoke-direct {v1}, Lcom/tkay/basead/c/b;-><init>()V

    iput-object v1, v0, Lcom/tkay/basead/c/i;->i:Lcom/tkay/basead/c/b;

    .line 99
    iget-object v1, v0, Lcom/tkay/basead/c/i;->i:Lcom/tkay/basead/c/b;

    iput-object p2, v1, Lcom/tkay/basead/c/b;->a:Ljava/lang/String;

    const/16 p2, 0x14

    .line 100
    invoke-static {p2, p1, v0}, Lcom/tkay/basead/a/b;->a(ILcom/tkay/core/common/f/h;Lcom/tkay/basead/c/i;)V

    :cond_0
    return-void
.end method

.method public final d(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 105
    iget-object v0, p0, Lcom/tkay/basead/a/h;->d:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/core/common/f/h;

    if-eqz p1, :cond_0

    .line 107
    new-instance v0, Lcom/tkay/basead/c/i;

    const-string v1, ""

    invoke-direct {v0, v1, v1}, Lcom/tkay/basead/c/i;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 108
    new-instance v1, Lcom/tkay/basead/c/b;

    invoke-direct {v1}, Lcom/tkay/basead/c/b;-><init>()V

    iput-object v1, v0, Lcom/tkay/basead/c/i;->i:Lcom/tkay/basead/c/b;

    .line 109
    iget-object v1, v0, Lcom/tkay/basead/c/i;->i:Lcom/tkay/basead/c/b;

    iput-object p2, v1, Lcom/tkay/basead/c/b;->a:Ljava/lang/String;

    const/16 p2, 0x15

    .line 110
    invoke-static {p2, p1, v0}, Lcom/tkay/basead/a/b;->a(ILcom/tkay/core/common/f/h;Lcom/tkay/basead/c/i;)V

    .line 113
    :cond_0
    iget-object p1, p0, Lcom/tkay/basead/a/h;->d:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p1}, Ljava/util/concurrent/ConcurrentHashMap;->size()I

    move-result p1

    if-nez p1, :cond_1

    .line 1064
    iget-object p1, p0, Lcom/tkay/basead/a/h;->a:Lcom/tkay/basead/a/g;

    if-eqz p1, :cond_1

    .line 1065
    iget-object p1, p0, Lcom/tkay/basead/a/h;->c:Landroid/content/Context;

    invoke-static {p1}, Lcom/tkay/core/common/m;->a(Landroid/content/Context;)Lcom/tkay/core/common/m;

    move-result-object p1

    iget-object p2, p0, Lcom/tkay/basead/a/h;->a:Lcom/tkay/basead/a/g;

    invoke-virtual {p1, p2}, Lcom/tkay/core/common/m;->a(Landroid/content/BroadcastReceiver;)V

    const/4 p1, 0x0

    .line 1066
    iput-object p1, p0, Lcom/tkay/basead/a/h;->a:Lcom/tkay/basead/a/g;

    :cond_1
    return-void
.end method
