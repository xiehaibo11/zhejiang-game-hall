.class Lcom/reyun/tracking/sdk/n;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/reyun/tracking/b/l;


# instance fields
.field final synthetic a:Lcom/reyun/tracking/sdk/m;


# direct methods
.method constructor <init>(Lcom/reyun/tracking/sdk/m;)V
    .locals 0

    iput-object p1, p0, Lcom/reyun/tracking/sdk/n;->a:Lcom/reyun/tracking/sdk/m;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Ljava/lang/String;Z)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "getOaid success:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, " isOaidTrackLimited:"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "TrackingIO"

    invoke-static {p2, p1}, Lcom/reyun/tracking/a/a;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object p1, p0, Lcom/reyun/tracking/sdk/n;->a:Lcom/reyun/tracking/sdk/m;

    invoke-static {p1}, Lcom/reyun/tracking/sdk/m;->a(Lcom/reyun/tracking/sdk/m;)V

    return-void
.end method
