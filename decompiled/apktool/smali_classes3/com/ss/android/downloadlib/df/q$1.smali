.class final Lcom/ss/android/downloadlib/df/q$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/socialbase/downloader/common/AppStatusManager$AppStatusChangeListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/df/q;->rg(Lcom/ss/android/downloadad/api/rg/df;Lcom/ss/android/downloadlib/guide/install/rg;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic df:Lcom/ss/android/downloadlib/guide/install/rg;

.field final synthetic rg:Lcom/ss/android/downloadad/api/rg/df;


# direct methods
.method constructor <init>(Lcom/ss/android/downloadad/api/rg/df;Lcom/ss/android/downloadlib/guide/install/rg;)V
    .locals 0

    .line 51
    iput-object p1, p0, Lcom/ss/android/downloadlib/df/q$1;->rg:Lcom/ss/android/downloadad/api/rg/df;

    iput-object p2, p0, Lcom/ss/android/downloadlib/df/q$1;->df:Lcom/ss/android/downloadlib/guide/install/rg;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onAppBackground()V
    .locals 0

    return-void
.end method

.method public onAppForeground()V
    .locals 3

    const-string v0, "AppInstallOptimiseHelper"

    const-string v1, "AppInstallOptimiseHelper-->onAppForeground"

    .line 54
    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 55
    invoke-static {}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->getInstance()Lcom/ss/android/socialbase/downloader/common/AppStatusManager;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->unregisterAppSwitchListener(Lcom/ss/android/socialbase/downloader/common/AppStatusManager$AppStatusChangeListener;)V

    .line 57
    iget-object v0, p0, Lcom/ss/android/downloadlib/df/q$1;->rg:Lcom/ss/android/downloadad/api/rg/df;

    invoke-static {v0}, Lcom/ss/android/downloadlib/utils/b;->df(Lcom/ss/android/downloadad/api/rg/df;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 59
    iget-object v0, p0, Lcom/ss/android/downloadlib/df/q$1;->rg:Lcom/ss/android/downloadad/api/rg/df;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/rg/df;->oh(Z)V

    .line 60
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object v0

    iget-object v1, p0, Lcom/ss/android/downloadlib/df/q$1;->rg:Lcom/ss/android/downloadad/api/rg/df;

    const-string v2, "install_delay_invoke"

    invoke-virtual {v0, v2, v1}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg(Ljava/lang/String;Lcom/ss/android/downloadad/api/rg/rg;)V

    .line 61
    iget-object v0, p0, Lcom/ss/android/downloadlib/df/q$1;->df:Lcom/ss/android/downloadlib/guide/install/rg;

    invoke-interface {v0}, Lcom/ss/android/downloadlib/guide/install/rg;->rg()V

    :cond_0
    return-void
.end method
