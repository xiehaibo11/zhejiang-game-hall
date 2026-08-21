.class public final Lcom/vivo/push/e;
.super Ljava/lang/Object;


# static fields
.field private static volatile a:Lcom/vivo/push/e;


# instance fields
.field private b:J

.field private c:J

.field private d:J

.field private e:J

.field private f:J

.field private g:J

.field private h:Landroid/content/Context;

.field private i:Z

.field private j:Lcom/vivo/push/util/b;

.field private k:Ljava/lang/String;

.field private l:Ljava/lang/String;

.field private m:Landroid/util/SparseArray;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/util/SparseArray<",
            "Lcom/vivo/push/e$a;",
            ">;"
        }
    .end annotation
.end field

.field private n:I

.field private o:Ljava/lang/Boolean;

.field private p:Ljava/lang/Long;

.field private q:Z

.field private r:Lcom/vivo/push/IPushClientFactory;

.field private s:I


# direct methods
.method private constructor <init>()V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-wide/16 v0, -0x1

    iput-wide v0, p0, Lcom/vivo/push/e;->b:J

    iput-wide v0, p0, Lcom/vivo/push/e;->c:J

    iput-wide v0, p0, Lcom/vivo/push/e;->d:J

    iput-wide v0, p0, Lcom/vivo/push/e;->e:J

    iput-wide v0, p0, Lcom/vivo/push/e;->f:J

    iput-wide v0, p0, Lcom/vivo/push/e;->g:J

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/vivo/push/e;->i:Z

    new-instance v0, Landroid/util/SparseArray;

    invoke-direct {v0}, Landroid/util/SparseArray;-><init>()V

    iput-object v0, p0, Lcom/vivo/push/e;->m:Landroid/util/SparseArray;

    const/4 v0, 0x0

    iput v0, p0, Lcom/vivo/push/e;->n:I

    new-instance v0, Lcom/vivo/push/d;

    invoke-direct {v0}, Lcom/vivo/push/d;-><init>()V

    iput-object v0, p0, Lcom/vivo/push/e;->r:Lcom/vivo/push/IPushClientFactory;

    return-void
.end method

.method static synthetic a(Lcom/vivo/push/e;)Landroid/content/Context;
    .locals 0

    iget-object p0, p0, Lcom/vivo/push/e;->h:Landroid/content/Context;

    return-object p0
.end method

