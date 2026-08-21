.class Lcom/bianfeng/ymnsdk/wechat/WechatInterface$1;
.super Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;
.source "WechatInterface.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->onInit(Landroid/content/Context;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/ymnsdk/wechat/WechatInterface;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/wechat/WechatInterface;)V
    .locals 0

    .line 86
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/wechat/WechatInterface$1;->this$0:Lcom/bianfeng/ymnsdk/wechat/WechatInterface;

    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;-><init>()V

    return-void
.end method


# virtual methods
.method public onCallBack(ILjava/lang/String;)V
    .locals 3

    const/16 v0, 0x66

    if-ne p1, v0, :cond_0

    .line 90
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/wechat/WechatInterface$1;->this$0:Lcom/bianfeng/ymnsdk/wechat/WechatInterface;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->getUserInfo()Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/bianfeng/ymnsdk/wechat/WechatInterface$1;->this$0:Lcom/bianfeng/ymnsdk/wechat/WechatInterface;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->getUserInfo()Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->getResonseExt()Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 91
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/wechat/WechatInterface$1;->this$0:Lcom/bianfeng/ymnsdk/wechat/WechatInterface;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->getUserInfo()Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->getResonseExt()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 93
    :try_start_0
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 94
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, v0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 95
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/wechat/WechatInterface$1;->this$0:Lcom/bianfeng/ymnsdk/wechat/WechatInterface;

    const-string v2, "refresh_token"

    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->saveResponse(Ljava/lang/String;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 98
    invoke-virtual {v0}, Lorg/json/JSONException;->printStackTrace()V

    goto :goto_0

    :cond_0
    const/16 v0, 0x69

    if-ne p1, v0, :cond_1

    .line 102
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/wechat/WechatInterface$1;->this$0:Lcom/bianfeng/ymnsdk/wechat/WechatInterface;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->clearResponse()V

    .line 104
    :cond_1
    :goto_0
    invoke-super {p0, p1, p2}, Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;->onCallBack(ILjava/lang/String;)V

    return-void
.end method
