.class public Lcom/tkay/basead/ui/HalfScreenATView;
.super Lcom/tkay/basead/ui/BaseScreenATView;


# static fields
.field public static final TAG:Ljava/lang/String;


# instance fields
.field private ae:I

.field private af:Landroid/widget/RelativeLayout;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 25
    const-class v0, Lcom/tkay/basead/ui/HalfScreenATView;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/basead/ui/HalfScreenATView;->TAG:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 31
    invoke-direct {p0, p1}, Lcom/tkay/basead/ui/BaseScreenATView;-><init>(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Ljava/lang/String;II)V
    .locals 0

    .line 35
    invoke-direct/range {p0 .. p6}, Lcom/tkay/basead/ui/BaseScreenATView;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Ljava/lang/String;II)V

    .line 37
    invoke-virtual {p0}, Lcom/tkay/basead/ui/HalfScreenATView;->getContext()Landroid/content/Context;

    move-result-object p1

    const-string p2, "myoffer_half_screen_view_id"

    const-string p3, "id"

    invoke-static {p1, p2, p3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/tkay/basead/ui/HalfScreenATView;->setId(I)V

    const/4 p1, 0x1

    .line 38
    iput p1, p0, Lcom/tkay/basead/ui/HalfScreenATView;->G:I

    return-void
.end method

.method private K()V
    .locals 1

    .line 1125
    iget-object v0, p0, Lcom/tkay/basead/ui/HalfScreenATView;->d:Lcom/tkay/core/common/f/h;

    invoke-static {v0}, Lcom/tkay/basead/a/e;->a(Lcom/tkay/core/common/f/h;)Z

    move-result v0

    xor-int/lit8 v0, v0, 0x1

    if-eqz v0, :cond_0

    const/4 v0, 0x7

    .line 44
    iput v0, p0, Lcom/tkay/basead/ui/HalfScreenATView;->ae:I

    return-void

    .line 47
    :cond_0
    invoke-direct {p0}, Lcom/tkay/basead/ui/HalfScreenATView;->L()Z

    move-result v0

    if-eqz v0, :cond_1

    const/4 v0, 0x3

    .line 48
    iput v0, p0, Lcom/tkay/basead/ui/HalfScreenATView;->ae:I

    return-void

    :cond_1
    const/4 v0, 0x4

    .line 51
    iput v0, p0, Lcom/tkay/basead/ui/HalfScreenATView;->ae:I

    return-void
.end method

.method private L()Z
    .locals 2

    .line 58
    iget v0, p0, Lcom/tkay/basead/ui/HalfScreenATView;->aa:I

    iget v1, p0, Lcom/tkay/basead/ui/HalfScreenATView;->ab:I

    if-gt v0, v1, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method private M()Z
    .locals 1

    .line 125
    iget-object v0, p0, Lcom/tkay/basead/ui/HalfScreenATView;->d:Lcom/tkay/core/common/f/h;

    invoke-static {v0}, Lcom/tkay/basead/a/e;->a(Lcom/tkay/core/common/f/h;)Z

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method private N()V
    .locals 17

    move-object/from16 v0, p0

    .line 165
    iget-object v1, v0, Lcom/tkay/basead/ui/HalfScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    invoke-virtual {v1}, Lcom/tkay/basead/ui/PanelView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v1

    check-cast v1, Landroid/widget/RelativeLayout$LayoutParams;

    .line 167
    iget-object v2, v0, Lcom/tkay/basead/ui/HalfScreenATView;->w:Landroid/widget/RelativeLayout;

    invoke-virtual {v2}, Landroid/widget/RelativeLayout;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v2

    check-cast v2, Landroid/widget/RelativeLayout$LayoutParams;

    .line 168
    iget v3, v2, Landroid/widget/RelativeLayout$LayoutParams;->leftMargin:I

    .line 169
    iget v4, v2, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 170
    iget v5, v2, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    .line 171
    iget v6, v2, Landroid/widget/RelativeLayout$LayoutParams;->bottomMargin:I

    .line 173
    iget-object v7, v0, Lcom/tkay/basead/ui/HalfScreenATView;->x:Lcom/tkay/basead/ui/PlayerView;

    invoke-virtual {v7}, Lcom/tkay/basead/ui/PlayerView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v7

    check-cast v7, Landroid/widget/RelativeLayout$LayoutParams;

    .line 174
    iget-object v8, v0, Lcom/tkay/basead/ui/HalfScreenATView;->af:Landroid/widget/RelativeLayout;

    invoke-virtual {v8}, Landroid/widget/RelativeLayout;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v8

    check-cast v8, Landroid/widget/RelativeLayout$LayoutParams;

    .line 184
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/HalfScreenATView;->getContext()Landroid/content/Context;

    move-result-object v9

    invoke-static {v9}, Lcom/tkay/core/common/l/h;->b(Landroid/content/Context;)I

    move-result v9

    if-gtz v9, :cond_0

    .line 186
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/HalfScreenATView;->getContext()Landroid/content/Context;

    move-result-object v9

    const/high16 v10, 0x41c80000    # 25.0f

    invoke-static {v9, v10}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v9

    .line 189
    :cond_0
    iget v10, v0, Lcom/tkay/basead/ui/HalfScreenATView;->ae:I

    const/4 v11, 0x7

    const v12, 0x3f124925

    const/4 v13, 0x2

    const v14, 0x3f8ccccd    # 1.1f

    const v15, 0x3f842108

    if-ne v10, v11, :cond_4

    .line 190
    iget v10, v0, Lcom/tkay/basead/ui/HalfScreenATView;->t:I

    const/high16 v11, 0x42f00000    # 120.0f

    if-ne v10, v13, :cond_2

    .line 191
    iget v3, v0, Lcom/tkay/basead/ui/HalfScreenATView;->D:I

    sub-int/2addr v3, v5

    sub-int/2addr v3, v6

    int-to-float v4, v3

    const/high16 v6, 0x3fe00000    # 1.75f

    mul-float/2addr v4, v6

    float-to-int v4, v4

    .line 194
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/HalfScreenATView;->getContext()Landroid/content/Context;

    move-result-object v6

    invoke-static {v6, v11}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v6

    if-ge v5, v9, :cond_1

    int-to-float v5, v9

    mul-float/2addr v5, v14

    float-to-int v5, v5

    .line 198
    iput v5, v2, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    .line 200
    :cond_1
    iput v4, v2, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    .line 201
    iget-object v5, v0, Lcom/tkay/basead/ui/HalfScreenATView;->w:Landroid/widget/RelativeLayout;

    invoke-virtual {v5, v2}, Landroid/widget/RelativeLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    goto :goto_0

    .line 203
    :cond_2
    invoke-direct/range {p0 .. p0}, Lcom/tkay/basead/ui/HalfScreenATView;->L()Z

    move-result v2

    if-eqz v2, :cond_3

    .line 204
    iget v2, v0, Lcom/tkay/basead/ui/HalfScreenATView;->C:I

    sub-int/2addr v2, v3

    sub-int v4, v2, v4

    int-to-float v2, v4

    div-float/2addr v2, v12

    float-to-int v3, v2

    .line 207
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/HalfScreenATView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v5, 0x43700000    # 240.0f

    invoke-static {v2, v5}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v6

    goto :goto_0

    .line 209
    :cond_3
    iget v2, v0, Lcom/tkay/basead/ui/HalfScreenATView;->C:I

    sub-int/2addr v2, v3

    sub-int v4, v2, v4

    int-to-float v2, v4

    div-float/2addr v2, v15

    float-to-int v3, v2

    .line 212
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/HalfScreenATView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2, v11}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v6

    .line 218
    :goto_0
    iput v4, v0, Lcom/tkay/basead/ui/HalfScreenATView;->O:I

    .line 219
    iput v3, v0, Lcom/tkay/basead/ui/HalfScreenATView;->P:I

    goto/16 :goto_2

    :cond_4
    const/4 v11, 0x3

    const/4 v15, 0x1

    const/16 v16, 0x0

    const-string v14, "id"

    const-string v13, "myoffer_panel_view_blank"

    if-ne v10, v11, :cond_9

    .line 222
    iget v10, v0, Lcom/tkay/basead/ui/HalfScreenATView;->t:I

    if-ne v10, v15, :cond_7

    .line 224
    iget-object v2, v0, Lcom/tkay/basead/ui/HalfScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/HalfScreenATView;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-static {v5, v13, v14}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v5

    invoke-virtual {v2, v5}, Lcom/tkay/basead/ui/PanelView;->findViewById(I)Landroid/view/View;

    move-result-object v2

    if-eqz v2, :cond_5

    .line 227
    invoke-virtual {v2}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v2

    check-cast v2, Landroid/widget/RelativeLayout$LayoutParams;

    .line 228
    iget v2, v2, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    move/from16 v16, v2

    .line 231
    :cond_5
    iget v2, v0, Lcom/tkay/basead/ui/HalfScreenATView;->C:I

    sub-int/2addr v2, v3

    sub-int v4, v2, v4

    int-to-float v2, v4

    div-float v3, v2, v12

    float-to-int v3, v3

    .line 234
    iget v5, v0, Lcom/tkay/basead/ui/HalfScreenATView;->D:I

    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/HalfScreenATView;->getContext()Landroid/content/Context;

    move-result-object v6

    const/high16 v9, 0x41e00000    # 28.0f

    invoke-static {v6, v9}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v6

    const/4 v9, 0x2

    mul-int/2addr v6, v9

    add-int/2addr v6, v3

    if-ge v5, v6, :cond_6

    const v5, 0x3fe8ba2f

    div-float/2addr v2, v5

    float-to-int v6, v2

    .line 238
    iput v4, v0, Lcom/tkay/basead/ui/HalfScreenATView;->O:I

    sub-int v2, v3, v6

    add-int v2, v2, v16

    .line 239
    iput v2, v0, Lcom/tkay/basead/ui/HalfScreenATView;->P:I

    goto/16 :goto_2

    .line 241
    :cond_6
    iput v4, v0, Lcom/tkay/basead/ui/HalfScreenATView;->O:I

    .line 242
    iget v2, v0, Lcom/tkay/basead/ui/HalfScreenATView;->O:I

    int-to-float v2, v2

    const v5, 0x3f4ccccd    # 0.8f

    div-float/2addr v2, v5

    float-to-int v2, v2

    iput v2, v0, Lcom/tkay/basead/ui/HalfScreenATView;->P:I

    .line 245
    iget v2, v0, Lcom/tkay/basead/ui/HalfScreenATView;->P:I

    goto :goto_1

    :cond_7
    if-ge v5, v9, :cond_8

    int-to-float v3, v9

    const v4, 0x3f8ccccd    # 1.1f

    mul-float/2addr v3, v4

    float-to-int v5, v3

    .line 253
    iput v5, v2, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    .line 256
    :cond_8
    iget v3, v0, Lcom/tkay/basead/ui/HalfScreenATView;->D:I

    sub-int/2addr v3, v5

    sub-int/2addr v3, v6

    int-to-float v4, v3

    const v5, 0x3fcccccd    # 1.6f

    mul-float/2addr v4, v5

    float-to-int v4, v4

    .line 259
    iput v3, v0, Lcom/tkay/basead/ui/HalfScreenATView;->P:I

    .line 260
    iget v5, v0, Lcom/tkay/basead/ui/HalfScreenATView;->P:I

    int-to-float v5, v5

    const v6, 0x3f0f5c29    # 0.56f

    mul-float/2addr v5, v6

    float-to-int v5, v5

    iput v5, v0, Lcom/tkay/basead/ui/HalfScreenATView;->O:I

    .line 263
    iget v5, v0, Lcom/tkay/basead/ui/HalfScreenATView;->O:I

    sub-int v5, v4, v5

    .line 265
    iput v4, v2, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    .line 266
    iget-object v6, v0, Lcom/tkay/basead/ui/HalfScreenATView;->w:Landroid/widget/RelativeLayout;

    invoke-virtual {v6, v2}, Landroid/widget/RelativeLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    move v6, v3

    goto :goto_3

    .line 269
    :cond_9
    iget-object v10, v0, Lcom/tkay/basead/ui/HalfScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/HalfScreenATView;->getContext()Landroid/content/Context;

    move-result-object v11

    invoke-static {v11, v13, v14}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v11

    invoke-virtual {v10, v11}, Lcom/tkay/basead/ui/PanelView;->findViewById(I)Landroid/view/View;

    move-result-object v10

    if-eqz v10, :cond_a

    .line 273
    invoke-virtual {v10}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v10

    check-cast v10, Landroid/widget/RelativeLayout$LayoutParams;

    .line 274
    iget v10, v10, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    move/from16 v16, v10

    .line 277
    :cond_a
    iget v10, v0, Lcom/tkay/basead/ui/HalfScreenATView;->t:I

    const/high16 v11, 0x40000000    # 2.0f

    if-ne v10, v15, :cond_b

    .line 280
    iget v2, v0, Lcom/tkay/basead/ui/HalfScreenATView;->C:I

    sub-int/2addr v2, v3

    sub-int v4, v2, v4

    int-to-float v2, v4

    const v3, 0x3f842108

    div-float/2addr v2, v3

    float-to-int v3, v2

    .line 283
    iput v4, v0, Lcom/tkay/basead/ui/HalfScreenATView;->O:I

    .line 284
    iget v2, v0, Lcom/tkay/basead/ui/HalfScreenATView;->O:I

    int-to-float v2, v2

    div-float/2addr v2, v11

    float-to-int v2, v2

    iput v2, v0, Lcom/tkay/basead/ui/HalfScreenATView;->P:I

    .line 287
    iget v2, v0, Lcom/tkay/basead/ui/HalfScreenATView;->P:I

    :goto_1
    sub-int v2, v3, v2

    add-int v6, v2, v16

    :goto_2
    move v5, v4

    goto :goto_3

    :cond_b
    if-ge v5, v9, :cond_c

    int-to-float v3, v9

    const v4, 0x3f8ccccd    # 1.1f

    mul-float/2addr v3, v4

    float-to-int v5, v3

    .line 294
    iput v5, v2, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    .line 297
    :cond_c
    iget v3, v0, Lcom/tkay/basead/ui/HalfScreenATView;->D:I

    sub-int/2addr v3, v5

    sub-int/2addr v3, v6

    int-to-float v4, v3

    const v5, 0x3f842108

    mul-float/2addr v4, v5

    float-to-int v4, v4

    .line 300
    iput v4, v0, Lcom/tkay/basead/ui/HalfScreenATView;->O:I

    .line 301
    iget v5, v0, Lcom/tkay/basead/ui/HalfScreenATView;->O:I

    int-to-float v5, v5

    div-float/2addr v5, v11

    float-to-int v5, v5

    iput v5, v0, Lcom/tkay/basead/ui/HalfScreenATView;->P:I

    .line 304
    iget v5, v0, Lcom/tkay/basead/ui/HalfScreenATView;->P:I

    sub-int v5, v3, v5

    add-int v6, v5, v16

    .line 306
    iput v4, v2, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    .line 307
    iget-object v5, v0, Lcom/tkay/basead/ui/HalfScreenATView;->w:Landroid/widget/RelativeLayout;

    invoke-virtual {v5, v2}, Landroid/widget/RelativeLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    goto :goto_2

    .line 311
    :goto_3
    iput v4, v8, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    .line 312
    iput v3, v8, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    .line 313
    iget-object v2, v0, Lcom/tkay/basead/ui/HalfScreenATView;->af:Landroid/widget/RelativeLayout;

    invoke-virtual {v2, v8}, Landroid/widget/RelativeLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 315
    iget v2, v0, Lcom/tkay/basead/ui/HalfScreenATView;->O:I

    iput v2, v7, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    .line 316
    iget v2, v0, Lcom/tkay/basead/ui/HalfScreenATView;->P:I

    iput v2, v7, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    .line 317
    iget-object v2, v0, Lcom/tkay/basead/ui/HalfScreenATView;->x:Lcom/tkay/basead/ui/PlayerView;

    invoke-virtual {v2, v7}, Lcom/tkay/basead/ui/PlayerView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 319
    iput v5, v1, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    .line 320
    iput v6, v1, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    .line 321
    iget-object v2, v0, Lcom/tkay/basead/ui/HalfScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    invoke-virtual {v2, v1}, Lcom/tkay/basead/ui/PanelView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method


