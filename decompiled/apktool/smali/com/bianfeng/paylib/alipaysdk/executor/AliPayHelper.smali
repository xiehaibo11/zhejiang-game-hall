.class public Lcom/bianfeng/paylib/alipaysdk/executor/AliPayHelper;
.super Ljava/lang/Object;
.source "AliPayHelper.java"

# interfaces
.implements Landroid/os/Handler$Callback;


# static fields
.field public static final MSG_PROCESS_ERROR:I = 0x1

.field public static final MSG_PROCESS_PAY_RESULT:I = 0x0

.field private static final TAG:Ljava/lang/String; = "AliPayHelper"

.field public static onPaying:Z

.field private static resultStatus:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# instance fields
.field private activity:Landroid/app/Activity;

.field private handler:Landroid/os/Handler;

.field private listener:Lcom/bianfeng/paylib/alipaysdk/OnPayListener;

.field private orderInfo:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 25
    new-instance v0, Lcom/bianfeng/paylib/alipaysdk/executor/AliPayHelper$1;

    invoke-direct {v0}, Lcom/bianfeng/paylib/alipaysdk/executor/AliPayHelper$1;-><init>()V

    sput-object v0, Lcom/bianfeng/paylib/alipaysdk/executor/AliPayHelper;->resultStatus:Ljava/util/Map;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0

    .line 52
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 53
    iput-object p1, p0, Lcom/bianfeng/paylib/alipaysdk/executor/AliPayHelper;->activity:Landroid/app/Activity;

    .line 55
    new-instance p1, Landroid/os/Handler;

    invoke-direct {p1, p0}, Landroid/os/Handler;-><init>(Landroid/os/Handler$Callback;)V

    iput-object p1, p0, Lcom/bianfeng/paylib/alipaysdk/executor/AliPayHelper;->handler:Landroid/os/Handler;

    return-void
.end method

.method static synthetic access$000(Lcom/bianfeng/paylib/alipaysdk/executor/AliPayHelper;Ljava/lang/String;)Z
    .locals 0

    .line 18
    invoke-direct {p0, p1}, Lcom/bianfeng/paylib/alipaysdk/executor/AliPayHelper;->onPay(Ljava/lang/String;)Z

    move-result p0

    return p0
.end method

.method private closeProgress()V
    .locals 0

    return-void
.end method

.method private onPay(Ljava/lang/String;)Z
    .locals 0

    const/4 p1, 0x0

    .line 85
    sput-boolean p1, Lcom/bianfeng/paylib/alipaysdk/executor/AliPayHelper;->onPaying:Z

    const/4 p1, 0x1

    return p1
.end method

