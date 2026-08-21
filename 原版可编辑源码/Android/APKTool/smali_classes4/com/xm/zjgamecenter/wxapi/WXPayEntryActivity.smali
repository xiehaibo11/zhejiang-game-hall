.class public Lcom/xm/zjgamecenter/wxapi/WXPayEntryActivity;
.super Landroid/app/Activity;
.source "WXPayEntryActivity.java"

# interfaces
.implements Lcom/tencent/mm/opensdk/openapi/IWXAPIEventHandler;


# static fields
.field private static final TAG:Ljava/lang/String; = "ymnsdk"


# instance fields
.field private api:Lcom/tencent/mm/opensdk/openapi/IWXAPI;


# direct methods
.method public constructor <init>()V
    .locals 0

    .prologue
    .line 16
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    return-void
.end method


# virtual methods
.method public onCreate(Landroid/os/Bundle;)V
    .locals 2
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .prologue
    .line 23
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 24
    const-string v0, "WXPayEntryActivity"

    const-string v1, "WXPayEntryActivity onCreate"

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 25
    const/4 v0, 0x0

    invoke-static {p0, v0}, Lcom/tencent/mm/opensdk/openapi/WXAPIFactory;->createWXAPI(Landroid/content/Context;Ljava/lang/String;)Lcom/tencent/mm/opensdk/openapi/IWXAPI;

    move-result-object v0

    iput-object v0, p0, Lcom/xm/zjgamecenter/wxapi/WXPayEntryActivity;->api:Lcom/tencent/mm/opensdk/openapi/IWXAPI;

    .line 26
    iget-object v0, p0, Lcom/xm/zjgamecenter/wxapi/WXPayEntryActivity;->api:Lcom/tencent/mm/opensdk/openapi/IWXAPI;

    invoke-virtual {p0}, Lcom/xm/zjgamecenter/wxapi/WXPayEntryActivity;->getIntent()Landroid/content/Intent;

    move-result-object v1

    invoke-interface {v0, v1, p0}, Lcom/tencent/mm/opensdk/openapi/IWXAPI;->handleIntent(Landroid/content/Intent;Lcom/tencent/mm/opensdk/openapi/IWXAPIEventHandler;)Z

    .line 27
    return-void
.end method

.method protected onNewIntent(Landroid/content/Intent;)V
    .locals 2
    .param p1, "intent"    # Landroid/content/Intent;

    .prologue
    .line 31
    invoke-super {p0, p1}, Landroid/app/Activity;->onNewIntent(Landroid/content/Intent;)V

    .line 32
    invoke-virtual {p0, p1}, Lcom/xm/zjgamecenter/wxapi/WXPayEntryActivity;->setIntent(Landroid/content/Intent;)V

    .line 33
    iget-object v0, p0, Lcom/xm/zjgamecenter/wxapi/WXPayEntryActivity;->api:Lcom/tencent/mm/opensdk/openapi/IWXAPI;

    invoke-virtual {p0}, Lcom/xm/zjgamecenter/wxapi/WXPayEntryActivity;->getIntent()Landroid/content/Intent;

    move-result-object v1

    invoke-interface {v0, v1, p0}, Lcom/tencent/mm/opensdk/openapi/IWXAPI;->handleIntent(Landroid/content/Intent;Lcom/tencent/mm/opensdk/openapi/IWXAPIEventHandler;)Z

    .line 34
    return-void
.end method

.method public onReq(Lcom/tencent/mm/opensdk/modelbase/BaseReq;)V
    .locals 3
    .param p1, "req"    # Lcom/tencent/mm/opensdk/modelbase/BaseReq;

    .prologue
    .line 38
    const-string v0, "WXPayEntryActivity"

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "onReq, req = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    move-result-object v1

    const-string v2, ""

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 39
    return-void
.end method

.method public onResp(Lcom/tencent/mm/opensdk/modelbase/BaseResp;)V
    .locals 3
    .param p1, "resp"    # Lcom/tencent/mm/opensdk/modelbase/BaseResp;

    .prologue
    .line 43
    const-string v0, "WXPayEntryActivity"

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "onPayFinish, errCode = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v1

    iget v2, p1, Lcom/tencent/mm/opensdk/modelbase/BaseResp;->errCode:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 45
    iget v0, p1, Lcom/tencent/mm/opensdk/modelbase/BaseResp;->errCode:I

    packed-switch v0, :pswitch_data_0

    .line 53
    :pswitch_0
    const/16 v0, 0xc9

    const-string v1, "\u652f\u4ed8\u5931\u8d25"

    invoke-static {v0, v1}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->sendLoginResult(ILjava/lang/String;)V

    .line 56
    :goto_0
    invoke-virtual {p0}, Lcom/xm/zjgamecenter/wxapi/WXPayEntryActivity;->finish()V

    .line 57
    return-void

    .line 47
    :pswitch_1
    const/16 v0, 0xc8

    const-string v1, "\u652f\u4ed8\u6210\u529f"

    invoke-static {v0, v1}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->sendLoginResult(ILjava/lang/String;)V

    goto :goto_0

    .line 50
    :pswitch_2
    const/16 v0, 0xca

    const-string v1, "\u53d6\u6d88\u652f\u4ed8"

    invoke-static {v0, v1}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->sendLoginResult(ILjava/lang/String;)V

    goto :goto_0

    .line 45
    :pswitch_data_0
    .packed-switch -0x2
        :pswitch_2
        :pswitch_0
        :pswitch_1
    .end packed-switch
.end method
