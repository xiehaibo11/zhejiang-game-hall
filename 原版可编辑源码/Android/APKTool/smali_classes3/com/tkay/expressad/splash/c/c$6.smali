.class final Lcom/tkay/expressad/splash/c/c$6;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/splash/b/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/splash/c/c;->g(Lcom/tkay/expressad/foundation/d/c;I)V
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

    .line 704
    iput-object p1, p0, Lcom/tkay/expressad/splash/c/c$6;->c:Lcom/tkay/expressad/splash/c/c;

    iput-object p2, p0, Lcom/tkay/expressad/splash/c/c$6;->a:Lcom/tkay/expressad/foundation/d/c;

    iput p3, p0, Lcom/tkay/expressad/splash/c/c$6;->b:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Landroid/view/View;)V
    .locals 2

    .line 707
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/c$6;->c:Lcom/tkay/expressad/splash/c/c;

    invoke-static {v0}, Lcom/tkay/expressad/splash/c/c;->c(Lcom/tkay/expressad/splash/c/c;)Lcom/tkay/expressad/splash/view/TYSplashView;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 708
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/c$6;->c:Lcom/tkay/expressad/splash/c/c;

    invoke-static {v0}, Lcom/tkay/expressad/splash/c/c;->c(Lcom/tkay/expressad/splash/c/c;)Lcom/tkay/expressad/splash/view/TYSplashView;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/view/TYSplashView;->setDynamicView(Z)V

    .line 709
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/c$6;->c:Lcom/tkay/expressad/splash/c/c;

    invoke-static {v0}, Lcom/tkay/expressad/splash/c/c;->c(Lcom/tkay/expressad/splash/c/c;)Lcom/tkay/expressad/splash/view/TYSplashView;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/splash/view/TYSplashView;->setSplashNativeView(Landroid/view/View;)V

    .line 711
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/c$6;->c:Lcom/tkay/expressad/splash/c/c;

    iget-object v0, p0, Lcom/tkay/expressad/splash/c/c$6;->a:Lcom/tkay/expressad/foundation/d/c;

    iget v1, p0, Lcom/tkay/expressad/splash/c/c$6;->b:I

    invoke-static {p1, v0, v1}, Lcom/tkay/expressad/splash/c/c;->a(Lcom/tkay/expressad/splash/c/c;Lcom/tkay/expressad/foundation/d/c;I)V

    :cond_0
    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 1

    .line 717
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/c$6;->c:Lcom/tkay/expressad/splash/c/c;

    invoke-static {v0}, Lcom/tkay/expressad/splash/c/c;->a(Lcom/tkay/expressad/splash/c/c;)Ljava/lang/String;

    invoke-static {v0, p1}, Lcom/tkay/expressad/splash/c/c;->a(Lcom/tkay/expressad/splash/c/c;Ljava/lang/String;)V

    return-void
.end method
