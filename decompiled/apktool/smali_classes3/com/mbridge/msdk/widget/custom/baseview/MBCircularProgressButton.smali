.class public Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;
.super Landroid/support/v7/widget/AppCompatButton;
.source "MBCircularProgressButton.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$SavedState;,
        Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;
    }
.end annotation


# static fields
.field public static final ERROR_STATE_PROGRESS:I = -0x1

.field public static final IDLE_STATE_PROGRESS:I = 0x0

.field public static final INDETERMINATE_STATE_PROGRESS:I = 0x32

.field public static final SUCCESS_STATE_PROGRESS:I = 0x64


# instance fields
.field private A:Lcom/mbridge/msdk/widget/custom/baseview/d;

.field private B:Lcom/mbridge/msdk/widget/custom/baseview/d;

.field private a:Lcom/mbridge/msdk/widget/custom/baseview/f;

.field private b:Lcom/mbridge/msdk/widget/custom/baseview/a;

.field private c:Lcom/mbridge/msdk/widget/custom/baseview/b;

.field private d:Landroid/content/res/ColorStateList;

.field private e:Landroid/content/res/ColorStateList;

.field private f:Landroid/content/res/ColorStateList;

.field private g:Landroid/graphics/drawable/StateListDrawable;

.field private h:Landroid/graphics/drawable/StateListDrawable;

.field private i:Landroid/graphics/drawable/StateListDrawable;

.field private j:Lcom/mbridge/msdk/widget/custom/baseview/e;

.field private k:Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;

.field private l:I

.field private m:I

.field private n:I

.field private o:I

.field private p:I

.field private q:I

.field private r:I

.field private s:F

.field private t:Z

.field private u:Z

.field private v:I

.field private w:I

.field private x:Z

.field private y:Lcom/mbridge/msdk/widget/custom/baseview/d;

