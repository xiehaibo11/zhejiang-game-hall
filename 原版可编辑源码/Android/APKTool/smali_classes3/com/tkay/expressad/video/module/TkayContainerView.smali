.class public Lcom/tkay/expressad/video/module/TkayContainerView;
.super Lcom/tkay/expressad/video/module/TkayBaseView;

# interfaces
.implements Lcom/tkay/expressad/video/signal/e;
.implements Lcom/tkay/expressad/video/signal/h;


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

.field private Q:Lcom/tkay/expressad/video/signal/factory/b;

.field private R:Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;

.field private S:Z

.field private T:Z

.field private U:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;"
        }
    .end annotation
.end field

.field private n:Lcom/tkay/expressad/video/module/TkayPlayableView;

.field private o:Lcom/tkay/expressad/video/module/TkayClickCTAView;

.field private p:Lcom/tkay/expressad/video/module/TkayClickMiniCardView;

.field private q:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

.field private r:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

.field private s:Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;

.field private t:Lcom/tkay/expressad/video/module/TkayVastEndCardView;

.field private u:Lcom/tkay/expressad/video/module/TkayLandingPageView;

.field private v:Lcom/tkay/expressad/video/module/TkayAlertWebview;

.field private w:Ljava/lang/String;

.field private x:I

.field private y:I

.field private z:I


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    .line 168
    invoke-direct {p0, p1}, Lcom/tkay/expressad/video/module/TkayBaseView;-><init>(Landroid/content/Context;)V

    const/4 p1, 0x1

    .line 100
    iput p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->y:I

    .line 105
    iput p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->z:I

    .line 110
    iput p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->A:I

    const/4 v0, 0x0

    .line 115
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->B:Z

    .line 117
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->C:Z

    .line 119
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->D:Z

    .line 121
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->E:Z

    .line 126
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->F:Z

    .line 128
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->G:Z

    .line 132
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->I:Z

    .line 134
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->J:Z

    .line 147
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->S:Z

    .line 148
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->T:Z

    .line 150
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->U:Ljava/util/List;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 172
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/video/module/TkayBaseView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const/4 p1, 0x1

    .line 100
    iput p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->y:I

    .line 105
    iput p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->z:I

    .line 110
    iput p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->A:I

    const/4 p2, 0x0

    .line 115
    iput-boolean p2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->B:Z

    .line 117
    iput-boolean p2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->C:Z

    .line 119
    iput-boolean p2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->D:Z

    .line 121
    iput-boolean p2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->E:Z

    .line 126
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->F:Z

    .line 128
    iput-boolean p2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->G:Z

    .line 132
    iput-boolean p2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->I:Z

    .line 134
    iput-boolean p2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->J:Z

    .line 147
    iput-boolean p2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->S:Z

    .line 148
    iput-boolean p2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->T:Z

    .line 150
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->U:Ljava/util/List;

    return-void
.end method

