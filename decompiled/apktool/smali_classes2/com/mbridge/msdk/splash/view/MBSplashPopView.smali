.class public Lcom/mbridge/msdk/splash/view/MBSplashPopView;
.super Landroid/widget/RelativeLayout;
.source "MBSplashPopView.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/splash/view/MBSplashPopView$a;
    }
.end annotation


# static fields
.field public static final TYPE_POP_DEFAULT:I = 0x1

.field public static final TYPE_POP_LARGE:I = 0x4

.field public static final TYPE_POP_MEDIUM:I = 0x3

.field public static final TYPE_POP_SMALL:I = 0x2

.field private static final c:Ljava/util/concurrent/atomic/AtomicInteger;


# instance fields
.field a:Landroid/view/View$OnClickListener;

.field b:Landroid/view/View$OnClickListener;

.field private d:Ljava/lang/String;

.field private e:Ljava/lang/String;

.field private f:I

.field private g:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field private h:Lcom/mbridge/msdk/splash/d/d;

.field private i:Landroid/widget/ImageView;

.field private j:Landroid/widget/ImageView;

.field private k:Landroid/widget/ImageView;

.field private l:Landroid/widget/ImageView;

.field private m:Landroid/widget/TextView;

.field private n:Landroid/widget/TextView;

.field private o:Landroid/widget/TextView;

.field private p:I

.field private q:Landroid/os/Handler;

.field private r:Z

.field private s:Lcom/mbridge/msdk/click/b;

.field private t:Lcom/mbridge/msdk/click/h;

.field private u:Ljava/lang/Runnable;

