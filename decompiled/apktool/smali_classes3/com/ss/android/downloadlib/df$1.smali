.class Lcom/ss/android/downloadlib/df$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/downloadlib/exception/df$rg;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/df;->rg(Landroid/content/Context;Ljava/lang/String;ZLcom/ss/android/download/api/download/DownloadModel;Lcom/ss/android/download/api/download/DownloadEventConfig;Lcom/ss/android/download/api/download/DownloadController;Lcom/ss/android/download/api/download/DownloadStatusChangeListener;IZLcom/ss/android/download/api/config/IDownloadButtonClickListener;)Landroid/app/Dialog;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/ss/android/downloadlib/exception/df$rg<",
        "Landroid/app/Dialog;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic b:Lcom/ss/android/downloadlib/df;

.field final synthetic bm:Lcom/ss/android/download/api/config/IDownloadButtonClickListener;

.field final synthetic c:Lcom/ss/android/download/api/download/DownloadController;

.field final synthetic df:Ljava/lang/String;

.field final synthetic fw:Lcom/ss/android/download/api/download/DownloadStatusChangeListener;

.field final synthetic pp:Lcom/ss/android/download/api/download/DownloadEventConfig;

.field final synthetic pt:Lcom/ss/android/download/api/download/DownloadModel;

.field final synthetic q:Z

.field final synthetic rg:Landroid/content/Context;

.field final synthetic rz:Z

.field final synthetic ux:I


# direct methods
.method constructor <init>(Lcom/ss/android/downloadlib/df;Landroid/content/Context;Ljava/lang/String;ZLcom/ss/android/download/api/download/DownloadModel;Lcom/ss/android/download/api/download/DownloadEventConfig;Lcom/ss/android/download/api/download/DownloadController;Lcom/ss/android/download/api/download/DownloadStatusChangeListener;IZLcom/ss/android/download/api/config/IDownloadButtonClickListener;)V
    .locals 0

    .line 126
    iput-object p1, p0, Lcom/ss/android/downloadlib/df$1;->b:Lcom/ss/android/downloadlib/df;

    iput-object p2, p0, Lcom/ss/android/downloadlib/df$1;->rg:Landroid/content/Context;

    iput-object p3, p0, Lcom/ss/android/downloadlib/df$1;->df:Ljava/lang/String;

    iput-boolean p4, p0, Lcom/ss/android/downloadlib/df$1;->q:Z

    iput-object p5, p0, Lcom/ss/android/downloadlib/df$1;->pt:Lcom/ss/android/download/api/download/DownloadModel;

    iput-object p6, p0, Lcom/ss/android/downloadlib/df$1;->pp:Lcom/ss/android/download/api/download/DownloadEventConfig;

    iput-object p7, p0, Lcom/ss/android/downloadlib/df$1;->c:Lcom/ss/android/download/api/download/DownloadController;

    iput-object p8, p0, Lcom/ss/android/downloadlib/df$1;->fw:Lcom/ss/android/download/api/download/DownloadStatusChangeListener;

    iput p9, p0, Lcom/ss/android/downloadlib/df$1;->ux:I

    iput-boolean p10, p0, Lcom/ss/android/downloadlib/df$1;->rz:Z

    iput-object p11, p0, Lcom/ss/android/downloadlib/df$1;->bm:Lcom/ss/android/download/api/config/IDownloadButtonClickListener;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public synthetic df()Ljava/lang/Object;
    .locals 1

    .line 126
    invoke-virtual {p0}, Lcom/ss/android/downloadlib/df$1;->rg()Landroid/app/Dialog;

    move-result-object v0

    return-object v0
.end method

.method public rg()Landroid/app/Dialog;
    .locals 11

    .line 129
    iget-object v0, p0, Lcom/ss/android/downloadlib/df$1;->b:Lcom/ss/android/downloadlib/df;

    iget-object v1, p0, Lcom/ss/android/downloadlib/df$1;->rg:Landroid/content/Context;

    iget-object v2, p0, Lcom/ss/android/downloadlib/df$1;->df:Ljava/lang/String;

    iget-boolean v3, p0, Lcom/ss/android/downloadlib/df$1;->q:Z

    iget-object v4, p0, Lcom/ss/android/downloadlib/df$1;->pt:Lcom/ss/android/download/api/download/DownloadModel;

    iget-object v5, p0, Lcom/ss/android/downloadlib/df$1;->pp:Lcom/ss/android/download/api/download/DownloadEventConfig;

    iget-object v6, p0, Lcom/ss/android/downloadlib/df$1;->c:Lcom/ss/android/download/api/download/DownloadController;

    iget-object v7, p0, Lcom/ss/android/downloadlib/df$1;->fw:Lcom/ss/android/download/api/download/DownloadStatusChangeListener;

    iget v8, p0, Lcom/ss/android/downloadlib/df$1;->ux:I

    iget-boolean v9, p0, Lcom/ss/android/downloadlib/df$1;->rz:Z

    iget-object v10, p0, Lcom/ss/android/downloadlib/df$1;->bm:Lcom/ss/android/download/api/config/IDownloadButtonClickListener;

    invoke-virtual/range {v0 .. v10}, Lcom/ss/android/downloadlib/df;->df(Landroid/content/Context;Ljava/lang/String;ZLcom/ss/android/download/api/download/DownloadModel;Lcom/ss/android/download/api/download/DownloadEventConfig;Lcom/ss/android/download/api/download/DownloadController;Lcom/ss/android/download/api/download/DownloadStatusChangeListener;IZLcom/ss/android/download/api/config/IDownloadButtonClickListener;)Landroid/app/Dialog;

    move-result-object v0

    return-object v0
.end method
