.class Lcom/sigmob/sdk/splash/g$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/splash/g;-><init>(Lcom/sigmob/windad/Splash/WindSplashAdRequest;Lcom/sigmob/windad/Splash/WindSplashADListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/splash/g;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/splash/g;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/splash/g$1;->a:Lcom/sigmob/sdk/splash/g;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 4

    iget-object v0, p0, Lcom/sigmob/sdk/splash/g$1;->a:Lcom/sigmob/sdk/splash/g;

    invoke-static {v0}, Lcom/sigmob/sdk/splash/g;->a(Lcom/sigmob/sdk/splash/g;)Landroid/os/Handler;

    move-result-object v0

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/sigmob/sdk/splash/g$1;->a:Lcom/sigmob/sdk/splash/g;

    invoke-static {v0}, Lcom/sigmob/sdk/splash/g;->a(Lcom/sigmob/sdk/splash/g;)Landroid/os/Handler;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    iget-object v0, p0, Lcom/sigmob/sdk/splash/g$1;->a:Lcom/sigmob/sdk/splash/g;

    invoke-static {v0}, Lcom/sigmob/sdk/splash/g;->b(Lcom/sigmob/sdk/splash/g;)Lcom/sigmob/sdk/splash/i;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/splash/g$1;->a:Lcom/sigmob/sdk/splash/g;

    invoke-static {v0}, Lcom/sigmob/sdk/splash/g;->c(Lcom/sigmob/sdk/splash/g;)I

    move-result v0

    if-lez v0, :cond_2

    iget-object v0, p0, Lcom/sigmob/sdk/splash/g$1;->a:Lcom/sigmob/sdk/splash/g;

    invoke-static {v0}, Lcom/sigmob/sdk/splash/g;->b(Lcom/sigmob/sdk/splash/g;)Lcom/sigmob/sdk/splash/i;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/splash/g$1;->a:Lcom/sigmob/sdk/splash/g;

    invoke-static {v1}, Lcom/sigmob/sdk/splash/g;->c(Lcom/sigmob/sdk/splash/g;)I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/splash/i;->setDuration(I)V

    iget-object v0, p0, Lcom/sigmob/sdk/splash/g$1;->a:Lcom/sigmob/sdk/splash/g;

    invoke-static {v0}, Lcom/sigmob/sdk/splash/g;->d(Lcom/sigmob/sdk/splash/g;)I

    iget-object v0, p0, Lcom/sigmob/sdk/splash/g$1;->a:Lcom/sigmob/sdk/splash/g;

    invoke-static {v0}, Lcom/sigmob/sdk/splash/g;->e(Lcom/sigmob/sdk/splash/g;)I

    move-result v0

    const/4 v1, 0x2

    if-eq v0, v1, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/splash/g$1;->a:Lcom/sigmob/sdk/splash/g;

    invoke-static {v0}, Lcom/sigmob/sdk/splash/g;->f(Lcom/sigmob/sdk/splash/g;)I

    move-result v0

    if-lez v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/splash/g$1;->a:Lcom/sigmob/sdk/splash/g;

    invoke-static {v0}, Lcom/sigmob/sdk/splash/g;->g(Lcom/sigmob/sdk/splash/g;)I

    move-result v0

    iget-object v1, p0, Lcom/sigmob/sdk/splash/g$1;->a:Lcom/sigmob/sdk/splash/g;

    invoke-static {v1}, Lcom/sigmob/sdk/splash/g;->c(Lcom/sigmob/sdk/splash/g;)I

    move-result v1

    sub-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x64

    iget-object v1, p0, Lcom/sigmob/sdk/splash/g$1;->a:Lcom/sigmob/sdk/splash/g;

    invoke-static {v1}, Lcom/sigmob/sdk/splash/g;->g(Lcom/sigmob/sdk/splash/g;)I

    move-result v1

    div-int/2addr v0, v1

    iget-object v1, p0, Lcom/sigmob/sdk/splash/g$1;->a:Lcom/sigmob/sdk/splash/g;

    invoke-static {v1}, Lcom/sigmob/sdk/splash/g;->f(Lcom/sigmob/sdk/splash/g;)I

    move-result v1

    if-lt v0, v1, :cond_1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "performAdClick: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/splash/g$1;->a:Lcom/sigmob/sdk/splash/g;

    invoke-static {v1}, Lcom/sigmob/sdk/splash/g;->g(Lcom/sigmob/sdk/splash/g;)I

    move-result v1

    iget-object v2, p0, Lcom/sigmob/sdk/splash/g$1;->a:Lcom/sigmob/sdk/splash/g;

    invoke-static {v2}, Lcom/sigmob/sdk/splash/g;->c(Lcom/sigmob/sdk/splash/g;)I

    move-result v2

    sub-int/2addr v1, v2

    mul-int/lit8 v1, v1, 0x64

    iget-object v2, p0, Lcom/sigmob/sdk/splash/g$1;->a:Lcom/sigmob/sdk/splash/g;

    invoke-static {v2}, Lcom/sigmob/sdk/splash/g;->g(Lcom/sigmob/sdk/splash/g;)I

    move-result v2

    div-int/2addr v1, v2

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/splash/g$1;->a:Lcom/sigmob/sdk/splash/g;

    invoke-static {v0}, Lcom/sigmob/sdk/splash/g;->b(Lcom/sigmob/sdk/splash/g;)Lcom/sigmob/sdk/splash/i;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/splash/i;->d()V

    :cond_1
    iget-object v0, p0, Lcom/sigmob/sdk/splash/g$1;->a:Lcom/sigmob/sdk/splash/g;

    invoke-static {v0}, Lcom/sigmob/sdk/splash/g;->a(Lcom/sigmob/sdk/splash/g;)Landroid/os/Handler;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/splash/g$1;->a:Lcom/sigmob/sdk/splash/g;

    invoke-static {v1}, Lcom/sigmob/sdk/splash/g;->h(Lcom/sigmob/sdk/splash/g;)Ljava/lang/Runnable;

    move-result-object v1

    const-wide/16 v2, 0x3e8

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    goto :goto_0

    :cond_2
    iget-object v0, p0, Lcom/sigmob/sdk/splash/g$1;->a:Lcom/sigmob/sdk/splash/g;

    invoke-static {v0}, Lcom/sigmob/sdk/splash/g;->b(Lcom/sigmob/sdk/splash/g;)Lcom/sigmob/sdk/splash/i;

    move-result-object v0

    const/4 v2, 0x0

    invoke-virtual {v0, v2}, Lcom/sigmob/sdk/splash/i;->setDuration(I)V

    iget-object v0, p0, Lcom/sigmob/sdk/splash/g$1;->a:Lcom/sigmob/sdk/splash/g;

    invoke-static {v0}, Lcom/sigmob/sdk/splash/g;->i(Lcom/sigmob/sdk/splash/g;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    const-string v2, "complete"

    invoke-static {v2, v1, v0}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    :cond_3
    :goto_0
    return-void
.end method