.method private varargs a(Landroid/content/res/Configuration;[Lcom/tkay/expressad/video/module/TkayBaseView;)V
    .locals 3

    const/4 v0, 0x0

    :goto_0
    const/16 v1, 0x8

    if-ge v0, v1, :cond_2

    .line 1060
    aget-object v1, p2, v0

    if-eqz v1, :cond_0

    .line 1061
    instance-of v2, v1, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;

    if-eqz v2, :cond_0

    .line 1062
    invoke-virtual {v1, p1}, Lcom/tkay/expressad/video/module/TkayBaseView;->onSelfConfigurationChanged(Landroid/content/res/Configuration;)V

    goto :goto_1

    :cond_0
    if-eqz v1, :cond_1

    .line 1064
    invoke-virtual {v1}, Lcom/tkay/expressad/video/module/TkayBaseView;->getVisibility()I

    move-result v2

    if-nez v2, :cond_1

    invoke-virtual {v1}, Lcom/tkay/expressad/video/module/TkayBaseView;->getParent()Landroid/view/ViewParent;

    move-result-object v2

    if-eqz v2, :cond_1

    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->isLast()Z

    move-result v2

    if-nez v2, :cond_1

    .line 1065
    invoke-virtual {v1, p1}, Lcom/tkay/expressad/video/module/TkayBaseView;->onSelfConfigurationChanged(Landroid/content/res/Configuration;)V

    :cond_1
    :goto_1
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_2
    return-void
.end method

.method private static a(Landroid/view/View;)V
    .locals 1

    if-eqz p0, :cond_0

    .line 679
    :try_start_0
    invoke-virtual {p0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    if-eqz v0, :cond_0

    .line 681
    invoke-virtual {v0, p0}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    .line 685
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    :cond_0
    :goto_0
    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/video/module/TkayContainerView;Lcom/tkay/expressad/video/signal/factory/b;Ljava/lang/Integer;)V
    .locals 0

    .line 41
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/video/module/TkayContainerView;->a(Lcom/tkay/expressad/video/signal/factory/b;Ljava/lang/Integer;)V

    return-void
.end method

.method private varargs a(Lcom/tkay/expressad/video/module/a/a;[Lcom/tkay/expressad/video/module/TkayBaseView;)V
    .locals 4

    const/4 v0, 0x0

    :goto_0
    const/16 v1, 0x8

    if-ge v0, v1, :cond_2

    .line 1048
    aget-object v1, p2, v0

    if-eqz v1, :cond_1

    .line 1050
    instance-of v2, v1, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;

    if-eqz v2, :cond_0

    .line 1051
    new-instance v2, Lcom/tkay/expressad/video/module/a/a/g;

    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->p:Lcom/tkay/expressad/video/module/TkayClickMiniCardView;

    invoke-direct {v2, v3, p1}, Lcom/tkay/expressad/video/module/a/a/g;-><init>(Lcom/tkay/expressad/video/module/TkayClickMiniCardView;Lcom/tkay/expressad/video/module/a/a;)V

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/video/module/TkayBaseView;->setNotifyListener(Lcom/tkay/expressad/video/module/a/a;)V

    goto :goto_1

    .line 1053
    :cond_0
    new-instance v2, Lcom/tkay/expressad/video/module/a/a/i;

    invoke-direct {v2, p1}, Lcom/tkay/expressad/video/module/a/a/i;-><init>(Lcom/tkay/expressad/video/module/a/a;)V

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/video/module/TkayBaseView;->setNotifyListener(Lcom/tkay/expressad/video/module/a/a;)V

    :cond_1
    :goto_1
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_2
    return-void
.end method

.method private a(Lcom/tkay/expressad/video/signal/factory/b;)V
    .locals 3

    .line 847
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->n:Lcom/tkay/expressad/video/module/TkayPlayableView;

    if-nez v0, :cond_0

    .line 848
    new-instance v0, Lcom/tkay/expressad/video/module/TkayPlayableView;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->a:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/tkay/expressad/video/module/TkayPlayableView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->n:Lcom/tkay/expressad/video/module/TkayPlayableView;

    .line 850
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->n:Lcom/tkay/expressad/video/module/TkayPlayableView;

    iget v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->z:I

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/TkayPlayableView;->setCloseDelayShowTime(I)V

    .line 851
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->n:Lcom/tkay/expressad/video/module/TkayPlayableView;

    iget v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->A:I

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/TkayPlayableView;->setPlayCloseBtnTm(I)V

    .line 852
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->n:Lcom/tkay/expressad/video/module/TkayPlayableView;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/TkayPlayableView;->setCampaign(Lcom/tkay/expressad/foundation/d/c;)V

    .line 853
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->n:Lcom/tkay/expressad/video/module/TkayPlayableView;

    new-instance v1, Lcom/tkay/expressad/video/module/TkayContainerView$4;

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->e:Lcom/tkay/expressad/video/module/a/a;

    invoke-direct {v1, p0, v2}, Lcom/tkay/expressad/video/module/TkayContainerView$4;-><init>(Lcom/tkay/expressad/video/module/TkayContainerView;Lcom/tkay/expressad/video/module/a/a;)V

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/TkayPlayableView;->setNotifyListener(Lcom/tkay/expressad/video/module/a/a;)V

    .line 870
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->n:Lcom/tkay/expressad/video/module/TkayPlayableView;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/video/module/TkayPlayableView;->preLoadData(Lcom/tkay/expressad/video/signal/factory/b;)V

    return-void
.end method

.method private a(Lcom/tkay/expressad/video/signal/factory/b;Ljava/lang/Integer;)V
    .locals 11

    .line 893
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->Q:Lcom/tkay/expressad/video/signal/factory/b;

    .line 894
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_f

    if-nez p2, :cond_0

    .line 896
    iget-object p2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/d/c;->F()I

    move-result p2

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    .line 898
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->isLast()Z

    move-result v0

    if-nez v0, :cond_1

    .line 899
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->p()V

    .line 901
    :cond_1
    invoke-virtual {p2}, Ljava/lang/Integer;->intValue()I

    move-result p2

    const/4 v0, 0x1

    if-eq p2, v0, :cond_f

    const/4 v1, 0x3

    if-eq p2, v1, :cond_d

    const/4 v1, 0x4

    if-eq p2, v1, :cond_b

    const/4 v1, 0x5

    if-eq p2, v1, :cond_f

    .line 908
    iget p2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->y:I

    const/4 v2, 0x2

    if-ne p2, v2, :cond_6

    .line 910
    iget-object p2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result p2

    .line 911
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/h/t;->f(Ljava/lang/String;)Z

    move-result v0

    .line 913
    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v3, :cond_2

    if-eqz p2, :cond_2

    if-nez v0, :cond_2

    return-void

    .line 916
    :cond_2
    iget-object p2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/d/c;->f()I

    move-result p2

    if-eq p2, v2, :cond_5

    .line 917
    iget-object p2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->r:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    if-nez p2, :cond_3

    .line 918
    new-instance p2, Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->a:Landroid/content/Context;

    invoke-direct {p2, v0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;-><init>(Landroid/content/Context;)V

    iput-object p2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->r:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    .line 920
    :cond_3
    iget-object p2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/d/c;->k()I

    move-result p2

    if-ne p2, v1, :cond_4

    .line 921
    iget-object p2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->e:Lcom/tkay/expressad/video/module/a/a;

    if-eqz p2, :cond_4

    iget-object p2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->e:Lcom/tkay/expressad/video/module/a/a;

    instance-of p2, p2, Lcom/tkay/expressad/video/module/a/a/k;

    if-eqz p2, :cond_4

    .line 922
    iget-object p2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->e:Lcom/tkay/expressad/video/module/a/a;

    check-cast p2, Lcom/tkay/expressad/video/module/a/a/k;

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p2, v0}, Lcom/tkay/expressad/video/module/a/a/k;->a(Lcom/tkay/expressad/foundation/d/c;)V

    .line 925
    :cond_4
    iget-object p2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->r:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p2, v0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->setCampaign(Lcom/tkay/expressad/foundation/d/c;)V

    .line 927
    iget-object p2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->r:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    iget v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->z:I

    invoke-virtual {p2, v0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->setCloseDelayShowTime(I)V

    .line 928
    iget-object p2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->r:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    new-instance v0, Lcom/tkay/expressad/video/module/a/a/i;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->e:Lcom/tkay/expressad/video/module/a/a;

    invoke-direct {v0, v1}, Lcom/tkay/expressad/video/module/a/a/i;-><init>(Lcom/tkay/expressad/video/module/a/a;)V

    invoke-virtual {p2, v0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->setNotifyListener(Lcom/tkay/expressad/video/module/a/a;)V

    .line 929
    iget-object p2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->r:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->w:Ljava/lang/String;

    invoke-virtual {p2, v0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->setUnitId(Ljava/lang/String;)V

    .line 930
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->r:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->P:Ljava/lang/String;

    iget v3, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->K:I

    iget v4, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->L:I

    iget v5, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->M:I

    iget v6, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->N:I

    invoke-virtual/range {v1 .. v6}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->setNotchValue(Ljava/lang/String;IIII)V

    .line 931
    iget-object p2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->r:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    invoke-virtual {p2, p1}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->preLoadData(Lcom/tkay/expressad/video/signal/factory/b;)V

    .line 934
    iget-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->D:Z

    if-nez p1, :cond_5

    .line 935
    new-instance p1, Ljava/lang/StringBuilder;

    const-string p2, "showTransparent = "

    invoke-direct {p1, p2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-boolean p2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->D:Z

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string p2, " addview"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 936
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->r:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/module/TkayContainerView;->addView(Landroid/view/View;)V

    :cond_5
    return-void

    .line 941
    :cond_6
    iget-object p2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    const/4 v1, 0x0

    if-eqz p2, :cond_7

    iget-object p2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object p2

    if-eqz p2, :cond_7

    .line 942
    iget-object p2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object p2

    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/d/c$c;->c()I

    move-result p2

    move v9, p2

    goto :goto_0

    :cond_7
    move v9, v1

    .line 944
    :goto_0
    iget-object p2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->q:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    if-nez p2, :cond_a

    if-nez p2, :cond_a

    .line 946
    iget-object p2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result p2

    if-eqz p2, :cond_8

    .line 947
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->q()V

    goto :goto_2

    .line 949
    :cond_8
    new-instance p2, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    iget-object v4, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->a:Landroid/content/Context;

    const/4 v5, 0x0

    const/4 v6, 0x0

    const/4 v7, -0x1

    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c;->f()I

    move-result v3

    if-ne v3, v2, :cond_9

    move v8, v0

    goto :goto_1

    :cond_9
    move v8, v1

    :goto_1
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->as()I

    move-result v10

    move-object v3, p2

    invoke-direct/range {v3 .. v10}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;ZIZII)V

    iput-object p2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->q:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    .line 950
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p2, v0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->setCampaign(Lcom/tkay/expressad/foundation/d/c;)V

    .line 953
    :cond_a
    :goto_2
    iget-object p2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->q:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    invoke-virtual {p2}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->setLayout()V

    .line 954
    iget-object p2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->q:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p2, v0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->setCampaign(Lcom/tkay/expressad/foundation/d/c;)V

    .line 955
    iget-object p2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->q:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->w:Ljava/lang/String;

    invoke-virtual {p2, v0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->setUnitId(Ljava/lang/String;)V

    .line 956
    iget-object p2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->q:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    iget v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->z:I

    invoke-virtual {p2, v0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->setCloseBtnDelay(I)V

    .line 957
    iget-object p2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->q:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    new-instance v0, Lcom/tkay/expressad/video/module/a/a/i;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->e:Lcom/tkay/expressad/video/module/a/a;

    invoke-direct {v0, v1}, Lcom/tkay/expressad/video/module/a/a/i;-><init>(Lcom/tkay/expressad/video/module/a/a;)V

    invoke-virtual {p2, v0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->setNotifyListener(Lcom/tkay/expressad/video/module/a/a;)V

    .line 958
    iget-object p2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->q:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    invoke-virtual {p2, p1}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->preLoadData(Lcom/tkay/expressad/video/signal/factory/b;)V

    .line 959
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->q:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    iget p2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->K:I

    iget v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->L:I

    iget v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->M:I

    iget v2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->N:I

    invoke-virtual {p1, p2, v0, v1, v2}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->setNotchPadding(IIII)V

    return-void

    .line 971
    :cond_b
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->u:Lcom/tkay/expressad/video/module/TkayLandingPageView;

    if-nez p1, :cond_c

    .line 972
    new-instance p1, Lcom/tkay/expressad/video/module/TkayLandingPageView;

    iget-object p2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->a:Landroid/content/Context;

    invoke-direct {p1, p2}, Lcom/tkay/expressad/video/module/TkayLandingPageView;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->u:Lcom/tkay/expressad/video/module/TkayLandingPageView;

    .line 974
    :cond_c
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->u:Lcom/tkay/expressad/video/module/TkayLandingPageView;

    iget-object p2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1, p2}, Lcom/tkay/expressad/video/module/TkayLandingPageView;->setCampaign(Lcom/tkay/expressad/foundation/d/c;)V

    .line 975
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->u:Lcom/tkay/expressad/video/module/TkayLandingPageView;

    new-instance p2, Lcom/tkay/expressad/video/module/a/a/i;

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->e:Lcom/tkay/expressad/video/module/a/a;

    invoke-direct {p2, v0}, Lcom/tkay/expressad/video/module/a/a/i;-><init>(Lcom/tkay/expressad/video/module/a/a;)V

    invoke-virtual {p1, p2}, Lcom/tkay/expressad/video/module/TkayLandingPageView;->setNotifyListener(Lcom/tkay/expressad/video/module/a/a;)V

    goto :goto_3

    .line 963
    :cond_d
    iget-object p2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->t:Lcom/tkay/expressad/video/module/TkayVastEndCardView;

    if-nez p2, :cond_e

    .line 964
    new-instance p2, Lcom/tkay/expressad/video/module/TkayVastEndCardView;

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->a:Landroid/content/Context;

    invoke-direct {p2, v0}, Lcom/tkay/expressad/video/module/TkayVastEndCardView;-><init>(Landroid/content/Context;)V

    iput-object p2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->t:Lcom/tkay/expressad/video/module/TkayVastEndCardView;

    .line 966
    :cond_e
    iget-object p2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->t:Lcom/tkay/expressad/video/module/TkayVastEndCardView;

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p2, v0}, Lcom/tkay/expressad/video/module/TkayVastEndCardView;->setCampaign(Lcom/tkay/expressad/foundation/d/c;)V

    .line 967
    iget-object p2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->t:Lcom/tkay/expressad/video/module/TkayVastEndCardView;

    new-instance v0, Lcom/tkay/expressad/video/module/a/a/l;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->e:Lcom/tkay/expressad/video/module/a/a;

    invoke-direct {v0, v1}, Lcom/tkay/expressad/video/module/a/a/l;-><init>(Lcom/tkay/expressad/video/module/a/a;)V

    invoke-virtual {p2, v0}, Lcom/tkay/expressad/video/module/TkayVastEndCardView;->setNotifyListener(Lcom/tkay/expressad/video/module/a/a;)V

    .line 968
    iget-object p2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->t:Lcom/tkay/expressad/video/module/TkayVastEndCardView;

    invoke-virtual {p2, p1}, Lcom/tkay/expressad/video/module/TkayVastEndCardView;->preLoadData(Lcom/tkay/expressad/video/signal/factory/b;)V

    :cond_f
    :goto_3
    return-void
.end method

.method private varargs a([Lcom/tkay/expressad/video/module/TkayH5EndCardView;)V
    .locals 3

    const/4 v0, 0x0

    :goto_0
    const/4 v1, 0x4

    if-ge v0, v1, :cond_1

    .line 1072
    aget-object v1, p1, v0

    if-eqz v1, :cond_0

    .line 1073
    invoke-virtual {v1}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->getVisibility()I

    move-result v2

    if-nez v2, :cond_0

    invoke-virtual {v1}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->getParent()Landroid/view/ViewParent;

    move-result-object v2

    if-eqz v2, :cond_0

    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->isLast()Z

    move-result v2

    if-nez v2, :cond_0

    .line 1074
    invoke-virtual {v1}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->webviewshow()V

    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_1
    return-void
.end method

.method private a()Z
    .locals 3

    .line 251
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    .line 252
    invoke-virtual {v0}, Landroid/view/ViewGroup;->getChildCount()I

    move-result v1

    .line 253
    invoke-virtual {v0, p0}, Landroid/view/ViewGroup;->indexOfChild(Landroid/view/View;)I

    move-result v0

    const/4 v2, 0x1

    sub-int/2addr v1, v2

    if-ne v0, v1, :cond_0

    return v2

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method private b()V
    .locals 3

    .line 690
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->setWrapContent()V

    .line 691
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    .line 692
    instance-of v1, v0, Landroid/widget/RelativeLayout$LayoutParams;

    if-eqz v1, :cond_0

    .line 693
    check-cast v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/16 v1, 0xc

    const/4 v2, -0x1

    .line 694
    invoke-virtual {v0, v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    :cond_0
    return-void
.end method

.method private b(I)V
    .locals 2

    const/4 v0, -0x3

    if-eq p1, v0, :cond_3

    const/4 v0, -0x2

    if-eq p1, v0, :cond_1

    .line 1036
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->o:Lcom/tkay/expressad/video/module/TkayClickCTAView;

    if-nez p1, :cond_0

    .line 1037
    new-instance p1, Lcom/tkay/expressad/video/module/TkayClickCTAView;

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->a:Landroid/content/Context;

    invoke-direct {p1, v0}, Lcom/tkay/expressad/video/module/TkayClickCTAView;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->o:Lcom/tkay/expressad/video/module/TkayClickCTAView;

    .line 1039
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->o:Lcom/tkay/expressad/video/module/TkayClickCTAView;

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/video/module/TkayClickCTAView;->setCampaign(Lcom/tkay/expressad/foundation/d/c;)V

    .line 1040
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->o:Lcom/tkay/expressad/video/module/TkayClickCTAView;

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->w:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/video/module/TkayClickCTAView;->setUnitId(Ljava/lang/String;)V

    .line 1041
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->o:Lcom/tkay/expressad/video/module/TkayClickCTAView;

    new-instance v0, Lcom/tkay/expressad/video/module/a/a/i;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->e:Lcom/tkay/expressad/video/module/a/a;

    invoke-direct {v0, v1}, Lcom/tkay/expressad/video/module/a/a/i;-><init>(Lcom/tkay/expressad/video/module/a/a;)V

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/video/module/TkayClickCTAView;->setNotifyListener(Lcom/tkay/expressad/video/module/a/a;)V

    .line 1042
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->o:Lcom/tkay/expressad/video/module/TkayClickCTAView;

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->Q:Lcom/tkay/expressad/video/signal/factory/b;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/video/module/TkayClickCTAView;->preLoadData(Lcom/tkay/expressad/video/signal/factory/b;)V

    goto :goto_0

    .line 1021
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz p1, :cond_3

    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->F()I

    move-result p1

    const/4 v0, 0x2

    if-ne p1, v0, :cond_3

    .line 1022
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->p:Lcom/tkay/expressad/video/module/TkayClickMiniCardView;

    if-nez p1, :cond_2

    .line 1023
    new-instance p1, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->a:Landroid/content/Context;

    invoke-direct {p1, v0}, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->p:Lcom/tkay/expressad/video/module/TkayClickMiniCardView;

    .line 1025
    :cond_2
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->p:Lcom/tkay/expressad/video/module/TkayClickMiniCardView;

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;->setCampaign(Lcom/tkay/expressad/foundation/d/c;)V

    .line 1026
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->p:Lcom/tkay/expressad/video/module/TkayClickMiniCardView;

    new-instance v0, Lcom/tkay/expressad/video/module/a/a/g;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->e:Lcom/tkay/expressad/video/module/a/a;

    invoke-direct {v0, p1, v1}, Lcom/tkay/expressad/video/module/a/a/g;-><init>(Lcom/tkay/expressad/video/module/TkayClickMiniCardView;Lcom/tkay/expressad/video/module/a/a;)V

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;->setNotifyListener(Lcom/tkay/expressad/video/module/a/a;)V

    .line 1027
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->p:Lcom/tkay/expressad/video/module/TkayClickMiniCardView;

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->Q:Lcom/tkay/expressad/video/signal/factory/b;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;->preLoadData(Lcom/tkay/expressad/video/signal/factory/b;)V

    .line 1028
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->setMatchParent()V

    .line 1029
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->m()V

    .line 1030
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->p()V

    :cond_3
    :goto_0
    return-void
.end method

.method private b(Lcom/tkay/expressad/video/signal/factory/b;)V
    .locals 3

    .line 883
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->Q:Lcom/tkay/expressad/video/signal/factory/b;

    .line 884
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->s:Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;

    if-nez v0, :cond_0

    .line 885
    new-instance v0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->a:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->s:Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;

    .line 886
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->setCampaign(Lcom/tkay/expressad/foundation/d/c;)V

    .line 887
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->s:Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;

    new-instance v1, Lcom/tkay/expressad/video/module/a/a/i;

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->e:Lcom/tkay/expressad/video/module/a/a;

    invoke-direct {v1, v2}, Lcom/tkay/expressad/video/module/a/a/i;-><init>(Lcom/tkay/expressad/video/module/a/a;)V

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->setNotifyListener(Lcom/tkay/expressad/video/module/a/a;)V

    .line 888
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->s:Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->preLoadData(Lcom/tkay/expressad/video/signal/factory/b;)V

    :cond_0
    return-void
.end method

.method private varargs b([Lcom/tkay/expressad/video/module/TkayH5EndCardView;)V
    .locals 3

    const/4 v0, 0x0

    :goto_0
    const/4 v1, 0x4

    if-ge v0, v1, :cond_1

    .line 1080
    aget-object v1, p1, v0

    if-eqz v1, :cond_0

    .line 1081
    invoke-virtual {v1}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->getVisibility()I

    move-result v2

    if-nez v2, :cond_0

    .line 1082
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->orientation(Landroid/content/res/Configuration;)V

    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_1
    return-void
.end method

.method private e()V
    .locals 2

    .line 700
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_0

    .line 701
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    .line 702
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/expressad/foundation/h/t;->f(Ljava/lang/String;)Z

    move-result v1

    if-eqz v0, :cond_0

    if-nez v1, :cond_0

    .line 705
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->i()V

    return-void

    .line 709
    :cond_0
    iget v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->y:I

    const/4 v1, 0x2

    if-ne v0, v1, :cond_1

    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->I:Z

    if-nez v0, :cond_1

    .line 710
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->h()V

    return-void

    .line 712
    :cond_1
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->i()V

    return-void
.end method

.method private f()V
    .locals 3

    .line 717
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->t:Lcom/tkay/expressad/video/module/TkayVastEndCardView;

    if-nez v0, :cond_0

    .line 718
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->Q:Lcom/tkay/expressad/video/signal/factory/b;

    const/4 v1, 0x3

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-direct {p0, v0, v1}, Lcom/tkay/expressad/video/module/TkayContainerView;->a(Lcom/tkay/expressad/video/signal/factory/b;Ljava/lang/Integer;)V

    .line 720
    :cond_0
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {v0, v1, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v2, 0xd

    .line 721
    invoke-virtual {v0, v2, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 722
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->t:Lcom/tkay/expressad/video/module/TkayVastEndCardView;

    invoke-virtual {p0, v1, v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 723
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->t:Lcom/tkay/expressad/video/module/TkayVastEndCardView;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayVastEndCardView;->notifyShowListener()V

    return-void
.end method

.method private g()V
    .locals 2

    .line 727
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->u:Lcom/tkay/expressad/video/module/TkayLandingPageView;

    if-nez v0, :cond_0

    .line 728
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->Q:Lcom/tkay/expressad/video/signal/factory/b;

    const/4 v1, 0x4

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-direct {p0, v0, v1}, Lcom/tkay/expressad/video/module/TkayContainerView;->a(Lcom/tkay/expressad/video/signal/factory/b;Ljava/lang/Integer;)V

    .line 731
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->u:Lcom/tkay/expressad/video/module/TkayLandingPageView;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->w:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/TkayLandingPageView;->setUnitId(Ljava/lang/String;)V

    .line 732
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->u:Lcom/tkay/expressad/video/module/TkayLandingPageView;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->Q:Lcom/tkay/expressad/video/signal/factory/b;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/TkayLandingPageView;->preLoadData(Lcom/tkay/expressad/video/signal/factory/b;)V

    .line 733
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->u:Lcom/tkay/expressad/video/module/TkayLandingPageView;

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->addView(Landroid/view/View;)V

    return-void
.end method

.method private h()V
    .locals 7

    .line 737
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->r:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    if-nez v0, :cond_0

    .line 738
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->Q:Lcom/tkay/expressad/video/signal/factory/b;

    const/4 v1, 0x2

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-direct {p0, v0, v1}, Lcom/tkay/expressad/video/module/TkayContainerView;->a(Lcom/tkay/expressad/video/signal/factory/b;Ljava/lang/Integer;)V

    .line 740
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->r:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    const/4 v1, 0x1

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->isLoadSuccess()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 741
    iput-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->I:Z

    .line 743
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->r:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->addView(Landroid/view/View;)V

    .line 744
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->webviewshow()V

    .line 745
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->onConfigurationChanged(Landroid/content/res/Configuration;)V

    .line 746
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->r:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->excuteTask()V

    .line 747
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->r:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->P:Ljava/lang/String;

    iget v3, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->K:I

    iget v4, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->L:I

    iget v5, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->M:I

    iget v6, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->N:I

    invoke-virtual/range {v1 .. v6}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->setNotchValue(Ljava/lang/String;IIII)V

    goto :goto_0

    .line 756
    :cond_1
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->i()V

    .line 757
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->r:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    if-eqz v0, :cond_2

    const/4 v2, 0x3

    const-string v3, "timeout"

    .line 759
    invoke-virtual {v0, v3, v2}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->reportRenderResult(Ljava/lang/String;I)V

    .line 760
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->r:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->setError(Z)V

    .line 764
    :cond_2
    :goto_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->r:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    if-eqz v0, :cond_3

    .line 765
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->w:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->setUnitId(Ljava/lang/String;)V

    :cond_3
    return-void
.end method

.method private i()V
    .locals 3

    const/4 v0, 0x1

    .line 770
    iput v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->y:I

    .line 771
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->q:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    if-nez v1, :cond_0

    .line 772
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->Q:Lcom/tkay/expressad/video/signal/factory/b;

    const/4 v2, 0x2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-direct {p0, v1, v2}, Lcom/tkay/expressad/video/module/TkayContainerView;->a(Lcom/tkay/expressad/video/signal/factory/b;Ljava/lang/Integer;)V

    .line 774
    :cond_0
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->q:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/module/TkayContainerView;->addView(Landroid/view/View;)V

    .line 775
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object v1

    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/module/TkayContainerView;->onConfigurationChanged(Landroid/content/res/Configuration;)V

    .line 776
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->q:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    invoke-virtual {v1}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->notifyShowListener()V

    .line 777
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->T:Z

    .line 778
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->bringToFront()V

    return-void
.end method

.method private j()V
    .locals 4

    .line 782
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->s:Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;

    if-nez v0, :cond_0

    .line 783
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->Q:Lcom/tkay/expressad/video/signal/factory/b;

    .line 8883
    iput-object v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->Q:Lcom/tkay/expressad/video/signal/factory/b;

    if-nez v0, :cond_0

    .line 8885
    new-instance v0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->a:Landroid/content/Context;

    invoke-direct {v0, v2}, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->s:Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;

    .line 8886
    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->setCampaign(Lcom/tkay/expressad/foundation/d/c;)V

    .line 8887
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->s:Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;

    new-instance v2, Lcom/tkay/expressad/video/module/a/a/i;

    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->e:Lcom/tkay/expressad/video/module/a/a;

    invoke-direct {v2, v3}, Lcom/tkay/expressad/video/module/a/a/i;-><init>(Lcom/tkay/expressad/video/module/a/a;)V

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->setNotifyListener(Lcom/tkay/expressad/video/module/a/a;)V

    .line 8888
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->s:Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->preLoadData(Lcom/tkay/expressad/video/signal/factory/b;)V

    .line 785
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->s:Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->addView(Landroid/view/View;)V

    .line 786
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->onConfigurationChanged(Landroid/content/res/Configuration;)V

    const/4 v0, 0x1

    .line 787
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->T:Z

    .line 788
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->bringToFront()V

    return-void
.end method

.method private k()V
    .locals 8

    .line 792
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->n:Lcom/tkay/expressad/video/module/TkayPlayableView;

    if-nez v0, :cond_0

    .line 793
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->Q:Lcom/tkay/expressad/video/signal/factory/b;

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->preLoadData(Lcom/tkay/expressad/video/signal/factory/b;)V

    .line 796
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->n:Lcom/tkay/expressad/video/module/TkayPlayableView;

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->addView(Landroid/view/View;)V

    .line 797
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->n:Lcom/tkay/expressad/video/module/TkayPlayableView;

    if-eqz v0, :cond_2

    .line 798
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->w:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/TkayPlayableView;->setUnitId(Ljava/lang/String;)V

    .line 799
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->H()Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->J()I

    move-result v0

    const/4 v1, 0x2

    if-ne v0, v1, :cond_1

    .line 801
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->n:Lcom/tkay/expressad/video/module/TkayPlayableView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/TkayPlayableView;->setCloseVisible(I)V

    .line 803
    :cond_1
    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->n:Lcom/tkay/expressad/video/module/TkayPlayableView;

    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->P:Ljava/lang/String;

    iget v4, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->K:I

    iget v5, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->L:I

    iget v6, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->M:I

    iget v7, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->N:I

    invoke-virtual/range {v2 .. v7}, Lcom/tkay/expressad/video/module/TkayPlayableView;->setNotchValue(Ljava/lang/String;IIII)V

    :cond_2
    return-void
.end method

.method private l()V
    .locals 3

    .line 808
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->o:Lcom/tkay/expressad/video/module/TkayClickCTAView;

    const/4 v1, -0x1

    if-nez v0, :cond_0

    .line 809
    invoke-direct {p0, v1}, Lcom/tkay/expressad/video/module/TkayContainerView;->b(I)V

    .line 811
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->o:Lcom/tkay/expressad/video/module/TkayClickCTAView;

    if-eqz v0, :cond_2

    .line 812
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    if-eqz v0, :cond_1

    return-void

    .line 815
    :cond_1
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v2, -0x2

    invoke-direct {v0, v2, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v2, 0xc

    .line 816
    invoke-virtual {v0, v2, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 817
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->o:Lcom/tkay/expressad/video/module/TkayClickCTAView;

    const/4 v2, 0x0

    invoke-virtual {p0, v1, v2, v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->addView(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V

    :cond_2
    return-void
.end method

.method private m()V
    .locals 3

    .line 823
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->p:Lcom/tkay/expressad/video/module/TkayClickMiniCardView;

    if-nez v0, :cond_0

    const/4 v0, -0x2

    .line 824
    invoke-direct {p0, v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->b(I)V

    .line 826
    :cond_0
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {v0, v1, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v2, 0xd

    .line 827
    invoke-virtual {v0, v2, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 828
    iget-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->D:Z

    if-eqz v1, :cond_1

    iget-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->F:Z

    if-eqz v1, :cond_1

    const/4 v1, 0x0

    .line 829
    iput-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->F:Z

    const/4 v1, 0x1

    .line 830
    iput v1, v0, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    .line 831
    iput v1, v0, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    .line 833
    :cond_1
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->p:Lcom/tkay/expressad/video/module/TkayClickMiniCardView;

    invoke-virtual {p0, v1, v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method

.method private n()V
    .locals 1

    .line 837
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->v:Lcom/tkay/expressad/video/module/TkayAlertWebview;

    if-nez v0, :cond_0

    .line 838
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->o()V

    .line 840
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->v:Lcom/tkay/expressad/video/module/TkayAlertWebview;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayAlertWebview;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 841
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->v:Lcom/tkay/expressad/video/module/TkayAlertWebview;

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->removeView(Landroid/view/View;)V

    .line 843
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->v:Lcom/tkay/expressad/video/module/TkayAlertWebview;

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->addView(Landroid/view/View;)V

    return-void
.end method

.method private o()V
    .locals 2

    .line 874
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->v:Lcom/tkay/expressad/video/module/TkayAlertWebview;

    if-nez v0, :cond_0

    .line 875
    new-instance v0, Lcom/tkay/expressad/video/module/TkayAlertWebview;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->a:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/tkay/expressad/video/module/TkayAlertWebview;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->v:Lcom/tkay/expressad/video/module/TkayAlertWebview;

    .line 876
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->w:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/TkayAlertWebview;->setUnitId(Ljava/lang/String;)V

    .line 877
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->v:Lcom/tkay/expressad/video/module/TkayAlertWebview;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/TkayAlertWebview;->setCampaign(Lcom/tkay/expressad/foundation/d/c;)V

    .line 879
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->v:Lcom/tkay/expressad/video/module/TkayAlertWebview;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->Q:Lcom/tkay/expressad/video/signal/factory/b;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/TkayAlertWebview;->preLoadData(Lcom/tkay/expressad/video/signal/factory/b;)V

    return-void
.end method

.method private p()V
    .locals 5

    const/4 v0, 0x0

    .line 998
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->C:Z

    .line 999
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->T:Z

    .line 1000
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->getParent()Landroid/view/ViewParent;

    move-result-object v1

    check-cast v1, Landroid/view/ViewGroup;

    if-eqz v1, :cond_1

    move v2, v0

    .line 1002
    :goto_0
    invoke-virtual {v1}, Landroid/view/ViewGroup;->getChildCount()I

    move-result v3

    if-ge v0, v3, :cond_1

    .line 1003
    invoke-virtual {v1, v2}, Landroid/view/ViewGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v3

    .line 1004
    instance-of v4, v3, Lcom/tkay/expressad/video/module/TkayContainerView;

    if-nez v4, :cond_0

    .line 1005
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

.method private q()V
    .locals 11

    .line 1117
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-nez v0, :cond_0

    return-void

    .line 1120
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object v0

    .line 1122
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const/16 v2, 0x194

    if-nez v1, :cond_1

    :try_start_0
    const-string v1, "ecid"

    .line 1124
    invoke-static {v0, v1}, Lcom/tkay/expressad/foundation/h/x;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 1125
    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 1128
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    :cond_1
    :goto_0
    move v7, v2

    .line 1131
    new-instance v0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    iget-object v4, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->a:Landroid/content/Context;

    const/4 v5, 0x0

    const/4 v6, 0x1

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->f()I

    move-result v1

    const/4 v2, 0x2

    if-ne v1, v2, :cond_2

    const/4 v1, 0x1

    goto :goto_1

    :cond_2
    const/4 v1, 0x0

    :goto_1
    move v8, v1

    iget v9, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->l:I

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->as()I

    move-result v10

    move-object v3, v0

    invoke-direct/range {v3 .. v10}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;ZIZII)V

    iput-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->q:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    .line 1133
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->k()I

    move-result v0

    const/4 v1, 0x5

    if-ne v0, v1, :cond_4

    .line 1134
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->e:Lcom/tkay/expressad/video/module/a/a;

    if-eqz v0, :cond_3

    .line 1135
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->e:Lcom/tkay/expressad/video/module/a/a;

    instance-of v0, v0, Lcom/tkay/expressad/video/module/a/a/k;

    if-eqz v0, :cond_3

    .line 1136
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->e:Lcom/tkay/expressad/video/module/a/a;

    check-cast v0, Lcom/tkay/expressad/video/module/a/a/k;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/a/a/k;->a(Lcom/tkay/expressad/foundation/d/c;)V

    .line 1139
    :cond_3
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->q:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->setCampaign(Lcom/tkay/expressad/foundation/d/c;)V

    return-void

    .line 1141
    :cond_4
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->q:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->setCampaign(Lcom/tkay/expressad/foundation/d/c;)V

    return-void
.end method


# virtual methods
.method public addOrderViewData(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;)V"
        }
    .end annotation

    if-nez p1, :cond_0

    return-void

    .line 156
    :cond_0
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->U:Ljava/util/List;

    return-void
.end method

.method public addView(Landroid/view/View;)V
    .locals 0

    if-eqz p1, :cond_0

    .line 590
    invoke-static {p1}, Lcom/tkay/expressad/video/module/TkayContainerView;->a(Landroid/view/View;)V

    .line 591
    invoke-super {p0, p1}, Lcom/tkay/expressad/video/module/TkayBaseView;->addView(Landroid/view/View;)V

    :cond_0
    return-void
.end method

.method public addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V
    .locals 0

    if-eqz p1, :cond_0

    .line 600
    invoke-static {p1}, Lcom/tkay/expressad/video/module/TkayContainerView;->a(Landroid/view/View;)V

    .line 601
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/module/TkayBaseView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    :cond_0
    return-void
.end method

.method public canBackPress()Z
    .locals 2

    .line 609
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->q:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 611
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->r:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    if-eqz v0, :cond_1

    .line 612
    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->canBackPress()Z

    move-result v1

    goto :goto_0

    .line 613
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->u:Lcom/tkay/expressad/video/module/TkayLandingPageView;

    if-eqz v0, :cond_2

    .line 614
    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayLandingPageView;->canBackPress()Z

    move-result v1

    goto :goto_0

    .line 615
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->n:Lcom/tkay/expressad/video/module/TkayPlayableView;

    if-eqz v0, :cond_3

    .line 616
    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayPlayableView;->canBackPress()Z

    move-result v1

    :cond_3
    :goto_0
    return v1
.end method

.method public configurationChanged(III)V
    .locals 0

    .line 556
    iget-object p3, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->p:Lcom/tkay/expressad/video/module/TkayClickMiniCardView;

    if-eqz p3, :cond_0

    invoke-virtual {p3}, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;->getVisibility()I

    move-result p3

    if-nez p3, :cond_0

    .line 557
    iget-object p3, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->p:Lcom/tkay/expressad/video/module/TkayClickMiniCardView;

    invoke-virtual {p3, p1, p2}, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;->resizeMiniCard(II)V

    :cond_0
    return-void
.end method

.method public defaultShow()V
    .locals 0

    .line 584
    invoke-super {p0}, Lcom/tkay/expressad/video/module/TkayBaseView;->defaultShow()V

    return-void
.end method

.method public endCardShowing()Z
    .locals 1

    .line 454
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->B:Z

    return v0
.end method

.method public endcardIsPlayable()Z
    .locals 1

    .line 622
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->r:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->isPlayable()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public getH5EndCardView()Lcom/tkay/expressad/video/module/TkayH5EndCardView;
    .locals 1

    .line 1199
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->r:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    if-nez v0, :cond_0

    .line 1200
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->n:Lcom/tkay/expressad/video/module/TkayPlayableView;

    :cond_0
    return-object v0
.end method

.method public getReSetCampaign()Lcom/tkay/expressad/foundation/d/c;
    .locals 6

    .line 1092
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return-object v1

    .line 1095
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    return-object v1

    .line 1099
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->U:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    const/4 v2, 0x0

    move v3, v2

    :goto_0
    if-ge v3, v0, :cond_3

    .line 1101
    iget-object v4, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->U:Ljava/util/List;

    invoke-interface {v4, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    if-eqz v4, :cond_2

    iget-object v4, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->U:Ljava/util/List;

    invoke-interface {v4, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v4}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v4

    iget-object v5, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v5}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

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

    .line 1106
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->U:Ljava/util/List;

    invoke-interface {v0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_4

    .line 1107
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->U:Ljava/util/List;

    invoke-interface {v0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/foundation/d/c;

    return-object v0

    :cond_4
    return-object v1
.end method

.method public getShowingTransparent()Z
    .locals 1

    .line 630
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->D:Z

    return v0
.end method

.method public getUnitID()Ljava/lang/String;
    .locals 1

    .line 634
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->w:Ljava/lang/String;

    return-object v0
.end method

.method public getVideoInteractiveType()I
    .locals 1

    .line 665
    iget v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->x:I

    return v0
.end method

.method public getVideoSkipTime()I
    .locals 1

    .line 160
    iget v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->H:I

    return v0
.end method

.method public handlerPlayableException(Ljava/lang/String;)V
    .locals 1

    .line 510
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->r:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    if-eqz v0, :cond_0

    .line 511
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->handlerPlayableException(Ljava/lang/String;)V

    .line 512
    iget-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->I:Z

    if-eqz p1, :cond_1

    .line 516
    :cond_0
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->e()V

    :cond_1
    return-void
.end method

.method public hideAlertWebview()V
    .locals 3

    .line 1207
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->isLast()Z

    move-result v0

    if-nez v0, :cond_1

    .line 1209
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->S:Z

    if-eqz v0, :cond_0

    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->T:Z

    if-nez v0, :cond_0

    .line 1210
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->p()V

    const/4 v0, 0x0

    .line 1211
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->S:Z

    .line 1215
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->v:Lcom/tkay/expressad/video/module/TkayAlertWebview;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayAlertWebview;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 1216
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->v:Lcom/tkay/expressad/video/module/TkayAlertWebview;

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->removeView(Landroid/view/View;)V

    .line 1218
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->o:Lcom/tkay/expressad/video/module/TkayClickCTAView;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayClickCTAView;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 9690
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->setWrapContent()V

    .line 9691
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    .line 9692
    instance-of v1, v0, Landroid/widget/RelativeLayout$LayoutParams;

    if-eqz v1, :cond_1

    .line 9693
    check-cast v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/16 v1, 0xc

    const/4 v2, -0x1

    .line 9694
    invoke-virtual {v0, v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    :cond_1
    return-void
.end method

.method public init(Landroid/content/Context;)V
    .locals 0

    const/4 p1, 0x0

    .line 177
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/module/TkayContainerView;->setVisibility(I)V

    return-void
.end method

.method public install(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 2

    .line 568
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 v1, 0x69

    invoke-interface {v0, v1, p1}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    return-void
.end method

.method public isLast()Z
    .locals 2

    .line 989
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 991
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

    .line 1227
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 v1, 0x67

    invoke-interface {v0, v1, p1}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    return-void
.end method

.method public miniCardLoaded()Z
    .locals 1

    .line 464
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->p:Lcom/tkay/expressad/video/module/TkayClickMiniCardView;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;->isLoadSuccess()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public miniCardShowing()Z
    .locals 1

    .line 459
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->C:Z

    return v0
.end method

.method public notifyCloseBtn(I)V
    .locals 1

    .line 479
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->n:Lcom/tkay/expressad/video/module/TkayPlayableView;

    if-eqz v0, :cond_0

    .line 480
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/video/module/TkayPlayableView;->notifyCloseBtn(I)V

    .line 482
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->r:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    if-eqz v0, :cond_1

    .line 483
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->notifyCloseBtn(I)V

    :cond_1
    return-void
.end method

.method public onConfigurationChanged(Landroid/content/res/Configuration;)V
    .locals 5

    .line 182
    invoke-super {p0, p1}, Lcom/tkay/expressad/video/module/TkayBaseView;->onConfigurationChanged(Landroid/content/res/Configuration;)V

    const/16 v0, 0x8

    new-array v1, v0, [Lcom/tkay/expressad/video/module/TkayBaseView;

    .line 183
    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->n:Lcom/tkay/expressad/video/module/TkayPlayableView;

    const/4 v3, 0x0

    aput-object v2, v1, v3

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->o:Lcom/tkay/expressad/video/module/TkayClickCTAView;

    const/4 v4, 0x1

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->p:Lcom/tkay/expressad/video/module/TkayClickMiniCardView;

    const/4 v4, 0x2

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->q:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    const/4 v4, 0x3

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->r:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    const/4 v4, 0x4

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->t:Lcom/tkay/expressad/video/module/TkayVastEndCardView;

    const/4 v4, 0x5

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->u:Lcom/tkay/expressad/video/module/TkayLandingPageView;

    const/4 v4, 0x6

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->s:Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;

    const/4 v4, 0x7

    aput-object v2, v1, v4

    :goto_0
    if-ge v3, v0, :cond_2

    .line 2060
    aget-object v2, v1, v3

    if-eqz v2, :cond_0

    .line 2061
    instance-of v4, v2, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;

    if-eqz v4, :cond_0

    .line 2062
    invoke-virtual {v2, p1}, Lcom/tkay/expressad/video/module/TkayBaseView;->onSelfConfigurationChanged(Landroid/content/res/Configuration;)V

    goto :goto_1

    :cond_0
    if-eqz v2, :cond_1

    .line 2064
    invoke-virtual {v2}, Lcom/tkay/expressad/video/module/TkayBaseView;->getVisibility()I

    move-result v4

    if-nez v4, :cond_1

    invoke-virtual {v2}, Lcom/tkay/expressad/video/module/TkayBaseView;->getParent()Landroid/view/ViewParent;

    move-result-object v4

    if-eqz v4, :cond_1

    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->isLast()Z

    move-result v4

    if-nez v4, :cond_1

    .line 2065
    invoke-virtual {v2, p1}, Lcom/tkay/expressad/video/module/TkayBaseView;->onSelfConfigurationChanged(Landroid/content/res/Configuration;)V

    :cond_1
    :goto_1
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_2
    return-void
.end method

.method public onEndcardBackPress()V
    .locals 3

    .line 1165
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->q:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    const-string v1, ""

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->t:Lcom/tkay/expressad/video/module/TkayVastEndCardView;

    if-eqz v0, :cond_0

    goto :goto_0

    .line 1169
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->u:Lcom/tkay/expressad/video/module/TkayLandingPageView;

    if-eqz v0, :cond_1

    .line 1170
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 v2, 0x67

    invoke-interface {v0, v2, v1}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    return-void

    .line 1173
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->r:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    if-eqz v0, :cond_2

    .line 1174
    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->onBackPress()V

    :cond_2
    return-void

    .line 1166
    :cond_3
    :goto_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 v2, 0x68

    invoke-interface {v0, v2, v1}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    return-void
.end method

.method public onMiniEndcardBackPress()V
    .locals 3

    .line 1159
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->C:Z

    if-eqz v0, :cond_0

    .line 1160
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 v1, 0x6b

    const-string v2, ""

    invoke-interface {v0, v1, v2}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    :cond_0
    return-void
.end method

.method public onPlayableBackPress()V
    .locals 1

    .line 1153
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->n:Lcom/tkay/expressad/video/module/TkayPlayableView;

    if-eqz v0, :cond_0

    .line 1154
    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayPlayableView;->onBackPress()V

    :cond_0
    return-void
.end method

.method public orientation(Landroid/content/res/Configuration;)V
    .locals 4

    const/4 p1, 0x4

    new-array v0, p1, [Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    .line 573
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->n:Lcom/tkay/expressad/video/module/TkayPlayableView;

    const/4 v2, 0x0

    aput-object v1, v0, v2

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->p:Lcom/tkay/expressad/video/module/TkayClickMiniCardView;

    const/4 v3, 0x1

    aput-object v1, v0, v3

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->r:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    const/4 v3, 0x2

    aput-object v1, v0, v3

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->v:Lcom/tkay/expressad/video/module/TkayAlertWebview;

    const/4 v3, 0x3

    aput-object v1, v0, v3

    :goto_0
    if-ge v2, p1, :cond_1

    .line 7080
    aget-object v1, v0, v2

    if-eqz v1, :cond_0

    .line 7081
    invoke-virtual {v1}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->getVisibility()I

    move-result v3

    if-nez v3, :cond_0

    .line 7082
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->getResources()Landroid/content/res/Resources;

    move-result-object v3

    invoke-virtual {v3}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->orientation(Landroid/content/res/Configuration;)V

    :cond_0
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_1
    return-void
.end method

.method public preLoadData(Lcom/tkay/expressad/video/signal/factory/b;)V
    .locals 4

    .line 188
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->Q:Lcom/tkay/expressad/video/signal/factory/b;

    .line 190
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_3

    .line 192
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->J()I

    move-result v0

    const/4 v1, 0x2

    if-ne v0, v1, :cond_1

    .line 2847
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->n:Lcom/tkay/expressad/video/module/TkayPlayableView;

    if-nez v0, :cond_0

    .line 2848
    new-instance v0, Lcom/tkay/expressad/video/module/TkayPlayableView;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->a:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/tkay/expressad/video/module/TkayPlayableView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->n:Lcom/tkay/expressad/video/module/TkayPlayableView;

    .line 2850
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->n:Lcom/tkay/expressad/video/module/TkayPlayableView;

    iget v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->z:I

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/TkayPlayableView;->setCloseDelayShowTime(I)V

    .line 2851
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->n:Lcom/tkay/expressad/video/module/TkayPlayableView;

    iget v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->A:I

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/TkayPlayableView;->setPlayCloseBtnTm(I)V

    .line 2852
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->n:Lcom/tkay/expressad/video/module/TkayPlayableView;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/TkayPlayableView;->setCampaign(Lcom/tkay/expressad/foundation/d/c;)V

    .line 2853
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->n:Lcom/tkay/expressad/video/module/TkayPlayableView;

    new-instance v1, Lcom/tkay/expressad/video/module/TkayContainerView$4;

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->e:Lcom/tkay/expressad/video/module/a/a;

    invoke-direct {v1, p0, v2}, Lcom/tkay/expressad/video/module/TkayContainerView$4;-><init>(Lcom/tkay/expressad/video/module/TkayContainerView;Lcom/tkay/expressad/video/module/a/a;)V

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/TkayPlayableView;->setNotifyListener(Lcom/tkay/expressad/video/module/a/a;)V

    .line 2870
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->n:Lcom/tkay/expressad/video/module/TkayPlayableView;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/video/module/TkayPlayableView;->preLoadData(Lcom/tkay/expressad/video/signal/factory/b;)V

    goto :goto_1

    .line 195
    :cond_1
    iget v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->x:I

    invoke-direct {p0, v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->b(I)V

    .line 197
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    if-eqz v0, :cond_2

    .line 199
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->F()I

    move-result v0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-direct {p0, p1, v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->a(Lcom/tkay/expressad/video/signal/factory/b;Ljava/lang/Integer;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 201
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    .line 202
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    new-instance v1, Lcom/tkay/expressad/video/module/TkayContainerView$1;

    invoke-direct {v1, p0, p1}, Lcom/tkay/expressad/video/module/TkayContainerView$1;-><init>(Lcom/tkay/expressad/video/module/TkayContainerView;Lcom/tkay/expressad/video/signal/factory/b;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->postAtFrontOfQueue(Ljava/lang/Runnable;)Z

    .line 209
    :goto_0
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/tkay/expressad/foundation/h/t;->f(Ljava/lang/String;)Z

    goto :goto_1

    .line 225
    :cond_2
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    new-instance v1, Lcom/tkay/expressad/video/module/TkayContainerView$2;

    invoke-direct {v1, p0, p1}, Lcom/tkay/expressad/video/module/TkayContainerView$2;-><init>(Lcom/tkay/expressad/video/module/TkayContainerView;Lcom/tkay/expressad/video/signal/factory/b;)V

    .line 230
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->getVideoSkipTime()I

    move-result p1

    int-to-long v2, p1

    .line 225
    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    .line 234
    :goto_1
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->o()V

    :cond_3
    return-void
.end method

.method public readyStatus(I)V
    .locals 1

    .line 502
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->r:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    if-eqz v0, :cond_0

    .line 503
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->readyStatus(I)V

    :cond_0
    return-void
.end method

.method public release()V
    .locals 2

    .line 1179
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->r:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 1180
    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->release()V

    .line 1181
    iput-object v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->r:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    .line 1183
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->n:Lcom/tkay/expressad/video/module/TkayPlayableView;

    if-eqz v0, :cond_1

    .line 1184
    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayPlayableView;->release()V

    .line 1186
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->u:Lcom/tkay/expressad/video/module/TkayLandingPageView;

    if-eqz v0, :cond_2

    .line 1187
    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayLandingPageView;->release()V

    .line 1189
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->q:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    if-eqz v0, :cond_3

    .line 1190
    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->clearMoreOfferBitmap()V

    .line 1191
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->q:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->release()V

    .line 1193
    :cond_3
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->e:Lcom/tkay/expressad/video/module/a/a;

    if-eqz v0, :cond_4

    .line 1194
    iput-object v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->e:Lcom/tkay/expressad/video/module/a/a;

    :cond_4
    return-void
.end method

.method public resizeMiniCard(III)V
    .locals 1

    .line 542
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->p:Lcom/tkay/expressad/video/module/TkayClickMiniCardView;

    if-eqz v0, :cond_0

    .line 543
    invoke-virtual {v0, p1, p2}, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;->resizeMiniCard(II)V

    .line 544
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->p:Lcom/tkay/expressad/video/module/TkayClickMiniCardView;

    invoke-virtual {p1, p3}, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;->setRadius(I)V

    .line 545
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->removeAllViews()V

    .line 546
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->setMatchParent()V

    const/4 p1, 0x1

    .line 547
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->T:Z

    .line 548
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->bringToFront()V

    .line 549
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->m()V

    :cond_0
    return-void
.end method

.method public setCloseDelayTime(I)V
    .locals 0

    .line 669
    iput p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->z:I

    return-void
.end method

.method public setEndscreenType(I)V
    .locals 0

    .line 661
    iput p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->y:I

    return-void
.end method

.method public setJSFactory(Lcom/tkay/expressad/video/signal/factory/b;)V
    .locals 0

    .line 144
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->Q:Lcom/tkay/expressad/video/signal/factory/b;

    return-void
.end method

.method public setNotchPadding(IIIII)V
    .locals 10

    .line 1231
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "NOTCH ContainerView "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

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

    .line 1233
    iput p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->O:I

    .line 1234
    iput p2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->K:I

    .line 1235
    iput p3, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->L:I

    .line 1236
    iput p4, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->M:I

    .line 1237
    iput p5, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->N:I

    .line 1239
    invoke-static {p1, p2, p3, p4, p5}, Lcom/tkay/expressad/foundation/h/h;->a(IIIII)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->P:Ljava/lang/String;

    .line 1241
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->q:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    if-eqz p1, :cond_0

    .line 1242
    invoke-virtual {p1, p2, p3, p4, p5}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->setNotchPadding(IIII)V

    .line 1245
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->r:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    const-string v0, "oncutoutfetched"

    if-eqz p1, :cond_1

    iget-object p1, p1, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz p1, :cond_1

    .line 1246
    iget-object v4, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->r:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    iget-object v5, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->P:Ljava/lang/String;

    move v6, p2

    move v7, p3

    move v8, p4

    move v9, p5

    invoke-virtual/range {v4 .. v9}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->setNotchValue(Ljava/lang/String;IIII)V

    .line 1247
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->r:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    iget-object p1, p1, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->P:Ljava/lang/String;

    invoke-virtual {v1}, Ljava/lang/String;->getBytes()[B

    move-result-object v1

    invoke-static {v1, v3}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v1

    invoke-static {p1, v0, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    .line 1250
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->n:Lcom/tkay/expressad/video/module/TkayPlayableView;

    if-eqz p1, :cond_2

    iget-object p1, p1, Lcom/tkay/expressad/video/module/TkayPlayableView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz p1, :cond_2

    .line 1251
    iget-object v4, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->n:Lcom/tkay/expressad/video/module/TkayPlayableView;

    iget-object v5, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->P:Ljava/lang/String;

    move v6, p2

    move v7, p3

    move v8, p4

    move v9, p5

    invoke-virtual/range {v4 .. v9}, Lcom/tkay/expressad/video/module/TkayPlayableView;->setNotchValue(Ljava/lang/String;IIII)V

    .line 1252
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->n:Lcom/tkay/expressad/video/module/TkayPlayableView;

    iget-object p1, p1, Lcom/tkay/expressad/video/module/TkayPlayableView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->P:Ljava/lang/String;

    invoke-virtual {v1}, Ljava/lang/String;->getBytes()[B

    move-result-object v1

    invoke-static {v1, v3}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v1

    invoke-static {p1, v0, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    .line 1255
    :cond_2
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->R:Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;

    if-eqz p1, :cond_3

    .line 1256
    invoke-virtual {p1, p2, p3, p4, p5}, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->setNotchPadding(IIII)V

    :cond_3
    return-void
.end method

.method public setNotifyListener(Lcom/tkay/expressad/video/module/a/a;)V
    .locals 6

    .line 578
    invoke-super {p0, p1}, Lcom/tkay/expressad/video/module/TkayBaseView;->setNotifyListener(Lcom/tkay/expressad/video/module/a/a;)V

    const/16 v0, 0x8

    new-array v1, v0, [Lcom/tkay/expressad/video/module/TkayBaseView;

    .line 579
    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->n:Lcom/tkay/expressad/video/module/TkayPlayableView;

    const/4 v3, 0x0

    aput-object v2, v1, v3

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->o:Lcom/tkay/expressad/video/module/TkayClickCTAView;

    const/4 v4, 0x1

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->p:Lcom/tkay/expressad/video/module/TkayClickMiniCardView;

    const/4 v4, 0x2

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->q:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    const/4 v4, 0x3

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->r:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    const/4 v4, 0x4

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->t:Lcom/tkay/expressad/video/module/TkayVastEndCardView;

    const/4 v4, 0x5

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->u:Lcom/tkay/expressad/video/module/TkayLandingPageView;

    const/4 v4, 0x6

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->s:Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;

    const/4 v4, 0x7

    aput-object v2, v1, v4

    :goto_0
    if-ge v3, v0, :cond_2

    .line 8048
    aget-object v2, v1, v3

    if-eqz v2, :cond_1

    .line 8050
    instance-of v4, v2, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;

    if-eqz v4, :cond_0

    .line 8051
    new-instance v4, Lcom/tkay/expressad/video/module/a/a/g;

    iget-object v5, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->p:Lcom/tkay/expressad/video/module/TkayClickMiniCardView;

    invoke-direct {v4, v5, p1}, Lcom/tkay/expressad/video/module/a/a/g;-><init>(Lcom/tkay/expressad/video/module/TkayClickMiniCardView;Lcom/tkay/expressad/video/module/a/a;)V

    invoke-virtual {v2, v4}, Lcom/tkay/expressad/video/module/TkayBaseView;->setNotifyListener(Lcom/tkay/expressad/video/module/a/a;)V

    goto :goto_1

    .line 8053
    :cond_0
    new-instance v4, Lcom/tkay/expressad/video/module/a/a/i;

    invoke-direct {v4, p1}, Lcom/tkay/expressad/video/module/a/a/i;-><init>(Lcom/tkay/expressad/video/module/a/a;)V

    invoke-virtual {v2, v4}, Lcom/tkay/expressad/video/module/TkayBaseView;->setNotifyListener(Lcom/tkay/expressad/video/module/a/a;)V

    :cond_1
    :goto_1
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_2
    return-void
.end method

.method public setOnPause()V
    .locals 1

    .line 1267
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->q:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    if-eqz v0, :cond_0

    .line 1268
    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->setOnPause()V

    :cond_0
    return-void
.end method

.method public setOnResume()V
    .locals 1

    .line 1261
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->q:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    if-eqz v0, :cond_0

    .line 1262
    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->setOnResume()V

    :cond_0
    return-void
.end method

.method public setPlayCloseBtnTm(I)V
    .locals 0

    .line 673
    iput p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->A:I

    return-void
.end method

.method public setRewardStatus(Z)V
    .locals 0

    .line 1273
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->J:Z

    return-void
.end method

.method public setShowingTransparent(Z)V
    .locals 0

    .line 626
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->D:Z

    return-void
.end method

.method public setTkayClickMiniCardViewTransparent()V
    .locals 2

    .line 1146
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->p:Lcom/tkay/expressad/video/module/TkayClickMiniCardView;

    if-eqz v0, :cond_0

    .line 1147
    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;->setTkayClickMiniCardViewTransparent()V

    .line 1148
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->p:Lcom/tkay/expressad/video/module/TkayClickMiniCardView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;->setTkayClickMiniCardViewClickable(Z)V

    :cond_0
    return-void
.end method

.method public setUnitID(Ljava/lang/String;)V
    .locals 0

    .line 638
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->w:Ljava/lang/String;

    return-void
.end method

.method public setVideoInteractiveType(I)V
    .locals 2

    .line 645
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 646
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-static {v0}, Lcom/tkay/expressad/video/dynview/i/c;->a(Lcom/tkay/expressad/foundation/d/c;)I

    move-result v0

    const/16 v1, 0x64

    if-ne v0, v1, :cond_0

    .line 648
    iput p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->x:I

    return-void

    .line 650
    :cond_0
    iput v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->x:I

    return-void

    .line 654
    :cond_1
    iput p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->x:I

    return-void
.end method

.method public setVideoSkipTime(I)V
    .locals 0

    .line 164
    iput p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->H:I

    return-void
.end method

.method public showAlertWebView()Z
    .locals 4

    .line 263
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->v:Lcom/tkay/expressad/video/module/TkayAlertWebview;

    const/4 v1, 0x0

    if-eqz v0, :cond_5

    .line 264
    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayAlertWebview;->isLoadSuccess()Z

    move-result v0

    if-eqz v0, :cond_5

    .line 266
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->setMatchParent()V

    .line 4251
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    .line 4252
    invoke-virtual {v0}, Landroid/view/ViewGroup;->getChildCount()I

    move-result v2

    .line 4253
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

    .line 267
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->T:Z

    if-nez v0, :cond_1

    .line 269
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->removeAllViews()V

    .line 270
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->bringToFront()V

    .line 271
    iput-boolean v3, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->S:Z

    .line 273
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->p:Lcom/tkay/expressad/video/module/TkayClickMiniCardView;

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-eqz v0, :cond_2

    return v1

    .line 4837
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->v:Lcom/tkay/expressad/video/module/TkayAlertWebview;

    if-nez v0, :cond_3

    .line 4838
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->o()V

    .line 4840
    :cond_3
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->v:Lcom/tkay/expressad/video/module/TkayAlertWebview;

    if-eqz v0, :cond_4

    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayAlertWebview;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-eqz v0, :cond_4

    .line 4841
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->v:Lcom/tkay/expressad/video/module/TkayAlertWebview;

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->removeView(Landroid/view/View;)V

    .line 4843
    :cond_4
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->v:Lcom/tkay/expressad/video/module/TkayAlertWebview;

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->addView(Landroid/view/View;)V

    .line 278
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/module/TkayContainerView;->setBackgroundColor(I)V

    .line 279
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->v:Lcom/tkay/expressad/video/module/TkayAlertWebview;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayAlertWebview;->webviewshow()V

    return v3

    :cond_5
    return v1
.end method

.method public showEndcard(I)V
    .locals 4

    .line 371
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

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

    .line 405
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->removeAllViews()V

    .line 406
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->setMatchParent()V

    .line 407
    iput-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->T:Z

    .line 408
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->bringToFront()V

    .line 409
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->e()V

    .line 410
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 v2, 0x75

    invoke-interface {p1, v2, v0}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    goto/16 :goto_0

    .line 392
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 v2, 0x6a

    invoke-interface {p1, v2, v0}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    goto/16 :goto_0

    .line 384
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 v3, 0x71

    invoke-interface {p1, v3, v0}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    .line 385
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->removeAllViews()V

    .line 386
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->setMatchParent()V

    .line 6727
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->u:Lcom/tkay/expressad/video/module/TkayLandingPageView;

    if-nez p1, :cond_2

    .line 6728
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->Q:Lcom/tkay/expressad/video/signal/factory/b;

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-direct {p0, p1, v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->a(Lcom/tkay/expressad/video/signal/factory/b;Ljava/lang/Integer;)V

    .line 6731
    :cond_2
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->u:Lcom/tkay/expressad/video/module/TkayLandingPageView;

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->w:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/video/module/TkayLandingPageView;->setUnitId(Ljava/lang/String;)V

    .line 6732
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->u:Lcom/tkay/expressad/video/module/TkayLandingPageView;

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->Q:Lcom/tkay/expressad/video/signal/factory/b;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/video/module/TkayLandingPageView;->preLoadData(Lcom/tkay/expressad/video/signal/factory/b;)V

    .line 6733
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->u:Lcom/tkay/expressad/video/module/TkayLandingPageView;

    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/module/TkayContainerView;->addView(Landroid/view/View;)V

    .line 388
    iput-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->T:Z

    .line 389
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->bringToFront()V

    goto :goto_0

    .line 377
    :cond_3
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->removeAllViews()V

    .line 378
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->setMatchParent()V

    .line 6717
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->t:Lcom/tkay/expressad/video/module/TkayVastEndCardView;

    if-nez p1, :cond_4

    .line 6718
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->Q:Lcom/tkay/expressad/video/signal/factory/b;

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-direct {p0, p1, v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->a(Lcom/tkay/expressad/video/signal/factory/b;Ljava/lang/Integer;)V

    .line 6720
    :cond_4
    new-instance p1, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v0, -0x1

    invoke-direct {p1, v0, v0}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v2, 0xd

    .line 6721
    invoke-virtual {p1, v2, v0}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 6722
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->t:Lcom/tkay/expressad/video/module/TkayVastEndCardView;

    invoke-virtual {p0, v0, p1}, Lcom/tkay/expressad/video/module/TkayContainerView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 6723
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->t:Lcom/tkay/expressad/video/module/TkayVastEndCardView;

    invoke-virtual {p1}, Lcom/tkay/expressad/video/module/TkayVastEndCardView;->notifyShowListener()V

    .line 380
    iput-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->T:Z

    .line 381
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->bringToFront()V

    goto :goto_0

    .line 395
    :cond_5
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->J()I

    move-result p1

    const/4 v0, 0x2

    if-ne p1, v0, :cond_6

    .line 396
    iput-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->E:Z

    .line 398
    :cond_6
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->n:Lcom/tkay/expressad/video/module/TkayPlayableView;

    invoke-static {p1}, Lcom/tkay/expressad/video/module/TkayContainerView;->a(Landroid/view/View;)V

    .line 399
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->setMatchParent()V

    .line 400
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->i()V

    goto :goto_0

    .line 374
    :cond_7
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 v2, 0x68

    invoke-interface {p1, v2, v0}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    .line 414
    :cond_8
    :goto_0
    iput-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->B:Z

    return-void
.end method

.method public showMiniCard(IIIII)V
    .locals 1

    .line 522
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->p:Lcom/tkay/expressad/video/module/TkayClickMiniCardView;

    if-eqz v0, :cond_0

    .line 523
    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;->setMiniCardLocation(IIII)V

    .line 524
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->p:Lcom/tkay/expressad/video/module/TkayClickMiniCardView;

    invoke-virtual {p1, p5}, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;->setRadius(I)V

    .line 525
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->p:Lcom/tkay/expressad/video/module/TkayClickMiniCardView;

    const/16 p2, 0x8

    invoke-virtual {p1, p2}, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;->setCloseVisible(I)V

    .line 526
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->p:Lcom/tkay/expressad/video/module/TkayClickMiniCardView;

    const/4 p2, 0x0

    invoke-virtual {p1, p2}, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;->setClickable(Z)V

    .line 527
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->removeAllViews()V

    .line 528
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->setMatchParent()V

    const/4 p1, 0x1

    .line 529
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->T:Z

    .line 530
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->bringToFront()V

    .line 531
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->m()V

    .line 532
    iget-boolean p2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->G:Z

    if-nez p2, :cond_0

    .line 533
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->G:Z

    .line 534
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 p2, 0x6d

    const-string p3, ""

    invoke-interface {p1, p2, p3}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    .line 535
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 p2, 0x75

    invoke-interface {p1, p2, p3}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    :cond_0
    return-void
.end method

.method public showOrderCampView()V
    .locals 5

    .line 424
    new-instance v0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->a:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->R:Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;

    .line 425
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->U:Ljava/util/List;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->setCampaignExes(Ljava/util/List;)V

    .line 426
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->e:Lcom/tkay/expressad/video/module/a/a;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->e:Lcom/tkay/expressad/video/module/a/a;

    instance-of v0, v0, Lcom/tkay/expressad/video/module/a/a/k;

    if-eqz v0, :cond_0

    .line 427
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->e:Lcom/tkay/expressad/video/module/a/a;

    check-cast v0, Lcom/tkay/expressad/video/module/a/a/k;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->U:Ljava/util/List;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/a/a/k;->a(Ljava/util/List;)V

    .line 429
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->R:Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;

    new-instance v1, Lcom/tkay/expressad/video/module/a/a/i;

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->e:Lcom/tkay/expressad/video/module/a/a;

    invoke-direct {v1, v2}, Lcom/tkay/expressad/video/module/a/a/i;-><init>(Lcom/tkay/expressad/video/module/a/a;)V

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->setNotifyListener(Lcom/tkay/expressad/video/module/a/a;)V

    .line 430
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->R:Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;

    iget-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->J:Z

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->setRewarded(Z)V

    .line 431
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->R:Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;

    iget v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->K:I

    iget v2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->L:I

    iget v3, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->M:I

    iget v4, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->N:I

    invoke-virtual {v0, v1, v2, v3, v4}, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->setNotchPadding(IIII)V

    .line 432
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->R:Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;

    new-instance v1, Lcom/tkay/expressad/video/module/TkayContainerView$3;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/video/module/TkayContainerView$3;-><init>(Lcom/tkay/expressad/video/module/TkayContainerView;)V

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->setCampOrderViewBuildCallback(Lcom/tkay/expressad/video/dynview/f/b;)V

    .line 449
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->R:Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;

    invoke-virtual {v0, p0}, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->createView(Landroid/view/ViewGroup;)V

    return-void
.end method

.method public showPlayableView()V
    .locals 8

    .line 240
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_3

    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->E:Z

    if-nez v0, :cond_3

    .line 242
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->removeAllViews()V

    .line 243
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->setMatchParent()V

    .line 3792
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->n:Lcom/tkay/expressad/video/module/TkayPlayableView;

    if-nez v0, :cond_0

    .line 3793
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->Q:Lcom/tkay/expressad/video/signal/factory/b;

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->preLoadData(Lcom/tkay/expressad/video/signal/factory/b;)V

    .line 3796
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->n:Lcom/tkay/expressad/video/module/TkayPlayableView;

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->addView(Landroid/view/View;)V

    .line 3797
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->n:Lcom/tkay/expressad/video/module/TkayPlayableView;

    if-eqz v0, :cond_2

    .line 3798
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->w:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/TkayPlayableView;->setUnitId(Ljava/lang/String;)V

    .line 3799
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->H()Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->J()I

    move-result v0

    const/4 v1, 0x2

    if-ne v0, v1, :cond_1

    .line 3801
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->n:Lcom/tkay/expressad/video/module/TkayPlayableView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/TkayPlayableView;->setCloseVisible(I)V

    .line 3803
    :cond_1
    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->n:Lcom/tkay/expressad/video/module/TkayPlayableView;

    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->P:Ljava/lang/String;

    iget v4, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->K:I

    iget v5, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->L:I

    iget v6, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->M:I

    iget v7, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->N:I

    invoke-virtual/range {v2 .. v7}, Lcom/tkay/expressad/video/module/TkayPlayableView;->setNotchValue(Ljava/lang/String;IIII)V

    :cond_2
    const/4 v0, 0x1

    .line 245
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->T:Z

    .line 246
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->bringToFront()V

    :cond_3
    return-void
.end method

.method public showVideoClickView(I)V
    .locals 3

    .line 290
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_12

    const/4 v0, -0x1

    if-eq p1, v0, :cond_11

    const/4 v1, 0x1

    if-eq p1, v1, :cond_9

    const/4 v0, 0x2

    if-eq p1, v0, :cond_0

    goto/16 :goto_3

    .line 323
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->o:Lcom/tkay/expressad/video/module/TkayClickCTAView;

    if-eqz p1, :cond_1

    invoke-virtual {p1}, Lcom/tkay/expressad/video/module/TkayClickCTAView;->getParent()Landroid/view/ViewParent;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 324
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->o:Lcom/tkay/expressad/video/module/TkayClickCTAView;

    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/module/TkayContainerView;->removeView(Landroid/view/View;)V

    .line 326
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->v:Lcom/tkay/expressad/video/module/TkayAlertWebview;

    if-eqz p1, :cond_2

    invoke-virtual {p1}, Lcom/tkay/expressad/video/module/TkayAlertWebview;->getParent()Landroid/view/ViewParent;

    move-result-object p1

    if-eqz p1, :cond_2

    return-void

    .line 329
    :cond_2
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->p:Lcom/tkay/expressad/video/module/TkayClickMiniCardView;

    if-eqz p1, :cond_3

    invoke-virtual {p1}, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;->getParent()Landroid/view/ViewParent;

    move-result-object p1

    if-nez p1, :cond_4

    .line 331
    :cond_3
    :try_start_0
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz p1, :cond_4

    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->J()I

    move-result p1

    if-ne p1, v1, :cond_4

    .line 332
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->setMatchParent()V

    .line 333
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->m()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 336
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 340
    :cond_4
    :goto_0
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->miniCardLoaded()Z

    move-result p1

    if-eqz p1, :cond_8

    .line 341
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->r:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    if-eqz p1, :cond_5

    invoke-virtual {p1}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->getParent()Landroid/view/ViewParent;

    move-result-object p1

    if-eqz p1, :cond_5

    .line 342
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->r:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/module/TkayContainerView;->removeView(Landroid/view/View;)V

    .line 345
    :cond_5
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 v0, 0x70

    const-string v2, ""

    invoke-interface {p1, v0, v2}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    .line 346
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz p1, :cond_6

    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->aw()Z

    move-result p1

    if-nez p1, :cond_6

    .line 347
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->ax()V

    .line 348
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->a:Landroid/content/Context;

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/module/b/a;->e(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;)V

    .line 350
    :cond_6
    iget-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->D:Z

    if-eqz p1, :cond_7

    .line 351
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 v0, 0x73

    invoke-interface {p1, v0, v2}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    goto :goto_1

    .line 353
    :cond_7
    iput-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->T:Z

    .line 354
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->bringToFront()V

    .line 355
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->webviewshow()V

    .line 357
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    invoke-virtual {p1}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/module/TkayContainerView;->onConfigurationChanged(Landroid/content/res/Configuration;)V

    .line 360
    :goto_1
    iput-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->C:Z

    return-void

    .line 362
    :cond_8
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->p()V

    goto/16 :goto_3

    .line 298
    :cond_9
    iget-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->B:Z

    if-eqz p1, :cond_a

    return-void

    .line 301
    :cond_a
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->r:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    if-eqz p1, :cond_b

    invoke-virtual {p1}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->getParent()Landroid/view/ViewParent;

    move-result-object p1

    if-eqz p1, :cond_b

    .line 302
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->r:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/module/TkayContainerView;->removeView(Landroid/view/View;)V

    .line 304
    :cond_b
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->p:Lcom/tkay/expressad/video/module/TkayClickMiniCardView;

    if-eqz p1, :cond_c

    invoke-virtual {p1}, Lcom/tkay/expressad/video/module/TkayClickMiniCardView;->getParent()Landroid/view/ViewParent;

    move-result-object p1

    if-eqz p1, :cond_c

    .line 305
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->p:Lcom/tkay/expressad/video/module/TkayClickMiniCardView;

    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/module/TkayContainerView;->removeView(Landroid/view/View;)V

    .line 307
    :cond_c
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->o:Lcom/tkay/expressad/video/module/TkayClickCTAView;

    if-eqz p1, :cond_d

    invoke-virtual {p1}, Lcom/tkay/expressad/video/module/TkayClickCTAView;->getParent()Landroid/view/ViewParent;

    move-result-object p1

    if-nez p1, :cond_10

    .line 309
    :cond_d
    :try_start_1
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz p1, :cond_10

    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->J()I

    move-result p1

    if-ne p1, v1, :cond_10

    .line 310
    iput-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->T:Z

    .line 5808
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->o:Lcom/tkay/expressad/video/module/TkayClickCTAView;

    if-nez p1, :cond_e

    .line 5809
    invoke-direct {p0, v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->b(I)V

    .line 5811
    :cond_e
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->o:Lcom/tkay/expressad/video/module/TkayClickCTAView;

    if-eqz p1, :cond_10

    .line 5812
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz p1, :cond_f

    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result p1

    if-nez p1, :cond_10

    .line 5815
    :cond_f
    new-instance p1, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v1, -0x2

    invoke-direct {p1, v1, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v1, 0xc

    .line 5816
    invoke-virtual {p1, v1, v0}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 5817
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->o:Lcom/tkay/expressad/video/module/TkayClickCTAView;

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1, p1}, Lcom/tkay/expressad/video/module/TkayContainerView;->addView(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_2

    :catch_1
    move-exception p1

    .line 314
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 318
    :cond_10
    :goto_2
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->isLast()Z

    move-result p1

    if-eqz p1, :cond_12

    .line 319
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->bringToFront()V

    return-void

    .line 293
    :cond_11
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->isLast()Z

    move-result p1

    if-nez p1, :cond_12

    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->endCardShowing()Z

    move-result p1

    if-nez p1, :cond_12

    .line 294
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->p()V

    :cond_12
    :goto_3
    return-void
.end method

.method public showVideoEndCover()V
    .locals 4

    .line 418
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->removeAllViews()V

    .line 419
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->setMatchParent()V

    .line 6782
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->s:Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;

    if-nez v0, :cond_0

    .line 6783
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->Q:Lcom/tkay/expressad/video/signal/factory/b;

    .line 6883
    iput-object v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->Q:Lcom/tkay/expressad/video/signal/factory/b;

    if-nez v0, :cond_0

    .line 6885
    new-instance v0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->a:Landroid/content/Context;

    invoke-direct {v0, v2}, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->s:Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;

    .line 6886
    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->setCampaign(Lcom/tkay/expressad/foundation/d/c;)V

    .line 6887
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->s:Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;

    new-instance v2, Lcom/tkay/expressad/video/module/a/a/i;

    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->e:Lcom/tkay/expressad/video/module/a/a;

    invoke-direct {v2, v3}, Lcom/tkay/expressad/video/module/a/a/i;-><init>(Lcom/tkay/expressad/video/module/a/a;)V

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->setNotifyListener(Lcom/tkay/expressad/video/module/a/a;)V

    .line 6888
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->s:Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->preLoadData(Lcom/tkay/expressad/video/signal/factory/b;)V

    .line 6785
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->s:Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->addView(Landroid/view/View;)V

    .line 6786
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->onConfigurationChanged(Landroid/content/res/Configuration;)V

    const/4 v0, 0x1

    .line 6787
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->T:Z

    .line 6788
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->bringToFront()V

    return-void
.end method

.method public toggleCloseBtn(I)V
    .locals 1

    .line 469
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->n:Lcom/tkay/expressad/video/module/TkayPlayableView;

    if-eqz v0, :cond_0

    .line 470
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/video/module/TkayPlayableView;->toggleCloseBtn(I)V

    .line 472
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->r:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    if-eqz v0, :cond_1

    .line 473
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->toggleCloseBtn(I)V

    :cond_1
    return-void
.end method

.method public triggerCloseBtn(Ljava/lang/String;)V
    .locals 2

    .line 494
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz p1, :cond_0

    .line 495
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 v0, 0x7a

    const-string v1, ""

    invoke-interface {p1, v0, v1}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    .line 496
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 v0, 0x68

    invoke-interface {p1, v0, v1}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    :cond_0
    return-void
.end method

.method public webviewshow()V
    .locals 5

    const/4 v0, 0x4

    new-array v1, v0, [Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    .line 563
    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->n:Lcom/tkay/expressad/video/module/TkayPlayableView;

    const/4 v3, 0x0

    aput-object v2, v1, v3

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->p:Lcom/tkay/expressad/video/module/TkayClickMiniCardView;

    const/4 v4, 0x1

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->r:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    const/4 v4, 0x2

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayContainerView;->v:Lcom/tkay/expressad/video/module/TkayAlertWebview;

    const/4 v4, 0x3

    aput-object v2, v1, v4

    :goto_0
    if-ge v3, v0, :cond_1

    .line 7072
    aget-object v2, v1, v3

    if-eqz v2, :cond_0

    .line 7073
    invoke-virtual {v2}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->getVisibility()I

    move-result v4

    if-nez v4, :cond_0

    invoke-virtual {v2}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->getParent()Landroid/view/ViewParent;

    move-result-object v4

    if-eqz v4, :cond_0

    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayContainerView;->isLast()Z

    move-result v4

    if-nez v4, :cond_0

    .line 7074
    invoke-virtual {v2}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->webviewshow()V

    :cond_0
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_1
    return-void
.end method
