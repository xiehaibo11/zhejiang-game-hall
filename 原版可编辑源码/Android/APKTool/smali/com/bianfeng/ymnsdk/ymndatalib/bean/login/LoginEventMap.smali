.class public Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;
.super Ljava/lang/Object;
.source "LoginEventMap.java"


# static fields
.field public static volatile loginEventMap:Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;


# instance fields
.field public loginAsynServerName:Ljava/lang/String;

.field public loginCheckServerName:Ljava/lang/String;

.field public loginCustomServerName:Ljava/lang/String;

.field public loginOldServerName:Ljava/lang/String;

.field public startCallSdkTime:J

.field public startCheckRequestTime:J

.field public startCustomTime:J

.field public startOldRequestTime:J

.field public startRequestTime:J


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 2
    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->startCallSdkTime:J

    .line 3
    iput-wide v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->startRequestTime:J

    .line 4
    iput-wide v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->startOldRequestTime:J

    .line 5
    iput-wide v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->startCheckRequestTime:J

    .line 6
    iput-wide v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->startCustomTime:J

    .line 7
    const-string v0, ""

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->loginAsynServerName:Ljava/lang/String;

    .line 8
    iput-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->loginOldServerName:Ljava/lang/String;

    .line 9
    iput-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->loginCheckServerName:Ljava/lang/String;

    .line 10
    iput-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->loginCustomServerName:Ljava/lang/String;

    return-void
.end method

.method public static getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;
    .locals 2

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->loginEventMap:Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;

    if-nez v0, :cond_1

    .line 2
    const-class v0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;

    monitor-enter v0

    .line 3
    :try_start_0
    sget-object v1, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->loginEventMap:Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;

    if-nez v1, :cond_0

    .line 4
    new-instance v1, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;

    invoke-direct {v1}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;-><init>()V

    sput-object v1, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->loginEventMap:Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;

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
    sget-object v0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->loginEventMap:Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;

    return-object v0
.end method

.method private onLoginDataEvent(ILjava/lang/String;Ljava/lang/Long;Ljava/lang/String;Ljava/lang/String;I)V
    .locals 1

    .line 1
    new-instance v0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/ResponseDataUtils;

    invoke-direct {v0, p1, p2, p3}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/ResponseDataUtils;-><init>(ILjava/lang/String;Ljava/lang/Long;)V

    .line 2
    new-instance p1, Lcom/bianfeng/ymnsdk/ymndatalib/b;

    invoke-direct {p1, v0, p4, p5}, Lcom/bianfeng/ymnsdk/ymndatalib/b;-><init>(Lcom/bianfeng/ymnsdk/ymndatalib/utils/ResponseDataUtils;Ljava/lang/String;Ljava/lang/String;)V

    .line 3
    new-instance p2, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;

    const-string p3, "login"

    invoke-direct {p2, p1, p6, p3}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;-><init>(Lcom/bianfeng/ymnsdk/ymndatalib/b;ILjava/lang/String;)V

    invoke-virtual {p2}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->toString()Ljava/lang/String;

    move-result-object p1

    .line 4
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/f;->a()Lcom/bianfeng/ymnsdk/ymndatalib/f;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/bianfeng/ymnsdk/ymndatalib/f;->a(Ljava/lang/String;)V

    return-void
.end method

