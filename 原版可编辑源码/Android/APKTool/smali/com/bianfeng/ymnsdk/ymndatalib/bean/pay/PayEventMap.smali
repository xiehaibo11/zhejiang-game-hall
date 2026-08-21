.class public Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;
.super Ljava/lang/Object;
.source "PayEventMap.java"


# static fields
.field public static volatile payEventMap:Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;


# instance fields
.field public customCallMsg:Ljava/lang/String;

.field public orderNo:Ljava/lang/String;

.field public requestCustomServerName:Ljava/lang/String;

.field public requestOrderNotityServerName:Ljava/lang/String;

.field public requestOrderServerName:Ljava/lang/String;

.field public startCallSdkOrderTime:J

.field public startCallSdkTime:J

.field public startCustomTime:J

.field public startNotityTime:J

.field public startRequestOrderListTime:J

.field public startRequestOrderTime:J


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 2
    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->startRequestOrderTime:J

    .line 3
    iput-wide v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->startCallSdkTime:J

    .line 4
    iput-wide v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->startNotityTime:J

    .line 5
    iput-wide v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->startCustomTime:J

    .line 6
    iput-wide v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->startCallSdkOrderTime:J

    .line 7
    iput-wide v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->startRequestOrderListTime:J

    .line 8
    const-string v0, ""

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->requestOrderServerName:Ljava/lang/String;

    .line 9
    iput-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->requestOrderNotityServerName:Ljava/lang/String;

    .line 10
    iput-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->requestCustomServerName:Ljava/lang/String;

    .line 11
    iput-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->customCallMsg:Ljava/lang/String;

    .line 12
    iput-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->orderNo:Ljava/lang/String;

    return-void
.end method

