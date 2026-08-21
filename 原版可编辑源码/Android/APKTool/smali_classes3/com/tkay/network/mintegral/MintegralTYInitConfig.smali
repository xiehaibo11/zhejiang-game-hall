.class public Lcom/tkay/network/mintegral/MintegralTYInitConfig;
.super Lcom/tkay/core/api/TYInitConfig;


# direct methods
.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 15
    invoke-direct {p0}, Lcom/tkay/core/api/TYInitConfig;-><init>()V

    .line 16
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInitConfig;->paramMap:Ljava/util/Map;

    const-string v1, "appid"

    invoke-interface {v0, v1, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 17
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInitConfig;->paramMap:Ljava/util/Map;

    const-string v0, "appkey"

    invoke-interface {p1, v0, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 19
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInitConfig;->initMediation:Lcom/tkay/core/api/TYInitMediation;

    return-void
.end method
