.class final Lcom/mbridge/msdk/mbbanner/common/c/c$3;
.super Ljava/lang/Object;
.source "BannerShowManager.java"

# interfaces
.implements Lcom/mbridge/msdk/widget/dialog/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/mbbanner/common/c/c;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZLjava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field final synthetic b:Z

.field final synthetic c:Ljava/lang/String;

.field final synthetic d:Lcom/mbridge/msdk/mbbanner/common/c/c;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/mbbanner/common/c/c;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZLjava/lang/String;)V
    .locals 0

    .line 908
    iput-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$3;->d:Lcom/mbridge/msdk/mbbanner/common/c/c;

    iput-object p2, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$3;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iput-boolean p3, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$3;->b:Z

    iput-object p4, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$3;->c:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 3

    .line 911
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$3;->d:Lcom/mbridge/msdk/mbbanner/common/c/c;

    iget-object v0, v0, Lcom/mbridge/msdk/mbbanner/common/c/c;->a:Lcom/mbridge/msdk/click/b;

    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$3;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/click/b;->c(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 913
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$3;->d:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {v0}, Lcom/mbridge/msdk/mbbanner/common/c/c;->i(Lcom/mbridge/msdk/mbbanner/common/c/c;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isReportClick()Z

    move-result v0

    if-nez v0, :cond_0

    .line 914
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$3;->d:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {v0}, Lcom/mbridge/msdk/mbbanner/common/c/c;->i(Lcom/mbridge/msdk/mbbanner/common/c/c;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setReportClick(Z)V

    .line 915
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$3;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {v0, v1}, Lcom/mbridge/msdk/mbbanner/common/d/a;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 917
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$3;->d:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {v0}, Lcom/mbridge/msdk/mbbanner/common/c/c;->h(Lcom/mbridge/msdk/mbbanner/common/c/c;)Lcom/mbridge/msdk/mbbanner/common/b/c;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 918
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$3;->d:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {v0}, Lcom/mbridge/msdk/mbbanner/common/c/c;->h(Lcom/mbridge/msdk/mbbanner/common/c/c;)Lcom/mbridge/msdk/mbbanner/common/b/c;

    move-result-object v0

    invoke-interface {v0}, Lcom/mbridge/msdk/mbbanner/common/b/c;->a()V

    .line 920
    :cond_1
    iget-boolean v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$3;->b:Z

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$3;->c:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 921
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$3;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$3;->d:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {v1}, Lcom/mbridge/msdk/mbbanner/common/c/c;->o(Lcom/mbridge/msdk/mbbanner/common/c/c;)Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$3;->c:Ljava/lang/String;

    invoke-static {v0, v1, v2}, Lcom/mbridge/msdk/mbbanner/common/d/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    return-void
.end method

.method public final b()V
    .locals 2

    .line 927
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$3;->d:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {v0}, Lcom/mbridge/msdk/mbbanner/common/c/c;->h(Lcom/mbridge/msdk/mbbanner/common/c/c;)Lcom/mbridge/msdk/mbbanner/common/b/c;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 928
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$3;->d:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {v0}, Lcom/mbridge/msdk/mbbanner/common/c/c;->h(Lcom/mbridge/msdk/mbbanner/common/c/c;)Lcom/mbridge/msdk/mbbanner/common/b/c;

    move-result-object v0

    const/4 v1, 0x0

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/mbbanner/common/b/c;->a(Z)V

    :cond_0
    return-void
.end method

.method public final c()V
    .locals 0

    .line 933
    invoke-virtual {p0}, Lcom/mbridge/msdk/mbbanner/common/c/c$3;->a()V

    return-void
.end method
