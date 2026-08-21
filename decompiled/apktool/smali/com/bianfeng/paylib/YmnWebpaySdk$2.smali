.class Lcom/bianfeng/paylib/YmnWebpaySdk$2;
.super Ljava/lang/Object;
.source "YmnWebpaySdk.java"

# interfaces
.implements Lcom/bianfeng/paylib/action/RequestNetIpCallBack;


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

    .line 69
    iput-object p1, p0, Lcom/bianfeng/paylib/YmnWebpaySdk$2;->this$0:Lcom/bianfeng/paylib/YmnWebpaySdk;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onFail(Ljava/lang/String;)V
    .locals 1

    .line 77
    iget-object p1, p0, Lcom/bianfeng/paylib/YmnWebpaySdk$2;->this$0:Lcom/bianfeng/paylib/YmnWebpaySdk;

    const-string v0, "false"

    invoke-static {p1, v0}, Lcom/bianfeng/paylib/YmnWebpaySdk;->access$202(Lcom/bianfeng/paylib/YmnWebpaySdk;Ljava/lang/String;)Ljava/lang/String;

    return-void
.end method

.method public onSuccess(Ljava/lang/String;)V
    .locals 1

    .line 72
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getAppConfig()Lcom/bianfeng/utilslib/AppConfigUtils;

    invoke-static {}, Lcom/bianfeng/utilslib/AppConfigUtils;->getInstance()Lcom/bianfeng/utilslib/AppConfigUtils;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/bianfeng/utilslib/AppConfigUtils;->setNetIp(Ljava/lang/String;)V

    .line 73
    iget-object p1, p0, Lcom/bianfeng/paylib/YmnWebpaySdk$2;->this$0:Lcom/bianfeng/paylib/YmnWebpaySdk;

    const-string v0, "true"

    invoke-static {p1, v0}, Lcom/bianfeng/paylib/YmnWebpaySdk;->access$202(Lcom/bianfeng/paylib/YmnWebpaySdk;Ljava/lang/String;)Ljava/lang/String;

    return-void
.end method
