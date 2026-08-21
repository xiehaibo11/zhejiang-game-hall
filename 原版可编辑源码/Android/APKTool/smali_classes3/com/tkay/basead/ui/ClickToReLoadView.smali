.class public Lcom/tkay/basead/ui/ClickToReLoadView;
.super Landroid/widget/LinearLayout;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/basead/ui/ClickToReLoadView$a;
    }
.end annotation


# instance fields
.field private a:Landroid/widget/ImageView;

.field private b:Landroid/widget/TextView;

.field private c:Lcom/tkay/basead/ui/ClickToReLoadView$a;

.field private d:I


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 7

    .line 24
    invoke-direct {p0, p1}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;)V

    const/4 v0, 0x1

    .line 1033
    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/ClickToReLoadView;->setOrientation(I)V

    const/16 v0, 0x11

    .line 1034
    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/ClickToReLoadView;->setGravity(I)V

    const/high16 v1, 0x41200000    # 10.0f

    .line 1036
    invoke-static {p1, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v1

    iput v1, p0, Lcom/tkay/basead/ui/ClickToReLoadView;->d:I

    .line 1038
    new-instance v1, Landroid/widget/ImageView;

    invoke-direct {v1, p1}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    iput-object v1, p0, Lcom/tkay/basead/ui/ClickToReLoadView;->a:Landroid/widget/ImageView;

    const-string v2, "drawable"

    const-string v3, "myoffer_webview_reload_icon"

    .line 1039
    invoke-static {p1, v3, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v1, v3}, Landroid/widget/ImageView;->setImageResource(I)V

    const/high16 v1, 0x41f00000    # 30.0f

    .line 1042
    invoke-static {p1, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v1

    .line 1043
    new-instance v3, Landroid/widget/LinearLayout$LayoutParams;

    invoke-direct {v3, v1, v1}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    .line 1044
    iput v0, v3, Landroid/widget/LinearLayout$LayoutParams;->gravity:I

    .line 1045
    iget v1, p0, Lcom/tkay/basead/ui/ClickToReLoadView;->d:I

    iput v1, v3, Landroid/widget/LinearLayout$LayoutParams;->bottomMargin:I

    .line 1048
    new-instance v1, Landroid/widget/TextView;

    invoke-direct {v1, p1}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    iput-object v1, p0, Lcom/tkay/basead/ui/ClickToReLoadView;->b:Landroid/widget/TextView;

    .line 1049
    invoke-virtual {p0}, Lcom/tkay/basead/ui/ClickToReLoadView;->getResources()Landroid/content/res/Resources;

    move-result-object v4

    const-string v5, "myoffer_webview_reload"

    const-string v6, "string"

    invoke-static {p1, v5, v6}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v5

    invoke-virtual {v4, v5}, Landroid/content/res/Resources;->getText(I)Ljava/lang/CharSequence;

    move-result-object v4

    invoke-virtual {v1, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1050
    iget-object v1, p0, Lcom/tkay/basead/ui/ClickToReLoadView;->b:Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/ClickToReLoadView;->getResources()Landroid/content/res/Resources;

    move-result-object v4

    const-string v5, "color_reload_button"

    const-string v6, "color"

    invoke-static {p1, v5, v6}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v5

    invoke-virtual {v4, v5}, Landroid/content/res/Resources;->getColor(I)I

    move-result v4

    invoke-virtual {v1, v4}, Landroid/widget/TextView;->setTextColor(I)V

    .line 1051
    iget-object v1, p0, Lcom/tkay/basead/ui/ClickToReLoadView;->b:Landroid/widget/TextView;

    const-string v4, "myoffer_webview_bg_reload_button"

    invoke-static {p1, v4, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setBackgroundResource(I)V

    const/high16 v1, 0x41100000    # 9.0f

    .line 1053
    invoke-static {p1, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v1

    const/high16 v2, 0x40a00000    # 5.0f

    .line 1054
    invoke-static {p1, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result p1

    .line 1055
    iget-object v2, p0, Lcom/tkay/basead/ui/ClickToReLoadView;->b:Landroid/widget/TextView;

    invoke-virtual {v2, v1, p1, v1, p1}, Landroid/widget/TextView;->setPadding(IIII)V

    .line 1059
    new-instance p1, Landroid/widget/LinearLayout$LayoutParams;

    const/4 v1, -0x2

    invoke-direct {p1, v1, v1}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    .line 1060
    iput v0, p1, Landroid/widget/LinearLayout$LayoutParams;->gravity:I

    .line 1061
    iget v0, p0, Lcom/tkay/basead/ui/ClickToReLoadView;->d:I

    iput v0, p1, Landroid/widget/LinearLayout$LayoutParams;->topMargin:I

    .line 1064
    iget-object v0, p0, Lcom/tkay/basead/ui/ClickToReLoadView;->a:Landroid/widget/ImageView;

    invoke-virtual {p0, v0, v3}, Lcom/tkay/basead/ui/ClickToReLoadView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 1065
    iget-object v0, p0, Lcom/tkay/basead/ui/ClickToReLoadView;->b:Landroid/widget/TextView;

    invoke-virtual {p0, v0, p1}, Lcom/tkay/basead/ui/ClickToReLoadView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 1070
    iget-object p1, p0, Lcom/tkay/basead/ui/ClickToReLoadView;->b:Landroid/widget/TextView;

    new-instance v0, Lcom/tkay/basead/ui/ClickToReLoadView$1;

    invoke-direct {v0, p0}, Lcom/tkay/basead/ui/ClickToReLoadView$1;-><init>(Lcom/tkay/basead/ui/ClickToReLoadView;)V

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/basead/ui/ClickToReLoadView;)Lcom/tkay/basead/ui/ClickToReLoadView$a;
    .locals 0

    .line 15
    iget-object p0, p0, Lcom/tkay/basead/ui/ClickToReLoadView;->c:Lcom/tkay/basead/ui/ClickToReLoadView$a;

    return-object p0
.end method

.method private a()V
    .locals 2

    .line 70
    iget-object v0, p0, Lcom/tkay/basead/ui/ClickToReLoadView;->b:Landroid/widget/TextView;

    new-instance v1, Lcom/tkay/basead/ui/ClickToReLoadView$1;

    invoke-direct {v1, p0}, Lcom/tkay/basead/ui/ClickToReLoadView$1;-><init>(Lcom/tkay/basead/ui/ClickToReLoadView;)V

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method private a(Landroid/content/Context;)V
    .locals 7

    const/4 v0, 0x1

    .line 33
    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/ClickToReLoadView;->setOrientation(I)V

    const/16 v0, 0x11

    .line 34
    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/ClickToReLoadView;->setGravity(I)V

    const/high16 v1, 0x41200000    # 10.0f

    .line 36
    invoke-static {p1, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v1

    iput v1, p0, Lcom/tkay/basead/ui/ClickToReLoadView;->d:I

    .line 38
    new-instance v1, Landroid/widget/ImageView;

    invoke-direct {v1, p1}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    iput-object v1, p0, Lcom/tkay/basead/ui/ClickToReLoadView;->a:Landroid/widget/ImageView;

    const-string v2, "drawable"

    const-string v3, "myoffer_webview_reload_icon"

    .line 39
    invoke-static {p1, v3, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v1, v3}, Landroid/widget/ImageView;->setImageResource(I)V

    const/high16 v1, 0x41f00000    # 30.0f

    .line 42
    invoke-static {p1, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v1

    .line 43
    new-instance v3, Landroid/widget/LinearLayout$LayoutParams;

    invoke-direct {v3, v1, v1}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    .line 44
    iput v0, v3, Landroid/widget/LinearLayout$LayoutParams;->gravity:I

    .line 45
    iget v1, p0, Lcom/tkay/basead/ui/ClickToReLoadView;->d:I

    iput v1, v3, Landroid/widget/LinearLayout$LayoutParams;->bottomMargin:I

    .line 48
    new-instance v1, Landroid/widget/TextView;

    invoke-direct {v1, p1}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    iput-object v1, p0, Lcom/tkay/basead/ui/ClickToReLoadView;->b:Landroid/widget/TextView;

    .line 49
    invoke-virtual {p0}, Lcom/tkay/basead/ui/ClickToReLoadView;->getResources()Landroid/content/res/Resources;

    move-result-object v4

    const-string v5, "myoffer_webview_reload"

    const-string v6, "string"

    invoke-static {p1, v5, v6}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v5

    invoke-virtual {v4, v5}, Landroid/content/res/Resources;->getText(I)Ljava/lang/CharSequence;

    move-result-object v4

    invoke-virtual {v1, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 50
    iget-object v1, p0, Lcom/tkay/basead/ui/ClickToReLoadView;->b:Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/ClickToReLoadView;->getResources()Landroid/content/res/Resources;

    move-result-object v4

    const-string v5, "color_reload_button"

    const-string v6, "color"

    invoke-static {p1, v5, v6}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v5

    invoke-virtual {v4, v5}, Landroid/content/res/Resources;->getColor(I)I

    move-result v4

    invoke-virtual {v1, v4}, Landroid/widget/TextView;->setTextColor(I)V

    .line 51
    iget-object v1, p0, Lcom/tkay/basead/ui/ClickToReLoadView;->b:Landroid/widget/TextView;

    const-string v4, "myoffer_webview_bg_reload_button"

    invoke-static {p1, v4, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setBackgroundResource(I)V

    const/high16 v1, 0x41100000    # 9.0f

    .line 53
    invoke-static {p1, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v1

    const/high16 v2, 0x40a00000    # 5.0f

    .line 54
    invoke-static {p1, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result p1

    .line 55
    iget-object v2, p0, Lcom/tkay/basead/ui/ClickToReLoadView;->b:Landroid/widget/TextView;

    invoke-virtual {v2, v1, p1, v1, p1}, Landroid/widget/TextView;->setPadding(IIII)V

    .line 59
    new-instance p1, Landroid/widget/LinearLayout$LayoutParams;

    const/4 v1, -0x2

    invoke-direct {p1, v1, v1}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    .line 60
    iput v0, p1, Landroid/widget/LinearLayout$LayoutParams;->gravity:I

    .line 61
    iget v0, p0, Lcom/tkay/basead/ui/ClickToReLoadView;->d:I

    iput v0, p1, Landroid/widget/LinearLayout$LayoutParams;->topMargin:I

    .line 64
    iget-object v0, p0, Lcom/tkay/basead/ui/ClickToReLoadView;->a:Landroid/widget/ImageView;

    invoke-virtual {p0, v0, v3}, Lcom/tkay/basead/ui/ClickToReLoadView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 65
    iget-object v0, p0, Lcom/tkay/basead/ui/ClickToReLoadView;->b:Landroid/widget/TextView;

    invoke-virtual {p0, v0, p1}, Lcom/tkay/basead/ui/ClickToReLoadView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method

.method private b()V
    .locals 2

    .line 118
    :try_start_0
    iget-object v0, p0, Lcom/tkay/basead/ui/ClickToReLoadView;->a:Landroid/widget/ImageView;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 120
    iget-object v0, p0, Lcom/tkay/basead/ui/ClickToReLoadView;->b:Landroid/widget/TextView;

    invoke-virtual {v0}, Landroid/widget/TextView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    check-cast v0, Landroid/widget/LinearLayout$LayoutParams;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    .line 122
    iput v1, v0, Landroid/widget/LinearLayout$LayoutParams;->topMargin:I

    .line 123
    iget-object v1, p0, Lcom/tkay/basead/ui/ClickToReLoadView;->b:Landroid/widget/TextView;

    invoke-virtual {v1, v0}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method


# virtual methods
.method protected onLayout(ZIIII)V
    .locals 0

    .line 98
    invoke-super/range {p0 .. p5}, Landroid/widget/LinearLayout;->onLayout(ZIIII)V

    .line 100
    invoke-virtual {p0}, Lcom/tkay/basead/ui/ClickToReLoadView;->getHeight()I

    move-result p1

    invoke-virtual {p0}, Lcom/tkay/basead/ui/ClickToReLoadView;->getContext()Landroid/content/Context;

    move-result-object p2

    const/high16 p3, 0x42c80000    # 100.0f

    invoke-static {p2, p3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result p2

    if-ge p1, p2, :cond_0

    .line 1118
    :try_start_0
    iget-object p1, p0, Lcom/tkay/basead/ui/ClickToReLoadView;->a:Landroid/widget/ImageView;

    const/16 p2, 0x8

    invoke-virtual {p1, p2}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 1120
    iget-object p1, p0, Lcom/tkay/basead/ui/ClickToReLoadView;->b:Landroid/widget/TextView;

    invoke-virtual {p1}, Landroid/widget/TextView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object p1

    check-cast p1, Landroid/widget/LinearLayout$LayoutParams;

    if-eqz p1, :cond_0

    const/4 p2, 0x0

    .line 1122
    iput p2, p1, Landroid/widget/LinearLayout$LayoutParams;->topMargin:I

    .line 1123
    iget-object p2, p0, Lcom/tkay/basead/ui/ClickToReLoadView;->b:Landroid/widget/TextView;

    invoke-virtual {p2, p1}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public setListener(Lcom/tkay/basead/ui/ClickToReLoadView$a;)V
    .locals 0

    .line 89
    iput-object p1, p0, Lcom/tkay/basead/ui/ClickToReLoadView;->c:Lcom/tkay/basead/ui/ClickToReLoadView$a;

    return-void
.end method
