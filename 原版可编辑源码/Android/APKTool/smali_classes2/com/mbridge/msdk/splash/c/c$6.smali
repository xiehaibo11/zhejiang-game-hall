.class final Lcom/mbridge/msdk/splash/c/c$6;
.super Ljava/lang/Object;
.source "SplashLoadManager.java"

# interfaces
.implements Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$ZipDownloadListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/splash/c/c;->f(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field final synthetic b:I

.field final synthetic c:Lcom/mbridge/msdk/splash/c/c;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/splash/c/c;Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V
    .locals 0

    .line 611
    iput-object p1, p0, Lcom/mbridge/msdk/splash/c/c$6;->c:Lcom/mbridge/msdk/splash/c/c;

    iput-object p2, p0, Lcom/mbridge/msdk/splash/c/c$6;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iput p3, p0, Lcom/mbridge/msdk/splash/c/c$6;->b:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFailed(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 623
    iget-object p2, p0, Lcom/mbridge/msdk/splash/c/c$6;->c:Lcom/mbridge/msdk/splash/c/c;

    invoke-static {p2}, Lcom/mbridge/msdk/splash/c/c;->a(Lcom/mbridge/msdk/splash/c/c;)Ljava/lang/String;

    move-result-object v0

    iget v1, p0, Lcom/mbridge/msdk/splash/c/c$6;->b:I

    invoke-static {p2, p1, v0, v1}, Lcom/mbridge/msdk/splash/c/c;->a(Lcom/mbridge/msdk/splash/c/c;Ljava/lang/String;Ljava/lang/String;I)V

    .line 624
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object p2

    const/4 v0, 0x2

    .line 625
    iput v0, p2, Landroid/os/Message;->what:I

    .line 626
    iput-object p1, p2, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 627
    iget-object p1, p0, Lcom/mbridge/msdk/splash/c/c$6;->c:Lcom/mbridge/msdk/splash/c/c;

    invoke-static {p1}, Lcom/mbridge/msdk/splash/c/c;->g(Lcom/mbridge/msdk/splash/c/c;)Landroid/os/Handler;

    move-result-object p1

    invoke-virtual {p1, p2}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method

.method public final onSuccess(Ljava/lang/String;)V
    .locals 1

    .line 614
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object p1

    const/4 v0, 0x1

    .line 615
    iput v0, p1, Landroid/os/Message;->what:I

    .line 616
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c$6;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iput-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 617
    iget v0, p0, Lcom/mbridge/msdk/splash/c/c$6;->b:I

    iput v0, p1, Landroid/os/Message;->arg1:I

    .line 618
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c$6;->c:Lcom/mbridge/msdk/splash/c/c;

    invoke-static {v0}, Lcom/mbridge/msdk/splash/c/c;->g(Lcom/mbridge/msdk/splash/c/c;)Landroid/os/Handler;

    move-result-object v0

    invoke-virtual {v0, p1}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method
