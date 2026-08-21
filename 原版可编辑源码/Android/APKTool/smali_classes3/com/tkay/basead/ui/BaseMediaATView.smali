.class public abstract Lcom/tkay/basead/ui/BaseMediaATView;
.super Landroid/widget/FrameLayout;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/basead/ui/BaseMediaATView$a;
    }
.end annotation


# instance fields
.field protected a:Lcom/tkay/core/common/f/h;

.field protected b:Lcom/tkay/core/common/f/j;

.field protected c:Lcom/tkay/core/common/f/i;

.field protected d:Lcom/tkay/basead/ui/BaseMediaATView$a;

.field protected e:Z

.field protected f:Landroid/widget/FrameLayout;

.field private g:I

.field private h:I

.field private i:Lcom/tkay/basead/ui/CloseImageView;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 33
    invoke-direct {p0, p1}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;)V

    const/4 p1, 0x0

    .line 26
    iput p1, p0, Lcom/tkay/basead/ui/BaseMediaATView;->g:I

    .line 27
    iput p1, p0, Lcom/tkay/basead/ui/BaseMediaATView;->h:I

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/i;ZLcom/tkay/basead/ui/BaseMediaATView$a;)V
    .locals 0

    .line 37
    invoke-direct {p0, p1}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;)V

    const/4 p1, 0x0

    .line 26
    iput p1, p0, Lcom/tkay/basead/ui/BaseMediaATView;->g:I

    .line 27
    iput p1, p0, Lcom/tkay/basead/ui/BaseMediaATView;->h:I

    .line 38
    iput-object p2, p0, Lcom/tkay/basead/ui/BaseMediaATView;->a:Lcom/tkay/core/common/f/h;

    .line 39
    iget-object p1, p3, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    iput-object p1, p0, Lcom/tkay/basead/ui/BaseMediaATView;->b:Lcom/tkay/core/common/f/j;

    .line 40
    iput-boolean p4, p0, Lcom/tkay/basead/ui/BaseMediaATView;->e:Z

    .line 41
    iput-object p5, p0, Lcom/tkay/basead/ui/BaseMediaATView;->d:Lcom/tkay/basead/ui/BaseMediaATView$a;

    .line 42
    iput-object p3, p0, Lcom/tkay/basead/ui/BaseMediaATView;->c:Lcom/tkay/core/common/f/i;

    .line 44
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseMediaATView;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object p1

    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseMediaATView;->getContext()Landroid/content/Context;

    move-result-object p2

    const-string p3, "base_myoffer_media_ad_view"

    const-string p4, "layout"

    invoke-static {p2, p3, p4}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p2

    invoke-virtual {p1, p2, p0}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    .line 46
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseMediaATView;->getContext()Landroid/content/Context;

    move-result-object p1

    const-string p2, "id"

    const-string p3, "base_media_view_content"

    invoke-static {p1, p3, p2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/tkay/basead/ui/BaseMediaATView;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/FrameLayout;

    iput-object p1, p0, Lcom/tkay/basead/ui/BaseMediaATView;->f:Landroid/widget/FrameLayout;

    .line 47
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseMediaATView;->getContext()Landroid/content/Context;

    move-result-object p1

    const-string p3, "base_media_ad_close"

    invoke-static {p1, p3, p2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/tkay/basead/ui/BaseMediaATView;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Lcom/tkay/basead/ui/CloseImageView;

    iput-object p1, p0, Lcom/tkay/basead/ui/BaseMediaATView;->i:Lcom/tkay/basead/ui/CloseImageView;

    return-void
.end method

.method private a()V
    .locals 2

    .line 66
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseMediaATView;->i:Lcom/tkay/basead/ui/CloseImageView;

    if-nez v0, :cond_0

    return-void

    .line 69
    :cond_0
    iget-boolean v1, p0, Lcom/tkay/basead/ui/BaseMediaATView;->e:Z

    if-eqz v1, :cond_1

    const/4 v1, 0x0

    .line 70
    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/CloseImageView;->setVisibility(I)V

    goto :goto_0

    :cond_1
    const/16 v1, 0x8

    .line 72
    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/CloseImageView;->setVisibility(I)V

    .line 74
    :goto_0
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseMediaATView;->i:Lcom/tkay/basead/ui/CloseImageView;

    iget-object v1, p0, Lcom/tkay/basead/ui/BaseMediaATView;->b:Lcom/tkay/core/common/f/j;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/j;->h()I

    move-result v1

    invoke-static {v0, v1}, Lcom/tkay/basead/ui/BaseMediaATView;->a(Lcom/tkay/basead/ui/a;I)V

    .line 75
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseMediaATView;->i:Lcom/tkay/basead/ui/CloseImageView;

    new-instance v1, Lcom/tkay/basead/ui/BaseMediaATView$1;

    invoke-direct {v1, p0}, Lcom/tkay/basead/ui/BaseMediaATView$1;-><init>(Lcom/tkay/basead/ui/BaseMediaATView;)V

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/CloseImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method private static a(Lcom/tkay/basead/ui/a;I)V
    .locals 1

    if-eqz p0, :cond_3

    const/4 v0, 0x2

    if-eq p1, v0, :cond_2

    const/4 v0, 0x3

    if-eq p1, v0, :cond_1

    const/4 v0, 0x4

    if-eq p1, v0, :cond_0

    const/high16 p1, 0x3f800000    # 1.0f

    goto :goto_0

    :cond_0
    const/high16 p1, 0x3f000000    # 0.5f

    goto :goto_0

    :cond_1
    const/high16 p1, 0x3f400000    # 0.75f

    goto :goto_0

    :cond_2
    const/high16 p1, 0x3fc00000    # 1.5f

    .line 102
    :goto_0
    invoke-interface {p0, p1}, Lcom/tkay/basead/ui/a;->setClickAreaScaleFactor(F)V

    :cond_3
    return-void
.end method


# virtual methods
.method public destroy()V
    .locals 0

    return-void
.end method

.method public getClickViews()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Landroid/view/View;",
            ">;"
        }
    .end annotation

    .line 117
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    return-object v0
.end method

.method public getMediaViewHeight()I
    .locals 1

    .line 55
    iget v0, p0, Lcom/tkay/basead/ui/BaseMediaATView;->h:I

    return v0
.end method

.method public getMediaViewWidth()I
    .locals 1

    .line 51
    iget v0, p0, Lcom/tkay/basead/ui/BaseMediaATView;->g:I

    return v0
.end method

.method public getMonitorClickView()Landroid/view/View;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public init(II)V
    .locals 0

    .line 59
    iput p1, p0, Lcom/tkay/basead/ui/BaseMediaATView;->g:I

    .line 60
    iput p2, p0, Lcom/tkay/basead/ui/BaseMediaATView;->h:I

    .line 1066
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseMediaATView;->i:Lcom/tkay/basead/ui/CloseImageView;

    if-eqz p1, :cond_1

    .line 1069
    iget-boolean p2, p0, Lcom/tkay/basead/ui/BaseMediaATView;->e:Z

    if-eqz p2, :cond_0

    const/4 p2, 0x0

    .line 1070
    invoke-virtual {p1, p2}, Lcom/tkay/basead/ui/CloseImageView;->setVisibility(I)V

    goto :goto_0

    :cond_0
    const/16 p2, 0x8

    .line 1072
    invoke-virtual {p1, p2}, Lcom/tkay/basead/ui/CloseImageView;->setVisibility(I)V

    .line 1074
    :goto_0
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseMediaATView;->i:Lcom/tkay/basead/ui/CloseImageView;

    iget-object p2, p0, Lcom/tkay/basead/ui/BaseMediaATView;->b:Lcom/tkay/core/common/f/j;

    invoke-virtual {p2}, Lcom/tkay/core/common/f/j;->h()I

    move-result p2

    invoke-static {p1, p2}, Lcom/tkay/basead/ui/BaseMediaATView;->a(Lcom/tkay/basead/ui/a;I)V

    .line 1075
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseMediaATView;->i:Lcom/tkay/basead/ui/CloseImageView;

    new-instance p2, Lcom/tkay/basead/ui/BaseMediaATView$1;

    invoke-direct {p2, p0}, Lcom/tkay/basead/ui/BaseMediaATView$1;-><init>(Lcom/tkay/basead/ui/BaseMediaATView;)V

    invoke-virtual {p1, p2}, Lcom/tkay/basead/ui/CloseImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_1
    return-void
.end method

.method public notifyClick()V
    .locals 2

    .line 107
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseMediaATView;->i:Lcom/tkay/basead/ui/CloseImageView;

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/tkay/basead/ui/BaseMediaATView;->b:Lcom/tkay/core/common/f/j;

    if-eqz v1, :cond_0

    .line 108
    invoke-virtual {v1}, Lcom/tkay/core/common/f/j;->g()I

    move-result v1

    invoke-static {v0, v1}, Lcom/tkay/basead/ui/BaseMediaATView;->a(Lcom/tkay/basead/ui/a;I)V

    :cond_0
    return-void
.end method
