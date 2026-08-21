.class public Lcom/tkay/basead/ui/FullScreenATView;
.super Lcom/tkay/basead/ui/BaseScreenATView;


# static fields
.field public static final TAG:Ljava/lang/String;


# instance fields
.field private ae:Lcom/tkay/basead/ui/GuideToClickView;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 28
    const-class v0, Lcom/tkay/basead/ui/FullScreenATView;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/basead/ui/FullScreenATView;->TAG:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 32
    invoke-direct {p0, p1}, Lcom/tkay/basead/ui/BaseScreenATView;-><init>(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Ljava/lang/String;II)V
    .locals 0

    .line 36
    invoke-direct/range {p0 .. p6}, Lcom/tkay/basead/ui/BaseScreenATView;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Ljava/lang/String;II)V

    .line 38
    invoke-virtual {p0}, Lcom/tkay/basead/ui/FullScreenATView;->getContext()Landroid/content/Context;

    move-result-object p1

    const-string p2, "myoffer_full_screen_view_id"

    const-string p3, "id"

    invoke-static {p1, p2, p3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/tkay/basead/ui/FullScreenATView;->setId(I)V

    const/4 p1, 0x0

    .line 39
    iput p1, p0, Lcom/tkay/basead/ui/FullScreenATView;->G:I

    return-void
.end method


# virtual methods
.method protected final A()V
    .locals 6

    .line 329
    iget-boolean v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->u:Z

    if-eqz v0, :cond_0

    .line 330
    invoke-virtual {p0}, Lcom/tkay/basead/ui/FullScreenATView;->C()V

    return-void

    :cond_0
    const/4 v0, 0x1

    .line 335
    iget v1, p0, Lcom/tkay/basead/ui/FullScreenATView;->a:I

    if-ne v0, v1, :cond_2

    iget-boolean v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->v:Z

    if-nez v0, :cond_2

    .line 337
    iget-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->e()J

    move-result-wide v0

    long-to-double v0, v0

    const-wide v2, 0x408f400000000000L    # 1000.0

    div-double/2addr v0, v2

    invoke-static {v0, v1}, Ljava/lang/Math;->ceil(D)D

    move-result-wide v0

    .line 339
    iget-object v4, p0, Lcom/tkay/basead/ui/FullScreenATView;->x:Lcom/tkay/basead/ui/PlayerView;

    if-eqz v4, :cond_1

    .line 340
    iget-object v4, p0, Lcom/tkay/basead/ui/FullScreenATView;->x:Lcom/tkay/basead/ui/PlayerView;

    invoke-virtual {v4}, Lcom/tkay/basead/ui/PlayerView;->getVideoLength()I

    move-result v4

    int-to-double v4, v4

    div-double/2addr v4, v2

    invoke-static {v4, v5}, Ljava/lang/Math;->ceil(D)D

    move-result-wide v2

    cmpl-double v4, v0, v2

    if-lez v4, :cond_1

    move-wide v0, v2

    :cond_1
    double-to-int v0, v0

    .line 346
    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    .line 349
    invoke-virtual {p0}, Lcom/tkay/basead/ui/FullScreenATView;->getContext()Landroid/content/Context;

    move-result-object v1

    new-instance v2, Lcom/tkay/basead/ui/FullScreenATView$2;

    invoke-direct {v2, p0}, Lcom/tkay/basead/ui/FullScreenATView$2;-><init>(Lcom/tkay/basead/ui/FullScreenATView;)V

    invoke-static {v1, v0, v2}, Lcom/tkay/basead/ui/RewardExitConfirmDialogActivity;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Runnable;)V

    return-void

    .line 358
    :cond_2
    invoke-virtual {p0}, Lcom/tkay/basead/ui/FullScreenATView;->B()V

    .line 359
    invoke-virtual {p0}, Lcom/tkay/basead/ui/FullScreenATView;->p()V

    return-void
.end method

