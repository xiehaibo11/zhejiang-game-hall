.class Lcom/ss/android/downloadlib/activity/TTDelegateActivity$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$df;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->q(J)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic df:Lcom/ss/android/downloadlib/activity/TTDelegateActivity;

.field final synthetic rg:Lcom/ss/android/downloadad/api/rg/df;


# direct methods
.method constructor <init>(Lcom/ss/android/downloadlib/activity/TTDelegateActivity;Lcom/ss/android/downloadad/api/rg/df;)V
    .locals 0

    .line 509
    iput-object p1, p0, Lcom/ss/android/downloadlib/activity/TTDelegateActivity$2;->df:Lcom/ss/android/downloadlib/activity/TTDelegateActivity;

    iput-object p2, p0, Lcom/ss/android/downloadlib/activity/TTDelegateActivity$2;->rg:Lcom/ss/android/downloadad/api/rg/df;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public df(Landroid/content/DialogInterface;)V
    .locals 3

    .line 519
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object v0

    iget-object v1, p0, Lcom/ss/android/downloadlib/activity/TTDelegateActivity$2;->rg:Lcom/ss/android/downloadad/api/rg/df;

    const-string v2, "market_openapp_cancel"

    invoke-virtual {v0, v2, v1}, Lcom/ss/android/downloadlib/event/AdEventHandler;->df(Ljava/lang/String;Lcom/ss/android/downloadad/api/rg/rg;)V

    .line 520
    invoke-interface {p1}, Landroid/content/DialogInterface;->dismiss()V

    .line 521
    iget-object p1, p0, Lcom/ss/android/downloadlib/activity/TTDelegateActivity$2;->df:Lcom/ss/android/downloadlib/activity/TTDelegateActivity;

    invoke-static {p1}, Lcom/ss/android/socialbase/appdownloader/q;->rg(Landroid/app/Activity;)V

    return-void
.end method

.method public q(Landroid/content/DialogInterface;)V
    .locals 0

    .line 526
    iget-object p1, p0, Lcom/ss/android/downloadlib/activity/TTDelegateActivity$2;->df:Lcom/ss/android/downloadlib/activity/TTDelegateActivity;

    invoke-static {p1}, Lcom/ss/android/socialbase/appdownloader/q;->rg(Landroid/app/Activity;)V

    return-void
.end method

.method public rg(Landroid/content/DialogInterface;)V
    .locals 1

    .line 512
    iget-object v0, p0, Lcom/ss/android/downloadlib/activity/TTDelegateActivity$2;->rg:Lcom/ss/android/downloadad/api/rg/df;

    invoke-static {v0}, Lcom/ss/android/downloadlib/df/rg;->df(Lcom/ss/android/downloadad/api/rg/df;)V

    .line 513
    invoke-interface {p1}, Landroid/content/DialogInterface;->dismiss()V

    .line 514
    iget-object p1, p0, Lcom/ss/android/downloadlib/activity/TTDelegateActivity$2;->df:Lcom/ss/android/downloadlib/activity/TTDelegateActivity;

    invoke-static {p1}, Lcom/ss/android/socialbase/appdownloader/q;->rg(Landroid/app/Activity;)V

    return-void
.end method
