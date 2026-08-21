.class public Lcom/tkay/expressad/video/module/TkayPlayableView;
.super Lcom/tkay/expressad/video/module/TkayH5EndCardView;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 10
    invoke-direct {p0, p1}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;-><init>(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 14
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method


# virtual methods
.method protected final a()Ljava/lang/String;
    .locals 1

    .line 24
    invoke-super {p0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->a()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public init(Landroid/content/Context;)V
    .locals 0

    .line 19
    invoke-super {p0, p1}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->init(Landroid/content/Context;)V

    return-void
.end method

.method public onBackPress()V
    .locals 0

    .line 34
    invoke-super {p0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->onBackPress()V

    return-void
.end method

.method public preLoadData(Lcom/tkay/expressad/video/signal/factory/b;)V
    .locals 0

    .line 29
    invoke-super {p0, p1}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->preLoadData(Lcom/tkay/expressad/video/signal/factory/b;)V

    const/4 p1, 0x1

    .line 30
    invoke-super {p0, p1}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->setLoadPlayable(Z)V

    return-void
.end method
