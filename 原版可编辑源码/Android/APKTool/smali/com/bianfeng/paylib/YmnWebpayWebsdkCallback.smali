.class public Lcom/bianfeng/paylib/YmnWebpayWebsdkCallback;
.super Ljava/lang/Object;
.source "YmnWebpayWebsdkCallback.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 7
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onCall(Ljava/util/HashMap;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 9
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object v0

    const-string v1, "onCall YmnWebpayWebsdkCallback \u652f\u4ed8"

    invoke-virtual {v0, v1}, Lcom/bianfeng/utilslib/Logger;->e(Ljava/lang/String;)I

    .line 10
    invoke-static {}, Lcom/bianfeng/paylib/YmnWebpaySdk;->getInstance()Lcom/bianfeng/paylib/YmnWebpaySdk;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/bianfeng/paylib/YmnWebpaySdk;->payWeb(Ljava/util/Map;)V

    return-void
.end method