.method private checkNull(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 1
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string p1, ""

    :cond_0
    return-object p1
.end method

.method public static getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;
    .locals 2

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->payEventMap:Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;

    if-nez v0, :cond_1

    .line 2
    const-class v0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;

    monitor-enter v0

    .line 3
    :try_start_0
    sget-object v1, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->payEventMap:Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;

    if-nez v1, :cond_0

    .line 4
    new-instance v1, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;

    invoke-direct {v1}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;-><init>()V

    sput-object v1, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->payEventMap:Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;

    .line 6
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 8
    :cond_1
    :goto_0
    sget-object v0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->payEventMap:Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;

    return-object v0
.end method

.method private getOrderNo(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 1
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 2
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->orderNo:Ljava/lang/String;

    return-object p1

    .line 5
    :cond_0
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p1, "orderNo"

    .line 6
    invoke-virtual {v0, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 8
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->orderNo:Ljava/lang/String;

    return-object p1
.end method

.method private onPayDataEvent(ILjava/lang/String;Ljava/lang/Long;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V
    .locals 1

    .line 1
    new-instance v0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/ResponseDataUtils;

    invoke-direct {v0, p1, p2, p3}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/ResponseDataUtils;-><init>(ILjava/lang/String;Ljava/lang/Long;)V

    .line 2
    invoke-direct {p0, p6}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->checkNull(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 3
    new-instance p2, Lcom/bianfeng/ymnsdk/ymndatalib/d;

    invoke-direct {p2, v0, p4, p5, p1}, Lcom/bianfeng/ymnsdk/ymndatalib/d;-><init>(Lcom/bianfeng/ymnsdk/ymndatalib/utils/ResponseDataUtils;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 4
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/f;->a()Lcom/bianfeng/ymnsdk/ymndatalib/f;

    move-result-object p1

    new-instance p3, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;

    const-string p4, "pay"

    invoke-direct {p3, p2, p7, p4}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;-><init>(Lcom/bianfeng/ymnsdk/ymndatalib/d;ILjava/lang/String;)V

    invoke-virtual {p3}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/bianfeng/ymnsdk/ymndatalib/f;->a(Ljava/lang/String;)V

    return-void
.end method


# virtual methods
.method public payCallSdkEvent()V
    .locals 10

    .line 1
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->startCallSdkTime:J

    .line 2
    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v5

    iget-object v7, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->requestOrderServerName:Ljava/lang/String;

    iget-object v8, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->orderNo:Ljava/lang/String;

    const/4 v3, 0x0

    const-string v4, ""

    const-string v6, ""

    const/16 v9, 0x4e98

    move-object v2, p0

    invoke-direct/range {v2 .. v9}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->onPayDataEvent(ILjava/lang/String;Ljava/lang/Long;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V

    return-void
.end method

.method public payCustomCallEvent(Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;)V
    .locals 10

    .line 1
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->startCustomTime:J

    .line 2
    iput-object p2, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->requestCustomServerName:Ljava/lang/String;

    .line 3
    iput-object p3, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->customCallMsg:Ljava/lang/String;

    .line 4
    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v5

    iget-object v8, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->orderNo:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result v9

    const/4 v3, 0x0

    const-string v4, ""

    move-object v2, p0

    move-object v6, p3

    move-object v7, p2

    invoke-direct/range {v2 .. v9}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->onPayDataEvent(ILjava/lang/String;Ljava/lang/Long;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V

    return-void
.end method

.method public payCustomCallEvent(Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 10

    .line 5
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->startCustomTime:J

    .line 6
    iput-object p3, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->requestCustomServerName:Ljava/lang/String;

    .line 7
    iput-object p4, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->customCallMsg:Ljava/lang/String;

    .line 9
    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v5

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result v9

    const/4 v3, 0x0

    const-string v4, ""

    move-object v2, p0

    move-object v6, p4

    move-object v7, p3

    move-object v8, p2

    invoke-direct/range {v2 .. v9}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->onPayDataEvent(ILjava/lang/String;Ljava/lang/Long;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V

    return-void
.end method

.method public payCustomReturnEvent(Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;)V
    .locals 8

    .line 1
    invoke-virtual {p2}, Ljava/lang/Integer;->intValue()I

    move-result v1

    iget-wide v2, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->startCustomTime:J

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    iget-object v4, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->customCallMsg:Ljava/lang/String;

    iget-object v5, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->requestCustomServerName:Ljava/lang/String;

    iget-object v6, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->orderNo:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result v7

    move-object v0, p0

    move-object v2, p3

    invoke-direct/range {v0 .. v7}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->onPayDataEvent(ILjava/lang/String;Ljava/lang/Long;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V

    return-void
.end method

.method public payCustomReturnEvent(Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/String;)V
    .locals 8

    .line 2
    invoke-virtual {p3}, Ljava/lang/Integer;->intValue()I

    move-result v1

    iget-wide v2, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->startCustomTime:J

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    iget-object v4, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->customCallMsg:Ljava/lang/String;

    iget-object v5, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->requestCustomServerName:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result v7

    move-object v0, p0

    move-object v2, p4

    move-object v6, p2

    invoke-direct/range {v0 .. v7}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->onPayDataEvent(ILjava/lang/String;Ljava/lang/Long;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V

    return-void
.end method

.method public payCustomReturnEvent(Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;)V
    .locals 8

    .line 3
    invoke-virtual {p3}, Ljava/lang/Integer;->intValue()I

    move-result v1

    iget-wide v2, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->startCustomTime:J

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    iget-object v5, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->requestCustomServerName:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result v7

    move-object v0, p0

    move-object v2, p4

    move-object v4, p5

    move-object v6, p2

    invoke-direct/range {v0 .. v7}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->onPayDataEvent(ILjava/lang/String;Ljava/lang/Long;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V

    return-void
.end method

.method public payRequestNotityEvent(Ljava/lang/String;)V
    .locals 10

    .line 1
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->startNotityTime:J

    .line 2
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->requestOrderNotityServerName:Ljava/lang/String;

    .line 3
    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v5

    iget-object v7, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->requestOrderNotityServerName:Ljava/lang/String;

    iget-object v8, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->orderNo:Ljava/lang/String;

    const/4 v3, 0x0

    const-string v4, ""

    const-string v6, ""

    const/16 v9, 0x4eac

    move-object v2, p0

    invoke-direct/range {v2 .. v9}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->onPayDataEvent(ILjava/lang/String;Ljava/lang/Long;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V

    return-void
.end method

.method public payRequestNotityEvent(Ljava/lang/String;Ljava/lang/String;)V
    .locals 10

    .line 4
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->startNotityTime:J

    .line 5
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->requestOrderNotityServerName:Ljava/lang/String;

    .line 6
    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v5

    iget-object v7, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->requestOrderNotityServerName:Ljava/lang/String;

    const/4 v3, 0x0

    const-string v4, ""

    const-string v6, ""

    const/16 v9, 0x4eac

    move-object v2, p0

    move-object v8, p2

    invoke-direct/range {v2 .. v9}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->onPayDataEvent(ILjava/lang/String;Ljava/lang/Long;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V

    return-void
.end method

.method public payRequestOrderEvent(Ljava/lang/String;Ljava/lang/String;)V
    .locals 10

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->requestOrderServerName:Ljava/lang/String;

    .line 2
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->startRequestOrderTime:J

    .line 3
    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v5

    iget-object v7, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->requestOrderServerName:Ljava/lang/String;

    const/4 v3, 0x0

    const-string v4, ""

    const-string v8, ""

    const/16 v9, 0x4e21

    move-object v2, p0

    move-object v6, p2

    invoke-direct/range {v2 .. v9}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->onPayDataEvent(ILjava/lang/String;Ljava/lang/Long;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V

    return-void
.end method

.method public payRequestOrderListSdkEvent()V
    .locals 10

    .line 1
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->startRequestOrderListTime:J

    .line 2
    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v5

    iget-object v7, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->requestOrderServerName:Ljava/lang/String;

    iget-object v8, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->orderNo:Ljava/lang/String;

    const/4 v3, 0x0

    const-string v4, ""

    const-string v6, ""

    const/16 v9, 0x4ea7

    move-object v2, p0

    invoke-direct/range {v2 .. v9}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->onPayDataEvent(ILjava/lang/String;Ljava/lang/Long;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V

    return-void
.end method

.method public payResponseNotityEvent(Ljava/lang/Integer;Ljava/lang/String;)V
    .locals 8

    .line 1
    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    iget-wide v2, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->startNotityTime:J

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    iget-object v5, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->requestOrderNotityServerName:Ljava/lang/String;

    iget-object v6, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->orderNo:Ljava/lang/String;

    const-string v4, ""

    const/16 v7, 0x4eb6

    move-object v0, p0

    move-object v2, p2

    invoke-direct/range {v0 .. v7}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->onPayDataEvent(ILjava/lang/String;Ljava/lang/Long;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V

    return-void
.end method

.method public payResponseNotityEvent(Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;)V
    .locals 8

    .line 2
    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    iget-wide v2, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->startNotityTime:J

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    iget-object v5, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->requestOrderNotityServerName:Ljava/lang/String;

    const-string v4, ""

    const/16 v7, 0x4eb6

    move-object v0, p0

    move-object v2, p3

    move-object v6, p2

    invoke-direct/range {v0 .. v7}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->onPayDataEvent(ILjava/lang/String;Ljava/lang/Long;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V

    return-void
.end method

.method public payResponseOrderEvent(Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;)V
    .locals 8

    .line 1
    iput-object p3, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->orderNo:Ljava/lang/String;

    .line 2
    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    iget-wide v2, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->startRequestOrderTime:J

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    iget-object v5, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->requestOrderServerName:Ljava/lang/String;

    iget-object v6, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->orderNo:Ljava/lang/String;

    const-string v4, ""

    const/16 v7, 0x4e8e

    move-object v0, p0

    move-object v2, p2

    invoke-direct/range {v0 .. v7}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->onPayDataEvent(ILjava/lang/String;Ljava/lang/Long;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V

    return-void
.end method

.method public payResponseOrderListEvent(Ljava/lang/Integer;Ljava/lang/String;)V
    .locals 8

    .line 1
    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    iget-wide v2, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->startRequestOrderListTime:J

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    iget-object v5, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->requestOrderServerName:Ljava/lang/String;

    iget-object v6, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->orderNo:Ljava/lang/String;

    const-string v4, ""

    const/16 v7, 0x4ea8

    move-object v0, p0

    move-object v2, p2

    invoke-direct/range {v0 .. v7}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->onPayDataEvent(ILjava/lang/String;Ljava/lang/Long;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V

    return-void
.end method

.method public paySdkOrderEvent(Ljava/lang/String;)V
    .locals 10

    .line 1
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->startCallSdkOrderTime:J

    .line 2
    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v5

    iget-object v7, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->requestOrderServerName:Ljava/lang/String;

    iget-object v8, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->orderNo:Ljava/lang/String;

    const/4 v3, 0x0

    const-string v4, ""

    const/16 v9, 0x4e93

    move-object v2, p0

    move-object v6, p1

    invoke-direct/range {v2 .. v9}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->onPayDataEvent(ILjava/lang/String;Ljava/lang/Long;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V

    return-void
.end method

.method public paySdkOrderReturnEvent(Ljava/lang/Integer;Ljava/lang/String;)V
    .locals 8

    .line 1
    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    iget-wide v2, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->startCallSdkOrderTime:J

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    iget-object v5, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->requestOrderServerName:Ljava/lang/String;

    iget-object v6, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->orderNo:Ljava/lang/String;

    const-string v4, ""

    const/16 v7, 0x4e94

    move-object v0, p0

    move-object v2, p2

    invoke-direct/range {v0 .. v7}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->onPayDataEvent(ILjava/lang/String;Ljava/lang/Long;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V

    return-void
.end method

.method public paySdkReturnEvent(Ljava/lang/Integer;Ljava/lang/String;)V
    .locals 8

    .line 1
    invoke-direct {p0, p2}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->getOrderNo(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    .line 2
    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    iget-wide v2, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->startCallSdkTime:J

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    iget-object v5, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->requestOrderServerName:Ljava/lang/String;

    const-string v4, ""

    const/16 v7, 0x4ea2

    move-object v0, p0

    move-object v2, p2

    invoke-direct/range {v0 .. v7}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->onPayDataEvent(ILjava/lang/String;Ljava/lang/Long;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V

    return-void
.end method
