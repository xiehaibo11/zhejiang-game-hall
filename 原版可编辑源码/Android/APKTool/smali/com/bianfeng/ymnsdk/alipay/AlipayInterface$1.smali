.class Lcom/bianfeng/ymnsdk/alipay/AlipayInterface$1;
.super Ljava/lang/Object;
.source "AlipayInterface.java"

# interfaces
.implements Lcom/alipay/sdk/OnPayListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/alipay/AlipayInterface;->pay(Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/ymnsdk/alipay/AlipayInterface;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/alipay/AlipayInterface;)V
    .locals 0

    .line 74
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/alipay/AlipayInterface$1;->this$0:Lcom/bianfeng/ymnsdk/alipay/AlipayInterface;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onFailure(ILjava/lang/String;)V
    .locals 4

    const-string v0, "|"

    const/16 v1, 0x1771

    if-ne p1, v1, :cond_0

    .line 84
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/alipay/AlipayInterface$1;->this$0:Lcom/bianfeng/ymnsdk/alipay/AlipayInterface;

    const/16 v2, 0xca

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p0, Lcom/bianfeng/ymnsdk/alipay/AlipayInterface$1;->this$0:Lcom/bianfeng/ymnsdk/alipay/AlipayInterface;

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/alipay/AlipayInterface;->getOrderId()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, v2, p1}, Lcom/bianfeng/ymnsdk/alipay/AlipayInterface;->sendResult(ILjava/lang/String;)V

    goto :goto_0

    .line 86
    :cond_0
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/alipay/AlipayInterface$1;->this$0:Lcom/bianfeng/ymnsdk/alipay/AlipayInterface;

    const/16 v2, 0xc9

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p0, Lcom/bianfeng/ymnsdk/alipay/AlipayInterface$1;->this$0:Lcom/bianfeng/ymnsdk/alipay/AlipayInterface;

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/alipay/AlipayInterface;->getOrderId()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, v2, p1}, Lcom/bianfeng/ymnsdk/alipay/AlipayInterface;->sendResult(ILjava/lang/String;)V

    :goto_0
    return-void
.end method

.method public onSuccess(Ljava/lang/String;)V
    .locals 2

    .line 78
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/alipay/AlipayInterface$1;->this$0:Lcom/bianfeng/ymnsdk/alipay/AlipayInterface;

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/alipay/AlipayInterface;->getOrderId()Ljava/lang/String;

    move-result-object v0

    const/16 v1, 0xc8

    invoke-virtual {p1, v1, v0}, Lcom/bianfeng/ymnsdk/alipay/AlipayInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method