# virtual methods
.method protected final A()V
    .locals 0

    .line 378
    invoke-super {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->B()V

    .line 379
    invoke-super {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->C()V

    return-void
.end method

.method protected final F()V
    .locals 0

    return-void
.end method

.method protected final H()V
    .locals 4

    .line 365
    iget-object v0, p0, Lcom/tkay/basead/ui/HalfScreenATView;->af:Landroid/widget/RelativeLayout;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/basead/ui/HalfScreenATView;->z:Lcom/tkay/basead/ui/BaseEndCardView;

    if-eqz v0, :cond_0

    .line 366
    iget-object v0, p0, Lcom/tkay/basead/ui/HalfScreenATView;->x:Lcom/tkay/basead/ui/PlayerView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/PlayerView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    .line 367
    iget-object v1, p0, Lcom/tkay/basead/ui/HalfScreenATView;->af:Landroid/widget/RelativeLayout;

    iget-object v2, p0, Lcom/tkay/basead/ui/HalfScreenATView;->z:Lcom/tkay/basead/ui/BaseEndCardView;

    const/4 v3, 0x1

    invoke-virtual {v1, v2, v3, v0}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V

    :cond_0
    return-void
.end method

.method protected final I()V
    .locals 3

    .line 337
    iget-object v0, p0, Lcom/tkay/basead/ui/HalfScreenATView;->x:Lcom/tkay/basead/ui/PlayerView;

    if-eqz v0, :cond_0

    .line 338
    iget-object v0, p0, Lcom/tkay/basead/ui/HalfScreenATView;->af:Landroid/widget/RelativeLayout;

    iget-object v1, p0, Lcom/tkay/basead/ui/HalfScreenATView;->x:Lcom/tkay/basead/ui/PlayerView;

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->removeView(Landroid/view/View;)V

    const/4 v0, 0x0

    .line 339
    iput-object v0, p0, Lcom/tkay/basead/ui/HalfScreenATView;->x:Lcom/tkay/basead/ui/PlayerView;

    .line 342
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/HalfScreenATView;->H:Lcom/tkay/basead/ui/CountDownView;

    const/16 v1, 0x8

    if-eqz v0, :cond_1

    .line 343
    iget-object v0, p0, Lcom/tkay/basead/ui/HalfScreenATView;->H:Lcom/tkay/basead/ui/CountDownView;

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/CountDownView;->setVisibility(I)V

    .line 346
    :cond_1
    iget-object v0, p0, Lcom/tkay/basead/ui/HalfScreenATView;->I:Lcom/tkay/basead/ui/CloseImageView;

    iget v2, p0, Lcom/tkay/basead/ui/HalfScreenATView;->N:F

    invoke-virtual {v0, v2}, Lcom/tkay/basead/ui/CloseImageView;->setClickAreaScaleFactor(F)V

    .line 348
    iget-object v0, p0, Lcom/tkay/basead/ui/HalfScreenATView;->K:Lcom/tkay/basead/ui/MuteImageView;

    if-eqz v0, :cond_2

    .line 349
    iget-object v0, p0, Lcom/tkay/basead/ui/HalfScreenATView;->K:Lcom/tkay/basead/ui/MuteImageView;

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/MuteImageView;->setVisibility(I)V

    :cond_2
    return-void
.end method

.method protected final J()V
    .locals 17

    move-object/from16 v1, p0

    .line 2165
    :try_start_0
    iget-object v0, v1, Lcom/tkay/basead/ui/HalfScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/PanelView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    check-cast v0, Landroid/widget/RelativeLayout$LayoutParams;

    .line 2167
    iget-object v2, v1, Lcom/tkay/basead/ui/HalfScreenATView;->w:Landroid/widget/RelativeLayout;

    invoke-virtual {v2}, Landroid/widget/RelativeLayout;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v2

    check-cast v2, Landroid/widget/RelativeLayout$LayoutParams;

    .line 2168
    iget v3, v2, Landroid/widget/RelativeLayout$LayoutParams;->leftMargin:I

    .line 2169
    iget v4, v2, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 2170
    iget v5, v2, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    .line 2171
    iget v6, v2, Landroid/widget/RelativeLayout$LayoutParams;->bottomMargin:I

    .line 2173
    iget-object v7, v1, Lcom/tkay/basead/ui/HalfScreenATView;->x:Lcom/tkay/basead/ui/PlayerView;

    invoke-virtual {v7}, Lcom/tkay/basead/ui/PlayerView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v7

    check-cast v7, Landroid/widget/RelativeLayout$LayoutParams;

    .line 2174
    iget-object v8, v1, Lcom/tkay/basead/ui/HalfScreenATView;->af:Landroid/widget/RelativeLayout;

    invoke-virtual {v8}, Landroid/widget/RelativeLayout;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v8

    check-cast v8, Landroid/widget/RelativeLayout$LayoutParams;

    .line 2184
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/HalfScreenATView;->getContext()Landroid/content/Context;

    move-result-object v9

    invoke-static {v9}, Lcom/tkay/core/common/l/h;->b(Landroid/content/Context;)I

    move-result v9

    if-gtz v9, :cond_0

    .line 2186
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/HalfScreenATView;->getContext()Landroid/content/Context;

    move-result-object v9

    const/high16 v10, 0x41c80000    # 25.0f

    invoke-static {v9, v10}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v9

    .line 2189
    :cond_0
    iget v10, v1, Lcom/tkay/basead/ui/HalfScreenATView;->ae:I

    const/4 v11, 0x7

    const v12, 0x3f124925

    const/4 v13, 0x2

    const v14, 0x3f842108

    const v15, 0x3f8ccccd    # 1.1f

    if-ne v10, v11, :cond_4

    .line 2190
    iget v10, v1, Lcom/tkay/basead/ui/HalfScreenATView;->t:I

    const/high16 v11, 0x42f00000    # 120.0f

    if-ne v10, v13, :cond_2

    .line 2191
    iget v3, v1, Lcom/tkay/basead/ui/HalfScreenATView;->D:I

    sub-int/2addr v3, v5

    sub-int/2addr v3, v6

    int-to-float v4, v3

    const/high16 v6, 0x3fe00000    # 1.75f

    mul-float/2addr v4, v6

    float-to-int v4, v4

    .line 2194
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/HalfScreenATView;->getContext()Landroid/content/Context;

    move-result-object v6

    invoke-static {v6, v11}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v6

    if-ge v5, v9, :cond_1

    int-to-float v5, v9

    mul-float/2addr v5, v15

    float-to-int v5, v5

    .line 2198
    iput v5, v2, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    .line 2200
    :cond_1
    iput v4, v2, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    .line 2201
    iget-object v5, v1, Lcom/tkay/basead/ui/HalfScreenATView;->w:Landroid/widget/RelativeLayout;

    invoke-virtual {v5, v2}, Landroid/widget/RelativeLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    goto :goto_0

    .line 2203
    :cond_2
    invoke-direct/range {p0 .. p0}, Lcom/tkay/basead/ui/HalfScreenATView;->L()Z

    move-result v2

    if-eqz v2, :cond_3

    .line 2204
    iget v2, v1, Lcom/tkay/basead/ui/HalfScreenATView;->C:I

    sub-int/2addr v2, v3

    sub-int v4, v2, v4

    int-to-float v2, v4

    div-float/2addr v2, v12

    float-to-int v3, v2

    .line 2207
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/HalfScreenATView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v5, 0x43700000    # 240.0f

    invoke-static {v2, v5}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v6

    goto :goto_0

    .line 2209
    :cond_3
    iget v2, v1, Lcom/tkay/basead/ui/HalfScreenATView;->C:I

    sub-int/2addr v2, v3

    sub-int v4, v2, v4

    int-to-float v2, v4

    div-float/2addr v2, v14

    float-to-int v3, v2

    .line 2212
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/HalfScreenATView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2, v11}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v6

    .line 2218
    :goto_0
    iput v4, v1, Lcom/tkay/basead/ui/HalfScreenATView;->O:I

    .line 2219
    iput v3, v1, Lcom/tkay/basead/ui/HalfScreenATView;->P:I

    :goto_1
    move v5, v4

    goto/16 :goto_3

    .line 2220
    :cond_4
    iget v10, v1, Lcom/tkay/basead/ui/HalfScreenATView;->ae:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 v11, 0x3

    const/16 v16, 0x0

    const-string v14, "id"

    const-string v15, "myoffer_panel_view_blank"

    const/4 v13, 0x1

    if-ne v10, v11, :cond_9

    .line 2222
    :try_start_1
    iget v10, v1, Lcom/tkay/basead/ui/HalfScreenATView;->t:I

    if-ne v10, v13, :cond_7

    .line 2224
    iget-object v2, v1, Lcom/tkay/basead/ui/HalfScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/HalfScreenATView;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-static {v5, v15, v14}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v5

    invoke-virtual {v2, v5}, Lcom/tkay/basead/ui/PanelView;->findViewById(I)Landroid/view/View;

    move-result-object v2

    if-eqz v2, :cond_5

    .line 2227
    invoke-virtual {v2}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v2

    check-cast v2, Landroid/widget/RelativeLayout$LayoutParams;

    .line 2228
    iget v2, v2, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    move/from16 v16, v2

    .line 2231
    :cond_5
    iget v2, v1, Lcom/tkay/basead/ui/HalfScreenATView;->C:I

    sub-int/2addr v2, v3

    sub-int v4, v2, v4

    int-to-float v2, v4

    div-float v3, v2, v12

    float-to-int v3, v3

    .line 2234
    iget v5, v1, Lcom/tkay/basead/ui/HalfScreenATView;->D:I

    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/HalfScreenATView;->getContext()Landroid/content/Context;

    move-result-object v6

    const/high16 v9, 0x41e00000    # 28.0f

    invoke-static {v6, v9}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v6

    const/4 v9, 0x2

    mul-int/2addr v6, v9

    add-int/2addr v6, v3

    if-ge v5, v6, :cond_6

    const v5, 0x3fe8ba2f

    div-float/2addr v2, v5

    float-to-int v6, v2

    .line 2238
    iput v4, v1, Lcom/tkay/basead/ui/HalfScreenATView;->O:I

    sub-int v2, v3, v6

    add-int v2, v2, v16

    .line 2239
    iput v2, v1, Lcom/tkay/basead/ui/HalfScreenATView;->P:I

    goto :goto_1

    .line 2241
    :cond_6
    iput v4, v1, Lcom/tkay/basead/ui/HalfScreenATView;->O:I

    .line 2242
    iget v2, v1, Lcom/tkay/basead/ui/HalfScreenATView;->O:I

    int-to-float v2, v2

    const v5, 0x3f4ccccd    # 0.8f

    div-float/2addr v2, v5

    float-to-int v2, v2

    iput v2, v1, Lcom/tkay/basead/ui/HalfScreenATView;->P:I

    .line 2245
    iget v2, v1, Lcom/tkay/basead/ui/HalfScreenATView;->P:I

    goto :goto_2

    :cond_7
    if-ge v5, v9, :cond_8

    int-to-float v3, v9

    const v4, 0x3f8ccccd    # 1.1f

    mul-float/2addr v3, v4

    float-to-int v5, v3

    .line 2253
    iput v5, v2, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    .line 2256
    :cond_8
    iget v3, v1, Lcom/tkay/basead/ui/HalfScreenATView;->D:I

    sub-int/2addr v3, v5

    sub-int/2addr v3, v6

    int-to-float v4, v3

    const v5, 0x3fcccccd    # 1.6f

    mul-float/2addr v4, v5

    float-to-int v4, v4

    .line 2259
    iput v3, v1, Lcom/tkay/basead/ui/HalfScreenATView;->P:I

    .line 2260
    iget v5, v1, Lcom/tkay/basead/ui/HalfScreenATView;->P:I

    int-to-float v5, v5

    const v6, 0x3f0f5c29    # 0.56f

    mul-float/2addr v5, v6

    float-to-int v5, v5

    iput v5, v1, Lcom/tkay/basead/ui/HalfScreenATView;->O:I

    .line 2263
    iget v5, v1, Lcom/tkay/basead/ui/HalfScreenATView;->O:I

    sub-int v5, v4, v5

    .line 2265
    iput v4, v2, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    .line 2266
    iget-object v6, v1, Lcom/tkay/basead/ui/HalfScreenATView;->w:Landroid/widget/RelativeLayout;

    invoke-virtual {v6, v2}, Landroid/widget/RelativeLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    move v6, v3

    goto :goto_3

    .line 2269
    :cond_9
    iget-object v10, v1, Lcom/tkay/basead/ui/HalfScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/ui/HalfScreenATView;->getContext()Landroid/content/Context;

    move-result-object v11

    invoke-static {v11, v15, v14}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v11

    invoke-virtual {v10, v11}, Lcom/tkay/basead/ui/PanelView;->findViewById(I)Landroid/view/View;

    move-result-object v10

    if-eqz v10, :cond_a

    .line 2273
    invoke-virtual {v10}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v10

    check-cast v10, Landroid/widget/RelativeLayout$LayoutParams;

    .line 2274
    iget v10, v10, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    move/from16 v16, v10

    .line 2277
    :cond_a
    iget v10, v1, Lcom/tkay/basead/ui/HalfScreenATView;->t:I

    const/high16 v11, 0x40000000    # 2.0f

    if-ne v10, v13, :cond_b

    .line 2280
    iget v2, v1, Lcom/tkay/basead/ui/HalfScreenATView;->C:I

    sub-int/2addr v2, v3

    sub-int v4, v2, v4

    int-to-float v2, v4

    const v3, 0x3f842108

    div-float/2addr v2, v3

    float-to-int v3, v2

    .line 2283
    iput v4, v1, Lcom/tkay/basead/ui/HalfScreenATView;->O:I

    .line 2284
    iget v2, v1, Lcom/tkay/basead/ui/HalfScreenATView;->O:I

    int-to-float v2, v2

    div-float/2addr v2, v11

    float-to-int v2, v2

    iput v2, v1, Lcom/tkay/basead/ui/HalfScreenATView;->P:I

    .line 2287
    iget v2, v1, Lcom/tkay/basead/ui/HalfScreenATView;->P:I

    :goto_2
    sub-int v2, v3, v2

    add-int v6, v2, v16

    goto/16 :goto_1

    :cond_b
    if-ge v5, v9, :cond_c

    int-to-float v3, v9

    const v4, 0x3f8ccccd    # 1.1f

    mul-float/2addr v3, v4

    float-to-int v5, v3

    .line 2294
    iput v5, v2, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    .line 2297
    :cond_c
    iget v3, v1, Lcom/tkay/basead/ui/HalfScreenATView;->D:I

    sub-int/2addr v3, v5

    sub-int/2addr v3, v6

    int-to-float v4, v3

    const v5, 0x3f842108

    mul-float/2addr v4, v5

    float-to-int v4, v4

    .line 2300
    iput v4, v1, Lcom/tkay/basead/ui/HalfScreenATView;->O:I

    .line 2301
    iget v5, v1, Lcom/tkay/basead/ui/HalfScreenATView;->O:I

    int-to-float v5, v5

    div-float/2addr v5, v11

    float-to-int v5, v5

    iput v5, v1, Lcom/tkay/basead/ui/HalfScreenATView;->P:I

    .line 2304
    iget v5, v1, Lcom/tkay/basead/ui/HalfScreenATView;->P:I

    sub-int v5, v3, v5

    add-int v6, v5, v16

    .line 2306
    iput v4, v2, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    .line 2307
    iget-object v5, v1, Lcom/tkay/basead/ui/HalfScreenATView;->w:Landroid/widget/RelativeLayout;

    invoke-virtual {v5, v2}, Landroid/widget/RelativeLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    goto/16 :goto_1

    .line 2311
    :goto_3
    iput v4, v8, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    .line 2312
    iput v3, v8, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    .line 2313
    iget-object v2, v1, Lcom/tkay/basead/ui/HalfScreenATView;->af:Landroid/widget/RelativeLayout;

    invoke-virtual {v2, v8}, Landroid/widget/RelativeLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 2315
    iget v2, v1, Lcom/tkay/basead/ui/HalfScreenATView;->O:I

    iput v2, v7, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    .line 2316
    iget v2, v1, Lcom/tkay/basead/ui/HalfScreenATView;->P:I

    iput v2, v7, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    .line 2317
    iget-object v2, v1, Lcom/tkay/basead/ui/HalfScreenATView;->x:Lcom/tkay/basead/ui/PlayerView;

    invoke-virtual {v2, v7}, Lcom/tkay/basead/ui/PlayerView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 2319
    iput v5, v0, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    .line 2320
    iput v6, v0, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    .line 2321
    iget-object v2, v1, Lcom/tkay/basead/ui/HalfScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    invoke-virtual {v2, v0}, Lcom/tkay/basead/ui/PanelView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    .line 154
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method

.method protected final a()V
    .locals 4

    .line 70
    iget v0, p0, Lcom/tkay/basead/ui/HalfScreenATView;->ae:I

    const/4 v1, 0x3

    const-string v2, "layout"

    if-eq v0, v1, :cond_1

    const/4 v1, 0x7

    if-eq v0, v1, :cond_0

    .line 79
    invoke-virtual {p0}, Lcom/tkay/basead/ui/HalfScreenATView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v0

    invoke-virtual {p0}, Lcom/tkay/basead/ui/HalfScreenATView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v3, "myoffer_half_screen_horizontal"

    invoke-static {v1, v3, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1, p0}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    return-void

    .line 72
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/basead/ui/HalfScreenATView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v0

    invoke-virtual {p0}, Lcom/tkay/basead/ui/HalfScreenATView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v3, "myoffer_half_screen_empty_info"

    invoke-static {v1, v3, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1, p0}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    return-void

    .line 75
    :cond_1
    invoke-virtual {p0}, Lcom/tkay/basead/ui/HalfScreenATView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v0

    invoke-virtual {p0}, Lcom/tkay/basead/ui/HalfScreenATView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v3, "myoffer_half_screen_vertical"

    invoke-static {v1, v3, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1, p0}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    return-void
.end method

.method protected final b()V
    .locals 4

    .line 86
    invoke-super {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->b()V

    .line 88
    iget-object v0, p0, Lcom/tkay/basead/ui/HalfScreenATView;->w:Landroid/widget/RelativeLayout;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/HalfScreenATView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v2, "myoffer_rl_container"

    const-string v3, "id"

    invoke-static {v1, v2, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RelativeLayout;

    iput-object v0, p0, Lcom/tkay/basead/ui/HalfScreenATView;->af:Landroid/widget/RelativeLayout;

    return-void
.end method

.method protected final c(I)Z
    .locals 0

    const/4 p1, 0x1

    return p1
.end method

.method protected final d()V
    .locals 1

    .line 63
    invoke-super {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->d()V

    .line 2125
    iget-object v0, p0, Lcom/tkay/basead/ui/HalfScreenATView;->d:Lcom/tkay/core/common/f/h;

    invoke-static {v0}, Lcom/tkay/basead/a/e;->a(Lcom/tkay/core/common/f/h;)Z

    move-result v0

    xor-int/lit8 v0, v0, 0x1

    if-eqz v0, :cond_0

    const/4 v0, 0x7

    .line 2044
    iput v0, p0, Lcom/tkay/basead/ui/HalfScreenATView;->ae:I

    return-void

    .line 2047
    :cond_0
    invoke-direct {p0}, Lcom/tkay/basead/ui/HalfScreenATView;->L()Z

    move-result v0

    if-eqz v0, :cond_1

    const/4 v0, 0x3

    .line 2048
    iput v0, p0, Lcom/tkay/basead/ui/HalfScreenATView;->ae:I

    return-void

    :cond_1
    const/4 v0, 0x4

    .line 2051
    iput v0, p0, Lcom/tkay/basead/ui/HalfScreenATView;->ae:I

    return-void
.end method

.method protected final q()I
    .locals 1

    .line 93
    iget v0, p0, Lcom/tkay/basead/ui/HalfScreenATView;->Q:I

    return v0
.end method

.method protected final w()V
    .locals 3

    .line 130
    iget-object v0, p0, Lcom/tkay/basead/ui/HalfScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    if-eqz v0, :cond_1

    .line 131
    iget v0, p0, Lcom/tkay/basead/ui/HalfScreenATView;->ae:I

    iput v0, p0, Lcom/tkay/basead/ui/HalfScreenATView;->Q:I

    .line 132
    iget-object v0, p0, Lcom/tkay/basead/ui/HalfScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    iget v1, p0, Lcom/tkay/basead/ui/HalfScreenATView;->Q:I

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/PanelView;->setLayoutType(I)V

    .line 133
    iget v0, p0, Lcom/tkay/basead/ui/HalfScreenATView;->ae:I

    const/4 v1, 0x7

    if-ne v0, v1, :cond_1

    .line 134
    iget-object v0, p0, Lcom/tkay/basead/ui/HalfScreenATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->x()I

    move-result v0

    if-nez v0, :cond_0

    .line 135
    iget-object v0, p0, Lcom/tkay/basead/ui/HalfScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/PanelView;->getCTAButton()Landroid/view/View;

    move-result-object v0

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    .line 138
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/basead/ui/HalfScreenATView;->m()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 139
    invoke-virtual {p0}, Lcom/tkay/basead/ui/HalfScreenATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "id"

    const-string v2, "myoffer_shake_view"

    invoke-static {v0, v2, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/HalfScreenATView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/tkay/basead/ui/BaseShakeView;

    iput-object v0, p0, Lcom/tkay/basead/ui/HalfScreenATView;->R:Lcom/tkay/basead/ui/BaseShakeView;

    .line 140
    invoke-virtual {p0}, Lcom/tkay/basead/ui/HalfScreenATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v2, "myoffer_shake_border_view"

    invoke-static {v0, v2, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/HalfScreenATView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/tkay/basead/ui/BaseShakeView;

    iput-object v0, p0, Lcom/tkay/basead/ui/HalfScreenATView;->S:Lcom/tkay/basead/ui/BaseShakeView;

    .line 141
    invoke-virtual {p0}, Lcom/tkay/basead/ui/HalfScreenATView;->o()V

    .line 142
    iget-object v0, p0, Lcom/tkay/basead/ui/HalfScreenATView;->R:Lcom/tkay/basead/ui/BaseShakeView;

    iget-object v1, p0, Lcom/tkay/basead/ui/HalfScreenATView;->S:Lcom/tkay/basead/ui/BaseShakeView;

    invoke-virtual {p0, v0, v1}, Lcom/tkay/basead/ui/HalfScreenATView;->a(Lcom/tkay/basead/ui/BaseShakeView;Lcom/tkay/basead/ui/BaseShakeView;)V

    .line 146
    :cond_1
    invoke-super {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->E()V

    return-void
.end method

.method protected final y()V
    .locals 0

    return-void
.end method
