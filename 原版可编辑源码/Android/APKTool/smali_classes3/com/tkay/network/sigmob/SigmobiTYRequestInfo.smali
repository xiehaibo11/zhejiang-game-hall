.class public Lcom/tkay/network/sigmob/SigmobiTYRequestInfo;
.super Lcom/tkay/core/api/TYMediationRequestInfo;


# annotations
.annotation runtime Ljava/lang/Deprecated;
.end annotation


# instance fields
.field a:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 20
    invoke-direct {p0}, Lcom/tkay/core/api/TYMediationRequestInfo;-><init>()V

    const/16 v0, 0x1d

    .line 21
    iput v0, p0, Lcom/tkay/network/sigmob/SigmobiTYRequestInfo;->networkFirmId:I

    .line 22
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/network/sigmob/SigmobiTYRequestInfo;->a:Ljava/util/HashMap;

    const-string v1, "app_id"

    .line 23
    invoke-virtual {v0, v1, p1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 24
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobiTYRequestInfo;->a:Ljava/util/HashMap;

    const-string v0, "app_key"

    invoke-virtual {p1, v0, p2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 25
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobiTYRequestInfo;->a:Ljava/util/HashMap;

    const-string p2, "placement_id"

    invoke-virtual {p1, p2, p3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method


# virtual methods
.method public getRequestParamMap()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation

    .line 40
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobiTYRequestInfo;->a:Ljava/util/HashMap;

    return-object v0
.end method

.method public setFormat(Ljava/lang/String;)V
    .locals 2

    .line 31
    invoke-virtual {p1}, Ljava/lang/String;->hashCode()I

    move-result v0

    const/16 v1, 0x34

    if-eq v0, v1, :cond_0

    goto :goto_0

    :cond_0
    const-string v0, "4"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    const/4 p1, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 p1, -0x1

    :goto_1
    if-eqz p1, :cond_2

    goto :goto_2

    .line 33
    :cond_2
    const-class p1, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;

    invoke-virtual {p1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/network/sigmob/SigmobiTYRequestInfo;->className:Ljava/lang/String;

    :goto_2
    return-void
.end method
