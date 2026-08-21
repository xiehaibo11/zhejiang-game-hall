.class public Lcom/tkay/basead/ui/PanelView;
.super Landroid/widget/RelativeLayout;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/basead/ui/PanelView$a;
    }
.end annotation


# static fields
.field public static final TYPE_FULL_SCREEN_BANNER:I = 0x0

.field public static final TYPE_FULL_SCREEN_EMPTY_INFO:I = 0x8

.field public static final TYPE_FULL_SCREEN_ENDCARD_HORIZONTAL_LANDSCAPE:I = 0x6

.field public static final TYPE_FULL_SCREEN_ENDCARD_HORIZONTAL_PORTRAIT:I = 0x1

.field public static final TYPE_FULL_SCREEN_ENDCARD_VERTICAL_LANDSCAPE:I = 0x2

.field public static final TYPE_FULL_SCREEN_ENDCARD_VERTICAL_PORTRAIT:I = 0x5

.field public static final TYPE_HALF_SCREEN_EMPTY_INFO:I = 0x7

.field public static final TYPE_HALF_SCREEN_HORIZONTAL:I = 0x4

.field public static final TYPE_HALF_SCREEN_VERTICAL:I = 0x3


# instance fields
.field private a:Landroid/view/View;

.field private b:Landroid/widget/ImageView;

.field private c:Landroid/widget/ImageView;

.field private d:Landroid/widget/TextView;

.field private e:Landroid/widget/TextView;

.field private f:Landroid/widget/Button;

.field private g:Lcom/tkay/basead/ui/BaseShakeView;

.field private h:Lcom/tkay/basead/ui/PanelView$a;

.field private i:I

.field private j:Lcom/tkay/core/common/f/j;

.field private k:Lcom/tkay/core/common/f/i;

.field private l:Lcom/tkay/core/common/f/h;

.field private m:I

.field private n:Landroid/view/ViewGroup;

.field private o:Landroid/widget/TextView;

.field private p:Landroid/widget/TextView;

.field private q:Landroid/widget/TextView;

.field private r:Landroid/widget/TextView;

.field private s:Z

.field private t:Z

.field private u:Z

.field private v:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Landroid/view/View;",
            ">;"
        }
    .end annotation
.end field

.field private final w:Landroid/view/View$OnClickListener;


# direct methods
.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 85
    invoke-direct {p0, p1, p2}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const/4 p1, 0x0

    .line 67
    iput p1, p0, Lcom/tkay/basead/ui/PanelView;->m:I

    .line 77
    iput-boolean p1, p0, Lcom/tkay/basead/ui/PanelView;->s:Z

    .line 78
    iput-boolean p1, p0, Lcom/tkay/basead/ui/PanelView;->t:Z

    .line 79
    iput-boolean p1, p0, Lcom/tkay/basead/ui/PanelView;->u:Z

    .line 463
    new-instance p1, Lcom/tkay/basead/ui/PanelView$9;

    invoke-direct {p1, p0}, Lcom/tkay/basead/ui/PanelView$9;-><init>(Lcom/tkay/basead/ui/PanelView;)V

    iput-object p1, p0, Lcom/tkay/basead/ui/PanelView;->w:Landroid/view/View$OnClickListener;

    return-void
.end method

.method static synthetic a(Lcom/tkay/basead/ui/PanelView;)Landroid/widget/ImageView;
    .locals 0

    .line 40
    iget-object p0, p0, Lcom/tkay/basead/ui/PanelView;->b:Landroid/widget/ImageView;

    return-object p0
.end method

