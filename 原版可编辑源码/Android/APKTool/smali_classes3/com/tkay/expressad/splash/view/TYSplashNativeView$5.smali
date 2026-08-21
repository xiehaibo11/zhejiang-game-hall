.class final Lcom/tkay/expressad/splash/view/TYSplashNativeView$5;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/splash/view/TYSplashNativeView;->e()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Lcom/tkay/expressad/splash/view/TYSplashNativeView;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/splash/view/TYSplashNativeView;Ljava/lang/String;)V
    .locals 0

    .line 314
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView$5;->b:Lcom/tkay/expressad/splash/view/TYSplashNativeView;

    iput-object p2, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView$5;->a:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 1

    .line 317
    iget-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView$5;->b:Lcom/tkay/expressad/splash/view/TYSplashNativeView;

    invoke-virtual {p1}, Lcom/tkay/expressad/splash/view/TYSplashNativeView;->getContext()Landroid/content/Context;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashNativeView$5;->a:Ljava/lang/String;

    invoke-static {p1, v0}, Lcom/tkay/core/common/l/l;->a(Landroid/content/Context;Ljava/lang/String;)V

    return-void
.end method
