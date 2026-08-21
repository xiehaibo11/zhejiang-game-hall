.class Lcom/reyun/tracking/b/i;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Lcom/reyun/tracking/b/l;

.field final synthetic b:Lcom/reyun/tracking/b/h;


# direct methods
.method constructor <init>(Lcom/reyun/tracking/b/h;Lcom/reyun/tracking/b/l;)V
    .locals 0

    iput-object p1, p0, Lcom/reyun/tracking/b/i;->b:Lcom/reyun/tracking/b/h;

    iput-object p2, p0, Lcom/reyun/tracking/b/i;->a:Lcom/reyun/tracking/b/l;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 4

    iget-object v0, p0, Lcom/reyun/tracking/b/i;->b:Lcom/reyun/tracking/b/h;

    invoke-static {v0}, Lcom/reyun/tracking/b/h;->a(Lcom/reyun/tracking/b/h;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const-string v0, "TrackingIO"

    const-string v1, "oaid error:get timeOut"

    invoke-static {v0, v1}, Lcom/reyun/tracking/a/a;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/reyun/tracking/b/i;->b:Lcom/reyun/tracking/b/h;

    iget-object v1, p0, Lcom/reyun/tracking/b/i;->a:Lcom/reyun/tracking/b/l;

    const/4 v2, 0x0

    const-string v3, "unknown"

    invoke-static {v0, v1, v3, v2}, Lcom/reyun/tracking/b/h;->a(Lcom/reyun/tracking/b/h;Lcom/reyun/tracking/b/l;Ljava/lang/String;Z)V

    return-void
.end method
