.class final Lcom/mbridge/msdk/splash/c/c$1;
.super Landroid/os/Handler;
.source "SplashLoadManager.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/splash/c/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/splash/c/c;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/splash/c/c;Landroid/os/Looper;)V
    .locals 0

    .line 89
    iput-object p1, p0, Lcom/mbridge/msdk/splash/c/c$1;->a:Lcom/mbridge/msdk/splash/c/c;

    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public final handleMessage(Landroid/os/Message;)V
    .locals 3

    .line 92
    invoke-super {p0, p1}, Landroid/os/Handler;->handleMessage(Landroid/os/Message;)V

    .line 93
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x1

    if-eq v0, v1, :cond_2

    const/4 v1, 0x2

    if-eq v0, v1, :cond_1

    const/4 v1, 0x3

    if-eq v0, v1, :cond_0

    goto :goto_0

    .line 110
    :cond_0
    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 111
    instance-of v0, p1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_3

    .line 112
    check-cast p1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 113
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c$1;->a:Lcom/mbridge/msdk/splash/c/c;

    invoke-static {v0}, Lcom/mbridge/msdk/splash/c/c;->b(Lcom/mbridge/msdk/splash/c/c;)I

    move-result v1

    invoke-static {v0, p1, v1}, Lcom/mbridge/msdk/splash/c/c;->a(Lcom/mbridge/msdk/splash/c/c;Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    goto :goto_0

    .line 104
    :cond_1
    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 105
    instance-of v0, p1, Ljava/lang/String;

    if-eqz v0, :cond_3

    .line 106
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c$1;->a:Lcom/mbridge/msdk/splash/c/c;

    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    iget-object v1, p0, Lcom/mbridge/msdk/splash/c/c$1;->a:Lcom/mbridge/msdk/splash/c/c;

    invoke-static {v1}, Lcom/mbridge/msdk/splash/c/c;->a(Lcom/mbridge/msdk/splash/c/c;)Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/splash/c/c$1;->a:Lcom/mbridge/msdk/splash/c/c;

    invoke-static {v2}, Lcom/mbridge/msdk/splash/c/c;->b(Lcom/mbridge/msdk/splash/c/c;)I

    move-result v2

    invoke-static {v0, p1, v1, v2}, Lcom/mbridge/msdk/splash/c/c;->a(Lcom/mbridge/msdk/splash/c/c;Ljava/lang/String;Ljava/lang/String;I)V

    goto :goto_0

    .line 95
    :cond_2
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 96
    iget p1, p1, Landroid/os/Message;->arg1:I

    .line 97
    instance-of v1, v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v1, :cond_3

    .line 98
    check-cast v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 99
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;

    move-result-object v1

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdZip()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->getH5ResAddress(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 100
    iget-object v2, p0, Lcom/mbridge/msdk/splash/c/c$1;->a:Lcom/mbridge/msdk/splash/c/c;

    invoke-static {v2, v1, v0, p1}, Lcom/mbridge/msdk/splash/c/c;->a(Lcom/mbridge/msdk/splash/c/c;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    :cond_3
    :goto_0
    return-void
.end method
