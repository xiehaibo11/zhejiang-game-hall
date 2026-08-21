.class public Lcom/bianfeng/paylib/alipaysdk/PaySdk;
.super Ljava/lang/Object;
.source "PaySdk.java"


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 14
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static pay(Landroid/app/Activity;Ljava/lang/String;Lcom/bianfeng/paylib/alipaysdk/OnPayListener;)V
    .locals 1

    .line 20
    new-instance v0, Lcom/bianfeng/paylib/alipaysdk/executor/AliPayHelper;

    invoke-direct {v0, p0}, Lcom/bianfeng/paylib/alipaysdk/executor/AliPayHelper;-><init>(Landroid/app/Activity;)V

    invoke-virtual {v0, p1, p2}, Lcom/bianfeng/paylib/alipaysdk/executor/AliPayHelper;->start(Ljava/lang/String;Lcom/bianfeng/paylib/alipaysdk/OnPayListener;)V

    return-void
.end method
