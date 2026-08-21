.class final Lcom/ss/android/download/api/rg/rg$2;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/download/api/rg/rg;->rg(Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;)Landroid/app/Dialog;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic rg:Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;


# direct methods
.method constructor <init>(Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;)V
    .locals 0

    .line 49
    iput-object p1, p0, Lcom/ss/android/download/api/rg/rg$2;->rg:Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 0

    .line 52
    iget-object p2, p0, Lcom/ss/android/download/api/rg/rg$2;->rg:Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;

    iget-object p2, p2, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;->ux:Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$df;

    if-eqz p2, :cond_0

    .line 53
    iget-object p2, p0, Lcom/ss/android/download/api/rg/rg$2;->rg:Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;

    iget-object p2, p2, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;->ux:Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$df;

    invoke-interface {p2, p1}, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$df;->rg(Landroid/content/DialogInterface;)V

    :cond_0
    return-void
.end method
