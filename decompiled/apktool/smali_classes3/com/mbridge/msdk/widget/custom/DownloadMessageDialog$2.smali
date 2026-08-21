.class final Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog$2;
.super Landroid/view/OrientationEventListener;
.source "DownloadMessageDialog.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;Landroid/content/Context;I)V
    .locals 0

    .line 361
    iput-object p1, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog$2;->a:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;

    invoke-direct {p0, p2, p3}, Landroid/view/OrientationEventListener;-><init>(Landroid/content/Context;I)V

    return-void
.end method


# virtual methods
.method public final onOrientationChanged(I)V
    .locals 5

    .line 365
    :try_start_0
    iget-object p1, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog$2;->a:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;

    invoke-virtual {p1}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->getWindow()Landroid/view/Window;

    move-result-object p1

    invoke-virtual {p1}, Landroid/view/Window;->getAttributes()Landroid/view/WindowManager$LayoutParams;

    move-result-object p1

    .line 366
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog$2;->a:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;

    invoke-virtual {v0}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    .line 367
    invoke-virtual {v0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v0

    .line 369
    iget-object v1, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog$2;->a:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;

    invoke-virtual {v1}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object v1

    iget v1, v1, Landroid/content/res/Configuration;->orientation:I

    const/4 v2, -0x1

    const/4 v3, 0x1

    if-ne v1, v3, :cond_1

    .line 370
    iget-object v1, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog$2;->a:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;

    invoke-static {v1}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->c(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;)Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog$a;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 371
    iget-object v1, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog$2;->a:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;

    invoke-static {v1}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->c(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;)Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog$a;

    move-result-object v1

    invoke-interface {v1, v3}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog$a;->a(I)V

    .line 373
    :cond_0
    iput v2, p1, Landroid/view/WindowManager$LayoutParams;->width:I

    .line 374
    iget v0, v0, Landroid/util/DisplayMetrics;->heightPixels:I

    int-to-float v0, v0

    iget-object v1, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog$2;->a:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;

    invoke-static {v1}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->d(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;)F

    move-result v1

    mul-float/2addr v0, v1

    float-to-int v0, v0

    iput v0, p1, Landroid/view/WindowManager$LayoutParams;->height:I

    const/16 v0, 0x50

    .line 375
    iput v0, p1, Landroid/view/WindowManager$LayoutParams;->gravity:I

    goto :goto_0

    .line 377
    :cond_1
    iget-object v1, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog$2;->a:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;

    invoke-static {v1}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->c(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;)Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog$a;

    move-result-object v1

    if-eqz v1, :cond_2

    .line 378
    iget-object v1, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog$2;->a:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;

    invoke-static {v1}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->c(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;)Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog$a;

    move-result-object v1

    const/4 v3, 0x2

    invoke-interface {v1, v3}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog$a;->a(I)V

    .line 380
    :cond_2
    iget v0, v0, Landroid/util/DisplayMetrics;->widthPixels:I

    int-to-double v0, v0

    const-wide/high16 v3, 0x3fe0000000000000L    # 0.5

    mul-double/2addr v0, v3

    double-to-int v0, v0

    iput v0, p1, Landroid/view/WindowManager$LayoutParams;->width:I

    .line 381
    iput v2, p1, Landroid/view/WindowManager$LayoutParams;->height:I

    const/16 v0, 0x11

    .line 382
    iput v0, p1, Landroid/view/WindowManager$LayoutParams;->gravity:I

    .line 384
    :goto_0
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog$2;->a:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;

    invoke-virtual {v0}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0, p1}, Landroid/view/Window;->setAttributes(Landroid/view/WindowManager$LayoutParams;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p1

    .line 386
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string v0, "DownloadMessageDialog"

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_1
    return-void
.end method
