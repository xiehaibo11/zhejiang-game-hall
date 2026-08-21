.class final Lcom/mbridge/msdk/mbbanner/common/c/b$3;
.super Ljava/lang/Object;
.source "BannerLoader.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/mbbanner/common/c/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

.field final synthetic b:Lcom/mbridge/msdk/mbbanner/common/c/b;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/mbbanner/common/c/b;Lcom/mbridge/msdk/foundation/entity/CampaignUnit;)V
    .locals 0

    .line 447
    iput-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/b$3;->b:Lcom/mbridge/msdk/mbbanner/common/c/b;

    iput-object p2, p0, Lcom/mbridge/msdk/mbbanner/common/c/b$3;->a:Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 451
    invoke-static {}, Lcom/mbridge/msdk/mbbanner/common/c/b;->a()Ljava/lang/String;

    move-result-object v0

    const-string v1, "\u5728\u5355\u72ec\u5b50\u7ebf\u7a0b\u4fdd\u5b58\u6570\u636e\u5e93 \u5f00\u59cb"

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 462
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/b$3;->b:Lcom/mbridge/msdk/mbbanner/common/c/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbbanner/common/c/b;->e(Lcom/mbridge/msdk/mbbanner/common/c/b;)Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/l;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/l;

    move-result-object v0

    .line 463
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/db/l;->b()V

    .line 466
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/b$3;->a:Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/b$3;->a:Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 467
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/b$3;->b:Lcom/mbridge/msdk/mbbanner/common/c/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbbanner/common/c/b;->e(Lcom/mbridge/msdk/mbbanner/common/c/b;)Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/b$3;->a:Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/mbbanner/common/util/BannerUtils;->updateInstallList(Landroid/content/Context;Ljava/util/List;)V

    .line 470
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/mbbanner/common/c/b;->a()Ljava/lang/String;

    move-result-object v0

    const-string v1, "\u5728\u5355\u72ec\u5b50\u7ebf\u7a0b\u4fdd\u5b58\u6570\u636e\u5e93 \u5b8c\u6210"

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
