.class Lcom/ss/android/socialbase/appdownloader/pt$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/socialbase/downloader/impls/RetryScheduler$RetryScheduleHandler;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/appdownloader/pt;->r()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic rg:Lcom/ss/android/socialbase/appdownloader/pt;


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/appdownloader/pt;)V
    .locals 0

    .line 365
    iput-object p1, p0, Lcom/ss/android/socialbase/appdownloader/pt$1;->rg:Lcom/ss/android/socialbase/appdownloader/pt;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public cancelRetry(I)V
    .locals 0

    .line 373
    invoke-static {p1}, Lcom/ss/android/socialbase/appdownloader/RetryJobSchedulerService;->rg(I)V

    return-void
.end method

.method public scheduleRetry(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;JZI)V
    .locals 0

    .line 368
    invoke-static {p1, p2, p3, p4, p5}, Lcom/ss/android/socialbase/appdownloader/RetryJobSchedulerService;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;JZI)V

    return-void
.end method
