.class Lcom/ss/android/downloadlib/addownload/rg/rg$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$df;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/addownload/rg/rg;->rg(Landroid/content/Context;Lcom/ss/android/downloadlib/addownload/model/rg;Lcom/ss/android/downloadlib/addownload/rg/rg$rg;Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic df:Landroid/content/Context;

.field final synthetic pp:Lcom/ss/android/downloadlib/addownload/rg/rg;

.field final synthetic pt:Lcom/ss/android/downloadlib/addownload/rg/rg$rg;

.field final synthetic q:Lcom/ss/android/downloadlib/addownload/model/rg;

.field final synthetic rg:Lcom/ss/android/downloadad/api/rg/df;


# direct methods
.method constructor <init>(Lcom/ss/android/downloadlib/addownload/rg/rg;Lcom/ss/android/downloadad/api/rg/df;Landroid/content/Context;Lcom/ss/android/downloadlib/addownload/model/rg;Lcom/ss/android/downloadlib/addownload/rg/rg$rg;)V
    .locals 0

    .line 292
    iput-object p1, p0, Lcom/ss/android/downloadlib/addownload/rg/rg$1;->pp:Lcom/ss/android/downloadlib/addownload/rg/rg;

    iput-object p2, p0, Lcom/ss/android/downloadlib/addownload/rg/rg$1;->rg:Lcom/ss/android/downloadad/api/rg/df;

    iput-object p3, p0, Lcom/ss/android/downloadlib/addownload/rg/rg$1;->df:Landroid/content/Context;

    iput-object p4, p0, Lcom/ss/android/downloadlib/addownload/rg/rg$1;->q:Lcom/ss/android/downloadlib/addownload/model/rg;

    iput-object p5, p0, Lcom/ss/android/downloadlib/addownload/rg/rg$1;->pt:Lcom/ss/android/downloadlib/addownload/rg/rg$rg;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public df(Landroid/content/DialogInterface;)V
    .locals 3

    .line 302
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object v0

    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/rg/rg$1;->rg:Lcom/ss/android/downloadad/api/rg/df;

    const-string v2, "backdialog_exit"

    invoke-virtual {v0, v2, v1}, Lcom/ss/android/downloadlib/event/AdEventHandler;->df(Ljava/lang/String;Lcom/ss/android/downloadad/api/rg/rg;)V

    .line 303
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/rg/rg$1;->pt:Lcom/ss/android/downloadlib/addownload/rg/rg$rg;

    if-eqz v0, :cond_0

    .line 304
    invoke-interface {v0}, Lcom/ss/android/downloadlib/addownload/rg/rg$rg;->rg()V

    .line 306
    :cond_0
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/rg/rg$1;->pp:Lcom/ss/android/downloadlib/addownload/rg/rg;

    const-string v1, ""

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadlib/addownload/rg/rg;->df(Ljava/lang/String;)V

    .line 307
    invoke-interface {p1}, Landroid/content/DialogInterface;->dismiss()V

    return-void
.end method

.method public q(Landroid/content/DialogInterface;)V
    .locals 1

    .line 312
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/rg/rg$1;->pp:Lcom/ss/android/downloadlib/addownload/rg/rg;

    const-string v0, ""

    invoke-virtual {p1, v0}, Lcom/ss/android/downloadlib/addownload/rg/rg;->df(Ljava/lang/String;)V

    return-void
.end method

.method public rg(Landroid/content/DialogInterface;)V
    .locals 3

    .line 295
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object v0

    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/rg/rg$1;->rg:Lcom/ss/android/downloadad/api/rg/df;

    const-string v2, "backdialog_install"

    invoke-virtual {v0, v2, v1}, Lcom/ss/android/downloadlib/event/AdEventHandler;->df(Ljava/lang/String;Lcom/ss/android/downloadad/api/rg/rg;)V

    .line 296
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/rg/rg$1;->df:Landroid/content/Context;

    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/rg/rg$1;->q:Lcom/ss/android/downloadlib/addownload/model/rg;

    iget-wide v1, v1, Lcom/ss/android/downloadlib/addownload/model/rg;->rg:J

    long-to-int v1, v1

    invoke-static {v0, v1}, Lcom/ss/android/socialbase/appdownloader/pt;->rg(Landroid/content/Context;I)Z

    .line 297
    invoke-interface {p1}, Landroid/content/DialogInterface;->dismiss()V

    return-void
.end method
