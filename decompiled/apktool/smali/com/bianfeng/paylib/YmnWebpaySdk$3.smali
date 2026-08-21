.class Lcom/bianfeng/paylib/YmnWebpaySdk$3;
.super Lcom/bianfeng/paylib/action/ActionObserver;
.source "YmnWebpaySdk.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/paylib/YmnWebpaySdk;->onNext(Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/paylib/YmnWebpaySdk;


# direct methods
.method constructor <init>(Lcom/bianfeng/paylib/YmnWebpaySdk;)V
    .locals 0

    .line 135
    iput-object p1, p0, Lcom/bianfeng/paylib/YmnWebpaySdk$3;->this$0:Lcom/bianfeng/paylib/YmnWebpaySdk;

    invoke-direct {p0}, Lcom/bianfeng/paylib/action/ActionObserver;-><init>()V

    return-void
.end method


# virtual methods
.method public onActionResult(Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;)V
    .locals 4

    .line 138
    invoke-virtual {p1}, Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;->isOk()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 139
    iget-object v0, p0, Lcom/bianfeng/paylib/YmnWebpaySdk$3;->this$0:Lcom/bianfeng/paylib/YmnWebpaySdk;

    invoke-virtual {p1}, Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;->processedResultAsMap()Ljava/util/Map;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/bianfeng/paylib/YmnWebpaySdk;->access$300(Lcom/bianfeng/paylib/YmnWebpaySdk;Ljava/util/Map;)V

    goto :goto_0

    .line 141
    :cond_0
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getToast()Lcom/bianfeng/utilslib/ToastUtils;

    move-result-object v0

    iget-object v1, p0, Lcom/bianfeng/paylib/YmnWebpaySdk$3;->this$0:Lcom/bianfeng/paylib/YmnWebpaySdk;

    invoke-static {v1}, Lcom/bianfeng/paylib/YmnWebpaySdk;->access$100(Lcom/bianfeng/paylib/YmnWebpaySdk;)Landroid/app/Activity;

    move-result-object v1

    const-string v2, "\u4e0b\u5355\u5931\u8d25 \u8bf7\u8054\u7cfb\u5ba2\u670d"

    invoke-virtual {v0, v1, v2}, Lcom/bianfeng/utilslib/ToastUtils;->show(Landroid/app/Activity;Ljava/lang/String;)V

    .line 142
    iget-object v0, p0, Lcom/bianfeng/paylib/YmnWebpaySdk$3;->this$0:Lcom/bianfeng/paylib/YmnWebpaySdk;

    const-string v1, "type_request_order"

    const-string v2, "\u4e0b\u5355\u54cd\u5e94"

    invoke-virtual {v0, v1, v2}, Lcom/bianfeng/paylib/YmnWebpaySdk;->payCallback(Ljava/lang/String;Ljava/lang/String;)V

    .line 143
    iget-object v0, p0, Lcom/bianfeng/paylib/YmnWebpaySdk$3;->this$0:Lcom/bianfeng/paylib/YmnWebpaySdk;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "\u4e0b\u5355\u5931\u8d25"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;->messageFail()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v3, "type_fail"

    invoke-virtual {v0, v3, v1}, Lcom/bianfeng/paylib/YmnWebpaySdk;->payCallback(Ljava/lang/String;Ljava/lang/String;)V

    .line 144
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;->messageFail()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    :goto_0
    return-void
.end method
