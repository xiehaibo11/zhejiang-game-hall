.class public Lcom/bianfeng/paylib/YmnWebpaysdkCallback;
.super Ljava/lang/Object;
.source "YmnWebpaysdkCallback.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 5
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onCall(Ljava/util/HashMap;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 7
    invoke-static {}, Lcom/bianfeng/paylib/YmnWebpaySdk;->getInstance()Lcom/bianfeng/paylib/YmnWebpaySdk;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/bianfeng/paylib/YmnWebpaySdk;->pay(Ljava/util/Map;)V

    return-void
.end method
