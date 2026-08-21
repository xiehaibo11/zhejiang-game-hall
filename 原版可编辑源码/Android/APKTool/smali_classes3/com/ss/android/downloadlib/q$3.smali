.class Lcom/ss/android/downloadlib/q$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/socialbase/downloader/common/AppStatusManager$AppStatusChangeListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/q;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/downloadad/api/rg/df;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic c:Lcom/ss/android/downloadlib/q;

.field final synthetic df:J

.field final synthetic pp:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

.field final synthetic pt:D

.field final synthetic q:J

.field final synthetic rg:Lcom/ss/android/downloadad/api/rg/df;


# direct methods
.method constructor <init>(Lcom/ss/android/downloadlib/q;Lcom/ss/android/downloadad/api/rg/df;JJDLcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 0

    .line 158
    iput-object p1, p0, Lcom/ss/android/downloadlib/q$3;->c:Lcom/ss/android/downloadlib/q;

    iput-object p2, p0, Lcom/ss/android/downloadlib/q$3;->rg:Lcom/ss/android/downloadad/api/rg/df;

    iput-wide p3, p0, Lcom/ss/android/downloadlib/q$3;->df:J

    iput-wide p5, p0, Lcom/ss/android/downloadlib/q$3;->q:J

    iput-wide p7, p0, Lcom/ss/android/downloadlib/q$3;->pt:D

    iput-object p9, p0, Lcom/ss/android/downloadlib/q$3;->pp:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onAppBackground()V
    .locals 0

    return-void
.end method

.method public onAppForeground()V
    .locals 6

    .line 162
    iget-object v0, p0, Lcom/ss/android/downloadlib/q$3;->rg:Lcom/ss/android/downloadad/api/rg/df;

    invoke-static {v0}, Lcom/ss/android/downloadlib/utils/b;->df(Lcom/ss/android/downloadad/api/rg/df;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 163
    iget-wide v0, p0, Lcom/ss/android/downloadlib/q$3;->df:J

    const-wide/16 v2, -0x1

    cmp-long v4, v0, v2

    if-lez v4, :cond_1

    iget-wide v4, p0, Lcom/ss/android/downloadlib/q$3;->q:J

    cmp-long v2, v4, v2

    if-lez v2, :cond_1

    long-to-double v0, v0

    iget-wide v2, p0, Lcom/ss/android/downloadlib/q$3;->pt:D

    cmpg-double v0, v0, v2

    if-gez v0, :cond_1

    .line 165
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object v0

    const-string v1, "install_no_enough_space"

    invoke-static {v1}, Lcom/ss/android/downloadlib/addownload/pt;->rg(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    iget-object v2, p0, Lcom/ss/android/downloadlib/q$3;->rg:Lcom/ss/android/downloadad/api/rg/df;

    const-string v3, "clean_space_install"

    invoke-virtual {v0, v3, v1, v2}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg(Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    .line 166
    iget-object v0, p0, Lcom/ss/android/downloadlib/q$3;->pp:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    iget-wide v1, p0, Lcom/ss/android/downloadlib/q$3;->pt:D

    double-to-long v1, v1

    iget-wide v3, p0, Lcom/ss/android/downloadlib/q$3;->df:J

    sub-long/2addr v1, v3

    invoke-static {v0, v1, v2}, Lcom/ss/android/downloadlib/addownload/pt;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;J)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 168
    invoke-static {}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->getInstance()Lcom/ss/android/socialbase/downloader/common/AppStatusManager;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->unregisterAppSwitchListener(Lcom/ss/android/socialbase/downloader/common/AppStatusManager$AppStatusChangeListener;)V

    .line 169
    iget-object v0, p0, Lcom/ss/android/downloadlib/q$3;->rg:Lcom/ss/android/downloadad/api/rg/df;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/rg/df;->fw(Z)V

    goto :goto_0

    .line 173
    :cond_0
    invoke-static {}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->getInstance()Lcom/ss/android/socialbase/downloader/common/AppStatusManager;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->unregisterAppSwitchListener(Lcom/ss/android/socialbase/downloader/common/AppStatusManager$AppStatusChangeListener;)V

    :cond_1
    :goto_0
    return-void
.end method
