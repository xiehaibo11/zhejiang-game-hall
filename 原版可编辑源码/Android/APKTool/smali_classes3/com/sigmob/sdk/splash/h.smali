.class Lcom/sigmob/sdk/splash/h;
.super Lcom/sigmob/sdk/splash/d;


# instance fields
.field private final b:Lcom/sigmob/sdk/base/views/c;

.field private final c:Lcom/sigmob/sdk/base/models/BaseAdUnit;


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 2

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/splash/d;-><init>(Landroid/content/Context;)V

    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {v0, v1, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    new-instance v1, Lcom/sigmob/sdk/base/views/c;

    invoke-direct {v1, p1}, Lcom/sigmob/sdk/base/views/c;-><init>(Landroid/content/Context;)V

    iput-object v1, p0, Lcom/sigmob/sdk/splash/h;->b:Lcom/sigmob/sdk/base/views/c;

    const/high16 p1, -0x1000000

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/splash/h;->setBackgroundColor(I)V

    iput-object p2, p0, Lcom/sigmob/sdk/splash/h;->c:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iget-object p1, p0, Lcom/sigmob/sdk/splash/h;->b:Lcom/sigmob/sdk/base/views/c;

    invoke-virtual {p0, p1, v0}, Lcom/sigmob/sdk/splash/h;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/splash/h;)Lcom/sigmob/sdk/base/models/BaseAdUnit;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/splash/h;->c:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    return-object p0
.end method


# virtual methods
.method public a()V
    .locals 2

    const/4 v0, 0x0

    invoke-super {p0, v0}, Lcom/sigmob/sdk/splash/d;->setVisibility(I)V

    const-string v1, "video showAd"

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/sigmob/sdk/splash/h;->b:Lcom/sigmob/sdk/base/views/c;

    invoke-virtual {v1, v0}, Lcom/sigmob/sdk/base/views/c;->setVisibility(I)V

    iget-object v0, p0, Lcom/sigmob/sdk/splash/h;->b:Lcom/sigmob/sdk/base/views/c;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/views/c;->d()V

    return-void
.end method

.method public a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Z
    .locals 2

    const-string v0, "video start"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getSplashFilePath()Ljava/lang/String;

    move-result-object p1

    iget-object v0, p0, Lcom/sigmob/sdk/splash/h;->b:Lcom/sigmob/sdk/base/views/c;

    const/4 v1, 0x0

    invoke-virtual {v0, v1, v1}, Lcom/sigmob/sdk/base/views/c;->a(II)V

    iget-object v0, p0, Lcom/sigmob/sdk/splash/h;->b:Lcom/sigmob/sdk/base/views/c;

    new-instance v1, Lcom/sigmob/sdk/splash/h$1;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/splash/h$1;-><init>(Lcom/sigmob/sdk/splash/h;)V

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/views/c;->setOnPreparedListener(Landroid/media/MediaPlayer$OnPreparedListener;)V

    iget-object v0, p0, Lcom/sigmob/sdk/splash/h;->b:Lcom/sigmob/sdk/base/views/c;

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/base/views/c;->setVideoPath(Ljava/lang/String;)V

    const/4 p1, 0x1

    return p1
.end method

.method public b()V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/splash/h;->b:Lcom/sigmob/sdk/base/views/c;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/views/c;->a()V

    return-void
.end method

.method public c()V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/splash/h;->b:Lcom/sigmob/sdk/base/views/c;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/views/c;->b()V

    return-void
.end method

.method public setVisibility(I)V
    .locals 3

    const/16 v0, 0x8

    if-ne p1, v0, :cond_0

    :try_start_0
    iget-object v0, p0, Lcom/sigmob/sdk/splash/h;->b:Lcom/sigmob/sdk/base/views/c;

    if-eqz v0, :cond_0

    const-string v0, "video GONE"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/splash/h;->b:Lcom/sigmob/sdk/base/views/c;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/views/c;->c()V

    invoke-virtual {p0}, Lcom/sigmob/sdk/splash/h;->removeAllViews()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "set splash ad video content error: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :cond_0
    :goto_0
    invoke-super {p0, p1}, Lcom/sigmob/sdk/splash/d;->setVisibility(I)V

    return-void
.end method