.method private a(Lcom/tkay/core/common/f/h;)V
    .locals 8

    .line 249
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->b:Landroid/widget/ImageView;

    const/4 v1, 0x1

    const/16 v2, 0x8

    if-eqz v0, :cond_1

    .line 250
    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->t()Ljava/lang/String;

    move-result-object v0

    .line 251
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_0

    .line 252
    iget-object v3, p0, Lcom/tkay/basead/ui/PanelView;->b:Landroid/widget/ImageView;

    invoke-virtual {v3}, Landroid/widget/ImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v3

    .line 253
    iget v4, v3, Landroid/view/ViewGroup$LayoutParams;->width:I

    .line 254
    iget v3, v3, Landroid/view/ViewGroup$LayoutParams;->height:I

    .line 255
    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-static {v5}, Lcom/tkay/core/common/res/b;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/b;

    move-result-object v5

    new-instance v6, Lcom/tkay/core/common/res/e;

    invoke-direct {v6, v1, v0}, Lcom/tkay/core/common/res/e;-><init>(ILjava/lang/String;)V

    new-instance v7, Lcom/tkay/basead/ui/PanelView$1;

    invoke-direct {v7, p0, v0}, Lcom/tkay/basead/ui/PanelView$1;-><init>(Lcom/tkay/basead/ui/PanelView;Ljava/lang/String;)V

    invoke-virtual {v5, v6, v4, v3, v7}, Lcom/tkay/core/common/res/b;->a(Lcom/tkay/core/common/res/e;IILcom/tkay/core/common/res/b$a;)V

    .line 271
    :cond_0
    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->t()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 272
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->b:Landroid/widget/ImageView;

    invoke-virtual {v0, v2}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 276
    :cond_1
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->c:Landroid/widget/ImageView;

    if-eqz v0, :cond_3

    .line 277
    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->v()Ljava/lang/String;

    move-result-object v0

    .line 278
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_2

    .line 279
    iget-object v3, p0, Lcom/tkay/basead/ui/PanelView;->c:Landroid/widget/ImageView;

    invoke-virtual {v3}, Landroid/widget/ImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v3

    .line 280
    iget v4, v3, Landroid/view/ViewGroup$LayoutParams;->width:I

    .line 281
    iget v5, v3, Landroid/view/ViewGroup$LayoutParams;->height:I

    .line 282
    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object v6

    invoke-static {v6}, Lcom/tkay/core/common/res/b;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/b;

    move-result-object v6

    new-instance v7, Lcom/tkay/core/common/res/e;

    invoke-direct {v7, v1, v0}, Lcom/tkay/core/common/res/e;-><init>(ILjava/lang/String;)V

    new-instance v1, Lcom/tkay/basead/ui/PanelView$2;

    invoke-direct {v1, p0, v0, v3}, Lcom/tkay/basead/ui/PanelView$2;-><init>(Lcom/tkay/basead/ui/PanelView;Ljava/lang/String;Landroid/view/ViewGroup$LayoutParams;)V

    invoke-virtual {v6, v7, v4, v5, v1}, Lcom/tkay/core/common/res/b;->a(Lcom/tkay/core/common/res/e;IILcom/tkay/core/common/res/b$a;)V

    goto :goto_0

    .line 309
    :cond_2
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->c:Landroid/widget/ImageView;

    invoke-virtual {v0, v2}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 313
    :cond_3
    :goto_0
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->e:Landroid/widget/TextView;

    if-eqz v0, :cond_5

    .line 314
    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->s()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_4

    .line 315
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->e:Landroid/widget/TextView;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->s()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_1

    .line 317
    :cond_4
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->e:Landroid/widget/TextView;

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setVisibility(I)V

    .line 321
    :cond_5
    :goto_1
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->d:Landroid/widget/TextView;

    if-eqz v0, :cond_7

    .line 322
    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->r()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_6

    .line 323
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->d:Landroid/widget/TextView;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->r()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_2

    .line 325
    :cond_6
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->d:Landroid/widget/TextView;

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setVisibility(I)V

    .line 329
    :cond_7
    :goto_2
    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->w()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_8

    .line 330
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->f:Landroid/widget/Button;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->w()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setText(Ljava/lang/CharSequence;)V

    goto :goto_3

    .line 332
    :cond_8
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->f:Landroid/widget/Button;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/basead/ui/PanelView;->l:Lcom/tkay/core/common/f/h;

    invoke-static {v1, v2}, Lcom/tkay/basead/a/e;->a(Landroid/content/Context;Lcom/tkay/core/common/f/h;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setText(I)V

    .line 336
    :goto_3
    invoke-direct {p0, p1}, Lcom/tkay/basead/ui/PanelView;->b(Lcom/tkay/core/common/f/h;)V

    return-void
.end method

.method private a()Z
    .locals 1

    .line 185
    iget-boolean v0, p0, Lcom/tkay/basead/ui/PanelView;->s:Z

    if-eqz v0, :cond_0

    iget-boolean v0, p0, Lcom/tkay/basead/ui/PanelView;->t:Z

    if-nez v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method static synthetic b(Lcom/tkay/basead/ui/PanelView;)Landroid/widget/ImageView;
    .locals 0

    .line 40
    iget-object p0, p0, Lcom/tkay/basead/ui/PanelView;->c:Landroid/widget/ImageView;

    return-object p0
.end method

.method private b()V
    .locals 10

    .line 189
    invoke-direct {p0}, Lcom/tkay/basead/ui/PanelView;->d()V

    .line 190
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->l:Lcom/tkay/core/common/f/h;

    .line 2249
    iget-object v1, p0, Lcom/tkay/basead/ui/PanelView;->b:Landroid/widget/ImageView;

    const/4 v2, 0x1

    const/16 v3, 0x8

    if-eqz v1, :cond_1

    .line 2250
    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->t()Ljava/lang/String;

    move-result-object v1

    .line 2251
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_0

    .line 2252
    iget-object v4, p0, Lcom/tkay/basead/ui/PanelView;->b:Landroid/widget/ImageView;

    invoke-virtual {v4}, Landroid/widget/ImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v4

    .line 2253
    iget v5, v4, Landroid/view/ViewGroup$LayoutParams;->width:I

    .line 2254
    iget v4, v4, Landroid/view/ViewGroup$LayoutParams;->height:I

    .line 2255
    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object v6

    invoke-static {v6}, Lcom/tkay/core/common/res/b;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/b;

    move-result-object v6

    new-instance v7, Lcom/tkay/core/common/res/e;

    invoke-direct {v7, v2, v1}, Lcom/tkay/core/common/res/e;-><init>(ILjava/lang/String;)V

    new-instance v8, Lcom/tkay/basead/ui/PanelView$1;

    invoke-direct {v8, p0, v1}, Lcom/tkay/basead/ui/PanelView$1;-><init>(Lcom/tkay/basead/ui/PanelView;Ljava/lang/String;)V

    invoke-virtual {v6, v7, v5, v4, v8}, Lcom/tkay/core/common/res/b;->a(Lcom/tkay/core/common/res/e;IILcom/tkay/core/common/res/b$a;)V

    .line 2271
    :cond_0
    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->t()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 2272
    iget-object v1, p0, Lcom/tkay/basead/ui/PanelView;->b:Landroid/widget/ImageView;

    invoke-virtual {v1, v3}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 2276
    :cond_1
    iget-object v1, p0, Lcom/tkay/basead/ui/PanelView;->c:Landroid/widget/ImageView;

    if-eqz v1, :cond_3

    .line 2277
    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->v()Ljava/lang/String;

    move-result-object v1

    .line 2278
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_2

    .line 2279
    iget-object v4, p0, Lcom/tkay/basead/ui/PanelView;->c:Landroid/widget/ImageView;

    invoke-virtual {v4}, Landroid/widget/ImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v4

    .line 2280
    iget v5, v4, Landroid/view/ViewGroup$LayoutParams;->width:I

    .line 2281
    iget v6, v4, Landroid/view/ViewGroup$LayoutParams;->height:I

    .line 2282
    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object v7

    invoke-static {v7}, Lcom/tkay/core/common/res/b;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/b;

    move-result-object v7

    new-instance v8, Lcom/tkay/core/common/res/e;

    invoke-direct {v8, v2, v1}, Lcom/tkay/core/common/res/e;-><init>(ILjava/lang/String;)V

    new-instance v9, Lcom/tkay/basead/ui/PanelView$2;

    invoke-direct {v9, p0, v1, v4}, Lcom/tkay/basead/ui/PanelView$2;-><init>(Lcom/tkay/basead/ui/PanelView;Ljava/lang/String;Landroid/view/ViewGroup$LayoutParams;)V

    invoke-virtual {v7, v8, v5, v6, v9}, Lcom/tkay/core/common/res/b;->a(Lcom/tkay/core/common/res/e;IILcom/tkay/core/common/res/b$a;)V

    goto :goto_0

    .line 2309
    :cond_2
    iget-object v1, p0, Lcom/tkay/basead/ui/PanelView;->c:Landroid/widget/ImageView;

    invoke-virtual {v1, v3}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 2313
    :cond_3
    :goto_0
    iget-object v1, p0, Lcom/tkay/basead/ui/PanelView;->e:Landroid/widget/TextView;

    if-eqz v1, :cond_5

    .line 2314
    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->s()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_4

    .line 2315
    iget-object v1, p0, Lcom/tkay/basead/ui/PanelView;->e:Landroid/widget/TextView;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->s()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_1

    .line 2317
    :cond_4
    iget-object v1, p0, Lcom/tkay/basead/ui/PanelView;->e:Landroid/widget/TextView;

    invoke-virtual {v1, v3}, Landroid/widget/TextView;->setVisibility(I)V

    .line 2321
    :cond_5
    :goto_1
    iget-object v1, p0, Lcom/tkay/basead/ui/PanelView;->d:Landroid/widget/TextView;

    if-eqz v1, :cond_7

    .line 2322
    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->r()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_6

    .line 2323
    iget-object v1, p0, Lcom/tkay/basead/ui/PanelView;->d:Landroid/widget/TextView;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->r()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_2

    .line 2325
    :cond_6
    iget-object v1, p0, Lcom/tkay/basead/ui/PanelView;->d:Landroid/widget/TextView;

    invoke-virtual {v1, v3}, Landroid/widget/TextView;->setVisibility(I)V

    .line 2329
    :cond_7
    :goto_2
    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->w()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_8

    .line 2330
    iget-object v1, p0, Lcom/tkay/basead/ui/PanelView;->f:Landroid/widget/Button;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->w()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4}, Landroid/widget/Button;->setText(Ljava/lang/CharSequence;)V

    goto :goto_3

    .line 2332
    :cond_8
    iget-object v1, p0, Lcom/tkay/basead/ui/PanelView;->f:Landroid/widget/Button;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object v4

    iget-object v5, p0, Lcom/tkay/basead/ui/PanelView;->l:Lcom/tkay/core/common/f/h;

    invoke-static {v4, v5}, Lcom/tkay/basead/a/e;->a(Landroid/content/Context;Lcom/tkay/core/common/f/h;)I

    move-result v4

    invoke-virtual {v1, v4}, Landroid/widget/Button;->setText(I)V

    .line 2336
    :goto_3
    invoke-direct {p0, v0}, Lcom/tkay/basead/ui/PanelView;->b(Lcom/tkay/core/common/f/h;)V

    .line 2420
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->b:Landroid/widget/ImageView;

    if-eqz v0, :cond_9

    .line 2421
    iget-object v1, p0, Lcom/tkay/basead/ui/PanelView;->w:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 2422
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->v:Ljava/util/List;

    iget-object v1, p0, Lcom/tkay/basead/ui/PanelView;->b:Landroid/widget/ImageView;

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 2424
    :cond_9
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->d:Landroid/widget/TextView;

    if-eqz v0, :cond_a

    .line 2425
    iget-object v1, p0, Lcom/tkay/basead/ui/PanelView;->w:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 2426
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->v:Ljava/util/List;

    iget-object v1, p0, Lcom/tkay/basead/ui/PanelView;->d:Landroid/widget/TextView;

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 2428
    :cond_a
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->e:Landroid/widget/TextView;

    if-eqz v0, :cond_b

    .line 2429
    iget-object v1, p0, Lcom/tkay/basead/ui/PanelView;->w:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 2430
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->v:Ljava/util/List;

    iget-object v1, p0, Lcom/tkay/basead/ui/PanelView;->e:Landroid/widget/TextView;

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 2432
    :cond_b
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->f:Landroid/widget/Button;

    iget-object v1, p0, Lcom/tkay/basead/ui/PanelView;->w:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 2433
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->v:Ljava/util/List;

    iget-object v1, p0, Lcom/tkay/basead/ui/PanelView;->f:Landroid/widget/Button;

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 2435
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->c:Landroid/widget/ImageView;

    if-eqz v0, :cond_c

    .line 2436
    iget-object v1, p0, Lcom/tkay/basead/ui/PanelView;->w:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 2437
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->v:Ljava/util/List;

    iget-object v1, p0, Lcom/tkay/basead/ui/PanelView;->c:Landroid/widget/ImageView;

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 2439
    :cond_c
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->g:Lcom/tkay/basead/ui/BaseShakeView;

    if-eqz v0, :cond_d

    iget-boolean v1, p0, Lcom/tkay/basead/ui/PanelView;->u:Z

    if-eqz v1, :cond_d

    .line 2440
    new-instance v1, Lcom/tkay/basead/ui/PanelView$7;

    invoke-direct {v1, p0}, Lcom/tkay/basead/ui/PanelView$7;-><init>(Lcom/tkay/basead/ui/PanelView;)V

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/BaseShakeView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 2446
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->g:Lcom/tkay/basead/ui/BaseShakeView;

    new-instance v1, Lcom/tkay/basead/ui/PanelView$8;

    invoke-direct {v1, p0}, Lcom/tkay/basead/ui/PanelView$8;-><init>(Lcom/tkay/basead/ui/PanelView;)V

    iget-object v4, p0, Lcom/tkay/basead/ui/PanelView;->j:Lcom/tkay/core/common/f/j;

    invoke-virtual {v0, v1, v4}, Lcom/tkay/basead/ui/BaseShakeView;->setOnShakeListener(Lcom/tkay/basead/ui/BaseShakeView$a;Lcom/tkay/core/common/f/j;)V

    .line 2453
    :cond_d
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->a:Landroid/view/View;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v4, "myoffer_panel_view_blank"

    const-string v5, "id"

    invoke-static {v1, v4, v5}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    if-eqz v0, :cond_e

    .line 2455
    iget-object v1, p0, Lcom/tkay/basead/ui/PanelView;->w:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 2456
    iget-object v1, p0, Lcom/tkay/basead/ui/PanelView;->v:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_4

    .line 2458
    :cond_e
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->a:Landroid/view/View;

    iget-object v1, p0, Lcom/tkay/basead/ui/PanelView;->w:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 2459
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->v:Ljava/util/List;

    iget-object v1, p0, Lcom/tkay/basead/ui/PanelView;->a:Landroid/view/View;

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 3198
    :goto_4
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->b:Landroid/widget/ImageView;

    instance-of v1, v0, Lcom/tkay/core/common/ui/component/RoundImageView;

    if-eqz v1, :cond_10

    .line 3199
    check-cast v0, Lcom/tkay/core/common/ui/component/RoundImageView;

    invoke-virtual {v0, v2}, Lcom/tkay/core/common/ui/component/RoundImageView;->setNeedRadiu(Z)V

    .line 3200
    iget v0, p0, Lcom/tkay/basead/ui/PanelView;->m:I

    const/4 v1, 0x2

    if-eq v0, v1, :cond_f

    const/4 v1, 0x6

    if-eq v0, v1, :cond_f

    .line 3206
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->b:Landroid/widget/ImageView;

    check-cast v0, Lcom/tkay/core/common/ui/component/RoundImageView;

    const/16 v1, 0xc

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/ui/component/RoundImageView;->setRadiusInDip(I)V

    goto :goto_5

    .line 3203
    :cond_f
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->b:Landroid/widget/ImageView;

    check-cast v0, Lcom/tkay/core/common/ui/component/RoundImageView;

    invoke-virtual {v0, v3}, Lcom/tkay/core/common/ui/component/RoundImageView;->setRadiusInDip(I)V

    .line 3209
    :goto_5
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->b:Landroid/widget/ImageView;

    invoke-virtual {v0}, Landroid/widget/ImageView;->invalidate()V

    :cond_10
    return-void
