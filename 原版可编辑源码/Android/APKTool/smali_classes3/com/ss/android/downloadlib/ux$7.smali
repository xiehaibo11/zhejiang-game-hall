.class Lcom/ss/android/downloadlib/ux$7;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/ux;->rg(Ljava/lang/String;JILcom/ss/android/download/api/download/DownloadEventConfig;Lcom/ss/android/download/api/download/DownloadController;Lcom/ss/android/download/api/config/IDownloadButtonClickListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic c:Lcom/ss/android/download/api/config/IDownloadButtonClickListener;

.field final synthetic df:J

.field final synthetic fw:Lcom/ss/android/downloadlib/ux;

.field final synthetic pp:Lcom/ss/android/download/api/download/DownloadController;

.field final synthetic pt:Lcom/ss/android/download/api/download/DownloadEventConfig;

.field final synthetic q:I

.field final synthetic rg:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/ss/android/downloadlib/ux;Ljava/lang/String;JILcom/ss/android/download/api/download/DownloadEventConfig;Lcom/ss/android/download/api/download/DownloadController;Lcom/ss/android/download/api/config/IDownloadButtonClickListener;)V
    .locals 0

    .line 292
    iput-object p1, p0, Lcom/ss/android/downloadlib/ux$7;->fw:Lcom/ss/android/downloadlib/ux;

    iput-object p2, p0, Lcom/ss/android/downloadlib/ux$7;->rg:Ljava/lang/String;

    iput-wide p3, p0, Lcom/ss/android/downloadlib/ux$7;->df:J

    iput p5, p0, Lcom/ss/android/downloadlib/ux$7;->q:I

    iput-object p6, p0, Lcom/ss/android/downloadlib/ux$7;->pt:Lcom/ss/android/download/api/download/DownloadEventConfig;

    iput-object p7, p0, Lcom/ss/android/downloadlib/ux$7;->pp:Lcom/ss/android/download/api/download/DownloadController;

    iput-object p8, p0, Lcom/ss/android/downloadlib/ux$7;->c:Lcom/ss/android/download/api/config/IDownloadButtonClickListener;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 9

    .line 295
    iget-object v0, p0, Lcom/ss/android/downloadlib/ux$7;->fw:Lcom/ss/android/downloadlib/ux;

    invoke-static {v0}, Lcom/ss/android/downloadlib/ux;->df(Lcom/ss/android/downloadlib/ux;)Lcom/ss/android/downloadlib/fw;

    move-result-object v1

    iget-object v2, p0, Lcom/ss/android/downloadlib/ux$7;->rg:Ljava/lang/String;

    iget-wide v3, p0, Lcom/ss/android/downloadlib/ux$7;->df:J

    iget v5, p0, Lcom/ss/android/downloadlib/ux$7;->q:I

    iget-object v6, p0, Lcom/ss/android/downloadlib/ux$7;->pt:Lcom/ss/android/download/api/download/DownloadEventConfig;

    iget-object v7, p0, Lcom/ss/android/downloadlib/ux$7;->pp:Lcom/ss/android/download/api/download/DownloadController;

    iget-object v8, p0, Lcom/ss/android/downloadlib/ux$7;->c:Lcom/ss/android/download/api/config/IDownloadButtonClickListener;

    invoke-virtual/range {v1 .. v8}, Lcom/ss/android/downloadlib/fw;->rg(Ljava/lang/String;JILcom/ss/android/download/api/download/DownloadEventConfig;Lcom/ss/android/download/api/download/DownloadController;Lcom/ss/android/download/api/config/IDownloadButtonClickListener;)V

    return-void
.end method