.method private sendMsgOnFinishPay(ILjava/lang/String;)V
    .locals 1

    .line 105
    :try_start_0
    iget-object v0, p0, Lcom/bianfeng/paylib/alipaysdk/executor/AliPayHelper;->handler:Landroid/os/Handler;

    invoke-virtual {v0, p1}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object p1

    .line 106
    iput-object p2, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 107
    invoke-virtual {p1}, Landroid/os/Message;->sendToTarget()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 109
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method private toInt(Ljava/lang/String;)I
    .locals 0

    .line 150
    :try_start_0
    invoke-static {p1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :catch_0
    move-exception p1

    .line 152
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    const/4 p1, -0x1

    return p1
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)Z
    .locals 3

    .line 115
    invoke-direct {p0}, Lcom/bianfeng/paylib/alipaysdk/executor/AliPayHelper;->closeProgress()V

    .line 116
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Ljava/lang/String;

    .line 118
    iget p1, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x1

    if-eqz p1, :cond_1

    if-eq p1, v1, :cond_0

    goto :goto_0

    .line 120
    :cond_0
    iget-object p1, p0, Lcom/bianfeng/paylib/alipaysdk/executor/AliPayHelper;->listener:Lcom/bianfeng/paylib/alipaysdk/OnPayListener;

    const/16 v1, 0x96

    invoke-interface {p1, v1, v0}, Lcom/bianfeng/paylib/alipaysdk/OnPayListener;->onFailure(ILjava/lang/String;)V

    goto :goto_0

    .line 123
    :cond_1
    new-instance p1, Lcom/bianfeng/paylib/alipaysdk/executor/AlipayResult;

    invoke-direct {p1, v0}, Lcom/bianfeng/paylib/alipaysdk/executor/AlipayResult;-><init>(Ljava/lang/String;)V

    .line 125
    invoke-virtual {p1}, Lcom/bianfeng/paylib/alipaysdk/executor/AlipayResult;->getResultStatus()Ljava/lang/String;

    move-result-object p1

    .line 127
    invoke-static {v0}, Lcom/bianfeng/paylib/alipaysdk/executor/AlipayRsa;->checkSign(Ljava/lang/String;)I

    move-result v0

    if-ne v0, v1, :cond_2

    .line 131
    iget-object p1, p0, Lcom/bianfeng/paylib/alipaysdk/executor/AliPayHelper;->listener:Lcom/bianfeng/paylib/alipaysdk/OnPayListener;

    sget-object v1, Lcom/bianfeng/paylib/alipaysdk/executor/AliPayHelper;->resultStatus:Ljava/util/Map;

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-interface {v1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-interface {p1, v0, v1}, Lcom/bianfeng/paylib/alipaysdk/OnPayListener;->onFailure(ILjava/lang/String;)V

    goto :goto_0

    :cond_2
    const-string v0, "9000"

    .line 136
    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 137
    iget-object p1, p0, Lcom/bianfeng/paylib/alipaysdk/executor/AliPayHelper;->listener:Lcom/bianfeng/paylib/alipaysdk/OnPayListener;

    iget-object v0, p0, Lcom/bianfeng/paylib/alipaysdk/executor/AliPayHelper;->orderInfo:Ljava/lang/String;

    invoke-interface {p1, v0}, Lcom/bianfeng/paylib/alipaysdk/OnPayListener;->onSuccess(Ljava/lang/String;)V

    goto :goto_0

    .line 139
    :cond_3
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "pay fail, code is "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/utilslib/Logger;->e(Ljava/lang/String;)I

    .line 140
    iget-object v0, p0, Lcom/bianfeng/paylib/alipaysdk/executor/AliPayHelper;->listener:Lcom/bianfeng/paylib/alipaysdk/OnPayListener;

    invoke-direct {p0, p1}, Lcom/bianfeng/paylib/alipaysdk/executor/AliPayHelper;->toInt(Ljava/lang/String;)I

    move-result v1

    sget-object v2, Lcom/bianfeng/paylib/alipaysdk/executor/AliPayHelper;->resultStatus:Ljava/util/Map;

    invoke-interface {v2, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    invoke-interface {v0, v1, p1}, Lcom/bianfeng/paylib/alipaysdk/OnPayListener;->onFailure(ILjava/lang/String;)V

    :goto_0
    const/4 p1, 0x0

    return p1
.end method

.method public start(Ljava/lang/String;Lcom/bianfeng/paylib/alipaysdk/OnPayListener;)V
    .locals 1

    .line 63
    sget-boolean v0, Lcom/bianfeng/paylib/alipaysdk/executor/AliPayHelper;->onPaying:Z

    if-eqz v0, :cond_0

    .line 64
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object p1

    const-string p2, "ali pay is running"

    invoke-virtual {p1, p2}, Lcom/bianfeng/utilslib/Logger;->e(Ljava/lang/String;)I

    return-void

    :cond_0
    const/4 v0, 0x1

    .line 67
    sput-boolean v0, Lcom/bianfeng/paylib/alipaysdk/executor/AliPayHelper;->onPaying:Z

    .line 69
    iput-object p1, p0, Lcom/bianfeng/paylib/alipaysdk/executor/AliPayHelper;->orderInfo:Ljava/lang/String;

    .line 70
    iput-object p2, p0, Lcom/bianfeng/paylib/alipaysdk/executor/AliPayHelper;->listener:Lcom/bianfeng/paylib/alipaysdk/OnPayListener;

    .line 71
    new-instance p2, Ljava/lang/Thread;

    new-instance v0, Lcom/bianfeng/paylib/alipaysdk/executor/AliPayHelper$2;

    invoke-direct {v0, p0, p1}, Lcom/bianfeng/paylib/alipaysdk/executor/AliPayHelper$2;-><init>(Lcom/bianfeng/paylib/alipaysdk/executor/AliPayHelper;Ljava/lang/String;)V

    invoke-direct {p2, v0}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 76
    invoke-virtual {p2}, Ljava/lang/Thread;->start()V

    return-void
.end method
