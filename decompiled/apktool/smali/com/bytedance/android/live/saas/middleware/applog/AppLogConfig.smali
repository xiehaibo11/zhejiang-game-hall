.class public Lcom/bytedance/android/live/saas/middleware/applog/AppLogConfig;
.super Ljava/lang/Object;


# instance fields
.field private appLogId:Ljava/lang/String;

.field private hostPermission:Lcom/bytedance/android/live/base/api/IHostPermission;

.field private impl:Lcom/bytedance/android/live/saas/middleware/applog/IAppLog;

.field private isToBVersion:Z

.field private standalone:Z


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 12
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 6
    iput-object v0, p0, Lcom/bytedance/android/live/saas/middleware/applog/AppLogConfig;->impl:Lcom/bytedance/android/live/saas/middleware/applog/IAppLog;

    const/4 v1, 0x0

    .line 7
    iput-boolean v1, p0, Lcom/bytedance/android/live/saas/middleware/applog/AppLogConfig;->standalone:Z

    .line 8
    iput-boolean v1, p0, Lcom/bytedance/android/live/saas/middleware/applog/AppLogConfig;->isToBVersion:Z

    .line 9
    iput-object v0, p0, Lcom/bytedance/android/live/saas/middleware/applog/AppLogConfig;->appLogId:Ljava/lang/String;

    .line 10
    iput-object v0, p0, Lcom/bytedance/android/live/saas/middleware/applog/AppLogConfig;->hostPermission:Lcom/bytedance/android/live/base/api/IHostPermission;

    return-void
.end method

.method public constructor <init>(Lcom/bytedance/android/live/saas/middleware/applog/IAppLog;Z)V
    .locals 1

    const/4 v0, 0x0

    .line 15
    invoke-direct {p0, p1, p2, v0}, Lcom/bytedance/android/live/saas/middleware/applog/AppLogConfig;-><init>(Lcom/bytedance/android/live/saas/middleware/applog/IAppLog;ZZ)V

    return-void
.end method

.method public constructor <init>(Lcom/bytedance/android/live/saas/middleware/applog/IAppLog;ZZ)V
    .locals 1

    const/4 v0, 0x0

    .line 19
    invoke-direct {p0, p1, p2, p3, v0}, Lcom/bytedance/android/live/saas/middleware/applog/AppLogConfig;-><init>(Lcom/bytedance/android/live/saas/middleware/applog/IAppLog;ZZLjava/lang/String;)V

    return-void
.end method

.method public constructor <init>(Lcom/bytedance/android/live/saas/middleware/applog/IAppLog;ZZLjava/lang/String;)V
    .locals 6

    const/4 v5, 0x0

    move-object v0, p0

    move-object v1, p1

    move v2, p2

    move v3, p3

    move-object v4, p4

    .line 23
    invoke-direct/range {v0 .. v5}, Lcom/bytedance/android/live/saas/middleware/applog/AppLogConfig;-><init>(Lcom/bytedance/android/live/saas/middleware/applog/IAppLog;ZZLjava/lang/String;Lcom/bytedance/android/live/base/api/IHostPermission;)V

    return-void
.end method

