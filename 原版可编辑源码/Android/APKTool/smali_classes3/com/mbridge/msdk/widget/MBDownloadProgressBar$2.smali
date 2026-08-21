.class final Lcom/mbridge/msdk/widget/MBDownloadProgressBar$2;
.super Ljava/lang/Object;
.source "MBDownloadProgressBar.java"

# interfaces
.implements Lcom/mbridge/msdk/out/IDownloadListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->e()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/widget/MBDownloadProgressBar;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/widget/MBDownloadProgressBar;)V
    .locals 0

    .line 327
    iput-object p1, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar$2;->a:Lcom/mbridge/msdk/widget/MBDownloadProgressBar;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onEnd(IILjava/lang/String;)V
    .locals 0

    return-void
.end method

.method public final onProgressUpdate(I)V
    .locals 1

    .line 335
    iget-object v0, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar$2;->a:Lcom/mbridge/msdk/widget/MBDownloadProgressBar;

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->setProgress(I)V

    return-void
.end method

.method public final onStart()V
    .locals 0

    return-void
.end method

.method public final onStatus(I)V
    .locals 1

    .line 345
    iget-object v0, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar$2;->a:Lcom/mbridge/msdk/widget/MBDownloadProgressBar;

    invoke-static {v0}, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->f(Lcom/mbridge/msdk/widget/MBDownloadProgressBar;)I

    move-result v0

    if-eq v0, p1, :cond_0

    .line 346
    iget-object v0, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar$2;->a:Lcom/mbridge/msdk/widget/MBDownloadProgressBar;

    invoke-static {v0, p1}, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->a(Lcom/mbridge/msdk/widget/MBDownloadProgressBar;I)I

    .line 347
    iget-object v0, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar$2;->a:Lcom/mbridge/msdk/widget/MBDownloadProgressBar;

    invoke-static {v0, p1}, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->b(Lcom/mbridge/msdk/widget/MBDownloadProgressBar;I)V

    :cond_0
    return-void
.end method
