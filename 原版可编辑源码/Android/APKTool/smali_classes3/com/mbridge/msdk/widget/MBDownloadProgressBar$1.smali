.class final Lcom/mbridge/msdk/widget/MBDownloadProgressBar$1;
.super Ljava/lang/Object;
.source "MBDownloadProgressBar.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->a(I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:I

.field final synthetic b:Lcom/mbridge/msdk/widget/MBDownloadProgressBar;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/widget/MBDownloadProgressBar;I)V
    .locals 0

    .line 95
    iput-object p1, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar$1;->b:Lcom/mbridge/msdk/widget/MBDownloadProgressBar;

    iput p2, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar$1;->a:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 98
    iget v0, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar$1;->a:I

    const/4 v1, 0x1

    if-eq v0, v1, :cond_3

    const/4 v1, 0x2

    if-eq v0, v1, :cond_2

    const/4 v1, 0x3

    if-eq v0, v1, :cond_1

    const/4 v1, 0x4

    if-eq v0, v1, :cond_0

    .line 101
    iget-object v0, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar$1;->b:Lcom/mbridge/msdk/widget/MBDownloadProgressBar;

    invoke-static {v0}, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->a(Lcom/mbridge/msdk/widget/MBDownloadProgressBar;)V

    goto :goto_0

    .line 113
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar$1;->b:Lcom/mbridge/msdk/widget/MBDownloadProgressBar;

    invoke-static {v0}, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->e(Lcom/mbridge/msdk/widget/MBDownloadProgressBar;)V

    goto :goto_0

    .line 110
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar$1;->b:Lcom/mbridge/msdk/widget/MBDownloadProgressBar;

    invoke-static {v0}, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->d(Lcom/mbridge/msdk/widget/MBDownloadProgressBar;)V

    goto :goto_0

    .line 107
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar$1;->b:Lcom/mbridge/msdk/widget/MBDownloadProgressBar;

    invoke-static {v0}, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->c(Lcom/mbridge/msdk/widget/MBDownloadProgressBar;)V

    goto :goto_0

    .line 104
    :cond_3
    iget-object v0, p0, Lcom/mbridge/msdk/widget/MBDownloadProgressBar$1;->b:Lcom/mbridge/msdk/widget/MBDownloadProgressBar;

    invoke-static {v0}, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->b(Lcom/mbridge/msdk/widget/MBDownloadProgressBar;)V

    :goto_0
    return-void
.end method
