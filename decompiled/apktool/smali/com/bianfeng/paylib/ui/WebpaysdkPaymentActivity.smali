.class public Lcom/bianfeng/paylib/ui/WebpaysdkPaymentActivity;
.super Lcom/bianfeng/baselib/BaseActivity;
.source "WebpaysdkPaymentActivity.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# instance fields
.field private alipay_tv:Landroid/widget/TextView;

.field private plugin_id:Ljava/lang/String;

.field private wxpay_tv:Landroid/widget/TextView;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 15
    invoke-direct {p0}, Lcom/bianfeng/baselib/BaseActivity;-><init>()V

    return-void
.end method

.method private setPayType(Ljava/lang/String;)V
    .locals 0

    .line 66
    iput-object p1, p0, Lcom/bianfeng/paylib/ui/WebpaysdkPaymentActivity;->plugin_id:Ljava/lang/String;

    return-void
.end method

.method public static start(Landroid/content/Context;)V
    .locals 2

    .line 21
    new-instance v0, Landroid/content/Intent;

    const-class v1, Lcom/bianfeng/paylib/ui/WebpaysdkPaymentActivity;

    invoke-direct {v0, p0, v1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const/high16 v1, 0x10000000

    .line 22
    invoke-virtual {v0, v1}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    .line 23
    invoke-virtual {p0, v0}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    return-void
.end method


# virtual methods
.method public getPlugin_id()Ljava/lang/String;
    .locals 4

    .line 74
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "\u652f\u4ed8\u65b9\u5f0f\uff1a"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/bianfeng/paylib/ui/WebpaysdkPaymentActivity;->plugin_id:Ljava/lang/String;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    .line 75
    iget-object v0, p0, Lcom/bianfeng/paylib/ui/WebpaysdkPaymentActivity;->plugin_id:Ljava/lang/String;

    const-string v1, "wx"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 76
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getAppConfig()Lcom/bianfeng/utilslib/AppConfigUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/utilslib/AppConfigUtils;->getYmnsdkWxPayChannelId()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 77
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/paylib/ui/WebpaysdkPaymentActivity;->plugin_id:Ljava/lang/String;

    const-string v1, "aliPay"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 78
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getAppConfig()Lcom/bianfeng/utilslib/AppConfigUtils;

    move-result-object v2

    invoke-virtual {v2}, Lcom/bianfeng/utilslib/AppConfigUtils;->getYmnsdkAliPayChannelId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    .line 79
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getAppConfig()Lcom/bianfeng/utilslib/AppConfigUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/utilslib/AppConfigUtils;->getYmnsdkAliPayChannelId()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 81
    :cond_1
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getAppConfig()Lcom/bianfeng/utilslib/AppConfigUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/utilslib/AppConfigUtils;->getYmnsdkWxPayChannelId()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public onClick(Landroid/view/View;)V
    .locals 5

    .line 44
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v0

    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getResourceManger()Lcom/bianfeng/utilslib/ResourceManger;

    move-result-object v1

    const-string v2, " R.id.webpaypay_btnLeft"

    invoke-virtual {v1, p0, v2}, Lcom/bianfeng/utilslib/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v1

    if-ne v0, v1, :cond_0

    .line 45
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object p1

    const-string v0, "\u53d6\u6d88\u652f\u4ed8"

    invoke-virtual {p1, v0}, Lcom/bianfeng/utilslib/Logger;->e(Ljava/lang/String;)I

    .line 46
    invoke-static {}, Lcom/bianfeng/paylib/ui/WebpaysdkApi;->getInstance()Lcom/bianfeng/paylib/ui/WebpaysdkApi;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/paylib/ui/WebpaysdkApi;->getCallback()Lcom/bianfeng/paylib/ui/WebpaysdkCallback;

    move-result-object p1

    invoke-interface {p1}, Lcom/bianfeng/paylib/ui/WebpaysdkCallback;->onCancel()V

    .line 47
    invoke-virtual {p0}, Lcom/bianfeng/paylib/ui/WebpaysdkPaymentActivity;->finish()V

    goto/16 :goto_0

    .line 48
    :cond_0
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v0

    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getResourceManger()Lcom/bianfeng/utilslib/ResourceManger;

    move-result-object v1

    const-string v2, "R.id.webpaypay_paytype_wx"

    invoke-virtual {v1, p0, v2}, Lcom/bianfeng/utilslib/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v1

    const/16 v2, 0x8

    const/4 v3, 0x0

    if-ne v0, v1, :cond_1

    .line 49
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object p1

    const-string v0, "\u5fae\u4fe1\u652f\u4ed8"

    invoke-virtual {p1, v0}, Lcom/bianfeng/utilslib/Logger;->e(Ljava/lang/String;)I

    .line 50
    iget-object p1, p0, Lcom/bianfeng/paylib/ui/WebpaysdkPaymentActivity;->wxpay_tv:Landroid/widget/TextView;

    invoke-virtual {p1, v3}, Landroid/widget/TextView;->setVisibility(I)V

    .line 51
    iget-object p1, p0, Lcom/bianfeng/paylib/ui/WebpaysdkPaymentActivity;->alipay_tv:Landroid/widget/TextView;

    invoke-virtual {p1, v2}, Landroid/widget/TextView;->setVisibility(I)V

    const-string p1, "wx"

    .line 52
    invoke-direct {p0, p1}, Lcom/bianfeng/paylib/ui/WebpaysdkPaymentActivity;->setPayType(Ljava/lang/String;)V

    goto :goto_0

    .line 53
    :cond_1
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v0

    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getResourceManger()Lcom/bianfeng/utilslib/ResourceManger;

    move-result-object v1

    const-string v4, " R.id.webpaypay_paytype_alipay"

    invoke-virtual {v1, p0, v4}, Lcom/bianfeng/utilslib/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v1

    if-ne v0, v1, :cond_2

    .line 54
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object p1

    const-string v0, "\u652f\u4ed8\u5b9d\u652f\u4ed8"

    invoke-virtual {p1, v0}, Lcom/bianfeng/utilslib/Logger;->e(Ljava/lang/String;)I

    .line 55
    iget-object p1, p0, Lcom/bianfeng/paylib/ui/WebpaysdkPaymentActivity;->alipay_tv:Landroid/widget/TextView;

    invoke-virtual {p1, v3}, Landroid/widget/TextView;->setVisibility(I)V

    .line 56
    iget-object p1, p0, Lcom/bianfeng/paylib/ui/WebpaysdkPaymentActivity;->wxpay_tv:Landroid/widget/TextView;

    invoke-virtual {p1, v2}, Landroid/widget/TextView;->setVisibility(I)V

    const-string p1, "aliPay"

    .line 57
    invoke-direct {p0, p1}, Lcom/bianfeng/paylib/ui/WebpaysdkPaymentActivity;->setPayType(Ljava/lang/String;)V

    goto :goto_0

    .line 58
    :cond_2
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result p1

    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getResourceManger()Lcom/bianfeng/utilslib/ResourceManger;

    move-result-object v0

    const-string v1, "R.id.webpaypay_next_stepbtn"

    invoke-virtual {v0, p0, v1}, Lcom/bianfeng/utilslib/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    if-ne p1, v0, :cond_3

    .line 59
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object p1

    const-string v0, "\u786e\u8ba4\u652f\u4ed8"

    invoke-virtual {p1, v0}, Lcom/bianfeng/utilslib/Logger;->e(Ljava/lang/String;)I

    .line 60
    invoke-static {}, Lcom/bianfeng/paylib/ui/WebpaysdkApi;->getInstance()Lcom/bianfeng/paylib/ui/WebpaysdkApi;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/paylib/ui/WebpaysdkApi;->getCallback()Lcom/bianfeng/paylib/ui/WebpaysdkCallback;

    move-result-object p1

    invoke-virtual {p0}, Lcom/bianfeng/paylib/ui/WebpaysdkPaymentActivity;->getPlugin_id()Ljava/lang/String;

    move-result-object v0

    invoke-interface {p1, v0}, Lcom/bianfeng/paylib/ui/WebpaysdkCallback;->buyNext(Ljava/lang/String;)V

    .line 61
    invoke-virtual {p0}, Lcom/bianfeng/paylib/ui/WebpaysdkPaymentActivity;->finish()V

    :cond_3
    :goto_0
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 2

    .line 28
    invoke-super {p0, p1}, Lcom/bianfeng/baselib/BaseActivity;->onCreate(Landroid/os/Bundle;)V

    .line 29
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getResourceManger()Lcom/bianfeng/utilslib/ResourceManger;

    move-result-object p1

    const-string v0, "R.layout.activity_webpaysdk_payment"

    invoke-virtual {p1, p0, v0}, Lcom/bianfeng/utilslib/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/bianfeng/paylib/ui/WebpaysdkPaymentActivity;->setContentView(I)V

    .line 30
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getResourceManger()Lcom/bianfeng/utilslib/ResourceManger;

    move-result-object p1

    const-string v0, "R.id.webpaypay_paytype_alipay_ok"

    invoke-virtual {p1, p0, v0}, Lcom/bianfeng/utilslib/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/bianfeng/paylib/ui/WebpaysdkPaymentActivity;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/bianfeng/paylib/ui/WebpaysdkPaymentActivity;->alipay_tv:Landroid/widget/TextView;

    .line 31
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getAppConfig()Lcom/bianfeng/utilslib/AppConfigUtils;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/utilslib/AppConfigUtils;->isGetIpSuccess()Z

    move-result p1

    const-string v0, "R.id.webpaypay_paytype_wx"

    if-eqz p1, :cond_0

    .line 32
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getResourceManger()Lcom/bianfeng/utilslib/ResourceManger;

    move-result-object p1

    invoke-virtual {p1, p0, v0}, Lcom/bianfeng/utilslib/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/bianfeng/paylib/ui/WebpaysdkPaymentActivity;->findViewById(I)Landroid/view/View;

    move-result-object p1

    const/4 v1, 0x0

    invoke-virtual {p1, v1}, Landroid/view/View;->setVisibility(I)V

    .line 35
    :cond_0
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getResourceManger()Lcom/bianfeng/utilslib/ResourceManger;

    move-result-object p1

    const-string v1, "R.id.webpaypay_paytype_wx_ok"

    invoke-virtual {p1, p0, v1}, Lcom/bianfeng/utilslib/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/bianfeng/paylib/ui/WebpaysdkPaymentActivity;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/bianfeng/paylib/ui/WebpaysdkPaymentActivity;->wxpay_tv:Landroid/widget/TextView;

    .line 36
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getResourceManger()Lcom/bianfeng/utilslib/ResourceManger;

    move-result-object p1

    const-string v1, "R.id.webpaypay_btnLeft"

    invoke-virtual {p1, p0, v1}, Lcom/bianfeng/utilslib/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/bianfeng/paylib/ui/WebpaysdkPaymentActivity;->findViewById(I)Landroid/view/View;

    move-result-object p1

    invoke-virtual {p1, p0}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 37
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getResourceManger()Lcom/bianfeng/utilslib/ResourceManger;

    move-result-object p1

    invoke-virtual {p1, p0, v0}, Lcom/bianfeng/utilslib/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/bianfeng/paylib/ui/WebpaysdkPaymentActivity;->findViewById(I)Landroid/view/View;

    move-result-object p1

    invoke-virtual {p1, p0}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 38
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getResourceManger()Lcom/bianfeng/utilslib/ResourceManger;

    move-result-object p1

    const-string v0, "R.id.webpaypay_paytype_alipay"

    invoke-virtual {p1, p0, v0}, Lcom/bianfeng/utilslib/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/bianfeng/paylib/ui/WebpaysdkPaymentActivity;->findViewById(I)Landroid/view/View;

    move-result-object p1

    invoke-virtual {p1, p0}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 39
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getResourceManger()Lcom/bianfeng/utilslib/ResourceManger;

    move-result-object p1

    const-string v0, "R.id.webpaypay_next_stepbtn"

    invoke-virtual {p1, p0, v0}, Lcom/bianfeng/utilslib/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/bianfeng/paylib/ui/WebpaysdkPaymentActivity;->findViewById(I)Landroid/view/View;

    move-result-object p1

    invoke-virtual {p1, p0}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method protected onUserLeaveHint()V
    .locals 0

    .line 87
    invoke-super {p0}, Lcom/bianfeng/baselib/BaseActivity;->onUserLeaveHint()V

    .line 88
    invoke-virtual {p0}, Lcom/bianfeng/paylib/ui/WebpaysdkPaymentActivity;->finish()V

    return-void
.end method
