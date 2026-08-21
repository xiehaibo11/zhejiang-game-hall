.class public Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$df;,
        Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;,
        Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$Scene;
    }
.end annotation


# instance fields
.field public bm:I

.field public c:Z

.field public df:Ljava/lang/String;

.field public fw:Landroid/graphics/drawable/Drawable;

.field public pp:Ljava/lang/String;

.field public pt:Ljava/lang/String;

.field public q:Ljava/lang/String;

.field public rg:Landroid/content/Context;

.field public rz:Landroid/view/View;

.field public ux:Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$df;


# direct methods
.method private constructor <init>(Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;)V
    .locals 1

    .line 72
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x1

    .line 42
    iput-boolean v0, p0, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;->c:Z

    .line 73
    invoke-static {p1}, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;->rg(Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;)Landroid/content/Context;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;->rg:Landroid/content/Context;

    .line 74
    invoke-static {p1}, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;->df(Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;->df:Ljava/lang/String;

    .line 75
    invoke-static {p1}, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;->q(Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;->q:Ljava/lang/String;

    .line 76
    invoke-static {p1}, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;->pt(Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;->pt:Ljava/lang/String;

    .line 77
    invoke-static {p1}, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;->pp(Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;->pp:Ljava/lang/String;

    .line 78
    invoke-static {p1}, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;->c(Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;->c:Z

    .line 79
    invoke-static {p1}, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;->fw(Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;)Landroid/graphics/drawable/Drawable;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;->fw:Landroid/graphics/drawable/Drawable;

    .line 80
    invoke-static {p1}, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;->ux(Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;)Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$df;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;->ux:Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$df;

    .line 81
    iget-object v0, p1, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;->rg:Landroid/view/View;

    iput-object v0, p0, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;->rz:Landroid/view/View;

    .line 82
    iget p1, p1, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;->df:I

    iput p1, p0, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;->bm:I

    return-void
.end method

.method synthetic constructor <init>(Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$1;)V
    .locals 0

    .line 16
    invoke-direct {p0, p1}, Lcom/ss/android/download/api/model/DownloadAlertDialogInfo;-><init>(Lcom/ss/android/download/api/model/DownloadAlertDialogInfo$rg;)V

    return-void
.end method
