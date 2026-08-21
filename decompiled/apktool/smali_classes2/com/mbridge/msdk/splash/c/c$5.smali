.class final Lcom/mbridge/msdk/splash/c/c$5;
.super Ljava/lang/Object;
.source "SplashLoadManager.java"

# interfaces
.implements Lcom/mbridge/msdk/splash/view/nativeview/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/splash/c/c;->d(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V
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

    .line 536
    iput-object p1, p0, Lcom/mbridge/msdk/splash/c/c$5;->c:Lcom/mbridge/msdk/splash/c/c;

    iput-object p2, p0, Lcom/mbridge/msdk/splash/c/c$5;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iput p3, p0, Lcom/mbridge/msdk/splash/c/c$5;->b:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 3

    .line 539
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c$5;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c$5;->c:Lcom/mbridge/msdk/splash/c/c;

    invoke-static {v0}, Lcom/mbridge/msdk/splash/c/c;->f(Lcom/mbridge/msdk/splash/c/c;)Lcom/mbridge/msdk/splash/view/MBSplashView;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 540
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c$5;->c:Lcom/mbridge/msdk/splash/c/c;

    invoke-static {v0}, Lcom/mbridge/msdk/splash/c/c;->f(Lcom/mbridge/msdk/splash/c/c;)Lcom/mbridge/msdk/splash/view/MBSplashView;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/splash/view/MBSplashView;->setImageReady(Z)V

    .line 541
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c$5;->c:Lcom/mbridge/msdk/splash/c/c;

    iget-object v1, p0, Lcom/mbridge/msdk/splash/c/c$5;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget v2, p0, Lcom/mbridge/msdk/splash/c/c$5;->b:I

    invoke-static {v0, v1, v2}, Lcom/mbridge/msdk/splash/c/c;->b(Lcom/mbridge/msdk/splash/c/c;Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    .line 543
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c$5;->c:Lcom/mbridge/msdk/splash/c/c;

    iget-object v1, p0, Lcom/mbridge/msdk/splash/c/c$5;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget v2, p0, Lcom/mbridge/msdk/splash/c/c$5;->b:I

    invoke-static {v0, v1, v2}, Lcom/mbridge/msdk/splash/c/c;->a(Lcom/mbridge/msdk/splash/c/c;Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    return-void
.end method

.method public final b()V
    .locals 4

    .line 548
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c$5;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c$5;->c:Lcom/mbridge/msdk/splash/c/c;

    invoke-static {v0}, Lcom/mbridge/msdk/splash/c/c;->f(Lcom/mbridge/msdk/splash/c/c;)Lcom/mbridge/msdk/splash/view/MBSplashView;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 549
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c$5;->c:Lcom/mbridge/msdk/splash/c/c;

    invoke-static {v0}, Lcom/mbridge/msdk/splash/c/c;->f(Lcom/mbridge/msdk/splash/c/c;)Lcom/mbridge/msdk/splash/view/MBSplashView;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/splash/view/MBSplashView;->setImageReady(Z)V

    .line 550
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c$5;->c:Lcom/mbridge/msdk/splash/c/c;

    invoke-static {v0}, Lcom/mbridge/msdk/splash/c/c;->a(Lcom/mbridge/msdk/splash/c/c;)Ljava/lang/String;

    move-result-object v1

    iget v2, p0, Lcom/mbridge/msdk/splash/c/c$5;->b:I

    const-string v3, "Image resource load faile"

    invoke-static {v0, v3, v1, v2}, Lcom/mbridge/msdk/splash/c/c;->a(Lcom/mbridge/msdk/splash/c/c;Ljava/lang/String;Ljava/lang/String;I)V

    :cond_0
    return-void
.end method
