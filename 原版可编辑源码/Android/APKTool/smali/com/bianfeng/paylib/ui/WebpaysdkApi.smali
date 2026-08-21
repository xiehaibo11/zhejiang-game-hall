.class public Lcom/bianfeng/paylib/ui/WebpaysdkApi;
.super Ljava/lang/Object;
.source "WebpaysdkApi.java"


# static fields
.field private static webpaysdkApi:Lcom/bianfeng/paylib/ui/WebpaysdkApi;


# instance fields
.field private callback:Lcom/bianfeng/paylib/ui/WebpaysdkCallback;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 11
    new-instance v0, Lcom/bianfeng/paylib/ui/WebpaysdkApi;

    invoke-direct {v0}, Lcom/bianfeng/paylib/ui/WebpaysdkApi;-><init>()V

    sput-object v0, Lcom/bianfeng/paylib/ui/WebpaysdkApi;->webpaysdkApi:Lcom/bianfeng/paylib/ui/WebpaysdkApi;

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 12
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getInstance()Lcom/bianfeng/paylib/ui/WebpaysdkApi;
    .locals 1

    .line 14
    sget-object v0, Lcom/bianfeng/paylib/ui/WebpaysdkApi;->webpaysdkApi:Lcom/bianfeng/paylib/ui/WebpaysdkApi;

    return-object v0
.end method


# virtual methods
.method public getCallback()Lcom/bianfeng/paylib/ui/WebpaysdkCallback;
    .locals 1

    .line 23
    iget-object v0, p0, Lcom/bianfeng/paylib/ui/WebpaysdkApi;->callback:Lcom/bianfeng/paylib/ui/WebpaysdkCallback;

    return-object v0
.end method

.method public setCallback(Lcom/bianfeng/paylib/ui/WebpaysdkCallback;)V
    .locals 0

    .line 19
    iput-object p1, p0, Lcom/bianfeng/paylib/ui/WebpaysdkApi;->callback:Lcom/bianfeng/paylib/ui/WebpaysdkCallback;

    return-void
.end method

.method public startAliWebpay(Landroid/content/Context;Lcom/bianfeng/paylib/entity/YmnAliWebpayEntity;)V
    .locals 0

    .line 47
    invoke-static {p1, p2}, Lcom/bianfeng/paylib/ui/AliWebPayActivty;->start(Landroid/content/Context;Lcom/bianfeng/paylib/entity/YmnAliWebpayEntity;)V

    return-void
.end method

.method public startAliWebpay(Landroid/content/Context;Ljava/lang/String;)V
    .locals 0

    .line 43
    invoke-static {p1, p2}, Lcom/bianfeng/paylib/ui/AliWebPayActivty;->start(Landroid/content/Context;Ljava/lang/String;)V

    return-void
.end method

.method public startPayment(Landroid/content/Context;)V
    .locals 0

    .line 27
    invoke-static {p1}, Lcom/bianfeng/paylib/ui/WebpaysdkPaymentActivity;->start(Landroid/content/Context;)V

    return-void
.end method

.method public startPaymentWeb(Landroid/content/Context;Ljava/lang/String;)V
    .locals 0

    .line 31
    invoke-static {p1, p2}, Lcom/bianfeng/paylib/ui/PaymentWebActivity;->start(Landroid/content/Context;Ljava/lang/String;)V

    return-void
.end method

.method public startWxWebpay(Landroid/content/Context;Lcom/bianfeng/paylib/entity/YmnWxWebpayEntity;)V
    .locals 0

    .line 39
    invoke-static {p1, p2}, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->start(Landroid/content/Context;Lcom/bianfeng/paylib/entity/YmnWxWebpayEntity;)V

    return-void
.end method

.method public startWxWebpay(Landroid/content/Context;Ljava/lang/String;)V
    .locals 0

    .line 35
    invoke-static {p1, p2}, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->start(Landroid/content/Context;Ljava/lang/String;)V

    return-void
.end method
