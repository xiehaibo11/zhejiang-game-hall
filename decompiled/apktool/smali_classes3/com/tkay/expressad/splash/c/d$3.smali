.class final Lcom/tkay/expressad/splash/c/d$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/splash/d/a;


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
.method constructor <init>(Lcom/tkay/expressad/splash/c/d;)V
    .locals 0

    .line 202
    iput-object p1, p0, Lcom/tkay/expressad/splash/c/d$3;->a:Lcom/tkay/expressad/splash/c/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 1

    .line 212
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d$3;->a:Lcom/tkay/expressad/splash/c/d;

    invoke-static {v0}, Lcom/tkay/expressad/splash/c/d;->b(Lcom/tkay/expressad/splash/c/d;)V

    return-void
.end method

.method public final a(I)V
    .locals 1

    .line 205
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d$3;->a:Lcom/tkay/expressad/splash/c/d;

    invoke-static {v0}, Lcom/tkay/expressad/splash/c/d;->d(Lcom/tkay/expressad/splash/c/d;)Lcom/tkay/expressad/splash/view/TYSplashView;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 206
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d$3;->a:Lcom/tkay/expressad/splash/c/d;

    invoke-static {v0}, Lcom/tkay/expressad/splash/c/d;->d(Lcom/tkay/expressad/splash/c/d;)Lcom/tkay/expressad/splash/view/TYSplashView;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/splash/view/TYSplashView;->changeCloseBtnState(I)V

    :cond_0
    return-void
.end method

.method public final a(II)V
    .locals 3

    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    .line 237
    iget-object v1, p0, Lcom/tkay/expressad/splash/c/d$3;->a:Lcom/tkay/expressad/splash/c/d;

    iget-object v1, v1, Lcom/tkay/expressad/splash/c/d;->a:Landroid/os/Handler;

    invoke-virtual {v1, v0}, Landroid/os/Handler;->removeMessages(I)V

    :cond_0
    const/4 v1, 0x2

    if-ne p1, v1, :cond_1

    .line 242
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/d$3;->a:Lcom/tkay/expressad/splash/c/d;

    invoke-static {p1, p2}, Lcom/tkay/expressad/splash/c/d;->b(Lcom/tkay/expressad/splash/c/d;I)I

    .line 243
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/d$3;->a:Lcom/tkay/expressad/splash/c/d;

    iget-object p1, p1, Lcom/tkay/expressad/splash/c/d;->a:Landroid/os/Handler;

    invoke-virtual {p1, v0}, Landroid/os/Handler;->removeMessages(I)V

    .line 244
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/d$3;->a:Lcom/tkay/expressad/splash/c/d;

    iget-object p1, p1, Lcom/tkay/expressad/splash/c/d;->a:Landroid/os/Handler;

    const-wide/16 v1, 0x3e8

    invoke-virtual {p1, v0, v1, v2}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    :cond_1
    return-void
.end method

.method public final a(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 1

    .line 222
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d$3;->a:Lcom/tkay/expressad/splash/c/d;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/splash/c/d;->a(Lcom/tkay/expressad/foundation/d/c;)V

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 1

    .line 250
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d$3;->a:Lcom/tkay/expressad/splash/c/d;

    invoke-static {v0, p1}, Lcom/tkay/expressad/splash/c/d;->a(Lcom/tkay/expressad/splash/c/d;Ljava/lang/String;)V

    return-void
.end method

.method public final a(Z)V
    .locals 1

    if-eqz p1, :cond_0

    .line 262
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/d$3;->a:Lcom/tkay/expressad/splash/c/d;

    iget-object p1, p1, Lcom/tkay/expressad/splash/c/d;->a:Landroid/os/Handler;

    const/4 v0, 0x1

    invoke-virtual {p1, v0}, Landroid/os/Handler;->removeMessages(I)V

    :cond_0
    return-void
.end method

.method public final b()V
    .locals 0

    return-void
.end method

.method public final b(I)V
    .locals 3

    .line 227
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d$3;->a:Lcom/tkay/expressad/splash/c/d;

    invoke-static {v0}, Lcom/tkay/expressad/splash/c/d;->i(Lcom/tkay/expressad/splash/c/d;)Ljava/lang/String;

    .line 228
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d$3;->a:Lcom/tkay/expressad/splash/c/d;

    invoke-static {v0, p1}, Lcom/tkay/expressad/splash/c/d;->b(Lcom/tkay/expressad/splash/c/d;I)I

    .line 229
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/d$3;->a:Lcom/tkay/expressad/splash/c/d;

    iget-object p1, p1, Lcom/tkay/expressad/splash/c/d;->a:Landroid/os/Handler;

    const/4 v0, 0x1

    invoke-virtual {p1, v0}, Landroid/os/Handler;->removeMessages(I)V

    .line 230
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/d$3;->a:Lcom/tkay/expressad/splash/c/d;

    iget-object p1, p1, Lcom/tkay/expressad/splash/c/d;->a:Landroid/os/Handler;

    const-wide/16 v1, 0x3e8

    invoke-virtual {p1, v0, v1, v2}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    return-void
.end method

.method public final b(Ljava/lang/String;)V
    .locals 1

    .line 269
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d$3;->a:Lcom/tkay/expressad/splash/c/d;

    invoke-static {v0}, Lcom/tkay/expressad/splash/c/d;->j(Lcom/tkay/expressad/splash/c/d;)Lcom/tkay/expressad/splash/d/d;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 271
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 273
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/d$3;->a:Lcom/tkay/expressad/splash/c/d;

    invoke-static {p1}, Lcom/tkay/expressad/splash/c/d;->j(Lcom/tkay/expressad/splash/c/d;)Lcom/tkay/expressad/splash/d/d;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d$3;->a:Lcom/tkay/expressad/splash/c/d;

    invoke-static {v0}, Lcom/tkay/expressad/splash/c/d;->h(Lcom/tkay/expressad/splash/c/d;)Lcom/tkay/expressad/foundation/d/c;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/splash/d/d;->a(Lcom/tkay/expressad/foundation/d/c;)V

    return-void

    .line 276
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d$3;->a:Lcom/tkay/expressad/splash/c/d;

    .line 277
    invoke-static {v0}, Lcom/tkay/expressad/splash/c/d;->h(Lcom/tkay/expressad/splash/c/d;)Lcom/tkay/expressad/foundation/d/c;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/d/c;->a(Lcom/tkay/expressad/foundation/d/c;)Lorg/json/JSONObject;

    move-result-object v0

    .line 276
    invoke-static {v0}, Lcom/tkay/expressad/foundation/d/c;->b(Lorg/json/JSONObject;)Lcom/tkay/expressad/foundation/d/c;

    move-result-object v0

    .line 278
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/foundation/d/c;->p(Ljava/lang/String;)V

    .line 279
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/d$3;->a:Lcom/tkay/expressad/splash/c/d;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/splash/c/d;->a(Lcom/tkay/expressad/foundation/d/c;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_1
    return-void

    :catch_0
    move-exception p1

    .line 283
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d$3;->a:Lcom/tkay/expressad/splash/c/d;

    invoke-static {v0}, Lcom/tkay/expressad/splash/c/d;->i(Lcom/tkay/expressad/splash/c/d;)Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public final c()V
    .locals 1

    .line 255
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d$3;->a:Lcom/tkay/expressad/splash/c/d;

    invoke-static {v0}, Lcom/tkay/expressad/splash/c/d;->b(Lcom/tkay/expressad/splash/c/d;)V

    return-void
.end method
