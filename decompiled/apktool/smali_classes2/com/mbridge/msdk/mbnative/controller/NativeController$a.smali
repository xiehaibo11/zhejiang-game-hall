.class public final Lcom/mbridge/msdk/mbnative/controller/NativeController$a;
.super Lcom/mbridge/msdk/mbnative/e/a/b;
.source "NativeController.java"

# interfaces
.implements Lcom/mbridge/msdk/foundation/same/e/d;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/mbnative/controller/NativeController;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = "a"
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

.field private b:Z

.field private c:Ljava/lang/Runnable;

.field private d:Z

.field private e:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>(Lcom/mbridge/msdk/mbnative/controller/NativeController;)V
    .locals 0

    .line 1479
    iput-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-direct {p0}, Lcom/mbridge/msdk/mbnative/e/a/b;-><init>()V

    const/4 p1, 0x0

    .line 1480
    iput-boolean p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->b:Z

    const/4 p1, 0x1

    .line 1483
    iput-boolean p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->d:Z

    const/4 p1, 0x0

    .line 1485
    iput-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->e:Ljava/util/List;

    return-void
.end method


# virtual methods
.method public final a(ILjava/lang/String;)V
    .locals 2

    .line 1676
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->b(Lcom/mbridge/msdk/mbnative/controller/NativeController;Z)Z

    .line 1677
    iget-boolean v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->b:Z

    if-nez v0, :cond_3

    const/4 v0, -0x1

    if-ne p1, v0, :cond_0

    .line 1679
    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {p1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->p(Lcom/mbridge/msdk/mbnative/controller/NativeController;)I

    move-result p1

    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->unitId:Ljava/lang/String;

    invoke-static {p1, v0}, Lcom/mbridge/msdk/mbnative/controller/b;->b(ILjava/lang/String;)V

    .line 1680
    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    const/4 v0, 0x0

    invoke-static {p1, v0}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->b(Lcom/mbridge/msdk/mbnative/controller/NativeController;I)I

    .line 1682
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->c:Ljava/lang/Runnable;

    if-eqz p1, :cond_1

    .line 1683
    invoke-static {}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->c()Ljava/lang/String;

    move-result-object p1

    const-string v0, "REMOVE CANCEL TASK ON onFailed"

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1684
    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {p1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->k(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Lcom/mbridge/msdk/mbnative/controller/NativeController$e;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->c:Ljava/lang/Runnable;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/mbnative/controller/NativeController$e;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 1686
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {p1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->e(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Z

    move-result p1

    if-nez p1, :cond_4

    invoke-virtual {p0}, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->b()I

    move-result p1

    if-eq p1, v1, :cond_2

    iget-boolean p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->d:Z

    if-eqz p1, :cond_4

    .line 1687
    :cond_2
    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-virtual {p0}, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->b()I

    move-result v0

    invoke-virtual {p0}, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, p2, v0, v1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(Ljava/lang/String;ILjava/lang/String;)V

    goto :goto_0

    .line 1690
    :cond_3
    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {p1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->e(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Z

    move-result p1

    if-nez p1, :cond_4

    iget-boolean p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->d:Z

    if-eqz p1, :cond_4

    .line 1691
    invoke-static {}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->c()Ljava/lang/String;

    move-result-object p1

    const-string v0, "onFailed onnative fail"

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1692
    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-virtual {p0}, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->b()I

    move-result v0

    invoke-virtual {p0}, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, p2, v0, v1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(Ljava/lang/String;ILjava/lang/String;)V

    :cond_4
    :goto_0
    return-void
.end method

.method public final a(Ljava/lang/Runnable;)V
    .locals 0

    .line 1702
    iput-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->c:Ljava/lang/Runnable;

    return-void
.end method

.method public final a(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 1503
    iput-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->e:Ljava/util/List;

    return-void
.end method

.method public final a(Ljava/util/List;Lcom/mbridge/msdk/foundation/entity/CampaignUnit;)V
    .locals 13
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/same/net/c/b;",
            ">;",
            "Lcom/mbridge/msdk/foundation/entity/CampaignUnit;",
            ")V"
        }
    .end annotation

    .line 1513
    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    const/4 v0, 0x1

    invoke-static {p1, v0}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->b(Lcom/mbridge/msdk/mbnative/controller/NativeController;Z)Z

    .line 1515
    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {p1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->i(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/db/l;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/l;

    move-result-object p1

    .line 1516
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/db/l;->b()V

    .line 1518
    iget-object v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->c:Ljava/lang/Runnable;

    if-eqz v1, :cond_0

    .line 1519
    invoke-static {}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->c()Ljava/lang/String;

    move-result-object v1

    const-string v2, "REMOVE CANCEL TASK ON SUCCESS"

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1520
    iget-object v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {v1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->k(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Lcom/mbridge/msdk/mbnative/controller/NativeController$e;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->c:Ljava/lang/Runnable;

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/mbnative/controller/NativeController$e;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 1522
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->c()Ljava/lang/String;

    move-result-object v1

    const-string v2, "onSuccess"

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1524
    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Ljava/util/List;)V

    const/4 v1, 0x0

    if-eqz p2, :cond_1f

    .line 1525
    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object v2

    if-eqz v2, :cond_1f

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object v2

    invoke-virtual {v2}, Ljava/util/ArrayList;->size()I

    move-result v2

    if-lez v2, :cond_1f

    .line 1527
    iget-object v2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getSessionId()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(Lcom/mbridge/msdk/mbnative/controller/NativeController;Ljava/lang/String;)Ljava/lang/String;

    .line 1528
    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    .line 1529
    new-instance v3, Ljava/util/ArrayList;

    invoke-direct {v3}, Ljava/util/ArrayList;-><init>()V

    .line 1530
    new-instance v4, Ljava/util/ArrayList;

    invoke-direct {v4}, Ljava/util/ArrayList;-><init>()V

    .line 1531
    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {v5}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->l(Lcom/mbridge/msdk/mbnative/controller/NativeController;)I

    move-result v5

    const/4 v6, 0x2

    if-gtz v5, :cond_3

    .line 1532
    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {v5}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->l(Lcom/mbridge/msdk/mbnative/controller/NativeController;)I

    move-result v5

    const/4 v7, -0x3

    if-ne v5, v7, :cond_1

    .line 1533
    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object v7

    invoke-virtual {v7}, Ljava/util/ArrayList;->size()I

    move-result v7

    invoke-static {v5, v7}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(Lcom/mbridge/msdk/mbnative/controller/NativeController;I)I

    goto :goto_0

    .line 1535
    :cond_1
    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {v5}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->c(Lcom/mbridge/msdk/mbnative/controller/NativeController;)I

    move-result v7

    invoke-static {v5, v7}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(Lcom/mbridge/msdk/mbnative/controller/NativeController;I)I

    .line 1537
    :goto_0
    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {v5}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->m(Lcom/mbridge/msdk/mbnative/controller/NativeController;)I

    move-result v5

    if-eqz v5, :cond_2

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getTemplate()I

    move-result v5

    if-ne v5, v6, :cond_2

    .line 1538
    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {v5}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->m(Lcom/mbridge/msdk/mbnative/controller/NativeController;)I

    move-result v7

    invoke-static {v5, v7}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(Lcom/mbridge/msdk/mbnative/controller/NativeController;I)I

    .line 1541
    :cond_2
    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {v5}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->n(Lcom/mbridge/msdk/mbnative/controller/NativeController;)I

    move-result v5

    if-eqz v5, :cond_3

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getTemplate()I

    move-result v5

    const/4 v7, 0x3

    if-ne v5, v7, :cond_3

    .line 1542
    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {v5}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->n(Lcom/mbridge/msdk/mbnative/controller/NativeController;)I

    move-result v7

    invoke-static {v5, v7}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(Lcom/mbridge/msdk/mbnative/controller/NativeController;I)I

    :cond_3
    move v5, v1

    move v7, v5

    .line 1547
    :goto_1
    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object v8

    invoke-virtual {v8}, Ljava/util/ArrayList;->size()I

    move-result v8

    if-ge v5, v8, :cond_12

    .line 1548
    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object v8

    invoke-virtual {v8, v5}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 1549
    iget-object v9, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->unitId:Ljava/lang/String;

    invoke-virtual {v8, v9}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCampaignUnitId(Ljava/lang/String;)V

    .line 1550
    iget-object v9, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {v9}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Ljava/lang/String;

    move-result-object v9

    invoke-static {v9}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v9

    if-nez v9, :cond_4

    .line 1551
    iget-object v9, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {v9}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v8, v9}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setBidToken(Ljava/lang/String;)V

    .line 1552
    invoke-virtual {v8, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setIsBidCampaign(Z)V

    .line 1554
    :cond_4
    invoke-static {}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d()Z

    move-result v9

    if-eqz v9, :cond_5

    const/4 v9, 0x0

    .line 1555
    invoke-virtual {v8, v9}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->loadIconUrlAsyncWithBlock(Lcom/mbridge/msdk/out/OnImageLoadListener;)V

    .line 1556
    invoke-virtual {v8, v9}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->loadImageUrlAsyncWithBlock(Lcom/mbridge/msdk/out/OnImageLoadListener;)V

    :cond_5
    if-eqz v8, :cond_11

    .line 1560
    iget-object v9, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {v9}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->i(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Landroid/content/Context;

    move-result-object v9

    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPackageName()Ljava/lang/String;

    move-result-object v10

    invoke-static {v9, v10}, Lcom/mbridge/msdk/foundation/tools/ae;->c(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v9

    if-eqz v9, :cond_6

    .line 1562
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->e()Ljava/util/Set;

    move-result-object v10

    if-eqz v10, :cond_6

    .line 1563
    new-instance v7, Lcom/mbridge/msdk/foundation/entity/i;

    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPackageName()Ljava/lang/String;

    move-result-object v11

    invoke-direct {v7, v10, v11}, Lcom/mbridge/msdk/foundation/entity/i;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 1564
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->e()Ljava/util/Set;

    move-result-object v10

    invoke-interface {v10, v7}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    move v7, v0

    .line 1569
    :cond_6
    iget-object v10, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {v10}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->c(Lcom/mbridge/msdk/mbnative/controller/NativeController;)I

    move-result v10

    const/16 v11, 0x63

    if-ge v5, v10, :cond_c

    .line 1570
    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getOfferType()I

    move-result v10

    if-eq v10, v11, :cond_c

    .line 1571
    invoke-static {v8}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result v10

    if-eqz v10, :cond_8

    if-eqz v9, :cond_7

    move v10, v0

    goto :goto_2

    :cond_7
    move v10, v6

    .line 1572
    :goto_2
    invoke-virtual {v8, v10}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setRtinsType(I)V

    .line 1574
    :cond_8
    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getWtick()I

    move-result v10

    if-eq v10, v0, :cond_b

    if-nez v9, :cond_9

    goto :goto_3

    .line 1581
    :cond_9
    invoke-static {v8}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result v10

    if-eqz v10, :cond_a

    .line 1582
    invoke-interface {v2, v8}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 1583
    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v10

    invoke-static {v10}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v10

    if-nez v10, :cond_c

    .line 1584
    invoke-interface {v4, v8}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_4

    .line 1588
    :cond_a
    iget-object v10, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->unitId:Ljava/lang/String;

    sget v12, Lcom/mbridge/msdk/foundation/same/a;->E:I

    invoke-static {v10, v8, v12}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    goto :goto_4

    .line 1575
    :cond_b
    :goto_3
    invoke-interface {v2, v8}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 1576
    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v10

    invoke-static {v10}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v10

    if-nez v10, :cond_c

    .line 1577
    invoke-interface {v4, v8}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 1594
    :cond_c
    :goto_4
    iget-object v10, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {v10}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->l(Lcom/mbridge/msdk/mbnative/controller/NativeController;)I

    move-result v10

    if-ge v5, v10, :cond_10

    .line 1595
    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getOfferType()I

    move-result v10

    if-eq v10, v11, :cond_10

    .line 1596
    invoke-static {v8}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result v10

    if-eqz v10, :cond_e

    if-eqz v9, :cond_d

    move v10, v0

    goto :goto_5

    :cond_d
    move v10, v6

    .line 1597
    :goto_5
    invoke-virtual {v8, v10}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setRtinsType(I)V

    :cond_e
    if-nez v9, :cond_f

    .line 1600
    invoke-interface {v3, v8}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_6

    .line 1602
    :cond_f
    invoke-static {v8}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result v9

    if-eqz v9, :cond_10

    .line 1603
    invoke-interface {v3, v8}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 1608
    :cond_10
    :goto_6
    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {p1, v9}, Lcom/mbridge/msdk/foundation/db/l;->a(Ljava/lang/String;)Z

    move-result v9

    if-nez v9, :cond_11

    .line 1610
    new-instance v9, Lcom/mbridge/msdk/foundation/entity/h;

    invoke-direct {v9}, Lcom/mbridge/msdk/foundation/entity/h;-><init>()V

    .line 1611
    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v9, v10}, Lcom/mbridge/msdk/foundation/entity/h;->a(Ljava/lang/String;)V

    .line 1612
    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getFca()I

    move-result v10

    invoke-virtual {v9, v10}, Lcom/mbridge/msdk/foundation/entity/h;->a(I)V

    .line 1613
    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getFcb()I

    move-result v8

    invoke-virtual {v9, v8}, Lcom/mbridge/msdk/foundation/entity/h;->b(I)V

    .line 1614
    invoke-virtual {v9, v1}, Lcom/mbridge/msdk/foundation/entity/h;->d(I)V

    .line 1615
    invoke-virtual {v9, v1}, Lcom/mbridge/msdk/foundation/entity/h;->c(I)V

    .line 1616
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v10

    invoke-virtual {v9, v10, v11}, Lcom/mbridge/msdk/foundation/entity/h;->a(J)V

    .line 1617
    invoke-virtual {p1, v9}, Lcom/mbridge/msdk/foundation/db/l;->a(Lcom/mbridge/msdk/foundation/entity/h;)V

    :cond_11
    add-int/lit8 v5, v5, 0x1

    goto/16 :goto_1

    .line 1625
    :cond_12
    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {p1, v4}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->b(Lcom/mbridge/msdk/mbnative/controller/NativeController;Ljava/util/List;)V

    if-eqz v7, :cond_13

    .line 1628
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/a;->h()V

    .line 1631
    :cond_13
    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object p1

    invoke-virtual {p1, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object p1

    if-eqz p1, :cond_14

    .line 1632
    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object p1

    invoke-virtual {p1, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getType()I

    move-result p1

    goto :goto_7

    :cond_14
    move p1, v0

    .line 1634
    :goto_7
    invoke-static {p1}, Lcom/mbridge/msdk/mbnative/a/f;->a(I)Lcom/mbridge/msdk/mbnative/a/b;

    move-result-object p2

    if-eqz p2, :cond_15

    .line 1636
    iget-object v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->unitId:Ljava/lang/String;

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {v5}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {p2, v4, v3, v5}, Lcom/mbridge/msdk/mbnative/a/b;->a(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/String;)V

    .line 1639
    :cond_15
    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result p2

    if-nez p2, :cond_18

    .line 1640
    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {p2}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Z

    move-result p2

    if-nez p2, :cond_16

    if-eq p1, v0, :cond_17

    .line 1641
    :cond_16
    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-virtual {p0}, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->b()I

    move-result p2

    invoke-virtual {p0}, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a()Ljava/lang/String;

    move-result-object v0

    const-string v1, "APP ALREADY INSTALLED"

    invoke-virtual {p1, v1, p2, v0}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(Ljava/lang/String;ILjava/lang/String;)V

    :cond_17
    return-void

    .line 1645
    :cond_18
    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {p2}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Z

    move-result p2

    if-nez p2, :cond_19

    if-eq p1, v0, :cond_1a

    .line 1646
    :cond_19
    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {p2, v2}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->c(Lcom/mbridge/msdk/mbnative/controller/NativeController;Ljava/util/List;)Ljava/util/List;

    move-result-object v3

    invoke-static {p2, p1, v3}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(Lcom/mbridge/msdk/mbnative/controller/NativeController;ILjava/util/List;)Ljava/util/List;

    move-result-object v3

    invoke-static {p2, v3}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(Lcom/mbridge/msdk/mbnative/controller/NativeController;Ljava/util/List;)Z

    .line 1648
    :cond_1a
    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {p2}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->e(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Z

    move-result p2

    if-nez p2, :cond_1b

    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {p2}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->o(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Z

    move-result p2

    if-eqz p2, :cond_1b

    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {p2}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->j(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Z

    move-result p2

    if-nez p2, :cond_1b

    .line 1649
    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {p2, v2}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->c(Lcom/mbridge/msdk/mbnative/controller/NativeController;Ljava/util/List;)Ljava/util/List;

    move-result-object v2

    invoke-static {p2, p1, v2}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(Lcom/mbridge/msdk/mbnative/controller/NativeController;ILjava/util/List;)Ljava/util/List;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(Lcom/mbridge/msdk/mbnative/controller/NativeController;Ljava/util/List;)Z

    .line 1652
    :cond_1b
    invoke-static {}, Lcom/mbridge/msdk/mbnative/controller/b;->b()Ljava/util/Map;

    move-result-object p1

    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->unitId:Ljava/lang/String;

    invoke-interface {p1, p2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1c

    .line 1653
    invoke-static {}, Lcom/mbridge/msdk/mbnative/controller/b;->b()Ljava/util/Map;

    move-result-object p1

    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->unitId:Ljava/lang/String;

    invoke-interface {p1, p2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/Boolean;

    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p1

    if-eqz p1, :cond_1c

    .line 1654
    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {p1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->p(Lcom/mbridge/msdk/mbnative/controller/NativeController;)I

    move-result p1

    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->unitId:Ljava/lang/String;

    invoke-static {p1, p2}, Lcom/mbridge/msdk/mbnative/controller/b;->a(ILjava/lang/String;)V

    goto :goto_9

    .line 1657
    :cond_1c
    invoke-static {}, Lcom/mbridge/msdk/mbnative/controller/b;->e()Ljava/util/Map;

    move-result-object p1

    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->unitId:Ljava/lang/String;

    invoke-interface {p1, p2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1d

    .line 1658
    invoke-static {}, Lcom/mbridge/msdk/mbnative/controller/b;->e()Ljava/util/Map;

    move-result-object p1

    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->unitId:Ljava/lang/String;

    invoke-interface {p1, p2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/Integer;

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result v0

    .line 1660
    :cond_1d
    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {p1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->c(Lcom/mbridge/msdk/mbnative/controller/NativeController;)I

    move-result p1

    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {p2}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->q(Lcom/mbridge/msdk/mbnative/controller/NativeController;)I

    move-result p2

    add-int/2addr p1, p2

    if-le p1, v0, :cond_1e

    goto :goto_8

    :cond_1e
    move v1, p1

    .line 1665
    :goto_8
    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {p1, v1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->b(Lcom/mbridge/msdk/mbnative/controller/NativeController;I)I

    goto :goto_9

    .line 1668
    :cond_1f
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "0_"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->unitId:Ljava/lang/String;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->unitId:Ljava/lang/String;

    .line 1669
    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {p1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->p(Lcom/mbridge/msdk/mbnative/controller/NativeController;)I

    move-result p1

    iget-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->unitId:Ljava/lang/String;

    invoke-static {p1, p2}, Lcom/mbridge/msdk/mbnative/controller/b;->b(ILjava/lang/String;)V

    .line 1670
    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {p1, v1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->b(Lcom/mbridge/msdk/mbnative/controller/NativeController;I)I

    :goto_9
    return-void
.end method

.method public final a(Z)V
    .locals 0

    .line 1499
    iput-boolean p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->b:Z

    return-void
.end method

.method public final b(Ljava/util/List;)V
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/out/Frame;",
            ">;)V"
        }
    .end annotation

    .line 1707
    iget-boolean v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->b:Z

    if-nez v0, :cond_9

    .line 1708
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->c:Ljava/lang/Runnable;

    if-eqz v0, :cond_0

    .line 1709
    invoke-static {}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->c()Ljava/lang/String;

    move-result-object v0

    const-string v1, "REMOVE CANCEL TASK ON onAdLoaded"

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1710
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->k(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Lcom/mbridge/msdk/mbnative/controller/NativeController$e;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->c:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/mbnative/controller/NativeController$e;->removeCallbacks(Ljava/lang/Runnable;)V

    :cond_0
    const/4 v0, 0x1

    if-eqz p1, :cond_8

    .line 1712
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v1

    if-nez v1, :cond_1

    goto :goto_2

    .line 1721
    :cond_1
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_2
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_7

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/out/Frame;

    .line 1722
    invoke-virtual {v2}, Lcom/mbridge/msdk/out/Frame;->getCampaigns()Ljava/util/List;

    move-result-object v2

    if-eqz v2, :cond_5

    .line 1723
    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v3

    if-nez v3, :cond_3

    goto :goto_1

    .line 1730
    :cond_3
    invoke-interface {v2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :cond_4
    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_2

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mbridge/msdk/out/Campaign;

    .line 1731
    invoke-static {}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d()Z

    move-result v4

    if-eqz v4, :cond_4

    const/4 v4, 0x0

    .line 1732
    invoke-virtual {v3, v4}, Lcom/mbridge/msdk/out/Campaign;->loadImageUrlAsyncWithBlock(Lcom/mbridge/msdk/out/OnImageLoadListener;)V

    .line 1733
    invoke-virtual {v3, v4}, Lcom/mbridge/msdk/out/Campaign;->loadIconUrlAsyncWithBlock(Lcom/mbridge/msdk/out/OnImageLoadListener;)V

    goto :goto_0

    .line 1724
    :cond_5
    :goto_1
    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {p1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->g(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Lcom/mbridge/msdk/mbnative/c/a;

    move-result-object p1

    if-eqz p1, :cond_6

    .line 1725
    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {p1, v0}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->c(Lcom/mbridge/msdk/mbnative/controller/NativeController;Z)Z

    .line 1726
    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {p1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->g(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Lcom/mbridge/msdk/mbnative/c/a;

    move-result-object p1

    const-string v0, "ads in frame is empty"

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/mbnative/c/a;->onAdLoadError(Ljava/lang/String;)V

    :cond_6
    return-void

    .line 1739
    :cond_7
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->g(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Lcom/mbridge/msdk/mbnative/c/a;

    move-result-object v0

    if-eqz v0, :cond_9

    .line 1740
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->g(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Lcom/mbridge/msdk/mbnative/c/a;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/mbnative/c/a;->onAdFramesLoaded(Ljava/util/List;)V

    goto :goto_3

    .line 1713
    :cond_8
    :goto_2
    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {p1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->g(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Lcom/mbridge/msdk/mbnative/c/a;

    move-result-object p1

    if-eqz p1, :cond_9

    .line 1714
    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {p1, v0}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->c(Lcom/mbridge/msdk/mbnative/controller/NativeController;Z)Z

    .line 1715
    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {p1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->g(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Lcom/mbridge/msdk/mbnative/c/a;

    move-result-object p1

    const-string v0, "frame is empty"

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/mbnative/c/a;->onAdLoadError(Ljava/lang/String;)V

    :cond_9
    :goto_3
    return-void
.end method

.method public final b(Z)V
    .locals 0

    .line 1494
    iput-boolean p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$a;->d:Z

    return-void
.end method
