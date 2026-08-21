.class Lcom/reyun/tracking/utils/t;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Lcom/reyun/tracking/utils/s;


# direct methods
.method constructor <init>(Lcom/reyun/tracking/utils/s;)V
    .locals 0

    iput-object p1, p0, Lcom/reyun/tracking/utils/t;->a:Lcom/reyun/tracking/utils/s;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    const-string v0, "TrackingIO"

    const-string v1, "install \u53d1\u9001\u6210\u529f \u5f00\u542fStartup"

    invoke-static {v0, v1}, Lcom/reyun/tracking/a/a;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/reyun/tracking/utils/t;->a:Lcom/reyun/tracking/utils/s;

    invoke-static {v0}, Lcom/reyun/tracking/utils/s;->a(Lcom/reyun/tracking/utils/s;)Ljava/util/Map;

    move-result-object v0

    invoke-static {v0}, Lcom/reyun/tracking/sdk/Tracking;->setStartupInternal(Ljava/util/Map;)V

    return-void
.end method
