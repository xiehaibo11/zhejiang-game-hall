.class public Lcom/tkay/nativead/api/TYNativePrepareInfo;
.super Ljava/lang/Object;


# instance fields
.field adFromView:Landroid/view/View;

.field adLogoView:Landroid/view/View;

.field choiceViewLayoutParams:Landroid/widget/FrameLayout$LayoutParams;

.field private final clickViewList:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Landroid/view/View;",
            ">;"
        }
    .end annotation
.end field

.field closeView:Landroid/view/View;

.field ctaView:Landroid/view/View;

.field descView:Landroid/view/View;

.field private domainView:Landroid/view/View;

.field iconView:Landroid/view/View;

.field mainImageView:Landroid/view/View;

.field parentView:Landroid/view/View;

.field titleView:Landroid/view/View;

.field private warningView:Landroid/view/View;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 9
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 19
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/tkay/nativead/api/TYNativePrepareInfo;->clickViewList:Ljava/util/List;

    return-void
.end method

.method private declared-synchronized addClickView(Landroid/view/View;)V
    .locals 1

    monitor-enter p0

    if-nez p1, :cond_0

    .line 144
    monitor-exit p0

    return-void

    .line 146
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/tkay/nativead/api/TYNativePrepareInfo;->clickViewList:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 148
    iget-object v0, p0, Lcom/tkay/nativead/api/TYNativePrepareInfo;->closeView:Landroid/view/View;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/nativead/api/TYNativePrepareInfo;->closeView:Landroid/view/View;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-ne v0, p1, :cond_1

    .line 149
    monitor-exit p0

    return-void

    .line 151
    :cond_1
    :try_start_1
    iget-object v0, p0, Lcom/tkay/nativead/api/TYNativePrepareInfo;->clickViewList:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 153
    :cond_2
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method


# virtual methods
.method public getAdFromView()Landroid/view/View;
    .locals 1

    .line 111
    iget-object v0, p0, Lcom/tkay/nativead/api/TYNativePrepareInfo;->adFromView:Landroid/view/View;

    return-object v0
.end method

.method public getAdLogoView()Landroid/view/View;
    .locals 1

    .line 119
    iget-object v0, p0, Lcom/tkay/nativead/api/TYNativePrepareInfo;->adLogoView:Landroid/view/View;

    return-object v0
.end method

.method public getChoiceViewLayoutParams()Landroid/widget/FrameLayout$LayoutParams;
    .locals 1

    .line 83
    iget-object v0, p0, Lcom/tkay/nativead/api/TYNativePrepareInfo;->choiceViewLayoutParams:Landroid/widget/FrameLayout$LayoutParams;

    return-object v0
.end method

.method public getClickViewList()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Landroid/view/View;",
            ">;"
        }
    .end annotation

    .line 91
    iget-object v0, p0, Lcom/tkay/nativead/api/TYNativePrepareInfo;->clickViewList:Ljava/util/List;

    return-object v0
.end method

.method public getCloseView()Landroid/view/View;
    .locals 1

    .line 103
    iget-object v0, p0, Lcom/tkay/nativead/api/TYNativePrepareInfo;->closeView:Landroid/view/View;

    return-object v0
.end method

.method public getCtaView()Landroid/view/View;
    .locals 1

    .line 74
    iget-object v0, p0, Lcom/tkay/nativead/api/TYNativePrepareInfo;->ctaView:Landroid/view/View;

    return-object v0
.end method

.method public getDescView()Landroid/view/View;
    .locals 1

    .line 65
    iget-object v0, p0, Lcom/tkay/nativead/api/TYNativePrepareInfo;->descView:Landroid/view/View;

    return-object v0
.end method

.method public getDomainView()Landroid/view/View;
    .locals 1

    .line 127
    iget-object v0, p0, Lcom/tkay/nativead/api/TYNativePrepareInfo;->domainView:Landroid/view/View;

    return-object v0
.end method

.method public getIconView()Landroid/view/View;
    .locals 1

    .line 47
    iget-object v0, p0, Lcom/tkay/nativead/api/TYNativePrepareInfo;->iconView:Landroid/view/View;

    return-object v0
.end method

.method public getMainImageView()Landroid/view/View;
    .locals 1

    .line 56
    iget-object v0, p0, Lcom/tkay/nativead/api/TYNativePrepareInfo;->mainImageView:Landroid/view/View;

    return-object v0
.end method

.method public getParentView()Landroid/view/View;
    .locals 1

    .line 30
    iget-object v0, p0, Lcom/tkay/nativead/api/TYNativePrepareInfo;->parentView:Landroid/view/View;

    return-object v0
.end method

