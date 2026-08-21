.class public Lcom/alipay/sdk/PaySdk;
.super Ljava/lang/Object;
.source "PaySdk.java"


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 13
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static pay(Landroid/app/Activity;Ljava/lang/String;Lcom/alipay/sdk/OnPayListener;)V
    .locals 1

    .line 19
    new-instance v0, Lcom/alipay/sdk/executor/AliPayHelper;

    invoke-direct {v0, p0}, Lcom/alipay/sdk/executor/AliPayHelper;-><init>(Landroid/app/Activity;)V

    invoke-virtual {v0, p1, p2}, Lcom/alipay/sdk/executor/AliPayHelper;->start(Ljava/lang/String;Lcom/alipay/sdk/OnPayListener;)V

    return-void
.end method
