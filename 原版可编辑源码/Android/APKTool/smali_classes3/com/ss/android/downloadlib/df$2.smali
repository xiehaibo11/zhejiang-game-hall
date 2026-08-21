.class Lcom/ss/android/downloadlib/df$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$df;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/df;->df(Landroid/content/Context;Ljava/lang/String;ZLcom/ss/android/download/api/download/DownloadModel;Lcom/ss/android/download/api/download/DownloadEventConfig;Lcom/ss/android/download/api/download/DownloadController;Lcom/ss/android/download/api/download/DownloadStatusChangeListener;IZLcom/ss/android/download/api/config/IDownloadButtonClickListener;)Landroid/app/Dialog;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic df:Lcom/ss/android/download/api/download/DownloadEventConfig;

.field final synthetic pt:Lcom/ss/android/downloadlib/df;

.field final synthetic q:Lcom/ss/android/download/api/download/DownloadController;

.field final synthetic rg:Lcom/ss/android/download/api/download/DownloadModel;


# direct methods
.method constructor <init>(Lcom/ss/android/downloadlib/df;Lcom/ss/android/download/api/download/DownloadModel;Lcom/ss/android/download/api/download/DownloadEventConfig;Lcom/ss/android/download/api/download/DownloadController;)V
    .locals 0

    .line 183
    iput-object p1, p0, Lcom/ss/android/downloadlib/df$2;->pt:Lcom/ss/android/downloadlib/df;

    iput-object p2, p0, Lcom/ss/android/downloadlib/df$2;->rg:Lcom/ss/android/download/api/download/DownloadModel;

    iput-object p3, p0, Lcom/ss/android/downloadlib/df$2;->df:Lcom/ss/android/download/api/download/DownloadEventConfig;

    iput-object p4, p0, Lcom/ss/android/downloadlib/df$2;->q:Lcom/ss/android/download/api/download/DownloadController;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public df(Landroid/content/DialogInterface;)V
    .locals 5

    .line 194
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object v0

    iget-object v1, p0, Lcom/ss/android/downloadlib/df$2;->rg:Lcom/ss/android/download/api/download/DownloadModel;

    iget-object v2, p0, Lcom/ss/android/downloadlib/df$2;->df:Lcom/ss/android/download/api/download/DownloadEventConfig;

    iget-object v3, p0, Lcom/ss/android/downloadlib/df$2;->q:Lcom/ss/android/download/api/download/DownloadController;

    const-string v4, "landing_download_dialog_cancel"

    invoke-virtual {v0, v4, v1, v2, v3}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg(Ljava/lang/String;Lcom/ss/android/download/api/download/DownloadModel;Lcom/ss/android/download/api/download/DownloadEventConfig;Lcom/ss/android/download/api/download/DownloadController;)V

    .line 195
    invoke-interface {p1}, Landroid/content/DialogInterface;->dismiss()V

    return-void
.end method

.method public q(Landroid/content/DialogInterface;)V
    .locals 4

    .line 200
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object p1

    iget-object v0, p0, Lcom/ss/android/downloadlib/df$2;->rg:Lcom/ss/android/download/api/download/DownloadModel;

    iget-object v1, p0, Lcom/ss/android/downloadlib/df$2;->df:Lcom/ss/android/download/api/download/DownloadEventConfig;

    iget-object v2, p0, Lcom/ss/android/downloadlib/df$2;->q:Lcom/ss/android/download/api/download/DownloadController;

    const-string v3, "landing_download_dialog_cancel"

    invoke-virtual {p1, v3, v0, v1, v2}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg(Ljava/lang/String;Lcom/ss/android/download/api/download/DownloadModel;Lcom/ss/android/download/api/download/DownloadEventConfig;Lcom/ss/android/download/api/download/DownloadController;)V

    return-void
.end method

.method public rg(Landroid/content/DialogInterface;)V
    .locals 8

    .line 186
    iget-object v0, p0, Lcom/ss/android/downloadlib/df$2;->pt:Lcom/ss/android/downloadlib/df;

    invoke-static {v0}, Lcom/ss/android/downloadlib/df;->rg(Lcom/ss/android/downloadlib/df;)Lcom/ss/android/downloadlib/ux;

    move-result-object v1

    iget-object v0, p0, Lcom/ss/android/downloadlib/df$2;->rg:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-interface {v0}, Lcom/ss/android/download/api/download/DownloadModel;->getDownloadUrl()Ljava/lang/String;

    move-result-object v2

    iget-object v0, p0, Lcom/ss/android/downloadlib/df$2;->rg:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-interface {v0}, Lcom/ss/android/download/api/download/DownloadModel;->getId()J

    move-result-wide v3

    iget-object v6, p0, Lcom/ss/android/downloadlib/df$2;->df:Lcom/ss/android/download/api/download/DownloadEventConfig;

    iget-object v7, p0, Lcom/ss/android/downloadlib/df$2;->q:Lcom/ss/android/download/api/download/DownloadController;

    const/4 v5, 0x2

    invoke-virtual/range {v1 .. v7}, Lcom/ss/android/downloadlib/ux;->rg(Ljava/lang/String;JILcom/ss/android/download/api/download/DownloadEventConfig;Lcom/ss/android/download/api/download/DownloadController;)V

    .line 188
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object v0

    iget-object v1, p0, Lcom/ss/android/downloadlib/df$2;->rg:Lcom/ss/android/download/api/download/DownloadModel;

    iget-object v2, p0, Lcom/ss/android/downloadlib/df$2;->df:Lcom/ss/android/download/api/download/DownloadEventConfig;

    iget-object v3, p0, Lcom/ss/android/downloadlib/df$2;->q:Lcom/ss/android/download/api/download/DownloadController;

    const-string v4, "landing_download_dialog_confirm"

    invoke-virtual {v0, v4, v1, v2, v3}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg(Ljava/lang/String;Lcom/ss/android/download/api/download/DownloadModel;Lcom/ss/android/download/api/download/DownloadEventConfig;Lcom/ss/android/download/api/download/DownloadController;)V

    .line 189
    invoke-interface {p1}, Landroid/content/DialogInterface;->dismiss()V

    return-void
.end method
