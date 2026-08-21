.class Lcom/bianfeng/paylib/YmnWebpaySdk$1;
.super Ljava/lang/Object;
.source "YmnWebpaySdk.java"

# interfaces
.implements Lcom/bianfeng/paylib/ui/WebpaysdkCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/paylib/YmnWebpaySdk;
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

    .line 44
    iput-object p1, p0, Lcom/bianfeng/paylib/YmnWebpaySdk$1;->this$0:Lcom/bianfeng/paylib/YmnWebpaySdk;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public buyNext(Ljava/lang/String;)V
    .locals 1

    .line 47
    iget-object v0, p0, Lcom/bianfeng/paylib/YmnWebpaySdk$1;->this$0:Lcom/bianfeng/paylib/YmnWebpaySdk;

    invoke-static {v0, p1}, Lcom/bianfeng/paylib/YmnWebpaySdk;->access$000(Lcom/bianfeng/paylib/YmnWebpaySdk;Ljava/lang/String;)V

    return-void
.end method

.method public onCancel()V
    .locals 3

    .line 52
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getToast()Lcom/bianfeng/utilslib/ToastUtils;

    move-result-object v0

    iget-object v1, p0, Lcom/bianfeng/paylib/YmnWebpaySdk$1;->this$0:Lcom/bianfeng/paylib/YmnWebpaySdk;

    invoke-static {v1}, Lcom/bianfeng/paylib/YmnWebpaySdk;->access$100(Lcom/bianfeng/paylib/YmnWebpaySdk;)Landroid/app/Activity;

    move-result-object v1

    const-string v2, "\u652f\u4ed8\u53d6\u6d88"

    invoke-virtual {v0, v1, v2}, Lcom/bianfeng/utilslib/ToastUtils;->show(Landroid/app/Activity;Ljava/lang/String;)V

    .line 53
    iget-object v0, p0, Lcom/bianfeng/paylib/YmnWebpaySdk$1;->this$0:Lcom/bianfeng/paylib/YmnWebpaySdk;

    const-string v1, "type_fail"

    invoke-virtual {v0, v1, v2}, Lcom/bianfeng/paylib/YmnWebpaySdk;->payCallback(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public onPayFail(Ljava/lang/String;)V
    .locals 3

    .line 64
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getToast()Lcom/bianfeng/utilslib/ToastUtils;

    move-result-object v0

    iget-object v1, p0, Lcom/bianfeng/paylib/YmnWebpaySdk$1;->this$0:Lcom/bianfeng/paylib/YmnWebpaySdk;

    invoke-static {v1}, Lcom/bianfeng/paylib/YmnWebpaySdk;->access$100(Lcom/bianfeng/paylib/YmnWebpaySdk;)Landroid/app/Activity;

    move-result-object v1

    const-string v2, "\u652f\u4ed8\u5931\u8d25"

    invoke-virtual {v0, v1, v2}, Lcom/bianfeng/utilslib/ToastUtils;->show(Landroid/app/Activity;Ljava/lang/String;)V

    .line 65
    iget-object v0, p0, Lcom/bianfeng/paylib/YmnWebpaySdk$1;->this$0:Lcom/bianfeng/paylib/YmnWebpaySdk;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "\u652f\u4ed8\u5931\u8d25|"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v1, "type_fail"

    invoke-virtual {v0, v1, p1}, Lcom/bianfeng/paylib/YmnWebpaySdk;->payCallback(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public onPaySuccess()V
    .locals 3

    .line 58
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getToast()Lcom/bianfeng/utilslib/ToastUtils;

    move-result-object v0

    iget-object v1, p0, Lcom/bianfeng/paylib/YmnWebpaySdk$1;->this$0:Lcom/bianfeng/paylib/YmnWebpaySdk;

    invoke-static {v1}, Lcom/bianfeng/paylib/YmnWebpaySdk;->access$100(Lcom/bianfeng/paylib/YmnWebpaySdk;)Landroid/app/Activity;

    move-result-object v1

    const-string v2, "\u652f\u4ed8\u6210\u529f"

    invoke-virtual {v0, v1, v2}, Lcom/bianfeng/utilslib/ToastUtils;->show(Landroid/app/Activity;Ljava/lang/String;)V

    .line 59
    iget-object v0, p0, Lcom/bianfeng/paylib/YmnWebpaySdk$1;->this$0:Lcom/bianfeng/paylib/YmnWebpaySdk;

    const-string v1, "type_success"

    invoke-virtual {v0, v1, v2}, Lcom/bianfeng/paylib/YmnWebpaySdk;->payCallback(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
