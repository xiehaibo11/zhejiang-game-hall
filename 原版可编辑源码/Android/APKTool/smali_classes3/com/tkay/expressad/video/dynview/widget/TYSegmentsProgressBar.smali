.class public Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;
.super Landroid/widget/LinearLayout;


# instance fields
.field private final a:Ljava/lang/String;

.field private b:I

.field private c:I

.field private d:I

.field private e:I

.field private f:I

.field private g:I

.field private h:I

.field private i:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Landroid/widget/ProgressBar;",
            ">;"
        }
    .end annotation
.end field

.field private j:Landroid/widget/TextView;

.field private k:Ljava/lang/String;

.field private l:Z


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    .line 60
    invoke-direct {p0, p1}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;)V

    const-string p1, "TYSegmentsProgressBar"

    .line 41
    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->a:Ljava/lang/String;

    const/4 p1, 0x1

    .line 44
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->c:I

    const/16 v0, 0x14

    .line 46
    iput v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->d:I

    const/16 v0, 0xa

    .line 47
    iput v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->e:I

    .line 48
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->f:I

    const p1, -0x66000001

    .line 50
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->g:I

    const/4 p1, -0x1

    .line 51
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->h:I

    .line 53
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->i:Ljava/util/List;

    const/4 p1, 0x0

    .line 57
    iput-boolean p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->l:Z

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 64
    invoke-direct {p0, p1, p2}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const-string p1, "TYSegmentsProgressBar"

    .line 41
    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->a:Ljava/lang/String;

    const/4 p1, 0x1

    .line 44
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->c:I

    const/16 p2, 0x14

    .line 46
    iput p2, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->d:I

    const/16 p2, 0xa

    .line 47
    iput p2, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->e:I

    .line 48
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->f:I

    const p1, -0x66000001

    .line 50
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->g:I

    const/4 p1, -0x1

    .line 51
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->h:I

    .line 53
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->i:Ljava/util/List;

    const/4 p1, 0x0

    .line 57
    iput-boolean p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->l:Z

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    .line 68
    invoke-direct {p0, p1, p2, p3}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    const-string p1, "TYSegmentsProgressBar"

    .line 41
    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->a:Ljava/lang/String;

    const/4 p1, 0x1

    .line 44
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->c:I

    const/16 p2, 0x14

    .line 46
    iput p2, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->d:I

    const/16 p2, 0xa

    .line 47
    iput p2, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->e:I

    .line 48
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->f:I

    const p1, -0x66000001

    .line 50
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->g:I

    const/4 p1, -0x1

    .line 51
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->h:I

    .line 53
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->i:Ljava/util/List;

    const/4 p1, 0x0

    .line 57
    iput-boolean p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->l:Z

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;II)V
    .locals 0

    .line 73
    invoke-direct {p0, p1, p2, p3, p4}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;II)V

    const-string p1, "TYSegmentsProgressBar"

    .line 41
    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->a:Ljava/lang/String;

    const/4 p1, 0x1

    .line 44
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->c:I

    const/16 p2, 0x14

    .line 46
    iput p2, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->d:I

    const/16 p2, 0xa

    .line 47
    iput p2, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->e:I

    .line 48
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->f:I

    const p1, -0x66000001

    .line 50
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->g:I

    const/4 p1, -0x1

    .line 51
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->h:I

    .line 53
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->i:Ljava/util/List;

    const/4 p1, 0x0

    .line 57
    iput-boolean p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->l:Z

    return-void
.end method

