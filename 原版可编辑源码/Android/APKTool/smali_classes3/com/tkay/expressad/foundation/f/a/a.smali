.class public final Lcom/tkay/expressad/foundation/f/a/a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/foundation/f/a/a$a;
    }
.end annotation


# static fields
.field private static n:I = -0x1

.field private static s:Ljava/lang/String;


# instance fields
.field private a:Ljava/lang/String;

.field private b:Lcom/tkay/expressad/foundation/d/c;

.field private c:Lcom/tkay/expressad/widget/FeedBackButton;

.field private d:I

.field private e:I

.field private f:I

.field private g:I

.field private h:I

.field private i:I

.field private j:Ljava/lang/String;

.field private k:Ljava/lang/String;

.field private l:F

.field private m:I

.field private o:I

.field private p:Lcom/tkay/expressad/widget/a/a;

.field private q:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/f/a/a$a;",
            ">;"
        }
    .end annotation
.end field

.field private r:Lcom/tkay/expressad/widget/a/c;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;)V
    .locals 2

    .line 82
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, -0x1

    .line 48
    iput v0, p0, Lcom/tkay/expressad/foundation/f/a/a;->f:I

    .line 49
    iput v0, p0, Lcom/tkay/expressad/foundation/f/a/a;->g:I

    .line 50
    iput v0, p0, Lcom/tkay/expressad/foundation/f/a/a;->h:I

    .line 51
    iput v0, p0, Lcom/tkay/expressad/foundation/f/a/a;->i:I

    const/high16 v0, 0x3f800000    # 1.0f

    .line 54
    iput v0, p0, Lcom/tkay/expressad/foundation/f/a/a;->l:F

    .line 55
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    const/high16 v1, 0x41a00000    # 20.0f

    invoke-static {v0, v1}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/foundation/f/a/a;->m:I

    .line 58
    sget v0, Lcom/tkay/expressad/foundation/f/a/a;->n:I

    iput v0, p0, Lcom/tkay/expressad/foundation/f/a/a;->o:I

    .line 60
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/foundation/f/a/a;->q:Ljava/util/List;

    .line 61
    new-instance v0, Lcom/tkay/expressad/foundation/f/a/a$1;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/foundation/f/a/a$1;-><init>(Lcom/tkay/expressad/foundation/f/a/a;)V

    iput-object v0, p0, Lcom/tkay/expressad/foundation/f/a/a;->r:Lcom/tkay/expressad/widget/a/c;

    .line 83
    iput-object p1, p0, Lcom/tkay/expressad/foundation/f/a/a;->a:Ljava/lang/String;

    .line 84
    iget-object p1, p0, Lcom/tkay/expressad/foundation/f/a/a;->q:Ljava/util/List;

    if-nez p1, :cond_0

    .line 85
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/foundation/f/a/a;->q:Ljava/util/List;

    .line 87
    :cond_0
    invoke-direct {p0}, Lcom/tkay/expressad/foundation/f/a/a;->g()V

    .line 88
    invoke-direct {p0}, Lcom/tkay/expressad/foundation/f/a/a;->n()V

    .line 89
    invoke-direct {p0}, Lcom/tkay/expressad/foundation/f/a/a;->h()V

    return-void
.end method

.method private static a(Lcom/tkay/expressad/d/a$b;)Lcom/tkay/expressad/widget/FeedbackRadioGroup;
    .locals 1

    .line 204
    invoke-virtual {p0}, Lcom/tkay/expressad/d/a$b;->d()Lorg/json/JSONArray;

    move-result-object p0

    .line 206
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    if-eqz p0, :cond_0

    .line 207
    invoke-virtual {p0}, Lorg/json/JSONArray;->length()I

    move-result p0

    if-lez p0, :cond_0

    if-eqz v0, :cond_0

    .line 208
    new-instance p0, Lcom/tkay/expressad/widget/FeedbackRadioGroup;

    invoke-direct {p0, v0}, Lcom/tkay/expressad/widget/FeedbackRadioGroup;-><init>(Landroid/content/Context;)V

    const/4 v0, 0x0

    .line 209
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/widget/FeedbackRadioGroup;->setOrientation(I)V

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    :goto_0
    return-object p0
.end method