.end method

.method private b(Lcom/tkay/core/common/f/h;)V
    .locals 6

    .line 340
    invoke-direct {p0}, Lcom/tkay/basead/ui/PanelView;->a()Z

    move-result v0

    if-eqz v0, :cond_4

    .line 341
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->o:Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    .line 342
    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object v2

    const-string v3, "myoffer_panel_version"

    const-string v4, "string"

    invoke-static {v2, v3, v4}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    const/4 v3, 0x1

    new-array v3, v3, [Ljava/lang/Object;

    .line 343
    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->G()Ljava/lang/String;

    move-result-object v4

    const/4 v5, 0x0

    aput-object v4, v3, v5

    .line 341
    invoke-virtual {v1, v2, v3}, Landroid/content/res/Resources;->getString(I[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 346
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->p:Landroid/widget/TextView;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->F()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 348
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->r:Landroid/widget/TextView;

    new-instance v1, Lcom/tkay/basead/ui/PanelView$3;

    invoke-direct {v1, p0, p1}, Lcom/tkay/basead/ui/PanelView$3;-><init>(Lcom/tkay/basead/ui/PanelView;Lcom/tkay/core/common/f/h;)V

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 354
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->q:Landroid/widget/TextView;

    new-instance v1, Lcom/tkay/basead/ui/PanelView$4;

    invoke-direct {v1, p0, p1}, Lcom/tkay/basead/ui/PanelView$4;-><init>(Lcom/tkay/basead/ui/PanelView;Lcom/tkay/core/common/f/h;)V

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 361
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView;->o:Landroid/widget/TextView;

    new-instance v0, Lcom/tkay/basead/ui/PanelView$5;

    invoke-direct {v0, p0}, Lcom/tkay/basead/ui/PanelView$5;-><init>(Lcom/tkay/basead/ui/PanelView;)V

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 367
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView;->p:Landroid/widget/TextView;

    new-instance v0, Lcom/tkay/basead/ui/PanelView$6;

    invoke-direct {v0, p0}, Lcom/tkay/basead/ui/PanelView$6;-><init>(Lcom/tkay/basead/ui/PanelView;)V

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 374
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView;->n:Landroid/view/ViewGroup;

    if-eqz p1, :cond_0

    .line 375
    invoke-virtual {p1, v5}, Landroid/view/ViewGroup;->setVisibility(I)V

    .line 377
    :cond_0
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView;->o:Landroid/widget/TextView;

    if-eqz p1, :cond_1

    .line 378
    invoke-virtual {p1, v5}, Landroid/widget/TextView;->setVisibility(I)V

    .line 380
    :cond_1
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView;->p:Landroid/widget/TextView;

    if-eqz p1, :cond_2

    .line 381
    invoke-virtual {p1, v5}, Landroid/widget/TextView;->setVisibility(I)V

    .line 383
    :cond_2
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView;->r:Landroid/widget/TextView;

    if-eqz p1, :cond_3

    .line 384
    invoke-virtual {p1, v5}, Landroid/widget/TextView;->setVisibility(I)V

    .line 386
    :cond_3
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView;->q:Landroid/widget/TextView;

    if-eqz p1, :cond_a

    .line 387
    invoke-virtual {p1, v5}, Landroid/widget/TextView;->setVisibility(I)V

    return-void

    .line 390
    :cond_4
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView;->n:Landroid/view/ViewGroup;

    const/16 v0, 0x8

    if-eqz p1, :cond_5

    .line 391
    invoke-virtual {p1, v0}, Landroid/view/ViewGroup;->setVisibility(I)V

    .line 393
    :cond_5
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView;->o:Landroid/widget/TextView;

    if-eqz p1, :cond_6

    .line 394
    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setVisibility(I)V

    .line 396
    :cond_6
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView;->p:Landroid/widget/TextView;

    if-eqz p1, :cond_7

    .line 397
    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setVisibility(I)V

    .line 399
    :cond_7
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView;->r:Landroid/widget/TextView;

    if-eqz p1, :cond_8

    .line 400
    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setVisibility(I)V

    .line 402
    :cond_8
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView;->q:Landroid/widget/TextView;

    if-eqz p1, :cond_9

    .line 403
    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setVisibility(I)V

    .line 406
    :cond_9
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object p1

    const-string v0, "myoffer_four_element_container_bg"

    const-string v1, "id"

    invoke-static {p1, v0, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/tkay/basead/ui/PanelView;->findViewById(I)Landroid/view/View;

    move-result-object p1

    if-eqz p1, :cond_a

    const/4 v0, 0x0

    .line 408
    invoke-virtual {p1, v0}, Landroid/view/View;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_a
    return-void
.end method

.method static synthetic c(Lcom/tkay/basead/ui/PanelView;)Landroid/widget/Button;
    .locals 0

    .line 40
    iget-object p0, p0, Lcom/tkay/basead/ui/PanelView;->f:Landroid/widget/Button;

    return-object p0
.end method

.method private c()V
    .locals 2

    .line 198
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->b:Landroid/widget/ImageView;

    instance-of v1, v0, Lcom/tkay/core/common/ui/component/RoundImageView;

    if-eqz v1, :cond_1

    .line 199
    check-cast v0, Lcom/tkay/core/common/ui/component/RoundImageView;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/ui/component/RoundImageView;->setNeedRadiu(Z)V

    .line 200
    iget v0, p0, Lcom/tkay/basead/ui/PanelView;->m:I

    const/4 v1, 0x2

    if-eq v0, v1, :cond_0

    const/4 v1, 0x6

    if-eq v0, v1, :cond_0

    .line 206
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->b:Landroid/widget/ImageView;

    check-cast v0, Lcom/tkay/core/common/ui/component/RoundImageView;

    const/16 v1, 0xc

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/ui/component/RoundImageView;->setRadiusInDip(I)V

    goto :goto_0

    .line 203
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->b:Landroid/widget/ImageView;

    check-cast v0, Lcom/tkay/core/common/ui/component/RoundImageView;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/ui/component/RoundImageView;->setRadiusInDip(I)V

    .line 209
    :goto_0
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->b:Landroid/widget/ImageView;

    invoke-virtual {v0}, Landroid/widget/ImageView;->invalidate()V

    :cond_1
    return-void
.end method

.method static synthetic d(Lcom/tkay/basead/ui/PanelView;)Landroid/view/View$OnClickListener;
    .locals 0

    .line 40
    iget-object p0, p0, Lcom/tkay/basead/ui/PanelView;->w:Landroid/view/View$OnClickListener;

    return-object p0
.end method

.method private d()V
    .locals 4

    .line 216
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->v:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    .line 218
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->a:Landroid/view/View;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v2, "id"

    const-string v3, "myoffer_iv_banner_icon"

    invoke-static {v1, v3, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/tkay/basead/ui/PanelView;->b:Landroid/widget/ImageView;

    .line 219
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->a:Landroid/view/View;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v3, "myoffer_tv_banner_title"

    invoke-static {v1, v3, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/tkay/basead/ui/PanelView;->d:Landroid/widget/TextView;

    .line 220
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->a:Landroid/view/View;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v3, "myoffer_tv_banner_desc"

    invoke-static {v1, v3, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/tkay/basead/ui/PanelView;->e:Landroid/widget/TextView;

    .line 221
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->a:Landroid/view/View;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v3, "myoffer_btn_banner_cta"

    invoke-static {v1, v3, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/tkay/basead/ui/PanelView;->f:Landroid/widget/Button;

    .line 222
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->a:Landroid/view/View;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v3, "myoffer_ad_logo"

    invoke-static {v1, v3, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/tkay/basead/ui/PanelView;->c:Landroid/widget/ImageView;

    .line 224
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->a:Landroid/view/View;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v3, "myoffer_four_element_container"

    invoke-static {v1, v3, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/tkay/basead/ui/PanelView;->n:Landroid/view/ViewGroup;

    .line 225
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->a:Landroid/view/View;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v3, "myoffer_version_name"

    invoke-static {v1, v3, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/tkay/basead/ui/PanelView;->o:Landroid/widget/TextView;

    .line 226
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->a:Landroid/view/View;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v3, "myoffer_publisher_name"

    invoke-static {v1, v3, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/tkay/basead/ui/PanelView;->p:Landroid/widget/TextView;

    .line 227
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->a:Landroid/view/View;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v3, "myoffer_permission_manage"

    invoke-static {v1, v3, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/tkay/basead/ui/PanelView;->q:Landroid/widget/TextView;

    .line 228
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->a:Landroid/view/View;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v3, "myoffer_privacy_agreement"

    invoke-static {v1, v3, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/tkay/basead/ui/PanelView;->r:Landroid/widget/TextView;

    .line 231
    :try_start_0
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->a:Landroid/view/View;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v3, "myoffer_shake_hint_text"

    invoke-static {v1, v3, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/tkay/basead/ui/BaseShakeView;

    iput-object v0, p0, Lcom/tkay/basead/ui/PanelView;->g:Lcom/tkay/basead/ui/BaseShakeView;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 234
    :catchall_0
    invoke-direct {p0}, Lcom/tkay/basead/ui/PanelView;->e()V

    return-void
.end method

.method static synthetic e(Lcom/tkay/basead/ui/PanelView;)Lcom/tkay/basead/ui/PanelView$a;
    .locals 0

    .line 40
    iget-object p0, p0, Lcom/tkay/basead/ui/PanelView;->h:Lcom/tkay/basead/ui/PanelView$a;

    return-object p0
.end method

.method private e()V
    .locals 3

    .line 238
    iget-boolean v0, p0, Lcom/tkay/basead/ui/PanelView;->u:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->g:Lcom/tkay/basead/ui/BaseShakeView;

    if-eqz v0, :cond_0

    iget v1, p0, Lcom/tkay/basead/ui/PanelView;->m:I

    const/16 v2, 0x8

    if-eq v1, v2, :cond_0

    const/4 v1, 0x0

    .line 240
    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/BaseShakeView;->setVisibility(I)V

    :cond_0
    return-void
.end method

.method static synthetic f(Lcom/tkay/basead/ui/PanelView;)Lcom/tkay/core/common/f/j;
    .locals 0

    .line 40
    iget-object p0, p0, Lcom/tkay/basead/ui/PanelView;->j:Lcom/tkay/core/common/f/j;

    return-object p0
.end method

.method private f()V
    .locals 4

    .line 420
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->b:Landroid/widget/ImageView;

    if-eqz v0, :cond_0

    .line 421
    iget-object v1, p0, Lcom/tkay/basead/ui/PanelView;->w:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 422
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->v:Ljava/util/List;

    iget-object v1, p0, Lcom/tkay/basead/ui/PanelView;->b:Landroid/widget/ImageView;

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 424
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->d:Landroid/widget/TextView;

    if-eqz v0, :cond_1

    .line 425
    iget-object v1, p0, Lcom/tkay/basead/ui/PanelView;->w:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 426
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->v:Ljava/util/List;

    iget-object v1, p0, Lcom/tkay/basead/ui/PanelView;->d:Landroid/widget/TextView;

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 428
    :cond_1
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->e:Landroid/widget/TextView;

    if-eqz v0, :cond_2

    .line 429
    iget-object v1, p0, Lcom/tkay/basead/ui/PanelView;->w:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 430
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->v:Ljava/util/List;

    iget-object v1, p0, Lcom/tkay/basead/ui/PanelView;->e:Landroid/widget/TextView;

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 432
    :cond_2
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->f:Landroid/widget/Button;

    iget-object v1, p0, Lcom/tkay/basead/ui/PanelView;->w:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 433
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->v:Ljava/util/List;

    iget-object v1, p0, Lcom/tkay/basead/ui/PanelView;->f:Landroid/widget/Button;

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 435
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->c:Landroid/widget/ImageView;

    if-eqz v0, :cond_3

    .line 436
    iget-object v1, p0, Lcom/tkay/basead/ui/PanelView;->w:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 437
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->v:Ljava/util/List;

    iget-object v1, p0, Lcom/tkay/basead/ui/PanelView;->c:Landroid/widget/ImageView;

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 439
    :cond_3
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->g:Lcom/tkay/basead/ui/BaseShakeView;

    if-eqz v0, :cond_4

    iget-boolean v1, p0, Lcom/tkay/basead/ui/PanelView;->u:Z

    if-eqz v1, :cond_4

    .line 440
    new-instance v1, Lcom/tkay/basead/ui/PanelView$7;

    invoke-direct {v1, p0}, Lcom/tkay/basead/ui/PanelView$7;-><init>(Lcom/tkay/basead/ui/PanelView;)V

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/BaseShakeView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 446
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->g:Lcom/tkay/basead/ui/BaseShakeView;

    new-instance v1, Lcom/tkay/basead/ui/PanelView$8;

    invoke-direct {v1, p0}, Lcom/tkay/basead/ui/PanelView$8;-><init>(Lcom/tkay/basead/ui/PanelView;)V

    iget-object v2, p0, Lcom/tkay/basead/ui/PanelView;->j:Lcom/tkay/core/common/f/j;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/basead/ui/BaseShakeView;->setOnShakeListener(Lcom/tkay/basead/ui/BaseShakeView$a;Lcom/tkay/core/common/f/j;)V

    .line 453
    :cond_4
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->a:Landroid/view/View;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v2, "myoffer_panel_view_blank"

    const-string v3, "id"

    invoke-static {v1, v2, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    if-eqz v0, :cond_5

    .line 455
    iget-object v1, p0, Lcom/tkay/basead/ui/PanelView;->w:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 456
    iget-object v1, p0, Lcom/tkay/basead/ui/PanelView;->v:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void

    .line 458
    :cond_5
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->a:Landroid/view/View;

    iget-object v1, p0, Lcom/tkay/basead/ui/PanelView;->w:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 459
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->v:Ljava/util/List;

    iget-object v1, p0, Lcom/tkay/basead/ui/PanelView;->a:Landroid/view/View;

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method


# virtual methods
.method protected dispatchDraw(Landroid/graphics/Canvas;)V
    .locals 8

    .line 499
    iget v0, p0, Lcom/tkay/basead/ui/PanelView;->m:I

    if-nez v0, :cond_0

    const/4 v2, 0x0

    const/4 v3, 0x0

    .line 500
    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getWidth()I

    move-result v0

    int-to-float v4, v0

    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getHeight()I

    move-result v0

    int-to-float v5, v0

    const/4 v6, 0x0

    const/16 v7, 0x1f

    move-object v1, p1

    invoke-virtual/range {v1 .. v7}, Landroid/graphics/Canvas;->saveLayer(FFFFLandroid/graphics/Paint;I)I

    move-result v0

    .line 501
    invoke-super {p0, p1}, Landroid/widget/RelativeLayout;->dispatchDraw(Landroid/graphics/Canvas;)V

    .line 502
    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getWidth()I

    move-result v1

    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getHeight()I

    move-result v2

    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object v3

    const/high16 v4, 0x40e00000    # 7.0f

    invoke-static {v3, v4}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v3

    invoke-static {p1, v1, v2, v3}, Lcom/tkay/core/common/l/u;->a(Landroid/graphics/Canvas;III)V

    .line 503
    invoke-virtual {p1, v0}, Landroid/graphics/Canvas;->restoreToCount(I)V

    return-void

    .line 505
    :cond_0
    invoke-super {p0, p1}, Landroid/widget/RelativeLayout;->dispatchDraw(Landroid/graphics/Canvas;)V

    return-void
.end method

.method public getCTAButton()Landroid/view/View;
    .locals 1

    .line 510
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->f:Landroid/widget/Button;

    return-object v0
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

    .line 488
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->v:Ljava/util/List;

    return-object v0
.end method

.method public getShakeView()Landroid/view/View;
    .locals 1

    .line 514
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->g:Lcom/tkay/basead/ui/BaseShakeView;

    return-object v0
.end method

.method public init(Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/i;IZLcom/tkay/basead/ui/PanelView$a;)V
    .locals 0

    .line 89
    iput-object p5, p0, Lcom/tkay/basead/ui/PanelView;->h:Lcom/tkay/basead/ui/PanelView$a;

    .line 90
    iput p3, p0, Lcom/tkay/basead/ui/PanelView;->i:I

    .line 91
    iput-object p1, p0, Lcom/tkay/basead/ui/PanelView;->l:Lcom/tkay/core/common/f/h;

    .line 92
    iput-object p2, p0, Lcom/tkay/basead/ui/PanelView;->k:Lcom/tkay/core/common/f/i;

    .line 93
    iget-object p2, p2, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    iput-object p2, p0, Lcom/tkay/basead/ui/PanelView;->j:Lcom/tkay/core/common/f/j;

    .line 94
    iput-boolean p4, p0, Lcom/tkay/basead/ui/PanelView;->u:Z

    .line 96
    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->K()Z

    move-result p1

    iput-boolean p1, p0, Lcom/tkay/basead/ui/PanelView;->s:Z

    .line 97
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView;->j:Lcom/tkay/core/common/f/j;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/j;->o()I

    move-result p1

    const/4 p2, 0x1

    if-ne p1, p2, :cond_0

    goto :goto_0

    :cond_0
    const/4 p2, 0x0

    :goto_0
    iput-boolean p2, p0, Lcom/tkay/basead/ui/PanelView;->t:Z

    .line 98
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    iput-object p1, p0, Lcom/tkay/basead/ui/PanelView;->v:Ljava/util/List;

    return-void
.end method

.method protected onDetachedFromWindow()V
    .locals 0

    .line 484
    invoke-super {p0}, Landroid/widget/RelativeLayout;->onDetachedFromWindow()V

    return-void
.end method

.method public setLayoutType(I)V
    .locals 9

    .line 103
    iput p1, p0, Lcom/tkay/basead/ui/PanelView;->m:I

    const-string v0, "myoffer_panel_view_horizontal_without_icon"

    const-string v1, "myoffer_panel_view_horizontal"

    const-string v2, "myoffer_panel_view_endcard_portrait_without_icon"

    const-string v3, "layout"

    const/4 v4, 0x1

    packed-switch p1, :pswitch_data_0

    .line 171
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView;->l:Lcom/tkay/core/common/f/h;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->t()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_7

    .line 172
    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object p1

    .line 173
    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "myoffer_panel_view_bottom_banner_without_icon"

    invoke-static {v0, v1, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 172
    invoke-virtual {p1, v0, p0, v4}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;Z)Landroid/view/View;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/basead/ui/PanelView;->a:Landroid/view/View;

    goto/16 :goto_0

    .line 166
    :pswitch_0
    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object p1

    .line 167
    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "myoffer_panel_view_full_screen_empty_info"

    invoke-static {v0, v1, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 166
    invoke-virtual {p1, v0, p0, v4}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;Z)Landroid/view/View;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/basead/ui/PanelView;->a:Landroid/view/View;

    goto/16 :goto_0

    .line 162
    :pswitch_1
    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object p1

    .line 163
    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "myoffer_panel_view_empty_info"

    invoke-static {v0, v1, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 162
    invoke-virtual {p1, v0, p0, v4}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;Z)Landroid/view/View;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/basead/ui/PanelView;->a:Landroid/view/View;

    goto/16 :goto_0

    .line 106
    :pswitch_2
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView;->l:Lcom/tkay/core/common/f/h;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->t()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 107
    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object p1

    .line 108
    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, v2, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 107
    invoke-virtual {p1, v0, p0, v4}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;Z)Landroid/view/View;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/basead/ui/PanelView;->a:Landroid/view/View;

    goto/16 :goto_0

    .line 110
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object p1

    .line 111
    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "myoffer_panel_view_endcard_vertical_portrait"

    invoke-static {v0, v1, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 110
    invoke-virtual {p1, v0, p0, v4}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;Z)Landroid/view/View;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/basead/ui/PanelView;->a:Landroid/view/View;

    goto/16 :goto_0

    .line 153
    :pswitch_3
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView;->l:Lcom/tkay/core/common/f/h;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->t()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_1

    .line 154
    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object p1

    .line 155
    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1, v0, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 154
    invoke-virtual {p1, v0, p0, v4}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;Z)Landroid/view/View;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/basead/ui/PanelView;->a:Landroid/view/View;

    goto/16 :goto_0

    .line 157
    :cond_1
    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object p1

    .line 158
    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, v1, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 157
    invoke-virtual {p1, v0, p0, v4}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;Z)Landroid/view/View;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/basead/ui/PanelView;->a:Landroid/view/View;

    goto/16 :goto_0

    .line 134
    :pswitch_4
    iget p1, p0, Lcom/tkay/basead/ui/PanelView;->i:I

    if-ne p1, v4, :cond_3

    .line 135
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView;->l:Lcom/tkay/core/common/f/h;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->t()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_2

    .line 136
    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object p1

    .line 137
    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1, v0, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 136
    invoke-virtual {p1, v0, p0, v4}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;Z)Landroid/view/View;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/basead/ui/PanelView;->a:Landroid/view/View;

    goto/16 :goto_0

    .line 139
    :cond_2
    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object p1

    .line 140
    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, v1, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 139
    invoke-virtual {p1, v0, p0, v4}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;Z)Landroid/view/View;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/basead/ui/PanelView;->a:Landroid/view/View;

    goto/16 :goto_0

    .line 143
    :cond_3
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView;->l:Lcom/tkay/core/common/f/h;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->t()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_4

    .line 144
    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object p1

    .line 145
    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "myoffer_panel_view_vertical_without_icon"

    invoke-static {v0, v1, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 144
    invoke-virtual {p1, v0, p0, v4}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;Z)Landroid/view/View;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/basead/ui/PanelView;->a:Landroid/view/View;

    goto/16 :goto_0

    .line 147
    :cond_4
    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object p1

    .line 148
    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "myoffer_panel_view_vertical"

    invoke-static {v0, v1, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 147
    invoke-virtual {p1, v0, p0, v4}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;Z)Landroid/view/View;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/basead/ui/PanelView;->a:Landroid/view/View;

    goto/16 :goto_0

    .line 125
    :pswitch_5
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView;->l:Lcom/tkay/core/common/f/h;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->t()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_5

    .line 126
    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object p1

    .line 127
    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "myoffer_panel_view_endcard_landscape_without_icon"

    invoke-static {v0, v1, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 126
    invoke-virtual {p1, v0, p0, v4}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;Z)Landroid/view/View;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/basead/ui/PanelView;->a:Landroid/view/View;

    goto :goto_0

    .line 129
    :cond_5
    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object p1

    .line 130
    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "myoffer_panel_view_endcard_landscape"

    invoke-static {v0, v1, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 129
    invoke-virtual {p1, v0, p0, v4}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;Z)Landroid/view/View;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/basead/ui/PanelView;->a:Landroid/view/View;

    goto :goto_0

    .line 115
    :pswitch_6
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView;->l:Lcom/tkay/core/common/f/h;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->t()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_6

    .line 116
    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object p1

    .line 117
    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, v2, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 116
    invoke-virtual {p1, v0, p0, v4}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;Z)Landroid/view/View;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/basead/ui/PanelView;->a:Landroid/view/View;

    goto :goto_0

    .line 119
    :cond_6
    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object p1

    .line 120
    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "myoffer_panel_view_endcard_horizontal_portrait"

    invoke-static {v0, v1, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 119
    invoke-virtual {p1, v0, p0, v4}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;Z)Landroid/view/View;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/basead/ui/PanelView;->a:Landroid/view/View;

    goto :goto_0

    .line 175
    :cond_7
    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object p1

    .line 176
    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "myoffer_panel_view_bottom_banner"

    invoke-static {v0, v1, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 175
    invoke-virtual {p1, v0, p0, v4}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;Z)Landroid/view/View;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/basead/ui/PanelView;->a:Landroid/view/View;

    .line 1189
    :goto_0
    invoke-direct {p0}, Lcom/tkay/basead/ui/PanelView;->d()V

    .line 1190
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView;->l:Lcom/tkay/core/common/f/h;

    .line 1249
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->b:Landroid/widget/ImageView;

    const/16 v1, 0x8

    if-eqz v0, :cond_9

    .line 1250
    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->t()Ljava/lang/String;

    move-result-object v0

    .line 1251
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_8

    .line 1252
    iget-object v2, p0, Lcom/tkay/basead/ui/PanelView;->b:Landroid/widget/ImageView;

    invoke-virtual {v2}, Landroid/widget/ImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v2

    .line 1253
    iget v3, v2, Landroid/view/ViewGroup$LayoutParams;->width:I

    .line 1254
    iget v2, v2, Landroid/view/ViewGroup$LayoutParams;->height:I

    .line 1255
    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-static {v5}, Lcom/tkay/core/common/res/b;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/b;

    move-result-object v5

    new-instance v6, Lcom/tkay/core/common/res/e;

    invoke-direct {v6, v4, v0}, Lcom/tkay/core/common/res/e;-><init>(ILjava/lang/String;)V

    new-instance v7, Lcom/tkay/basead/ui/PanelView$1;

    invoke-direct {v7, p0, v0}, Lcom/tkay/basead/ui/PanelView$1;-><init>(Lcom/tkay/basead/ui/PanelView;Ljava/lang/String;)V

    invoke-virtual {v5, v6, v3, v2, v7}, Lcom/tkay/core/common/res/b;->a(Lcom/tkay/core/common/res/e;IILcom/tkay/core/common/res/b$a;)V

    .line 1271
    :cond_8
    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->t()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_9

    .line 1272
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->b:Landroid/widget/ImageView;

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 1276
    :cond_9
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->c:Landroid/widget/ImageView;

    if-eqz v0, :cond_b

    .line 1277
    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->v()Ljava/lang/String;

    move-result-object v0

    .line 1278
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_a

    .line 1279
    iget-object v2, p0, Lcom/tkay/basead/ui/PanelView;->c:Landroid/widget/ImageView;

    invoke-virtual {v2}, Landroid/widget/ImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v2

    .line 1280
    iget v3, v2, Landroid/view/ViewGroup$LayoutParams;->width:I

    .line 1281
    iget v5, v2, Landroid/view/ViewGroup$LayoutParams;->height:I

    .line 1282
    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object v6

    invoke-static {v6}, Lcom/tkay/core/common/res/b;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/b;

    move-result-object v6

    new-instance v7, Lcom/tkay/core/common/res/e;

    invoke-direct {v7, v4, v0}, Lcom/tkay/core/common/res/e;-><init>(ILjava/lang/String;)V

    new-instance v8, Lcom/tkay/basead/ui/PanelView$2;

    invoke-direct {v8, p0, v0, v2}, Lcom/tkay/basead/ui/PanelView$2;-><init>(Lcom/tkay/basead/ui/PanelView;Ljava/lang/String;Landroid/view/ViewGroup$LayoutParams;)V

    invoke-virtual {v6, v7, v3, v5, v8}, Lcom/tkay/core/common/res/b;->a(Lcom/tkay/core/common/res/e;IILcom/tkay/core/common/res/b$a;)V

    goto :goto_1

    .line 1309
    :cond_a
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->c:Landroid/widget/ImageView;

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 1313
    :cond_b
    :goto_1
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->e:Landroid/widget/TextView;

    if-eqz v0, :cond_d

    .line 1314
    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->s()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_c

    .line 1315
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->e:Landroid/widget/TextView;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->s()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_2

    .line 1317
    :cond_c
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->e:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setVisibility(I)V

    .line 1321
    :cond_d
    :goto_2
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->d:Landroid/widget/TextView;

    if-eqz v0, :cond_f

    .line 1322
    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->r()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_e

    .line 1323
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->d:Landroid/widget/TextView;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->r()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_3

    .line 1325
    :cond_e
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->d:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setVisibility(I)V

    .line 1329
    :cond_f
    :goto_3
    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->w()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_10

    .line 1330
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->f:Landroid/widget/Button;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->w()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/widget/Button;->setText(Ljava/lang/CharSequence;)V

    goto :goto_4

    .line 1332
    :cond_10
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->f:Landroid/widget/Button;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/basead/ui/PanelView;->l:Lcom/tkay/core/common/f/h;

    invoke-static {v2, v3}, Lcom/tkay/basead/a/e;->a(Landroid/content/Context;Lcom/tkay/core/common/f/h;)I

    move-result v2

    invoke-virtual {v0, v2}, Landroid/widget/Button;->setText(I)V

    .line 1336
    :goto_4
    invoke-direct {p0, p1}, Lcom/tkay/basead/ui/PanelView;->b(Lcom/tkay/core/common/f/h;)V

    .line 1420
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView;->b:Landroid/widget/ImageView;

    if-eqz p1, :cond_11

    .line 1421
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->w:Landroid/view/View$OnClickListener;

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1422
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView;->v:Ljava/util/List;

    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->b:Landroid/widget/ImageView;

    invoke-interface {p1, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 1424
    :cond_11
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView;->d:Landroid/widget/TextView;

    if-eqz p1, :cond_12

    .line 1425
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->w:Landroid/view/View$OnClickListener;

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1426
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView;->v:Ljava/util/List;

    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->d:Landroid/widget/TextView;

    invoke-interface {p1, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 1428
    :cond_12
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView;->e:Landroid/widget/TextView;

    if-eqz p1, :cond_13

    .line 1429
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->w:Landroid/view/View$OnClickListener;

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1430
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView;->v:Ljava/util/List;

    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->e:Landroid/widget/TextView;

    invoke-interface {p1, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 1432
    :cond_13
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView;->f:Landroid/widget/Button;

    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->w:Landroid/view/View$OnClickListener;

    invoke-virtual {p1, v0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1433
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView;->v:Ljava/util/List;

    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->f:Landroid/widget/Button;

    invoke-interface {p1, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 1435
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView;->c:Landroid/widget/ImageView;

    if-eqz p1, :cond_14

    .line 1436
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->w:Landroid/view/View$OnClickListener;

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1437
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView;->v:Ljava/util/List;

    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->c:Landroid/widget/ImageView;

    invoke-interface {p1, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 1439
    :cond_14
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView;->g:Lcom/tkay/basead/ui/BaseShakeView;

    if-eqz p1, :cond_15

    iget-boolean v0, p0, Lcom/tkay/basead/ui/PanelView;->u:Z

    if-eqz v0, :cond_15

    .line 1440
    new-instance v0, Lcom/tkay/basead/ui/PanelView$7;

    invoke-direct {v0, p0}, Lcom/tkay/basead/ui/PanelView$7;-><init>(Lcom/tkay/basead/ui/PanelView;)V

    invoke-virtual {p1, v0}, Lcom/tkay/basead/ui/BaseShakeView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1446
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView;->g:Lcom/tkay/basead/ui/BaseShakeView;

    new-instance v0, Lcom/tkay/basead/ui/PanelView$8;

    invoke-direct {v0, p0}, Lcom/tkay/basead/ui/PanelView$8;-><init>(Lcom/tkay/basead/ui/PanelView;)V

    iget-object v2, p0, Lcom/tkay/basead/ui/PanelView;->j:Lcom/tkay/core/common/f/j;

    invoke-virtual {p1, v0, v2}, Lcom/tkay/basead/ui/BaseShakeView;->setOnShakeListener(Lcom/tkay/basead/ui/BaseShakeView$a;Lcom/tkay/core/common/f/j;)V

    .line 1453
    :cond_15
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView;->a:Landroid/view/View;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/PanelView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v2, "myoffer_panel_view_blank"

    const-string v3, "id"

    invoke-static {v0, v2, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p1, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object p1

    if-eqz p1, :cond_16

    .line 1455
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->w:Landroid/view/View$OnClickListener;

    invoke-virtual {p1, v0}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1456
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->v:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_5

    .line 1458
    :cond_16
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView;->a:Landroid/view/View;

    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->w:Landroid/view/View$OnClickListener;

    invoke-virtual {p1, v0}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1459
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView;->v:Ljava/util/List;

    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView;->a:Landroid/view/View;

    invoke-interface {p1, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 2198
    :goto_5
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView;->b:Landroid/widget/ImageView;

    instance-of v0, p1, Lcom/tkay/core/common/ui/component/RoundImageView;

    if-eqz v0, :cond_18

    .line 2199
    check-cast p1, Lcom/tkay/core/common/ui/component/RoundImageView;

    invoke-virtual {p1, v4}, Lcom/tkay/core/common/ui/component/RoundImageView;->setNeedRadiu(Z)V

    .line 2200
    iget p1, p0, Lcom/tkay/basead/ui/PanelView;->m:I

    const/4 v0, 0x2

    if-eq p1, v0, :cond_17

    const/4 v0, 0x6

    if-eq p1, v0, :cond_17

    .line 2206
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView;->b:Landroid/widget/ImageView;

    check-cast p1, Lcom/tkay/core/common/ui/component/RoundImageView;

    const/16 v0, 0xc

    invoke-virtual {p1, v0}, Lcom/tkay/core/common/ui/component/RoundImageView;->setRadiusInDip(I)V

    goto :goto_6

    .line 2203
    :cond_17
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView;->b:Landroid/widget/ImageView;

    check-cast p1, Lcom/tkay/core/common/ui/component/RoundImageView;

    invoke-virtual {p1, v1}, Lcom/tkay/core/common/ui/component/RoundImageView;->setRadiusInDip(I)V

    .line 2209
    :goto_6
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView;->b:Landroid/widget/ImageView;

    invoke-virtual {p1}, Landroid/widget/ImageView;->invalidate()V

    :cond_18
    return-void

    nop

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_5
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