.method private onLoginDataEvent(ILjava/lang/String;Ljava/lang/Long;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V
    .locals 6

    .line 5
    new-instance v1, Lcom/bianfeng/ymnsdk/ymndatalib/utils/ResponseDataUtils;

    invoke-direct {v1, p1, p2, p3}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/ResponseDataUtils;-><init>(ILjava/lang/String;Ljava/lang/Long;)V

    .line 6
    new-instance p1, Lcom/bianfeng/ymnsdk/ymndatalib/b;

    move-object v0, p1

    move-object v2, p4

    move-object v3, p5

    move-object v4, p7

    move-object v5, p8

    invoke-direct/range {v0 .. v5}, Lcom/bianfeng/ymnsdk/ymndatalib/b;-><init>(Lcom/bianfeng/ymnsdk/ymndatalib/utils/ResponseDataUtils;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 7
    new-instance p2, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;

    const-string p3, "login"

    invoke-direct {p2, p1, p6, p3}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;-><init>(Lcom/bianfeng/ymnsdk/ymndatalib/b;ILjava/lang/String;)V

    invoke-virtual {p2}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->toString()Ljava/lang/String;

    move-result-object p1

    .line 8
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/f;->a()Lcom/bianfeng/ymnsdk/ymndatalib/f;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/bianfeng/ymnsdk/ymndatalib/f;->a(Ljava/lang/String;)V

    return-void
.end method


# virtual methods
.method public loginCustomCallEvent(Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;)V
    .locals 9

    .line 1
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->startCustomTime:J

    .line 2
    iput-object p2, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->loginCustomServerName:Ljava/lang/String;

    .line 3
    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v5

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result v8

    const/4 v3, 0x0

    const-string v4, ""

    move-object v2, p0

    move-object v6, p3

    move-object v7, p2

    invoke-direct/range {v2 .. v8}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->onLoginDataEvent(ILjava/lang/String;Ljava/lang/Long;Ljava/lang/String;Ljava/lang/String;I)V

    return-void
.end method

.method public loginCustomReturnEvent(Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;)V
    .locals 7

    .line 1
    invoke-virtual {p2}, Ljava/lang/Integer;->intValue()I

    move-result v1

    iget-wide v2, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->startCustomTime:J

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    iget-object v5, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->loginCustomServerName:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result v6

    const-string v4, ""

    move-object v0, p0

    move-object v2, p3

    invoke-direct/range {v0 .. v6}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->onLoginDataEvent(ILjava/lang/String;Ljava/lang/Long;Ljava/lang/String;Ljava/lang/String;I)V

    return-void
.end method

.method public loginFinishEvent(Ljava/lang/Integer;Ljava/lang/String;)V
    .locals 7

    .line 1
    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    iget-wide v2, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->startCallSdkTime:J

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    const-string v4, ""

    const-string v5, ""

    const/16 v6, 0x2ee0

    move-object v0, p0

    move-object v2, p2

    invoke-direct/range {v0 .. v6}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->onLoginDataEvent(ILjava/lang/String;Ljava/lang/Long;Ljava/lang/String;Ljava/lang/String;I)V

    return-void
.end method

.method public loginNewRequestEvent(Ljava/lang/String;)V
    .locals 9

    .line 1
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->startRequestTime:J

    .line 2
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->loginAsynServerName:Ljava/lang/String;

    .line 3
    const-string v0, "\u89e6\u53d1loginNewRequestEvent\u57cb\u70b9"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDatalibLogger;->i(Ljava/lang/String;)V

    .line 4
    iget-wide v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->startRequestTime:J

    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v5

    const/4 v3, 0x0

    const-string v4, ""

    const-string v6, ""

    const/16 v8, 0x2712

    move-object v2, p0

    move-object v7, p1

    invoke-direct/range {v2 .. v8}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->onLoginDataEvent(ILjava/lang/String;Ljava/lang/Long;Ljava/lang/String;Ljava/lang/String;I)V

    return-void
.end method

.method public loginNewResponseEvent(Ljava/lang/Integer;Ljava/lang/String;)V
    .locals 7

    .line 1
    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    iget-wide v2, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->startRequestTime:J

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    iget-object v5, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->loginAsynServerName:Ljava/lang/String;

    const-string v4, ""

    const/16 v6, 0x2713

    move-object v0, p0

    move-object v2, p2

    invoke-direct/range {v0 .. v6}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->onLoginDataEvent(ILjava/lang/String;Ljava/lang/Long;Ljava/lang/String;Ljava/lang/String;I)V

    return-void
.end method

.method public loginOldRequestCheckEvent(Ljava/lang/String;)V
    .locals 9

    .line 1
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->startCheckRequestTime:J

    .line 2
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->loginCheckServerName:Ljava/lang/String;

    .line 3
    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v5

    const/4 v3, 0x0

    const-string v4, ""

    const-string v6, ""

    const/16 v8, 0x2726

    move-object v2, p0

    move-object v7, p1

    invoke-direct/range {v2 .. v8}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->onLoginDataEvent(ILjava/lang/String;Ljava/lang/Long;Ljava/lang/String;Ljava/lang/String;I)V

    return-void
.end method

.method public loginOldRequestEvent(Ljava/lang/String;)V
    .locals 9

    .line 1
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->startOldRequestTime:J

    .line 2
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->loginOldServerName:Ljava/lang/String;

    .line 3
    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v5

    const/4 v3, 0x0

    const-string v4, ""

    const-string v6, ""

    const/16 v8, 0x271c

    move-object v2, p0

    move-object v7, p1

    invoke-direct/range {v2 .. v8}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->onLoginDataEvent(ILjava/lang/String;Ljava/lang/Long;Ljava/lang/String;Ljava/lang/String;I)V

    return-void
.end method

.method public loginOldResponseCheckEvent(Ljava/lang/Integer;Ljava/lang/String;)V
    .locals 7

    .line 1
    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    iget-wide v2, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->startCheckRequestTime:J

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    iget-object v5, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->loginCheckServerName:Ljava/lang/String;

    const-string v4, ""

    const/16 v6, 0x2727

    move-object v0, p0

    move-object v2, p2

    invoke-direct/range {v0 .. v6}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->onLoginDataEvent(ILjava/lang/String;Ljava/lang/Long;Ljava/lang/String;Ljava/lang/String;I)V

    return-void
.end method

.method public loginOldResponseEvent(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 11

    .line 1
    iget-wide v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->startOldRequestTime:J

    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v5

    iget-object v7, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->loginOldServerName:Ljava/lang/String;

    const-string v6, ""

    const/16 v8, 0x271d

    move-object v2, p0

    move v3, p1

    move-object v4, p2

    move-object v9, p3

    move-object v10, p4

    invoke-direct/range {v2 .. v10}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->onLoginDataEvent(ILjava/lang/String;Ljava/lang/Long;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public loginSdkReturnEvent(Ljava/lang/Integer;Ljava/lang/String;)V
    .locals 8

    .line 1
    const-string v0, "\u89e6\u53d1 loginSdkReturnEvent \u57cb\u70b9"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDatalibLogger;->i(Ljava/lang/String;)V

    .line 2
    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result v2

    iget-wide v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->startCallSdkTime:J

    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v4

    const-string v5, ""

    const-string v6, ""

    const/16 v7, 0x2711

    move-object v1, p0

    move-object v3, p2

    invoke-direct/range {v1 .. v7}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->onLoginDataEvent(ILjava/lang/String;Ljava/lang/Long;Ljava/lang/String;Ljava/lang/String;I)V

    return-void
.end method

.method public loginStartEvent()V
    .locals 9

    .line 1
    const-string v0, "\u89e6\u53d1loginStartEvent\u57cb\u70b9"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDatalibLogger;->i(Ljava/lang/String;)V

    .line 2
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->getStartLoginTrace()Ljava/lang/String;

    .line 3
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->startCallSdkTime:J

    .line 4
    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v5

    const/4 v3, 0x0

    const-string v4, ""

    const-string v6, ""

    const-string v7, ""

    const/16 v8, 0x2710

    move-object v2, p0

    invoke-direct/range {v2 .. v8}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->onLoginDataEvent(ILjava/lang/String;Ljava/lang/Long;Ljava/lang/String;Ljava/lang/String;I)V

    return-void
.end method
