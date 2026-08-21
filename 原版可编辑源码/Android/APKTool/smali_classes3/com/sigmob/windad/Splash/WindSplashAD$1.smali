.class Lcom/sigmob/windad/Splash/WindSplashAD$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/windad/Splash/WindSplashAD;->e()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/windad/Splash/WindSplashAD;


# direct methods
.method constructor <init>(Lcom/sigmob/windad/Splash/WindSplashAD;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/windad/Splash/WindSplashAD$1;->a:Lcom/sigmob/windad/Splash/WindSplashAD;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/windad/Splash/WindSplashAD$1;->a:Lcom/sigmob/windad/Splash/WindSplashAD;

    invoke-static {v0}, Lcom/sigmob/windad/Splash/WindSplashAD;->b(Lcom/sigmob/windad/Splash/WindSplashAD;)Lcom/sigmob/sdk/splash/g;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/windad/Splash/WindSplashAD$1;->a:Lcom/sigmob/windad/Splash/WindSplashAD;

    invoke-static {v1}, Lcom/sigmob/windad/Splash/WindSplashAD;->a(Lcom/sigmob/windad/Splash/WindSplashAD;)Landroid/widget/RelativeLayout;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/splash/g;->a(Landroid/view/ViewGroup;)V

    return-void
.end method
