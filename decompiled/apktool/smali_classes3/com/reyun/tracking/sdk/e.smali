.class final Lcom/reyun/tracking/sdk/e;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/reyun/tracking/sdk/o;


# direct methods
.method constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a()V
    .locals 3

    invoke-static {}, Lcom/reyun/tracking/sdk/Tracking;->access$600()Ljava/util/Map;

    move-result-object v0

    invoke-static {}, Lcom/reyun/tracking/sdk/Tracking;->access$700()Ljava/util/Map;

    move-result-object v1

    invoke-static {}, Lcom/reyun/tracking/sdk/Tracking;->access$800()Z

    move-result v2

    invoke-static {v0, v1, v2}, Lcom/reyun/tracking/sdk/Tracking;->access$900(Ljava/util/Map;Ljava/util/Map;Z)V

    return-void
.end method
