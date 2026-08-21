.class public Lcom/mbridge/msdk/video/module/MBridgeContainerView;
.super Lcom/mbridge/msdk/video/module/MBridgeBaseView;
.source "MBridgeContainerView.java"

# interfaces
.implements Lcom/mbridge/msdk/video/js/e;
.implements Lcom/mbridge/msdk/video/js/g;


# instance fields
.field private A:I

.field private B:Z

.field private C:Z

.field private D:Z

.field private E:Z

.field private F:Z

.field private G:Z

.field private H:I

.field private I:Z

.field private J:Z

.field private K:I

.field private L:I

.field private M:I

.field private N:I

.field private O:I

.field private P:Ljava/lang/String;

.field private Q:Lcom/mbridge/msdk/video/js/factory/b;

.field private R:Lcom/mbridge/msdk/video/dynview/widget/MBridgeOrderCampView;

.field private S:Z

.field private T:Z

.field private U:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;"
        }
    .end annotation
.end field

.field private n:Lcom/mbridge/msdk/video/module/MBridgePlayableView;

.field private o:Lcom/mbridge/msdk/video/module/MBridgeClickCTAView;

.field private p:Lcom/mbridge/msdk/video/module/MBridgeClickMiniCardView;

.field private q:Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;

.field private r:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

.field private s:Lcom/mbridge/msdk/video/module/MBridgeVideoEndCoverView;

.field private t:Lcom/mbridge/msdk/video/module/MBridgeVastEndCardView;

.field private u:Lcom/mbridge/msdk/video/module/MBridgeLandingPageView;

.field private v:Lcom/mbridge/msdk/video/module/MBridgeAlertWebview;

.field private w:Ljava/lang/String;

.field private x:I

.field private y:I

.field private z:I


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    .line 146
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeBaseView;-><init>(Landroid/content/Context;)V

    const/4 p1, 0x1

    .line 85
    iput p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->y:I

    .line 88
    iput p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->z:I

    .line 91
    iput p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->A:I

    const/4 v0, 0x0

    .line 94
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->B:Z

    .line 96
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->C:Z

    .line 98
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->D:Z

    .line 100
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->E:Z

    .line 103
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->F:Z

    .line 105
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->G:Z

    .line 109
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->I:Z

    .line 111
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->J:Z

    .line 125
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->S:Z

    .line 126
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->T:Z

    .line 128
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    iput-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->U:Ljava/util/List;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 150
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/module/MBridgeBaseView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const/4 p1, 0x1

    .line 85
    iput p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->y:I

    .line 88
    iput p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->z:I

    .line 91
    iput p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->A:I

    const/4 p2, 0x0

    .line 94
    iput-boolean p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->B:Z

    .line 96
    iput-boolean p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->C:Z

    .line 98
    iput-boolean p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->D:Z

    .line 100
    iput-boolean p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->E:Z

    .line 103
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->F:Z

    .line 105
    iput-boolean p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->G:Z

    .line 109
    iput-boolean p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->I:Z

    .line 111
    iput-boolean p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->J:Z

    .line 125
    iput-boolean p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->S:Z

    .line 126
    iput-boolean p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->T:Z

    .line 128
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    iput-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->U:Ljava/util/List;

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/video/module/MBridgeContainerView;)Ljava/lang/String;
    .locals 0

    .line 48
    iget-object p0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->w:Ljava/lang/String;

    return-object p0
.end method

.method private a()V
    .locals 2

    .line 671
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_0

    .line 672
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result v0

    .line 673
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getendcard_url()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/ae;->j(Ljava/lang/String;)Z

    move-result v1

    if-eqz v0, :cond_0

    if-nez v1, :cond_0

    .line 675
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->e()V

    return-void

    .line 679
    :cond_0
    iget v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->y:I

    const/4 v1, 0x2

    if-ne v0, v1, :cond_1

    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->I:Z

    if-nez v0, :cond_1

    .line 680
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b()V

    goto :goto_0

    .line 682
    :cond_1
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->e()V

    :goto_0
    return-void
.end method

