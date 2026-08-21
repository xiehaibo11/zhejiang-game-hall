.class final Lcom/mbridge/msdk/splash/c/c$9;
.super Ljava/lang/Object;
.source "SplashLoadManager.java"

# interfaces
.implements Lcom/mbridge/msdk/videocommon/listener/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/splash/c/c;->g(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field final synthetic b:Lcom/mbridge/msdk/splash/c/c;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/splash/c/c;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 0

    .line 752
    iput-object p1, p0, Lcom/mbridge/msdk/splash/c/c$9;->b:Lcom/mbridge/msdk/splash/c/c;

    iput-object p2, p0, Lcom/mbridge/msdk/splash/c/c$9;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;)V
    .locals 1

    .line 755
    iget-object p1, p0, Lcom/mbridge/msdk/splash/c/c$9;->b:Lcom/mbridge/msdk/splash/c/c;

    invoke-static {p1}, Lcom/mbridge/msdk/splash/c/c;->f(Lcom/mbridge/msdk/splash/c/c;)Lcom/mbridge/msdk/splash/view/MBSplashView;

    move-result-object p1

    const/4 v0, 0x1

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/splash/view/MBSplashView;->setVideoReady(Z)V

    .line 756
    invoke-static {}, Lcom/mbridge/msdk/splash/c/c;->c()Ljava/lang/String;

    move-result-object p1

    const-string v0, "========VIDEO SUC"

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 757
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object p1

    .line 758
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c$9;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iput-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    const/4 v0, 0x3

    .line 759
    iput v0, p1, Landroid/os/Message;->what:I

    .line 760
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c$9;->b:Lcom/mbridge/msdk/splash/c/c;

    invoke-static {v0}, Lcom/mbridge/msdk/splash/c/c;->g(Lcom/mbridge/msdk/splash/c/c;)Landroid/os/Handler;

    move-result-object v0

    invoke-virtual {v0, p1}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 765
    iget-object p2, p0, Lcom/mbridge/msdk/splash/c/c$9;->b:Lcom/mbridge/msdk/splash/c/c;

    invoke-static {p2}, Lcom/mbridge/msdk/splash/c/c;->f(Lcom/mbridge/msdk/splash/c/c;)Lcom/mbridge/msdk/splash/view/MBSplashView;

    move-result-object p2

    const/4 v0, 0x0

    invoke-virtual {p2, v0}, Lcom/mbridge/msdk/splash/view/MBSplashView;->setVideoReady(Z)V

    .line 766
    invoke-static {}, Lcom/mbridge/msdk/splash/c/c;->c()Ljava/lang/String;

    move-result-object p2

    const-string v0, "========VIDEO FAI"

    invoke-static {p2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 767
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object p2

    .line 768
    iput-object p1, p2, Landroid/os/Message;->obj:Ljava/lang/Object;

    const/4 p1, 0x2

    .line 769
    iput p1, p2, Landroid/os/Message;->what:I

    .line 770
    iget-object p1, p0, Lcom/mbridge/msdk/splash/c/c$9;->b:Lcom/mbridge/msdk/splash/c/c;

    invoke-static {p1}, Lcom/mbridge/msdk/splash/c/c;->g(Lcom/mbridge/msdk/splash/c/c;)Landroid/os/Handler;

    move-result-object p1

    invoke-virtual {p1, p2}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method