.method protected final D()V
    .locals 2

    .line 60
    invoke-super {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->D()V

    .line 61
    iget-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->R:Lcom/tkay/basead/ui/BaseShakeView;

    iget-object v1, p0, Lcom/tkay/basead/ui/FullScreenATView;->S:Lcom/tkay/basead/ui/BaseShakeView;

    invoke-virtual {p0, v0, v1}, Lcom/tkay/basead/ui/FullScreenATView;->a(Lcom/tkay/basead/ui/BaseShakeView;Lcom/tkay/basead/ui/BaseShakeView;)V

    return-void
.end method

.method protected final H()V
    .locals 9

    .line 186
    iget-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->w:Landroid/widget/RelativeLayout;

    if-eqz v0, :cond_e

    iget-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->z:Lcom/tkay/basead/ui/BaseEndCardView;

    if-eqz v0, :cond_e

    .line 188
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {v0, v1, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 189
    iget-object v2, p0, Lcom/tkay/basead/ui/FullScreenATView;->z:Lcom/tkay/basead/ui/BaseEndCardView;

    invoke-virtual {v2, v0}, Lcom/tkay/basead/ui/BaseEndCardView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 192
    invoke-virtual {p0}, Lcom/tkay/basead/ui/FullScreenATView;->n()Z

    move-result v0

    const/4 v2, 0x3

    if-eqz v0, :cond_0

    .line 193
    iget-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->w:Landroid/widget/RelativeLayout;

    iget-object v1, p0, Lcom/tkay/basead/ui/FullScreenATView;->z:Lcom/tkay/basead/ui/BaseEndCardView;

    invoke-virtual {v0, v1, v2}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;I)V

    return-void

    .line 201
    :cond_0
    iget v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->Q:I

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/FullScreenATView;->c(I)Z

    move-result v0

    const/4 v3, 0x6

    const/4 v4, 0x2

    const/4 v5, 0x1

    if-eqz v0, :cond_b

    .line 203
    iget v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->Q:I

    const/high16 v6, 0x3f000000    # 0.5f

    if-eq v0, v5, :cond_9

    if-eq v0, v4, :cond_8

    const/4 v7, 0x5

    if-eq v0, v7, :cond_7

    if-eq v0, v3, :cond_8

    const/16 v1, 0x8

    if-eq v0, v1, :cond_1

    goto/16 :goto_1

    .line 262
    :cond_1
    iget-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->x()I

    move-result v0

    const/4 v6, 0x0

    if-eqz v0, :cond_5

    .line 264
    iget-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->R:Lcom/tkay/basead/ui/BaseShakeView;

    if-eqz v0, :cond_2

    .line 265
    iget-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->R:Lcom/tkay/basead/ui/BaseShakeView;

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/BaseShakeView;->setVisibility(I)V

    .line 267
    :cond_2
    iget-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->S:Lcom/tkay/basead/ui/BaseShakeView;

    if-eqz v0, :cond_3

    .line 268
    iget-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->S:Lcom/tkay/basead/ui/BaseShakeView;

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/BaseShakeView;->setVisibility(I)V

    .line 270
    :cond_3
    iget-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/PanelView;->getShakeView()Landroid/view/View;

    move-result-object v0

    .line 271
    invoke-virtual {p0}, Lcom/tkay/basead/ui/FullScreenATView;->m()Z

    move-result v7

    if-eqz v7, :cond_4

    if-eqz v0, :cond_b

    .line 273
    invoke-virtual {v0, v6}, Landroid/view/View;->setVisibility(I)V

    goto/16 :goto_1

    :cond_4
    if-eqz v0, :cond_b

    .line 277
    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    goto/16 :goto_1

    .line 281
    :cond_5
    invoke-virtual {p0}, Lcom/tkay/basead/ui/FullScreenATView;->m()Z

    move-result v0

    if-eqz v0, :cond_6

    .line 282
    iget-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->S:Lcom/tkay/basead/ui/BaseShakeView;

    if-eqz v0, :cond_b

    .line 283
    iget-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->S:Lcom/tkay/basead/ui/BaseShakeView;

    invoke-virtual {v0, v6}, Lcom/tkay/basead/ui/BaseShakeView;->setVisibility(I)V

    goto/16 :goto_1

    .line 286
    :cond_6
    iget-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->S:Lcom/tkay/basead/ui/BaseShakeView;

    if-eqz v0, :cond_b

    .line 287
    iget-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->S:Lcom/tkay/basead/ui/BaseShakeView;

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/BaseShakeView;->setVisibility(I)V

    goto/16 :goto_1

    .line 205
    :cond_7
    iget v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->D:I

    int-to-float v0, v0

    mul-float/2addr v0, v6

    float-to-int v0, v0

    .line 206
    iget v6, p0, Lcom/tkay/basead/ui/FullScreenATView;->D:I

    sub-int/2addr v6, v0

    .line 208
    iget-object v7, p0, Lcom/tkay/basead/ui/FullScreenATView;->z:Lcom/tkay/basead/ui/BaseEndCardView;

    new-instance v8, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v8, v1, v6}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v7, v8}, Lcom/tkay/basead/ui/BaseEndCardView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 210
    iget-object v1, p0, Lcom/tkay/basead/ui/FullScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    invoke-virtual {v1}, Lcom/tkay/basead/ui/PanelView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v1

    check-cast v1, Landroid/widget/RelativeLayout$LayoutParams;

    if-eqz v1, :cond_b

    .line 212
    iget v6, p0, Lcom/tkay/basead/ui/FullScreenATView;->C:I

    iput v6, v1, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    .line 213
    iput v0, v1, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    .line 215
    iget-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/PanelView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 216
    iget-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/PanelView;->removeAllViews()V

    .line 217
    iget-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    iget v1, p0, Lcom/tkay/basead/ui/FullScreenATView;->Q:I

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/PanelView;->setLayoutType(I)V

    goto/16 :goto_1

    .line 246
    :cond_8
    invoke-virtual {p0}, Lcom/tkay/basead/ui/FullScreenATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const/high16 v6, 0x43960000    # 300.0f

    invoke-static {v0, v6}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v0

    .line 247
    iget v6, p0, Lcom/tkay/basead/ui/FullScreenATView;->C:I

    sub-int/2addr v6, v0

    .line 249
    iget-object v7, p0, Lcom/tkay/basead/ui/FullScreenATView;->z:Lcom/tkay/basead/ui/BaseEndCardView;

    new-instance v8, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v8, v6, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v7, v8}, Lcom/tkay/basead/ui/BaseEndCardView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 251
    iget-object v6, p0, Lcom/tkay/basead/ui/FullScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    invoke-virtual {v6}, Lcom/tkay/basead/ui/PanelView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v6

    check-cast v6, Landroid/widget/RelativeLayout$LayoutParams;

    if-eqz v6, :cond_b

    .line 253
    iput v0, v6, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    .line 254
    iput v1, v6, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    .line 256
    iget-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    invoke-virtual {v0, v6}, Lcom/tkay/basead/ui/PanelView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 257
    iget-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/PanelView;->removeAllViews()V

    .line 258
    iget-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    iget v1, p0, Lcom/tkay/basead/ui/FullScreenATView;->Q:I

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/PanelView;->setLayoutType(I)V

    goto :goto_1

    .line 221
    :cond_9
    iget-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->w:Landroid/widget/RelativeLayout;

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setBackgroundColor(I)V

    .line 223
    iget v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->D:I

    int-to-float v0, v0

    mul-float/2addr v0, v6

    float-to-int v0, v0

    .line 224
    iget-object v6, p0, Lcom/tkay/basead/ui/FullScreenATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v6}, Lcom/tkay/core/common/f/h;->t()Ljava/lang/String;

    move-result-object v6

    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-eqz v6, :cond_a

    .line 225
    iget v6, p0, Lcom/tkay/basead/ui/FullScreenATView;->D:I

    sub-int/2addr v6, v0

    goto :goto_0

    .line 227
    :cond_a
    iget v6, p0, Lcom/tkay/basead/ui/FullScreenATView;->D:I

    sub-int/2addr v6, v0

    invoke-virtual {p0}, Lcom/tkay/basead/ui/FullScreenATView;->getContext()Landroid/content/Context;

    move-result-object v7

    const/high16 v8, 0x42480000    # 50.0f

    invoke-static {v7, v8}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v7

    add-int/2addr v6, v7

    .line 230
    :goto_0
    iget-object v7, p0, Lcom/tkay/basead/ui/FullScreenATView;->z:Lcom/tkay/basead/ui/BaseEndCardView;

    new-instance v8, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v8, v1, v0}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v7, v8}, Lcom/tkay/basead/ui/BaseEndCardView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 231
    iget-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->z:Lcom/tkay/basead/ui/BaseEndCardView;

    invoke-virtual {v0, v5}, Lcom/tkay/basead/ui/BaseEndCardView;->setNeedArc(Z)V

    .line 233
    iget-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/PanelView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    check-cast v0, Landroid/widget/RelativeLayout$LayoutParams;

    if-eqz v0, :cond_b

    .line 235
    iget v1, p0, Lcom/tkay/basead/ui/FullScreenATView;->C:I

    iput v1, v0, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    .line 236
    iput v6, v0, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    .line 238
    iget-object v1, p0, Lcom/tkay/basead/ui/FullScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    invoke-virtual {v1, v0}, Lcom/tkay/basead/ui/PanelView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 239
    iget-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/PanelView;->removeAllViews()V

    .line 240
    iget-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    iget v1, p0, Lcom/tkay/basead/ui/FullScreenATView;->Q:I

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/PanelView;->setLayoutType(I)V

    .line 296
    :cond_b
    :goto_1
    iget-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->w:Landroid/widget/RelativeLayout;

    iget-object v1, p0, Lcom/tkay/basead/ui/FullScreenATView;->z:Lcom/tkay/basead/ui/BaseEndCardView;

    invoke-virtual {v0, v1, v2}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;I)V

    .line 298
    iget v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->a:I

    if-ne v0, v5, :cond_e

    .line 299
    new-instance v0, Lcom/tkay/core/common/ui/component/RoundImageView;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/FullScreenATView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/tkay/core/common/ui/component/RoundImageView;-><init>(Landroid/content/Context;)V

    .line 300
    invoke-virtual {p0}, Lcom/tkay/basead/ui/FullScreenATView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v2, "myoffer_reward_icon"

    const-string v5, "drawable"

    invoke-static {v1, v2, v5}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/ui/component/RoundImageView;->setImageResource(I)V

    .line 301
    new-instance v1, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/FullScreenATView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v5, 0x42700000    # 60.0f

    invoke-static {v2, v5}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v2

    invoke-virtual {p0}, Lcom/tkay/basead/ui/FullScreenATView;->getContext()Landroid/content/Context;

    move-result-object v6

    invoke-static {v6, v5}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v5

    invoke-direct {v1, v2, v5}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 302
    iget v2, p0, Lcom/tkay/basead/ui/FullScreenATView;->Q:I

    invoke-virtual {p0, v2}, Lcom/tkay/basead/ui/FullScreenATView;->c(I)Z

    move-result v2

    const/high16 v5, 0x41400000    # 12.0f

    if-eqz v2, :cond_d

    .line 303
    iget v2, p0, Lcom/tkay/basead/ui/FullScreenATView;->Q:I

    if-eq v2, v4, :cond_c

    if-eq v2, v3, :cond_c

    .line 312
    invoke-virtual {p0}, Lcom/tkay/basead/ui/FullScreenATView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2, v5}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v2

    iput v2, v1, Landroid/widget/RelativeLayout$LayoutParams;->leftMargin:I

    .line 313
    invoke-virtual {p0}, Lcom/tkay/basead/ui/FullScreenATView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2, v5}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v2

    iput v2, v1, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    goto :goto_2

    .line 306
    :cond_c
    iget v2, p0, Lcom/tkay/basead/ui/FullScreenATView;->C:I

    invoke-virtual {p0}, Lcom/tkay/basead/ui/FullScreenATView;->getContext()Landroid/content/Context;

    move-result-object v3

    const/high16 v5, 0x43a50000    # 330.0f

    invoke-static {v3, v5}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v3

    sub-int/2addr v2, v3

    iput v2, v1, Landroid/widget/RelativeLayout$LayoutParams;->leftMargin:I

    .line 307
    invoke-virtual {p0}, Lcom/tkay/basead/ui/FullScreenATView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v3, 0x41b00000    # 22.0f

    invoke-static {v2, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v2

    iput v2, v1, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    goto :goto_2

    .line 317
    :cond_d
    invoke-virtual {p0}, Lcom/tkay/basead/ui/FullScreenATView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2, v5}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v2

    iput v2, v1, Landroid/widget/RelativeLayout$LayoutParams;->leftMargin:I

    .line 318
    invoke-virtual {p0}, Lcom/tkay/basead/ui/FullScreenATView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2, v5}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v2

    iput v2, v1, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    .line 320
    :goto_2
    invoke-virtual {v0, v1}, Lcom/tkay/core/common/ui/component/RoundImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 321
    iget-object v1, p0, Lcom/tkay/basead/ui/FullScreenATView;->w:Landroid/widget/RelativeLayout;

    iget-object v2, p0, Lcom/tkay/basead/ui/FullScreenATView;->w:Landroid/widget/RelativeLayout;

    invoke-virtual {v2}, Landroid/widget/RelativeLayout;->getChildCount()I

    move-result v2

    sub-int/2addr v2, v4

    invoke-virtual {v1, v0, v2}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;I)V

    :cond_e
    return-void
