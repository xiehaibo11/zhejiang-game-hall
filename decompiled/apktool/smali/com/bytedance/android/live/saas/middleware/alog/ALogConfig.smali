.class public Lcom/bytedance/android/live/saas/middleware/alog/ALogConfig;
.super Ljava/lang/Object;


# instance fields
.field private aLogService:Lcom/bytedance/android/live/saas/middleware/alog/ILogProtocol;

.field private isDebug:Z

.field private standalone:Z


# direct methods
.method public constructor <init>(Lcom/bytedance/android/live/saas/middleware/alog/ILogProtocol;Z)V
    .locals 1

    const/4 v0, 0x0

    .line 17
    invoke-direct {p0, p1, p2, v0}, Lcom/bytedance/android/live/saas/middleware/alog/ALogConfig;-><init>(Lcom/bytedance/android/live/saas/middleware/alog/ILogProtocol;ZZ)V

    return-void
.end method

.method public constructor <init>(Lcom/bytedance/android/live/saas/middleware/alog/ILogProtocol;ZZ)V
    .locals 1

    .line 20
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x1

    .line 12
    iput-boolean v0, p0, Lcom/bytedance/android/live/saas/middleware/alog/ALogConfig;->standalone:Z

    const/4 v0, 0x0

    .line 14
    iput-boolean v0, p0, Lcom/bytedance/android/live/saas/middleware/alog/ALogConfig;->isDebug:Z

    .line 21
    iput-object p1, p0, Lcom/bytedance/android/live/saas/middleware/alog/ALogConfig;->aLogService:Lcom/bytedance/android/live/saas/middleware/alog/ILogProtocol;

    .line 22
    iput-boolean p2, p0, Lcom/bytedance/android/live/saas/middleware/alog/ALogConfig;->standalone:Z

    .line 23
    iput-boolean p3, p0, Lcom/bytedance/android/live/saas/middleware/alog/ALogConfig;->isDebug:Z

    return-void
.end method


# virtual methods
.method public getALogService()Lcom/bytedance/android/live/saas/middleware/alog/ILogProtocol;
    .locals 1

    .line 27
    iget-object v0, p0, Lcom/bytedance/android/live/saas/middleware/alog/ALogConfig;->aLogService:Lcom/bytedance/android/live/saas/middleware/alog/ILogProtocol;

    return-object v0
.end method

.method public getStandalone()Z
    .locals 1

    .line 35
    iget-boolean v0, p0, Lcom/bytedance/android/live/saas/middleware/alog/ALogConfig;->standalone:Z

    return v0
.end method

.method public isDebug()Z
    .locals 1

    .line 43
    iget-boolean v0, p0, Lcom/bytedance/android/live/saas/middleware/alog/ALogConfig;->isDebug:Z

    return v0
.end method

.method public setALogService(Lcom/bytedance/android/live/saas/middleware/alog/ILogProtocol;)V
    .locals 0

    .line 31
    iput-object p1, p0, Lcom/bytedance/android/live/saas/middleware/alog/ALogConfig;->aLogService:Lcom/bytedance/android/live/saas/middleware/alog/ILogProtocol;

    return-void
.end method

.method public setDebug(Z)V
    .locals 0

    .line 47
    iput-boolean p1, p0, Lcom/bytedance/android/live/saas/middleware/alog/ALogConfig;->isDebug:Z

    return-void
.end method

.method public setStandalone(Z)V
    .locals 0

    .line 39
    iput-boolean p1, p0, Lcom/bytedance/android/live/saas/middleware/alog/ALogConfig;->standalone:Z

    return-void
.end method
