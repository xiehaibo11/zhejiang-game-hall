.class public Lcom/reyun/tracking/b/a;
.super Ljava/lang/Object;


# instance fields
.field private a:Landroid/content/Context;

.field private b:Landroid/content/ServiceConnection;

.field private c:Lcom/reyun/tracking/b/e;

.field private d:Lcom/reyun/tracking/b/d;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/reyun/tracking/b/a;->a:Landroid/content/Context;

    return-void
.end method

.method static synthetic a(Lcom/reyun/tracking/b/a;)Lcom/reyun/tracking/b/e;
    .locals 0

    iget-object p0, p0, Lcom/reyun/tracking/b/a;->c:Lcom/reyun/tracking/b/e;

    return-object p0
.end method

.method static synthetic a(Lcom/reyun/tracking/b/a;Lcom/reyun/tracking/b/e;)Lcom/reyun/tracking/b/e;
    .locals 0

    iput-object p1, p0, Lcom/reyun/tracking/b/a;->c:Lcom/reyun/tracking/b/e;

    return-object p1
.end method

.method private a()Z
    .locals 4

    iget-object v0, p0, Lcom/reyun/tracking/b/a;->a:Landroid/content/Context;

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return v0

    :cond_0
    new-instance v0, Lcom/reyun/tracking/b/c;

    const/4 v1, 0x0

    invoke-direct {v0, p0, v1}, Lcom/reyun/tracking/b/c;-><init>(Lcom/reyun/tracking/b/a;Lcom/reyun/tracking/b/b;)V

    iput-object v0, p0, Lcom/reyun/tracking/b/a;->b:Landroid/content/ServiceConnection;

    new-instance v0, Landroid/content/Intent;

    const-string v1, "com.uodis.opendevice.OPENIDS_SERVICE"

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    const-string v1, "com.huawei.hwid"

    invoke-virtual {v0, v1}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;

    iget-object v1, p0, Lcom/reyun/tracking/b/a;->a:Landroid/content/Context;

    iget-object v2, p0, Lcom/reyun/tracking/b/a;->b:Landroid/content/ServiceConnection;

    const/4 v3, 0x1

    invoke-virtual {v1, v0, v2, v3}, Landroid/content/Context;->bindService(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z

    move-result v0

    return v0
.end method

.method static synthetic b(Lcom/reyun/tracking/b/a;)Lcom/reyun/tracking/b/d;
    .locals 0

    iget-object p0, p0, Lcom/reyun/tracking/b/a;->d:Lcom/reyun/tracking/b/d;

    return-object p0
.end method

.method private b()V
    .locals 2

    iget-object v0, p0, Lcom/reyun/tracking/b/a;->a:Landroid/content/Context;

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v1, p0, Lcom/reyun/tracking/b/a;->b:Landroid/content/ServiceConnection;

    if-eqz v1, :cond_1

    invoke-virtual {v0, v1}, Landroid/content/Context;->unbindService(Landroid/content/ServiceConnection;)V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/reyun/tracking/b/a;->c:Lcom/reyun/tracking/b/e;

    iput-object v0, p0, Lcom/reyun/tracking/b/a;->a:Landroid/content/Context;

    iput-object v0, p0, Lcom/reyun/tracking/b/a;->d:Lcom/reyun/tracking/b/d;

    :cond_1
    return-void
.end method

.method static synthetic c(Lcom/reyun/tracking/b/a;)V
    .locals 0

    invoke-direct {p0}, Lcom/reyun/tracking/b/a;->b()V

    return-void
.end method


# virtual methods
.method public a(Lcom/reyun/tracking/b/d;)V
    .locals 0

    if-nez p1, :cond_0

    return-void

    :cond_0
    :try_start_0
    iput-object p1, p0, Lcom/reyun/tracking/b/a;->d:Lcom/reyun/tracking/b/d;

    invoke-direct {p0}, Lcom/reyun/tracking/b/a;->a()Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method