.method static synthetic a(Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 42
    sput-object p0, Lcom/tkay/expressad/foundation/f/a/a;->s:Ljava/lang/String;

    return-object p0
.end method

.method private a(Landroid/widget/RadioButton;)V
    .locals 1

    .line 216
    new-instance v0, Lcom/tkay/expressad/foundation/f/a/a$3;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/foundation/f/a/a$3;-><init>(Lcom/tkay/expressad/foundation/f/a/a;)V

    invoke-virtual {p1, v0}, Landroid/widget/RadioButton;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/foundation/f/a/a;)V
    .locals 1

    .line 2270
    iget-object p0, p0, Lcom/tkay/expressad/foundation/f/a/a;->q:Ljava/util/List;

    if-eqz p0, :cond_1

    .line 2271
    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :cond_0
    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/foundation/f/a/a$a;

    if-eqz v0, :cond_0

    .line 2273
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/f/a/a$a;->a()V

    goto :goto_0

    :cond_1
    const-string p0, ""

    .line 2277
    sput-object p0, Lcom/tkay/expressad/foundation/f/a/a;->s:Ljava/lang/String;

    return-void
.end method

.method private a(Lcom/tkay/expressad/widget/FeedbackRadioGroup;Lcom/tkay/expressad/d/a$b;)V
    .locals 11

    .line 168
    invoke-virtual {p2}, Lcom/tkay/expressad/d/a$b;->d()Lorg/json/JSONArray;

    move-result-object p2

    .line 169
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    if-eqz p2, :cond_2

    .line 170
    invoke-virtual {p2}, Lorg/json/JSONArray;->length()I

    move-result v1

    if-lez v1, :cond_2

    if-eqz v0, :cond_2

    const-string v1, "tkay_cm_feedback_choice_btn_bg"

    const-string v2, "drawable"

    .line 171
    invoke-static {v0, v1, v2}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    .line 172
    invoke-static {v0}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;)Landroid/content/res/Resources;

    move-result-object v2

    const-string v3, "tkay_cm_feedback_rb_text_color_color_list"

    const-string v4, "color"

    .line 173
    invoke-static {v0, v3, v4}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    const/4 v4, 0x0

    if-eqz v2, :cond_0

    .line 177
    :try_start_0
    invoke-virtual {v2, v3}, Landroid/content/res/Resources;->getColorStateList(I)Landroid/content/res/ColorStateList;

    move-result-object v2
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v2

    .line 179
    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    move-object v2, v4

    :goto_0
    const/high16 v3, 0x41600000    # 14.0f

    .line 182
    invoke-static {v0, v3}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v3

    const/high16 v5, 0x40e00000    # 7.0f

    .line 183
    invoke-static {v0, v5}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v5

    const/high16 v6, 0x40c00000    # 6.0f

    .line 184
    invoke-static {v0, v6}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v6

    const/4 v7, 0x0

    .line 185
    :goto_1
    invoke-virtual {p2}, Lorg/json/JSONArray;->length()I

    move-result v8

    if-ge v7, v8, :cond_2

    .line 186
    invoke-virtual {p2, v7}, Lorg/json/JSONArray;->optString(I)Ljava/lang/String;

    move-result-object v8

    .line 187
    new-instance v9, Landroid/widget/RadioButton;

    invoke-direct {v9, v0}, Landroid/widget/RadioButton;-><init>(Landroid/content/Context;)V

    .line 188
    invoke-virtual {v9, v4}, Landroid/widget/RadioButton;->setButtonDrawable(Landroid/graphics/drawable/Drawable;)V

    .line 189
    invoke-virtual {v9, v1}, Landroid/widget/RadioButton;->setBackgroundResource(I)V

    .line 190
    invoke-virtual {v9, v8}, Landroid/widget/RadioButton;->setText(Ljava/lang/CharSequence;)V

    if-eqz v2, :cond_1

    .line 192
    invoke-virtual {v9, v2}, Landroid/widget/RadioButton;->setTextColor(Landroid/content/res/ColorStateList;)V

    .line 194
    :cond_1
    invoke-virtual {v9, v3, v5, v3, v5}, Landroid/widget/RadioButton;->setPadding(IIII)V

    .line 195
    new-instance v8, Landroid/widget/RadioGroup$LayoutParams;

    const/4 v10, -0x2

    invoke-direct {v8, v10, v10}, Landroid/widget/RadioGroup$LayoutParams;-><init>(II)V

    .line 196
    div-int/lit8 v10, v6, 0x4

    invoke-virtual {v8, v6, v10, v6, v10}, Landroid/widget/RadioGroup$LayoutParams;->setMargins(IIII)V

    .line 197
    invoke-direct {p0, v9}, Lcom/tkay/expressad/foundation/f/a/a;->a(Landroid/widget/RadioButton;)V

    .line 198
    invoke-virtual {p1, v9, v8}, Lcom/tkay/expressad/widget/FeedbackRadioGroup;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    add-int/lit8 v7, v7, 0x1

    goto :goto_1

    :cond_2
    return-void