.end method

.method protected final I()V
    .locals 4

    .line 113
    iget-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->x:Lcom/tkay/basead/ui/PlayerView;

    if-eqz v0, :cond_0

    .line 114
    iget-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->w:Landroid/widget/RelativeLayout;

    iget-object v1, p0, Lcom/tkay/basead/ui/FullScreenATView;->x:Lcom/tkay/basead/ui/PlayerView;

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->removeView(Landroid/view/View;)V

    const/4 v0, 0x0

    .line 115
    iput-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->x:Lcom/tkay/basead/ui/PlayerView;

    .line 118
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->H:Lcom/tkay/basead/ui/CountDownView;

    const/16 v1, 0x8

    if-eqz v0, :cond_1

    .line 119
    iget-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->H:Lcom/tkay/basead/ui/CountDownView;

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/CountDownView;->setVisibility(I)V

    .line 122
    :cond_1
    iget-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->I:Lcom/tkay/basead/ui/CloseImageView;

    iget v2, p0, Lcom/tkay/basead/ui/FullScreenATView;->N:F

    invoke-virtual {v0, v2}, Lcom/tkay/basead/ui/CloseImageView;->setClickAreaScaleFactor(F)V

    .line 124
    iget-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->K:Lcom/tkay/basead/ui/MuteImageView;

    if-eqz v0, :cond_2

    .line 125
    iget-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->K:Lcom/tkay/basead/ui/MuteImageView;

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/MuteImageView;->setVisibility(I)V

    .line 128
    :cond_2
    iget-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->R:Lcom/tkay/basead/ui/BaseShakeView;

    if-eqz v0, :cond_3

    .line 129
    iget-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->R:Lcom/tkay/basead/ui/BaseShakeView;

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/BaseShakeView;->setVisibility(I)V

    .line 132
    :cond_3
    iget-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->S:Lcom/tkay/basead/ui/BaseShakeView;

    if-eqz v0, :cond_4

    .line 133
    iget v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->Q:I

    if-eq v0, v1, :cond_4

    .line 134
    iget-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->S:Lcom/tkay/basead/ui/BaseShakeView;

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/BaseShakeView;->setVisibility(I)V

    .line 138
    :cond_4
    iget-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->i()I

    move-result v0

    const/4 v2, 0x1

    const/4 v3, 0x0

    if-ne v0, v2, :cond_5

    invoke-virtual {p0}, Lcom/tkay/basead/ui/FullScreenATView;->getHasPerformClick()Z

    move-result v0

    if-nez v0, :cond_5

    iget-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->ae:Lcom/tkay/basead/ui/GuideToClickView;

    if-eqz v0, :cond_5

    .line 139
    invoke-virtual {v0, v3}, Lcom/tkay/basead/ui/GuideToClickView;->setVisibility(I)V

    .line 140
    iget-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->ae:Lcom/tkay/basead/ui/GuideToClickView;

    new-instance v2, Lcom/tkay/basead/ui/FullScreenATView$1;

    invoke-direct {v2, p0}, Lcom/tkay/basead/ui/FullScreenATView$1;-><init>(Lcom/tkay/basead/ui/FullScreenATView;)V

    invoke-virtual {v0, v2}, Lcom/tkay/basead/ui/GuideToClickView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 148
    :cond_5
    invoke-virtual {p0}, Lcom/tkay/basead/ui/FullScreenATView;->n()Z

    move-result v0

    if-eqz v0, :cond_7

    .line 149
    iget-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    if-eqz v0, :cond_6

    .line 150
    iget-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/PanelView;->setVisibility(I)V

    .line 152
    :cond_6
    invoke-virtual {p0}, Lcom/tkay/basead/ui/FullScreenATView;->m()Z

    move-result v0

    if-eqz v0, :cond_7

    iget-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->S:Lcom/tkay/basead/ui/BaseShakeView;

    if-eqz v0, :cond_7

    .line 153
    iget-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->S:Lcom/tkay/basead/ui/BaseShakeView;

    invoke-virtual {v0, v3}, Lcom/tkay/basead/ui/BaseShakeView;->setVisibility(I)V

    :cond_7
    return-void
