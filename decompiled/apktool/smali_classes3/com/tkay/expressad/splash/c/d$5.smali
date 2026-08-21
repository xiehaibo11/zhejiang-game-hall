.class final Lcom/tkay/expressad/splash/c/d$5;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/splash/c/d;->a(Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/splash/view/TYSplashView;)V
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

    .line 361
    iput-object p1, p0, Lcom/tkay/expressad/splash/c/d$5;->a:Lcom/tkay/expressad/splash/c/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 364
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d$5;->a:Lcom/tkay/expressad/splash/c/d;

    invoke-static {v0}, Lcom/tkay/expressad/splash/c/d;->d(Lcom/tkay/expressad/splash/c/d;)Lcom/tkay/expressad/splash/view/TYSplashView;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/tkay/expressad/splash/c/d;->a(Lcom/tkay/expressad/splash/c/d;Landroid/view/View;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 365
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/d$5;->a:Lcom/tkay/expressad/splash/c/d;

    invoke-static {v0}, Lcom/tkay/expressad/splash/c/d;->k(Lcom/tkay/expressad/splash/c/d;)V

    :cond_0
    return-void
.end method
