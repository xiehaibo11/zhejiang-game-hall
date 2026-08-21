.class Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper$b;
.super Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;
.source "PaymentFeatureWrapper.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;)V
    .locals 0

    .line 1
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;-><init>()V

    return-void
.end method


# virtual methods
.method public onCallBack(ILjava/lang/String;)V
    .locals 2

    .line 1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "PaymentFeatureWrapper onCallBack : "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 2
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->paySdkReturn(ILjava/lang/String;)V

    .line 3
    invoke-super {p0, p1, p2}, Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;->onCallBack(ILjava/lang/String;)V

    return-void
.end method
