.class final Lcom/tkay/expressad/splash/c/c$8;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/videocommon/d/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/splash/c/c;->i(Lcom/tkay/expressad/foundation/d/c;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/foundation/d/c;

.field final synthetic b:Lcom/tkay/expressad/splash/c/c;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/splash/c/c;Lcom/tkay/expressad/foundation/d/c;)V
    .locals 0

    .line 773
    iput-object p1, p0, Lcom/tkay/expressad/splash/c/c$8;->b:Lcom/tkay/expressad/splash/c/c;

    iput-object p2, p0, Lcom/tkay/expressad/splash/c/c$8;->a:Lcom/tkay/expressad/foundation/d/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;)V
    .locals 1

    .line 776
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/c$8;->b:Lcom/tkay/expressad/splash/c/c;

    invoke-static {p1}, Lcom/tkay/expressad/splash/c/c;->c(Lcom/tkay/expressad/splash/c/c;)Lcom/tkay/expressad/splash/view/TYSplashView;

    move-result-object p1

    const/4 v0, 0x1

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->setVideoReady(Z)V

    .line 777
    invoke-static {}, Lcom/tkay/expressad/splash/c/c;->d()Ljava/lang/String;

    .line 778
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object p1

    .line 779
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/c$8;->a:Lcom/tkay/expressad/foundation/d/c;

    iput-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    const/4 v0, 0x3

    .line 780
    iput v0, p1, Landroid/os/Message;->what:I

    .line 781
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/c$8;->b:Lcom/tkay/expressad/splash/c/c;

    invoke-static {v0}, Lcom/tkay/expressad/splash/c/c;->d(Lcom/tkay/expressad/splash/c/c;)Landroid/os/Handler;

    move-result-object v0

    invoke-virtual {v0, p1}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 786
    iget-object p2, p0, Lcom/tkay/expressad/splash/c/c$8;->b:Lcom/tkay/expressad/splash/c/c;

    invoke-static {p2}, Lcom/tkay/expressad/splash/c/c;->c(Lcom/tkay/expressad/splash/c/c;)Lcom/tkay/expressad/splash/view/TYSplashView;

    move-result-object p2

    const/4 v0, 0x0

    invoke-virtual {p2, v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->setVideoReady(Z)V

    .line 787
    invoke-static {}, Lcom/tkay/expressad/splash/c/c;->d()Ljava/lang/String;

    .line 788
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object p2

    .line 789
    iput-object p1, p2, Landroid/os/Message;->obj:Ljava/lang/Object;

    const/4 p1, 0x2

    .line 790
    iput p1, p2, Landroid/os/Message;->what:I

    .line 791
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/c$8;->b:Lcom/tkay/expressad/splash/c/c;

    invoke-static {p1}, Lcom/tkay/expressad/splash/c/c;->d(Lcom/tkay/expressad/splash/c/c;)Landroid/os/Handler;

    move-result-object p1

    invoke-virtual {p1, p2}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method