.field private v:Ljava/lang/Runnable;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 60
    new-instance v0, Ljava/util/concurrent/atomic/AtomicInteger;

    const/4 v1, 0x1

    invoke-direct {v0, v1}, Ljava/util/concurrent/atomic/AtomicInteger;-><init>(I)V

    sput-object v0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->c:Ljava/util/concurrent/atomic/AtomicInteger;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    .line 138
    invoke-direct {p0, p1}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    const/4 p1, 0x1

    .line 64
    iput p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->f:I

    const/4 v0, -0x1

    .line 77
    iput v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->p:I

    .line 78
    new-instance v0, Landroid/os/Handler;

    invoke-direct {v0}, Landroid/os/Handler;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->q:Landroid/os/Handler;

    const/4 v0, 0x0

    .line 80
    iput-boolean v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->r:Z

    .line 83
    new-instance v0, Lcom/mbridge/msdk/splash/view/MBSplashPopView$1;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView$1;-><init>(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)V

    iput-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->t:Lcom/mbridge/msdk/click/h;

    .line 605
    new-instance v0, Lcom/mbridge/msdk/splash/view/MBSplashPopView$6;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView$6;-><init>(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)V

    iput-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->u:Ljava/lang/Runnable;

    .line 626
    new-instance v0, Lcom/mbridge/msdk/splash/view/MBSplashPopView$7;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView$7;-><init>(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)V

    iput-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->v:Ljava/lang/Runnable;

    .line 635
    new-instance v0, Lcom/mbridge/msdk/splash/view/MBSplashPopView$8;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView$8;-><init>(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)V

    iput-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->a:Landroid/view/View$OnClickListener;

    .line 644
    new-instance v0, Lcom/mbridge/msdk/splash/view/MBSplashPopView$9;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView$9;-><init>(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)V

    iput-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->b:Landroid/view/View$OnClickListener;

    .line 139
    iput p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->f:I

    const-string p1, "MBSplashPopView"

    const-string v0, "Please call setPopViewType() to init."

    .line 140
    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 144
    invoke-direct {p0, p1, p2}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const/4 p1, 0x1

    .line 64
    iput p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->f:I

    const/4 p2, -0x1

    .line 77
    iput p2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->p:I

    .line 78
    new-instance p2, Landroid/os/Handler;

    invoke-direct {p2}, Landroid/os/Handler;-><init>()V

    iput-object p2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->q:Landroid/os/Handler;

    const/4 p2, 0x0

    .line 80
    iput-boolean p2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->r:Z

    .line 83
    new-instance p2, Lcom/mbridge/msdk/splash/view/MBSplashPopView$1;

    invoke-direct {p2, p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView$1;-><init>(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)V

    iput-object p2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->t:Lcom/mbridge/msdk/click/h;

    .line 605
    new-instance p2, Lcom/mbridge/msdk/splash/view/MBSplashPopView$6;

    invoke-direct {p2, p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView$6;-><init>(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)V

    iput-object p2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->u:Ljava/lang/Runnable;

    .line 626
    new-instance p2, Lcom/mbridge/msdk/splash/view/MBSplashPopView$7;

    invoke-direct {p2, p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView$7;-><init>(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)V

    iput-object p2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->v:Ljava/lang/Runnable;

    .line 635
    new-instance p2, Lcom/mbridge/msdk/splash/view/MBSplashPopView$8;

    invoke-direct {p2, p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView$8;-><init>(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)V

    iput-object p2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->a:Landroid/view/View$OnClickListener;

    .line 644
    new-instance p2, Lcom/mbridge/msdk/splash/view/MBSplashPopView$9;

    invoke-direct {p2, p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView$9;-><init>(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)V

    iput-object p2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->b:Landroid/view/View$OnClickListener;

    .line 145
    iput p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->f:I

    const-string p1, "MBSplashPopView"

    const-string p2, "Please call setPopViewType() to init."

    .line 146
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    .line 150
    invoke-direct {p0, p1, p2, p3}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    const/4 p1, 0x1

    .line 64
    iput p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->f:I

    const/4 p2, -0x1

    .line 77
    iput p2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->p:I

    .line 78
    new-instance p2, Landroid/os/Handler;

    invoke-direct {p2}, Landroid/os/Handler;-><init>()V

    iput-object p2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->q:Landroid/os/Handler;

    const/4 p2, 0x0

    .line 80
    iput-boolean p2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->r:Z

    .line 83
    new-instance p2, Lcom/mbridge/msdk/splash/view/MBSplashPopView$1;

    invoke-direct {p2, p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView$1;-><init>(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)V

    iput-object p2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->t:Lcom/mbridge/msdk/click/h;

    .line 605
    new-instance p2, Lcom/mbridge/msdk/splash/view/MBSplashPopView$6;

    invoke-direct {p2, p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView$6;-><init>(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)V

    iput-object p2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->u:Ljava/lang/Runnable;

    .line 626
    new-instance p2, Lcom/mbridge/msdk/splash/view/MBSplashPopView$7;

    invoke-direct {p2, p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView$7;-><init>(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)V

    iput-object p2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->v:Ljava/lang/Runnable;

    .line 635
    new-instance p2, Lcom/mbridge/msdk/splash/view/MBSplashPopView$8;

    invoke-direct {p2, p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView$8;-><init>(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)V

    iput-object p2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->a:Landroid/view/View$OnClickListener;

    .line 644
    new-instance p2, Lcom/mbridge/msdk/splash/view/MBSplashPopView$9;

    invoke-direct {p2, p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView$9;-><init>(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)V

    iput-object p2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->b:Landroid/view/View$OnClickListener;

    .line 151
    iput p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->f:I

    const-string p1, "MBSplashPopView"

    const-string p2, "Please call setPopViewType() to init."

    .line 152
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;II)V
    .locals 0

    .line 157
    invoke-direct {p0, p1, p2, p3, p4}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;II)V

    const/4 p1, 0x1

    .line 64
    iput p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->f:I

    const/4 p2, -0x1

    .line 77
    iput p2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->p:I

    .line 78
    new-instance p2, Landroid/os/Handler;

    invoke-direct {p2}, Landroid/os/Handler;-><init>()V

    iput-object p2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->q:Landroid/os/Handler;

    const/4 p2, 0x0

    .line 80
    iput-boolean p2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->r:Z

    .line 83
    new-instance p2, Lcom/mbridge/msdk/splash/view/MBSplashPopView$1;

    invoke-direct {p2, p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView$1;-><init>(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)V

    iput-object p2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->t:Lcom/mbridge/msdk/click/h;

    .line 605
    new-instance p2, Lcom/mbridge/msdk/splash/view/MBSplashPopView$6;

    invoke-direct {p2, p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView$6;-><init>(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)V

    iput-object p2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->u:Ljava/lang/Runnable;

    .line 626
    new-instance p2, Lcom/mbridge/msdk/splash/view/MBSplashPopView$7;

    invoke-direct {p2, p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView$7;-><init>(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)V

    iput-object p2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->v:Ljava/lang/Runnable;

    .line 635
    new-instance p2, Lcom/mbridge/msdk/splash/view/MBSplashPopView$8;

    invoke-direct {p2, p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView$8;-><init>(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)V

    iput-object p2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->a:Landroid/view/View$OnClickListener;

    .line 644
    new-instance p2, Lcom/mbridge/msdk/splash/view/MBSplashPopView$9;

    invoke-direct {p2, p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView$9;-><init>(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)V

    iput-object p2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->b:Landroid/view/View$OnClickListener;

    .line 158
    iput p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->f:I

    const-string p1, "MBSplashPopView"

    const-string p2, "Please call setPopViewType() to init."

    .line 159
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Lcom/mbridge/msdk/splash/view/MBSplashPopView$a;Lcom/mbridge/msdk/splash/d/d;)V
    .locals 0

    .line 125
    invoke-direct {p0, p1}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    const/4 p1, 0x1

    .line 64
    iput p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->f:I

    const/4 p1, -0x1

    .line 77
    iput p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->p:I

    .line 78
    new-instance p1, Landroid/os/Handler;

    invoke-direct {p1}, Landroid/os/Handler;-><init>()V

    iput-object p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->q:Landroid/os/Handler;

    const/4 p1, 0x0

    .line 80
    iput-boolean p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->r:Z

    .line 83
    new-instance p1, Lcom/mbridge/msdk/splash/view/MBSplashPopView$1;

    invoke-direct {p1, p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView$1;-><init>(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)V

    iput-object p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->t:Lcom/mbridge/msdk/click/h;

    .line 605
    new-instance p1, Lcom/mbridge/msdk/splash/view/MBSplashPopView$6;

    invoke-direct {p1, p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView$6;-><init>(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)V

    iput-object p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->u:Ljava/lang/Runnable;

    .line 626
    new-instance p1, Lcom/mbridge/msdk/splash/view/MBSplashPopView$7;

    invoke-direct {p1, p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView$7;-><init>(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)V

    iput-object p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->v:Ljava/lang/Runnable;

    .line 635
    new-instance p1, Lcom/mbridge/msdk/splash/view/MBSplashPopView$8;

    invoke-direct {p1, p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView$8;-><init>(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)V

    iput-object p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->a:Landroid/view/View$OnClickListener;

    .line 644
    new-instance p1, Lcom/mbridge/msdk/splash/view/MBSplashPopView$9;

    invoke-direct {p1, p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView$9;-><init>(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)V

    iput-object p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->b:Landroid/view/View$OnClickListener;

    if-eqz p2, :cond_0

    .line 129
    invoke-virtual {p2}, Lcom/mbridge/msdk/splash/view/MBSplashPopView$a;->b()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->e:Ljava/lang/String;

    .line 130
    invoke-virtual {p2}, Lcom/mbridge/msdk/splash/view/MBSplashPopView$a;->a()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->d:Ljava/lang/String;

    .line 131
    invoke-virtual {p2}, Lcom/mbridge/msdk/splash/view/MBSplashPopView$a;->c()I

    move-result p1

    iput p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->f:I

    .line 132
    invoke-virtual {p2}, Lcom/mbridge/msdk/splash/view/MBSplashPopView$a;->d()Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->g:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 133
    iput-object p3, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->h:Lcom/mbridge/msdk/splash/d/d;

    .line 134
    invoke-direct {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->a()V

    return-void

    .line 127
    :cond_0
    new-instance p1, Ljava/lang/IllegalArgumentException;

    const-string p2, "Parameters is NULL, can\'t gen view."

    invoke-direct {p1, p2}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method static synthetic a(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)I
    .locals 0

    .line 44
    iget p0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->f:I

    return p0
.end method

.method static synthetic a(Lcom/mbridge/msdk/splash/view/MBSplashPopView;I)I
    .locals 0

    .line 44
    iput p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->p:I

    return p1
.end method

.method private a()V
    .locals 3

    .line 245
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->g:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-nez v0, :cond_0

    return-void

    .line 248
    :cond_0
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v1, -0x1

    const/4 v2, -0x2

    invoke-direct {v0, v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 250
    iget v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->f:I

    const/4 v1, 0x1

    if-eq v0, v1, :cond_4

    const/4 v1, 0x2

    if-eq v0, v1, :cond_3

    const/4 v1, 0x3

    if-eq v0, v1, :cond_2

    const/4 v1, 0x4

    if-eq v0, v1, :cond_1

    goto :goto_0

    .line 264
    :cond_1
    invoke-direct {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->e()V

    goto :goto_0

    .line 260
    :cond_2
    invoke-direct {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->d()V

    goto :goto_0

    .line 256
    :cond_3
    invoke-direct {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->c()V

    goto :goto_0

    .line 252
    :cond_4
    invoke-direct {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->b()V

    :goto_0
    return-void
.end method

.method private a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 3

    .line 712
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->s:Lcom/mbridge/msdk/click/b;

    if-nez v0, :cond_0

    .line 713
    new-instance v0, Lcom/mbridge/msdk/click/b;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->e:Ljava/lang/String;

    invoke-direct {v0, v1, v2}, Lcom/mbridge/msdk/click/b;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->s:Lcom/mbridge/msdk/click/b;

    .line 714
    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->t:Lcom/mbridge/msdk/click/h;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/h;)V

    .line 716
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->e:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCampaignUnitId(Ljava/lang/String;)V

    .line 717
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->s:Lcom/mbridge/msdk/click/b;

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/click/b;->c(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 718
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isReportClick()Z

    move-result v0

    if-nez v0, :cond_1

    const/4 v0, 0x1

    .line 719
    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setReportClick(Z)V

    .line 720
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, p1}, Lcom/mbridge/msdk/splash/e/a;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 722
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->h:Lcom/mbridge/msdk/splash/d/d;

    if-eqz p1, :cond_2

    .line 723
    new-instance v0, Lcom/mbridge/msdk/out/MBridgeIds;

    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->d:Ljava/lang/String;

    iget-object v2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->e:Ljava/lang/String;

    invoke-direct {v0, v1, v2}, Lcom/mbridge/msdk/out/MBridgeIds;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/splash/d/d;->b(Lcom/mbridge/msdk/out/MBridgeIds;)V

    .line 724
    iget-object p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->h:Lcom/mbridge/msdk/splash/d/d;

    new-instance v0, Lcom/mbridge/msdk/out/MBridgeIds;

    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->d:Ljava/lang/String;

    iget-object v2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->e:Ljava/lang/String;

    invoke-direct {v0, v1, v2}, Lcom/mbridge/msdk/out/MBridgeIds;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v1, 0x6

    invoke-virtual {p1, v0, v1}, Lcom/mbridge/msdk/splash/d/d;->a(Lcom/mbridge/msdk/out/MBridgeIds;I)V

    :cond_2
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/splash/view/MBSplashPopView;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 4

    .line 1658
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->e:Ljava/lang/String;

    invoke-static {p1, v0}, Lcom/mbridge/msdk/splash/e/a;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;)V

    if-eqz p1, :cond_1

    .line 1659
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->needShowIDialog()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 1660
    new-instance v0, Lcom/mbridge/msdk/splash/view/MBSplashPopView$10;

    invoke-direct {v0, p0, p1}, Lcom/mbridge/msdk/splash/view/MBSplashPopView$10;-><init>(Lcom/mbridge/msdk/splash/view/MBSplashPopView;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 1675
    invoke-static {p1}, Lcom/mbridge/msdk/click/c;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->needShowIDialog()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 1676
    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->s:Lcom/mbridge/msdk/click/b;

    if-nez v1, :cond_0

    .line 1677
    new-instance v1, Lcom/mbridge/msdk/click/b;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->e:Ljava/lang/String;

    invoke-direct {v1, v2, v3}, Lcom/mbridge/msdk/click/b;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    iput-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->s:Lcom/mbridge/msdk/click/b;

    .line 1679
    :cond_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v1

    .line 1680
    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getHandler()Landroid/os/Handler;

    move-result-object v2

    new-instance v3, Lcom/mbridge/msdk/splash/view/MBSplashPopView$2;

    invoke-direct {v3, p0, p1, v1, v0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView$2;-><init>(Lcom/mbridge/msdk/splash/view/MBSplashPopView;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Lcom/mbridge/msdk/widget/dialog/a;)V

    invoke-virtual {v2, v3}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 1705
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MBSplashPopView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1706
    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->reStartCountDown()V

    .line 1708
    :cond_1
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    :goto_0
    return-void
.end method

.method private a(Ljava/lang/String;)V
    .locals 2

    .line 554
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/same/c/b;

    move-result-object v0

    new-instance v1, Lcom/mbridge/msdk/splash/view/MBSplashPopView$4;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView$4;-><init>(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)V

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/same/c/c;)V

    return-void
.end method

.method private a(Ljava/lang/String;Z)V
    .locals 2

    .line 528
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/same/c/b;

    move-result-object v0

    new-instance v1, Lcom/mbridge/msdk/splash/view/MBSplashPopView$3;

    invoke-direct {v1, p0, p2}, Lcom/mbridge/msdk/splash/view/MBSplashPopView$3;-><init>(Lcom/mbridge/msdk/splash/view/MBSplashPopView;Z)V

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/same/c/c;)V

    return-void
.end method

.method static synthetic b(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)Landroid/widget/ImageView;
    .locals 0

    .line 44
    iget-object p0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->i:Landroid/widget/ImageView;

    return-object p0
.end method

.method private b()V
    .locals 7

    .line 270
    new-instance v0, Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    .line 271
    new-instance v1, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v3, 0x42a00000    # 80.0f

    invoke-static {v2, v3}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v2

    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-static {v4, v3}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v3

    invoke-direct {v1, v2, v3}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v2, 0x9

    .line 272
    invoke-virtual {v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 273
    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v3, 0x41800000    # 16.0f

    invoke-static {v2, v3}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v2

    iput v2, v1, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    .line 274
    invoke-static {}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->generateViewId()I

    move-result v2

    invoke-virtual {v0, v2}, Landroid/widget/ImageView;->setId(I)V

    .line 275
    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 277
    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->d()Ljava/lang/String;

    move-result-object v2

    const-string v4, "drawable"

    const-string v5, "mbridge_splash_popview_default"

    invoke-virtual {v1, v5, v4, v2}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    .line 278
    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setBackgroundResource(I)V

    .line 280
    new-instance v1, Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    iput-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->i:Landroid/widget/ImageView;

    .line 281
    new-instance v1, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v5, 0x42700000    # 60.0f

    invoke-static {v2, v5}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v2

    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v6

    invoke-static {v6, v5}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v5

    invoke-direct {v1, v2, v5}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 282
    invoke-virtual {v0}, Landroid/widget/ImageView;->getId()I

    move-result v2

    const/4 v5, 0x6

    invoke-virtual {v1, v5, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 283
    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v5, 0x40e00000    # 7.0f

    invoke-static {v2, v5}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v2

    iput v2, v1, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    .line 284
    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v5, 0x41200000    # 10.0f

    invoke-static {v2, v5}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v2

    iput v2, v1, Landroid/widget/RelativeLayout$LayoutParams;->leftMargin:I

    .line 285
    iget-object v2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->i:Landroid/widget/ImageView;

    invoke-static {}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->generateViewId()I

    move-result v6

    invoke-virtual {v2, v6}, Landroid/widget/ImageView;->setId(I)V

    .line 286
    iget-object v2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->i:Landroid/widget/ImageView;

    invoke-virtual {v2, v1}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 287
    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->i:Landroid/widget/ImageView;

    sget-object v2, Landroid/widget/ImageView$ScaleType;->FIT_CENTER:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {v1, v2}, Landroid/widget/ImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 289
    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->g:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v1, :cond_0

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getIconUrl()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 290
    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->g:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getIconUrl()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x1

    invoke-direct {p0, v1, v2}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->a(Ljava/lang/String;Z)V

    .line 293
    :cond_0
    new-instance v1, Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    iput-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->o:Landroid/widget/TextView;

    .line 294
    new-instance v1, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v2, -0x2

    invoke-direct {v1, v2, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/4 v2, 0x5

    .line 295
    invoke-virtual {v0}, Landroid/widget/ImageView;->getId()I

    move-result v6

    invoke-virtual {v1, v2, v6}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    const/16 v2, 0x8

    .line 296
    invoke-virtual {v0}, Landroid/widget/ImageView;->getId()I

    move-result v6

    invoke-virtual {v1, v2, v6}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 297
    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v6, 0x42780000    # 62.0f

    invoke-static {v2, v6}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v2

    iput v2, v1, Landroid/widget/RelativeLayout$LayoutParams;->leftMargin:I

    .line 298
    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v6, 0x428c0000    # 70.0f

    invoke-static {v2, v6}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v2

    iput v2, v1, Landroid/widget/RelativeLayout$LayoutParams;->bottomMargin:I

    .line 299
    iget-object v2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->o:Landroid/widget/TextView;

    invoke-static {}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->generateViewId()I

    move-result v6

    invoke-virtual {v2, v6}, Landroid/widget/TextView;->setId(I)V

    .line 300
    iget-object v2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->o:Landroid/widget/TextView;

    invoke-virtual {v2, v5}, Landroid/widget/TextView;->setTextSize(F)V

    .line 301
    iget-object v2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->o:Landroid/widget/TextView;

    const/4 v5, -0x1

    invoke-virtual {v2, v5}, Landroid/widget/TextView;->setTextColor(I)V

    .line 302
    iget-object v2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->o:Landroid/widget/TextView;

    const/16 v5, 0x11

    invoke-virtual {v2, v5}, Landroid/widget/TextView;->setGravity(I)V

    .line 303
    iget-object v2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->o:Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-static {v5, v3}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v5

    invoke-virtual {v2, v5}, Landroid/widget/TextView;->setMinWidth(I)V

    .line 304
    iget-object v2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->o:Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-static {v5, v3}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v3

    invoke-virtual {v2, v3}, Landroid/widget/TextView;->setMaxHeight(I)V

    .line 305
    iget-object v2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->o:Landroid/widget/TextView;

    invoke-virtual {v2, v1}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 306
    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->o:Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/controller/a;->d()Ljava/lang/String;

    move-result-object v3

    const-string v5, "mbridge_cm_circle_50black"

    invoke-virtual {v2, v5, v4, v3}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setBackgroundResource(I)V

    .line 308
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->addView(Landroid/view/View;)V

    .line 309
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->o:Landroid/widget/TextView;

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->addView(Landroid/view/View;)V

    .line 310
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->i:Landroid/widget/ImageView;

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->addView(Landroid/view/View;)V

    .line 312
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->g:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getFlbSkipTime()I

    move-result v0

    if-gtz v0, :cond_1

    .line 313
    invoke-direct {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->g()V

    .line 316
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->a:Landroid/view/View$OnClickListener;

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 317
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->o:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->b:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method static synthetic b(Lcom/mbridge/msdk/splash/view/MBSplashPopView;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 0

    .line 44
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    return-void
.end method

.method private b(Ljava/lang/String;)V
    .locals 2

    .line 574
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/same/c/b;

    move-result-object v0

    new-instance v1, Lcom/mbridge/msdk/splash/view/MBSplashPopView$5;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView$5;-><init>(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)V

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/same/c/c;)V

    return-void
.end method

.method static synthetic c(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)Landroid/widget/ImageView;
    .locals 0

    .line 44
    iget-object p0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->k:Landroid/widget/ImageView;

    return-object p0
.end method

.method private c()V
    .locals 6

    .line 321
    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v0

    const/high16 v1, 0x40800000    # 4.0f

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v0

    .line 323
    new-instance v2, Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-direct {v2, v3}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    iput-object v2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->i:Landroid/widget/ImageView;

    .line 324
    new-instance v2, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v3

    const/high16 v4, 0x41e00000    # 28.0f

    invoke-static {v3, v4}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v3

    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-static {v5, v4}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v4

    invoke-direct {v2, v3, v4}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v3, 0x9

    .line 325
    invoke-virtual {v2, v3}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 326
    iget-object v3, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->i:Landroid/widget/ImageView;

    invoke-static {}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->generateViewId()I

    move-result v4

    invoke-virtual {v3, v4}, Landroid/widget/ImageView;->setId(I)V

    .line 327
    iget-object v3, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->i:Landroid/widget/ImageView;

    invoke-virtual {v3, v2}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 328
    iget-object v2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->i:Landroid/widget/ImageView;

    invoke-virtual {v2, v0, v0, v0, v0}, Landroid/widget/ImageView;->setPadding(IIII)V

    .line 329
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->i:Landroid/widget/ImageView;

    sget-object v2, Landroid/widget/ImageView$ScaleType;->CENTER_INSIDE:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {v0, v2}, Landroid/widget/ImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 330
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->g:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getIconUrl()Ljava/lang/String;

    move-result-object v0

    const/4 v2, 0x0

    invoke-direct {p0, v0, v2}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->a(Ljava/lang/String;Z)V

    .line 332
    new-instance v0, Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v0, v2}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->m:Landroid/widget/TextView;

    .line 333
    invoke-static {}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->generateViewId()I

    move-result v2

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setId(I)V

    .line 334
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v2, -0x2

    invoke-direct {v0, v2, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 335
    iget-object v2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->i:Landroid/widget/ImageView;

    invoke-virtual {v2}, Landroid/widget/ImageView;->getId()I

    move-result v2

    const/4 v3, 0x1

    invoke-virtual {v0, v3, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 336
    iget-object v2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->i:Landroid/widget/ImageView;

    invoke-virtual {v2}, Landroid/widget/ImageView;->getId()I

    move-result v2

    const/4 v4, 0x6

    invoke-virtual {v0, v4, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 337
    iget-object v2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->i:Landroid/widget/ImageView;

    invoke-virtual {v2}, Landroid/widget/ImageView;->getId()I

    move-result v2

    const/16 v4, 0x8

    invoke-virtual {v0, v4, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 338
    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2, v1}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v1

    iput v1, v0, Landroid/widget/RelativeLayout$LayoutParams;->leftMargin:I

    .line 339
    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x42200000    # 40.0f

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v1

    iput v1, v0, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 340
    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->m:Landroid/widget/TextView;

    invoke-virtual {v1, v0}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 341
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->m:Landroid/widget/TextView;

    const/16 v1, 0x10

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setGravity(I)V

    .line 342
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->m:Landroid/widget/TextView;

    const/high16 v1, 0x41200000    # 10.0f

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setTextSize(F)V

    .line 343
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->m:Landroid/widget/TextView;

    invoke-virtual {v0, v3}, Landroid/widget/TextView;->setSelected(Z)V

    .line 344
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->m:Landroid/widget/TextView;

    sget-object v1, Landroid/text/TextUtils$TruncateAt;->MARQUEE:Landroid/text/TextUtils$TruncateAt;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setEllipsize(Landroid/text/TextUtils$TruncateAt;)V

    .line 345
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->m:Landroid/widget/TextView;

    const/4 v1, -0x1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setMarqueeRepeatLimit(I)V

    .line 346
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->m:Landroid/widget/TextView;

    invoke-virtual {v0, v3}, Landroid/widget/TextView;->setSingleLine(Z)V

    .line 347
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->m:Landroid/widget/TextView;

    const/high16 v1, -0x1000000

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setTextColor(I)V

    .line 348
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->m:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->g:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 350
    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->d()Ljava/lang/String;

    move-result-object v1

    const-string v2, "mbridge_shape_corners_bg"

    const-string v3, "drawable"

    invoke-virtual {v0, v2, v3, v1}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->setBackgroundResource(I)V

    .line 352
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->i:Landroid/widget/ImageView;

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->addView(Landroid/view/View;)V

    .line 353
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->m:Landroid/widget/TextView;

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->addView(Landroid/view/View;)V

    .line 354
    invoke-direct {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->f()V

    .line 356
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->a:Landroid/view/View$OnClickListener;

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method static synthetic d(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)Landroid/widget/ImageView;
    .locals 0

    .line 44
    iget-object p0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->j:Landroid/widget/ImageView;

    return-object p0
.end method

.method private d()V
    .locals 9

    .line 360
    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v0

    const/high16 v1, 0x40800000    # 4.0f

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v0

    .line 362
    new-instance v2, Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-direct {v2, v3}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    iput-object v2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->i:Landroid/widget/ImageView;

    .line 363
    new-instance v2, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v3

    const/high16 v4, 0x42480000    # 50.0f

    invoke-static {v3, v4}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v3

    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-static {v5, v4}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v4

    invoke-direct {v2, v3, v4}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v3, 0x9

    .line 364
    invoke-virtual {v2, v3}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 365
    iget-object v3, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->i:Landroid/widget/ImageView;

    invoke-static {}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->generateViewId()I

    move-result v4

    invoke-virtual {v3, v4}, Landroid/widget/ImageView;->setId(I)V

    .line 366
    iget-object v3, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->i:Landroid/widget/ImageView;

    invoke-virtual {v3, v2}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 367
    iget-object v2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->i:Landroid/widget/ImageView;

    sget-object v3, Landroid/widget/ImageView$ScaleType;->CENTER_INSIDE:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {v2, v3}, Landroid/widget/ImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 368
    iget-object v2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->i:Landroid/widget/ImageView;

    invoke-virtual {v2, v0, v0, v0, v0}, Landroid/widget/ImageView;->setPadding(IIII)V

    .line 369
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->g:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getIconUrl()Ljava/lang/String;

    move-result-object v0

    const/4 v2, 0x0

    invoke-direct {p0, v0, v2}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->a(Ljava/lang/String;Z)V

    .line 371
    new-instance v0, Landroid/widget/RelativeLayout;

    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v0, v2}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    .line 372
    new-instance v2, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v3, -0x1

    const/4 v4, -0x2

    invoke-direct {v2, v3, v4}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 373
    iget-object v5, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->i:Landroid/widget/ImageView;

    invoke-virtual {v5}, Landroid/widget/ImageView;->getId()I

    move-result v5

    const/4 v6, 0x1

    invoke-virtual {v2, v6, v5}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 374
    iget-object v5, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->i:Landroid/widget/ImageView;

    invoke-virtual {v5}, Landroid/widget/ImageView;->getId()I

    move-result v5

    const/4 v7, 0x6

    invoke-virtual {v2, v7, v5}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 375
    iget-object v5, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->i:Landroid/widget/ImageView;

    invoke-virtual {v5}, Landroid/widget/ImageView;->getId()I

    move-result v5

    const/16 v7, 0x8

    invoke-virtual {v2, v7, v5}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 376
    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v5

    const/high16 v7, 0x41000000    # 8.0f

    invoke-static {v5, v7}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v5

    iput v5, v2, Landroid/widget/RelativeLayout$LayoutParams;->leftMargin:I

    .line 377
    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-static {v5, v7}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v5

    iput v5, v2, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 378
    invoke-virtual {v0, v2}, Landroid/widget/RelativeLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    const/16 v2, 0x10

    .line 379
    invoke-virtual {v0, v2}, Landroid/widget/RelativeLayout;->setGravity(I)V

    .line 381
    new-instance v5, Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v8

    invoke-direct {v5, v8}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    iput-object v5, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->m:Landroid/widget/TextView;

    .line 382
    invoke-static {}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->generateViewId()I

    move-result v8

    invoke-virtual {v5, v8}, Landroid/widget/TextView;->setId(I)V

    .line 383
    iget-object v5, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->m:Landroid/widget/TextView;

    new-instance v8, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v8, v4, v4}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v5, v8}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 384
    iget-object v5, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->m:Landroid/widget/TextView;

    invoke-virtual {v5, v2}, Landroid/widget/TextView;->setGravity(I)V

    .line 385
    iget-object v5, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->m:Landroid/widget/TextView;

    const/high16 v8, 0x41400000    # 12.0f

    invoke-virtual {v5, v8}, Landroid/widget/TextView;->setTextSize(F)V

    .line 386
    iget-object v5, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->m:Landroid/widget/TextView;

    invoke-virtual {v5, v6}, Landroid/widget/TextView;->setSelected(Z)V

    .line 387
    iget-object v5, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->m:Landroid/widget/TextView;

    sget-object v8, Landroid/text/TextUtils$TruncateAt;->MARQUEE:Landroid/text/TextUtils$TruncateAt;

    invoke-virtual {v5, v8}, Landroid/widget/TextView;->setEllipsize(Landroid/text/TextUtils$TruncateAt;)V

    .line 388
    iget-object v5, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->m:Landroid/widget/TextView;

    invoke-virtual {v5, v3}, Landroid/widget/TextView;->setMarqueeRepeatLimit(I)V

    .line 389
    iget-object v5, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->m:Landroid/widget/TextView;

    invoke-virtual {v5, v6}, Landroid/widget/TextView;->setSingleLine(Z)V

    .line 390
    iget-object v5, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->m:Landroid/widget/TextView;

    const/high16 v8, -0x1000000

    invoke-virtual {v5, v8}, Landroid/widget/TextView;->setTextColor(I)V

    .line 391
    iget-object v5, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->m:Landroid/widget/TextView;

    iget-object v8, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->g:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppName()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v5, v8}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 393
    new-instance v5, Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v8

    invoke-direct {v5, v8}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    iput-object v5, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->n:Landroid/widget/TextView;

    .line 394
    invoke-static {}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->generateViewId()I

    move-result v8

    invoke-virtual {v5, v8}, Landroid/widget/TextView;->setId(I)V

    .line 395
    new-instance v5, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v5, v4, v4}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 396
    iget-object v4, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->m:Landroid/widget/TextView;

    invoke-virtual {v4}, Landroid/widget/TextView;->getId()I

    move-result v4

    const/4 v8, 0x5

    invoke-virtual {v5, v8, v4}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 397
    iget-object v4, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->m:Landroid/widget/TextView;

    invoke-virtual {v4}, Landroid/widget/TextView;->getId()I

    move-result v4

    const/4 v8, 0x3

    invoke-virtual {v5, v8, v4}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 398
    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-static {v4, v1}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v1

    iput v1, v5, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    .line 399
    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v1

    const/high16 v4, 0x42100000    # 36.0f

    invoke-static {v1, v4}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v1

    iput v1, v5, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 400
    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->n:Landroid/widget/TextView;

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setGravity(I)V

    .line 401
    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->n:Landroid/widget/TextView;

    invoke-virtual {v1, v5}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 402
    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->n:Landroid/widget/TextView;

    invoke-virtual {v1, v7}, Landroid/widget/TextView;->setTextSize(F)V

    .line 403
    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->n:Landroid/widget/TextView;

    const v2, -0x99999a

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setTextColor(I)V

    .line 404
    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->n:Landroid/widget/TextView;

    sget-object v2, Landroid/text/TextUtils$TruncateAt;->MARQUEE:Landroid/text/TextUtils$TruncateAt;

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setEllipsize(Landroid/text/TextUtils$TruncateAt;)V

    .line 405
    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->n:Landroid/widget/TextView;

    invoke-virtual {v1, v3}, Landroid/widget/TextView;->setMarqueeRepeatLimit(I)V

    .line 406
    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->n:Landroid/widget/TextView;

    invoke-virtual {v1, v6}, Landroid/widget/TextView;->setSelected(Z)V

    .line 407
    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->n:Landroid/widget/TextView;

    invoke-virtual {v1, v6}, Landroid/widget/TextView;->setSingleLine(Z)V

    .line 408
    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->n:Landroid/widget/TextView;

    iget-object v2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->g:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppDesc()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 410
    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->m:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;)V

    .line 411
    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->n:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;)V

    .line 413
    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->d()Ljava/lang/String;

    move-result-object v2

    const-string v3, "mbridge_shape_corners_bg"

    const-string v4, "drawable"

    invoke-virtual {v1, v3, v4, v2}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p0, v1}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->setBackgroundResource(I)V

    .line 415
    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->i:Landroid/widget/ImageView;

    invoke-virtual {p0, v1}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->addView(Landroid/view/View;)V

    .line 416
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->addView(Landroid/view/View;)V

    .line 417
    invoke-direct {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->f()V

    .line 419
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->a:Landroid/view/View$OnClickListener;

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method static synthetic e(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)Landroid/widget/TextView;
    .locals 0

    .line 44
    iget-object p0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->o:Landroid/widget/TextView;

    return-object p0
.end method

.method private e()V
    .locals 9

    .line 423
    new-instance v0, Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->k:Landroid/widget/ImageView;

    .line 424
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x43030000    # 131.0f

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v1

    const/4 v3, -0x1

    invoke-direct {v0, v3, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v1, 0xa

    .line 425
    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    const/16 v4, 0xe

    .line 426
    invoke-virtual {v0, v4}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 427
    iget-object v5, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->k:Landroid/widget/ImageView;

    sget-object v6, Landroid/widget/ImageView$ScaleType;->FIT_XY:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {v5, v6}, Landroid/widget/ImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 428
    iget-object v5, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->k:Landroid/widget/ImageView;

    invoke-static {}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->generateViewId()I

    move-result v6

    invoke-virtual {v5, v6}, Landroid/widget/ImageView;->setId(I)V

    .line 429
    iget-object v5, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->k:Landroid/widget/ImageView;

    invoke-virtual {v5, v0}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 430
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->g:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImageUrl()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->a(Ljava/lang/String;)V

    .line 432
    new-instance v0, Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-direct {v0, v5}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->j:Landroid/widget/ImageView;

    .line 433
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-static {v5, v2}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v2

    const/4 v5, -0x2

    invoke-direct {v0, v5, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 434
    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 435
    invoke-virtual {v0, v4}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 436
    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->j:Landroid/widget/ImageView;

    sget-object v2, Landroid/widget/ImageView$ScaleType;->FIT_CENTER:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {v1, v2}, Landroid/widget/ImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 437
    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->j:Landroid/widget/ImageView;

    invoke-static {}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->generateViewId()I

    move-result v2

    invoke-virtual {v1, v2}, Landroid/widget/ImageView;->setId(I)V

    .line 438
    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->j:Landroid/widget/ImageView;

    invoke-virtual {v1, v0}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 439
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->g:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImageUrl()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->b(Ljava/lang/String;)V

    .line 441
    new-instance v0, Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->i:Landroid/widget/ImageView;

    .line 442
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x42480000    # 50.0f

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v1

    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-static {v4, v2}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v2

    invoke-direct {v0, v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v1, 0x9

    .line 443
    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 444
    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->k:Landroid/widget/ImageView;

    invoke-virtual {v1}, Landroid/widget/ImageView;->getId()I

    move-result v1

    const/4 v2, 0x3

    invoke-virtual {v0, v2, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    const/16 v1, 0x14

    .line 445
    iput v1, v0, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    .line 446
    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->i:Landroid/widget/ImageView;

    sget-object v4, Landroid/widget/ImageView$ScaleType;->CENTER_INSIDE:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {v1, v4}, Landroid/widget/ImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 447
    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->i:Landroid/widget/ImageView;

    invoke-static {}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->generateViewId()I

    move-result v4

    invoke-virtual {v1, v4}, Landroid/widget/ImageView;->setId(I)V

    .line 448
    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->i:Landroid/widget/ImageView;

    invoke-virtual {v1, v0}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 449
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->g:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getIconUrl()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    invoke-direct {p0, v0, v1}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->a(Ljava/lang/String;Z)V

    .line 451
    new-instance v0, Landroid/widget/RelativeLayout;

    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    .line 452
    new-instance v1, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v1, v3, v5}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 453
    iget-object v4, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->i:Landroid/widget/ImageView;

    invoke-virtual {v4}, Landroid/widget/ImageView;->getId()I

    move-result v4

    const/4 v6, 0x1

    invoke-virtual {v1, v6, v4}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 454
    iget-object v4, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->i:Landroid/widget/ImageView;

    invoke-virtual {v4}, Landroid/widget/ImageView;->getId()I

    move-result v4

    const/4 v7, 0x6

    invoke-virtual {v1, v7, v4}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 455
    iget-object v4, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->i:Landroid/widget/ImageView;

    invoke-virtual {v4}, Landroid/widget/ImageView;->getId()I

    move-result v4

    const/16 v7, 0x8

    invoke-virtual {v1, v7, v4}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 456
    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v4

    const/high16 v7, 0x41000000    # 8.0f

    invoke-static {v4, v7}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v4

    iput v4, v1, Landroid/widget/RelativeLayout$LayoutParams;->leftMargin:I

    .line 457
    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-static {v4, v7}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v4

    iput v4, v1, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 458
    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    const/16 v1, 0x10

    .line 459
    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setGravity(I)V

    .line 461
    new-instance v4, Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v8

    invoke-direct {v4, v8}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    iput-object v4, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->m:Landroid/widget/TextView;

    .line 462
    invoke-static {}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->generateViewId()I

    move-result v8

    invoke-virtual {v4, v8}, Landroid/widget/TextView;->setId(I)V

    .line 463
    iget-object v4, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->m:Landroid/widget/TextView;

    invoke-virtual {v4, v1}, Landroid/widget/TextView;->setGravity(I)V

    .line 464
    iget-object v4, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->m:Landroid/widget/TextView;

    new-instance v8, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v8, v5, v5}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v4, v8}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 465
    iget-object v4, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->m:Landroid/widget/TextView;

    const/high16 v8, 0x41400000    # 12.0f

    invoke-virtual {v4, v8}, Landroid/widget/TextView;->setTextSize(F)V

    .line 466
    iget-object v4, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->m:Landroid/widget/TextView;

    const/high16 v8, -0x1000000

    invoke-virtual {v4, v8}, Landroid/widget/TextView;->setTextColor(I)V

    .line 467
    iget-object v4, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->m:Landroid/widget/TextView;

    sget-object v8, Landroid/text/TextUtils$TruncateAt;->MARQUEE:Landroid/text/TextUtils$TruncateAt;

    invoke-virtual {v4, v8}, Landroid/widget/TextView;->setEllipsize(Landroid/text/TextUtils$TruncateAt;)V

    .line 468
    iget-object v4, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->m:Landroid/widget/TextView;

    invoke-virtual {v4, v3}, Landroid/widget/TextView;->setMarqueeRepeatLimit(I)V

    .line 469
    iget-object v4, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->m:Landroid/widget/TextView;

    invoke-virtual {v4, v6}, Landroid/widget/TextView;->setSelected(Z)V

    .line 470
    iget-object v4, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->m:Landroid/widget/TextView;

    invoke-virtual {v4, v6}, Landroid/widget/TextView;->setSingleLine(Z)V

    .line 471
    iget-object v4, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->m:Landroid/widget/TextView;

    iget-object v8, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->g:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppName()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v4, v8}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 473
    new-instance v4, Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v8

    invoke-direct {v4, v8}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    iput-object v4, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->n:Landroid/widget/TextView;

    .line 474
    invoke-static {}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->generateViewId()I

    move-result v8

    invoke-virtual {v4, v8}, Landroid/widget/TextView;->setId(I)V

    .line 475
    new-instance v4, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v4, v5, v5}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 476
    iget-object v5, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->m:Landroid/widget/TextView;

    invoke-virtual {v5}, Landroid/widget/TextView;->getId()I

    move-result v5

    const/4 v8, 0x5

    invoke-virtual {v4, v8, v5}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 477
    iget-object v5, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->m:Landroid/widget/TextView;

    invoke-virtual {v5}, Landroid/widget/TextView;->getId()I

    move-result v5

    invoke-virtual {v4, v2, v5}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 478
    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v5, 0x40800000    # 4.0f

    invoke-static {v2, v5}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v2

    iput v2, v4, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    .line 479
    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v5, 0x42100000    # 36.0f

    invoke-static {v2, v5}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v2

    iput v2, v4, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 480
    iget-object v2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->n:Landroid/widget/TextView;

    invoke-virtual {v2, v1}, Landroid/widget/TextView;->setGravity(I)V

    .line 481
    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->n:Landroid/widget/TextView;

    invoke-virtual {v1, v4}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 482
    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->n:Landroid/widget/TextView;

    invoke-virtual {v1, v7}, Landroid/widget/TextView;->setTextSize(F)V

    .line 483
    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->n:Landroid/widget/TextView;

    const v2, -0x99999a

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setTextColor(I)V

    .line 484
    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->n:Landroid/widget/TextView;

    sget-object v2, Landroid/text/TextUtils$TruncateAt;->MARQUEE:Landroid/text/TextUtils$TruncateAt;

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setEllipsize(Landroid/text/TextUtils$TruncateAt;)V

    .line 485
    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->n:Landroid/widget/TextView;

    invoke-virtual {v1, v3}, Landroid/widget/TextView;->setMarqueeRepeatLimit(I)V

    .line 486
    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->n:Landroid/widget/TextView;

    invoke-virtual {v1, v6}, Landroid/widget/TextView;->setSelected(Z)V

    .line 487
    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->n:Landroid/widget/TextView;

    invoke-virtual {v1, v6}, Landroid/widget/TextView;->setSingleLine(Z)V

    .line 488
    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->n:Landroid/widget/TextView;

    iget-object v2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->g:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppDesc()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 490
    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->m:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;)V

    .line 491
    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->n:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;)V

    .line 493
    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->k:Landroid/widget/ImageView;

    invoke-virtual {p0, v1}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->addView(Landroid/view/View;)V

    .line 494
    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->j:Landroid/widget/ImageView;

    invoke-virtual {p0, v1}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->addView(Landroid/view/View;)V

    .line 495
    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->i:Landroid/widget/ImageView;

    invoke-virtual {p0, v1}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->addView(Landroid/view/View;)V

    .line 496
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->addView(Landroid/view/View;)V

    .line 497
    invoke-direct {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->f()V

    .line 499
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->a:Landroid/view/View$OnClickListener;

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method static synthetic f(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)I
    .locals 0

    .line 44
    iget p0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->p:I

    return p0
.end method

.method private f()V
    .locals 5

    const-string v0, "ZH"

    .line 503
    new-instance v1, Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    iput-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->l:Landroid/widget/ImageView;

    .line 504
    new-instance v1, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v3, 0x42000000    # 32.0f

    invoke-static {v2, v3}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v2

    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v3

    const/high16 v4, 0x41500000    # 13.0f

    invoke-static {v3, v4}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v3

    invoke-direct {v1, v2, v3}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v2, 0xb

    .line 505
    invoke-virtual {v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 506
    iget-object v2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->i:Landroid/widget/ImageView;

    invoke-virtual {v2}, Landroid/widget/ImageView;->getId()I

    move-result v2

    const/16 v3, 0x8

    invoke-virtual {v1, v3, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 507
    iget-object v2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->l:Landroid/widget/ImageView;

    invoke-virtual {v2, v1}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 511
    :try_start_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getResources()Landroid/content/res/Resources;

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

    .line 513
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    const-string v2, "MBSplashPopView"

    invoke-static {v2, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    move-object v1, v0

    .line 517
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

    .line 520
    :cond_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->d()Ljava/lang/String;

    move-result-object v1

    const-string v2, "mbridge_splash_pop_ad_en"

    invoke-virtual {v0, v2, v3, v1}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    goto :goto_2

    .line 518
    :cond_1
    :goto_1
    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->d()Ljava/lang/String;

    move-result-object v1

    const-string v2, "mbridge_splash_pop_ad"

    invoke-virtual {v0, v2, v3, v1}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 522
    :goto_2
    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->l:Landroid/widget/ImageView;

    invoke-virtual {v1, v0}, Landroid/widget/ImageView;->setBackgroundResource(I)V

    .line 524
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->l:Landroid/widget/ImageView;

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->addView(Landroid/view/View;)V

    return-void
.end method

.method private g()V
    .locals 4

    .line 729
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->o:Landroid/widget/TextView;

    if-eqz v0, :cond_0

    .line 730
    invoke-virtual {v0}, Landroid/widget/TextView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    .line 731
    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x41800000    # 16.0f

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v1

    iput v1, v0, Landroid/view/ViewGroup$LayoutParams;->width:I

    .line 732
    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v1

    iput v1, v0, Landroid/view/ViewGroup$LayoutParams;->height:I

    .line 733
    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->o:Landroid/widget/TextView;

    invoke-virtual {v1, v0}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 734
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->o:Landroid/widget/TextView;

    const-string v1, ""

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 735
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->o:Landroid/widget/TextView;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setSelected(Z)V

    .line 737
    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->d()Ljava/lang/String;

    move-result-object v1

    const-string v2, "mbridge_splash_popview_close"

    const-string v3, "drawable"

    invoke-virtual {v0, v2, v3, v1}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 738
    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->o:Landroid/widget/TextView;

    invoke-virtual {v1, v0}, Landroid/widget/TextView;->setBackgroundResource(I)V

    :cond_0
    return-void
.end method

.method static synthetic g(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)V
    .locals 0

    .line 44
    invoke-direct {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->g()V

    return-void
.end method

.method public static generateViewId()I
    .locals 3

    .line 596
    :cond_0
    sget-object v0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->c:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    add-int/lit8 v1, v0, 0x1

    const v2, 0xffffff

    if-le v1, v2, :cond_1

    const/4 v1, 0x1

    .line 599
    :cond_1
    sget-object v2, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->c:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v2, v0, v1}, Ljava/util/concurrent/atomic/AtomicInteger;->compareAndSet(II)Z

    move-result v1

    if-eqz v1, :cond_0

    return v0
.end method

.method static synthetic h(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)Ljava/lang/Runnable;
    .locals 0

    .line 44
    iget-object p0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->u:Ljava/lang/Runnable;

    return-object p0
.end method

.method static synthetic i(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)Landroid/os/Handler;
    .locals 0

    .line 44
    iget-object p0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->q:Landroid/os/Handler;

    return-object p0
.end method

.method static synthetic j(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)Lcom/mbridge/msdk/splash/d/d;
    .locals 0

    .line 44
    iget-object p0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->h:Lcom/mbridge/msdk/splash/d/d;

    return-object p0
.end method

.method static synthetic k(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)Ljava/lang/String;
    .locals 0

    .line 44
    iget-object p0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->d:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic l(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)Ljava/lang/String;
    .locals 0

    .line 44
    iget-object p0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->e:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic m(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)I
    .locals 2

    .line 44
    iget v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->p:I

    add-int/lit8 v1, v0, -0x1

    iput v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->p:I

    return v0
.end method

.method static synthetic n(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;
    .locals 0

    .line 44
    iget-object p0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->g:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    return-object p0
.end method

.method static synthetic o(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)Lcom/mbridge/msdk/click/b;
    .locals 0

    .line 44
    iget-object p0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->s:Lcom/mbridge/msdk/click/b;

    return-object p0
.end method


# virtual methods
.method protected onAttachedToWindow()V
    .locals 3

    .line 164
    invoke-super {p0}, Landroid/widget/RelativeLayout;->onAttachedToWindow()V

    .line 165
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->h:Lcom/mbridge/msdk/splash/d/d;

    if-eqz v0, :cond_0

    .line 166
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->v:Ljava/lang/Runnable;

    const-wide/16 v1, 0x1f4

    invoke-virtual {p0, v0, v1, v2}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->postDelayed(Ljava/lang/Runnable;J)Z

    :cond_0
    return-void
.end method

.method protected onDetachedFromWindow()V
    .locals 0

    .line 172
    invoke-super {p0}, Landroid/widget/RelativeLayout;->onDetachedFromWindow()V

    .line 173
    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->release()V

    return-void
.end method

.method public pauseCountDown()V
    .locals 2

    const/4 v0, 0x1

    .line 225
    iput-boolean v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->r:Z

    .line 226
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->o:Landroid/widget/TextView;

    if-eqz v0, :cond_0

    .line 227
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->q:Landroid/os/Handler;

    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->u:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    :cond_0
    return-void
.end method

.method public reStartCountDown()V
    .locals 4

    .line 209
    iget-boolean v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->r:Z

    if-eqz v0, :cond_2

    const/4 v0, 0x0

    .line 210
    iput-boolean v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->r:Z

    .line 212
    iget v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->p:I

    const/4 v1, -0x1

    if-eq v0, v1, :cond_1

    if-nez v0, :cond_0

    goto :goto_0

    .line 217
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->o:Landroid/widget/TextView;

    if-eqz v1, :cond_2

    .line 218
    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 219
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->q:Landroid/os/Handler;

    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->u:Ljava/lang/Runnable;

    const-wide/16 v2, 0x3e8

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    goto :goto_1

    .line 213
    :cond_1
    :goto_0
    invoke-direct {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->g()V

    :cond_2
    :goto_1
    return-void
.end method

.method public release()V
    .locals 2

    .line 233
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->q:Landroid/os/Handler;

    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->v:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 234
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->q:Landroid/os/Handler;

    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->u:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    const/4 v0, 0x0

    .line 235
    iput-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->u:Ljava/lang/Runnable;

    .line 236
    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->detachAllViewsFromParent()V

    .line 237
    iput-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->g:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 238
    iput-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->h:Lcom/mbridge/msdk/splash/d/d;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 240
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MBSplashPopView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public setPopViewType(Lcom/mbridge/msdk/splash/view/MBSplashPopView$a;Lcom/mbridge/msdk/splash/d/d;)V
    .locals 1

    if-eqz p1, :cond_0

    .line 181
    invoke-virtual {p1}, Lcom/mbridge/msdk/splash/view/MBSplashPopView$a;->b()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->e:Ljava/lang/String;

    .line 182
    invoke-virtual {p1}, Lcom/mbridge/msdk/splash/view/MBSplashPopView$a;->a()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->d:Ljava/lang/String;

    .line 183
    invoke-virtual {p1}, Lcom/mbridge/msdk/splash/view/MBSplashPopView$a;->c()I

    move-result v0

    iput v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->f:I

    .line 184
    invoke-virtual {p1}, Lcom/mbridge/msdk/splash/view/MBSplashPopView$a;->d()Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->g:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 185
    iput-object p2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->h:Lcom/mbridge/msdk/splash/d/d;

    .line 186
    invoke-direct {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->a()V

    return-void

    .line 178
    :cond_0
    new-instance p1, Ljava/lang/IllegalArgumentException;

    const-string p2, "Parameters is NULL, can\'t gen view."

    invoke-direct {p1, p2}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public startCountDown()V
    .locals 4

    .line 190
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->q:Landroid/os/Handler;

    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->u:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 192
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->g:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_1

    iget v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->f:I

    const/4 v2, 0x1

    if-ne v1, v2, :cond_1

    .line 193
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getFlbSkipTime()I

    move-result v0

    if-lez v0, :cond_0

    .line 195
    iput v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->p:I

    .line 201
    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->o:Landroid/widget/TextView;

    if-eqz v1, :cond_1

    .line 202
    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 203
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->q:Landroid/os/Handler;

    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->u:Ljava/lang/Runnable;

    const-wide/16 v2, 0x3e8

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    goto :goto_0

    .line 197
    :cond_0
    invoke-direct {p0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->g()V

    :cond_1
    :goto_0
    return-void
.end method
