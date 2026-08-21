.class public final Lcom/tkay/expressad/exoplayer/scheduler/PlatformScheduler$PlatformSchedulerService;
.super Landroid/app/job/JobService;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/scheduler/PlatformScheduler;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "PlatformSchedulerService"
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 134
    invoke-direct {p0}, Landroid/app/job/JobService;-><init>()V

    return-void
.end method


# virtual methods
.method public final onStartJob(Landroid/app/job/JobParameters;)Z
    .locals 4

    .line 138
    invoke-virtual {p1}, Landroid/app/job/JobParameters;->getExtras()Landroid/os/PersistableBundle;

    move-result-object v0

    .line 139
    new-instance v1, Lcom/tkay/expressad/exoplayer/scheduler/a;

    const-string v2, "requirements"

    invoke-virtual {v0, v2}, Landroid/os/PersistableBundle;->getInt(Ljava/lang/String;)I

    move-result v2

    invoke-direct {v1, v2}, Lcom/tkay/expressad/exoplayer/scheduler/a;-><init>(I)V

    .line 140
    invoke-virtual {v1, p0}, Lcom/tkay/expressad/exoplayer/scheduler/a;->a(Landroid/content/Context;)Z

    move-result v1

    if-eqz v1, :cond_0

    const-string p1, "service_action"

    .line 142
    invoke-virtual {v0, p1}, Landroid/os/PersistableBundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    const-string v1, "service_package"

    .line 143
    invoke-virtual {v0, v1}, Landroid/os/PersistableBundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 144
    new-instance v1, Landroid/content/Intent;

    invoke-direct {v1, p1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v0}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;

    move-result-object v1

    .line 145
    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "Starting service action: "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, " package: "

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 146
    invoke-static {p0, v1}, Lcom/tkay/expressad/exoplayer/k/af;->a(Landroid/content/Context;Landroid/content/Intent;)Landroid/content/ComponentName;

    goto :goto_0

    :cond_0
    const/4 v0, 0x1

    .line 149
    invoke-virtual {p0, p1, v0}, Lcom/tkay/expressad/exoplayer/scheduler/PlatformScheduler$PlatformSchedulerService;->jobFinished(Landroid/app/job/JobParameters;Z)V

    :goto_0
    const/4 p1, 0x0

    return p1
.end method

.method public final onStopJob(Landroid/app/job/JobParameters;)Z
    .locals 0

    const/4 p1, 0x0

    return p1
.end method
