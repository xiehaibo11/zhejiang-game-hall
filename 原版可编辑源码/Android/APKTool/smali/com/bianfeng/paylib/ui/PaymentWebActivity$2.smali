.class Lcom/bianfeng/paylib/ui/PaymentWebActivity$2;
.super Ljava/lang/Object;
.source "PaymentWebActivity.java"

# interfaces
.implements Lcom/github/lzyzsd/jsbridge/BridgeHandler;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/paylib/ui/PaymentWebActivity;->initData()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/paylib/ui/PaymentWebActivity;


# direct methods
.method constructor <init>(Lcom/bianfeng/paylib/ui/PaymentWebActivity;)V
    .locals 0

    .line 110
    iput-object p1, p0, Lcom/bianfeng/paylib/ui/PaymentWebActivity$2;->this$0:Lcom/bianfeng/paylib/ui/PaymentWebActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public handler(Ljava/lang/String;Lcom/github/lzyzsd/jsbridge/CallBackFunction;)V
    .locals 2

    .line 113
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object p2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "callBackFromH5\uff1a"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    .line 114
    iget-object p1, p0, Lcom/bianfeng/paylib/ui/PaymentWebActivity$2;->this$0:Lcom/bianfeng/paylib/ui/PaymentWebActivity;

    invoke-virtual {p1}, Lcom/bianfeng/paylib/ui/PaymentWebActivity;->finish()V

    return-void
.end method
