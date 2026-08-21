.class public Lcom/tkay/network/toutiao/TTTYRequestInfo;
.super Lcom/tkay/core/api/TYMediationRequestInfo;


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
.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Z)V
    .locals 2

    .line 19
    invoke-direct {p0}, Lcom/tkay/core/api/TYMediationRequestInfo;-><init>()V

    const/16 v0, 0xf

    .line 20
    iput v0, p0, Lcom/tkay/network/toutiao/TTTYRequestInfo;->networkFirmId:I

    .line 21
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/network/toutiao/TTTYRequestInfo;->a:Ljava/util/HashMap;

    const-string v1, "app_id"

    .line 22
    invoke-virtual {v0, v1, p1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 23
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYRequestInfo;->a:Ljava/util/HashMap;

    const-string v0, "slot_id"

    invoke-virtual {p1, v0, p2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 24
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYRequestInfo;->a:Ljava/util/HashMap;

    if-eqz p3, :cond_0

    const-string p2, "1"

    goto :goto_0

    :cond_0
    const-string p2, "0"

    :goto_0
    const-string p3, "personalized_template"

    invoke-virtual {p1, p3, p2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

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

    .line 39
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRequestInfo;->a:Ljava/util/HashMap;

    return-object v0
.end method

.method public setFormat(Ljava/lang/String;)V
    .locals 2

    .line 30
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

    .line 32
    :cond_2
    const-class p1, Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    invoke-virtual {p1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYRequestInfo;->className:Ljava/lang/String;

    :goto_2
    return-void
.end method
