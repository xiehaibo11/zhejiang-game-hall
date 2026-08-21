.class Lcom/ss/android/downloadlib/q/fw$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/socialbase/appdownloader/q/hq;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/q/fw;->rg(Landroid/content/Context;)Lcom/ss/android/socialbase/appdownloader/q/hq;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field private c:Landroid/content/DialogInterface$OnCancelListener;

.field final synthetic df:Lcom/ss/android/downloadlib/q/fw;

.field private pp:Landroid/content/DialogInterface$OnClickListener;

.field private pt:Landroid/content/DialogInterface$OnClickListener;

.field private q:Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;

.field final synthetic rg:Landroid/content/Context;


# direct methods
.method constructor <init>(Lcom/ss/android/downloadlib/q/fw;Landroid/content/Context;)V
    .locals 0

    .line 41
    iput-object p1, p0, Lcom/ss/android/downloadlib/q/fw$1;->df:Lcom/ss/android/downloadlib/q/fw;

    iput-object p2, p0, Lcom/ss/android/downloadlib/q/fw$1;->rg:Landroid/content/Context;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 42
    new-instance p1, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;

    iget-object p2, p0, Lcom/ss/android/downloadlib/q/fw$1;->rg:Landroid/content/Context;

    invoke-direct {p1, p2}, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/ss/android/downloadlib/q/fw$1;->q:Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;

    return-void
.end method

.method static synthetic df(Lcom/ss/android/downloadlib/q/fw$1;)Landroid/content/DialogInterface$OnClickListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/ss/android/downloadlib/q/fw$1;->pp:Landroid/content/DialogInterface$OnClickListener;

    return-object p0
.end method

.method static synthetic q(Lcom/ss/android/downloadlib/q/fw$1;)Landroid/content/DialogInterface$OnCancelListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/ss/android/downloadlib/q/fw$1;->c:Landroid/content/DialogInterface$OnCancelListener;

    return-object p0
.end method

.method static synthetic rg(Lcom/ss/android/downloadlib/q/fw$1;)Landroid/content/DialogInterface$OnClickListener;
    .locals 0

    .line 41
    iget-object p0, p0, Lcom/ss/android/downloadlib/q/fw$1;->pt:Landroid/content/DialogInterface$OnClickListener;

    return-object p0
.end method


# virtual methods
.method public df(ILandroid/content/DialogInterface$OnClickListener;)Lcom/ss/android/socialbase/appdownloader/q/hq;
    .locals 2

    .line 85
    iget-object v0, p0, Lcom/ss/android/downloadlib/q/fw$1;->q:Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;

    iget-object v1, p0, Lcom/ss/android/downloadlib/q/fw$1;->rg:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-virtual {v1, p1}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;->pt(Ljava/lang/String;)Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;

    .line 86
    iput-object p2, p0, Lcom/ss/android/downloadlib/q/fw$1;->pp:Landroid/content/DialogInterface$OnClickListener;

    return-object p0
.end method

.method public rg()Lcom/ss/android/socialbase/appdownloader/q/b;
    .locals 3

    .line 111
    iget-object v0, p0, Lcom/ss/android/downloadlib/q/fw$1;->q:Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;

    new-instance v1, Lcom/ss/android/downloadlib/q/fw$1$1;

    invoke-direct {v1, p0}, Lcom/ss/android/downloadlib/q/fw$1$1;-><init>(Lcom/ss/android/downloadlib/q/fw$1;)V

    invoke-virtual {v0, v1}, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;->rg(Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$df;)Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;

    .line 134
    invoke-static {}, Lcom/ss/android/downloadlib/q/fw;->df()Ljava/lang/String;

    move-result-object v0

    const-string v1, "getThemedAlertDlgBuilder"

    const/4 v2, 0x0

    invoke-static {v0, v1, v2}, Lcom/ss/android/downloadlib/utils/bm;->rg(Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;)V

    .line 135
    iget-object v0, p0, Lcom/ss/android/downloadlib/q/fw$1;->q:Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;

    const/4 v1, 0x3

    invoke-virtual {v0, v1}, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;->rg(I)Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;

    .line 136
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->q()Lcom/ss/android/download/api/config/hq;

    move-result-object v0

    iget-object v1, p0, Lcom/ss/android/downloadlib/q/fw$1;->q:Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;

    invoke-virtual {v1}, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;->rg()Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;

    move-result-object v1

    invoke-interface {v0, v1}, Lcom/ss/android/download/api/config/hq;->df(Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;)Landroid/app/Dialog;

    move-result-object v0

    .line 137
    new-instance v1, Lcom/ss/android/downloadlib/q/fw$rg;

    invoke-direct {v1, v0}, Lcom/ss/android/downloadlib/q/fw$rg;-><init>(Landroid/app/Dialog;)V

    return-object v1
.end method

.method public rg(I)Lcom/ss/android/socialbase/appdownloader/q/hq;
    .locals 2

    .line 59
    iget-object v0, p0, Lcom/ss/android/downloadlib/q/fw$1;->q:Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;

    iget-object v1, p0, Lcom/ss/android/downloadlib/q/fw$1;->rg:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-virtual {v1, p1}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;->rg(Ljava/lang/String;)Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;

    return-object p0
.end method

.method public rg(ILandroid/content/DialogInterface$OnClickListener;)Lcom/ss/android/socialbase/appdownloader/q/hq;
    .locals 2

    .line 71
    iget-object v0, p0, Lcom/ss/android/downloadlib/q/fw$1;->q:Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;

    iget-object v1, p0, Lcom/ss/android/downloadlib/q/fw$1;->rg:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-virtual {v1, p1}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;->q(Ljava/lang/String;)Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;

    .line 72
    iput-object p2, p0, Lcom/ss/android/downloadlib/q/fw$1;->pt:Landroid/content/DialogInterface$OnClickListener;

    return-object p0
.end method

.method public rg(Landroid/content/DialogInterface$OnCancelListener;)Lcom/ss/android/socialbase/appdownloader/q/hq;
    .locals 0

    .line 99
    iput-object p1, p0, Lcom/ss/android/downloadlib/q/fw$1;->c:Landroid/content/DialogInterface$OnCancelListener;

    return-object p0
.end method

.method public rg(Ljava/lang/String;)Lcom/ss/android/socialbase/appdownloader/q/hq;
    .locals 1

    .line 65
    iget-object v0, p0, Lcom/ss/android/downloadlib/q/fw$1;->q:Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;

    invoke-virtual {v0, p1}, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;->df(Ljava/lang/String;)Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;

    return-object p0
.end method

.method public rg(Z)Lcom/ss/android/socialbase/appdownloader/q/hq;
    .locals 1

    .line 105
    iget-object v0, p0, Lcom/ss/android/downloadlib/q/fw$1;->q:Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;

    invoke-virtual {v0, p1}, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;->rg(Z)Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;

    return-object p0
.end method
