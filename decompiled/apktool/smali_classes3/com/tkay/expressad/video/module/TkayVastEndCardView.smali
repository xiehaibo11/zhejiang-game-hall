.class public Lcom/tkay/expressad/video/module/TkayVastEndCardView;
.super Lcom/tkay/expressad/video/module/TkayBaseView;

# interfaces
.implements Lcom/tkay/expressad/video/signal/f;


# static fields
.field private static final n:Ljava/lang/String; = "tkay_reward_endcard_vast"


# instance fields
.field private o:Landroid/view/ViewGroup;

.field private p:Landroid/view/View;

.field private q:Landroid/view/View;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 22
    invoke-direct {p0, p1}, Lcom/tkay/expressad/video/module/TkayBaseView;-><init>(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 26
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/video/module/TkayBaseView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method private a()V
    .locals 3

    .line 41
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVastEndCardView;->f:Z

    if-eqz v0, :cond_0

    .line 42
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayVastEndCardView;->setMatchParent()V

    const-string v0, "tkay_reward_endcard_vast_bg"

    .line 43
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayVastEndCardView;->findColor(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayVastEndCardView;->setBackgroundResource(I)V

    const/4 v0, 0x1

    .line 44
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayVastEndCardView;->setClickable(Z)V

    .line 45
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVastEndCardView;->o:Landroid/view/ViewGroup;

    invoke-virtual {v0}, Landroid/view/ViewGroup;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    check-cast v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/16 v1, 0xd

    const/4 v2, -0x1

    .line 46
    invoke-virtual {v0, v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    :cond_0
    return-void
.end method

.method private b()Z
    .locals 4

    const-string v0, "tkay_rl_content"

    .line 75
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayVastEndCardView;->findID(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayVastEndCardView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/tkay/expressad/video/module/TkayVastEndCardView;->o:Landroid/view/ViewGroup;

    const-string v0, "tkay_iv_vastclose"

    .line 76
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayVastEndCardView;->findID(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayVastEndCardView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/video/module/TkayVastEndCardView;->p:Landroid/view/View;

    const-string v0, "tkay_iv_vastok"

    .line 77
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayVastEndCardView;->findID(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayVastEndCardView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/video/module/TkayVastEndCardView;->q:Landroid/view/View;

    const/4 v1, 0x3

    new-array v1, v1, [Landroid/view/View;

    .line 78
    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayVastEndCardView;->o:Landroid/view/ViewGroup;

    const/4 v3, 0x0

    aput-object v2, v1, v3

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayVastEndCardView;->p:Landroid/view/View;

    const/4 v3, 0x1

    aput-object v2, v1, v3

    const/4 v2, 0x2

    aput-object v0, v1, v2

    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/module/TkayVastEndCardView;->isNotNULL([Landroid/view/View;)Z

    move-result v0

    return v0
.end method


# virtual methods
.method protected final c()V
    .locals 2

    .line 52
    invoke-super {p0}, Lcom/tkay/expressad/video/module/TkayBaseView;->c()V

    .line 53
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVastEndCardView;->f:Z

    if-eqz v0, :cond_0

    .line 54
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVastEndCardView;->p:Landroid/view/View;

    new-instance v1, Lcom/tkay/expressad/video/module/TkayVastEndCardView$1;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/video/module/TkayVastEndCardView$1;-><init>(Lcom/tkay/expressad/video/module/TkayVastEndCardView;)V

    invoke-virtual {v0, v1}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 60
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVastEndCardView;->q:Landroid/view/View;

    new-instance v1, Lcom/tkay/expressad/video/module/TkayVastEndCardView$2;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/video/module/TkayVastEndCardView$2;-><init>(Lcom/tkay/expressad/video/module/TkayVastEndCardView;)V

    invoke-virtual {v0, v1}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_0
    return-void
.end method

.method public init(Landroid/content/Context;)V
    .locals 3

    const-string p1, "tkay_reward_endcard_vast"

    .line 31
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/module/TkayVastEndCardView;->findLayout(Ljava/lang/String;)I

    move-result p1

    if-ltz p1, :cond_0

    .line 33
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVastEndCardView;->c:Landroid/view/LayoutInflater;

    invoke-virtual {v0, p1, p0}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    const-string p1, "tkay_rl_content"

    .line 1075
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/module/TkayVastEndCardView;->findID(Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/module/TkayVastEndCardView;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/view/ViewGroup;

    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayVastEndCardView;->o:Landroid/view/ViewGroup;

    const-string p1, "tkay_iv_vastclose"

    .line 1076
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/module/TkayVastEndCardView;->findID(Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/module/TkayVastEndCardView;->findViewById(I)Landroid/view/View;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayVastEndCardView;->p:Landroid/view/View;

    const-string p1, "tkay_iv_vastok"

    .line 1077
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/module/TkayVastEndCardView;->findID(Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/module/TkayVastEndCardView;->findViewById(I)Landroid/view/View;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayVastEndCardView;->q:Landroid/view/View;

    const/4 v0, 0x3

    new-array v0, v0, [Landroid/view/View;

    const/4 v1, 0x0

    .line 1078
    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayVastEndCardView;->o:Landroid/view/ViewGroup;

    aput-object v2, v0, v1

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVastEndCardView;->p:Landroid/view/View;

    const/4 v2, 0x1

    aput-object v1, v0, v2

    const/4 v1, 0x2

    aput-object p1, v0, v1

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayVastEndCardView;->isNotNULL([Landroid/view/View;)Z

    move-result p1

    .line 34
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVastEndCardView;->f:Z

    .line 35
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayVastEndCardView;->c()V

    .line 2041
    iget-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVastEndCardView;->f:Z

    if-eqz p1, :cond_0

    .line 2042
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayVastEndCardView;->setMatchParent()V

    const-string p1, "tkay_reward_endcard_vast_bg"

    .line 2043
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/module/TkayVastEndCardView;->findColor(Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/module/TkayVastEndCardView;->setBackgroundResource(I)V

    .line 2044
    invoke-virtual {p0, v2}, Lcom/tkay/expressad/video/module/TkayVastEndCardView;->setClickable(Z)V

    .line 2045
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVastEndCardView;->o:Landroid/view/ViewGroup;

    invoke-virtual {p1}, Landroid/view/ViewGroup;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object p1

    check-cast p1, Landroid/widget/RelativeLayout$LayoutParams;

    const/16 v0, 0xd

    const/4 v1, -0x1

    .line 2046
    invoke-virtual {p1, v0, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    :cond_0
    return-void
.end method

.method public notifyShowListener()V
    .locals 3

    .line 82
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVastEndCardView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 v1, 0x6f

    const-string v2, ""

    invoke-interface {v0, v1, v2}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    return-void
.end method

.method public preLoadData(Lcom/tkay/expressad/video/signal/factory/b;)V
    .locals 0

    return-void
.end method