.field private z:Lcom/mbridge/msdk/widget/custom/baseview/d;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    .line 63
    invoke-direct {p0, p1}, Landroid/support/v7/widget/AppCompatButton;-><init>(Landroid/content/Context;)V

    .line 317
    new-instance v0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$1;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$1;-><init>(Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;)V

    iput-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->y:Lcom/mbridge/msdk/widget/custom/baseview/d;

    .line 357
    new-instance v0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$2;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$2;-><init>(Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;)V

    iput-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->z:Lcom/mbridge/msdk/widget/custom/baseview/d;

    .line 400
    new-instance v0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$3;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$3;-><init>(Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;)V

    iput-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->A:Lcom/mbridge/msdk/widget/custom/baseview/d;

    .line 439
    new-instance v0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$4;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$4;-><init>(Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;)V

    iput-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->B:Lcom/mbridge/msdk/widget/custom/baseview/d;

    const/4 v0, 0x0

    .line 64
    invoke-direct {p0, p1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->a(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    .line 68
    invoke-direct {p0, p1, p2}, Landroid/support/v7/widget/AppCompatButton;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    .line 317
    new-instance v0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$1;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$1;-><init>(Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;)V

    iput-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->y:Lcom/mbridge/msdk/widget/custom/baseview/d;

    .line 357
    new-instance v0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$2;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$2;-><init>(Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;)V

    iput-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->z:Lcom/mbridge/msdk/widget/custom/baseview/d;

    .line 400
    new-instance v0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$3;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$3;-><init>(Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;)V

    iput-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->A:Lcom/mbridge/msdk/widget/custom/baseview/d;

    .line 439
    new-instance v0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$4;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$4;-><init>(Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;)V

    iput-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->B:Lcom/mbridge/msdk/widget/custom/baseview/d;

    .line 69
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->a(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    .line 73
    invoke-direct {p0, p1, p2, p3}, Landroid/support/v7/widget/AppCompatButton;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    .line 317
    new-instance p3, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$1;

    invoke-direct {p3, p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$1;-><init>(Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;)V

    iput-object p3, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->y:Lcom/mbridge/msdk/widget/custom/baseview/d;

    .line 357
    new-instance p3, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$2;

    invoke-direct {p3, p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$2;-><init>(Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;)V

    iput-object p3, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->z:Lcom/mbridge/msdk/widget/custom/baseview/d;

    .line 400
    new-instance p3, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$3;

    invoke-direct {p3, p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$3;-><init>(Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;)V

    iput-object p3, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->A:Lcom/mbridge/msdk/widget/custom/baseview/d;

    .line 439
    new-instance p3, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$4;

    invoke-direct {p3, p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$4;-><init>(Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;)V

    iput-object p3, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->B:Lcom/mbridge/msdk/widget/custom/baseview/d;

    .line 74
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->a(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method private a(Landroid/content/res/ColorStateList;)I
    .locals 3

    const/4 v0, 0x1

    new-array v0, v0, [I

    const v1, 0x101009e

    const/4 v2, 0x0

    aput v1, v0, v2

    .line 126
    invoke-virtual {p1, v0, v2}, Landroid/content/res/ColorStateList;->getColorForState([II)I

    move-result p1

    return p1
.end method

.method static synthetic a(Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;)Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;
    .locals 0

    .line 21
    iput-object p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->k:Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;

    return-object p1
.end method

.method private a(FFII)Lcom/mbridge/msdk/widget/custom/baseview/c;
    .locals 3

    const/4 v0, 0x1

    .line 279
    iput-boolean v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->x:Z

    .line 281
    new-instance v1, Lcom/mbridge/msdk/widget/custom/baseview/c;

    iget-object v2, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->a:Lcom/mbridge/msdk/widget/custom/baseview/f;

    invoke-direct {v1, p0, v2}, Lcom/mbridge/msdk/widget/custom/baseview/c;-><init>(Landroid/widget/TextView;Lcom/mbridge/msdk/widget/custom/baseview/f;)V

    .line 282
    invoke-virtual {v1, p1}, Lcom/mbridge/msdk/widget/custom/baseview/c;->a(F)V

    .line 283
    invoke-virtual {v1, p2}, Lcom/mbridge/msdk/widget/custom/baseview/c;->b(F)V

    .line 285
    iget p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->r:I

    int-to-float p1, p1

    invoke-virtual {v1, p1}, Lcom/mbridge/msdk/widget/custom/baseview/c;->c(F)V

    .line 287
    invoke-virtual {v1, p3}, Lcom/mbridge/msdk/widget/custom/baseview/c;->b(I)V

    .line 288
    invoke-virtual {v1, p4}, Lcom/mbridge/msdk/widget/custom/baseview/c;->c(I)V

    .line 290
    iget-boolean p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->u:Z

    if-eqz p1, :cond_0

    .line 291
    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/c;->a(I)V

    goto :goto_0

    :cond_0
    const/16 p1, 0x1f4

    .line 293
    invoke-virtual {v1, p1}, Lcom/mbridge/msdk/widget/custom/baseview/c;->a(I)V

    :goto_0
    const/4 p1, 0x0

    .line 296
    iput-boolean p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->u:Z

    return-object v1
.end method

.method static synthetic a(Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;)Lcom/mbridge/msdk/widget/custom/baseview/e;
    .locals 0

    .line 21
    iget-object p0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->j:Lcom/mbridge/msdk/widget/custom/baseview/e;

    return-object p0
.end method

.method private a(I)Lcom/mbridge/msdk/widget/custom/baseview/f;
    .locals 4

    .line 142
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v2, "mbridge_cpb_background"

    const-string v3, "drawable"

    invoke-static {v1, v2, v3}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object v0

    invoke-virtual {v0}, Landroid/graphics/drawable/Drawable;->mutate()Landroid/graphics/drawable/Drawable;

    move-result-object v0

    check-cast v0, Landroid/graphics/drawable/GradientDrawable;

    .line 143
    invoke-virtual {v0, p1}, Landroid/graphics/drawable/GradientDrawable;->setColor(I)V

    .line 144
    iget v1, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->s:F

    invoke-virtual {v0, v1}, Landroid/graphics/drawable/GradientDrawable;->setCornerRadius(F)V

    .line 145
    new-instance v1, Lcom/mbridge/msdk/widget/custom/baseview/f;

    invoke-direct {v1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/f;-><init>(Landroid/graphics/drawable/GradientDrawable;)V

    .line 146
    invoke-virtual {v1, p1}, Lcom/mbridge/msdk/widget/custom/baseview/f;->b(I)V

    .line 147
    iget p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->q:I

    invoke-virtual {v1, p1}, Lcom/mbridge/msdk/widget/custom/baseview/f;->a(I)V

    return-object v1
.end method

.method private a(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    const/4 v0, 0x0

    .line 78
    iput v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->q:I

    .line 79
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->b(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const/16 p1, 0x64

    .line 80
    iput p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->v:I

    .line 81
    sget-object p1, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;->b:Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;

    iput-object p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->k:Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;

    .line 82
    new-instance p1, Lcom/mbridge/msdk/widget/custom/baseview/e;

    invoke-direct {p1, p0}, Lcom/mbridge/msdk/widget/custom/baseview/e;-><init>(Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;)V

    iput-object p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->j:Lcom/mbridge/msdk/widget/custom/baseview/e;

    .line 83
    invoke-direct {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->b()V

    .line 84
    iget-object p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->g:Landroid/graphics/drawable/StateListDrawable;

    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->setBackgroundCompat(Landroid/graphics/drawable/Drawable;)V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;I)V
    .locals 2

    .line 6474
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0, p1}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 6476
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->getWidth()I

    move-result v1

    div-int/lit8 v1, v1, 0x2

    invoke-virtual {v0}, Landroid/graphics/drawable/Drawable;->getIntrinsicWidth()I

    move-result v0

    div-int/lit8 v0, v0, 0x2

    sub-int/2addr v1, v0

    const/4 v0, 0x0

    .line 6477
    invoke-virtual {p0, p1, v0, v0, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->setCompoundDrawablesWithIntrinsicBounds(IIII)V

    .line 6478
    invoke-virtual {p0, v1, v0, v0, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->setPadding(IIII)V

    :cond_0
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;Z)Z
    .locals 0

    .line 21
    iput-boolean p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->x:Z

    return p1
.end method

.method private b(I)I
    .locals 1

    .line 196
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0, p1}, Landroid/content/res/Resources;->getColor(I)I

    move-result p1

    return p1
.end method

.method private b(Landroid/content/res/ColorStateList;)I
    .locals 3

    const/4 v0, 0x1

    new-array v0, v0, [I

    const v1, 0x10100a7

    const/4 v2, 0x0

    aput v1, v0, v2

    .line 130
    invoke-virtual {p1, v0, v2}, Landroid/content/res/ColorStateList;->getColorForState([II)I

    move-result p1

    return p1
.end method

.method static synthetic b(Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;)I
    .locals 0

    .line 21
    iget p0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->o:I

    return p0
.end method

.method private b()V
    .locals 8

    .line 106
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->d:Landroid/content/res/ColorStateList;

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->a(Landroid/content/res/ColorStateList;)I

    move-result v0

    .line 107
    iget-object v1, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->d:Landroid/content/res/ColorStateList;

    invoke-direct {p0, v1}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->b(Landroid/content/res/ColorStateList;)I

    move-result v1

    .line 108
    iget-object v2, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->d:Landroid/content/res/ColorStateList;

    invoke-direct {p0, v2}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->c(Landroid/content/res/ColorStateList;)I

    move-result v2

    .line 109
    iget-object v3, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->d:Landroid/content/res/ColorStateList;

    invoke-direct {p0, v3}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->d(Landroid/content/res/ColorStateList;)I

    move-result v3

    .line 110
    iget-object v4, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->a:Lcom/mbridge/msdk/widget/custom/baseview/f;

    if-nez v4, :cond_0

    .line 111
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->a(I)Lcom/mbridge/msdk/widget/custom/baseview/f;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->a:Lcom/mbridge/msdk/widget/custom/baseview/f;

    .line 114
    :cond_0
    invoke-direct {p0, v3}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->a(I)Lcom/mbridge/msdk/widget/custom/baseview/f;

    move-result-object v0

    .line 115
    invoke-direct {p0, v2}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->a(I)Lcom/mbridge/msdk/widget/custom/baseview/f;

    move-result-object v2

    .line 116
    invoke-direct {p0, v1}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->a(I)Lcom/mbridge/msdk/widget/custom/baseview/f;

    move-result-object v1

    .line 117
    new-instance v3, Landroid/graphics/drawable/StateListDrawable;

    invoke-direct {v3}, Landroid/graphics/drawable/StateListDrawable;-><init>()V

    iput-object v3, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->g:Landroid/graphics/drawable/StateListDrawable;

    const/4 v4, 0x1

    new-array v5, v4, [I

    const v6, 0x10100a7

    const/4 v7, 0x0

    aput v6, v5, v7

    .line 119
    invoke-virtual {v1}, Lcom/mbridge/msdk/widget/custom/baseview/f;->a()Landroid/graphics/drawable/GradientDrawable;

    move-result-object v1

    invoke-virtual {v3, v5, v1}, Landroid/graphics/drawable/StateListDrawable;->addState([ILandroid/graphics/drawable/Drawable;)V

    .line 120
    iget-object v1, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->g:Landroid/graphics/drawable/StateListDrawable;

    new-array v3, v4, [I

    const v5, 0x101009c

    aput v5, v3, v7

    invoke-virtual {v2}, Lcom/mbridge/msdk/widget/custom/baseview/f;->a()Landroid/graphics/drawable/GradientDrawable;

    move-result-object v2

    invoke-virtual {v1, v3, v2}, Landroid/graphics/drawable/StateListDrawable;->addState([ILandroid/graphics/drawable/Drawable;)V

    .line 121
    iget-object v1, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->g:Landroid/graphics/drawable/StateListDrawable;

    new-array v2, v4, [I

    const v3, -0x101009e

    aput v3, v2, v7

    invoke-virtual {v0}, Lcom/mbridge/msdk/widget/custom/baseview/f;->a()Landroid/graphics/drawable/GradientDrawable;

    move-result-object v0

    invoke-virtual {v1, v2, v0}, Landroid/graphics/drawable/StateListDrawable;->addState([ILandroid/graphics/drawable/Drawable;)V

    .line 122
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->g:Landroid/graphics/drawable/StateListDrawable;

    sget-object v1, Landroid/util/StateSet;->WILD_CARD:[I

    iget-object v2, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->a:Lcom/mbridge/msdk/widget/custom/baseview/f;

    invoke-virtual {v2}, Lcom/mbridge/msdk/widget/custom/baseview/f;->a()Landroid/graphics/drawable/GradientDrawable;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Landroid/graphics/drawable/StateListDrawable;->addState([ILandroid/graphics/drawable/Drawable;)V

    return-void
.end method

.method private b(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 5

    const/high16 p2, 0x42c80000    # 100.0f

    .line 172
    iput p2, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->s:F

    const/4 p2, 0x0

    .line 173
    iput p2, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->r:I

    const-string p2, "color"

    const-string v0, "mbridge_cpb_green"

    .line 175
    invoke-static {p1, v0, p2}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->b(I)I

    move-result v0

    const-string v1, "mbridge_cpb_white"

    .line 176
    invoke-static {p1, v1, p2}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-direct {p0, v1}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->b(I)I

    move-result v1

    const-string v2, "mbridge_cpb_grey"

    .line 177
    invoke-static {p1, v2, p2}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-direct {p0, v2}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->b(I)I

    move-result v2

    const-string v3, "mbridge_cpb_idle_state_selector"

    .line 179
    invoke-static {p1, v3, p2}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    .line 180
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->getResources()Landroid/content/res/Resources;

    move-result-object v4

    invoke-virtual {v4, v3}, Landroid/content/res/Resources;->getColorStateList(I)Landroid/content/res/ColorStateList;

    move-result-object v3

    iput-object v3, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->d:Landroid/content/res/ColorStateList;

    const-string v3, "mbridge_cpb_complete_state_selector"

    .line 182
    invoke-static {p1, v3, p2}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    .line 183
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->getResources()Landroid/content/res/Resources;

    move-result-object v4

    invoke-virtual {v4, v3}, Landroid/content/res/Resources;->getColorStateList(I)Landroid/content/res/ColorStateList;

    move-result-object v3

    iput-object v3, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->e:Landroid/content/res/ColorStateList;

    const-string v3, "mbridge_cpb_error_state_selector"

    .line 185
    invoke-static {p1, v3, p2}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    .line 186
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->getResources()Landroid/content/res/Resources;

    move-result-object p2

    invoke-virtual {p2, p1}, Landroid/content/res/Resources;->getColorStateList(I)Landroid/content/res/ColorStateList;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->f:Landroid/content/res/ColorStateList;

    .line 188
    iput v1, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->l:I

    .line 189
    iput v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->m:I

    .line 190
    iput v2, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->n:I

    return-void
.end method

.method private c(Landroid/content/res/ColorStateList;)I
    .locals 3

    const/4 v0, 0x1

    new-array v0, v0, [I

    const v1, 0x101009c

    const/4 v2, 0x0

    aput v1, v0, v2

    .line 134
    invoke-virtual {p1, v0, v2}, Landroid/content/res/ColorStateList;->getColorForState([II)I

    move-result p1

    return p1
.end method

.method static synthetic c(Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;)I
    .locals 0

    .line 21
    iget p0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->p:I

    return p0
.end method

.method private c()Lcom/mbridge/msdk/widget/custom/baseview/c;
    .locals 3

    const/4 v0, 0x1

    .line 258
    iput-boolean v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->x:Z

    .line 260
    new-instance v1, Lcom/mbridge/msdk/widget/custom/baseview/c;

    iget-object v2, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->a:Lcom/mbridge/msdk/widget/custom/baseview/f;

    invoke-direct {v1, p0, v2}, Lcom/mbridge/msdk/widget/custom/baseview/c;-><init>(Landroid/widget/TextView;Lcom/mbridge/msdk/widget/custom/baseview/f;)V

    .line 261
    iget v2, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->s:F

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/widget/custom/baseview/c;->a(F)V

    .line 262
    iget v2, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->s:F

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/widget/custom/baseview/c;->b(F)V

    .line 264
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->getWidth()I

    move-result v2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/widget/custom/baseview/c;->b(I)V

    .line 265
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->getWidth()I

    move-result v2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/widget/custom/baseview/c;->c(I)V

    .line 267
    iget-boolean v2, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->u:Z

    if-eqz v2, :cond_0

    .line 268
    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/c;->a(I)V

    goto :goto_0

    :cond_0
    const/16 v0, 0x1f4

    .line 270
    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/c;->a(I)V

    :goto_0
    const/4 v0, 0x0

    .line 273
    iput-boolean v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->u:Z

    return-object v1
.end method

.method private d(Landroid/content/res/ColorStateList;)I
    .locals 3

    const/4 v0, 0x1

    new-array v0, v0, [I

    const v1, -0x101009e

    const/4 v2, 0x0

    aput v1, v0, v2

    .line 138
    invoke-virtual {p1, v0, v2}, Landroid/content/res/ColorStateList;->getColorForState([II)I

    move-result p1

    return p1
.end method


# virtual methods
.method protected final a()V
    .locals 1

    const/4 v0, 0x0

    .line 483
    invoke-virtual {p0, v0, v0, v0, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->setCompoundDrawablesWithIntrinsicBounds(IIII)V

    .line 484
    invoke-virtual {p0, v0, v0, v0, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->setPadding(IIII)V

    return-void
.end method

.method protected drawableStateChanged()V
    .locals 5

    .line 154
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->k:Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;

    sget-object v1, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;->c:Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;

    const v2, 0x10100a7

    const/4 v3, 0x0

    const/4 v4, 0x1

    if-ne v0, v1, :cond_0

    .line 1096
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->e:Landroid/content/res/ColorStateList;

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->b(Landroid/content/res/ColorStateList;)I

    move-result v0

    .line 1098
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->a(I)Lcom/mbridge/msdk/widget/custom/baseview/f;

    move-result-object v0

    .line 1099
    new-instance v1, Landroid/graphics/drawable/StateListDrawable;

    invoke-direct {v1}, Landroid/graphics/drawable/StateListDrawable;-><init>()V

    iput-object v1, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->h:Landroid/graphics/drawable/StateListDrawable;

    new-array v4, v4, [I

    aput v2, v4, v3

    .line 1101
    invoke-virtual {v0}, Lcom/mbridge/msdk/widget/custom/baseview/f;->a()Landroid/graphics/drawable/GradientDrawable;

    move-result-object v0

    invoke-virtual {v1, v4, v0}, Landroid/graphics/drawable/StateListDrawable;->addState([ILandroid/graphics/drawable/Drawable;)V

    .line 1102
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->h:Landroid/graphics/drawable/StateListDrawable;

    sget-object v1, Landroid/util/StateSet;->WILD_CARD:[I

    iget-object v2, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->a:Lcom/mbridge/msdk/widget/custom/baseview/f;

    invoke-virtual {v2}, Lcom/mbridge/msdk/widget/custom/baseview/f;->a()Landroid/graphics/drawable/GradientDrawable;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Landroid/graphics/drawable/StateListDrawable;->addState([ILandroid/graphics/drawable/Drawable;)V

    .line 156
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->h:Landroid/graphics/drawable/StateListDrawable;

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->setBackgroundCompat(Landroid/graphics/drawable/Drawable;)V

    goto :goto_0

    .line 157
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->k:Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;

    sget-object v1, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;->b:Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;

    if-ne v0, v1, :cond_1

    .line 158
    invoke-direct {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->b()V

    .line 159
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->g:Landroid/graphics/drawable/StateListDrawable;

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->setBackgroundCompat(Landroid/graphics/drawable/Drawable;)V

    goto :goto_0

    .line 160
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->k:Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;

    sget-object v1, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;->d:Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;

    if-ne v0, v1, :cond_2

    .line 2088
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->f:Landroid/content/res/ColorStateList;

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->b(Landroid/content/res/ColorStateList;)I

    move-result v0

    .line 2089
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->a(I)Lcom/mbridge/msdk/widget/custom/baseview/f;

    move-result-object v0

    .line 2090
    new-instance v1, Landroid/graphics/drawable/StateListDrawable;

    invoke-direct {v1}, Landroid/graphics/drawable/StateListDrawable;-><init>()V

    iput-object v1, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->i:Landroid/graphics/drawable/StateListDrawable;

    new-array v4, v4, [I

    aput v2, v4, v3

    .line 2091
    invoke-virtual {v0}, Lcom/mbridge/msdk/widget/custom/baseview/f;->a()Landroid/graphics/drawable/GradientDrawable;

    move-result-object v0

    invoke-virtual {v1, v4, v0}, Landroid/graphics/drawable/StateListDrawable;->addState([ILandroid/graphics/drawable/Drawable;)V

    .line 2092
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->i:Landroid/graphics/drawable/StateListDrawable;

    sget-object v1, Landroid/util/StateSet;->WILD_CARD:[I

    iget-object v2, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->a:Lcom/mbridge/msdk/widget/custom/baseview/f;

    invoke-virtual {v2}, Lcom/mbridge/msdk/widget/custom/baseview/f;->a()Landroid/graphics/drawable/GradientDrawable;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Landroid/graphics/drawable/StateListDrawable;->addState([ILandroid/graphics/drawable/Drawable;)V

    .line 162
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->i:Landroid/graphics/drawable/StateListDrawable;

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->setBackgroundCompat(Landroid/graphics/drawable/Drawable;)V

    .line 164
    :cond_2
    :goto_0
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->k:Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;

    sget-object v1, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;->a:Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;

    if-eq v0, v1, :cond_3

    .line 165
    invoke-super {p0}, Landroid/support/v7/widget/AppCompatButton;->drawableStateChanged()V

    :cond_3
    return-void
.end method

.method public getProgress()I
    .locals 1

    .line 541
    iget v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->w:I

    return v0
.end method

.method public isIndeterminateProgressMode()Z
    .locals 1

    .line 245
    iget-boolean v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->t:Z

    return v0
.end method

.method protected onDraw(Landroid/graphics/Canvas;)V
    .locals 5

    .line 205
    invoke-super {p0, p1}, Landroid/support/v7/widget/AppCompatButton;->onDraw(Landroid/graphics/Canvas;)V

    .line 206
    iget v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->w:I

    if-lez v0, :cond_3

    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->k:Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;

    sget-object v1, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;->a:Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;

    if-ne v0, v1, :cond_3

    iget-boolean v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->x:Z

    if-nez v0, :cond_3

    .line 207
    iget-boolean v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->t:Z

    if-eqz v0, :cond_1

    .line 2216
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->b:Lcom/mbridge/msdk/widget/custom/baseview/a;

    if-nez v0, :cond_0

    .line 2217
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->getWidth()I

    move-result p1

    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->getHeight()I

    move-result v0

    sub-int/2addr p1, v0

    div-int/lit8 p1, p1, 0x2

    .line 2218
    new-instance v0, Lcom/mbridge/msdk/widget/custom/baseview/a;

    iget v1, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->m:I

    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v3, 0x40000000    # 2.0f

    invoke-static {v2, v3}, Lcom/mbridge/msdk/widget/custom/b/a;->a(Landroid/content/Context;F)I

    move-result v2

    int-to-float v2, v2

    invoke-direct {v0, v1, v2}, Lcom/mbridge/msdk/widget/custom/baseview/a;-><init>(IF)V

    iput-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->b:Lcom/mbridge/msdk/widget/custom/baseview/a;

    .line 2219
    iget v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->r:I

    add-int/2addr v0, p1

    .line 2220
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->getWidth()I

    move-result v1

    sub-int/2addr v1, p1

    iget p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->r:I

    sub-int/2addr v1, p1

    .line 2221
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->getHeight()I

    move-result p1

    iget v2, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->r:I

    sub-int/2addr p1, v2

    .line 2223
    iget-object v3, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->b:Lcom/mbridge/msdk/widget/custom/baseview/a;

    invoke-virtual {v3, v0, v2, v1, p1}, Lcom/mbridge/msdk/widget/custom/baseview/a;->setBounds(IIII)V

    .line 2224
    iget-object p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->b:Lcom/mbridge/msdk/widget/custom/baseview/a;

    invoke-virtual {p1, p0}, Lcom/mbridge/msdk/widget/custom/baseview/a;->setCallback(Landroid/graphics/drawable/Drawable$Callback;)V

    .line 2225
    iget-object p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->b:Lcom/mbridge/msdk/widget/custom/baseview/a;

    invoke-virtual {p1}, Lcom/mbridge/msdk/widget/custom/baseview/a;->start()V

    goto :goto_0

    .line 2227
    :cond_0
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/widget/custom/baseview/a;->draw(Landroid/graphics/Canvas;)V

    goto :goto_0

    .line 2232
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->c:Lcom/mbridge/msdk/widget/custom/baseview/b;

    if-nez v0, :cond_2

    .line 2233
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->getWidth()I

    move-result v0

    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->getHeight()I

    move-result v1

    sub-int/2addr v0, v1

    div-int/lit8 v0, v0, 0x2

    .line 2234
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->getHeight()I

    move-result v1

    iget v2, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->r:I

    mul-int/lit8 v2, v2, 0x2

    sub-int/2addr v1, v2

    .line 2235
    new-instance v2, Lcom/mbridge/msdk/widget/custom/baseview/b;

    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->getContext()Landroid/content/Context;

    move-result-object v3

    const/4 v4, 0x4

    invoke-static {v3, v4}, Lcom/mbridge/msdk/widget/custom/b/a;->a(Landroid/content/Context;I)I

    move-result v3

    iget v4, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->m:I

    invoke-direct {v2, v1, v3, v4}, Lcom/mbridge/msdk/widget/custom/baseview/b;-><init>(III)V

    iput-object v2, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->c:Lcom/mbridge/msdk/widget/custom/baseview/b;

    .line 2236
    iget v1, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->r:I

    add-int/2addr v0, v1

    .line 2237
    invoke-virtual {v2, v0, v1, v0, v1}, Lcom/mbridge/msdk/widget/custom/baseview/b;->setBounds(IIII)V

    :cond_2
    const/high16 v0, 0x43b40000    # 360.0f

    .line 2239
    iget v1, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->v:I

    int-to-float v1, v1

    div-float/2addr v0, v1

    iget v1, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->w:I

    int-to-float v1, v1

    mul-float/2addr v0, v1

    .line 2240
    iget-object v1, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->c:Lcom/mbridge/msdk/widget/custom/baseview/b;

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/b;->a(F)V

    .line 2241
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->c:Lcom/mbridge/msdk/widget/custom/baseview/b;

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/widget/custom/baseview/b;->draw(Landroid/graphics/Canvas;)V

    :cond_3
    :goto_0
    return-void
.end method

.method protected onLayout(ZIIII)V
    .locals 0

    .line 554
    invoke-super/range {p0 .. p5}, Landroid/support/v7/widget/AppCompatButton;->onLayout(ZIIII)V

    if-eqz p1, :cond_0

    .line 556
    iget p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->w:I

    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->setProgress(I)V

    :cond_0
    return-void
.end method

.method public onRestoreInstanceState(Landroid/os/Parcelable;)V
    .locals 1

    .line 573
    instance-of v0, p1, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$SavedState;

    if-eqz v0, :cond_0

    .line 574
    check-cast p1, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$SavedState;

    .line 575
    invoke-static {p1}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$SavedState;->a(Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$SavedState;)I

    move-result v0

    iput v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->w:I

    .line 576
    invoke-static {p1}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$SavedState;->b(Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$SavedState;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->t:Z

    .line 577
    invoke-static {p1}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$SavedState;->c(Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$SavedState;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->u:Z

    .line 578
    invoke-virtual {p1}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$SavedState;->getSuperState()Landroid/os/Parcelable;

    move-result-object p1

    invoke-super {p0, p1}, Landroid/support/v7/widget/AppCompatButton;->onRestoreInstanceState(Landroid/os/Parcelable;)V

    .line 579
    iget p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->w:I

    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->setProgress(I)V

    goto :goto_0

    .line 581
    :cond_0
    invoke-super {p0, p1}, Landroid/support/v7/widget/AppCompatButton;->onRestoreInstanceState(Landroid/os/Parcelable;)V

    :goto_0
    return-void
.end method

.method public onSaveInstanceState()Landroid/os/Parcelable;
    .locals 2

    .line 562
    invoke-super {p0}, Landroid/support/v7/widget/AppCompatButton;->onSaveInstanceState()Landroid/os/Parcelable;

    move-result-object v0

    .line 563
    new-instance v1, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$SavedState;

    invoke-direct {v1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$SavedState;-><init>(Landroid/os/Parcelable;)V

    .line 564
    iget v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->w:I

    invoke-static {v1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$SavedState;->a(Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$SavedState;I)I

    .line 565
    iget-boolean v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->t:Z

    invoke-static {v1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$SavedState;->a(Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$SavedState;Z)Z

    const/4 v0, 0x1

    .line 566
    invoke-static {v1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$SavedState;->b(Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$SavedState;Z)Z

    return-object v1
.end method

.method public setBackgroundColor(I)V
    .locals 1

    .line 545
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->a:Lcom/mbridge/msdk/widget/custom/baseview/f;

    invoke-virtual {v0}, Lcom/mbridge/msdk/widget/custom/baseview/f;->a()Landroid/graphics/drawable/GradientDrawable;

    move-result-object v0

    invoke-virtual {v0, p1}, Landroid/graphics/drawable/GradientDrawable;->setColor(I)V

    return-void
.end method

.method public setBackgroundCompat(Landroid/graphics/drawable/Drawable;)V
    .locals 2

    .line 493
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x10

    if-lt v0, v1, :cond_0

    .line 494
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->setBackground(Landroid/graphics/drawable/Drawable;)V

    goto :goto_0

    .line 496
    :cond_0
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    :goto_0
    return-void
.end method

.method public setIndeterminateProgressMode(Z)V
    .locals 0

    .line 249
    iput-boolean p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->t:Z

    return-void
.end method

.method public setProgress(I)V
    .locals 3

    .line 501
    iput p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->w:I

    .line 503
    iget-boolean p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->x:Z

    if-nez p1, :cond_9

    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->getWidth()I

    move-result p1

    if-nez p1, :cond_0

    goto/16 :goto_0

    .line 507
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->j:Lcom/mbridge/msdk/widget/custom/baseview/e;

    invoke-virtual {p1, p0}, Lcom/mbridge/msdk/widget/custom/baseview/e;->a(Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;)V

    .line 509
    iget p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->w:I

    iget v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->v:I

    if-lt p1, v0, :cond_2

    .line 510
    iget-object p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->k:Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;

    sget-object v0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;->a:Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;

    if-ne p1, v0, :cond_1

    .line 2328
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->getHeight()I

    move-result p1

    int-to-float p1, p1

    iget v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->s:F

    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->getHeight()I

    move-result v1

    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->getWidth()I

    move-result v2

    invoke-direct {p0, p1, v0, v1, v2}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->a(FFII)Lcom/mbridge/msdk/widget/custom/baseview/c;

    move-result-object p1

    .line 2330
    iget v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->l:I

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/c;->d(I)V

    .line 2331
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->e:Landroid/content/res/ColorStateList;

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->a(Landroid/content/res/ColorStateList;)I

    move-result v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/c;->e(I)V

    .line 2333
    iget v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->m:I

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/c;->f(I)V

    .line 2334
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->e:Landroid/content/res/ColorStateList;

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->a(Landroid/content/res/ColorStateList;)I

    move-result v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/c;->g(I)V

    .line 2336
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->z:Lcom/mbridge/msdk/widget/custom/baseview/d;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/c;->a(Lcom/mbridge/msdk/widget/custom/baseview/d;)V

    .line 2338
    invoke-virtual {p1}, Lcom/mbridge/msdk/widget/custom/baseview/c;->a()V

    goto/16 :goto_0

    .line 512
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->k:Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;

    sget-object v0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;->b:Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;

    if-ne p1, v0, :cond_9

    .line 2343
    invoke-direct {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->c()Lcom/mbridge/msdk/widget/custom/baseview/c;

    move-result-object p1

    .line 2345
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->d:Landroid/content/res/ColorStateList;

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->a(Landroid/content/res/ColorStateList;)I

    move-result v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/c;->d(I)V

    .line 2346
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->e:Landroid/content/res/ColorStateList;

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->a(Landroid/content/res/ColorStateList;)I

    move-result v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/c;->e(I)V

    .line 2348
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->d:Landroid/content/res/ColorStateList;

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->a(Landroid/content/res/ColorStateList;)I

    move-result v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/c;->f(I)V

    .line 2349
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->e:Landroid/content/res/ColorStateList;

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->a(Landroid/content/res/ColorStateList;)I

    move-result v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/c;->g(I)V

    .line 2351
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->z:Lcom/mbridge/msdk/widget/custom/baseview/d;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/c;->a(Lcom/mbridge/msdk/widget/custom/baseview/d;)V

    .line 2353
    invoke-virtual {p1}, Lcom/mbridge/msdk/widget/custom/baseview/c;->a()V

    goto/16 :goto_0

    :cond_2
    if-lez p1, :cond_4

    .line 516
    iget-object p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->k:Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;

    sget-object v0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;->b:Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;

    if-ne p1, v0, :cond_3

    .line 3302
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->getWidth()I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->setWidth(I)V

    .line 3304
    iget p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->s:F

    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->getHeight()I

    move-result v0

    int-to-float v0, v0

    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->getWidth()I

    move-result v1

    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->getHeight()I

    move-result v2

    invoke-direct {p0, p1, v0, v1, v2}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->a(FFII)Lcom/mbridge/msdk/widget/custom/baseview/c;

    move-result-object p1

    .line 3306
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->d:Landroid/content/res/ColorStateList;

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->a(Landroid/content/res/ColorStateList;)I

    move-result v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/c;->d(I)V

    .line 3307
    iget v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->l:I

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/c;->e(I)V

    .line 3309
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->d:Landroid/content/res/ColorStateList;

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->a(Landroid/content/res/ColorStateList;)I

    move-result v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/c;->f(I)V

    .line 3310
    iget v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->n:I

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/c;->g(I)V

    .line 3312
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->y:Lcom/mbridge/msdk/widget/custom/baseview/d;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/c;->a(Lcom/mbridge/msdk/widget/custom/baseview/d;)V

    .line 3314
    invoke-virtual {p1}, Lcom/mbridge/msdk/widget/custom/baseview/c;->a()V

    goto/16 :goto_0

    .line 518
    :cond_3
    iget-object p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->k:Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;

    sget-object v0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;->a:Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;

    if-ne p1, v0, :cond_9

    .line 519
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->invalidate()V

    goto/16 :goto_0

    :cond_4
    const/4 v0, -0x1

    if-ne p1, v0, :cond_6

    .line 522
    iget-object p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->k:Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;

    sget-object v0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;->a:Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;

    if-ne p1, v0, :cond_5

    .line 3427
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->getHeight()I

    move-result p1

    int-to-float p1, p1

    iget v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->s:F

    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->getHeight()I

    move-result v1

    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->getWidth()I

    move-result v2

    invoke-direct {p0, p1, v0, v1, v2}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->a(FFII)Lcom/mbridge/msdk/widget/custom/baseview/c;

    move-result-object p1

    .line 3429
    iget v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->l:I

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/c;->d(I)V

    .line 3430
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->f:Landroid/content/res/ColorStateList;

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->a(Landroid/content/res/ColorStateList;)I

    move-result v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/c;->e(I)V

    .line 3432
    iget v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->m:I

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/c;->f(I)V

    .line 3433
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->f:Landroid/content/res/ColorStateList;

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->a(Landroid/content/res/ColorStateList;)I

    move-result v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/c;->g(I)V

    .line 3434
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->B:Lcom/mbridge/msdk/widget/custom/baseview/d;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/c;->a(Lcom/mbridge/msdk/widget/custom/baseview/d;)V

    .line 3436
    invoke-virtual {p1}, Lcom/mbridge/msdk/widget/custom/baseview/c;->a()V

    goto/16 :goto_0

    .line 524
    :cond_5
    iget-object p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->k:Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;

    sget-object v0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;->b:Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;

    if-ne p1, v0, :cond_9

    .line 4412
    invoke-direct {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->c()Lcom/mbridge/msdk/widget/custom/baseview/c;

    move-result-object p1

    .line 4414
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->d:Landroid/content/res/ColorStateList;

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->a(Landroid/content/res/ColorStateList;)I

    move-result v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/c;->d(I)V

    .line 4415
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->f:Landroid/content/res/ColorStateList;

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->a(Landroid/content/res/ColorStateList;)I

    move-result v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/c;->e(I)V

    .line 4417
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->d:Landroid/content/res/ColorStateList;

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->a(Landroid/content/res/ColorStateList;)I

    move-result v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/c;->f(I)V

    .line 4418
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->f:Landroid/content/res/ColorStateList;

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->a(Landroid/content/res/ColorStateList;)I

    move-result v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/c;->g(I)V

    .line 4420
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->B:Lcom/mbridge/msdk/widget/custom/baseview/d;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/c;->a(Lcom/mbridge/msdk/widget/custom/baseview/d;)V

    .line 4422
    invoke-virtual {p1}, Lcom/mbridge/msdk/widget/custom/baseview/c;->a()V

    goto/16 :goto_0

    :cond_6
    if-nez p1, :cond_9

    .line 528
    iget-object p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->k:Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;

    sget-object v0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;->c:Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;

    if-ne p1, v0, :cond_7

    .line 5371
    invoke-direct {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->c()Lcom/mbridge/msdk/widget/custom/baseview/c;

    move-result-object p1

    .line 5373
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->e:Landroid/content/res/ColorStateList;

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->a(Landroid/content/res/ColorStateList;)I

    move-result v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/c;->d(I)V

    .line 5374
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->d:Landroid/content/res/ColorStateList;

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->a(Landroid/content/res/ColorStateList;)I

    move-result v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/c;->e(I)V

    .line 5376
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->e:Landroid/content/res/ColorStateList;

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->a(Landroid/content/res/ColorStateList;)I

    move-result v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/c;->f(I)V

    .line 5377
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->d:Landroid/content/res/ColorStateList;

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->a(Landroid/content/res/ColorStateList;)I

    move-result v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/c;->g(I)V

    .line 5379
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->A:Lcom/mbridge/msdk/widget/custom/baseview/d;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/c;->a(Lcom/mbridge/msdk/widget/custom/baseview/d;)V

    .line 5381
    invoke-virtual {p1}, Lcom/mbridge/msdk/widget/custom/baseview/c;->a()V

    goto/16 :goto_0

    .line 530
    :cond_7
    iget-object p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->k:Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;

    sget-object v0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;->a:Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;

    if-ne p1, v0, :cond_8

    .line 531
    iget-boolean p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->t:Z

    if-eqz p1, :cond_9

    .line 5453
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->getHeight()I

    move-result p1

    int-to-float p1, p1

    iget v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->s:F

    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->getHeight()I

    move-result v1

    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->getWidth()I

    move-result v2

    invoke-direct {p0, p1, v0, v1, v2}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->a(FFII)Lcom/mbridge/msdk/widget/custom/baseview/c;

    move-result-object p1

    .line 5455
    iget v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->l:I

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/c;->d(I)V

    .line 5456
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->d:Landroid/content/res/ColorStateList;

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->a(Landroid/content/res/ColorStateList;)I

    move-result v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/c;->e(I)V

    .line 5458
    iget v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->m:I

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/c;->f(I)V

    .line 5459
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->d:Landroid/content/res/ColorStateList;

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->a(Landroid/content/res/ColorStateList;)I

    move-result v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/c;->g(I)V

    .line 5460
    new-instance v0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$5;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$5;-><init>(Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;)V

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/c;->a(Lcom/mbridge/msdk/widget/custom/baseview/d;)V

    .line 5470
    invoke-virtual {p1}, Lcom/mbridge/msdk/widget/custom/baseview/c;->a()V

    goto :goto_0

    .line 534
    :cond_8
    iget-object p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->k:Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;

    sget-object v0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;->d:Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton$a;

    if-ne p1, v0, :cond_9

    .line 6386
    invoke-direct {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->c()Lcom/mbridge/msdk/widget/custom/baseview/c;

    move-result-object p1

    .line 6388
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->f:Landroid/content/res/ColorStateList;

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->a(Landroid/content/res/ColorStateList;)I

    move-result v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/c;->d(I)V

    .line 6389
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->d:Landroid/content/res/ColorStateList;

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->a(Landroid/content/res/ColorStateList;)I

    move-result v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/c;->e(I)V

    .line 6391
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->f:Landroid/content/res/ColorStateList;

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->a(Landroid/content/res/ColorStateList;)I

    move-result v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/c;->f(I)V

    .line 6392
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->d:Landroid/content/res/ColorStateList;

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->a(Landroid/content/res/ColorStateList;)I

    move-result v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/c;->g(I)V

    .line 6394
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->A:Lcom/mbridge/msdk/widget/custom/baseview/d;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/c;->a(Lcom/mbridge/msdk/widget/custom/baseview/d;)V

    .line 6396
    invoke-virtual {p1}, Lcom/mbridge/msdk/widget/custom/baseview/c;->a()V

    :cond_9
    :goto_0
    return-void
.end method

.method public setStrokeColor(I)V
    .locals 1

    .line 549
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->a:Lcom/mbridge/msdk/widget/custom/baseview/f;

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/widget/custom/baseview/f;->b(I)V

    return-void
.end method

.method protected verifyDrawable(Landroid/graphics/drawable/Drawable;)Z
    .locals 1

    .line 254
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->b:Lcom/mbridge/msdk/widget/custom/baseview/a;

    if-eq p1, v0, :cond_1

    invoke-super {p0, p1}, Landroid/support/v7/widget/AppCompatButton;->verifyDrawable(Landroid/graphics/drawable/Drawable;)Z

    move-result p1

    if-eqz p1, :cond_0

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 p1, 0x1

    :goto_1
    return p1
.end method