.method public getTitleView()Landroid/view/View;
    .locals 1

    .line 38
    iget-object v0, p0, Lcom/tkay/nativead/api/TYNativePrepareInfo;->titleView:Landroid/view/View;

    return-object v0
.end method

.method public getWarningView()Landroid/view/View;
    .locals 1

    .line 135
    iget-object v0, p0, Lcom/tkay/nativead/api/TYNativePrepareInfo;->warningView:Landroid/view/View;

    return-object v0
.end method

.method public setAdFromView(Landroid/view/View;)V
    .locals 0

    .line 115
    iput-object p1, p0, Lcom/tkay/nativead/api/TYNativePrepareInfo;->adFromView:Landroid/view/View;

    return-void
.end method

.method public setAdLogoView(Landroid/view/View;)V
    .locals 0

    .line 123
    iput-object p1, p0, Lcom/tkay/nativead/api/TYNativePrepareInfo;->adLogoView:Landroid/view/View;

    return-void
.end method

.method public setChoiceViewLayoutParams(Landroid/widget/FrameLayout$LayoutParams;)V
    .locals 0

    .line 87
    iput-object p1, p0, Lcom/tkay/nativead/api/TYNativePrepareInfo;->choiceViewLayoutParams:Landroid/widget/FrameLayout$LayoutParams;

    return-void
.end method

.method public setClickViewList(Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Landroid/view/View;",
            ">;)V"
        }
    .end annotation

    if-eqz p1, :cond_0

    .line 95
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 96
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/view/View;

    .line 97
    invoke-direct {p0, v0}, Lcom/tkay/nativead/api/TYNativePrepareInfo;->addClickView(Landroid/view/View;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public setCloseView(Landroid/view/View;)V
    .locals 0

    .line 107
    iput-object p1, p0, Lcom/tkay/nativead/api/TYNativePrepareInfo;->closeView:Landroid/view/View;

    return-void
.end method

.method public setCtaView(Landroid/view/View;)V
    .locals 0

    .line 78
    iput-object p1, p0, Lcom/tkay/nativead/api/TYNativePrepareInfo;->ctaView:Landroid/view/View;

    .line 79
    invoke-direct {p0, p1}, Lcom/tkay/nativead/api/TYNativePrepareInfo;->addClickView(Landroid/view/View;)V

    return-void
.end method

.method public setDescView(Landroid/view/View;)V
    .locals 0

    .line 69
    iput-object p1, p0, Lcom/tkay/nativead/api/TYNativePrepareInfo;->descView:Landroid/view/View;

    .line 70
    invoke-direct {p0, p1}, Lcom/tkay/nativead/api/TYNativePrepareInfo;->addClickView(Landroid/view/View;)V

    return-void
.end method

.method public setDomainView(Landroid/view/View;)V
    .locals 0

    .line 131
    iput-object p1, p0, Lcom/tkay/nativead/api/TYNativePrepareInfo;->domainView:Landroid/view/View;

    return-void
.end method

.method public setIconView(Landroid/view/View;)V
    .locals 0

    .line 51
    iput-object p1, p0, Lcom/tkay/nativead/api/TYNativePrepareInfo;->iconView:Landroid/view/View;

    .line 52
    invoke-direct {p0, p1}, Lcom/tkay/nativead/api/TYNativePrepareInfo;->addClickView(Landroid/view/View;)V

    return-void
.end method

.method public setMainImageView(Landroid/view/View;)V
    .locals 0

    .line 60
    iput-object p1, p0, Lcom/tkay/nativead/api/TYNativePrepareInfo;->mainImageView:Landroid/view/View;

    .line 61
    invoke-direct {p0, p1}, Lcom/tkay/nativead/api/TYNativePrepareInfo;->addClickView(Landroid/view/View;)V

    return-void
.end method

.method public setParentView(Landroid/view/View;)V
    .locals 0

    .line 34
    iput-object p1, p0, Lcom/tkay/nativead/api/TYNativePrepareInfo;->parentView:Landroid/view/View;

    return-void
.end method

.method public setTitleView(Landroid/view/View;)V
    .locals 0

    .line 42
    iput-object p1, p0, Lcom/tkay/nativead/api/TYNativePrepareInfo;->titleView:Landroid/view/View;

    .line 43
    invoke-direct {p0, p1}, Lcom/tkay/nativead/api/TYNativePrepareInfo;->addClickView(Landroid/view/View;)V

    return-void
.end method

.method public setWarningView(Landroid/view/View;)V
    .locals 0

    .line 139
    iput-object p1, p0, Lcom/tkay/nativead/api/TYNativePrepareInfo;->warningView:Landroid/view/View;

    return-void
.end method
