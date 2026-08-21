.class final Lcom/mbridge/msdk/splash/js/c$1;
.super Ljava/lang/Object;
.source "SplashJsUtils.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/splash/js/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 0

    .line 223
    iput-object p1, p0, Lcom/mbridge/msdk/splash/js/c$1;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    .line 227
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/l;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/l;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 229
    iget-object v1, p0, Lcom/mbridge/msdk/splash/js/c$1;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/db/l;->a(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 230
    new-instance v1, Lcom/mbridge/msdk/foundation/entity/h;

    invoke-direct {v1}, Lcom/mbridge/msdk/foundation/entity/h;-><init>()V

    .line 231
    iget-object v2, p0, Lcom/mbridge/msdk/splash/js/c$1;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/entity/h;->a(Ljava/lang/String;)V

    .line 232
    iget-object v2, p0, Lcom/mbridge/msdk/splash/js/c$1;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getFca()I

    move-result v2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/entity/h;->a(I)V

    .line 233
    iget-object v2, p0, Lcom/mbridge/msdk/splash/js/c$1;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getFcb()I

    move-result v2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/entity/h;->b(I)V

    const/4 v2, 0x0

    .line 234
    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/entity/h;->d(I)V

    const/4 v2, 0x1

    .line 235
    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/entity/h;->c(I)V

    .line 236
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Lcom/mbridge/msdk/foundation/entity/h;->a(J)V

    .line 237
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/db/l;->a(Lcom/mbridge/msdk/foundation/entity/h;)V

    goto :goto_0

    .line 239
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/splash/js/c$1;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/db/l;->b(Ljava/lang/String;)V

    .line 242
    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/mbridge/msdk/splash/js/c$1;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCampaignUnitId()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/splash/js/c$1;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {v0, v1}, Lcom/mbridge/msdk/splash/js/c;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v0

    .line 244
    invoke-static {}, Lcom/mbridge/msdk/splash/js/c;->a()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_1
    return-void
.end method
