.class public Lcom/bianfeng/platform/PaymentInterface;
.super Ljava/lang/Object;
.source "PaymentInterface.java"

# interfaces
.implements Lcom/bianfeng/ymnsdk/feature/protocol/IPaymentFeature;
.implements Lcom/bianfeng/platform/PaymentWrapper;


# annotations
.annotation runtime Ljava/lang/Deprecated;
.end annotation


# static fields
.field private static instance:Lcom/bianfeng/platform/PaymentInterface;

.field protected static listener:Lcom/bianfeng/platform/PlatformSdkListener;

.field private static ymnCallback:Lcom/bianfeng/ymnsdk/feature/YmnCallback;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 1
    new-instance v0, Lcom/bianfeng/platform/PaymentInterface$1;

    invoke-direct {v0}, Lcom/bianfeng/platform/PaymentInterface$1;-><init>()V

    sput-object v0, Lcom/bianfeng/platform/PaymentInterface;->ymnCallback:Lcom/bianfeng/ymnsdk/feature/YmnCallback;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static checkOrder(Landroid/content/Context;Ljava/lang/String;ILcom/bianfeng/platform/PlatformSdkListener;)V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 1
    invoke-static {p1, p2}, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->checkOrder(Ljava/lang/String;I)V

    return-void
.end method

.method public static getInstance()Lcom/bianfeng/platform/PaymentInterface;
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 1
    sget-object v0, Lcom/bianfeng/platform/PaymentInterface;->instance:Lcom/bianfeng/platform/PaymentInterface;

    if-nez v0, :cond_0

    .line 2
    new-instance v0, Lcom/bianfeng/platform/PaymentInterface;

    invoke-direct {v0}, Lcom/bianfeng/platform/PaymentInterface;-><init>()V

    sput-object v0, Lcom/bianfeng/platform/PaymentInterface;->instance:Lcom/bianfeng/platform/PaymentInterface;

    .line 4
    :cond_0
    sget-object v0, Lcom/bianfeng/platform/PaymentInterface;->instance:Lcom/bianfeng/platform/PaymentInterface;

    return-object v0
.end method

.method public static getListener()Lcom/bianfeng/platform/PlatformSdkListener;
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 1
    sget-object v0, Lcom/bianfeng/platform/PaymentInterface;->listener:Lcom/bianfeng/platform/PlatformSdkListener;

    return-object v0
.end method

.method public static setListener(Lcom/bianfeng/platform/PlatformSdkListener;)V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 1
    sput-object p0, Lcom/bianfeng/platform/PaymentInterface;->listener:Lcom/bianfeng/platform/PlatformSdkListener;

    return-void
.end method


# virtual methods
.method public getExt()Ljava/lang/Object;
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    const/4 v0, 0x0

    return-object v0
.end method

.method public getOrderId()Ljava/lang/String;
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->getOrderId()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public init(Landroid/app/Activity;)V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 1
    sget-object p1, Lcom/bianfeng/platform/PaymentInterface;->ymnCallback:Lcom/bianfeng/ymnsdk/feature/YmnCallback;

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->registCallback(Lcom/bianfeng/ymnsdk/feature/YmnCallback;)V

    return-void
.end method

.method public pay(Ljava/util/Map;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 1
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->pay(Ljava/util/Map;)V

    return-void
.end method

.method public payForProduct(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 2
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 1
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    const-string v1, "order_id"

    .line 2
    invoke-interface {v0, v1, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string p1, "product_id"

    .line 3
    invoke-interface {v0, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string p1, "product_name"

    .line 4
    invoke-interface {v0, p1, p3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string p1, "product_price"

    .line 5
    invoke-interface {v0, p1, p4}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string p1, "product_count"

    .line 6
    invoke-interface {v0, p1, p5}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string p1, "role_id"

    .line 7
    invoke-interface {v0, p1, p6}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string p1, "role_name"

    .line 8
    invoke-interface {v0, p1, p7}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string p1, "role_grade"

    .line 9
    invoke-interface {v0, p1, p8}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string p1, "role_balance"

    .line 10
    invoke-interface {v0, p1, p9}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string p1, "server_id"

    .line 11
    invoke-interface {v0, p1, p10}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string p1, "notify_url"

    .line 12
    invoke-interface {v0, p1, p11}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string p1, "ext"

    .line 13
    invoke-interface {v0, p1, p12}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 15
    invoke-virtual {p0, v0}, Lcom/bianfeng/platform/PaymentInterface;->payForProduct(Ljava/util/Map;)V

    return-void
.end method

.method public payForProduct(Ljava/util/Map;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 16
    invoke-virtual {p0, p1}, Lcom/bianfeng/platform/PaymentInterface;->pay(Ljava/util/Map;)V

    return-void
.end method

.method public prePay(Ljava/util/LinkedHashMap;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    return-void
.end method

.method public release()V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    return-void
.end method

.method public resetPayState()V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    return-void
.end method

.method public thirdPay(Ljava/util/Map;Lcom/bianfeng/platform/PlatformSdkListener;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;",
            "Lcom/bianfeng/platform/PlatformSdkListener;",
            ")V"
        }
    .end annotation

    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    return-void
.end method
