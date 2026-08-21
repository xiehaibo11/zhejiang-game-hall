.class Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface$1;
.super Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;
.source "WechatSupportInterface.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;->onInit(Landroid/content/Context;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;)V
    .locals 0

    .line 69
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface$1;->this$0:Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;

    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;-><init>()V

    return-void
.end method


# virtual methods
.method public onCallBack(ILjava/lang/String;)V
    .locals 3

    const/16 v0, 0x66

    if-ne p1, v0, :cond_0

    .line 73
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface$1;->this$0:Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;->getUserInfo()Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface$1;->this$0:Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;->getUserInfo()Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->getResonseExt()Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 74
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface$1;->this$0:Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;->getUserInfo()Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->getResonseExt()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 76
    :try_start_0
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 77
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, v0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 78
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface$1;->this$0:Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;

    const-string v2, "refresh_token"

    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;->saveResponse(Ljava/lang/String;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 81
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "addCallbackInterceptor--"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lorg/json/JSONException;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    goto :goto_0

    :cond_0
    const/16 v0, 0x69

    if-ne p1, v0, :cond_1

    .line 85
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface$1;->this$0:Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;->clearResponse()V

    .line 87
    :cond_1
    :goto_0
    invoke-super {p0, p1, p2}, Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;->onCallBack(ILjava/lang/String;)V

    return-void
.end method
