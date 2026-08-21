.class final Lcom/tkay/expressad/splash/c/d$2;
.super Landroid/os/Handler;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/splash/c/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/splash/c/d;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/splash/c/d;Landroid/os/Looper;)V
    .locals 0

    .line 153
    iput-object p1, p0, Lcom/tkay/expressad/splash/c/d$2;->a:Lcom/tkay/expressad/splash/c/d;

    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public final handleMessage(Landroid/os/Message;)V
    .locals 4

    .line 156
    invoke-super {p0, p1}, Landroid/os/Handler;->handleMessage(Landroid/os/Message;)V

    .line 157
    iget p1, p1, Landroid/os/Message;->what:I

    const/4 v0, 0x1

    if-eq p1, v0, :cond_2

    const/4 v0, 0x2

    if-eq p1, v0, :cond_0

    goto :goto_0

    .line 181
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/d$2;->a:Lcom/tkay/expressad/splash/c/d;

    invoke-static {p1}, Lcom/tkay/expressad/splash/c/d;->h(Lcom/tkay/expressad/splash/c/d;)Lcom/tkay/expressad/foundation/d/c;

    move-result-object p1

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/tkay/expressad/splash/c/d$2;->a:Lcom/tkay/expressad/splash/c/d;

    invoke-static {p1}, Lcom/tkay/expressad/splash/c/d;->h(Lcom/tkay/expressad/splash/c/d;)Lcom/tkay/expressad/foundation/d/c;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->ay()Z

    move-result p1

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/tkay/expressad/splash/c/d$2;->a:Lcom/tkay/expressad/splash/c/d;

    invoke-static {p1}, Lcom/tkay/expressad/splash/c/d;->d(Lcom/tkay/expressad/splash/c/d;)Lcom/tkay/expressad/splash/view/TYSplashView;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 182
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/d$2;->a:Lcom/tkay/expressad/splash/c/d;

    invoke-static {p1}, Lcom/tkay/expressad/splash/c/d;->d(Lcom/tkay/expressad/splash/c/d;)Lcom/tkay/expressad/splash/view/TYSplashView;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/splash/view/TYSplashView;->getSplashWebview()Lcom/tkay/expressad/splash/view/TYSplashWebview;

    :cond_1
    :goto_0
    return-void

    .line 163
    :cond_2
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/d$2;->a:Lcom/tkay/expressad/splash/c/d;

    invoke-static {p1}, Lcom/tkay/expressad/splash/c/d;->c(Lcom/tkay/expressad/splash/c/d;)Z

    move-result p1

    if-eqz p1, :cond_3

    return-void

    .line 166
    :cond_3
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/d$2;->a:Lcom/tkay/expressad/splash/c/d;

    invoke-static {p1}, Lcom/tkay/expressad/splash/c/d;->d(Lcom/tkay/expressad/splash/c/d;)Lcom/tkay/expressad/splash/view/TYSplashView;

    move-result-object p1

    iget-object v1, p0, Lcom/tkay/expressad/splash/c/d$2;->a:Lcom/tkay/expressad/splash/c/d;

    invoke-static {v1}, Lcom/tkay/expressad/splash/c/d;->e(Lcom/tkay/expressad/splash/c/d;)Lcom/tkay/core/common/l/a/f$b;

    move-result-object v1

    invoke-static {p1, v1}, Lcom/tkay/core/common/l/u;->a(Landroid/view/View;Lcom/tkay/core/common/l/a/f$b;)Z

    move-result p1

    const-wide/16 v1, 0x3e8

    if-eqz p1, :cond_5

    .line 167
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/d$2;->a:Lcom/tkay/expressad/splash/c/d;

    invoke-static {p1}, Lcom/tkay/expressad/splash/c/d;->f(Lcom/tkay/expressad/splash/c/d;)I

    move-result p1

    if-lez p1, :cond_4

    .line 168
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/d$2;->a:Lcom/tkay/expressad/splash/c/d;

    invoke-static {p1}, Lcom/tkay/expressad/splash/c/d;->g(Lcom/tkay/expressad/splash/c/d;)I

    .line 169
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/d$2;->a:Lcom/tkay/expressad/splash/c/d;

    invoke-static {p1}, Lcom/tkay/expressad/splash/c/d;->f(Lcom/tkay/expressad/splash/c/d;)I

    move-result v3

    invoke-static {p1, v3}, Lcom/tkay/expressad/splash/c/d;->a(Lcom/tkay/expressad/splash/c/d;I)V

    .line 170
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/d$2;->a:Lcom/tkay/expressad/splash/c/d;

    iget-object p1, p1, Lcom/tkay/expressad/splash/c/d;->a:Landroid/os/Handler;

    invoke-virtual {p1, v0}, Landroid/os/Handler;->removeMessages(I)V

    .line 171
    invoke-virtual {p0, v0, v1, v2}, Lcom/tkay/expressad/splash/c/d$2;->sendEmptyMessageDelayed(IJ)Z

    return-void

    .line 173
    :cond_4
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/d$2;->a:Lcom/tkay/expressad/splash/c/d;

    invoke-static {p1}, Lcom/tkay/expressad/splash/c/d;->b(Lcom/tkay/expressad/splash/c/d;)V

    return-void

    .line 177
    :cond_5
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/d$2;->a:Lcom/tkay/expressad/splash/c/d;

    iget-object p1, p1, Lcom/tkay/expressad/splash/c/d;->a:Landroid/os/Handler;

    invoke-virtual {p1, v0}, Landroid/os/Handler;->removeMessages(I)V

    .line 178
    invoke-virtual {p0, v0, v1, v2}, Lcom/tkay/expressad/splash/c/d$2;->sendEmptyMessageDelayed(IJ)Z

    return-void
.end method
