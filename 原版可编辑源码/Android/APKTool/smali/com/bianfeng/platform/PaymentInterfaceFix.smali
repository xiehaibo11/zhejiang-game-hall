.class public Lcom/bianfeng/platform/PaymentInterfaceFix;
.super Lcom/bianfeng/platform/PaymentInterface;
.source "PaymentInterfaceFix.java"


# annotations
.annotation runtime Ljava/lang/Deprecated;
.end annotation


# static fields
.field protected static listener:Lcom/bianfeng/platform/PlatformSdkListener;


# instance fields
.field protected activity:Landroid/app/Activity;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 16
    new-instance v0, Lcom/bianfeng/platform/PaymentInterfaceFix$1;

    invoke-direct {v0}, Lcom/bianfeng/platform/PaymentInterfaceFix$1;-><init>()V

    sput-object v0, Lcom/bianfeng/platform/PaymentInterfaceFix;->listener:Lcom/bianfeng/platform/PlatformSdkListener;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 13
    invoke-direct {p0}, Lcom/bianfeng/platform/PaymentInterface;-><init>()V

    return-void
.end method

.method public static getListener()Lcom/bianfeng/platform/PlatformSdkListener;
    .locals 1

    .line 24
    sget-object v0, Lcom/bianfeng/platform/PaymentInterfaceFix;->listener:Lcom/bianfeng/platform/PlatformSdkListener;

    return-object v0
.end method


# virtual methods
.method public getExt()Ljava/lang/Object;
    .locals 1

    .line 50
    const/4 v0, 0x0

    return-object v0
.end method

.method public getOrderId()Ljava/lang/String;
    .locals 1

    .line 63
    const/4 v0, 0x0

    return-object v0
.end method

.method public init(Landroid/app/Activity;)V
    .locals 0
    .param p1, "activity"    # Landroid/app/Activity;

    .line 29
    iput-object p1, p0, Lcom/bianfeng/platform/PaymentInterfaceFix;->activity:Landroid/app/Activity;

    .line 30
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

    .line 42
    .local p1, "orders":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
    return-void
.end method

.method public payForProduct(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0
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

    .line 34
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

    .line 38
    .local p1, "orders":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
    return-void
.end method

.method public release()V
    .locals 0

    .line 59
    return-void
.end method

.method public resetPayState()V
    .locals 0

    .line 55
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

    .line 46
    .local p1, "orders":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
    return-void
.end method
