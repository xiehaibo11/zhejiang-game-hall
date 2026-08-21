.class public Lcom/bianfeng/ymnsdk/wechat/WXPayEntryActivity;
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

    .line 14
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    return-void
.end method


# virtual methods
.method public onCreate(Landroid/os/Bundle;)V
    .locals 1

    .line 21
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    const-string p1, "ymnsdk"

    const-string v0, "WXPayEntryActivity onCreate"

    .line 22
    invoke-static {p1, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    const/4 p1, 0x0

    .line 23
    invoke-static {p0, p1}, Lcom/tencent/mm/opensdk/openapi/WXAPIFactory;->createWXAPI(Landroid/content/Context;Ljava/lang/String;)Lcom/tencent/mm/opensdk/openapi/IWXAPI;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/wechat/WXPayEntryActivity;->api:Lcom/tencent/mm/opensdk/openapi/IWXAPI;

    .line 24
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/wechat/WXPayEntryActivity;->getIntent()Landroid/content/Intent;

    move-result-object v0

    invoke-interface {p1, v0, p0}, Lcom/tencent/mm/opensdk/openapi/IWXAPI;->handleIntent(Landroid/content/Intent;Lcom/tencent/mm/opensdk/openapi/IWXAPIEventHandler;)Z

    return-void
.end method

.method protected onNewIntent(Landroid/content/Intent;)V
    .locals 1

    .line 29
    invoke-super {p0, p1}, Landroid/app/Activity;->onNewIntent(Landroid/content/Intent;)V

    .line 30
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/wechat/WXPayEntryActivity;->setIntent(Landroid/content/Intent;)V

    .line 31
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/wechat/WXPayEntryActivity;->api:Lcom/tencent/mm/opensdk/openapi/IWXAPI;

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/wechat/WXPayEntryActivity;->getIntent()Landroid/content/Intent;

    move-result-object v0

    invoke-interface {p1, v0, p0}, Lcom/tencent/mm/opensdk/openapi/IWXAPI;->handleIntent(Landroid/content/Intent;Lcom/tencent/mm/opensdk/openapi/IWXAPIEventHandler;)Z

    return-void
.end method

.method public onReq(Lcom/tencent/mm/opensdk/modelbase/BaseReq;)V
    .locals 2

    .line 36
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onReq, req = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p1, ""

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "ymnsdk"

    invoke-static {v0, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method public onResp(Lcom/tencent/mm/opensdk/modelbase/BaseResp;)V
    .locals 2

    .line 41
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onPayFinish, errCode = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p1, p1, Lcom/tencent/mm/opensdk/modelbase/BaseResp;->errCode:I

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "ymnsdk"

    invoke-static {v0, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 54
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/wechat/WXPayEntryActivity;->finish()V

    return-void
.end method
