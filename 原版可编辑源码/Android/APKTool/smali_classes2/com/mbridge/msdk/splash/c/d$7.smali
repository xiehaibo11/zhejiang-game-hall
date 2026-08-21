.class final Lcom/mbridge/msdk/splash/c/d$7;
.super Ljava/lang/Object;
.source "SplashShowManager.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/splash/c/d;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZLjava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field final synthetic b:Landroid/content/Context;

.field final synthetic c:Lcom/mbridge/msdk/widget/dialog/a;

.field final synthetic d:Lcom/mbridge/msdk/splash/c/d;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/splash/c/d;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Lcom/mbridge/msdk/widget/dialog/a;)V
    .locals 0

    .line 579
    iput-object p1, p0, Lcom/mbridge/msdk/splash/c/d$7;->d:Lcom/mbridge/msdk/splash/c/d;

    iput-object p2, p0, Lcom/mbridge/msdk/splash/c/d$7;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iput-object p3, p0, Lcom/mbridge/msdk/splash/c/d$7;->b:Landroid/content/Context;

    iput-object p4, p0, Lcom/mbridge/msdk/splash/c/d$7;->c:Lcom/mbridge/msdk/widget/dialog/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 14

    .line 582
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d$7;->d:Lcom/mbridge/msdk/splash/c/d;

    invoke-static {v0}, Lcom/mbridge/msdk/splash/c/d;->l(Lcom/mbridge/msdk/splash/c/d;)Lcom/mbridge/msdk/click/b;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/splash/c/d$7;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/click/b;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 583
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d$7;->b:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    if-eq v0, v1, :cond_0

    .line 584
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a()Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    move-result-object v2

    iget-object v4, p0, Lcom/mbridge/msdk/splash/c/d$7;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v5, p0, Lcom/mbridge/msdk/splash/c/d$7;->b:Landroid/content/Context;

    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d$7;->d:Lcom/mbridge/msdk/splash/c/d;

    invoke-static {v0}, Lcom/mbridge/msdk/splash/c/d;->h(Lcom/mbridge/msdk/splash/c/d;)Ljava/lang/String;

    move-result-object v6

    iget-object v7, p0, Lcom/mbridge/msdk/splash/c/d$7;->c:Lcom/mbridge/msdk/widget/dialog/a;

    const-string v3, ""

    invoke-virtual/range {v2 .. v7}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/widget/dialog/a;)V

    goto :goto_0

    .line 586
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a()Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    move-result-object v8

    iget-object v10, p0, Lcom/mbridge/msdk/splash/c/d$7;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d$7;->d:Lcom/mbridge/msdk/splash/c/d;

    invoke-static {v0}, Lcom/mbridge/msdk/splash/c/d;->m(Lcom/mbridge/msdk/splash/c/d;)Landroid/content/Context;

    move-result-object v11

    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d$7;->d:Lcom/mbridge/msdk/splash/c/d;

    invoke-static {v0}, Lcom/mbridge/msdk/splash/c/d;->h(Lcom/mbridge/msdk/splash/c/d;)Ljava/lang/String;

    move-result-object v12

    iget-object v13, p0, Lcom/mbridge/msdk/splash/c/d$7;->c:Lcom/mbridge/msdk/widget/dialog/a;

    const-string v9, ""

    invoke-virtual/range {v8 .. v13}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/widget/dialog/a;)V

    goto :goto_0

    .line 589
    :cond_1
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/splash/c/d$7;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {v0, v1}, Lcom/mbridge/msdk/splash/e/a;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 590
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d$7;->d:Lcom/mbridge/msdk/splash/c/d;

    invoke-static {v0}, Lcom/mbridge/msdk/splash/c/d;->j(Lcom/mbridge/msdk/splash/c/d;)Lcom/mbridge/msdk/splash/d/d;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 591
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d$7;->d:Lcom/mbridge/msdk/splash/c/d;

    invoke-static {v0}, Lcom/mbridge/msdk/splash/c/d;->j(Lcom/mbridge/msdk/splash/c/d;)Lcom/mbridge/msdk/splash/d/d;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/splash/c/d$7;->d:Lcom/mbridge/msdk/splash/c/d;

    invoke-static {v1}, Lcom/mbridge/msdk/splash/c/d;->k(Lcom/mbridge/msdk/splash/c/d;)Lcom/mbridge/msdk/out/MBridgeIds;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/splash/d/d;->b(Lcom/mbridge/msdk/out/MBridgeIds;)V

    .line 593
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d$7;->d:Lcom/mbridge/msdk/splash/c/d;

    const/4 v1, 0x3

    invoke-static {v0, v1}, Lcom/mbridge/msdk/splash/c/d;->a(Lcom/mbridge/msdk/splash/c/d;I)V

    :cond_2
    :goto_0
    return-void
.end method
