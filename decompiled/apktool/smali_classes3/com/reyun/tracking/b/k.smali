.class Lcom/reyun/tracking/b/k;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/reyun/tracking/b/d;


# instance fields
.field final synthetic a:Lcom/reyun/tracking/b/j;


# direct methods
.method constructor <init>(Lcom/reyun/tracking/b/j;)V
    .locals 0

    iput-object p1, p0, Lcom/reyun/tracking/b/k;->a:Lcom/reyun/tracking/b/j;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Ljava/lang/String;)V
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "oaid async getFailed errMsg:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "TrackingIO"

    invoke-static {v1, v0}, Lcom/reyun/tracking/a/a;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/reyun/tracking/b/k;->a:Lcom/reyun/tracking/b/j;

    iget-object v0, v0, Lcom/reyun/tracking/b/j;->d:Lcom/reyun/tracking/b/h;

    iget-object v1, p0, Lcom/reyun/tracking/b/k;->a:Lcom/reyun/tracking/b/j;

    iget-object v1, v1, Lcom/reyun/tracking/b/j;->b:Lcom/reyun/tracking/b/l;

    const-string v2, "unknown"

    const/4 v3, 0x0

    invoke-static {v0, v1, v2, v3}, Lcom/reyun/tracking/b/h;->a(Lcom/reyun/tracking/b/h;Lcom/reyun/tracking/b/l;Ljava/lang/String;Z)V

    iget-object v0, p0, Lcom/reyun/tracking/b/k;->a:Lcom/reyun/tracking/b/j;

    iget-object v0, v0, Lcom/reyun/tracking/b/j;->d:Lcom/reyun/tracking/b/h;

    iget-object v1, p0, Lcom/reyun/tracking/b/k;->a:Lcom/reyun/tracking/b/j;

    iget-object v1, v1, Lcom/reyun/tracking/b/j;->a:Landroid/content/Context;

    const-string v2, "1000010"

    invoke-static {v0, v1, v2, p1}, Lcom/reyun/tracking/b/h;->a(Lcom/reyun/tracking/b/h;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public a(Ljava/lang/String;Z)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "oaid async getSuccess :"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " isOaidTrackLimited:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "TrackingIO"

    invoke-static {v1, v0}, Lcom/reyun/tracking/a/a;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/reyun/tracking/b/k;->a:Lcom/reyun/tracking/b/j;

    iget-object v0, v0, Lcom/reyun/tracking/b/j;->d:Lcom/reyun/tracking/b/h;

    iget-object v1, p0, Lcom/reyun/tracking/b/k;->a:Lcom/reyun/tracking/b/j;

    iget-object v1, v1, Lcom/reyun/tracking/b/j;->a:Landroid/content/Context;

    invoke-static {v0, v1, p1, p2}, Lcom/reyun/tracking/b/h;->a(Lcom/reyun/tracking/b/h;Landroid/content/Context;Ljava/lang/String;Z)V

    iget-object v0, p0, Lcom/reyun/tracking/b/k;->a:Lcom/reyun/tracking/b/j;

    iget-object v0, v0, Lcom/reyun/tracking/b/j;->d:Lcom/reyun/tracking/b/h;

    iget-object v1, p0, Lcom/reyun/tracking/b/k;->a:Lcom/reyun/tracking/b/j;

    iget-object v1, v1, Lcom/reyun/tracking/b/j;->b:Lcom/reyun/tracking/b/l;

    invoke-static {v0, v1, p1, p2}, Lcom/reyun/tracking/b/h;->a(Lcom/reyun/tracking/b/h;Lcom/reyun/tracking/b/l;Ljava/lang/String;Z)V

    iget-object p1, p0, Lcom/reyun/tracking/b/k;->a:Lcom/reyun/tracking/b/j;

    iget-object p1, p1, Lcom/reyun/tracking/b/j;->d:Lcom/reyun/tracking/b/h;

    iget-object p2, p0, Lcom/reyun/tracking/b/k;->a:Lcom/reyun/tracking/b/j;

    iget-object p2, p2, Lcom/reyun/tracking/b/j;->a:Landroid/content/Context;

    const-string v0, "100003"

    const-string v1, ""

    invoke-static {p1, p2, v0, v1}, Lcom/reyun/tracking/b/h;->a(Lcom/reyun/tracking/b/h;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
