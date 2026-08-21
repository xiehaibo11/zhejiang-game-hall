.class final Lcom/mbridge/msdk/mbbanner/a/a$2;
.super Ljava/lang/Object;
.source "BannerController.java"

# interfaces
.implements Lcom/mbridge/msdk/mbbanner/common/b/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/mbbanner/a/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/mbbanner/a/a;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/mbbanner/a/a;)V
    .locals 0

    .line 148
    iput-object p1, p0, Lcom/mbridge/msdk/mbbanner/a/a$2;->a:Lcom/mbridge/msdk/mbbanner/a/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignUnit;Z)V
    .locals 0

    .line 152
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/a/a$2;->a:Lcom/mbridge/msdk/mbbanner/a/a;

    invoke-static {p1, p2}, Lcom/mbridge/msdk/mbbanner/a/a;->a(Lcom/mbridge/msdk/mbbanner/a/a;Lcom/mbridge/msdk/foundation/entity/CampaignUnit;)Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;Z)V
    .locals 2

    .line 165
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/a/a$2;->a:Lcom/mbridge/msdk/mbbanner/a/a;

    invoke-static {p1}, Lcom/mbridge/msdk/mbbanner/a/a;->a(Lcom/mbridge/msdk/mbbanner/a/a;)Lcom/mbridge/msdk/out/BannerAdListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 166
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/a/a$2;->a:Lcom/mbridge/msdk/mbbanner/a/a;

    invoke-static {p1}, Lcom/mbridge/msdk/mbbanner/a/a;->a(Lcom/mbridge/msdk/mbbanner/a/a;)Lcom/mbridge/msdk/out/BannerAdListener;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/a/a$2;->a:Lcom/mbridge/msdk/mbbanner/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/mbbanner/a/a;->b(Lcom/mbridge/msdk/mbbanner/a/a;)Lcom/mbridge/msdk/out/MBridgeIds;

    move-result-object v0

    invoke-interface {p1, v0, p2}, Lcom/mbridge/msdk/out/BannerAdListener;->onLoadFailed(Lcom/mbridge/msdk/out/MBridgeIds;Ljava/lang/String;)V

    .line 168
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/mbbanner/a/a;->f()Ljava/lang/String;

    move-result-object p1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onCampaignFail:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 169
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/a/a$2;->a:Lcom/mbridge/msdk/mbbanner/a/a;

    invoke-virtual {p1}, Lcom/mbridge/msdk/mbbanner/a/a;->c()V

    .line 170
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/a/a$2;->a:Lcom/mbridge/msdk/mbbanner/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/mbbanner/a/a;->d(Lcom/mbridge/msdk/mbbanner/a/a;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, p2, v0, p3}, Lcom/mbridge/msdk/foundation/same/report/e;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Z)V

    return-void
.end method

.method public final a(Ljava/lang/String;Z)V
    .locals 2

    .line 178
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/a/a$2;->a:Lcom/mbridge/msdk/mbbanner/a/a;

    invoke-static {p1}, Lcom/mbridge/msdk/mbbanner/a/a;->i(Lcom/mbridge/msdk/mbbanner/a/a;)Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 179
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/a/a$2;->a:Lcom/mbridge/msdk/mbbanner/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/mbbanner/a/a;->i(Lcom/mbridge/msdk/mbbanner/a/a;)Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/a/a$2;->a:Lcom/mbridge/msdk/mbbanner/a/a;

    invoke-static {v1}, Lcom/mbridge/msdk/mbbanner/a/a;->d(Lcom/mbridge/msdk/mbbanner/a/a;)Ljava/lang/String;

    move-result-object v1

    invoke-static {p1, v0, v1, p2}, Lcom/mbridge/msdk/foundation/same/report/e;->a(Landroid/content/Context;Ljava/util/List;Ljava/lang/String;Z)V

    .line 181
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/a/a$2;->a:Lcom/mbridge/msdk/mbbanner/a/a;

    invoke-static {p1}, Lcom/mbridge/msdk/mbbanner/a/a;->j(Lcom/mbridge/msdk/mbbanner/a/a;)Lcom/mbridge/msdk/out/MBBannerView;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 182
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/a/a$2;->a:Lcom/mbridge/msdk/mbbanner/a/a;

    const/4 p2, 0x1

    invoke-static {p1, p2}, Lcom/mbridge/msdk/mbbanner/a/a;->b(Lcom/mbridge/msdk/mbbanner/a/a;Z)Z

    .line 183
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/a/a$2;->a:Lcom/mbridge/msdk/mbbanner/a/a;

    invoke-static {p1}, Lcom/mbridge/msdk/mbbanner/a/a;->k(Lcom/mbridge/msdk/mbbanner/a/a;)V

    :cond_1
    return-void
.end method

.method public final b(Ljava/lang/String;Z)V
    .locals 2

    .line 190
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/a/a$2;->a:Lcom/mbridge/msdk/mbbanner/a/a;

    invoke-static {p1}, Lcom/mbridge/msdk/mbbanner/a/a;->a(Lcom/mbridge/msdk/mbbanner/a/a;)Lcom/mbridge/msdk/out/BannerAdListener;

    move-result-object p1

    const-string v0, "banner res load failed"

    if-eqz p1, :cond_0

    .line 191
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/a/a$2;->a:Lcom/mbridge/msdk/mbbanner/a/a;

    invoke-static {p1}, Lcom/mbridge/msdk/mbbanner/a/a;->a(Lcom/mbridge/msdk/mbbanner/a/a;)Lcom/mbridge/msdk/out/BannerAdListener;

    move-result-object p1

    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/a/a$2;->a:Lcom/mbridge/msdk/mbbanner/a/a;

    invoke-static {v1}, Lcom/mbridge/msdk/mbbanner/a/a;->b(Lcom/mbridge/msdk/mbbanner/a/a;)Lcom/mbridge/msdk/out/MBridgeIds;

    move-result-object v1

    invoke-interface {p1, v1, v0}, Lcom/mbridge/msdk/out/BannerAdListener;->onLoadFailed(Lcom/mbridge/msdk/out/MBridgeIds;Ljava/lang/String;)V

    .line 193
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/mbbanner/a/a;->f()Ljava/lang/String;

    move-result-object p1

    const-string v1, "onResourceFail:"

    invoke-static {p1, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 194
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/a/a$2;->a:Lcom/mbridge/msdk/mbbanner/a/a;

    invoke-virtual {p1}, Lcom/mbridge/msdk/mbbanner/a/a;->c()V

    .line 195
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p1

    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/a/a$2;->a:Lcom/mbridge/msdk/mbbanner/a/a;

    invoke-static {v1}, Lcom/mbridge/msdk/mbbanner/a/a;->d(Lcom/mbridge/msdk/mbbanner/a/a;)Ljava/lang/String;

    move-result-object v1

    invoke-static {p1, v0, v1, p2}, Lcom/mbridge/msdk/foundation/same/report/e;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Z)V

    return-void
.end method
