.class Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper$a;
.super Ljava/lang/Object;
.source "PaymentFeatureWrapper.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->pay(Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/util/Map;

.field final synthetic b:Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;Ljava/util/Map;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper$a;->b:Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;

    iput-object p2, p0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper$a;->a:Ljava/util/Map;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 5

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v0

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper$a;->b:Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;

    iget-object v1, v1, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->b:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->payInit(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)V

    :try_start_0
    const-string v0, "PaymentFeatureWrapper pay"

    .line 3
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 4
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper$a;->a:Ljava/util/Map;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper$a;->b:Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;

    iget-object v1, v1, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->b:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper$a;->b:Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;

    iget-object v2, v2, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->a:Lcom/bianfeng/ymnsdk/feature/protocol/IPaymentFeature;

    invoke-static {v0, v1, v2}, Lcom/bianfeng/ymnsdk/feature/plugin/a;->a(Ljava/util/Map;Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;Lcom/bianfeng/ymnsdk/feature/protocol/IPaymentFeature;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 6
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper$a;->b:Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;

    iget-object v1, v1, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->b:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    const-string v2, "\u89e3\u6790\u51fa\u9519\u4e86"

    const/16 v3, 0xc9

    invoke-virtual {v1, v3, v2}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;)V

    .line 7
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v1

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v4, "0"

    invoke-virtual {v1, v3, v2, v4}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->payResponseOrder(ILjava/lang/String;Ljava/lang/String;)V

    .line 8
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method
