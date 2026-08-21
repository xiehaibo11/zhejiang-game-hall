.class public Lcom/ss/android/download/api/rg/rg;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/download/api/config/hq;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 23
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static rg(Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;)Landroid/app/Dialog;
    .locals 3

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 46
    :cond_0
    new-instance v0, Landroid/app/AlertDialog$Builder;

    iget-object v1, p0, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;->rg:Landroid/content/Context;

    invoke-direct {v0, v1}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    iget-object v1, p0, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;->df:Ljava/lang/String;

    .line 47
    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    iget-object v1, p0, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;->q:Ljava/lang/String;

    .line 48
    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    iget-object v1, p0, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;->pt:Ljava/lang/String;

    new-instance v2, Lcom/ss/android/download/api/rg/rg$2;

    invoke-direct {v2, p0}, Lcom/ss/android/download/api/rg/rg$2;-><init>(Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;)V

    .line 49
    invoke-virtual {v0, v1, v2}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    iget-object v1, p0, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;->pp:Ljava/lang/String;

    new-instance v2, Lcom/ss/android/download/api/rg/rg$1;

    invoke-direct {v2, p0}, Lcom/ss/android/download/api/rg/rg$1;-><init>(Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;)V

    .line 57
    invoke-virtual {v0, v1, v2}, Landroid/app/AlertDialog$Builder;->setNegativeButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 64
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->show()Landroid/app/AlertDialog;

    move-result-object v0

    .line 65
    iget-boolean v1, p0, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;->c:Z

    invoke-virtual {v0, v1}, Landroid/app/AlertDialog;->setCanceledOnTouchOutside(Z)V

    .line 66
    new-instance v1, Lcom/ss/android/download/api/rg/rg$3;

    invoke-direct {v1, p0}, Lcom/ss/android/download/api/rg/rg$3;-><init>(Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;)V

    invoke-virtual {v0, v1}, Landroid/app/AlertDialog;->setOnCancelListener(Landroid/content/DialogInterface$OnCancelListener;)V

    .line 74
    iget-object v1, p0, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;->fw:Landroid/graphics/drawable/Drawable;

    if-eqz v1, :cond_1

    .line 75
    iget-object p0, p0, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;->fw:Landroid/graphics/drawable/Drawable;

    invoke-virtual {v0, p0}, Landroid/app/AlertDialog;->setIcon(Landroid/graphics/drawable/Drawable;)V

    :cond_1
    return-object v0
.end method


# virtual methods
.method public df(Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;)Landroid/app/Dialog;
    .locals 0

    .line 31
    invoke-static {p1}, Lcom/ss/android/download/api/rg/rg;->rg(Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;)Landroid/app/Dialog;

    move-result-object p1

    return-object p1
.end method

.method public rg(ILandroid/content/Context;Lcom/ss/android/download/api/download/DownloadModel;Ljava/lang/String;Landroid/graphics/drawable/Drawable;I)V
    .locals 0

    const/4 p1, 0x0

    .line 26
    invoke-static {p2, p4, p1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object p1

    invoke-virtual {p1}, Landroid/widget/Toast;->show()V

    return-void
.end method
