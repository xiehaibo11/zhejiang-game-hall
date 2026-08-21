.class public Lcom/tkay/expressad/foundation/webview/ToolBar;
.super Landroid/widget/LinearLayout;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 17
    invoke-direct {p0, p1}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;)V

    .line 18
    invoke-direct {p0}, Lcom/tkay/expressad/foundation/webview/ToolBar;->a()V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 22
    invoke-direct {p0, p1, p2}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    .line 23
    invoke-direct {p0}, Lcom/tkay/expressad/foundation/webview/ToolBar;->a()V

    return-void
.end method

.method private a()V
    .locals 6

    const/4 v0, 0x0

    .line 38
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/foundation/webview/ToolBar;->setOrientation(I)V

    .line 40
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/webview/ToolBar;->getContext()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x41200000    # 10.0f

    invoke-static {v1, v2}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v1

    .line 41
    invoke-virtual {p0, v0, v1, v0, v1}, Lcom/tkay/expressad/foundation/webview/ToolBar;->setPadding(IIII)V

    .line 43
    invoke-direct {p0}, Lcom/tkay/expressad/foundation/webview/ToolBar;->b()Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    const-string v1, "backward"

    .line 44
    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setTag(Ljava/lang/Object;)V

    .line 45
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/webview/ToolBar;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/webview/ToolBar;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    .line 46
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/b/b;->a()Ljava/lang/String;

    move-result-object v3

    const-string v4, "drawable"

    const-string v5, "tkay_expressad_backward"

    .line 45
    invoke-virtual {v2, v5, v4, v3}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v1, v2}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object v1

    .line 47
    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setImageDrawable(Landroid/graphics/drawable/Drawable;)V

    .line 48
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/foundation/webview/ToolBar;->addView(Landroid/view/View;)V

    .line 50
    invoke-direct {p0}, Lcom/tkay/expressad/foundation/webview/ToolBar;->b()Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    const-string v1, "forward"

    .line 51
    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setTag(Ljava/lang/Object;)V

    .line 52
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/webview/ToolBar;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/webview/ToolBar;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    .line 53
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/b/b;->a()Ljava/lang/String;

    move-result-object v3

    const-string v5, "tkay_expressad_forward"

    .line 52
    invoke-virtual {v2, v5, v4, v3}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v1, v2}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object v1

    .line 54
    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setImageDrawable(Landroid/graphics/drawable/Drawable;)V

    .line 55
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/foundation/webview/ToolBar;->addView(Landroid/view/View;)V

    .line 57
    invoke-direct {p0}, Lcom/tkay/expressad/foundation/webview/ToolBar;->b()Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    const-string v1, "refresh"

    .line 58
    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setTag(Ljava/lang/Object;)V

    .line 59
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/webview/ToolBar;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/webview/ToolBar;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    .line 60
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/b/b;->a()Ljava/lang/String;

    move-result-object v3

    const-string v5, "tkay_expressad_refresh"

    .line 59
    invoke-virtual {v2, v5, v4, v3}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v1, v2}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object v1

    .line 61
    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setImageDrawable(Landroid/graphics/drawable/Drawable;)V

    .line 62
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/foundation/webview/ToolBar;->addView(Landroid/view/View;)V

    .line 64
    invoke-direct {p0}, Lcom/tkay/expressad/foundation/webview/ToolBar;->b()Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    const-string v1, "exits"

    .line 65
    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setTag(Ljava/lang/Object;)V

    .line 66
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/webview/ToolBar;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/webview/ToolBar;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    .line 67
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/b/b;->a()Ljava/lang/String;

    move-result-object v3

    const-string v5, "tkay_expressad_exits"

    .line 66
    invoke-virtual {v2, v5, v4, v3}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v1, v2}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object v1

    .line 68
    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setImageDrawable(Landroid/graphics/drawable/Drawable;)V

    .line 69
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/foundation/webview/ToolBar;->addView(Landroid/view/View;)V

    return-void
.end method

.method private b()Landroid/view/View;
    .locals 3

    .line 73
    new-instance v0, Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/webview/ToolBar;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    .line 74
    new-instance v1, Landroid/widget/LinearLayout$LayoutParams;

    const/4 v2, -0x1

    invoke-direct {v1, v2, v2}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    const/high16 v2, 0x3f800000    # 1.0f

    .line 75
    iput v2, v1, Landroid/widget/LinearLayout$LayoutParams;->weight:F

    .line 76
    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    const/4 v1, 0x1

    .line 77
    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setClickable(Z)V

    return-object v0
.end method


# virtual methods
.method public getItem(Ljava/lang/String;)Landroid/view/View;
    .locals 0

    .line 34
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/foundation/webview/ToolBar;->findViewWithTag(Ljava/lang/Object;)Landroid/view/View;

    move-result-object p1

    return-object p1
.end method

.method public setOnItemClickListener(Landroid/view/View$OnClickListener;)V
    .locals 3

    .line 27
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/webview/ToolBar;->getChildCount()I

    move-result v0

    const/4 v1, 0x0

    :goto_0
    if-ge v1, v0, :cond_0

    .line 29
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/foundation/webview/ToolBar;->getChildAt(I)Landroid/view/View;

    move-result-object v2

    invoke-virtual {v2, p1}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_0
    return-void
.end method
