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

    .line 23
    new-instance v0, Lcom/bianfeng/platform/PaymentInterface$1;

    invoke-direct {v0}, Lcom/bianfeng/platform/PaymentInterface$1;-><init>()V

    sput-object v0, Lcom/bianfeng/platform/PaymentInterface;->ymnCallback:Lcom/bianfeng/ymnsdk/feature/YmnCallback;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 20
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static checkOrder(Landroid/content/Context;Ljava/lang/String;ILcom/bianfeng/platform/PlatformSdkListener;)V
    .locals 0
    .param p0, "context"    # Landroid/content/Context;
    .param p1, "orderId"    # Ljava/lang/String;
    .param p2, "orderType"    # I
    .param p3, "listener"    # Lcom/bianfeng/platform/PlatformSdkListener;
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 111
    invoke-static {p1, p2}, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->checkOrder(Ljava/lang/String;I)V

    .line 112
    return-void
.end method

.method public static getInstance()Lcom/bianfeng/platform/PaymentInterface;
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 46
    sget-object v0, Lcom/bianfeng/platform/PaymentInterface;->instance:Lcom/bianfeng/platform/PaymentInterface;

    if-nez v0, :cond_0

    .line 47
    new-instance v0, Lcom/bianfeng/platform/PaymentInterface;

    invoke-direct {v0}, Lcom/bianfeng/platform/PaymentInterface;-><init>()V

    sput-object v0, Lcom/bianfeng/platform/PaymentInterface;->instance:Lcom/bianfeng/platform/PaymentInterface;

    .line 49
    :cond_0
    sget-object v0, Lcom/bianfeng/platform/PaymentInterface;->instance:Lcom/bianfeng/platform/PaymentInterface;

    return-object v0
.end method

.method public static getListener()Lcom/bianfeng/platform/PlatformSdkListener;
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 39
    sget-object v0, Lcom/bianfeng/platform/PaymentInterface;->listener:Lcom/bianfeng/platform/PlatformSdkListener;

    return-object v0
.end method

.method public static setListener(Lcom/bianfeng/platform/PlatformSdkListener;)V
    .locals 0
    .param p0, "listener"    # Lcom/bianfeng/platform/PlatformSdkListener;
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 34
    sput-object p0, Lcom/bianfeng/platform/PaymentInterface;->listener:Lcom/bianfeng/platform/PlatformSdkListener;

    .line 35
    return-void
.end method


# virtual methods
.method public getExt()Ljava/lang/Object;
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 116
    const/4 v0, 0x0

    return-object v0
.end method

.method public getOrderId()Ljava/lang/String;
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 131
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->getOrderId()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public init(Landroid/app/Activity;)V
    .locals 1
    .param p1, "activity"    # Landroid/app/Activity;
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 54
    sget-object v0, Lcom/bianfeng/platform/PaymentInterface;->ymnCallback:Lcom/bianfeng/ymnsdk/feature/YmnCallback;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->registCallback(Lcom/bianfeng/ymnsdk/feature/YmnCallback;)V

    .line 55
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

    .line 101
    .local p1, "orders":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->pay(Ljava/util/Map;)V

    .line 102
    return-void
.end method

.method public payForProduct(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 2
    .param p1, "orderId"    # Ljava/lang/String;
    .param p2, "productId"    # Ljava/lang/String;
    .param p3, "productName"    # Ljava/lang/String;
    .param p4, "productPrice"    # Ljava/lang/String;
    .param p5, "productCount"    # Ljava/lang/String;
    .param p6, "roleId"    # Ljava/lang/String;
    .param p7, "roleName"    # Ljava/lang/String;
    .param p8, "roleGrade"    # Ljava/lang/String;
    .param p9, "roleBalance"    # Ljava/lang/String;
    .param p10, "serverId"    # Ljava/lang/String;
    .param p11, "notifyUrl"    # Ljava/lang/String;
    .param p12, "ext"    # Ljava/lang/String;
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 72
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 73
    .local v0, "map":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
    const-string v1, "order_id"

    invoke-interface {v0, v1, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 74
    const-string v1, "product_id"

    invoke-interface {v0, v1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 75
    const-string v1, "product_name"

    invoke-interface {v0, v1, p3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 76
    const-string v1, "product_price"

    invoke-interface {v0, v1, p4}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 77
    const-string v1, "product_count"

    invoke-interface {v0, v1, p5}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 78
    const-string v1, "role_id"

    invoke-interface {v0, v1, p6}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 79
    const-string v1, "role_name"

    invoke-interface {v0, v1, p7}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 80
    const-string v1, "role_grade"

    invoke-interface {v0, v1, p8}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 81
    const-string v1, "role_balance"

    invoke-interface {v0, v1, p9}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 82
    const-string v1, "server_id"

    invoke-interface {v0, v1, p10}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 83
    const-string v1, "notify_url"

    invoke-interface {v0, v1, p11}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 84
    const-string v1, "ext"

    invoke-interface {v0, v1, p12}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 86
    invoke-virtual {p0, v0}, Lcom/bianfeng/platform/PaymentInterface;->payForProduct(Ljava/util/Map;)V

    .line 87
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

    .line 91
    .local p1, "orders":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
    invoke-virtual {p0, p1}, Lcom/bianfeng/platform/PaymentInterface;->pay(Ljava/util/Map;)V

    .line 92
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

    .line 97
    .local p1, "order":Ljava/util/LinkedHashMap;, "Ljava/util/LinkedHashMap<Ljava/lang/String;Ljava/lang/String;>;"
    return-void
.end method

.method public release()V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 127
    return-void
.end method

.method public resetPayState()V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 122
    return-void
.end method

.method public thirdPay(Ljava/util/Map;Lcom/bianfeng/platform/PlatformSdkListener;)V
    .locals 0
    .param p2, "listener"    # Lcom/bianfeng/platform/PlatformSdkListener;
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

    .line 107
    .local p1, "orders":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
    return-void
.end method
