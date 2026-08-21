.class final Lcom/mbridge/msdk/video/module/a/a/d$1;
.super Ljava/lang/Object;
.source "DefaultImageLoaderListener.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/video/module/a/a/d;->onFailedLoad(Ljava/lang/String;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Lcom/mbridge/msdk/video/module/a/a/d;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/video/module/a/a/d;Ljava/lang/String;)V
    .locals 0

    .line 60
    iput-object p1, p0, Lcom/mbridge/msdk/video/module/a/a/d$1;->b:Lcom/mbridge/msdk/video/module/a/a/d;

    iput-object p2, p0, Lcom/mbridge/msdk/video/module/a/a/d$1;->a:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 63
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/t;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/t;

    move-result-object v0

    .line 64
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/d$1;->b:Lcom/mbridge/msdk/video/module/a/a/d;

    invoke-static {v1}, Lcom/mbridge/msdk/video/module/a/a/d;->a(Lcom/mbridge/msdk/video/module/a/a/d;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v1

    if-nez v1, :cond_0

    const-string v0, "ImageLoaderListener"

    const-string v1, "campaign is null"

    .line 65
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 69
    :cond_0
    new-instance v1, Lcom/mbridge/msdk/foundation/entity/p;

    invoke-direct {v1}, Lcom/mbridge/msdk/foundation/entity/p;-><init>()V

    const-string v2, "2000044"

    .line 70
    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/entity/p;->o(Ljava/lang/String;)V

    .line 71
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/v;->D(Landroid/content/Context;)I

    move-result v2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/entity/p;->c(I)V

    .line 72
    iget-object v2, p0, Lcom/mbridge/msdk/video/module/a/a/d$1;->b:Lcom/mbridge/msdk/video/module/a/a/d;

    invoke-static {v2}, Lcom/mbridge/msdk/video/module/a/a/d;->a(Lcom/mbridge/msdk/video/module/a/a/d;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/entity/p;->n(Ljava/lang/String;)V

    .line 73
    iget-object v2, p0, Lcom/mbridge/msdk/video/module/a/a/d$1;->b:Lcom/mbridge/msdk/video/module/a/a/d;

    invoke-static {v2}, Lcom/mbridge/msdk/video/module/a/a/d;->a(Lcom/mbridge/msdk/video/module/a/a/d;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImageUrl()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/entity/p;->d(Ljava/lang/String;)V

    .line 74
    iget-object v2, p0, Lcom/mbridge/msdk/video/module/a/a/d$1;->b:Lcom/mbridge/msdk/video/module/a/a/d;

    invoke-static {v2}, Lcom/mbridge/msdk/video/module/a/a/d;->a(Lcom/mbridge/msdk/video/module/a/a/d;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/entity/p;->k(Ljava/lang/String;)V

    .line 75
    iget-object v2, p0, Lcom/mbridge/msdk/video/module/a/a/d$1;->b:Lcom/mbridge/msdk/video/module/a/a/d;

    invoke-static {v2}, Lcom/mbridge/msdk/video/module/a/a/d;->a(Lcom/mbridge/msdk/video/module/a/a/d;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/entity/p;->l(Ljava/lang/String;)V

    .line 76
    iget-object v2, p0, Lcom/mbridge/msdk/video/module/a/a/d$1;->b:Lcom/mbridge/msdk/video/module/a/a/d;

    invoke-static {v2}, Lcom/mbridge/msdk/video/module/a/a/d;->b(Lcom/mbridge/msdk/video/module/a/a/d;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/entity/p;->m(Ljava/lang/String;)V

    .line 77
    iget-object v2, p0, Lcom/mbridge/msdk/video/module/a/a/d$1;->a:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/entity/p;->p(Ljava/lang/String;)V

    .line 78
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/db/t;->a(Lcom/mbridge/msdk/foundation/entity/p;)J
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 80
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method