.method private a(Landroid/view/View;)V
    .locals 2

    if-eqz p1, :cond_0

    .line 650
    :try_start_0
    invoke-virtual {p1}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    if-eqz v0, :cond_0

    .line 652
    invoke-virtual {v0, p1}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 656
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MBridgeBaseView"

    invoke-static {v1, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method private a(Lcom/mbridge/msdk/video/js/factory/b;Ljava/lang/Integer;)V
    .locals 12

    .line 862
    iput-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->Q:Lcom/mbridge/msdk/video/js/factory/b;

    .line 863
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_10

    if-nez p2, :cond_0

    .line 865
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideo_end_type()I

    move-result p2

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    .line 867
    :cond_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->isLast()Z

    move-result v0

    if-nez v0, :cond_1

    .line 868
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->h()V

    .line 870
    :cond_1
    invoke-virtual {p2}, Ljava/lang/Integer;->intValue()I

    move-result p2

    const/4 v0, 0x1

    if-eq p2, v0, :cond_10

    const/4 v1, 0x3

    if-eq p2, v1, :cond_e

    const/4 v1, 0x4

    if-eq p2, v1, :cond_c

    const/4 v1, 0x5

    if-eq p2, v1, :cond_10

    .line 877
    iget p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->y:I

    const-string v2, "MBridgeBaseView"

    const/4 v3, 0x2

    if-ne p2, v3, :cond_5

    .line 879
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result p2

    .line 880
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getendcard_url()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/ae;->j(Ljava/lang/String;)Z

    move-result v0

    .line 881
    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v4, :cond_2

    if-eqz p2, :cond_2

    if-nez v0, :cond_2

    return-void

    .line 884
    :cond_2
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdSpaceT()I

    move-result p2

    if-eq p2, v3, :cond_10

    .line 885
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->r:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    if-nez p2, :cond_3

    .line 886
    new-instance p2, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->a:Landroid/content/Context;

    invoke-direct {p2, v0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;-><init>(Landroid/content/Context;)V

    iput-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->r:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    .line 888
    :cond_3
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getDynamicTempCode()I

    move-result p2

    if-ne p2, v1, :cond_4

    .line 889
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->e:Lcom/mbridge/msdk/video/module/a/a;

    if-eqz p2, :cond_4

    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->e:Lcom/mbridge/msdk/video/module/a/a;

    instance-of p2, p2, Lcom/mbridge/msdk/video/module/a/a/j;

    if-eqz p2, :cond_4

    .line 890
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->e:Lcom/mbridge/msdk/video/module/a/a;

    check-cast p2, Lcom/mbridge/msdk/video/module/a/a/j;

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2, v0}, Lcom/mbridge/msdk/video/module/a/a/j;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 893
    :cond_4
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->r:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2, v0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->setCampaign(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 895
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->r:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    iget v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->z:I

    invoke-virtual {p2, v0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->setCloseDelayShowTime(I)V

    .line 896
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->r:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    new-instance v0, Lcom/mbridge/msdk/video/module/a/a/h;

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->e:Lcom/mbridge/msdk/video/module/a/a;

    invoke-direct {v0, v1}, Lcom/mbridge/msdk/video/module/a/a/h;-><init>(Lcom/mbridge/msdk/video/module/a/a;)V

    invoke-virtual {p2, v0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->setNotifyListener(Lcom/mbridge/msdk/video/module/a/a;)V

    .line 897
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->r:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->w:Ljava/lang/String;

    invoke-virtual {p2, v0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->setUnitId(Ljava/lang/String;)V

    .line 898
    iget-object v3, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->r:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->P:Ljava/lang/String;

    iget v5, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->K:I

    iget v6, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->L:I

    iget v7, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->M:I

    iget v8, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->N:I

    invoke-virtual/range {v3 .. v8}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->setNotchValue(Ljava/lang/String;IIII)V

    .line 899
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->r:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->preLoadData(Lcom/mbridge/msdk/video/js/factory/b;)V

    const-string p1, "preload H5Endcard"

    .line 900
    invoke-static {v2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 902
    iget-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->D:Z

    if-nez p1, :cond_10

    .line 903
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "showTransparent = "

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->D:Z

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string p2, " addview"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 904
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->r:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->addView(Landroid/view/View;)V

    goto/16 :goto_4

    .line 909
    :cond_5
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    const/4 v1, 0x0

    if-eqz p2, :cond_6

    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object p2

    if-eqz p2, :cond_6

    .line 910
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object p2

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->c()I

    move-result p2

    move v10, p2

    goto :goto_0

    :cond_6
    move v10, v1

    .line 912
    :goto_0
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->q:Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;

    if-nez p2, :cond_9

    .line 913
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result p2

    if-eqz p2, :cond_7

    .line 914
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->i()V

    goto :goto_2

    .line 916
    :cond_7
    new-instance p2, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;

    iget-object v5, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->a:Landroid/content/Context;

    const/4 v6, 0x0

    const/4 v7, 0x0

    const/4 v8, -0x1

    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdSpaceT()I

    move-result v4

    if-ne v4, v3, :cond_8

    move v9, v0

    goto :goto_1

    :cond_8
    move v9, v1

    :goto_1
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getMof_tplid()I

    move-result v11

    move-object v4, p2

    invoke-direct/range {v4 .. v11}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;ZIZII)V

    iput-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->q:Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;

    .line 917
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2, v1}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->setCampaign(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 920
    :cond_9
    :goto_2
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->q:Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;

    invoke-virtual {p2}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->setLayout()V

    .line 921
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result p2

    if-eqz p2, :cond_b

    .line 922
    invoke-static {}, Lcom/mbridge/msdk/video/dynview/moffer/a;->a()Lcom/mbridge/msdk/video/dynview/moffer/a;

    move-result-object p2

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "_"

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2, v1}, Lcom/mbridge/msdk/video/dynview/moffer/a;->a(Ljava/lang/String;)Z

    move-result p2

    if-eqz p2, :cond_a

    .line 924
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/video/dynview/moffer/a;->a()Lcom/mbridge/msdk/video/dynview/moffer/a;

    move-result-object p2

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->q:Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    new-instance v3, Lcom/mbridge/msdk/video/module/a/a/h;

    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->e:Lcom/mbridge/msdk/video/module/a/a;

    invoke-direct {v3, v4}, Lcom/mbridge/msdk/video/module/a/a/h;-><init>(Lcom/mbridge/msdk/video/module/a/a;)V

    invoke-virtual {p2, v0, v1, v3}, Lcom/mbridge/msdk/video/dynview/moffer/a;->a(Landroid/view/ViewGroup;Ljava/lang/String;Lcom/mbridge/msdk/video/module/a/a;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_3

    :catch_0
    move-exception p2

    .line 926
    invoke-virtual {p2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-static {v2, p2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_3

    .line 930
    :cond_a
    :try_start_1
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getendcard_url()Ljava/lang/String;

    move-result-object p2

    const-string v1, "mof"

    invoke-static {p2, v1}, Lcom/mbridge/msdk/foundation/tools/ak;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    .line 931
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_b

    .line 932
    invoke-static {p2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p2

    if-ne p2, v0, :cond_b

    .line 934
    invoke-static {}, Lcom/mbridge/msdk/video/dynview/moffer/a;->a()Lcom/mbridge/msdk/video/dynview/moffer/a;

    move-result-object p2

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->q:Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;

    new-instance v4, Lcom/mbridge/msdk/video/module/a/a/h;

    iget-object v5, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->e:Lcom/mbridge/msdk/video/module/a/a;

    invoke-direct {v4, v5}, Lcom/mbridge/msdk/video/module/a/a/h;-><init>(Lcom/mbridge/msdk/video/module/a/a;)V

    invoke-virtual {p2, v0, v1, v4, v3}, Lcom/mbridge/msdk/video/dynview/moffer/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/view/ViewGroup;Lcom/mbridge/msdk/video/module/a/a;I)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_3

    :catch_1
    move-exception p2

    .line 938
    invoke-virtual {p2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-static {v2, p2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 942
    :cond_b
    :goto_3
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->q:Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->w:Ljava/lang/String;

    invoke-virtual {p2, v0}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->setUnitId(Ljava/lang/String;)V

    .line 943
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->q:Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;

    iget v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->z:I

    invoke-virtual {p2, v0}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->setCloseBtnDelay(I)V

    .line 944
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->q:Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;

    new-instance v0, Lcom/mbridge/msdk/video/module/a/a/h;

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->e:Lcom/mbridge/msdk/video/module/a/a;

    invoke-direct {v0, v1}, Lcom/mbridge/msdk/video/module/a/a/h;-><init>(Lcom/mbridge/msdk/video/module/a/a;)V

    invoke-virtual {p2, v0}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->setNotifyListener(Lcom/mbridge/msdk/video/module/a/a;)V

    .line 945
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->q:Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->preLoadData(Lcom/mbridge/msdk/video/js/factory/b;)V

    .line 946
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->q:Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;

    iget p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->K:I

    iget v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->L:I

    iget v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->M:I

    iget v2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->N:I

    invoke-virtual {p1, p2, v0, v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->setNotchPadding(IIII)V

    goto :goto_4

    .line 958
    :cond_c
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->u:Lcom/mbridge/msdk/video/module/MBridgeLandingPageView;

    if-nez p1, :cond_d

    .line 959
    new-instance p1, Lcom/mbridge/msdk/video/module/MBridgeLandingPageView;

    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->a:Landroid/content/Context;

    invoke-direct {p1, p2}, Lcom/mbridge/msdk/video/module/MBridgeLandingPageView;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->u:Lcom/mbridge/msdk/video/module/MBridgeLandingPageView;

    .line 961
    :cond_d
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->u:Lcom/mbridge/msdk/video/module/MBridgeLandingPageView;

    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/video/module/MBridgeLandingPageView;->setCampaign(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 962
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->u:Lcom/mbridge/msdk/video/module/MBridgeLandingPageView;

    new-instance p2, Lcom/mbridge/msdk/video/module/a/a/h;

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->e:Lcom/mbridge/msdk/video/module/a/a;

    invoke-direct {p2, v0}, Lcom/mbridge/msdk/video/module/a/a/h;-><init>(Lcom/mbridge/msdk/video/module/a/a;)V

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/video/module/MBridgeLandingPageView;->setNotifyListener(Lcom/mbridge/msdk/video/module/a/a;)V

    goto :goto_4

    .line 950
    :cond_e
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->t:Lcom/mbridge/msdk/video/module/MBridgeVastEndCardView;

    if-nez p2, :cond_f

    .line 951
    new-instance p2, Lcom/mbridge/msdk/video/module/MBridgeVastEndCardView;

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->a:Landroid/content/Context;

    invoke-direct {p2, v0}, Lcom/mbridge/msdk/video/module/MBridgeVastEndCardView;-><init>(Landroid/content/Context;)V

    iput-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->t:Lcom/mbridge/msdk/video/module/MBridgeVastEndCardView;

    .line 953
    :cond_f
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->t:Lcom/mbridge/msdk/video/module/MBridgeVastEndCardView;

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2, v0}, Lcom/mbridge/msdk/video/module/MBridgeVastEndCardView;->setCampaign(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 954
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->t:Lcom/mbridge/msdk/video/module/MBridgeVastEndCardView;

    new-instance v0, Lcom/mbridge/msdk/video/module/a/a/k;

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->e:Lcom/mbridge/msdk/video/module/a/a;

    invoke-direct {v0, v1}, Lcom/mbridge/msdk/video/module/a/a/k;-><init>(Lcom/mbridge/msdk/video/module/a/a;)V

    invoke-virtual {p2, v0}, Lcom/mbridge/msdk/video/module/MBridgeVastEndCardView;->setNotifyListener(Lcom/mbridge/msdk/video/module/a/a;)V

    .line 955
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->t:Lcom/mbridge/msdk/video/module/MBridgeVastEndCardView;

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/video/module/MBridgeVastEndCardView;->preLoadData(Lcom/mbridge/msdk/video/js/factory/b;)V

    :cond_10
    :goto_4
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/video/module/MBridgeContainerView;Lcom/mbridge/msdk/video/js/factory/b;Ljava/lang/Integer;)V
    .locals 0

    .line 48
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->a(Lcom/mbridge/msdk/video/js/factory/b;Ljava/lang/Integer;)V

    return-void
.end method

.method private b()V
    .locals 7

    .line 707
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->r:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    if-nez v0, :cond_0

    .line 708
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->Q:Lcom/mbridge/msdk/video/js/factory/b;

    const/4 v1, 0x2

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-direct {p0, v0, v1}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->a(Lcom/mbridge/msdk/video/js/factory/b;Ljava/lang/Integer;)V

    .line 710
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->r:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    const/4 v1, 0x1

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->isLoadSuccess()Z

    move-result v0

    if-eqz v0, :cond_2

    .line 711
    iput-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->I:Z

    .line 713
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->r:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->addView(Landroid/view/View;)V

    .line 714
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->webviewshow()V

    .line 715
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->onConfigurationChanged(Landroid/content/res/Configuration;)V

    .line 716
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->r:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->excuteTask()V

    .line 717
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->r:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->P:Ljava/lang/String;

    iget v3, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->K:I

    iget v4, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->L:I

    iget v5, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->M:I

    iget v6, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->N:I

    invoke-virtual/range {v1 .. v6}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->setNotchValue(Ljava/lang/String;IIII)V

    .line 719
    new-instance v0, Lcom/mbridge/msdk/foundation/entity/p;

    invoke-direct {v0}, Lcom/mbridge/msdk/foundation/entity/p;-><init>()V

    .line 720
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/entity/p;->k(Ljava/lang/String;)V

    .line 721
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/entity/p;->l(Ljava/lang/String;)V

    .line 722
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/entity/p;->n(Ljava/lang/String;)V

    .line 723
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isMraid()Z

    move-result v1

    if-eqz v1, :cond_1

    sget v1, Lcom/mbridge/msdk/foundation/entity/p;->a:I

    goto :goto_0

    :cond_1
    sget v1, Lcom/mbridge/msdk/foundation/entity/p;->b:I

    :goto_0
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/entity/p;->a(I)V

    .line 724
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->a:Landroid/content/Context;

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->w:Ljava/lang/String;

    invoke-static {v0, v1, v2}, Lcom/mbridge/msdk/foundation/same/report/c;->a(Lcom/mbridge/msdk/foundation/entity/p;Landroid/content/Context;Ljava/lang/String;)V

    goto :goto_1

    .line 726
    :cond_2
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->e()V

    .line 727
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->r:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    if-eqz v0, :cond_3

    const/4 v2, 0x3

    const-string v3, "timeout"

    .line 729
    invoke-virtual {v0, v3, v2}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->reportRenderResult(Ljava/lang/String;I)V

    .line 730
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->r:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->setError(Z)V

    .line 734
    :cond_3
    :goto_1
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->r:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    if-eqz v0, :cond_4

    .line 735
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->w:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->setUnitId(Ljava/lang/String;)V

    :cond_4
    return-void
.end method

.method private b(I)V
    .locals 2

    const/4 v0, -0x3

    if-eq p1, v0, :cond_3

    const/4 v0, -0x2

    if-eq p1, v0, :cond_1

    .line 1023
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->o:Lcom/mbridge/msdk/video/module/MBridgeClickCTAView;

    if-nez p1, :cond_0

    .line 1024
    new-instance p1, Lcom/mbridge/msdk/video/module/MBridgeClickCTAView;

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->a:Landroid/content/Context;

    invoke-direct {p1, v0}, Lcom/mbridge/msdk/video/module/MBridgeClickCTAView;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->o:Lcom/mbridge/msdk/video/module/MBridgeClickCTAView;

    .line 1026
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->o:Lcom/mbridge/msdk/video/module/MBridgeClickCTAView;

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/video/module/MBridgeClickCTAView;->setCampaign(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 1027
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->o:Lcom/mbridge/msdk/video/module/MBridgeClickCTAView;

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->w:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/video/module/MBridgeClickCTAView;->setUnitId(Ljava/lang/String;)V

    .line 1028
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->o:Lcom/mbridge/msdk/video/module/MBridgeClickCTAView;

    new-instance v0, Lcom/mbridge/msdk/video/module/a/a/h;

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->e:Lcom/mbridge/msdk/video/module/a/a;

    invoke-direct {v0, v1}, Lcom/mbridge/msdk/video/module/a/a/h;-><init>(Lcom/mbridge/msdk/video/module/a/a;)V

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/video/module/MBridgeClickCTAView;->setNotifyListener(Lcom/mbridge/msdk/video/module/a/a;)V

    .line 1029
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->o:Lcom/mbridge/msdk/video/module/MBridgeClickCTAView;

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->Q:Lcom/mbridge/msdk/video/js/factory/b;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/video/module/MBridgeClickCTAView;->preLoadData(Lcom/mbridge/msdk/video/js/factory/b;)V

    goto :goto_0

    .line 1008
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz p1, :cond_3

    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideo_end_type()I

    move-result p1

    const/4 v0, 0x2

    if-ne p1, v0, :cond_3

    .line 1009
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->p:Lcom/mbridge/msdk/video/module/MBridgeClickMiniCardView;

    if-nez p1, :cond_2

    .line 1010
    new-instance p1, Lcom/mbridge/msdk/video/module/MBridgeClickMiniCardView;

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->a:Landroid/content/Context;

    invoke-direct {p1, v0}, Lcom/mbridge/msdk/video/module/MBridgeClickMiniCardView;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->p:Lcom/mbridge/msdk/video/module/MBridgeClickMiniCardView;

    .line 1012
    :cond_2
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->p:Lcom/mbridge/msdk/video/module/MBridgeClickMiniCardView;

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/video/module/MBridgeClickMiniCardView;->setCampaign(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 1013
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->p:Lcom/mbridge/msdk/video/module/MBridgeClickMiniCardView;

    new-instance v0, Lcom/mbridge/msdk/video/module/a/a/f;

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->e:Lcom/mbridge/msdk/video/module/a/a;

    invoke-direct {v0, p1, v1}, Lcom/mbridge/msdk/video/module/a/a/f;-><init>(Lcom/mbridge/msdk/video/module/MBridgeClickMiniCardView;Lcom/mbridge/msdk/video/module/a/a;)V

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/video/module/MBridgeClickMiniCardView;->setNotifyListener(Lcom/mbridge/msdk/video/module/a/a;)V

    .line 1014
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->p:Lcom/mbridge/msdk/video/module/MBridgeClickMiniCardView;

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->Q:Lcom/mbridge/msdk/video/js/factory/b;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/video/module/MBridgeClickMiniCardView;->preLoadData(Lcom/mbridge/msdk/video/js/factory/b;)V

    .line 1015
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->setMatchParent()V

    .line 1016
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->f()V

    .line 1017
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->h()V

    :cond_3
    :goto_0
    return-void
.end method

.method private e()V
    .locals 3

    const/4 v0, 0x1

    .line 740
    iput v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->y:I

    .line 741
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->q:Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;

    if-nez v1, :cond_0

    .line 742
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->Q:Lcom/mbridge/msdk/video/js/factory/b;

    const/4 v2, 0x2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-direct {p0, v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->a(Lcom/mbridge/msdk/video/js/factory/b;Ljava/lang/Integer;)V

    .line 744
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->q:Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;

    invoke-virtual {p0, v1}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->addView(Landroid/view/View;)V

    .line 745
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object v1

    invoke-virtual {p0, v1}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->onConfigurationChanged(Landroid/content/res/Configuration;)V

    .line 746
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->q:Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->notifyShowListener()V

    .line 747
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->T:Z

    .line 748
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->bringToFront()V

    return-void
.end method

.method private f()V
    .locals 3

    .line 792
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->p:Lcom/mbridge/msdk/video/module/MBridgeClickMiniCardView;

    if-nez v0, :cond_0

    const/4 v0, -0x2

    .line 793
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b(I)V

    .line 795
    :cond_0
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {v0, v1, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v2, 0xd

    .line 796
    invoke-virtual {v0, v2, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 797
    iget-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->D:Z

    if-eqz v1, :cond_1

    iget-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->F:Z

    if-eqz v1, :cond_1

    const/4 v1, 0x0

    .line 798
    iput-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->F:Z

    const/4 v1, 0x1

    .line 799
    iput v1, v0, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    .line 800
    iput v1, v0, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    .line 802
    :cond_1
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->p:Lcom/mbridge/msdk/video/module/MBridgeClickMiniCardView;

    invoke-virtual {p0, v1, v0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method

.method private g()V
    .locals 2

    .line 843
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->v:Lcom/mbridge/msdk/video/module/MBridgeAlertWebview;

    if-nez v0, :cond_0

    .line 844
    new-instance v0, Lcom/mbridge/msdk/video/module/MBridgeAlertWebview;

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->a:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/mbridge/msdk/video/module/MBridgeAlertWebview;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->v:Lcom/mbridge/msdk/video/module/MBridgeAlertWebview;

    .line 845
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->w:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/module/MBridgeAlertWebview;->setUnitId(Ljava/lang/String;)V

    .line 846
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->v:Lcom/mbridge/msdk/video/module/MBridgeAlertWebview;

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/module/MBridgeAlertWebview;->setCampaign(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 848
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->v:Lcom/mbridge/msdk/video/module/MBridgeAlertWebview;

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->Q:Lcom/mbridge/msdk/video/js/factory/b;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/module/MBridgeAlertWebview;->preLoadData(Lcom/mbridge/msdk/video/js/factory/b;)V

    return-void
.end method

.method private h()V
    .locals 5

    const/4 v0, 0x0

    .line 985
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->C:Z

    .line 986
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->T:Z

    .line 987
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->getParent()Landroid/view/ViewParent;

    move-result-object v1

    check-cast v1, Landroid/view/ViewGroup;

    if-eqz v1, :cond_1

    move v2, v0

    .line 989
    :goto_0
    invoke-virtual {v1}, Landroid/view/ViewGroup;->getChildCount()I

    move-result v3

    if-ge v0, v3, :cond_1

    .line 990
    invoke-virtual {v1, v2}, Landroid/view/ViewGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v3

    .line 991
    instance-of v4, v3, Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    if-nez v4, :cond_0

    .line 992
    invoke-virtual {v1, v3}, Landroid/view/ViewGroup;->bringChildToFront(Landroid/view/View;)V

    goto :goto_1

    :cond_0
    add-int/lit8 v2, v2, 0x1

    :goto_1
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_1
    return-void
.end method

.method private i()V
    .locals 11

    .line 1104
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-nez v0, :cond_0

    return-void

    .line 1107
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getendcard_url()Ljava/lang/String;

    move-result-object v0

    .line 1109
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const/16 v2, 0x194

    if-nez v1, :cond_1

    :try_start_0
    const-string v1, "ecid"

    .line 1111
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/ak;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 1112
    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 1115
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MBridgeBaseView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    move v7, v2

    .line 1118
    new-instance v0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;

    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->a:Landroid/content/Context;

    const/4 v5, 0x0

    const/4 v6, 0x1

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdSpaceT()I

    move-result v1

    const/4 v2, 0x2

    if-ne v1, v2, :cond_2

    const/4 v1, 0x1

    goto :goto_1

    :cond_2
    const/4 v1, 0x0

    :goto_1
    move v8, v1

    iget v9, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->l:I

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getMof_tplid()I

    move-result v10

    move-object v3, v0

    invoke-direct/range {v3 .. v10}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;ZIZII)V

    iput-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->q:Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;

    .line 1120
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getDynamicTempCode()I

    move-result v0

    const/4 v1, 0x5

    if-ne v0, v1, :cond_4

    .line 1121
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->e:Lcom/mbridge/msdk/video/module/a/a;

    if-eqz v0, :cond_3

    .line 1122
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->e:Lcom/mbridge/msdk/video/module/a/a;

    instance-of v0, v0, Lcom/mbridge/msdk/video/module/a/a/j;

    if-eqz v0, :cond_3

    .line 1123
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->e:Lcom/mbridge/msdk/video/module/a/a;

    check-cast v0, Lcom/mbridge/msdk/video/module/a/a/j;

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/module/a/a/j;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 1126
    :cond_3
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->q:Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->setCampaign(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    goto :goto_2

    .line 1128
    :cond_4
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->q:Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->setCampaign(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    :goto_2
    return-void
.end method


# virtual methods
.method public addOrderViewData(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;)V"
        }
    .end annotation

    if-nez p1, :cond_0

    return-void

    .line 134
    :cond_0
    iput-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->U:Ljava/util/List;

    return-void
.end method

.method public addView(Landroid/view/View;)V
    .locals 1

    if-eqz p1, :cond_0

    .line 566
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->a(Landroid/view/View;)V

    .line 567
    invoke-super {p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeBaseView;->addView(Landroid/view/View;)V

    goto :goto_0

    :cond_0
    const-string p1, "MBridgeBaseView"

    const-string v0, "view is null"

    .line 569
    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V
    .locals 0

    if-eqz p1, :cond_0

    .line 576
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->a(Landroid/view/View;)V

    .line 577
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/module/MBridgeBaseView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    goto :goto_0

    :cond_0
    const-string p1, "MBridgeBaseView"

    const-string p2, "view is null"

    .line 579
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public canBackPress()Z
    .locals 2

    .line 585
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->q:Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 587
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->r:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    if-eqz v0, :cond_1

    .line 588
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->canBackPress()Z

    move-result v1

    goto :goto_0

    .line 589
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->u:Lcom/mbridge/msdk/video/module/MBridgeLandingPageView;

    if-eqz v0, :cond_2

    .line 590
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeLandingPageView;->canBackPress()Z

    move-result v1

    goto :goto_0

    .line 591
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->n:Lcom/mbridge/msdk/video/module/MBridgePlayableView;

    if-eqz v0, :cond_3

    .line 592
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgePlayableView;->canBackPress()Z

    move-result v1

    :cond_3
    :goto_0
    return v1
.end method

.method public configurationChanged(III)V
    .locals 0

    .line 532
    iget-object p3, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->p:Lcom/mbridge/msdk/video/module/MBridgeClickMiniCardView;

    if-eqz p3, :cond_0

    invoke-virtual {p3}, Lcom/mbridge/msdk/video/module/MBridgeClickMiniCardView;->getVisibility()I

    move-result p3

    if-nez p3, :cond_0

    .line 533
    iget-object p3, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->p:Lcom/mbridge/msdk/video/module/MBridgeClickMiniCardView;

    invoke-virtual {p3, p1, p2}, Lcom/mbridge/msdk/video/module/MBridgeClickMiniCardView;->resizeMiniCard(II)V

    :cond_0
    return-void
.end method

.method public defaultShow()V
    .locals 0

    .line 560
    invoke-super {p0}, Lcom/mbridge/msdk/video/module/MBridgeBaseView;->defaultShow()V

    return-void
.end method

.method public endCardShowing()Z
    .locals 1

    .line 431
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->B:Z

    return v0
.end method

.method public endcardIsPlayable()Z
    .locals 1

    .line 598
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->r:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->isPlayable()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public getH5EndCardView()Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;
    .locals 1

    .line 1187
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->r:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    if-nez v0, :cond_0

    .line 1188
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->n:Lcom/mbridge/msdk/video/module/MBridgePlayableView;

    :cond_0
    return-object v0
.end method

.method public getReSetCampaign()Lcom/mbridge/msdk/foundation/entity/CampaignEx;
    .locals 6

    .line 1079
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return-object v1

    .line 1082
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getendcard_url()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    return-object v1

    .line 1086
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->U:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    const/4 v2, 0x0

    move v3, v2

    :goto_0
    if-ge v3, v0, :cond_3

    .line 1088
    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->U:Ljava/util/List;

    invoke-interface {v4, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    if-eqz v4, :cond_2

    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->U:Ljava/util/List;

    invoke-interface {v4, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v4

    iget-object v5, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v5

    if-ne v4, v5, :cond_2

    add-int/lit8 v2, v3, -0x1

    goto :goto_1

    :cond_2
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_3
    :goto_1
    if-ltz v2, :cond_4

    if-ge v2, v0, :cond_4

    .line 1093
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->U:Ljava/util/List;

    invoke-interface {v0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_4

    .line 1094
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->U:Ljava/util/List;

    invoke-interface {v0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    return-object v0

    :cond_4
    return-object v1
.end method

.method public getShowingTransparent()Z
    .locals 1

    .line 606
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->D:Z

    return v0
.end method

.method public getUnitID()Ljava/lang/String;
    .locals 1

    .line 610
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->w:Ljava/lang/String;

    return-object v0
.end method

.method public getVideoInteractiveType()I
    .locals 1

    .line 636
    iget v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->x:I

    return v0
.end method

.method public getVideoSkipTime()I
    .locals 1

    .line 138
    iget v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->H:I

    return v0
.end method

.method public handlerPlayableException(Ljava/lang/String;)V
    .locals 1

    .line 486
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->r:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    if-eqz v0, :cond_0

    .line 487
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->handlerPlayableException(Ljava/lang/String;)V

    .line 488
    iget-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->I:Z

    if-eqz p1, :cond_1

    .line 492
    :cond_0
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->a()V

    :cond_1
    return-void
.end method

.method public hideAlertWebview()V
    .locals 3

    .line 1195
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->isLast()Z

    move-result v0

    if-nez v0, :cond_1

    .line 1197
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->S:Z

    if-eqz v0, :cond_0

    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->T:Z

    if-nez v0, :cond_0

    .line 1198
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->h()V

    const/4 v0, 0x0

    .line 1199
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->S:Z

    .line 1203
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->v:Lcom/mbridge/msdk/video/module/MBridgeAlertWebview;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeAlertWebview;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 1204
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->v:Lcom/mbridge/msdk/video/module/MBridgeAlertWebview;

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->removeView(Landroid/view/View;)V

    .line 1206
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->o:Lcom/mbridge/msdk/video/module/MBridgeClickCTAView;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeClickCTAView;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 8661
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->setWrapContent()V

    .line 8662
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    .line 8663
    instance-of v1, v0, Landroid/widget/RelativeLayout$LayoutParams;

    if-eqz v1, :cond_1

    .line 8664
    check-cast v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/16 v1, 0xc

    const/4 v2, -0x1

    .line 8665
    invoke-virtual {v0, v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    :cond_1
    return-void
.end method

.method public init(Landroid/content/Context;)V
    .locals 0

    const/4 p1, 0x0

    .line 155
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->setVisibility(I)V

    return-void
.end method

.method public install(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 2

    .line 544
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->e:Lcom/mbridge/msdk/video/module/a/a;

    const/16 v1, 0x69

    invoke-interface {v0, v1, p1}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V

    return-void
.end method

.method public isLast()Z
    .locals 2

    .line 976
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 978
    invoke-virtual {v0, p0}, Landroid/view/ViewGroup;->indexOfChild(Landroid/view/View;)I

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x1

    move v1, v0

    :cond_0
    return v1
.end method

.method public ivRewardAdsWithoutVideo(Ljava/lang/String;)V
    .locals 2

    .line 1215
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->e:Lcom/mbridge/msdk/video/module/a/a;

    const/16 v1, 0x67

    invoke-interface {v0, v1, p1}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V

    return-void
.end method

.method public miniCardLoaded()Z
    .locals 1

    .line 441
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->p:Lcom/mbridge/msdk/video/module/MBridgeClickMiniCardView;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeClickMiniCardView;->isLoadSuccess()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public miniCardShowing()Z
    .locals 1

    .line 436
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->C:Z

    return v0
.end method

.method public notifyCloseBtn(I)V
    .locals 1

    .line 456
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->n:Lcom/mbridge/msdk/video/module/MBridgePlayableView;

    if-eqz v0, :cond_0

    .line 457
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/video/module/MBridgePlayableView;->notifyCloseBtn(I)V

    .line 459
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->r:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    if-eqz v0, :cond_1

    .line 460
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->notifyCloseBtn(I)V

    :cond_1
    return-void
.end method

.method public onConfigurationChanged(Landroid/content/res/Configuration;)V
    .locals 5

    .line 160
    invoke-super {p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeBaseView;->onConfigurationChanged(Landroid/content/res/Configuration;)V

    const/16 v0, 0x8

    new-array v1, v0, [Lcom/mbridge/msdk/video/module/MBridgeBaseView;

    .line 161
    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->n:Lcom/mbridge/msdk/video/module/MBridgePlayableView;

    const/4 v3, 0x0

    aput-object v2, v1, v3

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->o:Lcom/mbridge/msdk/video/module/MBridgeClickCTAView;

    const/4 v4, 0x1

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->p:Lcom/mbridge/msdk/video/module/MBridgeClickMiniCardView;

    const/4 v4, 0x2

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->q:Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;

    const/4 v4, 0x3

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->r:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    const/4 v4, 0x4

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->t:Lcom/mbridge/msdk/video/module/MBridgeVastEndCardView;

    const/4 v4, 0x5

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->u:Lcom/mbridge/msdk/video/module/MBridgeLandingPageView;

    const/4 v4, 0x6

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->s:Lcom/mbridge/msdk/video/module/MBridgeVideoEndCoverView;

    const/4 v4, 0x7

    aput-object v2, v1, v4

    :goto_0
    if-ge v3, v0, :cond_2

    .line 2047
    aget-object v2, v1, v3

    if-eqz v2, :cond_0

    .line 2048
    instance-of v4, v2, Lcom/mbridge/msdk/video/module/MBridgeClickMiniCardView;

    if-eqz v4, :cond_0

    .line 2049
    invoke-virtual {v2, p1}, Lcom/mbridge/msdk/video/module/MBridgeBaseView;->onSelfConfigurationChanged(Landroid/content/res/Configuration;)V

    goto :goto_1

    :cond_0
    if-eqz v2, :cond_1

    .line 2051
    invoke-virtual {v2}, Lcom/mbridge/msdk/video/module/MBridgeBaseView;->getVisibility()I

    move-result v4

    if-nez v4, :cond_1

    invoke-virtual {v2}, Lcom/mbridge/msdk/video/module/MBridgeBaseView;->getParent()Landroid/view/ViewParent;

    move-result-object v4

    if-eqz v4, :cond_1

    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->isLast()Z

    move-result v4

    if-nez v4, :cond_1

    .line 2052
    invoke-virtual {v2, p1}, Lcom/mbridge/msdk/video/module/MBridgeBaseView;->onSelfConfigurationChanged(Landroid/content/res/Configuration;)V

    :cond_1
    :goto_1
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_2
    return-void
.end method

.method public onEndcardBackPress()V
    .locals 3

    .line 1153
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->q:Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;

    const-string v1, ""

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->t:Lcom/mbridge/msdk/video/module/MBridgeVastEndCardView;

    if-eqz v0, :cond_0

    goto :goto_0

    .line 1157
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->u:Lcom/mbridge/msdk/video/module/MBridgeLandingPageView;

    if-eqz v0, :cond_1

    .line 1158
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->e:Lcom/mbridge/msdk/video/module/a/a;

    const/16 v2, 0x67

    invoke-interface {v0, v2, v1}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V

    return-void

    .line 1161
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->r:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    if-eqz v0, :cond_2

    .line 1162
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->onBackPress()V

    :cond_2
    return-void

    .line 1154
    :cond_3
    :goto_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->e:Lcom/mbridge/msdk/video/module/a/a;

    const/16 v2, 0x68

    invoke-interface {v0, v2, v1}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V

    return-void
.end method

.method public onMiniEndcardBackPress()V
    .locals 3

    .line 1147
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->C:Z

    if-eqz v0, :cond_0

    .line 1148
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->e:Lcom/mbridge/msdk/video/module/a/a;

    const/16 v1, 0x6b

    const-string v2, ""

    invoke-interface {v0, v1, v2}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V

    :cond_0
    return-void
.end method

.method public onPlayableBackPress()V
    .locals 1

    .line 1141
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->n:Lcom/mbridge/msdk/video/module/MBridgePlayableView;

    if-eqz v0, :cond_0

    .line 1142
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgePlayableView;->onBackPress()V

    :cond_0
    return-void
.end method

.method public orientation(Landroid/content/res/Configuration;)V
    .locals 4

    const/4 p1, 0x4

    new-array v0, p1, [Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    .line 549
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->n:Lcom/mbridge/msdk/video/module/MBridgePlayableView;

    const/4 v2, 0x0

    aput-object v1, v0, v2

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->p:Lcom/mbridge/msdk/video/module/MBridgeClickMiniCardView;

    const/4 v3, 0x1

    aput-object v1, v0, v3

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->r:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    const/4 v3, 0x2

    aput-object v1, v0, v3

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->v:Lcom/mbridge/msdk/video/module/MBridgeAlertWebview;

    const/4 v3, 0x3

    aput-object v1, v0, v3

    :goto_0
    if-ge v2, p1, :cond_1

    .line 7067
    aget-object v1, v0, v2

    if-eqz v1, :cond_0

    .line 7068
    invoke-virtual {v1}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->getVisibility()I

    move-result v3

    if-nez v3, :cond_0

    .line 7069
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->getResources()Landroid/content/res/Resources;

    move-result-object v3

    invoke-virtual {v3}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->orientation(Landroid/content/res/Configuration;)V

    :cond_0
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_1
    return-void
.end method

.method public preLoadData(Lcom/mbridge/msdk/video/js/factory/b;)V
    .locals 4

    const-string v0, "MBridgeBaseView"

    .line 166
    iput-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->Q:Lcom/mbridge/msdk/video/js/factory/b;

    .line 168
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v1, :cond_4

    .line 170
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPlayable_ads_without_video()I

    move-result v1

    const/4 v2, 0x2

    if-ne v1, v2, :cond_1

    .line 2816
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->n:Lcom/mbridge/msdk/video/module/MBridgePlayableView;

    if-nez v0, :cond_0

    .line 2817
    new-instance v0, Lcom/mbridge/msdk/video/module/MBridgePlayableView;

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->a:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/mbridge/msdk/video/module/MBridgePlayableView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->n:Lcom/mbridge/msdk/video/module/MBridgePlayableView;

    .line 2819
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->n:Lcom/mbridge/msdk/video/module/MBridgePlayableView;

    iget v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->z:I

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/module/MBridgePlayableView;->setCloseDelayShowTime(I)V

    .line 2820
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->n:Lcom/mbridge/msdk/video/module/MBridgePlayableView;

    iget v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->A:I

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/module/MBridgePlayableView;->setPlayCloseBtnTm(I)V

    .line 2821
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->n:Lcom/mbridge/msdk/video/module/MBridgePlayableView;

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/module/MBridgePlayableView;->setCampaign(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 2822
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->n:Lcom/mbridge/msdk/video/module/MBridgePlayableView;

    new-instance v1, Lcom/mbridge/msdk/video/module/MBridgeContainerView$4;

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->e:Lcom/mbridge/msdk/video/module/a/a;

    invoke-direct {v1, p0, v2}, Lcom/mbridge/msdk/video/module/MBridgeContainerView$4;-><init>(Lcom/mbridge/msdk/video/module/MBridgeContainerView;Lcom/mbridge/msdk/video/module/a/a;)V

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/module/MBridgePlayableView;->setNotifyListener(Lcom/mbridge/msdk/video/module/a/a;)V

    .line 2839
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->n:Lcom/mbridge/msdk/video/module/MBridgePlayableView;

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/video/module/MBridgePlayableView;->preLoadData(Lcom/mbridge/msdk/video/js/factory/b;)V

    goto/16 :goto_1

    .line 173
    :cond_1
    iget v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->x:I

    invoke-direct {p0, v1}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b(I)V

    .line 175
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result v1

    if-eqz v1, :cond_2

    .line 177
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideo_end_type()I

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-direct {p0, p1, v1}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->a(Lcom/mbridge/msdk/video/js/factory/b;Ljava/lang/Integer;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    .line 179
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 180
    new-instance v1, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v3

    invoke-direct {v1, v3}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    new-instance v3, Lcom/mbridge/msdk/video/module/MBridgeContainerView$1;

    invoke-direct {v3, p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeContainerView$1;-><init>(Lcom/mbridge/msdk/video/module/MBridgeContainerView;Lcom/mbridge/msdk/video/js/factory/b;)V

    invoke-virtual {v1, v3}, Landroid/os/Handler;->postAtFrontOfQueue(Ljava/lang/Runnable;)Z

    .line 187
    :goto_0
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getendcard_url()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ae;->j(Ljava/lang/String;)Z

    move-result p1

    if-nez p1, :cond_3

    .line 190
    :try_start_1
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getendcard_url()Ljava/lang/String;

    move-result-object p1

    const-string v1, "mof"

    invoke-static {p1, v1}, Lcom/mbridge/msdk/foundation/tools/ak;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 191
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    .line 192
    invoke-static {p1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p1

    const/4 v1, 0x1

    if-ne p1, v1, :cond_3

    .line 194
    invoke-static {}, Lcom/mbridge/msdk/video/dynview/moffer/a;->a()Lcom/mbridge/msdk/video/dynview/moffer/a;

    move-result-object p1

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1, v1, v2}, Lcom/mbridge/msdk/video/dynview/moffer/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_1

    :catch_0
    move-exception p1

    .line 198
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 202
    :cond_2
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    new-instance v1, Lcom/mbridge/msdk/video/module/MBridgeContainerView$2;

    invoke-direct {v1, p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeContainerView$2;-><init>(Lcom/mbridge/msdk/video/module/MBridgeContainerView;Lcom/mbridge/msdk/video/js/factory/b;)V

    .line 207
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->getVideoSkipTime()I

    move-result p1

    int-to-long v2, p1

    .line 202
    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    .line 211
    :cond_3
    :goto_1
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->g()V

    :cond_4
    return-void
.end method

.method public readyStatus(I)V
    .locals 1

    .line 478
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->r:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    if-eqz v0, :cond_0

    .line 479
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->readyStatus(I)V

    :cond_0
    return-void
.end method

.method public release()V
    .locals 2

    .line 1167
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->r:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 1168
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->release()V

    .line 1169
    iput-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->r:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    .line 1171
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->n:Lcom/mbridge/msdk/video/module/MBridgePlayableView;

    if-eqz v0, :cond_1

    .line 1172
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgePlayableView;->release()V

    .line 1174
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->u:Lcom/mbridge/msdk/video/module/MBridgeLandingPageView;

    if-eqz v0, :cond_2

    .line 1175
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeLandingPageView;->release()V

    .line 1177
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->q:Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;

    if-eqz v0, :cond_3

    .line 1178
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->clearMoreOfferBitmap()V

    .line 1179
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->q:Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->release()V

    .line 1181
    :cond_3
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->e:Lcom/mbridge/msdk/video/module/a/a;

    if-eqz v0, :cond_4

    .line 1182
    iput-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->e:Lcom/mbridge/msdk/video/module/a/a;

    :cond_4
    return-void
.end method

.method public resizeMiniCard(III)V
    .locals 1

    .line 518
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->p:Lcom/mbridge/msdk/video/module/MBridgeClickMiniCardView;

    if-eqz v0, :cond_0

    .line 519
    invoke-virtual {v0, p1, p2}, Lcom/mbridge/msdk/video/module/MBridgeClickMiniCardView;->resizeMiniCard(II)V

    .line 520
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->p:Lcom/mbridge/msdk/video/module/MBridgeClickMiniCardView;

    invoke-virtual {p1, p3}, Lcom/mbridge/msdk/video/module/MBridgeClickMiniCardView;->setRadius(I)V

    .line 521
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->removeAllViews()V

    .line 522
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->setMatchParent()V

    const/4 p1, 0x1

    .line 523
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->T:Z

    .line 524
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->bringToFront()V

    .line 525
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->f()V

    :cond_0
    return-void
.end method

.method public setCloseDelayTime(I)V
    .locals 0

    .line 640
    iput p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->z:I

    return-void
.end method

.method public setEndscreenType(I)V
    .locals 0

    .line 632
    iput p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->y:I

    return-void
.end method

.method public setJSFactory(Lcom/mbridge/msdk/video/js/factory/b;)V
    .locals 0

    .line 122
    iput-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->Q:Lcom/mbridge/msdk/video/js/factory/b;

    return-void
.end method

.method public setMBridgeClickMiniCardViewTransparent()V
    .locals 2

    .line 1134
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->p:Lcom/mbridge/msdk/video/module/MBridgeClickMiniCardView;

    if-eqz v0, :cond_0

    .line 1135
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeClickMiniCardView;->setMBridgeClickMiniCardViewTransparent()V

    .line 1136
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->p:Lcom/mbridge/msdk/video/module/MBridgeClickMiniCardView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/module/MBridgeClickMiniCardView;->setMBridgeClickMiniCardViewClickable(Z)V

    :cond_0
    return-void
.end method

.method public setNotchPadding(IIIII)V
    .locals 10

    .line 1219
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "NOTCH ContainerView "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v1, 0x5

    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const/4 v3, 0x0

    aput-object v2, v1, v3

    invoke-static {p3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const/4 v4, 0x1

    aput-object v2, v1, v4

    invoke-static {p4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const/4 v4, 0x2

    aput-object v2, v1, v4

    invoke-static {p5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const/4 v4, 0x3

    aput-object v2, v1, v4

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const/4 v4, 0x4

    aput-object v2, v1, v4

    const-string v2, "%1s-%2s-%3s-%4s-%5s"

    invoke-static {v2, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MBridgeBaseView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1221
    iput p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->O:I

    .line 1222
    iput p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->K:I

    .line 1223
    iput p3, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->L:I

    .line 1224
    iput p4, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->M:I

    .line 1225
    iput p5, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->N:I

    .line 1227
    invoke-static {p1, p2, p3, p4, p5}, Lcom/mbridge/msdk/foundation/tools/m;->a(IIIII)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->P:Ljava/lang/String;

    .line 1229
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->q:Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;

    if-eqz p1, :cond_0

    .line 1230
    invoke-virtual {p1, p2, p3, p4, p5}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->setNotchPadding(IIII)V

    .line 1233
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->r:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    const-string v0, "oncutoutfetched"

    if-eqz p1, :cond_1

    iget-object p1, p1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->q:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz p1, :cond_1

    .line 1234
    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->r:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    iget-object v5, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->P:Ljava/lang/String;

    move v6, p2

    move v7, p3

    move v8, p4

    move v9, p5

    invoke-virtual/range {v4 .. v9}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->setNotchValue(Ljava/lang/String;IIII)V

    .line 1235
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p1

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->r:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    iget-object v1, v1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->q:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->P:Ljava/lang/String;

    invoke-virtual {v2}, Ljava/lang/String;->getBytes()[B

    move-result-object v2

    invoke-static {v2, v3}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v1, v0, v2}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    .line 1238
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->n:Lcom/mbridge/msdk/video/module/MBridgePlayableView;

    if-eqz p1, :cond_2

    iget-object p1, p1, Lcom/mbridge/msdk/video/module/MBridgePlayableView;->q:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz p1, :cond_2

    .line 1239
    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->n:Lcom/mbridge/msdk/video/module/MBridgePlayableView;

    iget-object v5, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->P:Ljava/lang/String;

    move v6, p2

    move v7, p3

    move v8, p4

    move v9, p5

    invoke-virtual/range {v4 .. v9}, Lcom/mbridge/msdk/video/module/MBridgePlayableView;->setNotchValue(Ljava/lang/String;IIII)V

    .line 1240
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p1

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->n:Lcom/mbridge/msdk/video/module/MBridgePlayableView;

    iget-object v1, v1, Lcom/mbridge/msdk/video/module/MBridgePlayableView;->q:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->P:Ljava/lang/String;

    invoke-virtual {v2}, Ljava/lang/String;->getBytes()[B

    move-result-object v2

    invoke-static {v2, v3}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v1, v0, v2}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    .line 1243
    :cond_2
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->R:Lcom/mbridge/msdk/video/dynview/widget/MBridgeOrderCampView;

    if-eqz p1, :cond_3

    .line 1244
    invoke-virtual {p1, p2, p3, p4, p5}, Lcom/mbridge/msdk/video/dynview/widget/MBridgeOrderCampView;->setNotchPadding(IIII)V

    :cond_3
    return-void
.end method

.method public setNotifyListener(Lcom/mbridge/msdk/video/module/a/a;)V
    .locals 6

    .line 554
    invoke-super {p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeBaseView;->setNotifyListener(Lcom/mbridge/msdk/video/module/a/a;)V

    const/16 v0, 0x8

    new-array v1, v0, [Lcom/mbridge/msdk/video/module/MBridgeBaseView;

    .line 555
    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->n:Lcom/mbridge/msdk/video/module/MBridgePlayableView;

    const/4 v3, 0x0

    aput-object v2, v1, v3

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->o:Lcom/mbridge/msdk/video/module/MBridgeClickCTAView;

    const/4 v4, 0x1

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->p:Lcom/mbridge/msdk/video/module/MBridgeClickMiniCardView;

    const/4 v4, 0x2

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->q:Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;

    const/4 v4, 0x3

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->r:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    const/4 v4, 0x4

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->t:Lcom/mbridge/msdk/video/module/MBridgeVastEndCardView;

    const/4 v4, 0x5

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->u:Lcom/mbridge/msdk/video/module/MBridgeLandingPageView;

    const/4 v4, 0x6

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->s:Lcom/mbridge/msdk/video/module/MBridgeVideoEndCoverView;

    const/4 v4, 0x7

    aput-object v2, v1, v4

    :goto_0
    if-ge v3, v0, :cond_2

    .line 8035
    aget-object v2, v1, v3

    if-eqz v2, :cond_1

    .line 8037
    instance-of v4, v2, Lcom/mbridge/msdk/video/module/MBridgeClickMiniCardView;

    if-eqz v4, :cond_0

    .line 8038
    new-instance v4, Lcom/mbridge/msdk/video/module/a/a/f;

    iget-object v5, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->p:Lcom/mbridge/msdk/video/module/MBridgeClickMiniCardView;

    invoke-direct {v4, v5, p1}, Lcom/mbridge/msdk/video/module/a/a/f;-><init>(Lcom/mbridge/msdk/video/module/MBridgeClickMiniCardView;Lcom/mbridge/msdk/video/module/a/a;)V

    invoke-virtual {v2, v4}, Lcom/mbridge/msdk/video/module/MBridgeBaseView;->setNotifyListener(Lcom/mbridge/msdk/video/module/a/a;)V

    goto :goto_1

    .line 8040
    :cond_0
    new-instance v4, Lcom/mbridge/msdk/video/module/a/a/h;

    invoke-direct {v4, p1}, Lcom/mbridge/msdk/video/module/a/a/h;-><init>(Lcom/mbridge/msdk/video/module/a/a;)V

    invoke-virtual {v2, v4}, Lcom/mbridge/msdk/video/module/MBridgeBaseView;->setNotifyListener(Lcom/mbridge/msdk/video/module/a/a;)V

    :cond_1
    :goto_1
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_2
    return-void
.end method

.method public setOnPause()V
    .locals 1

    .line 1255
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->q:Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;

    if-eqz v0, :cond_0

    .line 1256
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->setOnPause()V

    :cond_0
    return-void
.end method

.method public setOnResume()V
    .locals 1

    .line 1249
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->q:Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;

    if-eqz v0, :cond_0

    .line 1250
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->setOnResume()V

    :cond_0
    return-void
.end method

.method public setPlayCloseBtnTm(I)V
    .locals 0

    .line 644
    iput p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->A:I

    return-void
.end method

.method public setRewardStatus(Z)V
    .locals 0

    .line 1261
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->J:Z

    return-void
.end method

.method public setShowingTransparent(Z)V
    .locals 0

    .line 602
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->D:Z

    return-void
.end method

.method public setUnitID(Ljava/lang/String;)V
    .locals 0

    .line 614
    iput-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->w:Ljava/lang/String;

    return-void
.end method

.method public setVideoInteractiveType(I)V
    .locals 2

    .line 619
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 620
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {v0}, Lcom/mbridge/msdk/video/dynview/i/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)I

    move-result v0

    const/16 v1, 0x64

    if-ne v0, v1, :cond_0

    .line 622
    iput p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->x:I

    goto :goto_0

    .line 624
    :cond_0
    iput v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->x:I

    :goto_0
    return-void

    .line 628
    :cond_1
    iput p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->x:I

    return-void
.end method

.method public setVideoSkipTime(I)V
    .locals 0

    .line 142
    iput p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->H:I

    return-void
.end method

.method public showAlertWebView()Z
    .locals 4

    .line 240
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->v:Lcom/mbridge/msdk/video/module/MBridgeAlertWebview;

    const/4 v1, 0x0

    if-eqz v0, :cond_5

    .line 241
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeAlertWebview;->isLoadSuccess()Z

    move-result v0

    if-eqz v0, :cond_5

    .line 243
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->setMatchParent()V

    .line 4228
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    .line 4229
    invoke-virtual {v0}, Landroid/view/ViewGroup;->getChildCount()I

    move-result v2

    .line 4230
    invoke-virtual {v0, p0}, Landroid/view/ViewGroup;->indexOfChild(Landroid/view/View;)I

    move-result v0

    const/4 v3, 0x1

    sub-int/2addr v2, v3

    if-ne v0, v2, :cond_0

    move v0, v3

    goto :goto_0

    :cond_0
    move v0, v1

    :goto_0
    if-nez v0, :cond_1

    .line 244
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->T:Z

    if-nez v0, :cond_1

    .line 246
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->removeAllViews()V

    .line 247
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->bringToFront()V

    .line 248
    iput-boolean v3, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->S:Z

    .line 250
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->p:Lcom/mbridge/msdk/video/module/MBridgeClickMiniCardView;

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeClickMiniCardView;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-eqz v0, :cond_2

    return v1

    .line 4806
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->v:Lcom/mbridge/msdk/video/module/MBridgeAlertWebview;

    if-nez v0, :cond_3

    .line 4807
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->g()V

    .line 4809
    :cond_3
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->v:Lcom/mbridge/msdk/video/module/MBridgeAlertWebview;

    if-eqz v0, :cond_4

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeAlertWebview;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-eqz v0, :cond_4

    .line 4810
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->v:Lcom/mbridge/msdk/video/module/MBridgeAlertWebview;

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->removeView(Landroid/view/View;)V

    .line 4812
    :cond_4
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->v:Lcom/mbridge/msdk/video/module/MBridgeAlertWebview;

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->addView(Landroid/view/View;)V

    .line 255
    invoke-virtual {p0, v1}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->setBackgroundColor(I)V

    .line 256
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->v:Lcom/mbridge/msdk/video/module/MBridgeAlertWebview;

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeAlertWebview;->webviewshow()V

    return v3

    :cond_5
    return v1
.end method

.method public showEndcard(I)V
    .locals 4

    .line 349
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    const/4 v1, 0x1

    if-eqz v0, :cond_8

    const-string v0, ""

    if-eq p1, v1, :cond_7

    const/16 v2, 0x64

    if-eq p1, v2, :cond_5

    const/4 v2, 0x3

    if-eq p1, v2, :cond_3

    const/4 v2, 0x4

    if-eq p1, v2, :cond_1

    const/4 v2, 0x5

    if-eq p1, v2, :cond_0

    .line 383
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->removeAllViews()V

    .line 384
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->setMatchParent()V

    .line 385
    iput-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->T:Z

    .line 386
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->bringToFront()V

    .line 387
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->a()V

    .line 388
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->e:Lcom/mbridge/msdk/video/module/a/a;

    const/16 v2, 0x75

    invoke-interface {p1, v2, v0}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V

    goto/16 :goto_0

    .line 370
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->e:Lcom/mbridge/msdk/video/module/a/a;

    const/16 v2, 0x6a

    invoke-interface {p1, v2, v0}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V

    goto/16 :goto_0

    .line 362
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->e:Lcom/mbridge/msdk/video/module/a/a;

    const/16 v3, 0x71

    invoke-interface {p1, v3, v0}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V

    .line 363
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->removeAllViews()V

    .line 364
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->setMatchParent()V

    .line 6697
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->u:Lcom/mbridge/msdk/video/module/MBridgeLandingPageView;

    if-nez p1, :cond_2

    .line 6698
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->Q:Lcom/mbridge/msdk/video/js/factory/b;

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-direct {p0, p1, v0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->a(Lcom/mbridge/msdk/video/js/factory/b;Ljava/lang/Integer;)V

    .line 6701
    :cond_2
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->u:Lcom/mbridge/msdk/video/module/MBridgeLandingPageView;

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->w:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/video/module/MBridgeLandingPageView;->setUnitId(Ljava/lang/String;)V

    .line 6702
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->u:Lcom/mbridge/msdk/video/module/MBridgeLandingPageView;

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->Q:Lcom/mbridge/msdk/video/js/factory/b;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/video/module/MBridgeLandingPageView;->preLoadData(Lcom/mbridge/msdk/video/js/factory/b;)V

    .line 6703
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->u:Lcom/mbridge/msdk/video/module/MBridgeLandingPageView;

    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->addView(Landroid/view/View;)V

    .line 366
    iput-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->T:Z

    .line 367
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->bringToFront()V

    goto :goto_0

    .line 355
    :cond_3
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->removeAllViews()V

    .line 356
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->setMatchParent()V

    .line 6687
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->t:Lcom/mbridge/msdk/video/module/MBridgeVastEndCardView;

    if-nez p1, :cond_4

    .line 6688
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->Q:Lcom/mbridge/msdk/video/js/factory/b;

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-direct {p0, p1, v0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->a(Lcom/mbridge/msdk/video/js/factory/b;Ljava/lang/Integer;)V

    .line 6690
    :cond_4
    new-instance p1, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v0, -0x1

    invoke-direct {p1, v0, v0}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v2, 0xd

    .line 6691
    invoke-virtual {p1, v2, v0}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 6692
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->t:Lcom/mbridge/msdk/video/module/MBridgeVastEndCardView;

    invoke-virtual {p0, v0, p1}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 6693
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->t:Lcom/mbridge/msdk/video/module/MBridgeVastEndCardView;

    invoke-virtual {p1}, Lcom/mbridge/msdk/video/module/MBridgeVastEndCardView;->notifyShowListener()V

    .line 358
    iput-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->T:Z

    .line 359
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->bringToFront()V

    goto :goto_0

    .line 373
    :cond_5
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPlayable_ads_without_video()I

    move-result p1

    const/4 v0, 0x2

    if-ne p1, v0, :cond_6

    .line 374
    iput-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->E:Z

    .line 376
    :cond_6
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->n:Lcom/mbridge/msdk/video/module/MBridgePlayableView;

    invoke-direct {p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->a(Landroid/view/View;)V

    .line 377
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->setMatchParent()V

    .line 378
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->e()V

    const-string p1, "MBridgeBaseView"

    const-string v0, "showEndcard addNativeEndcard"

    .line 379
    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 352
    :cond_7
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->e:Lcom/mbridge/msdk/video/module/a/a;

    const/16 v2, 0x68

    invoke-interface {p1, v2, v0}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V

    .line 392
    :cond_8
    :goto_0
    iput-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->B:Z

    return-void
.end method

.method public showMiniCard(IIIII)V
    .locals 1

    .line 498
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->p:Lcom/mbridge/msdk/video/module/MBridgeClickMiniCardView;

    if-eqz v0, :cond_0

    .line 499
    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/mbridge/msdk/video/module/MBridgeClickMiniCardView;->setMiniCardLocation(IIII)V

    .line 500
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->p:Lcom/mbridge/msdk/video/module/MBridgeClickMiniCardView;

    invoke-virtual {p1, p5}, Lcom/mbridge/msdk/video/module/MBridgeClickMiniCardView;->setRadius(I)V

    .line 501
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->p:Lcom/mbridge/msdk/video/module/MBridgeClickMiniCardView;

    const/16 p2, 0x8

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/video/module/MBridgeClickMiniCardView;->setCloseVisible(I)V

    .line 502
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->p:Lcom/mbridge/msdk/video/module/MBridgeClickMiniCardView;

    const/4 p2, 0x0

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/video/module/MBridgeClickMiniCardView;->setClickable(Z)V

    .line 503
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->removeAllViews()V

    .line 504
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->setMatchParent()V

    const/4 p1, 0x1

    .line 505
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->T:Z

    .line 506
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->bringToFront()V

    .line 507
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->f()V

    .line 508
    iget-boolean p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->G:Z

    if-nez p2, :cond_0

    .line 509
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->G:Z

    .line 510
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->e:Lcom/mbridge/msdk/video/module/a/a;

    const/16 p2, 0x6d

    const-string p3, ""

    invoke-interface {p1, p2, p3}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V

    .line 511
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->e:Lcom/mbridge/msdk/video/module/a/a;

    const/16 p2, 0x75

    invoke-interface {p1, p2, p3}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V

    :cond_0
    return-void
.end method

.method public showOrderCampView()V
    .locals 5

    .line 402
    new-instance v0, Lcom/mbridge/msdk/video/dynview/widget/MBridgeOrderCampView;

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->a:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/mbridge/msdk/video/dynview/widget/MBridgeOrderCampView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->R:Lcom/mbridge/msdk/video/dynview/widget/MBridgeOrderCampView;

    .line 403
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->U:Ljava/util/List;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/dynview/widget/MBridgeOrderCampView;->setCampaignExes(Ljava/util/List;)V

    .line 404
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->e:Lcom/mbridge/msdk/video/module/a/a;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->e:Lcom/mbridge/msdk/video/module/a/a;

    instance-of v0, v0, Lcom/mbridge/msdk/video/module/a/a/j;

    if-eqz v0, :cond_0

    .line 405
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->e:Lcom/mbridge/msdk/video/module/a/a;

    check-cast v0, Lcom/mbridge/msdk/video/module/a/a/j;

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->U:Ljava/util/List;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/module/a/a/j;->a(Ljava/util/List;)V

    .line 407
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->R:Lcom/mbridge/msdk/video/dynview/widget/MBridgeOrderCampView;

    new-instance v1, Lcom/mbridge/msdk/video/module/a/a/h;

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->e:Lcom/mbridge/msdk/video/module/a/a;

    invoke-direct {v1, v2}, Lcom/mbridge/msdk/video/module/a/a/h;-><init>(Lcom/mbridge/msdk/video/module/a/a;)V

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/dynview/widget/MBridgeOrderCampView;->setNotifyListener(Lcom/mbridge/msdk/video/module/a/a;)V

    .line 408
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->R:Lcom/mbridge/msdk/video/dynview/widget/MBridgeOrderCampView;

    iget-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->J:Z

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/dynview/widget/MBridgeOrderCampView;->setRewarded(Z)V

    .line 409
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->R:Lcom/mbridge/msdk/video/dynview/widget/MBridgeOrderCampView;

    iget v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->K:I

    iget v2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->L:I

    iget v3, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->M:I

    iget v4, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->N:I

    invoke-virtual {v0, v1, v2, v3, v4}, Lcom/mbridge/msdk/video/dynview/widget/MBridgeOrderCampView;->setNotchPadding(IIII)V

    .line 410
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->R:Lcom/mbridge/msdk/video/dynview/widget/MBridgeOrderCampView;

    new-instance v1, Lcom/mbridge/msdk/video/module/MBridgeContainerView$3;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView$3;-><init>(Lcom/mbridge/msdk/video/module/MBridgeContainerView;)V

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/dynview/widget/MBridgeOrderCampView;->setCampOrderViewBuildCallback(Lcom/mbridge/msdk/video/dynview/e/b;)V

    .line 426
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->R:Lcom/mbridge/msdk/video/dynview/widget/MBridgeOrderCampView;

    invoke-virtual {v0, p0}, Lcom/mbridge/msdk/video/dynview/widget/MBridgeOrderCampView;->createView(Landroid/view/ViewGroup;)V

    return-void
.end method

.method public showPlayableView()V
    .locals 8

    .line 217
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_3

    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->E:Z

    if-nez v0, :cond_3

    .line 219
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->removeAllViews()V

    .line 220
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->setMatchParent()V

    .line 3762
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->n:Lcom/mbridge/msdk/video/module/MBridgePlayableView;

    if-nez v0, :cond_0

    .line 3763
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->Q:Lcom/mbridge/msdk/video/js/factory/b;

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->preLoadData(Lcom/mbridge/msdk/video/js/factory/b;)V

    .line 3766
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->n:Lcom/mbridge/msdk/video/module/MBridgePlayableView;

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->addView(Landroid/view/View;)V

    .line 3767
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->n:Lcom/mbridge/msdk/video/module/MBridgePlayableView;

    if-eqz v0, :cond_2

    .line 3768
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->w:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/module/MBridgePlayableView;->setUnitId(Ljava/lang/String;)V

    .line 3769
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isMraid()Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPlayable_ads_without_video()I

    move-result v0

    const/4 v1, 0x2

    if-ne v0, v1, :cond_1

    .line 3771
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->n:Lcom/mbridge/msdk/video/module/MBridgePlayableView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/module/MBridgePlayableView;->setCloseVisible(I)V

    .line 3773
    :cond_1
    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->n:Lcom/mbridge/msdk/video/module/MBridgePlayableView;

    iget-object v3, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->P:Ljava/lang/String;

    iget v4, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->K:I

    iget v5, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->L:I

    iget v6, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->M:I

    iget v7, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->N:I

    invoke-virtual/range {v2 .. v7}, Lcom/mbridge/msdk/video/module/MBridgePlayableView;->setNotchValue(Ljava/lang/String;IIII)V

    :cond_2
    const/4 v0, 0x1

    .line 222
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->T:Z

    .line 223
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->bringToFront()V

    :cond_3
    return-void
.end method

.method public showVideoClickView(I)V
    .locals 3

    .line 267
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_12

    const/4 v0, -0x1

    if-eq p1, v0, :cond_11

    const/4 v1, 0x1

    if-eq p1, v1, :cond_9

    const/4 v0, 0x2

    if-eq p1, v0, :cond_0

    goto/16 :goto_3

    .line 300
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->o:Lcom/mbridge/msdk/video/module/MBridgeClickCTAView;

    if-eqz p1, :cond_1

    invoke-virtual {p1}, Lcom/mbridge/msdk/video/module/MBridgeClickCTAView;->getParent()Landroid/view/ViewParent;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 301
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->o:Lcom/mbridge/msdk/video/module/MBridgeClickCTAView;

    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->removeView(Landroid/view/View;)V

    .line 303
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->v:Lcom/mbridge/msdk/video/module/MBridgeAlertWebview;

    if-eqz p1, :cond_2

    invoke-virtual {p1}, Lcom/mbridge/msdk/video/module/MBridgeAlertWebview;->getParent()Landroid/view/ViewParent;

    move-result-object p1

    if-eqz p1, :cond_2

    return-void

    .line 306
    :cond_2
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->p:Lcom/mbridge/msdk/video/module/MBridgeClickMiniCardView;

    if-eqz p1, :cond_3

    invoke-virtual {p1}, Lcom/mbridge/msdk/video/module/MBridgeClickMiniCardView;->getParent()Landroid/view/ViewParent;

    move-result-object p1

    if-nez p1, :cond_4

    .line 308
    :cond_3
    :try_start_0
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz p1, :cond_4

    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPlayable_ads_without_video()I

    move-result p1

    if-ne p1, v1, :cond_4

    .line 309
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->setMatchParent()V

    .line 310
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->f()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 313
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 317
    :cond_4
    :goto_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->miniCardLoaded()Z

    move-result p1

    if-eqz p1, :cond_8

    .line 318
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->r:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    if-eqz p1, :cond_5

    invoke-virtual {p1}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->getParent()Landroid/view/ViewParent;

    move-result-object p1

    if-eqz p1, :cond_5

    .line 319
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->r:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->removeView(Landroid/view/View;)V

    .line 322
    :cond_5
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->e:Lcom/mbridge/msdk/video/module/a/a;

    const/16 v0, 0x70

    const-string v2, ""

    invoke-interface {p1, v0, v2}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V

    .line 323
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz p1, :cond_6

    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isHasReportAdTrackPause()Z

    move-result p1

    if-nez p1, :cond_6

    .line 324
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setHasReportAdTrackPause(Z)V

    .line 325
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->a:Landroid/content/Context;

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {p1, v0}, Lcom/mbridge/msdk/video/module/b/b;->f(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 327
    :cond_6
    iget-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->D:Z

    if-eqz p1, :cond_7

    .line 328
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->e:Lcom/mbridge/msdk/video/module/a/a;

    const/16 v0, 0x73

    invoke-interface {p1, v0, v2}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V

    goto :goto_1

    .line 330
    :cond_7
    iput-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->T:Z

    .line 331
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->bringToFront()V

    .line 332
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->webviewshow()V

    .line 334
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    invoke-virtual {p1}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->onConfigurationChanged(Landroid/content/res/Configuration;)V

    .line 337
    :goto_1
    iput-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->C:Z

    goto/16 :goto_3

    .line 339
    :cond_8
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->h()V

    goto/16 :goto_3

    .line 275
    :cond_9
    iget-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->B:Z

    if-eqz p1, :cond_a

    return-void

    .line 278
    :cond_a
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->r:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    if-eqz p1, :cond_b

    invoke-virtual {p1}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->getParent()Landroid/view/ViewParent;

    move-result-object p1

    if-eqz p1, :cond_b

    .line 279
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->r:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->removeView(Landroid/view/View;)V

    .line 281
    :cond_b
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->p:Lcom/mbridge/msdk/video/module/MBridgeClickMiniCardView;

    if-eqz p1, :cond_c

    invoke-virtual {p1}, Lcom/mbridge/msdk/video/module/MBridgeClickMiniCardView;->getParent()Landroid/view/ViewParent;

    move-result-object p1

    if-eqz p1, :cond_c

    .line 282
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->p:Lcom/mbridge/msdk/video/module/MBridgeClickMiniCardView;

    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->removeView(Landroid/view/View;)V

    .line 284
    :cond_c
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->o:Lcom/mbridge/msdk/video/module/MBridgeClickCTAView;

    if-eqz p1, :cond_d

    invoke-virtual {p1}, Lcom/mbridge/msdk/video/module/MBridgeClickCTAView;->getParent()Landroid/view/ViewParent;

    move-result-object p1

    if-nez p1, :cond_10

    .line 286
    :cond_d
    :try_start_1
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz p1, :cond_10

    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPlayable_ads_without_video()I

    move-result p1

    if-ne p1, v1, :cond_10

    .line 287
    iput-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->T:Z

    .line 5778
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->o:Lcom/mbridge/msdk/video/module/MBridgeClickCTAView;

    if-nez p1, :cond_e

    .line 5779
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b(I)V

    .line 5781
    :cond_e
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->o:Lcom/mbridge/msdk/video/module/MBridgeClickCTAView;

    if-eqz p1, :cond_10

    .line 5782
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz p1, :cond_f

    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result p1

    if-eqz p1, :cond_f

    goto :goto_2

    .line 5785
    :cond_f
    new-instance p1, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v1, -0x2

    invoke-direct {p1, v1, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v1, 0xc

    .line 5786
    invoke-virtual {p1, v1, v0}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 5787
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->o:Lcom/mbridge/msdk/video/module/MBridgeClickCTAView;

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1, p1}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->addView(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_2

    :catch_1
    move-exception p1

    .line 291
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 295
    :cond_10
    :goto_2
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->isLast()Z

    move-result p1

    if-eqz p1, :cond_12

    .line 296
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->bringToFront()V

    goto :goto_3

    .line 270
    :cond_11
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->isLast()Z

    move-result p1

    if-nez p1, :cond_12

    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->endCardShowing()Z

    move-result p1

    if-nez p1, :cond_12

    .line 271
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->h()V

    :cond_12
    :goto_3
    return-void
.end method

.method public showVideoEndCover()V
    .locals 4

    .line 396
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->removeAllViews()V

    .line 397
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->setMatchParent()V

    .line 6752
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->s:Lcom/mbridge/msdk/video/module/MBridgeVideoEndCoverView;

    if-nez v0, :cond_0

    .line 6753
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->Q:Lcom/mbridge/msdk/video/js/factory/b;

    .line 6852
    iput-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->Q:Lcom/mbridge/msdk/video/js/factory/b;

    if-nez v0, :cond_0

    .line 6854
    new-instance v0, Lcom/mbridge/msdk/video/module/MBridgeVideoEndCoverView;

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->a:Landroid/content/Context;

    invoke-direct {v0, v2}, Lcom/mbridge/msdk/video/module/MBridgeVideoEndCoverView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->s:Lcom/mbridge/msdk/video/module/MBridgeVideoEndCoverView;

    .line 6855
    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/video/module/MBridgeVideoEndCoverView;->setCampaign(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 6856
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->s:Lcom/mbridge/msdk/video/module/MBridgeVideoEndCoverView;

    new-instance v2, Lcom/mbridge/msdk/video/module/a/a/h;

    iget-object v3, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->e:Lcom/mbridge/msdk/video/module/a/a;

    invoke-direct {v2, v3}, Lcom/mbridge/msdk/video/module/a/a/h;-><init>(Lcom/mbridge/msdk/video/module/a/a;)V

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/video/module/MBridgeVideoEndCoverView;->setNotifyListener(Lcom/mbridge/msdk/video/module/a/a;)V

    .line 6857
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->s:Lcom/mbridge/msdk/video/module/MBridgeVideoEndCoverView;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/module/MBridgeVideoEndCoverView;->preLoadData(Lcom/mbridge/msdk/video/js/factory/b;)V

    .line 6755
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->s:Lcom/mbridge/msdk/video/module/MBridgeVideoEndCoverView;

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->addView(Landroid/view/View;)V

    .line 6756
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->onConfigurationChanged(Landroid/content/res/Configuration;)V

    const/4 v0, 0x1

    .line 6757
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->T:Z

    .line 6758
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->bringToFront()V

    return-void
.end method

.method public toggleCloseBtn(I)V
    .locals 1

    .line 446
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->n:Lcom/mbridge/msdk/video/module/MBridgePlayableView;

    if-eqz v0, :cond_0

    .line 447
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/video/module/MBridgePlayableView;->toggleCloseBtn(I)V

    .line 449
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->r:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    if-eqz v0, :cond_1

    .line 450
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->toggleCloseBtn(I)V

    :cond_1
    return-void
.end method

.method public triggerCloseBtn(Ljava/lang/String;)V
    .locals 2

    .line 470
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz p1, :cond_0

    .line 471
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->e:Lcom/mbridge/msdk/video/module/a/a;

    const/16 v0, 0x7a

    const-string v1, ""

    invoke-interface {p1, v0, v1}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V

    .line 472
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->e:Lcom/mbridge/msdk/video/module/a/a;

    const/16 v0, 0x68

    invoke-interface {p1, v0, v1}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V

    :cond_0
    return-void
.end method

.method public webviewshow()V
    .locals 5

    const/4 v0, 0x4

    new-array v1, v0, [Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    .line 539
    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->n:Lcom/mbridge/msdk/video/module/MBridgePlayableView;

    const/4 v3, 0x0

    aput-object v2, v1, v3

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->p:Lcom/mbridge/msdk/video/module/MBridgeClickMiniCardView;

    const/4 v4, 0x1

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->r:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    const/4 v4, 0x2

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->v:Lcom/mbridge/msdk/video/module/MBridgeAlertWebview;

    const/4 v4, 0x3

    aput-object v2, v1, v4

    :goto_0
    if-ge v3, v0, :cond_1

    .line 7059
    aget-object v2, v1, v3

    if-eqz v2, :cond_0

    .line 7060
    invoke-virtual {v2}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->getVisibility()I

    move-result v4

    if-nez v4, :cond_0

    invoke-virtual {v2}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->getParent()Landroid/view/ViewParent;

    move-result-object v4

    if-eqz v4, :cond_0

    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->isLast()Z

    move-result v4

    if-nez v4, :cond_0

    .line 7061
    invoke-virtual {v2}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->webviewshow()V

    :cond_0
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_1
    return-void
.end method
