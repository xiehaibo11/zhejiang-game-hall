.class public Lcom/tkay/expressad/splash/view/TYSplashPopView;
.super Landroid/widget/RelativeLayout;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/splash/view/TYSplashPopView$a;,
        Lcom/tkay/expressad/splash/view/TYSplashPopView$b;
    }
.end annotation


# static fields
.field public static final TYPE_POP_DEFAULT:I = 0x1

.field public static final TYPE_POP_LARGE:I = 0x4

.field public static final TYPE_POP_MEDIUM:I = 0x3

.field public static final TYPE_POP_SMALL:I = 0x2

.field private static final c:Ljava/lang/String; = "TYSplashPopView"

.field private static final d:Ljava/util/concurrent/atomic/AtomicInteger;


# instance fields
.field a:Landroid/view/View$OnClickListener;

.field b:Landroid/view/View$OnClickListener;

.field private e:Ljava/lang/String;

.field private f:Ljava/lang/String;

.field private g:I

.field private h:Lcom/tkay/expressad/foundation/d/c;

.field private i:Lcom/tkay/expressad/splash/d/d;

.field private j:Landroid/widget/ImageView;

.field private k:Landroid/widget/ImageView;

.field private l:Landroid/widget/ImageView;

.field private m:Landroid/widget/ImageView;

.field private n:Landroid/widget/TextView;

.field private o:Landroid/widget/TextView;

.field private p:Landroid/widget/TextView;

.field private q:I

.field private r:Landroid/os/Handler;

.field private s:Z

.field private t:Lcom/tkay/expressad/a/a;