.end method

.method private a(Z)V
    .locals 2

    .line 248
    iget-object v0, p0, Lcom/tkay/expressad/foundation/f/a/a;->q:Ljava/util/List;

    if-eqz v0, :cond_1

    .line 249
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/foundation/f/a/a$a;

    if-eqz v1, :cond_0

    .line 251
    invoke-virtual {v1, p1}, Lcom/tkay/expressad/foundation/f/a/a$a;->a(Z)V

    goto :goto_0

    :cond_1
    return-void
.end method

.method private b(Lcom/tkay/expressad/foundation/f/a/a$a;)V
    .locals 1

    .line 237
    iget-object v0, p0, Lcom/tkay/expressad/foundation/f/a/a;->q:Ljava/util/List;

    if-eqz v0, :cond_0

    .line 238
    invoke-interface {v0, p1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    :cond_0
    return-void
.end method

.method static synthetic b(Lcom/tkay/expressad/foundation/f/a/a;)V
    .locals 1

    .line 3259
    iget-object p0, p0, Lcom/tkay/expressad/foundation/f/a/a;->q:Ljava/util/List;

    if-eqz p0, :cond_1

    .line 3260
    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :cond_0
    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/foundation/f/a/a$a;

    if-eqz v0, :cond_0

    .line 3262
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/f/a/a$a;->b()V

    goto :goto_0

    :cond_1
    const-string p0, ""

    .line 3266
    sput-object p0, Lcom/tkay/expressad/foundation/f/a/a;->s:Ljava/lang/String;

    return-void
.end method

.method static synthetic c(Lcom/tkay/expressad/foundation/f/a/a;)V
    .locals 1

    .line 3280
    iget-object p0, p0, Lcom/tkay/expressad/foundation/f/a/a;->q:Ljava/util/List;

    if-eqz p0, :cond_0

    .line 3281
    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    goto :goto_0

    :cond_0
    return-void
.end method

.method static synthetic d(Lcom/tkay/expressad/foundation/f/a/a;)Lcom/tkay/expressad/widget/a/a;
    .locals 0

    .line 42
    iget-object p0, p0, Lcom/tkay/expressad/foundation/f/a/a;->p:Lcom/tkay/expressad/widget/a/a;

    return-object p0
.end method

.method static synthetic f()Ljava/lang/String;
    .locals 1

    .line 42
    sget-object v0, Lcom/tkay/expressad/foundation/f/a/a;->s:Ljava/lang/String;

    return-object v0
.end method

.method private g()V
    .locals 1

    .line 94
    iget-object v0, p0, Lcom/tkay/expressad/foundation/f/a/a;->r:Lcom/tkay/expressad/widget/a/c;

    if-nez v0, :cond_0

    .line 95
    new-instance v0, Lcom/tkay/expressad/foundation/f/a/a$2;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/foundation/f/a/a$2;-><init>(Lcom/tkay/expressad/foundation/f/a/a;)V

    iput-object v0, p0, Lcom/tkay/expressad/foundation/f/a/a;->r:Lcom/tkay/expressad/widget/a/c;

    :cond_0
    return-void
.end method

.method private h()V
    .locals 4

    .line 135
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/f/b;->a(Landroid/content/Context;)Landroid/app/Activity;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 136
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    invoke-static {}, Lcom/tkay/expressad/d/b;->b()Lcom/tkay/expressad/d/a;

    move-result-object v0

    if-nez v0, :cond_0

    .line 138
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    invoke-static {}, Lcom/tkay/expressad/d/b;->c()Lcom/tkay/expressad/d/a;

    move-result-object v0

    .line 140
    :cond_0
    invoke-virtual {v0}, Lcom/tkay/expressad/d/a;->L()Lcom/tkay/expressad/d/a$b;

    move-result-object v0

    if-nez v0, :cond_1

    return-void

    .line 145
    :cond_1
    invoke-direct {p0}, Lcom/tkay/expressad/foundation/f/a/a;->g()V

    .line 146
    new-instance v1, Lcom/tkay/expressad/widget/a/a;

    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/expressad/foundation/f/b;->a(Landroid/content/Context;)Landroid/app/Activity;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/expressad/foundation/f/a/a;->r:Lcom/tkay/expressad/widget/a/c;

    invoke-direct {v1, v2, v3}, Lcom/tkay/expressad/widget/a/a;-><init>(Landroid/content/Context;Lcom/tkay/expressad/widget/a/c;)V

    iput-object v1, p0, Lcom/tkay/expressad/foundation/f/a/a;->p:Lcom/tkay/expressad/widget/a/a;

    .line 147
    invoke-static {v0}, Lcom/tkay/expressad/foundation/f/a/a;->a(Lcom/tkay/expressad/d/a$b;)Lcom/tkay/expressad/widget/FeedbackRadioGroup;

    move-result-object v1

    .line 148
    iget-object v2, p0, Lcom/tkay/expressad/foundation/f/a/a;->p:Lcom/tkay/expressad/widget/a/a;

    invoke-virtual {v0}, Lcom/tkay/expressad/d/a$b;->c()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/tkay/expressad/widget/a/a;->c(Ljava/lang/String;)V

    .line 149
    iget-object v2, p0, Lcom/tkay/expressad/foundation/f/a/a;->p:Lcom/tkay/expressad/widget/a/a;

    invoke-virtual {v0}, Lcom/tkay/expressad/d/a$b;->b()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/tkay/expressad/widget/a/a;->b(Ljava/lang/String;)V

    .line 150
    iget-object v2, p0, Lcom/tkay/expressad/foundation/f/a/a;->p:Lcom/tkay/expressad/widget/a/a;

    invoke-virtual {v0}, Lcom/tkay/expressad/d/a$b;->a()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/tkay/expressad/widget/a/a;->a(Ljava/lang/String;)V

    .line 151
    iget-object v2, p0, Lcom/tkay/expressad/foundation/f/a/a;->p:Lcom/tkay/expressad/widget/a/a;

    invoke-virtual {v2, v1}, Lcom/tkay/expressad/widget/a/a;->a(Landroid/view/ViewGroup;)V

    .line 152
    iget-object v2, p0, Lcom/tkay/expressad/foundation/f/a/a;->p:Lcom/tkay/expressad/widget/a/a;

    sget-object v3, Lcom/tkay/expressad/foundation/f/a/a;->s:Ljava/lang/String;

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_2

    const/4 v3, 0x1

    goto :goto_0

    :cond_2
    const/4 v3, 0x0

    :goto_0
    invoke-virtual {v2, v3}, Lcom/tkay/expressad/widget/a/a;->a(Z)V

    .line 153
    invoke-direct {p0, v1, v0}, Lcom/tkay/expressad/foundation/f/a/a;->a(Lcom/tkay/expressad/widget/FeedbackRadioGroup;Lcom/tkay/expressad/d/a$b;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_3
    return-void

    :catch_0
    move-exception v0

    .line 156
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method

.method private i()V
    .locals 2

    .line 259
    iget-object v0, p0, Lcom/tkay/expressad/foundation/f/a/a;->q:Ljava/util/List;

    if-eqz v0, :cond_1

    .line 260
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/foundation/f/a/a$a;

    if-eqz v1, :cond_0

    .line 262
    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/f/a/a$a;->b()V

    goto :goto_0

    :cond_1
    const-string v0, ""

    .line 266
    sput-object v0, Lcom/tkay/expressad/foundation/f/a/a;->s:Ljava/lang/String;

    return-void
.end method

.method private j()V
    .locals 2

    .line 270
    iget-object v0, p0, Lcom/tkay/expressad/foundation/f/a/a;->q:Ljava/util/List;

    if-eqz v0, :cond_1

    .line 271
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/foundation/f/a/a$a;

    if-eqz v1, :cond_0

    .line 273
    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/f/a/a$a;->a()V

    goto :goto_0

    :cond_1
    const-string v0, ""

    .line 277
    sput-object v0, Lcom/tkay/expressad/foundation/f/a/a;->s:Ljava/lang/String;

    return-void
.end method

.method private k()V
    .locals 2

    .line 280
    iget-object v0, p0, Lcom/tkay/expressad/foundation/f/a/a;->q:Ljava/util/List;

    if-eqz v0, :cond_0

    .line 281
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    goto :goto_0

    :cond_0
    return-void
.end method

.method private l()Ljava/lang/String;
    .locals 1

    .line 291
    iget-object v0, p0, Lcom/tkay/expressad/foundation/f/a/a;->a:Ljava/lang/String;

    return-object v0
.end method

.method private m()V
    .locals 3

    .line 295
    iget-object v0, p0, Lcom/tkay/expressad/foundation/f/a/a;->c:Lcom/tkay/expressad/widget/FeedBackButton;

    if-eqz v0, :cond_a

    .line 296
    iget v1, p0, Lcom/tkay/expressad/foundation/f/a/a;->f:I

    if-ltz v1, :cond_0

    int-to-float v1, v1

    .line 297
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/widget/FeedBackButton;->setX(F)V

    .line 299
    :cond_0
    iget v0, p0, Lcom/tkay/expressad/foundation/f/a/a;->g:I

    if-ltz v0, :cond_1

    .line 300
    iget-object v1, p0, Lcom/tkay/expressad/foundation/f/a/a;->c:Lcom/tkay/expressad/widget/FeedBackButton;

    int-to-float v0, v0

    invoke-virtual {v1, v0}, Lcom/tkay/expressad/widget/FeedBackButton;->setY(F)V

    .line 302
    :cond_1
    iget v0, p0, Lcom/tkay/expressad/foundation/f/a/a;->l:F

    const/4 v1, 0x0

    cmpl-float v2, v0, v1

    if-ltz v2, :cond_3

    .line 303
    iget-object v2, p0, Lcom/tkay/expressad/foundation/f/a/a;->c:Lcom/tkay/expressad/widget/FeedBackButton;

    invoke-virtual {v2, v0}, Lcom/tkay/expressad/widget/FeedBackButton;->setAlpha(F)V

    .line 304
    iget-object v0, p0, Lcom/tkay/expressad/foundation/f/a/a;->c:Lcom/tkay/expressad/widget/FeedBackButton;

    iget v2, p0, Lcom/tkay/expressad/foundation/f/a/a;->l:F

    cmpl-float v1, v2, v1

    if-eqz v1, :cond_2

    const/4 v1, 0x1

    goto :goto_0

    :cond_2
    const/4 v1, 0x0

    :goto_0
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/widget/FeedBackButton;->setEnabled(Z)V

    .line 306
    :cond_3
    iget-object v0, p0, Lcom/tkay/expressad/foundation/f/a/a;->c:Lcom/tkay/expressad/widget/FeedBackButton;

    invoke-virtual {v0}, Lcom/tkay/expressad/widget/FeedBackButton;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    .line 307
    iget v1, p0, Lcom/tkay/expressad/foundation/f/a/a;->h:I

    if-lez v1, :cond_4

    .line 308
    iget-object v2, p0, Lcom/tkay/expressad/foundation/f/a/a;->c:Lcom/tkay/expressad/widget/FeedBackButton;

    invoke-virtual {v2, v1}, Lcom/tkay/expressad/widget/FeedBackButton;->setWidth(I)V

    if-eqz v0, :cond_4

    .line 310
    iget v1, p0, Lcom/tkay/expressad/foundation/f/a/a;->h:I

    iput v1, v0, Landroid/view/ViewGroup$LayoutParams;->width:I

    .line 313
    :cond_4
    iget v1, p0, Lcom/tkay/expressad/foundation/f/a/a;->i:I

    if-lez v1, :cond_5

    .line 314
    iget-object v2, p0, Lcom/tkay/expressad/foundation/f/a/a;->c:Lcom/tkay/expressad/widget/FeedBackButton;

    invoke-virtual {v2, v1}, Lcom/tkay/expressad/widget/FeedBackButton;->setHeight(I)V

    if-eqz v0, :cond_5

    .line 316
    iget v1, p0, Lcom/tkay/expressad/foundation/f/a/a;->i:I

    iput v1, v0, Landroid/view/ViewGroup$LayoutParams;->height:I

    :cond_5
    if-eqz v0, :cond_6

    .line 320
    iget-object v1, p0, Lcom/tkay/expressad/foundation/f/a/a;->c:Lcom/tkay/expressad/widget/FeedBackButton;

    invoke-virtual {v1, v0}, Lcom/tkay/expressad/widget/FeedBackButton;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 323
    :cond_6
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/foundation/f/a/a;->j:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_7

    .line 324
    iget-object v0, p0, Lcom/tkay/expressad/foundation/f/a/a;->c:Lcom/tkay/expressad/widget/FeedBackButton;

    iget-object v1, p0, Lcom/tkay/expressad/foundation/f/a/a;->j:Ljava/lang/String;

    invoke-static {v1}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/widget/FeedBackButton;->setTextColor(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception v0

    .line 327
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 329
    :cond_7
    :goto_1
    new-instance v0, Landroid/graphics/drawable/GradientDrawable;

    invoke-direct {v0}, Landroid/graphics/drawable/GradientDrawable;-><init>()V

    .line 330
    iget v1, p0, Lcom/tkay/expressad/foundation/f/a/a;->m:I

    if-lez v1, :cond_8

    int-to-float v1, v1

    .line 331
    invoke-virtual {v0, v1}, Landroid/graphics/drawable/GradientDrawable;->setCornerRadius(F)V

    .line 333
    :cond_8
    iget-object v1, p0, Lcom/tkay/expressad/foundation/f/a/a;->k:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_9

    .line 334
    iget-object v1, p0, Lcom/tkay/expressad/foundation/f/a/a;->k:Ljava/lang/String;

    invoke-static {v1}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/graphics/drawable/GradientDrawable;->setColor(I)V

    goto :goto_2

    .line 336
    :cond_9
    sget-object v1, Lcom/tkay/expressad/widget/FeedBackButton;->FEEDBACK_BTN_BACKGROUND_COLOR_STR:Ljava/lang/String;

    invoke-static {v1}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/graphics/drawable/GradientDrawable;->setColor(I)V

    .line 339
    :goto_2
    :try_start_1
    iget-object v1, p0, Lcom/tkay/expressad/foundation/f/a/a;->c:Lcom/tkay/expressad/widget/FeedBackButton;

    invoke-virtual {v1, v0}, Lcom/tkay/expressad/widget/FeedBackButton;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catchall_0
    :cond_a
    return-void
.end method

.method private n()V
    .locals 3

    .line 359
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 362
    :try_start_0
    new-instance v1, Lcom/tkay/expressad/widget/FeedBackButton;

    invoke-direct {v1, v0}, Lcom/tkay/expressad/widget/FeedBackButton;-><init>(Landroid/content/Context;)V

    iput-object v1, p0, Lcom/tkay/expressad/foundation/f/a/a;->c:Lcom/tkay/expressad/widget/FeedBackButton;

    .line 363
    iget v0, p0, Lcom/tkay/expressad/foundation/f/a/a;->o:I

    const/16 v2, 0x8

    if-ne v0, v2, :cond_0

    goto :goto_0

    :cond_0
    const/4 v2, 0x0

    :goto_0
    invoke-virtual {v1, v2}, Lcom/tkay/expressad/widget/FeedBackButton;->setVisibility(I)V

    .line 364
    iget-object v0, p0, Lcom/tkay/expressad/foundation/f/a/a;->c:Lcom/tkay/expressad/widget/FeedBackButton;

    new-instance v1, Lcom/tkay/expressad/foundation/f/a/a$4;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/foundation/f/a/a$4;-><init>(Lcom/tkay/expressad/foundation/f/a/a;)V

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/widget/FeedBackButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 371
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    return-void
.end method

.method private o()I
    .locals 1

    .line 410
    iget v0, p0, Lcom/tkay/expressad/foundation/f/a/a;->d:I

    return v0
.end method

.method private p()I
    .locals 1

    .line 418
    iget v0, p0, Lcom/tkay/expressad/foundation/f/a/a;->e:I

    return v0
.end method


# virtual methods
.method public final a()V
    .locals 3

    .line 115
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/f/b;->a(Landroid/content/Context;)Landroid/app/Activity;

    move-result-object v0

    .line 116
    iget-object v1, p0, Lcom/tkay/expressad/foundation/f/a/a;->p:Lcom/tkay/expressad/widget/a/a;

    if-eqz v1, :cond_0

    invoke-virtual {v1}, Lcom/tkay/expressad/widget/a/a;->getContext()Landroid/content/Context;

    move-result-object v1

    if-eq v1, v0, :cond_1

    .line 117
    :cond_0
    invoke-direct {p0}, Lcom/tkay/expressad/foundation/f/a/a;->h()V

    .line 119
    :cond_1
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    .line 120
    iget-object v1, p0, Lcom/tkay/expressad/foundation/f/a/a;->c:Lcom/tkay/expressad/widget/FeedBackButton;

    if-eqz v1, :cond_2

    .line 121
    invoke-virtual {v1}, Lcom/tkay/expressad/widget/FeedBackButton;->getContext()Landroid/content/Context;

    move-result-object v0

    .line 123
    :cond_2
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    iget-object v1, p0, Lcom/tkay/expressad/foundation/f/a/a;->p:Lcom/tkay/expressad/widget/a/a;

    invoke-static {v0, v1}, Lcom/tkay/expressad/foundation/f/b;->a(Landroid/content/Context;Lcom/tkay/expressad/widget/a/a;)Z

    move-result v0

    .line 1248
    iget-object v1, p0, Lcom/tkay/expressad/foundation/f/a/a;->q:Ljava/util/List;

    if-eqz v1, :cond_4

    .line 1249
    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_3
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_4

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/foundation/f/a/a$a;

    if-eqz v2, :cond_3

    .line 1251
    invoke-virtual {v2, v0}, Lcom/tkay/expressad/foundation/f/a/a$a;->a(Z)V

    goto :goto_0

    :cond_4
    return-void
.end method

.method public final a(I)V
    .locals 1

    .line 162
    iput p1, p0, Lcom/tkay/expressad/foundation/f/a/a;->o:I

    .line 163
    iget-object v0, p0, Lcom/tkay/expressad/foundation/f/a/a;->c:Lcom/tkay/expressad/widget/FeedBackButton;

    if-eqz v0, :cond_0

    .line 164
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/widget/FeedBackButton;->setVisibility(I)V

    :cond_0
    return-void
.end method

.method public final a(IIIIIFLjava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 347
    iput p1, p0, Lcom/tkay/expressad/foundation/f/a/a;->f:I

    .line 348
    iput p2, p0, Lcom/tkay/expressad/foundation/f/a/a;->g:I

    .line 349
    iput p3, p0, Lcom/tkay/expressad/foundation/f/a/a;->h:I

    .line 350
    iput p4, p0, Lcom/tkay/expressad/foundation/f/a/a;->i:I

    .line 351
    iput-object p7, p0, Lcom/tkay/expressad/foundation/f/a/a;->j:Ljava/lang/String;

    .line 352
    iput-object p8, p0, Lcom/tkay/expressad/foundation/f/a/a;->k:Ljava/lang/String;

    .line 353
    iput p6, p0, Lcom/tkay/expressad/foundation/f/a/a;->l:F

    .line 354
    iput p5, p0, Lcom/tkay/expressad/foundation/f/a/a;->m:I

    .line 355
    invoke-direct {p0}, Lcom/tkay/expressad/foundation/f/a/a;->m()V

    return-void
.end method

.method public final a(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 0

    .line 406
    iput-object p1, p0, Lcom/tkay/expressad/foundation/f/a/a;->b:Lcom/tkay/expressad/foundation/d/c;

    return-void
.end method

.method public final a(Lcom/tkay/expressad/foundation/f/a/a$a;)V
    .locals 1

    .line 230
    iget-object v0, p0, Lcom/tkay/expressad/foundation/f/a/a;->q:Ljava/util/List;

    if-nez v0, :cond_0

    .line 231
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/foundation/f/a/a;->q:Ljava/util/List;

    .line 233
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/foundation/f/a/a;->q:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public final a(Lcom/tkay/expressad/widget/FeedBackButton;)V
    .locals 3

    .line 468
    iget-object v0, p0, Lcom/tkay/expressad/foundation/f/a/a;->c:Lcom/tkay/expressad/widget/FeedBackButton;

    const/16 v1, 0x8

    if-eqz v0, :cond_0

    .line 469
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/widget/FeedBackButton;->setVisibility(I)V

    :cond_0
    if-eqz p1, :cond_4

    .line 473
    iget v0, p0, Lcom/tkay/expressad/foundation/f/a/a;->l:F

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/widget/FeedBackButton;->setAlpha(F)V

    .line 475
    iget v0, p0, Lcom/tkay/expressad/foundation/f/a/a;->l:F

    const/4 v2, 0x0

    cmpl-float v0, v0, v2

    const/4 v2, 0x0

    if-eqz v0, :cond_1

    const/4 v0, 0x1

    goto :goto_0

    :cond_1
    move v0, v2

    :goto_0
    invoke-virtual {p1, v0}, Lcom/tkay/expressad/widget/FeedBackButton;->setEnabled(Z)V

    .line 476
    iget v0, p0, Lcom/tkay/expressad/foundation/f/a/a;->o:I

    if-ne v0, v1, :cond_2

    goto :goto_1

    :cond_2
    move v1, v2

    :goto_1
    invoke-virtual {p1, v1}, Lcom/tkay/expressad/widget/FeedBackButton;->setVisibility(I)V

    .line 477
    iput-object p1, p0, Lcom/tkay/expressad/foundation/f/a/a;->c:Lcom/tkay/expressad/widget/FeedBackButton;

    .line 478
    iget-object v0, p0, Lcom/tkay/expressad/foundation/f/a/a;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_3

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    if-nez v0, :cond_3

    .line 479
    invoke-direct {p0}, Lcom/tkay/expressad/foundation/f/a/a;->m()V

    .line 481
    :cond_3
    new-instance v0, Lcom/tkay/expressad/foundation/f/a/a$5;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/foundation/f/a/a$5;-><init>(Lcom/tkay/expressad/foundation/f/a/a;)V

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/widget/FeedBackButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_4
    return-void
.end method

.method public final b()V
    .locals 1

    .line 128
    iget-object v0, p0, Lcom/tkay/expressad/foundation/f/a/a;->p:Lcom/tkay/expressad/widget/a/a;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/tkay/expressad/widget/a/a;->isShowing()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 129
    iget-object v0, p0, Lcom/tkay/expressad/foundation/f/a/a;->p:Lcom/tkay/expressad/widget/a/a;

    invoke-virtual {v0}, Lcom/tkay/expressad/widget/a/a;->cancel()V

    :cond_0
    return-void
.end method

.method public final b(I)V
    .locals 0

    .line 414
    iput p1, p0, Lcom/tkay/expressad/foundation/f/a/a;->d:I

    return-void
.end method

.method public final c()Lcom/tkay/expressad/widget/FeedBackButton;
    .locals 1

    .line 377
    iget-object v0, p0, Lcom/tkay/expressad/foundation/f/a/a;->c:Lcom/tkay/expressad/widget/FeedBackButton;

    if-nez v0, :cond_0

    .line 378
    invoke-direct {p0}, Lcom/tkay/expressad/foundation/f/a/a;->n()V

    .line 380
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/foundation/f/a/a;->c:Lcom/tkay/expressad/widget/FeedBackButton;

    return-object v0
.end method

.method public final c(I)V
    .locals 0

    .line 422
    iput p1, p0, Lcom/tkay/expressad/foundation/f/a/a;->e:I

    return-void
.end method

.method public final d()V
    .locals 3

    .line 384
    iget-object v0, p0, Lcom/tkay/expressad/foundation/f/a/a;->c:Lcom/tkay/expressad/widget/FeedBackButton;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 385
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/widget/FeedBackButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 386
    iget-object v0, p0, Lcom/tkay/expressad/foundation/f/a/a;->c:Lcom/tkay/expressad/widget/FeedBackButton;

    const/16 v2, 0x8

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/widget/FeedBackButton;->setVisibility(I)V

    .line 387
    iget-object v0, p0, Lcom/tkay/expressad/foundation/f/a/a;->c:Lcom/tkay/expressad/widget/FeedBackButton;

    invoke-virtual {v0}, Lcom/tkay/expressad/widget/FeedBackButton;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    if-eqz v0, :cond_0

    .line 389
    iget-object v2, p0, Lcom/tkay/expressad/foundation/f/a/a;->c:Lcom/tkay/expressad/widget/FeedBackButton;

    invoke-virtual {v0, v2}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 392
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/foundation/f/a/a;->p:Lcom/tkay/expressad/widget/a/a;

    if-eqz v0, :cond_1

    .line 393
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/widget/a/a;->a(Lcom/tkay/expressad/widget/a/c;)V

    .line 395
    :cond_1
    iput-object v1, p0, Lcom/tkay/expressad/foundation/f/a/a;->p:Lcom/tkay/expressad/widget/a/a;

    .line 396
    iput-object v1, p0, Lcom/tkay/expressad/foundation/f/a/a;->q:Ljava/util/List;

    .line 397
    iput-object v1, p0, Lcom/tkay/expressad/foundation/f/a/a;->c:Lcom/tkay/expressad/widget/FeedBackButton;

    .line 398
    iput-object v1, p0, Lcom/tkay/expressad/foundation/f/a/a;->r:Lcom/tkay/expressad/widget/a/c;

    return-void
.end method

.method public final e()Lcom/tkay/expressad/foundation/d/c;
    .locals 1

    .line 402
    iget-object v0, p0, Lcom/tkay/expressad/foundation/f/a/a;->b:Lcom/tkay/expressad/foundation/d/c;

    return-object v0
.end method
