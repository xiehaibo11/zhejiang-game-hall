.class Lcom/ss/android/downloadlib/ux$4;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/ux;->rg(Landroid/content/Context;ILcom/ss/android/download/api/download/DownloadStatusChangeListener;Lcom/ss/android/download/api/download/DownloadModel;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic df:I

.field final synthetic pp:Lcom/ss/android/downloadlib/ux;

.field final synthetic pt:Lcom/ss/android/download/api/download/DownloadModel;

.field final synthetic q:Lcom/ss/android/download/api/download/DownloadStatusChangeListener;

.field final synthetic rg:Landroid/content/Context;


# direct methods
.method constructor <init>(Lcom/ss/android/downloadlib/ux;Landroid/content/Context;ILcom/ss/android/download/api/download/DownloadStatusChangeListener;Lcom/ss/android/download/api/download/DownloadModel;)V
    .locals 0

    .line 219
    iput-object p1, p0, Lcom/ss/android/downloadlib/ux$4;->pp:Lcom/ss/android/downloadlib/ux;

    iput-object p2, p0, Lcom/ss/android/downloadlib/ux$4;->rg:Landroid/content/Context;

    iput p3, p0, Lcom/ss/android/downloadlib/ux$4;->df:I

    iput-object p4, p0, Lcom/ss/android/downloadlib/ux$4;->q:Lcom/ss/android/download/api/download/DownloadStatusChangeListener;

    iput-object p5, p0, Lcom/ss/android/downloadlib/ux$4;->pt:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 5

    .line 222
    iget-object v0, p0, Lcom/ss/android/downloadlib/ux$4;->pp:Lcom/ss/android/downloadlib/ux;

    invoke-static {v0}, Lcom/ss/android/downloadlib/ux;->df(Lcom/ss/android/downloadlib/ux;)Lcom/ss/android/downloadlib/fw;

    move-result-object v0

    iget-object v1, p0, Lcom/ss/android/downloadlib/ux$4;->rg:Landroid/content/Context;

    iget v2, p0, Lcom/ss/android/downloadlib/ux$4;->df:I

    iget-object v3, p0, Lcom/ss/android/downloadlib/ux$4;->q:Lcom/ss/android/download/api/download/DownloadStatusChangeListener;

    iget-object v4, p0, Lcom/ss/android/downloadlib/ux$4;->pt:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-virtual {v0, v1, v2, v3, v4}, Lcom/ss/android/downloadlib/fw;->rg(Landroid/content/Context;ILcom/ss/android/download/api/download/DownloadStatusChangeListener;Lcom/ss/android/download/api/download/DownloadModel;)V

    return-void
.end method
