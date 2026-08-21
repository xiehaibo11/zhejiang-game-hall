.class final Lcom/tkay/expressad/splash/c/c$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/splash/view/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/splash/c/c;->d(Lcom/tkay/expressad/foundation/d/c;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/foundation/d/c;

.field final synthetic b:I

.field final synthetic c:Lcom/tkay/expressad/splash/c/c;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/splash/c/c;Lcom/tkay/expressad/foundation/d/c;I)V
    .locals 0

    .line 544
    iput-object p1, p0, Lcom/tkay/expressad/splash/c/c$3;->c:Lcom/tkay/expressad/splash/c/c;

    iput-object p2, p0, Lcom/tkay/expressad/splash/c/c$3;->a:Lcom/tkay/expressad/foundation/d/c;

    iput p3, p0, Lcom/tkay/expressad/splash/c/c$3;->b:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 3

    .line 547
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/c$3;->a:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/splash/c/c$3;->c:Lcom/tkay/expressad/splash/c/c;

    invoke-static {v0}, Lcom/tkay/expressad/splash/c/c;->c(Lcom/tkay/expressad/splash/c/c;)Lcom/tkay/expressad/splash/view/TYSplashView;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 548
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/c$3;->c:Lcom/tkay/expressad/splash/c/c;

    invoke-static {v0}, Lcom/tkay/expressad/splash/c/c;->c(Lcom/tkay/expressad/splash/c/c;)Lcom/tkay/expressad/splash/view/TYSplashView;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/view/TYSplashView;->setImageReady(Z)V

    .line 549
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/c$3;->c:Lcom/tkay/expressad/splash/c/c;

    iget-object v1, p0, Lcom/tkay/expressad/splash/c/c$3;->a:Lcom/tkay/expressad/foundation/d/c;

    iget v2, p0, Lcom/tkay/expressad/splash/c/c$3;->b:I

    invoke-static {v0, v1, v2}, Lcom/tkay/expressad/splash/c/c;->b(Lcom/tkay/expressad/splash/c/c;Lcom/tkay/expressad/foundation/d/c;I)V

    .line 551
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/c$3;->c:Lcom/tkay/expressad/splash/c/c;

    iget-object v1, p0, Lcom/tkay/expressad/splash/c/c$3;->a:Lcom/tkay/expressad/foundation/d/c;

    iget v2, p0, Lcom/tkay/expressad/splash/c/c$3;->b:I

    invoke-static {v0, v1, v2}, Lcom/tkay/expressad/splash/c/c;->a(Lcom/tkay/expressad/splash/c/c;Lcom/tkay/expressad/foundation/d/c;I)V

    return-void
.end method

.method public final b()V
    .locals 2

    .line 556
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/c$3;->a:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/splash/c/c$3;->c:Lcom/tkay/expressad/splash/c/c;

    invoke-static {v0}, Lcom/tkay/expressad/splash/c/c;->c(Lcom/tkay/expressad/splash/c/c;)Lcom/tkay/expressad/splash/view/TYSplashView;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 557
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/c$3;->c:Lcom/tkay/expressad/splash/c/c;

    invoke-static {v0}, Lcom/tkay/expressad/splash/c/c;->c(Lcom/tkay/expressad/splash/c/c;)Lcom/tkay/expressad/splash/view/TYSplashView;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/view/TYSplashView;->setImageReady(Z)V

    .line 558
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/c$3;->c:Lcom/tkay/expressad/splash/c/c;

    invoke-static {v0}, Lcom/tkay/expressad/splash/c/c;->a(Lcom/tkay/expressad/splash/c/c;)Ljava/lang/String;

    const-string v1, "Image resource load faile"

    invoke-static {v0, v1}, Lcom/tkay/expressad/splash/c/c;->a(Lcom/tkay/expressad/splash/c/c;Ljava/lang/String;)V

    :cond_0
    return-void
.end method
