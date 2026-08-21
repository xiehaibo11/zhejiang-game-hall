.class Lcom/bianfeng/platform/PaymentInterfaceFix$1;
.super Ljava/lang/Object;
.source "PaymentInterfaceFix.java"

# interfaces
.implements Lcom/bianfeng/platform/PlatformSdkListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/platform/PaymentInterfaceFix;
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
    .locals 0

    .line 1
    invoke-static {p1, p2}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->dispatchMessage(ILjava/lang/String;)V

    return-void
.end method
