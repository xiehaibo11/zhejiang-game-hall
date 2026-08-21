.class final Lcom/tkay/expressad/splash/view/TYSplashNativeView$9;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/splash/view/TYSplashNativeView;->h()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/splash/view/TYSplashNativeView;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)V
    .locals 0

    .line 407
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView$9;->a:Lcom/tkay/expressad/splash/view/TYSplashNativeView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 1

    .line 415
    iget-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView$9;->a:Lcom/tkay/expressad/splash/view/TYSplashNativeView;

    invoke-static {p1}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->f(Lcom/tkay/expressad/splash/view/TYSplashNativeView;)Lcom/tkay/expressad/foundation/d/c;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->aG()Lcom/tkay/expressad/foundation/d/a;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 417
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/a;->a()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/tkay/core/common/l/l;->a(Landroid/content/Context;Ljava/lang/String;)V

    :cond_0
    return-void
.end method
