.class Lcom/bianfeng/platform/PaymentInterface$1;
.super Ljava/lang/Object;
.source "PaymentInterface.java"

# interfaces
.implements Lcom/bianfeng/ymnsdk/feature/YmnCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/platform/PaymentInterface;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onCallBack(ILjava/lang/String;)V
    .locals 2

    .line 1
    sget-object v0, Lcom/bianfeng/platform/PaymentInterface;->listener:Lcom/bianfeng/platform/PlatformSdkListener;

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/bianfeng/platform/PlatformSdk;->getListener()Lcom/bianfeng/platform/PlatformSdkListener;

    move-result-object v1

    if-eq v0, v1, :cond_0

    .line 2
    sget-object v0, Lcom/bianfeng/platform/PaymentInterface;->listener:Lcom/bianfeng/platform/PlatformSdkListener;

    invoke-interface {v0, p1, p2}, Lcom/bianfeng/platform/PlatformSdkListener;->onCallBack(ILjava/lang/String;)V

    :cond_0
    return-void
.end method
