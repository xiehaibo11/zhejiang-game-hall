.class public Lcom/bykv/vk/openvk/downloadnew/pt$pt;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/download/api/config/hq;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bykv/vk/openvk/downloadnew/pt;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "pt"
.end annotation


# instance fields
.field private final rg:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Landroid/content/Context;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    .line 551
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 552
    new-instance v0, Ljava/lang/ref/WeakReference;

    invoke-direct {v0, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object v0, p0, Lcom/bykv/vk/openvk/downloadnew/pt$pt;->rg:Ljava/lang/ref/WeakReference;

    return-void
.end method

.method private q(Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;)Lcom/bykv/vk/openvk/downloadnew/core/DialogBuilder;
    .locals 2

    .line 591
    invoke-static {}, Lcom/bykv/vk/openvk/downloadnew/core/DialogBuilder;->builder()Lcom/bykv/vk/openvk/downloadnew/core/DialogBuilder;

    move-result-object v0

    iget-object v1, p1, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;->df:Ljava/lang/String;

    .line 592
    invoke-virtual {v0, v1}, Lcom/bykv/vk/openvk/downloadnew/core/DialogBuilder;->setTitle(Ljava/lang/String;)Lcom/bykv/vk/openvk/downloadnew/core/DialogBuilder;

    move-result-object v0

    iget-object v1, p1, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;->q:Ljava/lang/String;

    .line 593
    invoke-virtual {v0, v1}, Lcom/bykv/vk/openvk/downloadnew/core/DialogBuilder;->setMessage(Ljava/lang/String;)Lcom/bykv/vk/openvk/downloadnew/core/DialogBuilder;

    move-result-object v0

    iget-object v1, p1, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;->pp:Ljava/lang/String;

    .line 594
    invoke-virtual {v0, v1}, Lcom/bykv/vk/openvk/downloadnew/core/DialogBuilder;->setNegativeBtnText(Ljava/lang/String;)Lcom/bykv/vk/openvk/downloadnew/core/DialogBuilder;

    move-result-object v0

    iget-object v1, p1, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;->pt:Ljava/lang/String;

    .line 595
    invoke-virtual {v0, v1}, Lcom/bykv/vk/openvk/downloadnew/core/DialogBuilder;->setPositiveBtnText(Ljava/lang/String;)Lcom/bykv/vk/openvk/downloadnew/core/DialogBuilder;

    move-result-object v0

    iget-object v1, p1, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;->fw:Landroid/graphics/drawable/Drawable;

    .line 596
    invoke-virtual {v0, v1}, Lcom/bykv/vk/openvk/downloadnew/core/DialogBuilder;->setIcon(Landroid/graphics/drawable/Drawable;)Lcom/bykv/vk/openvk/downloadnew/core/DialogBuilder;

    move-result-object v0

    new-instance v1, Lcom/bykv/vk/openvk/downloadnew/pt$pt$1;

    invoke-direct {v1, p0, p1}, Lcom/bykv/vk/openvk/downloadnew/pt$pt$1;-><init>(Lcom/bykv/vk/openvk/downloadnew/pt$pt;Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;)V

    .line 597
    invoke-virtual {v0, v1}, Lcom/bykv/vk/openvk/downloadnew/core/DialogBuilder;->setDialogStatusChangedListener(Lcom/bykv/vk/openvk/downloadnew/core/IDialogStatusChangedListener;)Lcom/bykv/vk/openvk/downloadnew/core/DialogBuilder;

    move-result-object p1

    return-object p1
.end method


# virtual methods
.method public synthetic df(Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;)Landroid/app/Dialog;
    .locals 0

    .line 547
    invoke-virtual {p0, p1}, Lcom/bykv/vk/openvk/downloadnew/pt$pt;->rg(Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;)Landroid/app/AlertDialog;

    move-result-object p1

    return-object p1
.end method

.method public rg(Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;)Landroid/app/AlertDialog;
    .locals 6

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return-object v0

    .line 575
    :cond_0
    invoke-static {}, Lcom/bykv/vk/openvk/downloadnew/pt;->pt()Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadVisitor;

    move-result-object v1

    if-eqz v1, :cond_4

    .line 576
    iget-object v1, p1, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;->rg:Landroid/content/Context;

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-eqz v1, :cond_2

    iget-object v1, p1, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;->rg:Landroid/content/Context;

    instance-of v1, v1, Landroid/app/Activity;

    if-eqz v1, :cond_2

    .line 577
    invoke-static {}, Lcom/bykv/vk/openvk/downloadnew/pt;->pt()Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadVisitor;

    move-result-object v0

    iget-object v1, p1, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;->rg:Landroid/content/Context;

    check-cast v1, Landroid/app/Activity;

    iget v4, p1, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;->bm:I

    if-ne v4, v3, :cond_1

    move v2, v3

    :cond_1
    invoke-direct {p0, p1}, Lcom/bykv/vk/openvk/downloadnew/pt$pt;->q(Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;)Lcom/bykv/vk/openvk/downloadnew/core/DialogBuilder;

    move-result-object p1

    invoke-interface {v0, v1, v2, p1}, Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadVisitor;->showDialogBySelf(Landroid/app/Activity;ZLcom/bykv/vk/openvk/downloadnew/core/DialogBuilder;)Landroid/app/AlertDialog;

    move-result-object p1

    return-object p1

    .line 579
    :cond_2
    invoke-static {}, Lcom/bykv/vk/openvk/downloadnew/pt;->pt()Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadVisitor;

    move-result-object v1

    iget-object v4, p0, Lcom/bykv/vk/openvk/downloadnew/pt$pt;->rg:Ljava/lang/ref/WeakReference;

    iget v5, p1, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;->bm:I

    if-ne v5, v3, :cond_3

    move v2, v3

    :cond_3
    invoke-direct {p0, p1}, Lcom/bykv/vk/openvk/downloadnew/pt$pt;->q(Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;)Lcom/bykv/vk/openvk/downloadnew/core/DialogBuilder;

    move-result-object p1

    invoke-interface {v1, v4, v2, p1}, Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadVisitor;->showDialogByDelegate(Ljava/lang/ref/WeakReference;ZLcom/bykv/vk/openvk/downloadnew/core/DialogBuilder;)V

    :cond_4
    return-object v0
.end method

.method public rg(ILandroid/content/Context;Lcom/ss/android/download/api/download/DownloadModel;Ljava/lang/String;Landroid/graphics/drawable/Drawable;I)V
    .locals 0

    .line 560
    :try_start_0
    invoke-static {p4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    const/4 p1, 0x0

    .line 561
    invoke-static {p2, p4, p1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object p1

    invoke-virtual {p1}, Landroid/widget/Toast;->show()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 564
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string p3, "showToastWithDuration e "

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "LibUIFactory"

    invoke-static {p2, p1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->e(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method
