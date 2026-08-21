.class final Lcom/mbridge/msdk/mbnative/controller/b$a$1;
.super Ljava/lang/Object;
.source "NativePreloadController.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/mbnative/controller/b$a;->a(Ljava/util/List;Lcom/mbridge/msdk/foundation/entity/CampaignUnit;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

.field final synthetic b:Lcom/mbridge/msdk/mbnative/controller/b$a;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/mbnative/controller/b$a;Lcom/mbridge/msdk/foundation/entity/CampaignUnit;)V
    .locals 0

    .line 841
    iput-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/b$a$1;->b:Lcom/mbridge/msdk/mbnative/controller/b$a;

    iput-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/b$a$1;->a:Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 11

    .line 846
    sget-boolean v0, Lcom/mbridge/msdk/MBridgeConstans;->PRELOAD_RESULT_IN_SUBTHREAD:Z

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eqz v0, :cond_0

    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object v0

    if-nez v0, :cond_0

    .line 847
    invoke-static {}, Landroid/os/Looper;->prepare()V

    move v0, v1

    goto :goto_0

    :cond_0
    move v0, v2

    .line 850
    :goto_0
    iget-object v3, p0, Lcom/mbridge/msdk/mbnative/controller/b$a$1;->b:Lcom/mbridge/msdk/mbnative/controller/b$a;

    invoke-static {v3}, Lcom/mbridge/msdk/mbnative/controller/b$a;->a(Lcom/mbridge/msdk/mbnative/controller/b$a;)Ljava/lang/Runnable;

    move-result-object v3

    if-eqz v3, :cond_1

    .line 851
    invoke-static {}, Lcom/mbridge/msdk/mbnative/controller/b;->f()Ljava/lang/String;

    move-result-object v3

    const-string v4, "REMOVE CANCEL TASK ON SUCCESS"

    invoke-static {v3, v4}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 852
    iget-object v3, p0, Lcom/mbridge/msdk/mbnative/controller/b$a$1;->b:Lcom/mbridge/msdk/mbnative/controller/b$a;

    iget-object v3, v3, Lcom/mbridge/msdk/mbnative/controller/b$a;->a:Lcom/mbridge/msdk/mbnative/controller/b;

    invoke-static {v3}, Lcom/mbridge/msdk/mbnative/controller/b;->a(Lcom/mbridge/msdk/mbnative/controller/b;)Landroid/os/Handler;

    move-result-object v3

    iget-object v4, p0, Lcom/mbridge/msdk/mbnative/controller/b$a$1;->b:Lcom/mbridge/msdk/mbnative/controller/b$a;

    invoke-static {v4}, Lcom/mbridge/msdk/mbnative/controller/b$a;->a(Lcom/mbridge/msdk/mbnative/controller/b$a;)Ljava/lang/Runnable;

    move-result-object v4

    invoke-virtual {v3, v4}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 854
    :cond_1
    invoke-static {}, Lcom/mbridge/msdk/mbnative/controller/b;->f()Ljava/lang/String;

    move-result-object v3

    const-string v4, "onSuccess"

    invoke-static {v3, v4}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 855
    iget-object v3, p0, Lcom/mbridge/msdk/mbnative/controller/b$a$1;->a:Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object v3

    invoke-static {v3}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Ljava/util/List;)V

    .line 857
    invoke-static {}, Lcom/mbridge/msdk/mbnative/controller/b;->g()Ljava/util/Map;

    move-result-object v3

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "0_"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v6, p0, Lcom/mbridge/msdk/mbnative/controller/b$a$1;->b:Lcom/mbridge/msdk/mbnative/controller/b$a;

    iget-object v6, v6, Lcom/mbridge/msdk/mbnative/controller/b$a;->unitId:Ljava/lang/String;

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-interface {v3, v4}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_2

    .line 858
    invoke-static {}, Lcom/mbridge/msdk/mbnative/controller/b;->g()Ljava/util/Map;

    move-result-object v3

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/b$a$1;->b:Lcom/mbridge/msdk/mbnative/controller/b$a;

    iget-object v5, v5, Lcom/mbridge/msdk/mbnative/controller/b$a;->unitId:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-interface {v3, v4}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 861
    :cond_2
    iget-object v3, p0, Lcom/mbridge/msdk/mbnative/controller/b$a$1;->b:Lcom/mbridge/msdk/mbnative/controller/b$a;

    invoke-static {v3}, Lcom/mbridge/msdk/mbnative/controller/b$a;->b(Lcom/mbridge/msdk/mbnative/controller/b$a;)I

    move-result v3

    if-lez v3, :cond_4

    .line 862
    iget-object v3, p0, Lcom/mbridge/msdk/mbnative/controller/b$a$1;->a:Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    iget-object v3, v3, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->ads:Ljava/util/ArrayList;

    invoke-virtual {v3}, Ljava/util/ArrayList;->size()I

    move-result v3

    iget-object v4, p0, Lcom/mbridge/msdk/mbnative/controller/b$a$1;->b:Lcom/mbridge/msdk/mbnative/controller/b$a;

    invoke-static {v4}, Lcom/mbridge/msdk/mbnative/controller/b$a;->b(Lcom/mbridge/msdk/mbnative/controller/b$a;)I

    move-result v4

    if-le v3, v4, :cond_3

    .line 863
    iget-object v3, p0, Lcom/mbridge/msdk/mbnative/controller/b$a$1;->b:Lcom/mbridge/msdk/mbnative/controller/b$a;

    invoke-static {v3}, Lcom/mbridge/msdk/mbnative/controller/b$a;->b(Lcom/mbridge/msdk/mbnative/controller/b$a;)I

    move-result v4

    invoke-static {v3, v4}, Lcom/mbridge/msdk/mbnative/controller/b$a;->a(Lcom/mbridge/msdk/mbnative/controller/b$a;I)I

    goto/16 :goto_2

    .line 865
    :cond_3
    iget-object v3, p0, Lcom/mbridge/msdk/mbnative/controller/b$a$1;->b:Lcom/mbridge/msdk/mbnative/controller/b$a;

    iget-object v4, p0, Lcom/mbridge/msdk/mbnative/controller/b$a$1;->a:Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    iget-object v4, v4, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->ads:Ljava/util/ArrayList;

    invoke-virtual {v4}, Ljava/util/ArrayList;->size()I

    move-result v4

    invoke-static {v3, v4}, Lcom/mbridge/msdk/mbnative/controller/b$a;->a(Lcom/mbridge/msdk/mbnative/controller/b$a;I)I

    goto/16 :goto_2

    .line 868
    :cond_4
    iget-object v3, p0, Lcom/mbridge/msdk/mbnative/controller/b$a$1;->b:Lcom/mbridge/msdk/mbnative/controller/b$a;

    invoke-static {v3}, Lcom/mbridge/msdk/mbnative/controller/b$a;->b(Lcom/mbridge/msdk/mbnative/controller/b$a;)I

    move-result v3

    const/4 v4, -0x1

    if-ne v3, v4, :cond_5

    .line 869
    iget-object v3, p0, Lcom/mbridge/msdk/mbnative/controller/b$a$1;->b:Lcom/mbridge/msdk/mbnative/controller/b$a;

    invoke-static {v3, v2}, Lcom/mbridge/msdk/mbnative/controller/b$a;->a(Lcom/mbridge/msdk/mbnative/controller/b$a;I)I

    goto :goto_2

    .line 870
    :cond_5
    iget-object v3, p0, Lcom/mbridge/msdk/mbnative/controller/b$a$1;->b:Lcom/mbridge/msdk/mbnative/controller/b$a;

    invoke-static {v3}, Lcom/mbridge/msdk/mbnative/controller/b$a;->b(Lcom/mbridge/msdk/mbnative/controller/b$a;)I

    move-result v3

    const/4 v4, -0x3

    if-ne v3, v4, :cond_6

    .line 871
    iget-object v3, p0, Lcom/mbridge/msdk/mbnative/controller/b$a$1;->b:Lcom/mbridge/msdk/mbnative/controller/b$a;

    iget-object v4, p0, Lcom/mbridge/msdk/mbnative/controller/b$a$1;->a:Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    iget-object v4, v4, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->ads:Ljava/util/ArrayList;

    invoke-virtual {v4}, Ljava/util/ArrayList;->size()I

    move-result v4

    invoke-static {v3, v4}, Lcom/mbridge/msdk/mbnative/controller/b$a;->a(Lcom/mbridge/msdk/mbnative/controller/b$a;I)I

    goto :goto_2

    .line 872
    :cond_6
    iget-object v3, p0, Lcom/mbridge/msdk/mbnative/controller/b$a$1;->b:Lcom/mbridge/msdk/mbnative/controller/b$a;

    invoke-static {v3}, Lcom/mbridge/msdk/mbnative/controller/b$a;->b(Lcom/mbridge/msdk/mbnative/controller/b$a;)I

    move-result v3

    const/4 v4, -0x2

    if-ne v3, v4, :cond_9

    .line 874
    iget-object v3, p0, Lcom/mbridge/msdk/mbnative/controller/b$a$1;->a:Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getTemplate()I

    move-result v3

    const/4 v4, 0x3

    if-ne v3, v4, :cond_7

    .line 875
    iget-object v3, p0, Lcom/mbridge/msdk/mbnative/controller/b$a$1;->b:Lcom/mbridge/msdk/mbnative/controller/b$a;

    invoke-static {v3}, Lcom/mbridge/msdk/mbnative/controller/b$a;->c(Lcom/mbridge/msdk/mbnative/controller/b$a;)I

    move-result v3

    if-eqz v3, :cond_8

    .line 876
    iget-object v3, p0, Lcom/mbridge/msdk/mbnative/controller/b$a$1;->b:Lcom/mbridge/msdk/mbnative/controller/b$a;

    invoke-static {v3}, Lcom/mbridge/msdk/mbnative/controller/b$a;->c(Lcom/mbridge/msdk/mbnative/controller/b$a;)I

    move-result v4

    invoke-static {v3, v4}, Lcom/mbridge/msdk/mbnative/controller/b$a;->a(Lcom/mbridge/msdk/mbnative/controller/b$a;I)I

    goto :goto_1

    .line 880
    :cond_7
    iget-object v3, p0, Lcom/mbridge/msdk/mbnative/controller/b$a$1;->b:Lcom/mbridge/msdk/mbnative/controller/b$a;

    invoke-static {v3}, Lcom/mbridge/msdk/mbnative/controller/b$a;->d(Lcom/mbridge/msdk/mbnative/controller/b$a;)I

    move-result v3

    if-eqz v3, :cond_8

    .line 881
    iget-object v3, p0, Lcom/mbridge/msdk/mbnative/controller/b$a$1;->b:Lcom/mbridge/msdk/mbnative/controller/b$a;

    invoke-static {v3}, Lcom/mbridge/msdk/mbnative/controller/b$a;->d(Lcom/mbridge/msdk/mbnative/controller/b$a;)I

    move-result v4

    invoke-static {v3, v4}, Lcom/mbridge/msdk/mbnative/controller/b$a;->a(Lcom/mbridge/msdk/mbnative/controller/b$a;I)I

    .line 884
    :cond_8
    :goto_1
    iget-object v3, p0, Lcom/mbridge/msdk/mbnative/controller/b$a$1;->b:Lcom/mbridge/msdk/mbnative/controller/b$a;

    invoke-static {v3}, Lcom/mbridge/msdk/mbnative/controller/b$a;->e(Lcom/mbridge/msdk/mbnative/controller/b$a;)I

    move-result v3

    if-gtz v3, :cond_9

    .line 885
    invoke-static {}, Lcom/mbridge/msdk/mbnative/controller/b;->h()Ljava/util/Map;

    move-result-object v3

    iget-object v4, p0, Lcom/mbridge/msdk/mbnative/controller/b$a$1;->b:Lcom/mbridge/msdk/mbnative/controller/b$a;

    iget-object v4, v4, Lcom/mbridge/msdk/mbnative/controller/b$a;->unitId:Ljava/lang/String;

    invoke-interface {v3, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v3

    .line 886
    iget-object v4, p0, Lcom/mbridge/msdk/mbnative/controller/b$a$1;->b:Lcom/mbridge/msdk/mbnative/controller/b$a;

    invoke-static {v4, v3}, Lcom/mbridge/msdk/mbnative/controller/b$a;->a(Lcom/mbridge/msdk/mbnative/controller/b$a;I)I

    .line 889
    :cond_9
    :goto_2
    iget-object v3, p0, Lcom/mbridge/msdk/mbnative/controller/b$a$1;->a:Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    iget-object v3, v3, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->ads:Ljava/util/ArrayList;

    invoke-virtual {v3}, Ljava/util/ArrayList;->size()I

    move-result v3

    iget-object v4, p0, Lcom/mbridge/msdk/mbnative/controller/b$a$1;->b:Lcom/mbridge/msdk/mbnative/controller/b$a;

    invoke-static {v4}, Lcom/mbridge/msdk/mbnative/controller/b$a;->e(Lcom/mbridge/msdk/mbnative/controller/b$a;)I

    move-result v4

    if-ge v3, v4, :cond_a

    .line 890
    iget-object v3, p0, Lcom/mbridge/msdk/mbnative/controller/b$a$1;->b:Lcom/mbridge/msdk/mbnative/controller/b$a;

    iget-object v4, p0, Lcom/mbridge/msdk/mbnative/controller/b$a$1;->a:Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    iget-object v4, v4, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->ads:Ljava/util/ArrayList;

    invoke-virtual {v4}, Ljava/util/ArrayList;->size()I

    move-result v4

    invoke-static {v3, v4}, Lcom/mbridge/msdk/mbnative/controller/b$a;->a(Lcom/mbridge/msdk/mbnative/controller/b$a;I)I

    .line 893
    :cond_a
    new-instance v3, Ljava/util/ArrayList;

    invoke-direct {v3}, Ljava/util/ArrayList;-><init>()V

    .line 894
    new-instance v4, Ljava/util/ArrayList;

    invoke-direct {v4}, Ljava/util/ArrayList;-><init>()V

    move v5, v2

    move v6, v5

    .line 898
    :goto_3
    iget-object v7, p0, Lcom/mbridge/msdk/mbnative/controller/b$a$1;->a:Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    iget-object v7, v7, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->ads:Ljava/util/ArrayList;

    invoke-virtual {v7}, Ljava/util/ArrayList;->size()I

    move-result v7

    if-ge v5, v7, :cond_12

    .line 899
    iget-object v7, p0, Lcom/mbridge/msdk/mbnative/controller/b$a$1;->a:Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    iget-object v7, v7, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->ads:Ljava/util/ArrayList;

    invoke-virtual {v7, v5}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 900
    iget-object v8, p0, Lcom/mbridge/msdk/mbnative/controller/b$a$1;->b:Lcom/mbridge/msdk/mbnative/controller/b$a;

    iget-object v8, v8, Lcom/mbridge/msdk/mbnative/controller/b$a;->unitId:Ljava/lang/String;

    invoke-virtual {v7, v8}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCampaignUnitId(Ljava/lang/String;)V

    .line 901
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v8

    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v8

    .line 902
    invoke-virtual {v7}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPackageName()Ljava/lang/String;

    move-result-object v9

    .line 901
    invoke-static {v8, v9}, Lcom/mbridge/msdk/foundation/tools/ae;->c(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v8

    if-eqz v8, :cond_b

    .line 904
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->e()Ljava/util/Set;

    move-result-object v9

    if-eqz v9, :cond_b

    .line 905
    new-instance v6, Lcom/mbridge/msdk/foundation/entity/i;

    invoke-virtual {v7}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v7}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPackageName()Ljava/lang/String;

    move-result-object v10

    invoke-direct {v6, v9, v10}, Lcom/mbridge/msdk/foundation/entity/i;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 906
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->e()Ljava/util/Set;

    move-result-object v9

    invoke-interface {v9, v6}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    move v6, v1

    .line 911
    :cond_b
    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v9

    iget-object v10, p0, Lcom/mbridge/msdk/mbnative/controller/b$a$1;->b:Lcom/mbridge/msdk/mbnative/controller/b$a;

    invoke-static {v10}, Lcom/mbridge/msdk/mbnative/controller/b$a;->e(Lcom/mbridge/msdk/mbnative/controller/b$a;)I

    move-result v10

    if-ge v9, v10, :cond_11

    .line 913
    invoke-virtual {v7}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getOfferType()I

    move-result v9

    const/16 v10, 0x63

    if-eq v9, v10, :cond_11

    .line 914
    invoke-static {v7}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result v9

    if-eqz v9, :cond_d

    if-eqz v8, :cond_c

    move v9, v1

    goto :goto_4

    :cond_c
    const/4 v9, 0x2

    .line 915
    :goto_4
    invoke-virtual {v7, v9}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setRtinsType(I)V

    .line 917
    :cond_d
    invoke-virtual {v7}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getWtick()I

    move-result v9

    if-eq v9, v1, :cond_10

    if-nez v8, :cond_e

    goto :goto_5

    .line 923
    :cond_e
    invoke-static {v7}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result v8

    if-eqz v8, :cond_f

    .line 924
    invoke-interface {v3, v7}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 925
    invoke-virtual {v7}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v8

    invoke-static {v8}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v8

    if-nez v8, :cond_11

    .line 926
    invoke-interface {v4, v7}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_6

    .line 929
    :cond_f
    iget-object v8, p0, Lcom/mbridge/msdk/mbnative/controller/b$a$1;->b:Lcom/mbridge/msdk/mbnative/controller/b$a;

    iget-object v8, v8, Lcom/mbridge/msdk/mbnative/controller/b$a;->unitId:Ljava/lang/String;

    sget v9, Lcom/mbridge/msdk/foundation/same/a;->E:I

    invoke-static {v8, v7, v9}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    goto :goto_6

    .line 918
    :cond_10
    :goto_5
    invoke-interface {v3, v7}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 919
    invoke-virtual {v7}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v8

    invoke-static {v8}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v8

    if-nez v8, :cond_11

    .line 920
    invoke-interface {v4, v7}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 935
    :cond_11
    :goto_6
    iget-object v8, p0, Lcom/mbridge/msdk/mbnative/controller/b$a$1;->b:Lcom/mbridge/msdk/mbnative/controller/b$a;

    iget-object v8, v8, Lcom/mbridge/msdk/mbnative/controller/b$a;->a:Lcom/mbridge/msdk/mbnative/controller/b;

    iget-object v9, p0, Lcom/mbridge/msdk/mbnative/controller/b$a$1;->b:Lcom/mbridge/msdk/mbnative/controller/b$a;

    iget-object v9, v9, Lcom/mbridge/msdk/mbnative/controller/b$a;->a:Lcom/mbridge/msdk/mbnative/controller/b;

    invoke-static {v9}, Lcom/mbridge/msdk/mbnative/controller/b;->b(Lcom/mbridge/msdk/mbnative/controller/b;)Z

    move-result v9

    invoke-virtual {v8, v9, v7}, Lcom/mbridge/msdk/mbnative/controller/b;->a(ZLcom/mbridge/msdk/out/Campaign;)V

    add-int/lit8 v5, v5, 0x1

    goto/16 :goto_3

    .line 939
    :cond_12
    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/b$a$1;->b:Lcom/mbridge/msdk/mbnative/controller/b$a;

    iget-object v5, v5, Lcom/mbridge/msdk/mbnative/controller/b$a;->a:Lcom/mbridge/msdk/mbnative/controller/b;

    iget-object v7, p0, Lcom/mbridge/msdk/mbnative/controller/b$a$1;->b:Lcom/mbridge/msdk/mbnative/controller/b$a;

    iget-object v7, v7, Lcom/mbridge/msdk/mbnative/controller/b$a;->unitId:Ljava/lang/String;

    invoke-static {v5, v4, v7}, Lcom/mbridge/msdk/mbnative/controller/b;->a(Lcom/mbridge/msdk/mbnative/controller/b;Ljava/util/List;Ljava/lang/String;)V

    if-eqz v6, :cond_13

    .line 941
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/controller/a;->h()V

    .line 944
    :cond_13
    iget-object v4, p0, Lcom/mbridge/msdk/mbnative/controller/b$a$1;->a:Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object v4

    invoke-virtual {v4, v2}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v4

    if-eqz v4, :cond_14

    .line 945
    iget-object v1, p0, Lcom/mbridge/msdk/mbnative/controller/b$a$1;->a:Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object v1

    invoke-virtual {v1, v2}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getType()I

    move-result v1

    .line 947
    :cond_14
    invoke-static {v1}, Lcom/mbridge/msdk/mbnative/a/f;->a(I)Lcom/mbridge/msdk/mbnative/a/b;

    move-result-object v1

    if-eqz v1, :cond_15

    .line 949
    iget-object v2, p0, Lcom/mbridge/msdk/mbnative/controller/b$a$1;->b:Lcom/mbridge/msdk/mbnative/controller/b$a;

    iget-object v2, v2, Lcom/mbridge/msdk/mbnative/controller/b$a;->unitId:Ljava/lang/String;

    invoke-virtual {v1, v2, v3}, Lcom/mbridge/msdk/mbnative/a/b;->a(Ljava/lang/Object;Ljava/lang/Object;)V

    .line 953
    :cond_15
    iget-object v1, p0, Lcom/mbridge/msdk/mbnative/controller/b$a$1;->b:Lcom/mbridge/msdk/mbnative/controller/b$a;

    invoke-static {v1}, Lcom/mbridge/msdk/mbnative/controller/b$a;->f(Lcom/mbridge/msdk/mbnative/controller/b$a;)I

    move-result v1

    iget-object v2, p0, Lcom/mbridge/msdk/mbnative/controller/b$a$1;->b:Lcom/mbridge/msdk/mbnative/controller/b$a;

    iget-object v2, v2, Lcom/mbridge/msdk/mbnative/controller/b$a;->unitId:Ljava/lang/String;

    invoke-static {v1, v2}, Lcom/mbridge/msdk/mbnative/controller/b;->a(ILjava/lang/String;)V

    .line 955
    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object v1

    if-eqz v1, :cond_16

    if-eqz v0, :cond_16

    .line 956
    invoke-static {}, Landroid/os/Looper;->loop()V

    :cond_16
    return-void
.end method
