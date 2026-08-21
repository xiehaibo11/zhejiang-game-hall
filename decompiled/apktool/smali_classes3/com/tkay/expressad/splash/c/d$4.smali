.class final Lcom/tkay/expressad/splash/c/d$4;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnAttachStateChangeListener;


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

    .line 342
    iput-object p1, p0, Lcom/tkay/expressad/splash/c/d$4;->a:Lcom/tkay/expressad/splash/c/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onViewAttachedToWindow(Landroid/view/View;)V
    .locals 3

    .line 345
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    new-instance v0, Lcom/tkay/expressad/splash/c/d$4$1;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/splash/c/d$4$1;-><init>(Lcom/tkay/expressad/splash/c/d$4;)V

    const-wide/16 v1, 0x1e

    invoke-virtual {p1, v0, v1, v2}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;J)V

    return-void
.end method

.method public final onViewDetachedFromWindow(Landroid/view/View;)V
    .locals 0

    return-void
.end method
