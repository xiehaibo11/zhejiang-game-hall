.class final Lcom/tkay/expressad/splash/c/d$4$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/splash/c/d$4;->onViewAttachedToWindow(Landroid/view/View;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/splash/c/d$4;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/splash/c/d$4;)V
    .locals 0

    .line 345
    iput-object p1, p0, Lcom/tkay/expressad/splash/c/d$4$1;->a:Lcom/tkay/expressad/splash/c/d$4;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 348
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d$4$1;->a:Lcom/tkay/expressad/splash/c/d$4;

    iget-object v0, v0, Lcom/tkay/expressad/splash/c/d$4;->a:Lcom/tkay/expressad/splash/c/d;

    iget-object v1, p0, Lcom/tkay/expressad/splash/c/d$4$1;->a:Lcom/tkay/expressad/splash/c/d$4;

    iget-object v1, v1, Lcom/tkay/expressad/splash/c/d$4;->a:Lcom/tkay/expressad/splash/c/d;

    invoke-static {v1}, Lcom/tkay/expressad/splash/c/d;->d(Lcom/tkay/expressad/splash/c/d;)Lcom/tkay/expressad/splash/view/TYSplashView;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/tkay/expressad/splash/c/d;->a(Lcom/tkay/expressad/splash/c/d;Landroid/view/View;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 349
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d$4$1;->a:Lcom/tkay/expressad/splash/c/d$4;

    iget-object v0, v0, Lcom/tkay/expressad/splash/c/d$4;->a:Lcom/tkay/expressad/splash/c/d;

    invoke-static {v0}, Lcom/tkay/expressad/splash/c/d;->k(Lcom/tkay/expressad/splash/c/d;)V

    :cond_0
    return-void
.end method