.method public constructor <init>(Lcom/bytedance/android/live/saas/middleware/applog/IAppLog;ZZLjava/lang/String;Lcom/bytedance/android/live/base/api/IHostPermission;)V
    .locals 2

    .line 25
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 6
    iput-object v0, p0, Lcom/bytedance/android/live/saas/middleware/applog/AppLogConfig;->impl:Lcom/bytedance/android/live/saas/middleware/applog/IAppLog;

    const/4 v1, 0x0

    .line 7
    iput-boolean v1, p0, Lcom/bytedance/android/live/saas/middleware/applog/AppLogConfig;->standalone:Z

    .line 8
    iput-boolean v1, p0, Lcom/bytedance/android/live/saas/middleware/applog/AppLogConfig;->isToBVersion:Z

    .line 9
    iput-object v0, p0, Lcom/bytedance/android/live/saas/middleware/applog/AppLogConfig;->appLogId:Ljava/lang/String;

    .line 10
    iput-object v0, p0, Lcom/bytedance/android/live/saas/middleware/applog/AppLogConfig;->hostPermission:Lcom/bytedance/android/live/base/api/IHostPermission;

    .line 26
    iput-object p1, p0, Lcom/bytedance/android/live/saas/middleware/applog/AppLogConfig;->impl:Lcom/bytedance/android/live/saas/middleware/applog/IAppLog;

    .line 27
    iput-boolean p2, p0, Lcom/bytedance/android/live/saas/middleware/applog/AppLogConfig;->standalone:Z

    .line 28
    iput-boolean p3, p0, Lcom/bytedance/android/live/saas/middleware/applog/AppLogConfig;->isToBVersion:Z

    .line 29
    iput-object p4, p0, Lcom/bytedance/android/live/saas/middleware/applog/AppLogConfig;->appLogId:Ljava/lang/String;

    .line 30
    iput-object p5, p0, Lcom/bytedance/android/live/saas/middleware/applog/AppLogConfig;->hostPermission:Lcom/bytedance/android/live/base/api/IHostPermission;

    return-void
.end method


# virtual methods
.method public getAppLogId()Ljava/lang/String;
    .locals 1

    .line 58
    iget-object v0, p0, Lcom/bytedance/android/live/saas/middleware/applog/AppLogConfig;->appLogId:Ljava/lang/String;

    return-object v0
.end method

.method public getHostPermission()Lcom/bytedance/android/live/base/api/IHostPermission;
    .locals 1

    .line 66
    iget-object v0, p0, Lcom/bytedance/android/live/saas/middleware/applog/AppLogConfig;->hostPermission:Lcom/bytedance/android/live/base/api/IHostPermission;

    return-object v0
.end method

.method public getImpl()Lcom/bytedance/android/live/saas/middleware/applog/IAppLog;
    .locals 1

    .line 34
    iget-object v0, p0, Lcom/bytedance/android/live/saas/middleware/applog/AppLogConfig;->impl:Lcom/bytedance/android/live/saas/middleware/applog/IAppLog;

    return-object v0
.end method

.method public getStandalone()Z
    .locals 1

    .line 42
    iget-boolean v0, p0, Lcom/bytedance/android/live/saas/middleware/applog/AppLogConfig;->standalone:Z

    return v0
.end method

.method public isToBVersion()Z
    .locals 1

    .line 50
    iget-boolean v0, p0, Lcom/bytedance/android/live/saas/middleware/applog/AppLogConfig;->isToBVersion:Z

    return v0
.end method

.method public setAppLogId(Ljava/lang/String;)V
    .locals 0

    .line 62
    iput-object p1, p0, Lcom/bytedance/android/live/saas/middleware/applog/AppLogConfig;->appLogId:Ljava/lang/String;

    return-void
.end method

.method public setHostPermission(Lcom/bytedance/android/live/base/api/IHostPermission;)V
    .locals 0

    .line 70
    iput-object p1, p0, Lcom/bytedance/android/live/saas/middleware/applog/AppLogConfig;->hostPermission:Lcom/bytedance/android/live/base/api/IHostPermission;

    return-void
.end method

.method public setImpl(Lcom/bytedance/android/live/saas/middleware/applog/IAppLog;)V
    .locals 0

    .line 38
    iput-object p1, p0, Lcom/bytedance/android/live/saas/middleware/applog/AppLogConfig;->impl:Lcom/bytedance/android/live/saas/middleware/applog/IAppLog;

    return-void
.end method

.method public setStandalone(Z)V
    .locals 0

    .line 46
    iput-boolean p1, p0, Lcom/bytedance/android/live/saas/middleware/applog/AppLogConfig;->standalone:Z

    return-void
.end method

.method public setToBVersion(Z)V
    .locals 0

    .line 54
    iput-boolean p1, p0, Lcom/bytedance/android/live/saas/middleware/applog/AppLogConfig;->isToBVersion:Z

    return-void
.end method