.method private a(I)Ljava/lang/StringBuilder;
    .locals 5

    .line 253
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 255
    :try_start_0
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->k:Ljava/lang/String;

    const/4 v2, 0x2

    new-array v2, v2, [Ljava/lang/Object;

    const/4 v3, 0x0

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    aput-object v4, v2, v3

    const/4 v3, 0x1

    iget v4, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->b:I

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    aput-object v4, v2, v3

    invoke-static {v1, v2}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    .line 257
    iget v2, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->b:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, "videos, the"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, " is playing."

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 258
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    :goto_0
    return-object v0
.end method

.method private a()V
    .locals 14

    .line 134
    :try_start_0
    iget v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->c:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    const-string v1, "string"

    const/4 v2, 0x1

    if-ne v0, v2, :cond_0

    .line 135
    :try_start_1
    invoke-virtual {p0, v2}, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->setOrientation(I)V

    .line 136
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->k:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 137
    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->getContext()Landroid/content/Context;

    move-result-object v3

    const-string v4, "tkay_cm_segment_process_bar_hint_text"

    invoke-static {v3, v4, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v0, v3}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->k:Ljava/lang/String;

    .line 141
    :cond_0
    iget v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->c:I

    const/4 v3, 0x2

    const/4 v4, 0x0

    if-ne v0, v3, :cond_1

    .line 142
    invoke-virtual {p0, v4}, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->setOrientation(I)V

    .line 143
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->k:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 144
    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->getContext()Landroid/content/Context;

    move-result-object v5

    const-string v6, "tkay_cm_segment_process_bar_hint_text_lite"

    invoke-static {v5, v6, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->k:Ljava/lang/String;

    .line 148
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->i:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    .line 149
    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->removeAllViews()V

    .line 150
    invoke-static {}, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->c()Landroid/graphics/drawable/GradientDrawable;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    .line 152
    new-instance v0, Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->j:Landroid/widget/TextView;

    const/4 v1, -0x1

    .line 153
    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setTextColor(I)V

    .line 154
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->j:Landroid/widget/TextView;

    const/high16 v5, 0x41400000    # 12.0f

    invoke-virtual {v0, v5}, Landroid/widget/TextView;->setTextSize(F)V

    .line 155
    new-instance v0, Landroid/widget/LinearLayout$LayoutParams;

    const/4 v5, -0x2

    invoke-direct {v0, v5, v5}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    .line 156
    iget-object v5, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->j:Landroid/widget/TextView;

    invoke-virtual {v5, v0}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 158
    iget v5, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->c:I

    const/4 v6, 0x5

    const/16 v7, 0xf

    if-ne v5, v2, :cond_2

    .line 159
    iput v6, v0, Landroid/widget/LinearLayout$LayoutParams;->gravity:I

    .line 160
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->j:Landroid/widget/TextView;

    iget v5, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->d:I

    div-int/2addr v5, v3

    iget v8, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->d:I

    div-int/2addr v8, v3

    invoke-virtual {v0, v5, v7, v8, v6}, Landroid/widget/TextView;->setPadding(IIII)V

    .line 163
    :cond_2
    iget v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->c:I

    const/16 v5, 0x10

    if-ne v0, v3, :cond_3

    .line 164
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->j:Landroid/widget/TextView;

    invoke-virtual {v0, v5}, Landroid/widget/TextView;->setGravity(I)V

    .line 165
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->j:Landroid/widget/TextView;

    iget v8, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->d:I

    div-int/2addr v8, v3

    iget v9, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->d:I

    div-int/2addr v9, v3

    invoke-virtual {v0, v8, v4, v9, v4}, Landroid/widget/TextView;->setPadding(IIII)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :cond_3
    const/4 v0, 0x0

    .line 169
    :try_start_2
    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->getContext()Landroid/content/Context;

    move-result-object v8

    const-string v9, "tkay_reward_video_icon"

    const-string v10, "drawable"

    invoke-static {v8, v9, v10}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v8

    if-eqz v8, :cond_4

    .line 171
    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->getContext()Landroid/content/Context;

    move-result-object v9

    invoke-virtual {v9}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v9

    invoke-virtual {v9, v8}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object v8

    if-eqz v8, :cond_4

    .line 173
    invoke-virtual {v8}, Landroid/graphics/drawable/Drawable;->getMinimumWidth()I

    move-result v9

    invoke-virtual {v8}, Landroid/graphics/drawable/Drawable;->getMinimumHeight()I

    move-result v10

    invoke-virtual {v8, v4, v4, v9, v10}, Landroid/graphics/drawable/Drawable;->setBounds(IIII)V

    .line 174
    iget-object v9, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->j:Landroid/widget/TextView;

    invoke-virtual {v9, v8, v0, v0, v0}, Landroid/widget/TextView;->setCompoundDrawables(Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;)V

    .line 175
    iget-object v8, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->j:Landroid/widget/TextView;

    invoke-virtual {v8, v6}, Landroid/widget/TextView;->setCompoundDrawablePadding(I)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v6

    .line 179
    :try_start_3
    invoke-virtual {v6}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    .line 182
    :cond_4
    :goto_0
    iget-object v6, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->j:Landroid/widget/TextView;

    iget v8, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->f:I

    invoke-direct {p0, v8}, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->a(I)Ljava/lang/StringBuilder;

    move-result-object v8

    invoke-virtual {v6, v8}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 184
    new-instance v6, Landroid/widget/LinearLayout;

    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->getContext()Landroid/content/Context;

    move-result-object v8

    invoke-direct {v6, v8}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;)V

    .line 185
    invoke-virtual {v6, v4}, Landroid/widget/LinearLayout;->setOrientation(I)V

    .line 186
    new-instance v8, Landroid/widget/LinearLayout$LayoutParams;

    const/16 v9, 0x19

    invoke-direct {v8, v1, v9}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    .line 187
    invoke-virtual {v6, v8}, Landroid/widget/LinearLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    move v1, v4

    .line 188
    :goto_1
    iget v10, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->b:I

    const/high16 v11, 0x3f800000    # 1.0f

    if-ge v1, v10, :cond_5

    .line 189
    new-instance v10, Landroid/widget/ProgressBar;

    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->getContext()Landroid/content/Context;

    move-result-object v12

    const v13, 0x1010078

    invoke-direct {v10, v12, v0, v13}, Landroid/widget/ProgressBar;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    const/16 v12, 0x64

    .line 190
    invoke-virtual {v10, v12}, Landroid/widget/ProgressBar;->setMax(I)V

    .line 191
    invoke-virtual {v10, v4}, Landroid/widget/ProgressBar;->setProgress(I)V

    .line 193
    invoke-direct {p0}, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->b()Landroid/graphics/drawable/LayerDrawable;

    move-result-object v12

    invoke-virtual {v10, v12}, Landroid/widget/ProgressBar;->setProgressDrawable(Landroid/graphics/drawable/Drawable;)V

    .line 195
    new-instance v12, Landroid/widget/LinearLayout$LayoutParams;

    const/16 v13, 0x14

    invoke-direct {v12, v4, v13, v11}, Landroid/widget/LinearLayout$LayoutParams;-><init>(IIF)V

    .line 196
    iget v11, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->d:I

    div-int/2addr v11, v3

    iput v11, v12, Landroid/widget/LinearLayout$LayoutParams;->leftMargin:I

    .line 197
    iget v11, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->d:I

    div-int/2addr v11, v3

    iput v11, v12, Landroid/widget/LinearLayout$LayoutParams;->rightMargin:I

    .line 198
    invoke-virtual {v10, v12}, Landroid/widget/ProgressBar;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 200
    invoke-virtual {v6, v10}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;)V

    .line 202
    iget-object v11, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->i:Ljava/util/List;

    invoke-interface {v11, v10}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v1, v1, 0x1

    goto :goto_1

    .line 207
    :cond_5
    iget v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->c:I

    if-ne v0, v2, :cond_6

    const/16 v0, 0xa

    .line 208
    invoke-virtual {p0, v7, v0, v7, v9}, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->setPadding(IIII)V

    .line 209
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->j:Landroid/widget/TextView;

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->addView(Landroid/view/View;)V

    .line 210
    invoke-virtual {p0, v6}, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->addView(Landroid/view/View;)V

    .line 213
    :cond_6
    iget v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->c:I

    if-ne v0, v3, :cond_7

    .line 214
    invoke-virtual {p0, v7, v4, v7, v9}, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->setPadding(IIII)V

    .line 216
    iput v5, v8, Landroid/widget/LinearLayout$LayoutParams;->gravity:I

    .line 217
    iput v11, v8, Landroid/widget/LinearLayout$LayoutParams;->weight:F

    .line 219
    invoke-virtual {p0, v6}, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->addView(Landroid/view/View;)V

    .line 220
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->j:Landroid/widget/TextView;

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->addView(Landroid/view/View;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    :cond_7
    return-void

    :catchall_1
    move-exception v0

    .line 223
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method private b()Landroid/graphics/drawable/LayerDrawable;
    .locals 7

    .line 294
    new-instance v0, Landroid/graphics/drawable/GradientDrawable;

    invoke-direct {v0}, Landroid/graphics/drawable/GradientDrawable;-><init>()V

    const/4 v1, 0x0

    .line 295
    invoke-virtual {v0, v1}, Landroid/graphics/drawable/GradientDrawable;->setShape(I)V

    .line 296
    iget v2, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->e:I

    int-to-float v2, v2

    invoke-virtual {v0, v2}, Landroid/graphics/drawable/GradientDrawable;->setCornerRadius(F)V

    .line 297
    iget v2, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->g:I

    invoke-virtual {v0, v2}, Landroid/graphics/drawable/GradientDrawable;->setColor(I)V

    .line 299
    new-instance v2, Landroid/graphics/drawable/GradientDrawable;

    invoke-direct {v2}, Landroid/graphics/drawable/GradientDrawable;-><init>()V

    .line 300
    invoke-virtual {v2, v1}, Landroid/graphics/drawable/GradientDrawable;->setShape(I)V

    .line 301
    iget v3, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->e:I

    int-to-float v3, v3

    invoke-virtual {v2, v3}, Landroid/graphics/drawable/GradientDrawable;->setCornerRadius(F)V

    .line 302
    iget v3, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->h:I

    invoke-virtual {v2, v3}, Landroid/graphics/drawable/GradientDrawable;->setColor(I)V

    .line 304
    new-instance v3, Landroid/graphics/drawable/ScaleDrawable;

    const/4 v4, 0x3

    const/high16 v5, 0x3f800000    # 1.0f

    const/high16 v6, -0x40800000    # -1.0f

    invoke-direct {v3, v2, v4, v5, v6}, Landroid/graphics/drawable/ScaleDrawable;-><init>(Landroid/graphics/drawable/Drawable;IFF)V

    .line 306
    new-instance v2, Landroid/graphics/drawable/LayerDrawable;

    const/4 v4, 0x2

    new-array v4, v4, [Landroid/graphics/drawable/Drawable;

    aput-object v0, v4, v1

    const/4 v0, 0x1

    aput-object v3, v4, v0

    invoke-direct {v2, v4}, Landroid/graphics/drawable/LayerDrawable;-><init>([Landroid/graphics/drawable/Drawable;)V

    const/high16 v3, 0x1020000

    .line 307
    invoke-virtual {v2, v1, v3}, Landroid/graphics/drawable/LayerDrawable;->setId(II)V

    const v1, 0x102000d

    .line 308
    invoke-virtual {v2, v0, v1}, Landroid/graphics/drawable/LayerDrawable;->setId(II)V

    return-object v2
.end method

.method private static c()Landroid/graphics/drawable/GradientDrawable;
    .locals 5

    .line 321
    new-instance v0, Landroid/graphics/drawable/GradientDrawable;

    invoke-direct {v0}, Landroid/graphics/drawable/GradientDrawable;-><init>()V

    const/4 v1, 0x0

    .line 322
    invoke-virtual {v0, v1}, Landroid/graphics/drawable/GradientDrawable;->setGradientType(I)V

    const/4 v2, 0x1

    .line 323
    invoke-virtual {v0, v2}, Landroid/graphics/drawable/GradientDrawable;->setDither(Z)V

    .line 325
    :try_start_0
    sget v3, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v4, 0x10

    if-lt v3, v4, :cond_0

    .line 326
    sget-object v3, Landroid/graphics/drawable/GradientDrawable$Orientation;->TOP_BOTTOM:Landroid/graphics/drawable/GradientDrawable$Orientation;

    invoke-virtual {v0, v3}, Landroid/graphics/drawable/GradientDrawable;->setOrientation(Landroid/graphics/drawable/GradientDrawable$Orientation;)V

    const/4 v3, 0x2

    new-array v3, v3, [I

    aput v1, v3, v1

    const/high16 v1, 0x4d000000    # 1.3421773E8f

    aput v1, v3, v2

    .line 327
    invoke-virtual {v0, v3}, Landroid/graphics/drawable/GradientDrawable;->setColors([I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-object v0
.end method


# virtual methods
.method public dismiss()V
    .locals 3

    .line 265
    new-instance v0, Landroid/view/animation/AlphaAnimation;

    const/high16 v1, 0x3f800000    # 1.0f

    const/4 v2, 0x0

    invoke-direct {v0, v1, v2}, Landroid/view/animation/AlphaAnimation;-><init>(FF)V

    const-wide/16 v1, 0x3e8

    .line 266
    invoke-virtual {v0, v1, v2}, Landroid/view/animation/AlphaAnimation;->setDuration(J)V

    .line 267
    new-instance v1, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar$1;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar$1;-><init>(Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;)V

    invoke-virtual {v0, v1}, Landroid/view/animation/AlphaAnimation;->setAnimationListener(Landroid/view/animation/Animation$AnimationListener;)V

    .line 283
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->startAnimation(Landroid/view/animation/Animation;)V

    return-void
.end method

.method public init(II)V
    .locals 0

    .line 83
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->b:I

    .line 84
    iput p2, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->c:I

    .line 85
    invoke-direct {p0}, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->a()V

    return-void
.end method

.method public init(IIII)V
    .locals 0

    .line 97
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->b:I

    .line 98
    iput p2, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->c:I

    .line 99
    iput p3, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->h:I

    .line 100
    iput p4, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->g:I

    .line 101
    invoke-direct {p0}, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->a()V

    return-void
.end method

.method public init(IIIIII)V
    .locals 0

    .line 115
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->b:I

    .line 116
    iput p2, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->c:I

    .line 117
    iput p3, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->h:I

    .line 118
    iput p4, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->g:I

    .line 119
    iput p5, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->d:I

    .line 120
    iput p6, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->e:I

    .line 121
    invoke-direct {p0}, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->a()V

    return-void
.end method

.method public setIndicatorText(Ljava/lang/String;)V
    .locals 0

    .line 228
    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->k:Ljava/lang/String;

    return-void
.end method

.method public setProgress(II)V
    .locals 1

    .line 233
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->i:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_0

    return-void

    .line 237
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->i:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-ge p2, v0, :cond_1

    .line 238
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->i:Ljava/util/List;

    invoke-interface {v0, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/widget/ProgressBar;

    invoke-virtual {v0, p1}, Landroid/widget/ProgressBar;->setProgress(I)V

    :cond_1
    add-int/lit8 p2, p2, 0x1

    .line 241
    iget p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->f:I

    if-le p2, p1, :cond_2

    .line 242
    iput p2, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->f:I

    .line 243
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->j:Landroid/widget/TextView;

    if-eqz p1, :cond_2

    .line 244
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->j:Landroid/widget/TextView;

    invoke-direct {p0, p2}, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->a(I)Ljava/lang/StringBuilder;

    move-result-object p2

    invoke-virtual {p1, p2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_2
    return-void

    :catchall_0
    move-exception p1

    .line 248
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method
