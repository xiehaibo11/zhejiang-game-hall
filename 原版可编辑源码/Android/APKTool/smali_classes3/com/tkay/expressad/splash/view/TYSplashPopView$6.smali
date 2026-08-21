.class final Lcom/tkay/expressad/splash/view/TYSplashPopView$6;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/splash/view/TYSplashPopView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/splash/view/TYSplashPopView;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/splash/view/TYSplashPopView;)V
    .locals 0

    .line 585
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView$6;->a:Lcom/tkay/expressad/splash/view/TYSplashPopView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 0

    .line 588
    iget-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView$6;->a:Lcom/tkay/expressad/splash/view/TYSplashPopView;

    invoke-static {p1}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->d(Lcom/tkay/expressad/splash/view/TYSplashPopView;)I

    move-result p1

    if-lez p1, :cond_0

    return-void

    .line 591
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView$6;->a:Lcom/tkay/expressad/splash/view/TYSplashPopView;

    invoke-static {p1}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->i(Lcom/tkay/expressad/splash/view/TYSplashPopView;)Lcom/tkay/expressad/splash/d/d;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 592
    iget-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView$6;->a:Lcom/tkay/expressad/splash/view/TYSplashPopView;

    invoke-static {p1}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->i(Lcom/tkay/expressad/splash/view/TYSplashPopView;)Lcom/tkay/expressad/splash/d/d;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/splash/d/d;->b()V

    :cond_1
    return-void
.end method
