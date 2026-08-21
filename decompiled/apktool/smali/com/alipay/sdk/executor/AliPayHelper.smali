.class public Lcom/alipay/sdk/executor/AliPayHelper;
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

.field private listener:Lcom/alipay/sdk/OnPayListener;

.field private orderInfo:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 27
    new-instance v0, Lcom/alipay/sdk/executor/AliPayHelper$1;

    invoke-direct {v0}, Lcom/alipay/sdk/executor/AliPayHelper$1;-><init>()V

    sput-object v0, Lcom/alipay/sdk/executor/AliPayHelper;->resultStatus:Ljava/util/Map;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0

    .line 54
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 55
    iput-object p1, p0, Lcom/alipay/sdk/executor/AliPayHelper;->activity:Landroid/app/Activity;

    .line 57
    new-instance p1, Landroid/os/Handler;

    invoke-direct {p1, p0}, Landroid/os/Handler;-><init>(Landroid/os/Handler$Callback;)V

    iput-object p1, p0, Lcom/alipay/sdk/executor/AliPayHelper;->handler:Landroid/os/Handler;

    return-void
.end method

.method static synthetic access$000(Lcom/alipay/sdk/executor/AliPayHelper;Ljava/lang/String;)Z
    .locals 0

    .line 20
    invoke-direct {p0, p1}, Lcom/alipay/sdk/executor/AliPayHelper;->onPay(Ljava/lang/String;)Z

    move-result p0

    return p0
.end method

.method private closeProgress()V
    .locals 0

    return-void
.end method

.method private onPay(Ljava/lang/String;)Z
    .locals 4

    const/4 v0, 0x0

    .line 91
    sput-boolean v0, Lcom/alipay/sdk/executor/AliPayHelper;->onPaying:Z

    const/4 v1, 0x1

    .line 93
    :try_start_0
    new-instance v2, Lcom/alipay/sdk/app/PayTask;

    iget-object v3, p0, Lcom/alipay/sdk/executor/AliPayHelper;->activity:Landroid/app/Activity;

    invoke-direct {v2, v3}, Lcom/alipay/sdk/app/PayTask;-><init>(Landroid/app/Activity;)V

    .line 94
    invoke-virtual {v2, p1, v1}, Lcom/alipay/sdk/app/PayTask;->pay(Ljava/lang/String;Z)Ljava/lang/String;

    move-result-object p1

    .line 95
    invoke-direct {p0, v0, p1}, Lcom/alipay/sdk/executor/AliPayHelper;->sendMsgOnFinishPay(ILjava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return v1

    :catch_0
    move-exception p1

    .line 98
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 99
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v2

    if-eqz v2, :cond_0

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, v1, p1}, Lcom/alipay/sdk/executor/AliPayHelper;->sendMsgOnFinishPay(ILjava/lang/String;)V

    goto :goto_0

    :cond_0
    const-string p1, "\u8c03\u7528\u652f\u4ed8\u5b9d\u670d\u52a1\u5931\u8d25"

    .line 100
    invoke-direct {p0, v1, p1}, Lcom/alipay/sdk/executor/AliPayHelper;->sendMsgOnFinishPay(ILjava/lang/String;)V

    :goto_0
    return v0
.end method