.method private a(Lcom/vivo/push/b/b;Lcom/vivo/push/IPushActionListener;)Lcom/vivo/push/e$a;
    .locals 2

    new-instance v0, Lcom/vivo/push/e$a;

    invoke-direct {v0, p1, p2}, Lcom/vivo/push/e$a;-><init>(Lcom/vivo/push/b/c;Lcom/vivo/push/IPushActionListener;)V

    invoke-direct {p0, v0}, Lcom/vivo/push/e;->a(Lcom/vivo/push/e$a;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/vivo/push/b/b;->b(Ljava/lang/String;)V

    new-instance v1, Lcom/vivo/push/h;

    invoke-direct {v1, p0, p1, p2}, Lcom/vivo/push/h;-><init>(Lcom/vivo/push/e;Lcom/vivo/push/b/b;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/vivo/push/e$a;->a(Ljava/lang/Runnable;)V

    return-object v0
.end method

.method public static declared-synchronized a()Lcom/vivo/push/e;
    .locals 2

    const-class v0, Lcom/vivo/push/e;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/vivo/push/e;->a:Lcom/vivo/push/e;

    if-nez v1, :cond_0

    new-instance v1, Lcom/vivo/push/e;

    invoke-direct {v1}, Lcom/vivo/push/e;-><init>()V

    sput-object v1, Lcom/vivo/push/e;->a:Lcom/vivo/push/e;

    :cond_0
    sget-object v1, Lcom/vivo/push/e;->a:Lcom/vivo/push/e;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method

.method private declared-synchronized a(Lcom/vivo/push/e$a;)Ljava/lang/String;
    .locals 2

    monitor-enter p0

    :try_start_0
    iget-object v0, p0, Lcom/vivo/push/e;->m:Landroid/util/SparseArray;

    iget v1, p0, Lcom/vivo/push/e;->n:I

    invoke-virtual {v0, v1, p1}, Landroid/util/SparseArray;->put(ILjava/lang/Object;)V

    iget p1, p0, Lcom/vivo/push/e;->n:I

    add-int/lit8 v0, p1, 0x1

    iput v0, p0, Lcom/vivo/push/e;->n:I

    invoke-static {p1}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-object p1

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method static synthetic a(Lcom/vivo/push/e;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    iput-object p1, p0, Lcom/vivo/push/e;->k:Ljava/lang/String;

    return-object p1
.end method

.method private static a(J)Z
    .locals 4

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    const-wide/16 v2, -0x1

    cmp-long v2, p0, v2

    if-eqz v2, :cond_1

    cmp-long v2, v0, p0

    if-lez v2, :cond_1

    const-wide/16 v2, 0x7d0

    add-long/2addr p0, v2

    cmp-long p0, v0, p0

    if-ltz p0, :cond_0

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    return p0

    :cond_1
    :goto_0
    const/4 p0, 0x1

    return p0
.end method

.method static synthetic b(Lcom/vivo/push/e;)Lcom/vivo/push/util/b;
    .locals 0

    iget-object p0, p0, Lcom/vivo/push/e;->j:Lcom/vivo/push/util/b;

    return-object p0
.end method

.method static synthetic b(Lcom/vivo/push/e;Ljava/lang/String;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/vivo/push/e;->e(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic c(Lcom/vivo/push/e;Ljava/lang/String;)Lcom/vivo/push/e$a;
    .locals 0

    invoke-direct {p0, p1}, Lcom/vivo/push/e;->d(Ljava/lang/String;)Lcom/vivo/push/e$a;

    move-result-object p0

    return-object p0
.end method

.method static synthetic c(Lcom/vivo/push/e;)V
    .locals 0

    invoke-direct {p0}, Lcom/vivo/push/e;->m()V

    return-void
.end method

.method private c(Ljava/lang/String;)V
    .locals 1

    new-instance v0, Lcom/vivo/push/f;

    invoke-direct {v0, p0, p1}, Lcom/vivo/push/f;-><init>(Lcom/vivo/push/e;Ljava/lang/String;)V

    invoke-static {v0}, Lcom/vivo/push/m;->c(Ljava/lang/Runnable;)V

    return-void
.end method

.method private declared-synchronized d(Ljava/lang/String;)Lcom/vivo/push/e$a;
    .locals 2

    monitor-enter p0

    if-eqz p1, :cond_0

    :try_start_0
    invoke-static {p1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p1

    iget-object v0, p0, Lcom/vivo/push/e;->m:Landroid/util/SparseArray;

    invoke-virtual {v0, p1}, Landroid/util/SparseArray;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/vivo/push/e$a;

    iget-object v1, p0, Lcom/vivo/push/e;->m:Landroid/util/SparseArray;

    invoke-virtual {v1, p1}, Landroid/util/SparseArray;->delete(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-object v0

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1

    :catch_0
    :cond_0
    const/4 p1, 0x0

    monitor-exit p0

    return-object p1
.end method

.method static synthetic d(Lcom/vivo/push/e;)V
    .locals 1

    iget-object p0, p0, Lcom/vivo/push/e;->j:Lcom/vivo/push/util/b;

    const-string v0, "APP_TAGS"

    invoke-virtual {p0, v0}, Lcom/vivo/push/util/b;->b(Ljava/lang/String;)V

    return-void
.end method

.method private e(Ljava/lang/String;)V
    .locals 1

    new-instance v0, Lcom/vivo/push/k;

    invoke-direct {v0, p0, p1}, Lcom/vivo/push/k;-><init>(Lcom/vivo/push/e;Ljava/lang/String;)V

    invoke-static {v0}, Lcom/vivo/push/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method private m()V
    .locals 2

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/vivo/push/e;->l:Ljava/lang/String;

    iget-object v0, p0, Lcom/vivo/push/e;->j:Lcom/vivo/push/util/b;

    const-string v1, "APP_ALIAS"

    invoke-virtual {v0, v1}, Lcom/vivo/push/util/b;->b(Ljava/lang/String;)V

    return-void
.end method

.method private n()Z
    .locals 4

    iget-object v0, p0, Lcom/vivo/push/e;->o:Ljava/lang/Boolean;

    if-nez v0, :cond_1

    invoke-virtual {p0}, Lcom/vivo/push/e;->l()J

    move-result-wide v0

    const-wide/16 v2, 0x4ce

    cmp-long v0, v0, v2

    if-ltz v0, :cond_0

    iget-object v0, p0, Lcom/vivo/push/e;->h:Landroid/content/Context;

    invoke-static {v0}, Lcom/vivo/push/util/z;->d(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    iput-object v0, p0, Lcom/vivo/push/e;->o:Ljava/lang/Boolean;

    :cond_1
    iget-object v0, p0, Lcom/vivo/push/e;->o:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    return v0
.end method


# virtual methods
.method public final declared-synchronized a(Landroid/content/Context;)V
    .locals 2

    monitor-enter p0

    :try_start_0
    iget-object v0, p0, Lcom/vivo/push/e;->h:Landroid/content/Context;

    if-nez v0, :cond_0

    invoke-static {p1}, Lcom/vivo/push/util/ContextDelegate;->getContext(Landroid/content/Context;)Landroid/content/Context;

    move-result-object v0

    iput-object v0, p0, Lcom/vivo/push/e;->h:Landroid/content/Context;

    invoke-virtual {p1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/vivo/push/util/t;->c(Landroid/content/Context;Ljava/lang/String;)Z

    move-result p1

    iput-boolean p1, p0, Lcom/vivo/push/e;->q:Z

    invoke-static {}, Lcom/vivo/push/util/w;->b()Lcom/vivo/push/util/w;

    move-result-object p1

    iget-object v0, p0, Lcom/vivo/push/e;->h:Landroid/content/Context;

    invoke-virtual {p1, v0}, Lcom/vivo/push/util/w;->a(Landroid/content/Context;)V

    new-instance p1, Lcom/vivo/push/b/g;

    invoke-direct {p1}, Lcom/vivo/push/b/g;-><init>()V

    invoke-virtual {p0, p1}, Lcom/vivo/push/e;->a(Lcom/vivo/push/o;)V

    new-instance p1, Lcom/vivo/push/util/b;

    invoke-direct {p1}, Lcom/vivo/push/util/b;-><init>()V

    iput-object p1, p0, Lcom/vivo/push/e;->j:Lcom/vivo/push/util/b;

    iget-object v0, p0, Lcom/vivo/push/e;->h:Landroid/content/Context;

    const-string v1, "com.vivo.push_preferences.appconfig_v1"

    invoke-virtual {p1, v0, v1}, Lcom/vivo/push/util/b;->a(Landroid/content/Context;Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/vivo/push/e;->f()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/vivo/push/e;->k:Ljava/lang/String;

    iget-object p1, p0, Lcom/vivo/push/e;->j:Lcom/vivo/push/util/b;

    const-string v0, "APP_ALIAS"

    const/4 v1, 0x0

    invoke-virtual {p1, v0, v1}, Lcom/vivo/push/util/b;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/vivo/push/e;->l:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final a(Landroid/content/Intent;Lcom/vivo/push/sdk/PushMessageCallback;)V
    .locals 3

    iget-object v0, p0, Lcom/vivo/push/e;->r:Lcom/vivo/push/IPushClientFactory;

    invoke-interface {v0, p1}, Lcom/vivo/push/IPushClientFactory;->createReceiverCommand(Landroid/content/Intent;)Lcom/vivo/push/o;

    move-result-object p1

    invoke-static {}, Lcom/vivo/push/e;->a()Lcom/vivo/push/e;

    move-result-object v0

    iget-object v0, v0, Lcom/vivo/push/e;->h:Landroid/content/Context;

    const-string v1, "PushClientManager"

    if-nez p1, :cond_1

    const-string p1, "sendCommand, null command!"

    invoke-static {v1, p1}, Lcom/vivo/push/util/p;->a(Ljava/lang/String;Ljava/lang/String;)I

    if-eqz v0, :cond_0

    const-string p1, "[\u6267\u884c\u6307\u4ee4\u5931\u8d25]\u6307\u4ee4\u7a7a\uff01"

    invoke-static {v0, p1}, Lcom/vivo/push/util/p;->c(Landroid/content/Context;Ljava/lang/String;)V

    :cond_0
    return-void

    :cond_1
    iget-object v2, p0, Lcom/vivo/push/e;->r:Lcom/vivo/push/IPushClientFactory;

    invoke-interface {v2, p1}, Lcom/vivo/push/IPushClientFactory;->createReceiveTask(Lcom/vivo/push/o;)Lcom/vivo/push/d/z;

    move-result-object v2

    if-nez v2, :cond_3

    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p2

    const-string v2, "sendCommand, null command task! pushCommand = "

    invoke-virtual {v2, p2}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-static {v1, p2}, Lcom/vivo/push/util/p;->a(Ljava/lang/String;Ljava/lang/String;)I

    if-eqz v0, :cond_2

    new-instance p2, Ljava/lang/StringBuilder;

    const-string v1, "[\u6267\u884c\u6307\u4ee4\u5931\u8d25]\u6307\u4ee4"

    invoke-direct {p2, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p1, "\u4efb\u52a1\u7a7a\uff01"

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/vivo/push/util/p;->c(Landroid/content/Context;Ljava/lang/String;)V

    :cond_2
    return-void

    :cond_3
    if-eqz v0, :cond_4

    instance-of v1, p1, Lcom/vivo/push/b/n;

    if-nez v1, :cond_4

    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    const-string v1, "[\u63a5\u6536\u6307\u4ee4]"

    invoke-virtual {v1, p1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/vivo/push/util/p;->a(Landroid/content/Context;Ljava/lang/String;)V

    :cond_4
    invoke-virtual {v2, p2}, Lcom/vivo/push/d/z;->a(Lcom/vivo/push/sdk/PushMessageCallback;)V

    invoke-static {v2}, Lcom/vivo/push/m;->a(Lcom/vivo/push/l;)V

    return-void
.end method

.method final a(Lcom/vivo/push/IPushActionListener;)V
    .locals 5

    iget-object v0, p0, Lcom/vivo/push/e;->h:Landroid/content/Context;

    const/16 v1, 0x66

    if-nez v0, :cond_1

    if-eqz p1, :cond_0

    invoke-interface {p1, v1}, Lcom/vivo/push/IPushActionListener;->onStateChanged(I)V

    :cond_0
    return-void

    :cond_1
    invoke-virtual {p0}, Lcom/vivo/push/e;->f()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/vivo/push/e;->k:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v2, 0x0

    if-nez v0, :cond_3

    if-eqz p1, :cond_2

    invoke-interface {p1, v2}, Lcom/vivo/push/IPushActionListener;->onStateChanged(I)V

    :cond_2
    return-void

    :cond_3
    iget-wide v3, p0, Lcom/vivo/push/e;->b:J

    invoke-static {v3, v4}, Lcom/vivo/push/e;->a(J)Z

    move-result v0

    if-nez v0, :cond_5

    if-eqz p1, :cond_4

    const/16 v0, 0x3ea

    invoke-interface {p1, v0}, Lcom/vivo/push/IPushActionListener;->onStateChanged(I)V

    :cond_4
    return-void

    :cond_5
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v3

    iput-wide v3, p0, Lcom/vivo/push/e;->b:J

    iget-object v0, p0, Lcom/vivo/push/e;->h:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v0

    iget-object v3, p0, Lcom/vivo/push/e;->h:Landroid/content/Context;

    const/4 v4, 0x0

    if-nez v3, :cond_6

    if-eqz p1, :cond_a

    invoke-interface {p1, v1}, Lcom/vivo/push/IPushActionListener;->onStateChanged(I)V

    goto :goto_0

    :cond_6
    new-instance v1, Lcom/vivo/push/b/b;

    const/4 v3, 0x1

    invoke-direct {v1, v3, v0}, Lcom/vivo/push/b/b;-><init>(ZLjava/lang/String;)V

    invoke-virtual {v1}, Lcom/vivo/push/b/b;->g()V

    invoke-virtual {v1}, Lcom/vivo/push/b/b;->d()V

    invoke-virtual {v1}, Lcom/vivo/push/b/b;->e()V

    const/16 v0, 0x64

    invoke-virtual {v1, v0}, Lcom/vivo/push/b/b;->a(I)V

    iget-boolean v0, p0, Lcom/vivo/push/e;->q:Z

    if-eqz v0, :cond_7

    invoke-direct {p0}, Lcom/vivo/push/e;->n()Z

    move-result v0

    if-nez v0, :cond_8

    if-eqz p1, :cond_a

    const/16 v0, 0x65

    invoke-interface {p1, v0}, Lcom/vivo/push/IPushActionListener;->onStateChanged(I)V

    goto :goto_0

    :cond_7
    iget-object v0, p0, Lcom/vivo/push/e;->h:Landroid/content/Context;

    invoke-virtual {v1, v0}, Lcom/vivo/push/b/b;->a(Landroid/content/Context;)I

    move-result v0

    const/4 v3, 0x2

    if-ne v0, v3, :cond_9

    :cond_8
    invoke-direct {p0, v1, p1}, Lcom/vivo/push/e;->a(Lcom/vivo/push/b/b;Lcom/vivo/push/IPushActionListener;)Lcom/vivo/push/e$a;

    move-result-object v4

    goto :goto_0

    :cond_9
    invoke-virtual {p0, v1}, Lcom/vivo/push/e;->a(Lcom/vivo/push/o;)V

    if-eqz p1, :cond_a

    invoke-interface {p1, v2}, Lcom/vivo/push/IPushActionListener;->onStateChanged(I)V

    :cond_a
    :goto_0
    if-nez v4, :cond_b

    return-void

    :cond_b
    new-instance p1, Lcom/vivo/push/g;

    invoke-direct {p1, p0, v4}, Lcom/vivo/push/g;-><init>(Lcom/vivo/push/e;Lcom/vivo/push/e$a;)V

    invoke-virtual {v4, p1}, Lcom/vivo/push/e$a;->a(Lcom/vivo/push/IPushActionListener;)V

    invoke-virtual {v4}, Lcom/vivo/push/e$a;->a()V

    return-void
.end method

.method public final a(Lcom/vivo/push/o;)V
    .locals 4

    invoke-static {}, Lcom/vivo/push/e;->a()Lcom/vivo/push/e;

    move-result-object v0

    iget-object v0, v0, Lcom/vivo/push/e;->h:Landroid/content/Context;

    const-string v1, "PushClientManager"

    if-nez p1, :cond_1

    const-string p1, "sendCommand, null command!"

    invoke-static {v1, p1}, Lcom/vivo/push/util/p;->a(Ljava/lang/String;Ljava/lang/String;)I

    if-eqz v0, :cond_0

    const-string p1, "[\u6267\u884c\u6307\u4ee4\u5931\u8d25]\u6307\u4ee4\u7a7a\uff01"

    invoke-static {v0, p1}, Lcom/vivo/push/util/p;->c(Landroid/content/Context;Ljava/lang/String;)V

    :cond_0
    return-void

    :cond_1
    iget-object v2, p0, Lcom/vivo/push/e;->r:Lcom/vivo/push/IPushClientFactory;

    invoke-interface {v2, p1}, Lcom/vivo/push/IPushClientFactory;->createTask(Lcom/vivo/push/o;)Lcom/vivo/push/l;

    move-result-object v2

    if-nez v2, :cond_3

    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "sendCommand, null command task! pushCommand = "

    invoke-virtual {v3, v2}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/vivo/push/util/p;->a(Ljava/lang/String;Ljava/lang/String;)I

    if-eqz v0, :cond_2

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "[\u6267\u884c\u6307\u4ee4\u5931\u8d25]\u6307\u4ee4"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p1, "\u4efb\u52a1\u7a7a\uff01"

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/vivo/push/util/p;->c(Landroid/content/Context;Ljava/lang/String;)V

    :cond_2
    return-void

    :cond_3
    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "client--sendCommand, command = "

    invoke-virtual {v0, p1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/vivo/push/util/p;->d(Ljava/lang/String;Ljava/lang/String;)I

    invoke-static {v2}, Lcom/vivo/push/m;->a(Lcom/vivo/push/l;)V

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 2

    iput-object p1, p0, Lcom/vivo/push/e;->k:Ljava/lang/String;

    iget-object v0, p0, Lcom/vivo/push/e;->j:Lcom/vivo/push/util/b;

    const-string v1, "APP_TOKEN"

    invoke-virtual {v0, v1, p1}, Lcom/vivo/push/util/b;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final a(Ljava/lang/String;I)V
    .locals 1

    invoke-direct {p0, p1}, Lcom/vivo/push/e;->d(Ljava/lang/String;)Lcom/vivo/push/e$a;

    move-result-object p1

    if-eqz p1, :cond_0

    const/4 v0, 0x0

    new-array v0, v0, [Ljava/lang/Object;

    invoke-virtual {p1, p2, v0}, Lcom/vivo/push/e$a;->a(I[Ljava/lang/Object;)V

    return-void

    :cond_0
    const-string p1, "PushClientManager"

    const-string p2, "notifyStatusChanged token is null"

    invoke-static {p1, p2}, Lcom/vivo/push/util/p;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method public final varargs a(Ljava/lang/String;I[Ljava/lang/Object;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/vivo/push/e;->d(Ljava/lang/String;)Lcom/vivo/push/e$a;

    move-result-object p1

    if-eqz p1, :cond_0

    invoke-virtual {p1, p2, p3}, Lcom/vivo/push/e$a;->a(I[Ljava/lang/Object;)V

    return-void

    :cond_0
    const-string p1, "PushClientManager"

    const-string p2, "notifyApp token is null"

    invoke-static {p1, p2}, Lcom/vivo/push/util/p;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method final a(Ljava/lang/String;Lcom/vivo/push/IPushActionListener;)V
    .locals 5

    iget-object v0, p0, Lcom/vivo/push/e;->h:Landroid/content/Context;

    if-nez v0, :cond_1

    if-eqz p2, :cond_0

    const/16 p1, 0x66

    invoke-interface {p2, p1}, Lcom/vivo/push/IPushActionListener;->onStateChanged(I)V

    :cond_0
    return-void

    :cond_1
    iget-object v0, p0, Lcom/vivo/push/e;->l:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/vivo/push/e;->l:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    if-eqz p2, :cond_2

    invoke-interface {p2, v1}, Lcom/vivo/push/IPushActionListener;->onStateChanged(I)V

    :cond_2
    return-void

    :cond_3
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    new-instance v2, Lcom/vivo/push/b/a;

    const/4 v3, 0x1

    iget-object v4, p0, Lcom/vivo/push/e;->h:Landroid/content/Context;

    invoke-virtual {v4}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v4

    invoke-direct {v2, v3, v4, v0}, Lcom/vivo/push/b/a;-><init>(ZLjava/lang/String;Ljava/util/ArrayList;)V

    const/16 v0, 0x64

    invoke-virtual {v2, v0}, Lcom/vivo/push/b/a;->a(I)V

    iget-boolean v0, p0, Lcom/vivo/push/e;->q:Z

    if-eqz v0, :cond_b

    invoke-direct {p0}, Lcom/vivo/push/e;->n()Z

    move-result v0

    if-nez v0, :cond_5

    if-eqz p2, :cond_4

    const/16 p1, 0x65

    invoke-interface {p2, p1}, Lcom/vivo/push/IPushActionListener;->onStateChanged(I)V

    :cond_4
    return-void

    :cond_5
    iget-wide v0, p0, Lcom/vivo/push/e;->d:J

    invoke-static {v0, v1}, Lcom/vivo/push/e;->a(J)Z

    move-result v0

    if-nez v0, :cond_7

    if-eqz p2, :cond_6

    const/16 p1, 0x3ea

    invoke-interface {p2, p1}, Lcom/vivo/push/IPushActionListener;->onStateChanged(I)V

    :cond_6
    return-void

    :cond_7
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/vivo/push/e;->d:J

    new-instance v0, Lcom/vivo/push/e$a;

    invoke-direct {v0, v2, p2}, Lcom/vivo/push/e$a;-><init>(Lcom/vivo/push/b/c;Lcom/vivo/push/IPushActionListener;)V

    invoke-direct {p0, v0}, Lcom/vivo/push/e;->a(Lcom/vivo/push/e$a;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v2, p2}, Lcom/vivo/push/b/a;->b(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/vivo/push/e;->k:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_8

    const/16 p1, 0x7531

    invoke-virtual {p0, p2, p1}, Lcom/vivo/push/e;->a(Ljava/lang/String;I)V

    return-void

    :cond_8
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_9

    const/16 p1, 0x7532

    invoke-virtual {p0, p2, p1}, Lcom/vivo/push/e;->a(Ljava/lang/String;I)V

    return-void

    :cond_9
    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result p1

    int-to-long v0, p1

    const-wide/16 v3, 0x46

    cmp-long p1, v0, v3

    if-lez p1, :cond_a

    const/16 p1, 0x7533

    invoke-virtual {p0, p2, p1}, Lcom/vivo/push/e;->a(Ljava/lang/String;I)V

    return-void

    :cond_a
    invoke-virtual {p0, v2}, Lcom/vivo/push/e;->a(Lcom/vivo/push/o;)V

    invoke-direct {p0, p2}, Lcom/vivo/push/e;->e(Ljava/lang/String;)V

    return-void

    :cond_b
    invoke-virtual {p0, v2}, Lcom/vivo/push/e;->a(Lcom/vivo/push/o;)V

    if-eqz p2, :cond_c

    invoke-interface {p2, v1}, Lcom/vivo/push/IPushActionListener;->onStateChanged(I)V

    :cond_c
    return-void
.end method

.method final a(Ljava/util/ArrayList;Lcom/vivo/push/IPushActionListener;)V
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;",
            "Lcom/vivo/push/IPushActionListener;",
            ")V"
        }
    .end annotation

    iget-object v0, p0, Lcom/vivo/push/e;->h:Landroid/content/Context;

    if-nez v0, :cond_1

    if-eqz p2, :cond_0

    const/16 p1, 0x66

    invoke-interface {p2, p1}, Lcom/vivo/push/IPushActionListener;->onStateChanged(I)V

    :cond_0
    return-void

    :cond_1
    new-instance v0, Lcom/vivo/push/b/z;

    const/4 v1, 0x1

    iget-object v2, p0, Lcom/vivo/push/e;->h:Landroid/content/Context;

    invoke-virtual {v2}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v0, v1, v2, p1}, Lcom/vivo/push/b/z;-><init>(ZLjava/lang/String;Ljava/util/ArrayList;)V

    const/16 v1, 0x1f4

    invoke-virtual {v0, v1}, Lcom/vivo/push/b/z;->a(I)V

    iget-boolean v2, p0, Lcom/vivo/push/e;->q:Z

    if-eqz v2, :cond_b

    invoke-direct {p0}, Lcom/vivo/push/e;->n()Z

    move-result v2

    if-nez v2, :cond_3

    if-eqz p2, :cond_2

    const/16 p1, 0x65

    invoke-interface {p2, p1}, Lcom/vivo/push/IPushActionListener;->onStateChanged(I)V

    :cond_2
    return-void

    :cond_3
    iget-wide v2, p0, Lcom/vivo/push/e;->f:J

    invoke-static {v2, v3}, Lcom/vivo/push/e;->a(J)Z

    move-result v2

    if-nez v2, :cond_5

    if-eqz p2, :cond_4

    const/16 p1, 0x3ea

    invoke-interface {p2, p1}, Lcom/vivo/push/IPushActionListener;->onStateChanged(I)V

    :cond_4
    return-void

    :cond_5
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v2

    iput-wide v2, p0, Lcom/vivo/push/e;->f:J

    new-instance v2, Lcom/vivo/push/e$a;

    invoke-direct {v2, v0, p2}, Lcom/vivo/push/e$a;-><init>(Lcom/vivo/push/b/c;Lcom/vivo/push/IPushActionListener;)V

    invoke-direct {p0, v2}, Lcom/vivo/push/e;->a(Lcom/vivo/push/e$a;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p2}, Lcom/vivo/push/b/z;->b(Ljava/lang/String;)V

    iget-object v2, p0, Lcom/vivo/push/e;->k:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_6

    const/16 p1, 0x4e21

    invoke-virtual {p0, p2, p1}, Lcom/vivo/push/e;->a(Ljava/lang/String;I)V

    return-void

    :cond_6
    invoke-virtual {p1}, Ljava/util/ArrayList;->size()I

    move-result v2

    if-gez v2, :cond_7

    const/16 p1, 0x4e22

    invoke-virtual {p0, p2, p1}, Lcom/vivo/push/e;->a(Ljava/lang/String;I)V

    return-void

    :cond_7
    invoke-virtual {p0}, Lcom/vivo/push/e;->c()Ljava/util/List;

    move-result-object v2

    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v2

    invoke-virtual {p1}, Ljava/util/ArrayList;->size()I

    move-result v3

    add-int/2addr v3, v2

    if-le v3, v1, :cond_8

    const/16 p1, 0x4e24

    invoke-virtual {p0, p2, p1}, Lcom/vivo/push/e;->a(Ljava/lang/String;I)V

    return-void

    :cond_8
    invoke-virtual {p1}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_9
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_a

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v1

    int-to-long v1, v1

    const-wide/16 v3, 0x46

    cmp-long v1, v1, v3

    if-lez v1, :cond_9

    const/16 p1, 0x4e23

    invoke-virtual {p0, p2, p1}, Lcom/vivo/push/e;->a(Ljava/lang/String;I)V

    return-void

    :cond_a
    invoke-virtual {p0, v0}, Lcom/vivo/push/e;->a(Lcom/vivo/push/o;)V

    invoke-direct {p0, p2}, Lcom/vivo/push/e;->e(Ljava/lang/String;)V

    return-void

    :cond_b
    invoke-virtual {p0, v0}, Lcom/vivo/push/e;->a(Lcom/vivo/push/o;)V

    if-eqz p2, :cond_c

    const/4 p1, 0x0

    invoke-interface {p2, p1}, Lcom/vivo/push/IPushActionListener;->onStateChanged(I)V

    :cond_c
    return-void
.end method

.method public final a(Ljava/util/List;)V
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    const-string v0, "APP_TAGS"

    :try_start_0
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v1

    if-gtz v1, :cond_0

    return-void

    :cond_0
    iget-object v1, p0, Lcom/vivo/push/e;->j:Lcom/vivo/push/util/b;

    const/4 v2, 0x0

    invoke-virtual {v1, v0, v2}, Lcom/vivo/push/util/b;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    goto :goto_0

    :cond_1
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2, v1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    move-object v1, v2

    :goto_0
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_1
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_2

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    invoke-virtual {v1, v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    goto :goto_1

    :cond_2
    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_3

    iget-object p1, p0, Lcom/vivo/push/e;->j:Lcom/vivo/push/util/b;

    invoke-virtual {p1, v0}, Lcom/vivo/push/util/b;->b(Ljava/lang/String;)V

    return-void

    :cond_3
    iget-object v1, p0, Lcom/vivo/push/e;->j:Lcom/vivo/push/util/b;

    invoke-virtual {v1, v0, p1}, Lcom/vivo/push/util/b;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    iget-object p1, p0, Lcom/vivo/push/e;->j:Lcom/vivo/push/util/b;

    invoke-virtual {p1, v0}, Lcom/vivo/push/util/b;->b(Ljava/lang/String;)V

    return-void
.end method

.method protected final a(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/vivo/push/e;->i:Z

    return-void
.end method

.method protected final b()V
    .locals 1

    iget-object v0, p0, Lcom/vivo/push/e;->h:Landroid/content/Context;

    if-eqz v0, :cond_0

    invoke-static {v0}, Lcom/vivo/push/util/z;->b(Landroid/content/Context;)V

    :cond_0
    return-void
.end method

.method final b(Lcom/vivo/push/IPushActionListener;)V
    .locals 5

    iget-object v0, p0, Lcom/vivo/push/e;->h:Landroid/content/Context;

    const/16 v1, 0x66

    if-nez v0, :cond_1

    if-eqz p1, :cond_0

    invoke-interface {p1, v1}, Lcom/vivo/push/IPushActionListener;->onStateChanged(I)V

    :cond_0
    return-void

    :cond_1
    iget-object v0, p0, Lcom/vivo/push/e;->k:Ljava/lang/String;

    const-string v2, ""

    invoke-virtual {v2, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    const/4 v2, 0x0

    if-eqz v0, :cond_2

    invoke-interface {p1, v2}, Lcom/vivo/push/IPushActionListener;->onStateChanged(I)V

    return-void

    :cond_2
    iget-wide v3, p0, Lcom/vivo/push/e;->c:J

    invoke-static {v3, v4}, Lcom/vivo/push/e;->a(J)Z

    move-result v0

    if-nez v0, :cond_4

    if-eqz p1, :cond_3

    const/16 v0, 0x3ea

    invoke-interface {p1, v0}, Lcom/vivo/push/IPushActionListener;->onStateChanged(I)V

    :cond_3
    return-void

    :cond_4
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v3

    iput-wide v3, p0, Lcom/vivo/push/e;->c:J

    iget-object v0, p0, Lcom/vivo/push/e;->h:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v0

    iget-object v3, p0, Lcom/vivo/push/e;->h:Landroid/content/Context;

    const/4 v4, 0x0

    if-nez v3, :cond_5

    if-eqz p1, :cond_9

    invoke-interface {p1, v1}, Lcom/vivo/push/IPushActionListener;->onStateChanged(I)V

    goto :goto_0

    :cond_5
    new-instance v1, Lcom/vivo/push/b/b;

    invoke-direct {v1, v2, v0}, Lcom/vivo/push/b/b;-><init>(ZLjava/lang/String;)V

    invoke-virtual {v1}, Lcom/vivo/push/b/b;->d()V

    invoke-virtual {v1}, Lcom/vivo/push/b/b;->e()V

    invoke-virtual {v1}, Lcom/vivo/push/b/b;->g()V

    const/16 v0, 0x64

    invoke-virtual {v1, v0}, Lcom/vivo/push/b/b;->a(I)V

    iget-boolean v0, p0, Lcom/vivo/push/e;->q:Z

    if-eqz v0, :cond_7

    invoke-direct {p0}, Lcom/vivo/push/e;->n()Z

    move-result v0

    if-nez v0, :cond_6

    if-eqz p1, :cond_9

    const/16 v0, 0x65

    invoke-interface {p1, v0}, Lcom/vivo/push/IPushActionListener;->onStateChanged(I)V

    goto :goto_0

    :cond_6
    new-instance v4, Lcom/vivo/push/e$a;

    invoke-direct {v4, v1, p1}, Lcom/vivo/push/e$a;-><init>(Lcom/vivo/push/b/c;Lcom/vivo/push/IPushActionListener;)V

    invoke-direct {p0, v4}, Lcom/vivo/push/e;->a(Lcom/vivo/push/e$a;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Lcom/vivo/push/b/b;->b(Ljava/lang/String;)V

    new-instance v0, Lcom/vivo/push/j;

    invoke-direct {v0, p0, v1, p1}, Lcom/vivo/push/j;-><init>(Lcom/vivo/push/e;Lcom/vivo/push/b/b;Ljava/lang/String;)V

    invoke-virtual {v4, v0}, Lcom/vivo/push/e$a;->a(Ljava/lang/Runnable;)V

    goto :goto_0

    :cond_7
    iget-object v0, p0, Lcom/vivo/push/e;->h:Landroid/content/Context;

    invoke-virtual {v1, v0}, Lcom/vivo/push/b/b;->a(Landroid/content/Context;)I

    move-result v0

    const/4 v3, 0x2

    if-ne v0, v3, :cond_8

    invoke-direct {p0, v1, p1}, Lcom/vivo/push/e;->a(Lcom/vivo/push/b/b;Lcom/vivo/push/IPushActionListener;)Lcom/vivo/push/e$a;

    move-result-object v4

    goto :goto_0

    :cond_8
    invoke-virtual {p0, v1}, Lcom/vivo/push/e;->a(Lcom/vivo/push/o;)V

    if-eqz p1, :cond_9

    invoke-interface {p1, v2}, Lcom/vivo/push/IPushActionListener;->onStateChanged(I)V

    :cond_9
    :goto_0
    if-nez v4, :cond_a

    return-void

    :cond_a
    new-instance p1, Lcom/vivo/push/i;

    invoke-direct {p1, p0}, Lcom/vivo/push/i;-><init>(Lcom/vivo/push/e;)V

    invoke-virtual {v4, p1}, Lcom/vivo/push/e$a;->a(Lcom/vivo/push/IPushActionListener;)V

    invoke-virtual {v4}, Lcom/vivo/push/e$a;->a()V

    return-void
.end method

.method public final b(Ljava/lang/String;)V
    .locals 2

    iput-object p1, p0, Lcom/vivo/push/e;->l:Ljava/lang/String;

    iget-object v0, p0, Lcom/vivo/push/e;->j:Lcom/vivo/push/util/b;

    const-string v1, "APP_ALIAS"

    invoke-virtual {v0, v1, p1}, Lcom/vivo/push/util/b;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method final b(Ljava/lang/String;Lcom/vivo/push/IPushActionListener;)V
    .locals 5

    iget-object v0, p0, Lcom/vivo/push/e;->h:Landroid/content/Context;

    if-nez v0, :cond_1

    if-eqz p2, :cond_0

    const/16 p1, 0x66

    invoke-interface {p2, p1}, Lcom/vivo/push/IPushActionListener;->onStateChanged(I)V

    :cond_0
    return-void

    :cond_1
    iget-object v0, p0, Lcom/vivo/push/e;->l:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_3

    if-eqz p2, :cond_2

    invoke-interface {p2, v1}, Lcom/vivo/push/IPushActionListener;->onStateChanged(I)V

    :cond_2
    return-void

    :cond_3
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    new-instance v2, Lcom/vivo/push/b/a;

    iget-object v3, p0, Lcom/vivo/push/e;->h:Landroid/content/Context;

    invoke-virtual {v3}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v3

    invoke-direct {v2, v1, v3, v0}, Lcom/vivo/push/b/a;-><init>(ZLjava/lang/String;Ljava/util/ArrayList;)V

    const/16 v0, 0x64

    invoke-virtual {v2, v0}, Lcom/vivo/push/b/a;->a(I)V

    iget-boolean v0, p0, Lcom/vivo/push/e;->q:Z

    if-eqz v0, :cond_b

    invoke-direct {p0}, Lcom/vivo/push/e;->n()Z

    move-result v0

    if-nez v0, :cond_5

    if-eqz p2, :cond_4

    const/16 p1, 0x65

    invoke-interface {p2, p1}, Lcom/vivo/push/IPushActionListener;->onStateChanged(I)V

    :cond_4
    return-void

    :cond_5
    iget-wide v0, p0, Lcom/vivo/push/e;->e:J

    invoke-static {v0, v1}, Lcom/vivo/push/e;->a(J)Z

    move-result v0

    if-nez v0, :cond_7

    if-eqz p2, :cond_6

    const/16 p1, 0x3ea

    invoke-interface {p2, p1}, Lcom/vivo/push/IPushActionListener;->onStateChanged(I)V

    :cond_6
    return-void

    :cond_7
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/vivo/push/e;->e:J

    new-instance v0, Lcom/vivo/push/e$a;

    invoke-direct {v0, v2, p2}, Lcom/vivo/push/e$a;-><init>(Lcom/vivo/push/b/c;Lcom/vivo/push/IPushActionListener;)V

    invoke-direct {p0, v0}, Lcom/vivo/push/e;->a(Lcom/vivo/push/e$a;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v2, p2}, Lcom/vivo/push/b/a;->b(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/vivo/push/e;->k:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_8

    const/16 p1, 0x7531

    invoke-virtual {p0, p2, p1}, Lcom/vivo/push/e;->a(Ljava/lang/String;I)V

    return-void

    :cond_8
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_9

    const/16 p1, 0x7532

    invoke-virtual {p0, p2, p1}, Lcom/vivo/push/e;->a(Ljava/lang/String;I)V

    return-void

    :cond_9
    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result p1

    int-to-long v0, p1

    const-wide/16 v3, 0x46

    cmp-long p1, v0, v3

    if-lez p1, :cond_a

    const/16 p1, 0x7533

    invoke-virtual {p0, p2, p1}, Lcom/vivo/push/e;->a(Ljava/lang/String;I)V

    return-void

    :cond_a
    invoke-virtual {p0, v2}, Lcom/vivo/push/e;->a(Lcom/vivo/push/o;)V

    invoke-direct {p0, p2}, Lcom/vivo/push/e;->e(Ljava/lang/String;)V

    return-void

    :cond_b
    invoke-virtual {p0, v2}, Lcom/vivo/push/e;->a(Lcom/vivo/push/o;)V

    if-eqz p2, :cond_c

    invoke-interface {p2, v1}, Lcom/vivo/push/IPushActionListener;->onStateChanged(I)V

    :cond_c
    return-void
.end method

.method final b(Ljava/util/ArrayList;Lcom/vivo/push/IPushActionListener;)V
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;",
            "Lcom/vivo/push/IPushActionListener;",
            ")V"
        }
    .end annotation

    iget-object v0, p0, Lcom/vivo/push/e;->h:Landroid/content/Context;

    if-nez v0, :cond_1

    if-eqz p2, :cond_0

    const/16 p1, 0x66

    invoke-interface {p2, p1}, Lcom/vivo/push/IPushActionListener;->onStateChanged(I)V

    :cond_0
    return-void

    :cond_1
    new-instance v0, Lcom/vivo/push/b/z;

    iget-object v1, p0, Lcom/vivo/push/e;->h:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    invoke-direct {v0, v2, v1, p1}, Lcom/vivo/push/b/z;-><init>(ZLjava/lang/String;Ljava/util/ArrayList;)V

    const/16 v1, 0x1f4

    invoke-virtual {v0, v1}, Lcom/vivo/push/b/z;->a(I)V

    iget-boolean v3, p0, Lcom/vivo/push/e;->q:Z

    if-eqz v3, :cond_b

    invoke-direct {p0}, Lcom/vivo/push/e;->n()Z

    move-result v2

    if-nez v2, :cond_3

    if-eqz p2, :cond_2

    const/16 p1, 0x65

    invoke-interface {p2, p1}, Lcom/vivo/push/IPushActionListener;->onStateChanged(I)V

    :cond_2
    return-void

    :cond_3
    iget-wide v2, p0, Lcom/vivo/push/e;->g:J

    invoke-static {v2, v3}, Lcom/vivo/push/e;->a(J)Z

    move-result v2

    if-nez v2, :cond_5

    if-eqz p2, :cond_4

    const/16 p1, 0x3ea

    invoke-interface {p2, p1}, Lcom/vivo/push/IPushActionListener;->onStateChanged(I)V

    :cond_4
    return-void

    :cond_5
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v2

    iput-wide v2, p0, Lcom/vivo/push/e;->g:J

    new-instance v2, Lcom/vivo/push/e$a;

    invoke-direct {v2, v0, p2}, Lcom/vivo/push/e$a;-><init>(Lcom/vivo/push/b/c;Lcom/vivo/push/IPushActionListener;)V

    invoke-direct {p0, v2}, Lcom/vivo/push/e;->a(Lcom/vivo/push/e$a;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p2}, Lcom/vivo/push/b/z;->b(Ljava/lang/String;)V

    iget-object v2, p0, Lcom/vivo/push/e;->k:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_6

    const/16 p1, 0x4e21

    invoke-virtual {p0, p2, p1}, Lcom/vivo/push/e;->a(Ljava/lang/String;I)V

    return-void

    :cond_6
    invoke-virtual {p1}, Ljava/util/ArrayList;->size()I

    move-result v2

    if-gez v2, :cond_7

    const/16 p1, 0x4e22

    invoke-virtual {p0, p2, p1}, Lcom/vivo/push/e;->a(Ljava/lang/String;I)V

    return-void

    :cond_7
    invoke-virtual {p1}, Ljava/util/ArrayList;->size()I

    move-result v2

    if-le v2, v1, :cond_8

    const/16 p1, 0x4e24

    invoke-virtual {p0, p2, p1}, Lcom/vivo/push/e;->a(Ljava/lang/String;I)V

    return-void

    :cond_8
    invoke-virtual {p1}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_9
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_a

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v1

    int-to-long v1, v1

    const-wide/16 v3, 0x46

    cmp-long v1, v1, v3

    if-lez v1, :cond_9

    const/16 p1, 0x4e23

    invoke-virtual {p0, p2, p1}, Lcom/vivo/push/e;->a(Ljava/lang/String;I)V

    return-void

    :cond_a
    invoke-virtual {p0, v0}, Lcom/vivo/push/e;->a(Lcom/vivo/push/o;)V

    invoke-direct {p0, p2}, Lcom/vivo/push/e;->e(Ljava/lang/String;)V

    return-void

    :cond_b
    invoke-virtual {p0, v0}, Lcom/vivo/push/e;->a(Lcom/vivo/push/o;)V

    if-eqz p2, :cond_c

    invoke-interface {p2, v2}, Lcom/vivo/push/IPushActionListener;->onStateChanged(I)V

    :cond_c
    return-void
.end method

.method public final b(Ljava/util/List;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    const-string v0, "APP_TAGS"

    :try_start_0
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v1

    if-gtz v1, :cond_0

    return-void

    :cond_0
    iget-object v1, p0, Lcom/vivo/push/e;->j:Lcom/vivo/push/util/b;

    const/4 v2, 0x0

    invoke-virtual {v1, v0, v2}, Lcom/vivo/push/util/b;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    goto :goto_0

    :cond_1
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2, v1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    move-object v1, v2

    :goto_0
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_1
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_2

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->remove(Ljava/lang/String;)Ljava/lang/Object;

    goto :goto_1

    :cond_2
    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_3

    iget-object p1, p0, Lcom/vivo/push/e;->j:Lcom/vivo/push/util/b;

    invoke-virtual {p1, v0}, Lcom/vivo/push/util/b;->b(Ljava/lang/String;)V

    return-void

    :cond_3
    iget-object v1, p0, Lcom/vivo/push/e;->j:Lcom/vivo/push/util/b;

    invoke-virtual {v1, v0, p1}, Lcom/vivo/push/util/b;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    iget-object p1, p0, Lcom/vivo/push/e;->j:Lcom/vivo/push/util/b;

    invoke-virtual {p1, v0}, Lcom/vivo/push/util/b;->b(Ljava/lang/String;)V

    return-void
.end method

.method public final c()Ljava/util/List;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    iget-object v0, p0, Lcom/vivo/push/e;->j:Lcom/vivo/push/util/b;

    const-string v1, "APP_TAGS"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Lcom/vivo/push/util/b;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    :try_start_0
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    return-object v2

    :cond_0
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3, v0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v3}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    invoke-interface {v2, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    iget-object v0, p0, Lcom/vivo/push/e;->j:Lcom/vivo/push/util/b;

    invoke-virtual {v0, v1}, Lcom/vivo/push/util/b;->b(Ljava/lang/String;)V

    invoke-interface {v2}, Ljava/util/List;->clear()V

    const-string v0, "PushClientManager"

    const-string v1, "getTags error"

    invoke-static {v0, v1}, Lcom/vivo/push/util/p;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    return-object v2
.end method

.method public final c(Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    iget-object v0, p0, Lcom/vivo/push/e;->l:Ljava/lang/String;

    invoke-interface {p1, v0}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    invoke-direct {p0}, Lcom/vivo/push/e;->m()V

    :cond_0
    return-void
.end method

.method public final d()Z
    .locals 2

    iget-object v0, p0, Lcom/vivo/push/e;->h:Landroid/content/Context;

    if-nez v0, :cond_0

    const-string v0, "PushClientManager"

    const-string v1, "support:context is null"

    invoke-static {v0, v1}, Lcom/vivo/push/util/p;->d(Ljava/lang/String;Ljava/lang/String;)I

    const/4 v0, 0x0

    return v0

    :cond_0
    invoke-direct {p0}, Lcom/vivo/push/e;->n()Z

    move-result v0

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    iput-object v0, p0, Lcom/vivo/push/e;->o:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    return v0
.end method

.method public final e()Z
    .locals 1

    iget-boolean v0, p0, Lcom/vivo/push/e;->q:Z

    return v0
.end method

.method public final f()Ljava/lang/String;
    .locals 3

    iget-object v0, p0, Lcom/vivo/push/e;->k:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/vivo/push/e;->k:Ljava/lang/String;

    return-object v0

    :cond_0
    iget-object v0, p0, Lcom/vivo/push/e;->j:Lcom/vivo/push/util/b;

    if-eqz v0, :cond_1

    const/4 v1, 0x0

    const-string v2, "APP_TOKEN"

    invoke-virtual {v0, v2, v1}, Lcom/vivo/push/util/b;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_1
    const-string v0, ""

    :goto_0
    invoke-direct {p0, v0}, Lcom/vivo/push/e;->c(Ljava/lang/String;)V

    return-object v0
.end method

.method public final g()Z
    .locals 1

    iget-boolean v0, p0, Lcom/vivo/push/e;->i:Z

    return v0
.end method

.method public final h()Landroid/content/Context;
    .locals 1

    iget-object v0, p0, Lcom/vivo/push/e;->h:Landroid/content/Context;

    return-object v0
.end method

.method public final i()V
    .locals 1

    iget-object v0, p0, Lcom/vivo/push/e;->j:Lcom/vivo/push/util/b;

    invoke-virtual {v0}, Lcom/vivo/push/util/b;->a()V

    return-void
.end method

.method public final j()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/vivo/push/e;->l:Ljava/lang/String;

    return-object v0
.end method

.method public final k()I
    .locals 1

    iget v0, p0, Lcom/vivo/push/e;->s:I

    return v0
.end method

.method public final l()J
    .locals 2

    iget-object v0, p0, Lcom/vivo/push/e;->h:Landroid/content/Context;

    if-nez v0, :cond_0

    const-wide/16 v0, -0x1

    return-wide v0

    :cond_0
    iget-object v1, p0, Lcom/vivo/push/e;->p:Ljava/lang/Long;

    if-nez v1, :cond_1

    invoke-static {v0}, Lcom/vivo/push/util/z;->a(Landroid/content/Context;)J

    move-result-wide v0

    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v0

    iput-object v0, p0, Lcom/vivo/push/e;->p:Ljava/lang/Long;

    :cond_1
    iget-object v0, p0, Lcom/vivo/push/e;->p:Ljava/lang/Long;

    invoke-virtual {v0}, Ljava/lang/Long;->longValue()J

    move-result-wide v0

    return-wide v0
.end method
