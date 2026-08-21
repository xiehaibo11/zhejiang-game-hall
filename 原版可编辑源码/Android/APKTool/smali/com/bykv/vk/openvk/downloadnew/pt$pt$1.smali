.class Lcom/bykv/vk/openvk/downloadnew/pt$pt$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/downloadnew/core/IDialogStatusChangedListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bykv/vk/openvk/downloadnew/pt$pt;->q(Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;)Lcom/bykv/vk/openvk/downloadnew/core/DialogBuilder;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic df:Lcom/bykv/vk/openvk/downloadnew/pt$pt;

.field final synthetic rg:Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;


# direct methods
.method constructor <init>(Lcom/bykv/vk/openvk/downloadnew/pt$pt;Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;)V
    .locals 0

    .line 597
    iput-object p1, p0, Lcom/bykv/vk/openvk/downloadnew/pt$pt$1;->df:Lcom/bykv/vk/openvk/downloadnew/pt$pt;

    iput-object p2, p0, Lcom/bykv/vk/openvk/downloadnew/pt$pt$1;->rg:Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onCancel(Landroid/content/DialogInterface;)V
    .locals 1

    .line 619
    iget-object v0, p0, Lcom/bykv/vk/openvk/downloadnew/pt$pt$1;->rg:Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;

    iget-object v0, v0, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;->ux:Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$df;

    if-eqz v0, :cond_0

    .line 620
    iget-object v0, p0, Lcom/bykv/vk/openvk/downloadnew/pt$pt$1;->rg:Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;

    iget-object v0, v0, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;->ux:Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$df;

    invoke-interface {v0, p1}, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$df;->q(Landroid/content/DialogInterface;)V

    :cond_0
    return-void
.end method

.method public onNegativeBtnClick(Landroid/content/DialogInterface;)V
    .locals 1

    .line 607
    iget-object v0, p0, Lcom/bykv/vk/openvk/downloadnew/pt$pt$1;->rg:Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;

    iget-object v0, v0, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;->ux:Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$df;

    if-eqz v0, :cond_0

    .line 610
    :try_start_0
    iget-object v0, p0, Lcom/bykv/vk/openvk/downloadnew/pt$pt$1;->rg:Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;

    iget-object v0, v0, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;->ux:Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$df;

    invoke-interface {v0, p1}, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$df;->df(Landroid/content/DialogInterface;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 612
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method public onPositiveBtnClick(Landroid/content/DialogInterface;)V
    .locals 1

    .line 600
    iget-object v0, p0, Lcom/bykv/vk/openvk/downloadnew/pt$pt$1;->rg:Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;

    iget-object v0, v0, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;->ux:Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$df;

    if-eqz v0, :cond_0

    .line 601
    iget-object v0, p0, Lcom/bykv/vk/openvk/downloadnew/pt$pt$1;->rg:Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;

    iget-object v0, v0, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;->ux:Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$df;

    invoke-interface {v0, p1}, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$df;->rg(Landroid/content/DialogInterface;)V

    :cond_0
    return-void
.end method