.field private u:Ljava/lang/Runnable;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 51
    new-instance v0, Ljava/util/concurrent/atomic/AtomicInteger;

    const/4 v1, 0x1

    invoke-direct {v0, v1}, Ljava/util/concurrent/atomic/AtomicInteger;-><init>(I)V

    sput-object v0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->d:Ljava/util/concurrent/atomic/AtomicInteger;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    .line 89
    invoke-direct {p0, p1}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    const/4 p1, 0x1

    .line 55
    iput p1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->g:I

    const/4 v0, -0x1

    .line 68
    iput v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->q:I

    .line 69
    new-instance v0, Landroid/os/Handler;

    invoke-direct {v0}, Landroid/os/Handler;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->r:Landroid/os/Handler;

    const/4 v0, 0x0

    .line 71
    iput-boolean v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->s:Z

    .line 555
    new-instance v0, Lcom/tkay/expressad/splash/view/TYSplashPopView$4;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView$4;-><init>(Lcom/tkay/expressad/splash/view/TYSplashPopView;)V

    iput-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->u:Ljava/lang/Runnable;

    .line 576
    new-instance v0, Lcom/tkay/expressad/splash/view/TYSplashPopView$5;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView$5;-><init>(Lcom/tkay/expressad/splash/view/TYSplashPopView;)V

    iput-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->a:Landroid/view/View$OnClickListener;

    .line 585
    new-instance v0, Lcom/tkay/expressad/splash/view/TYSplashPopView$6;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView$6;-><init>(Lcom/tkay/expressad/splash/view/TYSplashPopView;)V

    iput-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->b:Landroid/view/View$OnClickListener;

    .line 90
    iput p1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->g:I

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 95
    invoke-direct {p0, p1, p2}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const/4 p1, 0x1

    .line 55
    iput p1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->g:I

    const/4 p2, -0x1

    .line 68
    iput p2, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->q:I

    .line 69
    new-instance p2, Landroid/os/Handler;

    invoke-direct {p2}, Landroid/os/Handler;-><init>()V

    iput-object p2, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->r:Landroid/os/Handler;

    const/4 p2, 0x0

    .line 71
    iput-boolean p2, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->s:Z

    .line 555
    new-instance p2, Lcom/tkay/expressad/splash/view/TYSplashPopView$4;

    invoke-direct {p2, p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView$4;-><init>(Lcom/tkay/expressad/splash/view/TYSplashPopView;)V

    iput-object p2, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->u:Ljava/lang/Runnable;

    .line 576
    new-instance p2, Lcom/tkay/expressad/splash/view/TYSplashPopView$5;

    invoke-direct {p2, p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView$5;-><init>(Lcom/tkay/expressad/splash/view/TYSplashPopView;)V

    iput-object p2, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->a:Landroid/view/View$OnClickListener;

    .line 585
    new-instance p2, Lcom/tkay/expressad/splash/view/TYSplashPopView$6;

    invoke-direct {p2, p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView$6;-><init>(Lcom/tkay/expressad/splash/view/TYSplashPopView;)V

    iput-object p2, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->b:Landroid/view/View$OnClickListener;

    .line 96
    iput p1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->g:I

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    .line 101
    invoke-direct {p0, p1, p2, p3}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    const/4 p1, 0x1

    .line 55
    iput p1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->g:I

    const/4 p2, -0x1

    .line 68
    iput p2, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->q:I

    .line 69
    new-instance p2, Landroid/os/Handler;

    invoke-direct {p2}, Landroid/os/Handler;-><init>()V

    iput-object p2, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->r:Landroid/os/Handler;

    const/4 p2, 0x0

    .line 71
    iput-boolean p2, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->s:Z

    .line 555
    new-instance p2, Lcom/tkay/expressad/splash/view/TYSplashPopView$4;

    invoke-direct {p2, p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView$4;-><init>(Lcom/tkay/expressad/splash/view/TYSplashPopView;)V

    iput-object p2, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->u:Ljava/lang/Runnable;

    .line 576
    new-instance p2, Lcom/tkay/expressad/splash/view/TYSplashPopView$5;

    invoke-direct {p2, p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView$5;-><init>(Lcom/tkay/expressad/splash/view/TYSplashPopView;)V

    iput-object p2, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->a:Landroid/view/View$OnClickListener;

    .line 585
    new-instance p2, Lcom/tkay/expressad/splash/view/TYSplashPopView$6;

    invoke-direct {p2, p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView$6;-><init>(Lcom/tkay/expressad/splash/view/TYSplashPopView;)V

    iput-object p2, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->b:Landroid/view/View$OnClickListener;

    .line 102
    iput p1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->g:I

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;II)V
    .locals 0

    .line 108
    invoke-direct {p0, p1, p2, p3, p4}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;II)V

    const/4 p1, 0x1

    .line 55
    iput p1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->g:I

    const/4 p2, -0x1

    .line 68
    iput p2, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->q:I

    .line 69
    new-instance p2, Landroid/os/Handler;

    invoke-direct {p2}, Landroid/os/Handler;-><init>()V

    iput-object p2, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->r:Landroid/os/Handler;

    const/4 p2, 0x0

    .line 71
    iput-boolean p2, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->s:Z

    .line 555
    new-instance p2, Lcom/tkay/expressad/splash/view/TYSplashPopView$4;

    invoke-direct {p2, p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView$4;-><init>(Lcom/tkay/expressad/splash/view/TYSplashPopView;)V

    iput-object p2, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->u:Ljava/lang/Runnable;

    .line 576
    new-instance p2, Lcom/tkay/expressad/splash/view/TYSplashPopView$5;

    invoke-direct {p2, p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView$5;-><init>(Lcom/tkay/expressad/splash/view/TYSplashPopView;)V

    iput-object p2, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->a:Landroid/view/View$OnClickListener;

    .line 585
    new-instance p2, Lcom/tkay/expressad/splash/view/TYSplashPopView$6;

    invoke-direct {p2, p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView$6;-><init>(Lcom/tkay/expressad/splash/view/TYSplashPopView;)V

    iput-object p2, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->b:Landroid/view/View$OnClickListener;

    .line 109
    iput p1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->g:I

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Lcom/tkay/expressad/splash/view/TYSplashPopView$a;Lcom/tkay/expressad/splash/d/d;)V
    .locals 0

    .line 76
    invoke-direct {p0, p1}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    const/4 p1, 0x1

    .line 55
    iput p1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->g:I

    const/4 p1, -0x1

    .line 68
    iput p1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->q:I

    .line 69
    new-instance p1, Landroid/os/Handler;

    invoke-direct {p1}, Landroid/os/Handler;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->r:Landroid/os/Handler;

    const/4 p1, 0x0

    .line 71
    iput-boolean p1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->s:Z

    .line 555
    new-instance p1, Lcom/tkay/expressad/splash/view/TYSplashPopView$4;

    invoke-direct {p1, p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView$4;-><init>(Lcom/tkay/expressad/splash/view/TYSplashPopView;)V

    iput-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->u:Ljava/lang/Runnable;

    .line 576
    new-instance p1, Lcom/tkay/expressad/splash/view/TYSplashPopView$5;

    invoke-direct {p1, p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView$5;-><init>(Lcom/tkay/expressad/splash/view/TYSplashPopView;)V

    iput-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->a:Landroid/view/View$OnClickListener;

    .line 585
    new-instance p1, Lcom/tkay/expressad/splash/view/TYSplashPopView$6;

    invoke-direct {p1, p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView$6;-><init>(Lcom/tkay/expressad/splash/view/TYSplashPopView;)V

    iput-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->b:Landroid/view/View$OnClickListener;

    if-eqz p2, :cond_0

    .line 80
    invoke-virtual {p2}, Lcom/tkay/expressad/splash/view/TYSplashPopView$a;->b()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->f:Ljava/lang/String;

    .line 81
    invoke-virtual {p2}, Lcom/tkay/expressad/splash/view/TYSplashPopView$a;->a()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->e:Ljava/lang/String;

    .line 82
    invoke-virtual {p2}, Lcom/tkay/expressad/splash/view/TYSplashPopView$a;->c()I

    move-result p1

    iput p1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->g:I

    .line 83
    invoke-virtual {p2}, Lcom/tkay/expressad/splash/view/TYSplashPopView$a;->d()Lcom/tkay/expressad/foundation/d/c;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->h:Lcom/tkay/expressad/foundation/d/c;

    .line 84
    iput-object p3, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->i:Lcom/tkay/expressad/splash/d/d;

    .line 85
    invoke-direct {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->a()V

    return-void

    .line 78
    :cond_0
    new-instance p1, Ljava/lang/IllegalArgumentException;

    const-string p2, "Parameters is NULL, can\'t gen view."

    invoke-direct {p1, p2}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method static synthetic a(Lcom/tkay/expressad/splash/view/TYSplashPopView;)Landroid/widget/ImageView;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->j:Landroid/widget/ImageView;

    return-object p0
.end method

.method private a()V
    .locals 3

    .line 195
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->h:Lcom/tkay/expressad/foundation/d/c;

    if-nez v0, :cond_0

    return-void

    .line 198
    :cond_0
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v1, -0x1

    const/4 v2, -0x2

    invoke-direct {v0, v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 200
    iget v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->g:I

    const/4 v1, 0x1

    if-eq v0, v1, :cond_4

    const/4 v1, 0x2

    if-eq v0, v1, :cond_3

    const/4 v1, 0x3

    if-eq v0, v1, :cond_2

    const/4 v1, 0x4

    if-eq v0, v1, :cond_1

    goto :goto_0

    .line 214
    :cond_1
    invoke-direct {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->e()V

    :goto_0
    return-void

    .line 210
    :cond_2
    invoke-direct {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->d()V

    return-void

    .line 206
    :cond_3
    invoke-direct {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->c()V

    return-void

    .line 202
    :cond_4
    invoke-direct {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->b()V

    return-void
.end method

.method private a(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 1

    .line 1663
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->i:Lcom/tkay/expressad/splash/d/d;

    if-eqz v0, :cond_0

    .line 1664
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/splash/d/d;->a(Lcom/tkay/expressad/foundation/d/c;)V

    .line 1665
    iget-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->i:Lcom/tkay/expressad/splash/d/d;

    invoke-virtual {p1}, Lcom/tkay/expressad/splash/d/d;->b()V

    :cond_0
    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/splash/view/TYSplashPopView;Lcom/tkay/expressad/foundation/d/c;)V
    .locals 1

    .line 2663
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->i:Lcom/tkay/expressad/splash/d/d;

    if-eqz v0, :cond_0

    .line 2664
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/splash/d/d;->a(Lcom/tkay/expressad/foundation/d/c;)V

    .line 2665
    iget-object p0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->i:Lcom/tkay/expressad/splash/d/d;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/d/d;->b()V

    :cond_0
    return-void
.end method

.method private a(Ljava/lang/String;)V
    .locals 2

    .line 504
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v0

    new-instance v1, Lcom/tkay/expressad/splash/view/TYSplashPopView$2;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView$2;-><init>(Lcom/tkay/expressad/splash/view/TYSplashPopView;)V

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V

    return-void
.end method

.method private a(Ljava/lang/String;Z)V
    .locals 2

    .line 478
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v0

    new-instance v1, Lcom/tkay/expressad/splash/view/TYSplashPopView$1;

    invoke-direct {v1, p0, p2}, Lcom/tkay/expressad/splash/view/TYSplashPopView$1;-><init>(Lcom/tkay/expressad/splash/view/TYSplashPopView;Z)V

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V

    return-void
.end method

.method static synthetic b(Lcom/tkay/expressad/splash/view/TYSplashPopView;)Landroid/widget/ImageView;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->k:Landroid/widget/ImageView;

    return-object p0
.end method

.method private b()V
    .locals 7

    .line 220
    new-instance v0, Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    .line 221
    new-instance v1, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v3, 0x42a00000    # 80.0f

    invoke-static {v2, v3}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v2

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-static {v4, v3}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v3

    invoke-direct {v1, v2, v3}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v2, 0x9

    .line 222
    invoke-virtual {v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 223
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v3, 0x41800000    # 16.0f

    invoke-static {v2, v3}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v2

    iput v2, v1, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    .line 224
    invoke-static {}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->generateViewId()I

    move-result v2

    invoke-virtual {v0, v2}, Landroid/widget/ImageView;->setId(I)V

    .line 225
    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 227
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/b/b;->a()Ljava/lang/String;

    move-result-object v2

    const-string v4, "drawable"

    const-string v5, "tkay_splash_popview_default"

    invoke-virtual {v1, v5, v4, v2}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    .line 228
    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setBackgroundResource(I)V

    .line 230
    new-instance v1, Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    iput-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->j:Landroid/widget/ImageView;

    .line 231
    new-instance v1, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v5, 0x42700000    # 60.0f

    invoke-static {v2, v5}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v2

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v6

    invoke-static {v6, v5}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v5

    invoke-direct {v1, v2, v5}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 232
    invoke-virtual {v0}, Landroid/widget/ImageView;->getId()I

    move-result v2

    const/4 v5, 0x6

    invoke-virtual {v1, v5, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 233
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v5, 0x40e00000    # 7.0f

    invoke-static {v2, v5}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v2

    iput v2, v1, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    .line 234
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v5, 0x41200000    # 10.0f

    invoke-static {v2, v5}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v2

    iput v2, v1, Landroid/widget/RelativeLayout$LayoutParams;->leftMargin:I

    .line 235
    iget-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->j:Landroid/widget/ImageView;

    invoke-static {}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->generateViewId()I

    move-result v6

    invoke-virtual {v2, v6}, Landroid/widget/ImageView;->setId(I)V

    .line 236
    iget-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->j:Landroid/widget/ImageView;

    invoke-virtual {v2, v1}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 237
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->j:Landroid/widget/ImageView;

    sget-object v2, Landroid/widget/ImageView$ScaleType;->FIT_CENTER:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {v1, v2}, Landroid/widget/ImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 239
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->h:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v1, :cond_0

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->bd()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 240
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->h:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->bd()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x1

    invoke-direct {p0, v1, v2}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->a(Ljava/lang/String;Z)V

    .line 243
    :cond_0
    new-instance v1, Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    iput-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->p:Landroid/widget/TextView;

    .line 244
    new-instance v1, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v2, -0x2

    invoke-direct {v1, v2, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/4 v2, 0x5

    .line 245
    invoke-virtual {v0}, Landroid/widget/ImageView;->getId()I

    move-result v6

    invoke-virtual {v1, v2, v6}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    const/16 v2, 0x8

    .line 246
    invoke-virtual {v0}, Landroid/widget/ImageView;->getId()I

    move-result v6

    invoke-virtual {v1, v2, v6}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 247
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v6, 0x42780000    # 62.0f

    invoke-static {v2, v6}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v2

    iput v2, v1, Landroid/widget/RelativeLayout$LayoutParams;->leftMargin:I

    .line 248
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v6, 0x428c0000    # 70.0f

    invoke-static {v2, v6}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v2

    iput v2, v1, Landroid/widget/RelativeLayout$LayoutParams;->bottomMargin:I

    .line 249
    iget-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->p:Landroid/widget/TextView;

    invoke-static {}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->generateViewId()I

    move-result v6

    invoke-virtual {v2, v6}, Landroid/widget/TextView;->setId(I)V

    .line 250
    iget-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->p:Landroid/widget/TextView;

    invoke-virtual {v2, v5}, Landroid/widget/TextView;->setTextSize(F)V

    .line 251
    iget-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->p:Landroid/widget/TextView;

    const/4 v5, -0x1

    invoke-virtual {v2, v5}, Landroid/widget/TextView;->setTextColor(I)V

    .line 252
    iget-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->p:Landroid/widget/TextView;

    const/16 v5, 0x11

    invoke-virtual {v2, v5}, Landroid/widget/TextView;->setGravity(I)V

    .line 253
    iget-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->p:Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-static {v5, v3}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v5

    invoke-virtual {v2, v5}, Landroid/widget/TextView;->setMinWidth(I)V

    .line 254
    iget-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->p:Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-static {v5, v3}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v3

    invoke-virtual {v2, v3}, Landroid/widget/TextView;->setMaxHeight(I)V

    .line 255
    iget-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->p:Landroid/widget/TextView;

    invoke-virtual {v2, v1}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 256
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->p:Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/b/b;->a()Ljava/lang/String;

    move-result-object v3

    const-string v5, "tkay_cm_circle_50black"

    invoke-virtual {v2, v5, v4, v3}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setBackgroundResource(I)V

    .line 258
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->addView(Landroid/view/View;)V

    .line 259
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->p:Landroid/widget/TextView;

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->addView(Landroid/view/View;)V

    .line 260
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->j:Landroid/widget/ImageView;

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->addView(Landroid/view/View;)V

    .line 262
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->h:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->u()I

    move-result v0

    if-gtz v0, :cond_1

    .line 263
    invoke-direct {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->g()V

    .line 266
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->a:Landroid/view/View$OnClickListener;

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 267
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->p:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->b:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method private b(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 1

    .line 663
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->i:Lcom/tkay/expressad/splash/d/d;

    if-eqz v0, :cond_0

    .line 664
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/splash/d/d;->a(Lcom/tkay/expressad/foundation/d/c;)V

    .line 665
    iget-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->i:Lcom/tkay/expressad/splash/d/d;

    invoke-virtual {p1}, Lcom/tkay/expressad/splash/d/d;->b()V

    :cond_0
    return-void
.end method

.method private b(Ljava/lang/String;)V
    .locals 2

    .line 524
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v0

    new-instance v1, Lcom/tkay/expressad/splash/view/TYSplashPopView$3;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView$3;-><init>(Lcom/tkay/expressad/splash/view/TYSplashPopView;)V

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V

    return-void
.end method

.method static synthetic c(Lcom/tkay/expressad/splash/view/TYSplashPopView;)Landroid/widget/TextView;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->p:Landroid/widget/TextView;

    return-object p0
.end method

.method private c()V
    .locals 6

    .line 271
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v0

    const/high16 v1, 0x40800000    # 4.0f

    invoke-static {v0, v1}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v0

    .line 273
    new-instance v2, Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-direct {v2, v3}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    iput-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->j:Landroid/widget/ImageView;

    .line 274
    new-instance v2, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v3

    const/high16 v4, 0x41e00000    # 28.0f

    invoke-static {v3, v4}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v3

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-static {v5, v4}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v4

    invoke-direct {v2, v3, v4}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v3, 0x9

    .line 275
    invoke-virtual {v2, v3}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 276
    iget-object v3, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->j:Landroid/widget/ImageView;

    invoke-static {}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->generateViewId()I

    move-result v4

    invoke-virtual {v3, v4}, Landroid/widget/ImageView;->setId(I)V

    .line 277
    iget-object v3, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->j:Landroid/widget/ImageView;

    invoke-virtual {v3, v2}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 278
    iget-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->j:Landroid/widget/ImageView;

    invoke-virtual {v2, v0, v0, v0, v0}, Landroid/widget/ImageView;->setPadding(IIII)V

    .line 279
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->j:Landroid/widget/ImageView;

    sget-object v2, Landroid/widget/ImageView$ScaleType;->CENTER_INSIDE:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {v0, v2}, Landroid/widget/ImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 280
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->h:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->bd()Ljava/lang/String;

    move-result-object v0

    const/4 v2, 0x0

    invoke-direct {p0, v0, v2}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->a(Ljava/lang/String;Z)V

    .line 282
    new-instance v0, Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v0, v2}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->n:Landroid/widget/TextView;

    .line 283
    invoke-static {}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->generateViewId()I

    move-result v2

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setId(I)V

    .line 284
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v2, -0x2

    invoke-direct {v0, v2, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 285
    iget-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->j:Landroid/widget/ImageView;

    invoke-virtual {v2}, Landroid/widget/ImageView;->getId()I

    move-result v2

    const/4 v3, 0x1

    invoke-virtual {v0, v3, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 286
    iget-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->j:Landroid/widget/ImageView;

    invoke-virtual {v2}, Landroid/widget/ImageView;->getId()I

    move-result v2

    const/4 v4, 0x6

    invoke-virtual {v0, v4, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 287
    iget-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->j:Landroid/widget/ImageView;

    invoke-virtual {v2}, Landroid/widget/ImageView;->getId()I

    move-result v2

    const/16 v4, 0x8

    invoke-virtual {v0, v4, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 288
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2, v1}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v1

    iput v1, v0, Landroid/widget/RelativeLayout$LayoutParams;->leftMargin:I

    .line 289
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x42200000    # 40.0f

    invoke-static {v1, v2}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v1

    iput v1, v0, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 290
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->n:Landroid/widget/TextView;

    invoke-virtual {v1, v0}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 291
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->n:Landroid/widget/TextView;

    const/16 v1, 0x10

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setGravity(I)V

    .line 292
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->n:Landroid/widget/TextView;

    const/high16 v1, 0x41200000    # 10.0f

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setTextSize(F)V

    .line 293
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->n:Landroid/widget/TextView;

    invoke-virtual {v0, v3}, Landroid/widget/TextView;->setSelected(Z)V

    .line 294
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->n:Landroid/widget/TextView;

    sget-object v1, Landroid/text/TextUtils$TruncateAt;->MARQUEE:Landroid/text/TextUtils$TruncateAt;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setEllipsize(Landroid/text/TextUtils$TruncateAt;)V

    .line 295
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->n:Landroid/widget/TextView;

    const/4 v1, -0x1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setMarqueeRepeatLimit(I)V

    .line 296
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->n:Landroid/widget/TextView;

    invoke-virtual {v0, v3}, Landroid/widget/TextView;->setSingleLine(Z)V

    .line 297
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->n:Landroid/widget/TextView;

    const/high16 v1, -0x1000000

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setTextColor(I)V

    .line 298
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->n:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->h:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->bb()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 300
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/b/b;->a()Ljava/lang/String;

    move-result-object v1

    const-string v2, "tkay_shape_corners_bg"

    const-string v3, "drawable"

    invoke-virtual {v0, v2, v3, v1}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->setBackgroundResource(I)V

    .line 302
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->j:Landroid/widget/ImageView;

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->addView(Landroid/view/View;)V

    .line 303
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->n:Landroid/widget/TextView;

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->addView(Landroid/view/View;)V

    .line 304
    invoke-direct {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->f()V

    .line 306
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->a:Landroid/view/View$OnClickListener;

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method static synthetic d(Lcom/tkay/expressad/splash/view/TYSplashPopView;)I
    .locals 0

    .line 35
    iget p0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->q:I

    return p0
.end method

.method private d()V
    .locals 9

    .line 310
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v0

    const/high16 v1, 0x40800000    # 4.0f

    invoke-static {v0, v1}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v0

    .line 312
    new-instance v2, Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-direct {v2, v3}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    iput-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->j:Landroid/widget/ImageView;

    .line 313
    new-instance v2, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v3

    const/high16 v4, 0x42480000    # 50.0f

    invoke-static {v3, v4}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v3

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-static {v5, v4}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v4

    invoke-direct {v2, v3, v4}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v3, 0x9

    .line 314
    invoke-virtual {v2, v3}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 315
    iget-object v3, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->j:Landroid/widget/ImageView;

    invoke-static {}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->generateViewId()I

    move-result v4

    invoke-virtual {v3, v4}, Landroid/widget/ImageView;->setId(I)V

    .line 316
    iget-object v3, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->j:Landroid/widget/ImageView;

    invoke-virtual {v3, v2}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 317
    iget-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->j:Landroid/widget/ImageView;

    sget-object v3, Landroid/widget/ImageView$ScaleType;->CENTER_INSIDE:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {v2, v3}, Landroid/widget/ImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 318
    iget-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->j:Landroid/widget/ImageView;

    invoke-virtual {v2, v0, v0, v0, v0}, Landroid/widget/ImageView;->setPadding(IIII)V

    .line 319
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->h:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->bd()Ljava/lang/String;

    move-result-object v0

    const/4 v2, 0x0

    invoke-direct {p0, v0, v2}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->a(Ljava/lang/String;Z)V

    .line 321
    new-instance v0, Landroid/widget/RelativeLayout;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v0, v2}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    .line 322
    new-instance v2, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v3, -0x1

    const/4 v4, -0x2

    invoke-direct {v2, v3, v4}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 323
    iget-object v5, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->j:Landroid/widget/ImageView;

    invoke-virtual {v5}, Landroid/widget/ImageView;->getId()I

    move-result v5

    const/4 v6, 0x1

    invoke-virtual {v2, v6, v5}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 324
    iget-object v5, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->j:Landroid/widget/ImageView;

    invoke-virtual {v5}, Landroid/widget/ImageView;->getId()I

    move-result v5

    const/4 v7, 0x6

    invoke-virtual {v2, v7, v5}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 325
    iget-object v5, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->j:Landroid/widget/ImageView;

    invoke-virtual {v5}, Landroid/widget/ImageView;->getId()I

    move-result v5

    const/16 v7, 0x8

    invoke-virtual {v2, v7, v5}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 326
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v5

    const/high16 v7, 0x41000000    # 8.0f

    invoke-static {v5, v7}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v5

    iput v5, v2, Landroid/widget/RelativeLayout$LayoutParams;->leftMargin:I

    .line 327
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-static {v5, v7}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v5

    iput v5, v2, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 328
    invoke-virtual {v0, v2}, Landroid/widget/RelativeLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    const/16 v2, 0x10

    .line 329
    invoke-virtual {v0, v2}, Landroid/widget/RelativeLayout;->setGravity(I)V

    .line 331
    new-instance v5, Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v8

    invoke-direct {v5, v8}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    iput-object v5, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->n:Landroid/widget/TextView;

    .line 332
    invoke-static {}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->generateViewId()I

    move-result v8

    invoke-virtual {v5, v8}, Landroid/widget/TextView;->setId(I)V

    .line 333
    iget-object v5, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->n:Landroid/widget/TextView;

    new-instance v8, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v8, v4, v4}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v5, v8}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 334
    iget-object v5, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->n:Landroid/widget/TextView;

    invoke-virtual {v5, v2}, Landroid/widget/TextView;->setGravity(I)V

    .line 335
    iget-object v5, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->n:Landroid/widget/TextView;

    const/high16 v8, 0x41400000    # 12.0f

    invoke-virtual {v5, v8}, Landroid/widget/TextView;->setTextSize(F)V

    .line 336
    iget-object v5, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->n:Landroid/widget/TextView;

    invoke-virtual {v5, v6}, Landroid/widget/TextView;->setSelected(Z)V

    .line 337
    iget-object v5, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->n:Landroid/widget/TextView;

    sget-object v8, Landroid/text/TextUtils$TruncateAt;->MARQUEE:Landroid/text/TextUtils$TruncateAt;

    invoke-virtual {v5, v8}, Landroid/widget/TextView;->setEllipsize(Landroid/text/TextUtils$TruncateAt;)V

    .line 338
    iget-object v5, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->n:Landroid/widget/TextView;

    invoke-virtual {v5, v3}, Landroid/widget/TextView;->setMarqueeRepeatLimit(I)V

    .line 339
    iget-object v5, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->n:Landroid/widget/TextView;

    invoke-virtual {v5, v6}, Landroid/widget/TextView;->setSingleLine(Z)V

    .line 340
    iget-object v5, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->n:Landroid/widget/TextView;

    const/high16 v8, -0x1000000

    invoke-virtual {v5, v8}, Landroid/widget/TextView;->setTextColor(I)V

    .line 341
    iget-object v5, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->n:Landroid/widget/TextView;

    iget-object v8, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->h:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v8}, Lcom/tkay/expressad/foundation/d/c;->bb()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v5, v8}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 343
    new-instance v5, Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v8

    invoke-direct {v5, v8}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    iput-object v5, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->o:Landroid/widget/TextView;

    .line 344
    invoke-static {}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->generateViewId()I

    move-result v8

    invoke-virtual {v5, v8}, Landroid/widget/TextView;->setId(I)V

    .line 345
    new-instance v5, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v5, v4, v4}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 346
    iget-object v4, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->n:Landroid/widget/TextView;

    invoke-virtual {v4}, Landroid/widget/TextView;->getId()I

    move-result v4

    const/4 v8, 0x5

    invoke-virtual {v5, v8, v4}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 347
    iget-object v4, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->n:Landroid/widget/TextView;

    invoke-virtual {v4}, Landroid/widget/TextView;->getId()I

    move-result v4

    const/4 v8, 0x3

    invoke-virtual {v5, v8, v4}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 348
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-static {v4, v1}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v1

    iput v1, v5, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    .line 349
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v1

    const/high16 v4, 0x42100000    # 36.0f

    invoke-static {v1, v4}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v1

    iput v1, v5, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 350
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->o:Landroid/widget/TextView;

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setGravity(I)V

    .line 351
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->o:Landroid/widget/TextView;

    invoke-virtual {v1, v5}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 352
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->o:Landroid/widget/TextView;

    invoke-virtual {v1, v7}, Landroid/widget/TextView;->setTextSize(F)V

    .line 353
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->o:Landroid/widget/TextView;

    const v2, -0x99999a

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setTextColor(I)V

    .line 354
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->o:Landroid/widget/TextView;

    sget-object v2, Landroid/text/TextUtils$TruncateAt;->MARQUEE:Landroid/text/TextUtils$TruncateAt;

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setEllipsize(Landroid/text/TextUtils$TruncateAt;)V

    .line 355
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->o:Landroid/widget/TextView;

    invoke-virtual {v1, v3}, Landroid/widget/TextView;->setMarqueeRepeatLimit(I)V

    .line 356
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->o:Landroid/widget/TextView;

    invoke-virtual {v1, v6}, Landroid/widget/TextView;->setSelected(Z)V

    .line 357
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->o:Landroid/widget/TextView;

    invoke-virtual {v1, v6}, Landroid/widget/TextView;->setSingleLine(Z)V

    .line 358
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->o:Landroid/widget/TextView;

    iget-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->h:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->bc()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 360
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->n:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;)V

    .line 361
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->o:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;)V

    .line 363
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/b/b;->a()Ljava/lang/String;

    move-result-object v2

    const-string v3, "tkay_shape_corners_bg"

    const-string v4, "drawable"

    invoke-virtual {v1, v3, v4, v2}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p0, v1}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->setBackgroundResource(I)V

    .line 365
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->j:Landroid/widget/ImageView;

    invoke-virtual {p0, v1}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->addView(Landroid/view/View;)V

    .line 366
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->addView(Landroid/view/View;)V

    .line 367
    invoke-direct {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->f()V

    .line 369
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->a:Landroid/view/View$OnClickListener;

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method static synthetic e(Lcom/tkay/expressad/splash/view/TYSplashPopView;)I
    .locals 1

    const/4 v0, -0x1

    .line 35
    iput v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->q:I

    return v0
.end method

.method private e()V
    .locals 9

    .line 373
    new-instance v0, Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->l:Landroid/widget/ImageView;

    .line 374
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x43030000    # 131.0f

    invoke-static {v1, v2}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v1

    const/4 v3, -0x1

    invoke-direct {v0, v3, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v1, 0xa

    .line 375
    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    const/16 v4, 0xe

    .line 376
    invoke-virtual {v0, v4}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 377
    iget-object v5, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->l:Landroid/widget/ImageView;

    sget-object v6, Landroid/widget/ImageView$ScaleType;->FIT_XY:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {v5, v6}, Landroid/widget/ImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 378
    iget-object v5, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->l:Landroid/widget/ImageView;

    invoke-static {}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->generateViewId()I

    move-result v6

    invoke-virtual {v5, v6}, Landroid/widget/ImageView;->setId(I)V

    .line 379
    iget-object v5, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->l:Landroid/widget/ImageView;

    invoke-virtual {v5, v0}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 380
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->h:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->be()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->a(Ljava/lang/String;)V

    .line 382
    new-instance v0, Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-direct {v0, v5}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->k:Landroid/widget/ImageView;

    .line 383
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-static {v5, v2}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v2

    const/4 v5, -0x2

    invoke-direct {v0, v5, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 384
    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 385
    invoke-virtual {v0, v4}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 386
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->k:Landroid/widget/ImageView;

    sget-object v2, Landroid/widget/ImageView$ScaleType;->FIT_CENTER:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {v1, v2}, Landroid/widget/ImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 387
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->k:Landroid/widget/ImageView;

    invoke-static {}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->generateViewId()I

    move-result v2

    invoke-virtual {v1, v2}, Landroid/widget/ImageView;->setId(I)V

    .line 388
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->k:Landroid/widget/ImageView;

    invoke-virtual {v1, v0}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 389
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->h:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->be()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->b(Ljava/lang/String;)V

    .line 391
    new-instance v0, Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->j:Landroid/widget/ImageView;

    .line 392
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x42480000    # 50.0f

    invoke-static {v1, v2}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v1

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-static {v4, v2}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v2

    invoke-direct {v0, v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v1, 0x9

    .line 393
    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 394
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->l:Landroid/widget/ImageView;

    invoke-virtual {v1}, Landroid/widget/ImageView;->getId()I

    move-result v1

    const/4 v2, 0x3

    invoke-virtual {v0, v2, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    const/16 v1, 0x14

    .line 395
    iput v1, v0, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    .line 396
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->j:Landroid/widget/ImageView;

    sget-object v4, Landroid/widget/ImageView$ScaleType;->CENTER_INSIDE:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {v1, v4}, Landroid/widget/ImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 397
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->j:Landroid/widget/ImageView;

    invoke-static {}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->generateViewId()I

    move-result v4

    invoke-virtual {v1, v4}, Landroid/widget/ImageView;->setId(I)V

    .line 398
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->j:Landroid/widget/ImageView;

    invoke-virtual {v1, v0}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 399
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->h:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->bd()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    invoke-direct {p0, v0, v1}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->a(Ljava/lang/String;Z)V

    .line 401
    new-instance v0, Landroid/widget/RelativeLayout;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    .line 402
    new-instance v1, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v1, v3, v5}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 403
    iget-object v4, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->j:Landroid/widget/ImageView;

    invoke-virtual {v4}, Landroid/widget/ImageView;->getId()I

    move-result v4

    const/4 v6, 0x1

    invoke-virtual {v1, v6, v4}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 404
    iget-object v4, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->j:Landroid/widget/ImageView;

    invoke-virtual {v4}, Landroid/widget/ImageView;->getId()I

    move-result v4

    const/4 v7, 0x6

    invoke-virtual {v1, v7, v4}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 405
    iget-object v4, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->j:Landroid/widget/ImageView;

    invoke-virtual {v4}, Landroid/widget/ImageView;->getId()I

    move-result v4

    const/16 v7, 0x8

    invoke-virtual {v1, v7, v4}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 406
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v4

    const/high16 v7, 0x41000000    # 8.0f

    invoke-static {v4, v7}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v4

    iput v4, v1, Landroid/widget/RelativeLayout$LayoutParams;->leftMargin:I

    .line 407
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-static {v4, v7}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v4

    iput v4, v1, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 408
    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    const/16 v1, 0x10

    .line 409
    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setGravity(I)V

    .line 411
    new-instance v4, Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v8

    invoke-direct {v4, v8}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    iput-object v4, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->n:Landroid/widget/TextView;

    .line 412
    invoke-static {}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->generateViewId()I

    move-result v8

    invoke-virtual {v4, v8}, Landroid/widget/TextView;->setId(I)V

    .line 413
    iget-object v4, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->n:Landroid/widget/TextView;

    invoke-virtual {v4, v1}, Landroid/widget/TextView;->setGravity(I)V

    .line 414
    iget-object v4, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->n:Landroid/widget/TextView;

    new-instance v8, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v8, v5, v5}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v4, v8}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 415
    iget-object v4, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->n:Landroid/widget/TextView;

    const/high16 v8, 0x41400000    # 12.0f

    invoke-virtual {v4, v8}, Landroid/widget/TextView;->setTextSize(F)V

    .line 416
    iget-object v4, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->n:Landroid/widget/TextView;

    const/high16 v8, -0x1000000

    invoke-virtual {v4, v8}, Landroid/widget/TextView;->setTextColor(I)V

    .line 417
    iget-object v4, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->n:Landroid/widget/TextView;

    sget-object v8, Landroid/text/TextUtils$TruncateAt;->MARQUEE:Landroid/text/TextUtils$TruncateAt;

    invoke-virtual {v4, v8}, Landroid/widget/TextView;->setEllipsize(Landroid/text/TextUtils$TruncateAt;)V

    .line 418
    iget-object v4, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->n:Landroid/widget/TextView;

    invoke-virtual {v4, v3}, Landroid/widget/TextView;->setMarqueeRepeatLimit(I)V

    .line 419
    iget-object v4, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->n:Landroid/widget/TextView;

    invoke-virtual {v4, v6}, Landroid/widget/TextView;->setSelected(Z)V

    .line 420
    iget-object v4, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->n:Landroid/widget/TextView;

    invoke-virtual {v4, v6}, Landroid/widget/TextView;->setSingleLine(Z)V

    .line 421
    iget-object v4, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->n:Landroid/widget/TextView;

    iget-object v8, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->h:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v8}, Lcom/tkay/expressad/foundation/d/c;->bb()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v4, v8}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 423
    new-instance v4, Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v8

    invoke-direct {v4, v8}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    iput-object v4, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->o:Landroid/widget/TextView;

    .line 424
    invoke-static {}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->generateViewId()I

    move-result v8

    invoke-virtual {v4, v8}, Landroid/widget/TextView;->setId(I)V

    .line 425
    new-instance v4, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v4, v5, v5}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 426
    iget-object v5, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->n:Landroid/widget/TextView;

    invoke-virtual {v5}, Landroid/widget/TextView;->getId()I

    move-result v5

    const/4 v8, 0x5

    invoke-virtual {v4, v8, v5}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 427
    iget-object v5, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->n:Landroid/widget/TextView;

    invoke-virtual {v5}, Landroid/widget/TextView;->getId()I

    move-result v5

    invoke-virtual {v4, v2, v5}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 428
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v5, 0x40800000    # 4.0f

    invoke-static {v2, v5}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v2

    iput v2, v4, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    .line 429
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v5, 0x42100000    # 36.0f

    invoke-static {v2, v5}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v2

    iput v2, v4, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 430
    iget-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->o:Landroid/widget/TextView;

    invoke-virtual {v2, v1}, Landroid/widget/TextView;->setGravity(I)V

    .line 431
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->o:Landroid/widget/TextView;

    invoke-virtual {v1, v4}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 432
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->o:Landroid/widget/TextView;

    invoke-virtual {v1, v7}, Landroid/widget/TextView;->setTextSize(F)V

    .line 433
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->o:Landroid/widget/TextView;

    const v2, -0x99999a

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setTextColor(I)V

    .line 434
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->o:Landroid/widget/TextView;

    sget-object v2, Landroid/text/TextUtils$TruncateAt;->MARQUEE:Landroid/text/TextUtils$TruncateAt;

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setEllipsize(Landroid/text/TextUtils$TruncateAt;)V

    .line 435
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->o:Landroid/widget/TextView;

    invoke-virtual {v1, v3}, Landroid/widget/TextView;->setMarqueeRepeatLimit(I)V

    .line 436
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->o:Landroid/widget/TextView;

    invoke-virtual {v1, v6}, Landroid/widget/TextView;->setSelected(Z)V

    .line 437
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->o:Landroid/widget/TextView;

    invoke-virtual {v1, v6}, Landroid/widget/TextView;->setSingleLine(Z)V

    .line 438
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->o:Landroid/widget/TextView;

    iget-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->h:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->bc()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 440
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->n:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;)V

    .line 441
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->o:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;)V

    .line 443
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->l:Landroid/widget/ImageView;

    invoke-virtual {p0, v1}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->addView(Landroid/view/View;)V

    .line 444
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->k:Landroid/widget/ImageView;

    invoke-virtual {p0, v1}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->addView(Landroid/view/View;)V

    .line 445
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->j:Landroid/widget/ImageView;

    invoke-virtual {p0, v1}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->addView(Landroid/view/View;)V

    .line 446
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->addView(Landroid/view/View;)V

    .line 447
    invoke-direct {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->f()V

    .line 449
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->a:Landroid/view/View$OnClickListener;

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method private f()V
    .locals 5

    const-string v0, "ZH"

    .line 453
    new-instance v1, Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    iput-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->m:Landroid/widget/ImageView;

    .line 454
    new-instance v1, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v3, 0x42000000    # 32.0f

    invoke-static {v2, v3}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v2

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v3

    const/high16 v4, 0x41500000    # 13.0f

    invoke-static {v3, v4}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v3

    invoke-direct {v1, v2, v3}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v2, 0xb

    .line 455
    invoke-virtual {v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 456
    iget-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->j:Landroid/widget/ImageView;

    invoke-virtual {v2}, Landroid/widget/ImageView;->getId()I

    move-result v2

    const/16 v3, 0x8

    invoke-virtual {v1, v3, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 457
    iget-object v2, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->m:Landroid/widget/ImageView;

    invoke-virtual {v2, v1}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 461
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object v1

    iget-object v1, v1, Landroid/content/res/Configuration;->locale:Ljava/util/Locale;

    invoke-virtual {v1}, Ljava/util/Locale;->getLanguage()Ljava/lang/String;

    move-result-object v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    .line 463
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-object v1, v0

    .line 467
    :goto_0
    invoke-virtual {v1}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object v2

    const-string v3, "CN"

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    const-string v3, "drawable"

    if-nez v2, :cond_1

    invoke-virtual {v1}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_1

    .line 470
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/b/b;->a()Ljava/lang/String;

    move-result-object v1

    const-string v2, "tkay_splash_ad_en"

    invoke-virtual {v0, v2, v3, v1}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    goto :goto_2

    .line 468
    :cond_1
    :goto_1
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/b/b;->a()Ljava/lang/String;

    move-result-object v1

    const-string v2, "tkay_splash_ad"

    invoke-virtual {v0, v2, v3, v1}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 472
    :goto_2
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->m:Landroid/widget/ImageView;

    invoke-virtual {v1, v0}, Landroid/widget/ImageView;->setBackgroundResource(I)V

    .line 474
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->m:Landroid/widget/ImageView;

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->addView(Landroid/view/View;)V

    return-void
.end method

.method static synthetic f(Lcom/tkay/expressad/splash/view/TYSplashPopView;)V
    .locals 0

    .line 35
    invoke-direct {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->g()V

    return-void
.end method

.method static synthetic g(Lcom/tkay/expressad/splash/view/TYSplashPopView;)Ljava/lang/Runnable;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->u:Ljava/lang/Runnable;

    return-object p0
.end method

.method private g()V
    .locals 4

    .line 670
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->p:Landroid/widget/TextView;

    if-eqz v0, :cond_0

    .line 671
    invoke-virtual {v0}, Landroid/widget/TextView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    .line 672
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x41800000    # 16.0f

    invoke-static {v1, v2}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v1

    iput v1, v0, Landroid/view/ViewGroup$LayoutParams;->width:I

    .line 673
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1, v2}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v1

    iput v1, v0, Landroid/view/ViewGroup$LayoutParams;->height:I

    .line 674
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->p:Landroid/widget/TextView;

    invoke-virtual {v1, v0}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 675
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->p:Landroid/widget/TextView;

    const-string v1, ""

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 677
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/b/b;->a()Ljava/lang/String;

    move-result-object v1

    const-string v2, "tkay_splash_popview_close"

    const-string v3, "drawable"

    invoke-virtual {v0, v2, v3, v1}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 678
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->p:Landroid/widget/TextView;

    invoke-virtual {v1, v0}, Landroid/widget/TextView;->setBackgroundResource(I)V

    :cond_0
    return-void
.end method

.method public static generateViewId()I
    .locals 3

    .line 546
    :cond_0
    sget-object v0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->d:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    add-int/lit8 v1, v0, 0x1

    const v2, 0xffffff

    if-le v1, v2, :cond_1

    const/4 v1, 0x1

    .line 549
    :cond_1
    sget-object v2, Lcom/tkay/expressad/splash/view/TYSplashPopView;->d:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v2, v0, v1}, Ljava/util/concurrent/atomic/AtomicInteger;->compareAndSet(II)Z

    move-result v1

    if-eqz v1, :cond_0

    return v0
.end method

.method static synthetic h(Lcom/tkay/expressad/splash/view/TYSplashPopView;)Landroid/os/Handler;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->r:Landroid/os/Handler;

    return-object p0
.end method

.method static synthetic i(Lcom/tkay/expressad/splash/view/TYSplashPopView;)Lcom/tkay/expressad/splash/d/d;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->i:Lcom/tkay/expressad/splash/d/d;

    return-object p0
.end method

.method static synthetic j(Lcom/tkay/expressad/splash/view/TYSplashPopView;)I
    .locals 2

    .line 35
    iget v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->q:I

    add-int/lit8 v1, v0, -0x1

    iput v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->q:I

    return v0
.end method

.method static synthetic k(Lcom/tkay/expressad/splash/view/TYSplashPopView;)Lcom/tkay/expressad/foundation/d/c;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->h:Lcom/tkay/expressad/foundation/d/c;

    return-object p0
.end method


# virtual methods
.method protected onAttachedToWindow()V
    .locals 1

    .line 115
    invoke-super {p0}, Landroid/widget/RelativeLayout;->onAttachedToWindow()V

    .line 116
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->i:Lcom/tkay/expressad/splash/d/d;

    if-eqz v0, :cond_0

    .line 117
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getWidth()I

    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->getHeight()I

    :cond_0
    return-void
.end method

.method protected onDetachedFromWindow()V
    .locals 0

    .line 123
    invoke-super {p0}, Landroid/widget/RelativeLayout;->onDetachedFromWindow()V

    .line 124
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->release()V

    return-void
.end method

.method public pauseCountDown()V
    .locals 2

    const/4 v0, 0x1

    .line 176
    iput-boolean v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->s:Z

    .line 177
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->p:Landroid/widget/TextView;

    if-eqz v0, :cond_0

    .line 178
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->r:Landroid/os/Handler;

    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->u:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    :cond_0
    return-void
.end method

.method public reStartCountDown()V
    .locals 4

    .line 160
    iget-boolean v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->s:Z

    if-eqz v0, :cond_2

    const/4 v0, 0x0

    .line 161
    iput-boolean v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->s:Z

    .line 163
    iget v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->q:I

    const/4 v1, -0x1

    if-eq v0, v1, :cond_1

    if-nez v0, :cond_0

    goto :goto_0

    .line 168
    :cond_0
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->p:Landroid/widget/TextView;

    if-eqz v1, :cond_2

    .line 169
    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 170
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->r:Landroid/os/Handler;

    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->u:Ljava/lang/Runnable;

    const-wide/16 v2, 0x3e8

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    goto :goto_1

    .line 164
    :cond_1
    :goto_0
    invoke-direct {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->g()V

    :cond_2
    :goto_1
    return-void
.end method

.method public release()V
    .locals 2

    .line 184
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->r:Landroid/os/Handler;

    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->u:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    const/4 v0, 0x0

    .line 185
    iput-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->u:Ljava/lang/Runnable;

    .line 186
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->detachAllViewsFromParent()V

    .line 187
    iput-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->h:Lcom/tkay/expressad/foundation/d/c;

    .line 188
    iput-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->i:Lcom/tkay/expressad/splash/d/d;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 190
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public setPopViewType(Lcom/tkay/expressad/splash/view/TYSplashPopView$a;Lcom/tkay/expressad/splash/d/d;)V
    .locals 1

    if-eqz p1, :cond_0

    .line 132
    invoke-virtual {p1}, Lcom/tkay/expressad/splash/view/TYSplashPopView$a;->b()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->f:Ljava/lang/String;

    .line 133
    invoke-virtual {p1}, Lcom/tkay/expressad/splash/view/TYSplashPopView$a;->a()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->e:Ljava/lang/String;

    .line 134
    invoke-virtual {p1}, Lcom/tkay/expressad/splash/view/TYSplashPopView$a;->c()I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->g:I

    .line 135
    invoke-virtual {p1}, Lcom/tkay/expressad/splash/view/TYSplashPopView$a;->d()Lcom/tkay/expressad/foundation/d/c;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->h:Lcom/tkay/expressad/foundation/d/c;

    .line 136
    iput-object p2, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->i:Lcom/tkay/expressad/splash/d/d;

    .line 137
    invoke-direct {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->a()V

    return-void

    .line 129
    :cond_0
    new-instance p1, Ljava/lang/IllegalArgumentException;

    const-string p2, "Parameters is NULL, can\'t gen view."

    invoke-direct {p1, p2}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public startCountDown()V
    .locals 4

    .line 141
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->r:Landroid/os/Handler;

    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->u:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 143
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->h:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_1

    iget v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->g:I

    const/4 v2, 0x1

    if-ne v1, v2, :cond_1

    .line 144
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->u()I

    move-result v0

    if-lez v0, :cond_0

    .line 146
    iput v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->q:I

    .line 152
    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->p:Landroid/widget/TextView;

    if-eqz v1, :cond_1

    .line 153
    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 154
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->r:Landroid/os/Handler;

    iget-object v1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView;->u:Ljava/lang/Runnable;

    const-wide/16 v2, 0x3e8

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    goto :goto_0

    .line 148
    :cond_0
    invoke-direct {p0}, Lcom/tkay/expressad/splash/view/TYSplashPopView;->g()V

    :cond_1
    :goto_0
    return-void
.end method