.method private sendMsgOnFinishPay(ILjava/lang/String;)V
    .locals 1

    .line 111
    :try_start_0
    iget-object v0, p0, Lcom/alipay/sdk/executor/AliPayHelper;->handler:Landroid/os/Handler;

    invoke-virtual {v0, p1}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object p1

    .line 112
    iput-object p2, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 113
    invoke-virtual {p1}, Landroid/os/Message;->sendToTarget()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 115
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method private toInt(Ljava/lang/String;)I
    .locals 0

    .line 157
    :try_start_0
    invoke-static {p1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :catch_0
    move-exception p1

    .line 159
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    const/4 p1, -0x1

    return p1
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)Z
    .locals 3

    .line 121
    invoke-direct {p0}, Lcom/alipay/sdk/executor/AliPayHelper;->closeProgress()V

    .line 122
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Ljava/lang/String;

    .line 124
    iget p1, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x1

    if-eqz p1, :cond_1

    if-eq p1, v1, :cond_0

    goto :goto_0

    .line 126
    :cond_0
    iget-object p1, p0, Lcom/alipay/sdk/executor/AliPayHelper;->listener:Lcom/alipay/sdk/OnPayListener;

    const/16 v1, 0x96

    invoke-interface {p1, v1, v0}, Lcom/alipay/sdk/OnPayListener;->onFailure(ILjava/lang/String;)V

    goto :goto_0

    .line 129
    :cond_1
    new-instance p1, Lcom/alipay/sdk/executor/AlipayResult;

    invoke-direct {p1, v0}, Lcom/alipay/sdk/executor/AlipayResult;-><init>(Ljava/lang/String;)V

    .line 131
    invoke-virtual {p1}, Lcom/alipay/sdk/executor/AlipayResult;->getResultStatus()Ljava/lang/String;

    move-result-object p1

    .line 133
    invoke-static {v0}, Lcom/alipay/sdk/executor/AlipayRsa;->checkSign(Ljava/lang/String;)I

    move-result v0

    if-ne v0, v1, :cond_2

    .line 137
    iget-object p1, p0, Lcom/alipay/sdk/executor/AliPayHelper;->listener:Lcom/alipay/sdk/OnPayListener;

    sget-object v1, Lcom/alipay/sdk/executor/AliPayHelper;->resultStatus:Ljava/util/Map;

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-interface {v1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-interface {p1, v0, v1}, Lcom/alipay/sdk/OnPayListener;->onFailure(ILjava/lang/String;)V

    goto :goto_0

    :cond_2
    const-string v0, "9000"

    .line 143
    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 144
    iget-object p1, p0, Lcom/alipay/sdk/executor/AliPayHelper;->listener:Lcom/alipay/sdk/OnPayListener;

    iget-object v0, p0, Lcom/alipay/sdk/executor/AliPayHelper;->orderInfo:Ljava/lang/String;

    invoke-interface {p1, v0}, Lcom/alipay/sdk/OnPayListener;->onSuccess(Ljava/lang/String;)V

    goto :goto_0

    .line 146
    :cond_3
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "pay fail, code is "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "AliPayHelper"

    invoke-static {v1, v0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    .line 147
    iget-object v0, p0, Lcom/alipay/sdk/executor/AliPayHelper;->listener:Lcom/alipay/sdk/OnPayListener;

    invoke-direct {p0, p1}, Lcom/alipay/sdk/executor/AliPayHelper;->toInt(Ljava/lang/String;)I

    move-result v1

    sget-object v2, Lcom/alipay/sdk/executor/AliPayHelper;->resultStatus:Ljava/util/Map;

    invoke-interface {v2, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    invoke-interface {v0, v1, p1}, Lcom/alipay/sdk/OnPayListener;->onFailure(ILjava/lang/String;)V

    :goto_0
    const/4 p1, 0x0

    return p1
.end method

.method public start(Ljava/lang/String;Lcom/alipay/sdk/OnPayListener;)V
    .locals 1

    .line 65
    sget-boolean v0, Lcom/alipay/sdk/executor/AliPayHelper;->onPaying:Z

    if-eqz v0, :cond_0

    const-string p1, "AliPayHelper"

    const-string p2, "ali pay is running"

    .line 66
    invoke-static {p1, p2}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_0
    const/4 v0, 0x1

    .line 70
    sput-boolean v0, Lcom/alipay/sdk/executor/AliPayHelper;->onPaying:Z

    .line 72
    iput-object p1, p0, Lcom/alipay/sdk/executor/AliPayHelper;->orderInfo:Ljava/lang/String;

    .line 73
    iput-object p2, p0, Lcom/alipay/sdk/executor/AliPayHelper;->listener:Lcom/alipay/sdk/OnPayListener;

    .line 77
    new-instance p2, Ljava/lang/Thread;

    new-instance v0, Lcom/alipay/sdk/executor/AliPayHelper$2;

    invoke-direct {v0, p0, p1}, Lcom/alipay/sdk/executor/AliPayHelper$2;-><init>(Lcom/alipay/sdk/executor/AliPayHelper;Ljava/lang/String;)V

    invoke-direct {p2, v0}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 82
    invoke-virtual {p2}, Ljava/lang/Thread;->start()V

    return-void
.end method