.end method

.method protected final J()V
    .locals 1

    .line 98
    iget v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->C:I

    iput v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->O:I

    .line 99
    iget v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->D:I

    iput v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->P:I

    return-void
.end method

.method protected final a()V
    .locals 4

    .line 44
    invoke-virtual {p0}, Lcom/tkay/basead/ui/FullScreenATView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v0

    invoke-virtual {p0}, Lcom/tkay/basead/ui/FullScreenATView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v2, "myoffer_full_screen"

    const-string v3, "layout"

    invoke-static {v1, v2, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1, p0}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    return-void
.end method

.method protected final b(I)V
    .locals 1

    .line 104
    invoke-super {p0, p1}, Lcom/tkay/basead/ui/BaseScreenATView;->b(I)V

    .line 105
    iget-object p1, p0, Lcom/tkay/basead/ui/FullScreenATView;->ae:Lcom/tkay/basead/ui/GuideToClickView;

    if-eqz p1, :cond_0

    const/16 v0, 0x8

    .line 106
    invoke-virtual {p1, v0}, Lcom/tkay/basead/ui/GuideToClickView;->setVisibility(I)V

    :cond_0
    return-void
.end method

.method protected final c(I)Z
    .locals 2

    if-eqz p1, :cond_1

    const/4 v0, 0x1

    if-eq p1, v0, :cond_1

    const/4 v1, 0x2

    if-eq p1, v1, :cond_1

    const/4 v1, 0x5

    if-eq p1, v1, :cond_1

    const/4 v1, 0x6

    if-eq p1, v1, :cond_1

    const/16 v1, 0x8

    if-eq p1, v1, :cond_0

    const/4 p1, 0x0

    return p1

    :cond_0
    return v0

    .line 72
    :cond_1
    iget-object p1, p0, Lcom/tkay/basead/ui/FullScreenATView;->d:Lcom/tkay/core/common/f/h;

    invoke-static {p1}, Lcom/tkay/basead/a/e;->a(Lcom/tkay/core/common/f/h;)Z

    move-result p1

    return p1
