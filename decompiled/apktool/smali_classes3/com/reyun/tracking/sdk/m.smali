.class Lcom/reyun/tracking/sdk/m;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field private a:Lcom/reyun/tracking/sdk/o;


# direct methods
.method public constructor <init>(Lcom/reyun/tracking/sdk/o;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/reyun/tracking/sdk/m;->a:Lcom/reyun/tracking/sdk/o;

    return-void
.end method

.method private a()V
    .locals 1

    iget-object v0, p0, Lcom/reyun/tracking/sdk/m;->a:Lcom/reyun/tracking/sdk/o;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/reyun/tracking/sdk/o;->a()V

    :cond_0
    return-void
.end method

.method static synthetic a(Lcom/reyun/tracking/sdk/m;)V
    .locals 0

    invoke-direct {p0}, Lcom/reyun/tracking/sdk/m;->a()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    const-string v0, "TrackingIO"

    const-string v1, "start getOaid !!"

    invoke-static {v0, v1}, Lcom/reyun/tracking/a/a;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {}, Lcom/reyun/tracking/sdk/Tracking;->access$000()Landroid/content/Context;

    move-result-object v1

    if-nez v1, :cond_0

    const-string v1, "context is null! app may be destroyed"

    invoke-static {v0, v1}, Lcom/reyun/tracking/a/a;->c(Ljava/lang/String;Ljava/lang/String;)V

    invoke-direct {p0}, Lcom/reyun/tracking/sdk/m;->a()V

    return-void

    :cond_0
    new-instance v0, Lcom/reyun/tracking/b/h;

    invoke-direct {v0}, Lcom/reyun/tracking/b/h;-><init>()V

    invoke-static {}, Lcom/reyun/tracking/sdk/Tracking;->access$000()Landroid/content/Context;

    move-result-object v1

    new-instance v2, Lcom/reyun/tracking/sdk/n;

    invoke-direct {v2, p0}, Lcom/reyun/tracking/sdk/n;-><init>(Lcom/reyun/tracking/sdk/m;)V

    invoke-virtual {v0, v1, v2}, Lcom/reyun/tracking/b/h;->a(Landroid/content/Context;Lcom/reyun/tracking/b/l;)V

    return-void
.end method
