.class final Lcom/mbridge/msdk/advanced/b/b$7;
.super Ljava/lang/Object;
.source "NativeAdvancedShowManager.java"

# interfaces
.implements Lcom/mbridge/msdk/widget/dialog/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/advanced/b/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZLjava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Z

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field final synthetic d:Lcom/mbridge/msdk/advanced/b/b;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/advanced/b/b;ZLjava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 0

    .line 528
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/b/b$7;->d:Lcom/mbridge/msdk/advanced/b/b;

    iput-boolean p2, p0, Lcom/mbridge/msdk/advanced/b/b$7;->a:Z

    iput-object p3, p0, Lcom/mbridge/msdk/advanced/b/b$7;->b:Ljava/lang/String;

    iput-object p4, p0, Lcom/mbridge/msdk/advanced/b/b$7;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 3

    .line 531
    iget-boolean v0, p0, Lcom/mbridge/msdk/advanced/b/b$7;->a:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/b$7;->b:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 532
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/b$7;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/b/b$7;->d:Lcom/mbridge/msdk/advanced/b/b;

    invoke-static {v1}, Lcom/mbridge/msdk/advanced/b/b;->d(Lcom/mbridge/msdk/advanced/b/b;)Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/advanced/b/b$7;->b:Ljava/lang/String;

    invoke-static {v0, v1, v2}, Lcom/mbridge/msdk/advanced/d/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;)V

    .line 534
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/b$7;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/b/b$7;->d:Lcom/mbridge/msdk/advanced/b/b;

    invoke-static {v1}, Lcom/mbridge/msdk/advanced/b/b;->d(Lcom/mbridge/msdk/advanced/b/b;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCampaignUnitId(Ljava/lang/String;)V

    .line 535
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/b$7;->d:Lcom/mbridge/msdk/advanced/b/b;

    invoke-static {v0}, Lcom/mbridge/msdk/advanced/b/b;->h(Lcom/mbridge/msdk/advanced/b/b;)Lcom/mbridge/msdk/click/b;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/b/b$7;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/click/b;->c(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 537
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/b$7;->d:Lcom/mbridge/msdk/advanced/b/b;

    invoke-static {v0}, Lcom/mbridge/msdk/advanced/b/b;->b(Lcom/mbridge/msdk/advanced/b/b;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isReportClick()Z

    move-result v0

    if-nez v0, :cond_1

    .line 538
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/b$7;->d:Lcom/mbridge/msdk/advanced/b/b;

    invoke-static {v0}, Lcom/mbridge/msdk/advanced/b/b;->b(Lcom/mbridge/msdk/advanced/b/b;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setReportClick(Z)V

    .line 539
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/b/b$7;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {v0, v1}, Lcom/mbridge/msdk/advanced/d/a;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 541
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/b$7;->d:Lcom/mbridge/msdk/advanced/b/b;

    invoke-static {v0}, Lcom/mbridge/msdk/advanced/b/b;->f(Lcom/mbridge/msdk/advanced/b/b;)Lcom/mbridge/msdk/advanced/c/d;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 542
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/b$7;->d:Lcom/mbridge/msdk/advanced/b/b;

    invoke-static {v0}, Lcom/mbridge/msdk/advanced/b/b;->f(Lcom/mbridge/msdk/advanced/b/b;)Lcom/mbridge/msdk/advanced/c/d;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/b/b$7;->d:Lcom/mbridge/msdk/advanced/b/b;

    invoke-static {v1}, Lcom/mbridge/msdk/advanced/b/b;->g(Lcom/mbridge/msdk/advanced/b/b;)Lcom/mbridge/msdk/out/MBridgeIds;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/advanced/c/d;->b(Lcom/mbridge/msdk/out/MBridgeIds;)V

    :cond_2
    return-void
.end method

.method public final b()V
    .locals 0

    return-void
.end method

.method public final c()V
    .locals 0

    .line 552
    invoke-virtual {p0}, Lcom/mbridge/msdk/advanced/b/b$7;->a()V

    return-void
.end method