.end method

.method public init()V
    .locals 3

    .line 49
    invoke-virtual {p0}, Lcom/tkay/basead/ui/FullScreenATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "id"

    const-string v2, "myoffer_shake_view"

    invoke-static {v0, v2, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/FullScreenATView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/tkay/basead/ui/BaseShakeView;

    iput-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->R:Lcom/tkay/basead/ui/BaseShakeView;

    .line 50
    invoke-virtual {p0}, Lcom/tkay/basead/ui/FullScreenATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v2, "myoffer_shake_border_view"

    invoke-static {v0, v2, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/FullScreenATView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/tkay/basead/ui/BaseShakeView;

    iput-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->S:Lcom/tkay/basead/ui/BaseShakeView;

    .line 51
    invoke-virtual {p0}, Lcom/tkay/basead/ui/FullScreenATView;->o()V

    .line 53
    invoke-virtual {p0}, Lcom/tkay/basead/ui/FullScreenATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v2, "myoffer_guide_to_click_view"

    invoke-static {v0, v2, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/FullScreenATView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/tkay/basead/ui/GuideToClickView;

    iput-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->ae:Lcom/tkay/basead/ui/GuideToClickView;

    .line 55
    invoke-super {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->init()V

    return-void
.end method

.method protected final q()I
    .locals 2

    .line 166
    iget v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->Q:I

    const/16 v1, 0x8

    if-ne v0, v1, :cond_0

    .line 167
    iget v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->Q:I

    return v0

    .line 169
    :cond_0
    iget v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->C:I

    iget v1, p0, Lcom/tkay/basead/ui/FullScreenATView;->D:I

    if-ge v0, v1, :cond_2

    .line 170
    iget v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->ac:I

    iget v1, p0, Lcom/tkay/basead/ui/FullScreenATView;->ad:I

    if-lt v0, v1, :cond_1

    const/4 v0, 0x1

    return v0

    :cond_1
    const/4 v0, 0x5

    return v0

    .line 176
    :cond_2
    iget v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->ac:I

    iget v1, p0, Lcom/tkay/basead/ui/FullScreenATView;->ad:I

    if-ge v0, v1, :cond_3

    const/4 v0, 0x2

    return v0

    :cond_3
    const/4 v0, 0x6

    return v0
.end method

.method protected final w()V
    .locals 3

    .line 83
    iget-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    if-eqz v0, :cond_1

    .line 84
    iget-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->d:Lcom/tkay/core/common/f/h;

    invoke-static {v0}, Lcom/tkay/basead/a/e;->a(Lcom/tkay/core/common/f/h;)Z

    move-result v0

    const/16 v1, 0x8

    if-nez v0, :cond_0

    .line 85
    iput v1, p0, Lcom/tkay/basead/ui/FullScreenATView;->Q:I

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    .line 87
    iput v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->Q:I

    .line 89
    :goto_0
    iget-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    iget v2, p0, Lcom/tkay/basead/ui/FullScreenATView;->Q:I

    invoke-virtual {v0, v2}, Lcom/tkay/basead/ui/PanelView;->setLayoutType(I)V

    .line 90
    iget v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->Q:I

    if-ne v0, v1, :cond_1

    iget-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->x()I

    move-result v0

    if-nez v0, :cond_1

    .line 91
    iget-object v0, p0, Lcom/tkay/basead/ui/FullScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/PanelView;->getCTAButton()Landroid/view/View;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    :cond_1
    return-void
.end method
