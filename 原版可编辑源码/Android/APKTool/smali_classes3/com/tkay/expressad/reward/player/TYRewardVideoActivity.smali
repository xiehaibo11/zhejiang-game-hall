.class public Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;
.super Lcom/tkay/expressad/video/signal/activity/AbstractJSActivity;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/reward/player/TYRewardVideoActivity$a;
    }
.end annotation


# static fields
.field public static a:Ljava/lang/String; = "unitId"

.field public static b:Ljava/lang/String; = "userId"

.field public static c:Ljava/lang/String; = "reward"

.field public static d:Ljava/lang/String; = "mute"

.field public static e:Ljava/lang/String; = "isIV"

.field public static f:Ljava/lang/String; = "isBid"

.field public static g:Ljava/lang/String; = "isBigOffer"

.field public static h:Ljava/lang/String; = "hasRelease"

.field public static i:Ljava/lang/String; = "ivRewardMode"

.field public static j:Ljava/lang/String; = "ivRewardValueType"

.field public static k:Ljava/lang/String; = "ivRewardValue"

.field public static l:Ljava/lang/String; = "extraData"

.field public static m:Ljava/lang/String; = "baserequestInfo"

.field private static final p:Ljava/lang/String; = "TYRewardVideoActivity"


# instance fields
.field private A:Z

.field private B:Z

.field private C:Lcom/tkay/expressad/video/bt/module/b/h;

.field private D:Lcom/tkay/expressad/videocommon/e/d;

.field private E:Z

.field private F:Z

.field private G:Lcom/tkay/expressad/videocommon/b/a;

.field private H:Lcom/tkay/expressad/foundation/d/c;

.field private I:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/expressad/videocommon/b/a;",
            ">;"
        }
    .end annotation
.end field

.field private J:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;"
        }
    .end annotation
.end field

.field private K:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

.field private L:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

.field private M:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

.field private N:Lcom/tkay/expressad/video/bt/module/a/a;

.field private O:Ljava/lang/String;

.field private P:Ljava/lang/String;

.field private Q:Z

.field private R:I

.field private S:I

.field private T:I

.field private U:I

.field private V:I

.field private W:I

.field private X:I

.field private Y:Lcom/tkay/expressad/video/dynview/f/a;

.field private Z:Lcom/tkay/expressad/video/dynview/f/d;

.field private q:Ljava/lang/String;

.field private r:Ljava/lang/String;

.field private s:Ljava/lang/String;

.field private t:Lcom/tkay/expressad/videocommon/c/c;

.field private u:I

.field private v:Z

.field private w:Z

.field private x:I

.field private y:I

.field private z:I


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 2

    .line 58
    invoke-direct {p0}, Lcom/tkay/expressad/video/signal/activity/AbstractJSActivity;-><init>()V

    const/4 v0, 0x2

    .line 82
    iput v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->u:I

    const/4 v0, 0x0

    .line 83
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->v:Z

    .line 84
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->w:Z

    .line 88
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->A:Z

    .line 89
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->B:Z

    .line 93
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->E:Z

    .line 94
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->F:Z

    const/4 v1, 0x1

    .line 111
    iput v1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->R:I

    .line 112
    iput v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->S:I

    .line 114
    iput v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->T:I

    iput v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->U:I

    iput v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->V:I

    iput v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->W:I

    iput v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->X:I

    .line 115
    new-instance v0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity$1;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity$1;-><init>(Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;)V

    iput-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->Y:Lcom/tkay/expressad/video/dynview/f/a;

    .line 142
    new-instance v0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity$2;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity$2;-><init>(Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;)V

    iput-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->Z:Lcom/tkay/expressad/video/dynview/f/d;

    return-void
.end method

.method private a(II)I
    .locals 5

    .line 635
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->J:Ljava/util/List;

    if-nez v0, :cond_0

    return p1

    .line 638
    :cond_0
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_1

    return p1

    :cond_1
    const/4 v0, 0x0

    move v1, v0

    move v2, v1

    move v3, v2

    .line 644
    :goto_0
    iget-object v4, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->J:Ljava/util/List;

    invoke-interface {v4}, Ljava/util/List;->size()I

    move-result v4

    if-ge v1, v4, :cond_4

    .line 645
    iget-object v4, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->J:Ljava/util/List;

    invoke-interface {v4, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    if-eqz v4, :cond_3

    if-nez v1, :cond_2

    .line 647
    iget-object v3, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->J:Ljava/util/List;

    invoke-interface {v3, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c;->i()I

    move-result v3

    .line 649
    :cond_2
    iget-object v4, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->J:Ljava/util/List;

    invoke-interface {v4, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v4}, Lcom/tkay/expressad/foundation/d/c;->bi()I

    move-result v4

    add-int/2addr v2, v4

    :cond_3
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_4
    const/16 v1, 0x2d

    const/4 v4, 0x1

    if-ne p2, v4, :cond_7

    if-nez p1, :cond_5

    if-lt v2, v1, :cond_6

    move p1, v1

    goto :goto_2

    :cond_5
    if-le v2, p1, :cond_6

    if-le p1, v1, :cond_b

    return v1

    :cond_6
    move p1, v2

    goto :goto_2

    :cond_7
    move p1, v0

    move v1, p1

    :goto_1
    add-int/lit8 v2, p2, -0x1

    if-ge p1, v2, :cond_9

    .line 672
    iget-object v2, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->J:Ljava/util/List;

    invoke-interface {v2, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    if-eqz v2, :cond_8

    .line 673
    iget-object v2, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->J:Ljava/util/List;

    invoke-interface {v2, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->bi()I

    move-result v2

    add-int/2addr v1, v2

    :cond_8
    add-int/lit8 p1, p1, 0x1

    goto :goto_1

    :cond_9
    if-le v3, v1, :cond_a

    sub-int p1, v3, v1

    goto :goto_2

    :cond_a
    move p1, v0

    :cond_b
    :goto_2
    return p1
.end method

.method static synthetic a(Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;I)I
    .locals 0

    .line 58
    iput p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->u:I

    return p1
.end method

.method static synthetic a(Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;II)I
    .locals 0

    .line 58
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->a(II)I

    move-result p0

    return p0
.end method

.method private static a(Ljava/lang/String;)Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;
    .locals 0

    .line 428
    invoke-static {p0}, Lcom/tkay/expressad/videocommon/a;->a(Ljava/lang/String;)Lcom/tkay/expressad/videocommon/a$a;

    move-result-object p0

    if-eqz p0, :cond_0

    .line 430
    invoke-virtual {p0}, Lcom/tkay/expressad/videocommon/a$a;->a()Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    move-result-object p0

    return-object p0

    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method

.method static synthetic a(Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;Lcom/tkay/expressad/foundation/d/c;)Lcom/tkay/expressad/foundation/d/c;
    .locals 0

    .line 58
    iput-object p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->H:Lcom/tkay/expressad/foundation/d/c;

    return-object p1
.end method

.method static synthetic a(Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;)Ljava/util/List;
    .locals 0

    .line 58
    iget-object p0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->J:Ljava/util/List;

    return-object p0
.end method

.method private a(I)V
    .locals 5

    .line 960
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->H:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->H:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->f()I

    move-result v0

    const/4 v1, 0x2

    if-ne v0, v1, :cond_3

    .line 961
    invoke-virtual {p0}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v0

    new-instance v2, Landroid/graphics/drawable/ColorDrawable;

    const/4 v3, 0x0

    invoke-direct {v2, v3}, Landroid/graphics/drawable/ColorDrawable;-><init>(I)V

    invoke-virtual {v0, v2}, Landroid/view/View;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    .line 962
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->K:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    check-cast v0, Landroid/widget/FrameLayout$LayoutParams;

    const/high16 v2, 0x42680000    # 58.0f

    .line 963
    invoke-static {p0, v2}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v2

    const/high16 v3, 0x42d00000    # 104.0f

    .line 964
    invoke-static {p0, v3}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v3

    .line 965
    iget-object v4, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->H:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v4}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/expressad/foundation/d/c$c;->c()I

    move-result v4

    if-nez v4, :cond_1

    if-ne p1, v1, :cond_0

    .line 967
    invoke-virtual {v0, v3, v2, v3, v2}, Landroid/widget/FrameLayout$LayoutParams;->setMargins(IIII)V

    goto :goto_0

    .line 969
    :cond_0
    invoke-virtual {v0, v2, v3, v2, v3}, Landroid/widget/FrameLayout$LayoutParams;->setMargins(IIII)V

    goto :goto_0

    .line 972
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->H:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c$c;->c()I

    move-result p1

    if-ne p1, v1, :cond_2

    .line 973
    invoke-virtual {v0, v3, v2, v3, v2}, Landroid/widget/FrameLayout$LayoutParams;->setMargins(IIII)V

    goto :goto_0

    .line 975
    :cond_2
    invoke-virtual {v0, v2, v3, v2, v3}, Landroid/widget/FrameLayout$LayoutParams;->setMargins(IIII)V

    .line 978
    :goto_0
    iget-object p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->K:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_3
    return-void

    :catchall_0
    move-exception p1

    .line 981
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method private a(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 2

    if-eqz p1, :cond_0

    .line 390
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->i()I

    move-result v0

    iget v1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->R:I

    invoke-direct {p0, v0, v1}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->a(II)I

    move-result v0

    .line 391
    iput-object p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->H:Lcom/tkay/expressad/foundation/d/c;

    .line 392
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->m()V

    const/4 p1, 0x1

    .line 393
    iput p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->R:I

    .line 394
    iget-object p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->H:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/foundation/d/c;->b(I)V

    .line 395
    iget-object p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->H:Lcom/tkay/expressad/foundation/d/c;

    invoke-direct {p0, p1}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->b(Lcom/tkay/expressad/foundation/d/c;)V

    return-void

    :cond_0
    const-string p1, "campaign is less"

    .line 397
    invoke-direct {p0, p1}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->b(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;Ljava/lang/String;)V
    .locals 0

    .line 58
    invoke-direct {p0, p1}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->b(Ljava/lang/String;)V

    return-void
.end method

.method private a(Ljava/util/List;)V
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;)V"
        }
    .end annotation

    const-string v0, "no available campaign"

    if-nez p1, :cond_0

    .line 362
    invoke-direct {p0, v0}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->b(Ljava/lang/String;)V

    return-void

    .line 365
    :cond_0
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v1

    if-nez v1, :cond_1

    .line 366
    invoke-direct {p0, v0}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->b(Ljava/lang/String;)V

    return-void

    :cond_1
    const/4 v0, 0x0

    .line 371
    invoke-interface {p1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    if-eqz v1, :cond_2

    .line 372
    invoke-interface {p1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->k()I

    move-result v1

    goto :goto_0

    :cond_2
    move v1, v0

    :goto_0
    const/4 v2, 0x5

    if-eq v1, v2, :cond_3

    .line 384
    invoke-direct {p0}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->c()V

    return-void

    .line 376
    :cond_3
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_4
    :goto_1
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_5

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/foundation/d/c;

    if-eqz v2, :cond_4

    .line 378
    iget v3, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->S:I

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->bi()I

    move-result v2

    add-int/2addr v3, v2

    iput v3, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->S:I

    goto :goto_1

    .line 381
    :cond_5
    invoke-interface {p1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/foundation/d/c;

    if-eqz p1, :cond_6

    .line 3390
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->i()I

    move-result v0

    iget v1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->R:I

    invoke-direct {p0, v0, v1}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->a(II)I

    move-result v0

    .line 3391
    iput-object p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->H:Lcom/tkay/expressad/foundation/d/c;

    .line 3392
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->m()V

    const/4 p1, 0x1

    .line 3393
    iput p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->R:I

    .line 3394
    iget-object p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->H:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/foundation/d/c;->b(I)V

    .line 3395
    iget-object p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->H:Lcom/tkay/expressad/foundation/d/c;

    invoke-direct {p0, p1}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->b(Lcom/tkay/expressad/foundation/d/c;)V

    return-void

    :cond_6
    const-string p1, "campaign is less"

    .line 3397
    invoke-direct {p0, p1}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->b(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic b(Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;)I
    .locals 2

    .line 58
    iget v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->R:I

    add-int/lit8 v1, v0, 0x1

    iput v1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->R:I

    return v0
.end method

.method static synthetic b(Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;I)I
    .locals 1

    .line 58
    iget v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->S:I

    sub-int/2addr v0, p1

    iput v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->S:I

    return v0
.end method

.method private b()V
    .locals 6

    const-string v0, "tkay_temp_container"

    .line 451
    invoke-direct {p0, v0}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->c(Ljava/lang/String;)I

    move-result v0

    if-gez v0, :cond_0

    const-string v1, "no id tkay_bt_container in tkay_more_offer_activity layout"

    .line 453
    invoke-direct {p0, v1}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->b(Ljava/lang/String;)V

    .line 455
    :cond_0
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    iput-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->K:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    if-nez v0, :cond_1

    const-string v0, "env error"

    .line 457
    invoke-direct {p0, v0}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->b(Ljava/lang/String;)V

    .line 460
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->J:Ljava/util/List;

    const/4 v1, 0x0

    if-eqz v0, :cond_2

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_2

    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->J:Ljava/util/List;

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    if-eqz v0, :cond_2

    .line 461
    new-instance v0, Lcom/tkay/expressad/video/dynview/h/b;

    invoke-direct {v0}, Lcom/tkay/expressad/video/dynview/h/b;-><init>()V

    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->K:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {v0}, Lcom/tkay/expressad/video/dynview/h/b;->e(Landroid/view/View;)V

    goto :goto_0

    .line 463
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->K:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setVisibility(I)V

    :goto_0
    const/4 v0, -0x1

    .line 466
    invoke-direct {p0, v0}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->a(I)V

    .line 468
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->K:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setVisibility(I)V

    .line 469
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->K:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-virtual {v0, p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setActivity(Landroid/app/Activity;)V

    .line 470
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->K:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    iget-boolean v2, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->w:Z

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setBidCampaign(Z)V

    .line 471
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->K:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    iget-boolean v2, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->A:Z

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setBigOffer(Z)V

    .line 472
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->K:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    iget-object v2, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->q:Ljava/lang/String;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setUnitId(Ljava/lang/String;)V

    .line 473
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->K:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    iget-object v2, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->H:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setCampaign(Lcom/tkay/expressad/foundation/d/c;)V

    .line 474
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->H:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->k()I

    move-result v0

    const/4 v2, 0x5

    const/4 v3, 0x1

    if-ne v0, v2, :cond_4

    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->J:Ljava/util/List;

    if-eqz v0, :cond_4

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-le v0, v3, :cond_4

    const-string v0, "tkay_reward_root_container"

    .line 475
    invoke-direct {p0, v0}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->c(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    if-eqz v0, :cond_3

    const/high16 v2, -0x1000000

    .line 477
    invoke-virtual {v0, v2}, Landroid/view/View;->setBackgroundColor(I)V

    .line 480
    :cond_3
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->K:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->removeAllViews()V

    .line 481
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->K:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    iget-object v2, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->J:Ljava/util/List;

    iget v4, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->S:I

    invoke-virtual {v0, v2, v4}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setCampOrderViewData(Ljava/util/List;I)V

    .line 482
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->K:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    iget-object v2, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->Y:Lcom/tkay/expressad/video/dynview/f/a;

    iget v4, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->R:I

    invoke-virtual {v0, v2, v4}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setCamPlayOrderCallback(Lcom/tkay/expressad/video/dynview/f/a;I)V

    .line 485
    :cond_4
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->K:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    iget-object v2, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->G:Lcom/tkay/expressad/videocommon/b/a;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setCampaignDownLoadTask(Lcom/tkay/expressad/videocommon/b/a;)V

    .line 486
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->K:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    iget-boolean v2, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->v:Z

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setIV(Z)V

    .line 487
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->H:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_5

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->f()I

    move-result v0

    const/4 v2, 0x2

    if-ne v0, v2, :cond_5

    .line 488
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->K:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-virtual {v0, v1, v1, v1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setIVRewardEnable(III)V

    goto :goto_1

    .line 490
    :cond_5
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->K:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    iget v2, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->x:I

    iget v4, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->y:I

    iget v5, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->z:I

    invoke-virtual {v0, v2, v4, v5}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setIVRewardEnable(III)V

    .line 492
    :goto_1
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->K:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    iget v2, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->u:I

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setMute(I)V

    .line 493
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->K:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    iget-object v2, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->P:Ljava/lang/String;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setDeveloperExtraData(Ljava/lang/String;)V

    .line 495
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->H:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_6

    .line 3453
    iget-object v0, v0, Lcom/tkay/expressad/foundation/d/c;->aH:Lcom/tkay/expressad/foundation/d/p;

    if-nez v0, :cond_7

    .line 495
    :cond_6
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->J:Ljava/util/List;

    if-eqz v0, :cond_9

    .line 496
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_9

    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->J:Ljava/util/List;

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_9

    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->J:Ljava/util/List;

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/foundation/d/c;

    .line 4453
    iget-object v0, v0, Lcom/tkay/expressad/foundation/d/c;->aH:Lcom/tkay/expressad/foundation/d/p;

    if-eqz v0, :cond_9

    .line 497
    :cond_7
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/p;->b()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_9

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/p;->a()I

    move-result v1

    if-lez v1, :cond_9

    .line 498
    new-instance v1, Lcom/tkay/expressad/videocommon/c/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/p;->b()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/p;->a()I

    move-result v0

    invoke-direct {v1, v2, v0}, Lcom/tkay/expressad/videocommon/c/c;-><init>(Ljava/lang/String;I)V

    .line 499
    invoke-virtual {v1}, Lcom/tkay/expressad/videocommon/c/c;->b()I

    move-result v0

    if-gez v0, :cond_8

    .line 500
    invoke-virtual {v1, v3}, Lcom/tkay/expressad/videocommon/c/c;->a(I)V

    .line 502
    :cond_8
    iput-object v1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->t:Lcom/tkay/expressad/videocommon/c/c;

    .line 505
    :cond_9
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->K:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    iget-object v1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->t:Lcom/tkay/expressad/videocommon/c/c;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setReward(Lcom/tkay/expressad/videocommon/c/c;)V

    .line 506
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->K:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    iget-object v1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->D:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setRewardUnitSetting(Lcom/tkay/expressad/videocommon/e/d;)V

    .line 507
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->K:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    iget-object v1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->r:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setPlacementId(Ljava/lang/String;)V

    .line 508
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->K:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    iget-object v1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->s:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setUserId(Ljava/lang/String;)V

    .line 509
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->K:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    iget-object v1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->C:Lcom/tkay/expressad/video/bt/module/b/h;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setShowRewardListener(Lcom/tkay/expressad/video/bt/module/b/h;)V

    .line 510
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->K:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-virtual {v0, p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->init(Landroid/content/Context;)V

    .line 511
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->K:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->onCreate()V

    return-void
.end method

.method private b(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 6

    .line 403
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->I:Ljava/util/List;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->I:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_1

    .line 404
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->I:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/videocommon/b/a;

    if-eqz v1, :cond_0

    .line 406
    invoke-virtual {v1}, Lcom/tkay/expressad/videocommon/b/a;->n()Lcom/tkay/expressad/foundation/d/c;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 408
    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v4

    invoke-static {v3, v4}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 409
    iput-object v1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->G:Lcom/tkay/expressad/videocommon/b/a;

    goto :goto_0

    :cond_1
    const/4 p1, 0x1

    .line 415
    iput-boolean p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->A:Z

    .line 416
    invoke-direct {p0}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->b()V

    .line 417
    iget-object p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->K:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    if-eqz p1, :cond_2

    .line 418
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->K:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    iget v1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->X:I

    iget v2, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->T:I

    iget v3, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->V:I

    iget v4, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->U:I

    iget v5, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->W:I

    invoke-virtual/range {v0 .. v5}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setNotchPadding(IIIII)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_2
    return-void

    :catch_0
    move-exception p1

    .line 421
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    const-string p1, "more offer to one offer exception"

    .line 422
    invoke-direct {p0, p1}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->b(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic b(Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;Lcom/tkay/expressad/foundation/d/c;)V
    .locals 0

    .line 58
    invoke-direct {p0, p1}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->b(Lcom/tkay/expressad/foundation/d/c;)V

    return-void
.end method

.method private b(Ljava/lang/String;)V
    .locals 1

    .line 438
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->C:Lcom/tkay/expressad/video/bt/module/b/h;

    if-eqz v0, :cond_0

    .line 439
    invoke-interface {v0, p1}, Lcom/tkay/expressad/video/bt/module/b/h;->a(Ljava/lang/String;)V

    .line 441
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->finish()V

    return-void
.end method

.method private c(Ljava/lang/String;)I
    .locals 2

    .line 951
    invoke-virtual {p0}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "id"

    invoke-static {v0, p1, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    return p1
.end method

.method static synthetic c(Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;)Lcom/tkay/expressad/foundation/d/c;
    .locals 0

    .line 58
    iget-object p0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->H:Lcom/tkay/expressad/foundation/d/c;

    return-object p0
.end method

.method private c()V
    .locals 4

    const-string v0, "tkay_bt_container"

    .line 521
    invoke-direct {p0, v0}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->c(Ljava/lang/String;)I

    move-result v0

    if-gez v0, :cond_0

    const-string v1, "no tkay_webview_framelayout in tkay_more_offer_activity layout"

    .line 523
    invoke-direct {p0, v1}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->b(Ljava/lang/String;)V

    .line 525
    :cond_0
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    iput-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->L:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    if-nez v0, :cond_1

    const-string v0, "env error"

    .line 527
    invoke-direct {p0, v0}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->b(Ljava/lang/String;)V

    .line 529
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->L:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->setVisibility(I)V

    .line 530
    invoke-direct {p0}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->d()Lcom/tkay/expressad/video/bt/module/a/a;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->N:Lcom/tkay/expressad/video/bt/module/a/a;

    .line 531
    iget-object v2, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->L:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    invoke-virtual {v2, v0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->setBTContainerCallback(Lcom/tkay/expressad/video/bt/module/a/a;)V

    .line 532
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->L:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    iget-object v2, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->C:Lcom/tkay/expressad/video/bt/module/b/h;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->setShowRewardVideoListener(Lcom/tkay/expressad/video/bt/module/b/h;)V

    .line 533
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->L:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    iget-object v2, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->Z:Lcom/tkay/expressad/video/dynview/f/d;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->setChoiceOneCallback(Lcom/tkay/expressad/video/dynview/f/d;)V

    .line 534
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->L:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    iget-object v2, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->J:Ljava/util/List;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->setCampaigns(Ljava/util/List;)V

    .line 535
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->L:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    iget-object v2, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->I:Ljava/util/List;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->setCampaignDownLoadTasks(Ljava/util/List;)V

    .line 536
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->L:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    iget-object v2, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->D:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->setRewardUnitSetting(Lcom/tkay/expressad/videocommon/e/d;)V

    .line 537
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->L:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    iget-object v2, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->q:Ljava/lang/String;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->setUnitId(Ljava/lang/String;)V

    .line 538
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->L:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    iget-object v2, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->r:Ljava/lang/String;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->setPlacementId(Ljava/lang/String;)V

    .line 539
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->L:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    iget-object v2, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->s:Ljava/lang/String;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->setUserId(Ljava/lang/String;)V

    .line 540
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->L:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    invoke-virtual {v0, p0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->setActivity(Landroid/app/Activity;)V

    .line 541
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->L:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    iget-object v2, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->P:Ljava/lang/String;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->setDeveloperExtraData(Ljava/lang/String;)V

    .line 543
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->H:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_2

    .line 5453
    iget-object v0, v0, Lcom/tkay/expressad/foundation/d/c;->aH:Lcom/tkay/expressad/foundation/d/p;

    if-nez v0, :cond_3

    .line 543
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->J:Ljava/util/List;

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_5

    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->J:Ljava/util/List;

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/foundation/d/c;

    .line 6453
    iget-object v0, v0, Lcom/tkay/expressad/foundation/d/c;->aH:Lcom/tkay/expressad/foundation/d/p;

    if-eqz v0, :cond_5

    .line 544
    :cond_3
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/p;->b()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_5

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/p;->a()I

    move-result v1

    if-lez v1, :cond_5

    .line 545
    new-instance v1, Lcom/tkay/expressad/videocommon/c/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/p;->b()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/p;->a()I

    move-result v0

    invoke-direct {v1, v2, v0}, Lcom/tkay/expressad/videocommon/c/c;-><init>(Ljava/lang/String;I)V

    .line 546
    invoke-virtual {v1}, Lcom/tkay/expressad/videocommon/c/c;->b()I

    move-result v0

    if-gez v0, :cond_4

    const/4 v0, 0x1

    .line 547
    invoke-virtual {v1, v0}, Lcom/tkay/expressad/videocommon/c/c;->a(I)V

    .line 549
    :cond_4
    iput-object v1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->t:Lcom/tkay/expressad/videocommon/c/c;

    .line 552
    :cond_5
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->L:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    iget-object v1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->t:Lcom/tkay/expressad/videocommon/c/c;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->setReward(Lcom/tkay/expressad/videocommon/c/c;)V

    .line 553
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->L:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    iget v1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->x:I

    iget v2, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->y:I

    iget v3, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->z:I

    invoke-virtual {v0, v1, v2, v3}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->setIVRewardEnable(III)V

    .line 554
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->L:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    iget-boolean v1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->v:Z

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->setIV(Z)V

    .line 555
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->L:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    iget v1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->u:I

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->setMute(I)V

    .line 556
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->L:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    iget-object v1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->o:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    check-cast v1, Lcom/tkay/expressad/video/signal/factory/b;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->setJSFactory(Lcom/tkay/expressad/video/signal/factory/b;)V

    .line 557
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->L:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    invoke-virtual {v0, p0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->init(Landroid/content/Context;)V

    .line 558
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->L:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->onCreate()V

    return-void
.end method

.method private static c(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 2

    if-eqz p0, :cond_1

    .line 1003
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->be()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 1004
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v0

    .line 1005
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->be()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/g/d/b;->c(Ljava/lang/String;)V

    .line 1007
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->bd()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 1008
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v0

    .line 1009
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->bd()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Lcom/tkay/expressad/foundation/g/d/b;->c(Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method static synthetic d(Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;)I
    .locals 0

    .line 58
    iget p0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->R:I

    return p0
.end method

.method private d(Ljava/lang/String;)I
    .locals 2

    .line 955
    invoke-virtual {p0}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "layout"

    invoke-static {v0, p1, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    return p1
.end method

.method private d()Lcom/tkay/expressad/video/bt/module/a/a;
    .locals 1

    .line 572
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->N:Lcom/tkay/expressad/video/bt/module/a/a;

    if-nez v0, :cond_0

    .line 573
    new-instance v0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity$3;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity$3;-><init>(Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;)V

    iput-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->N:Lcom/tkay/expressad/video/bt/module/a/a;

    .line 624
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->N:Lcom/tkay/expressad/video/bt/module/a/a;

    return-object v0
.end method

.method static synthetic e(Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;)Lcom/tkay/expressad/video/bt/module/TkayBTContainer;
    .locals 0

    .line 58
    iget-object p0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->L:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    return-object p0
.end method

.method private e()V
    .locals 2

    .line 987
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->J:Ljava/util/List;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->J:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 988
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->J:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/foundation/d/c;

    .line 989
    invoke-static {v1}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->c(Lcom/tkay/expressad/foundation/d/c;)V

    goto :goto_0

    .line 993
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->H:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_1

    .line 994
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->H:Lcom/tkay/expressad/foundation/d/c;

    invoke-static {v0}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->c(Lcom/tkay/expressad/foundation/d/c;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_1
    return-void

    :catchall_0
    move-exception v0

    .line 997
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method static synthetic f(Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;)Z
    .locals 1

    const/4 v0, 0x1

    .line 58
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->A:Z

    return v0
.end method

.method static synthetic g(Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;)V
    .locals 0

    .line 58
    invoke-direct {p0}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->b()V

    return-void
.end method

.method static synthetic h(Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;)Lcom/tkay/expressad/video/bt/module/TYTempContainer;
    .locals 0

    .line 58
    iget-object p0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->K:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    return-object p0
.end method

.method static synthetic i(Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;)I
    .locals 0

    .line 58
    iget p0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->X:I

    return p0
.end method

.method static synthetic j(Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;)I
    .locals 0

    .line 58
    iget p0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->T:I

    return p0
.end method

.method static synthetic k(Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;)I
    .locals 0

    .line 58
    iget p0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->V:I

    return p0
.end method

.method static synthetic l(Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;)I
    .locals 0

    .line 58
    iget p0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->U:I

    return p0
.end method

.method static synthetic m(Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;)I
    .locals 0

    .line 58
    iget p0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->W:I

    return p0
.end method

.method static synthetic n(Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;)Lcom/tkay/expressad/video/bt/module/b/h;
    .locals 0

    .line 58
    iget-object p0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->C:Lcom/tkay/expressad/video/bt/module/b/h;

    return-object p0
.end method


# virtual methods
.method public final a(IIIII)V
    .locals 7

    .line 933
    iput p2, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->T:I

    .line 934
    iput p3, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->V:I

    .line 935
    iput p4, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->U:I

    .line 936
    iput p5, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->W:I

    .line 937
    iput p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->X:I

    .line 939
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->K:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    if-eqz v0, :cond_0

    move v1, p1

    move v2, p2

    move v3, p3

    move v4, p4

    move v5, p5

    .line 940
    invoke-virtual/range {v0 .. v5}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setNotchPadding(IIIII)V

    .line 943
    :cond_0
    iget-object v1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->L:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    if-eqz v1, :cond_1

    move v2, p1

    move v3, p2

    move v4, p3

    move v5, p4

    move v6, p5

    .line 944
    invoke-virtual/range {v1 .. v6}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->setNotchPadding(IIIII)V

    .line 7011
    :cond_1
    sput p1, Lcom/tkay/expressad/video/dynview/a/b;->e:I

    .line 7012
    sput p2, Lcom/tkay/expressad/video/dynview/a/b;->a:I

    .line 7013
    sput p3, Lcom/tkay/expressad/video/dynview/a/b;->b:I

    .line 7014
    sput p4, Lcom/tkay/expressad/video/dynview/a/b;->c:I

    .line 7015
    sput p5, Lcom/tkay/expressad/video/dynview/a/b;->d:I

    return-void
.end method

.method public finish()V
    .locals 3

    .line 901
    invoke-super {p0}, Lcom/tkay/expressad/video/signal/activity/AbstractJSActivity;->finish()V

    const-string v0, "anim"

    const-string v1, "tkay_reward_activity_close"

    .line 902
    invoke-static {p0, v1, v0}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    const-string v2, "tkay_reward_activity_stay"

    .line 903
    invoke-static {p0, v2, v0}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    const/4 v2, 0x1

    if-le v1, v2, :cond_0

    if-le v0, v2, :cond_0

    .line 905
    invoke-virtual {p0, v0, v1}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->overridePendingTransition(II)V

    .line 908
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->K:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    .line 909
    invoke-virtual {v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->onDestroy()V

    .line 910
    iput-object v1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->K:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    .line 912
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->L:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    if-eqz v0, :cond_2

    .line 913
    invoke-virtual {v0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->onDestroy()V

    .line 914
    iput-object v1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->L:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    .line 916
    :cond_2
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->q:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "_1"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/f/b;->c(Ljava/lang/String;)V

    .line 917
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->q:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "_2"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/f/b;->c(Ljava/lang/String;)V

    return-void
.end method

.method public onBackPressed()V
    .locals 1

    .line 734
    invoke-super {p0}, Lcom/tkay/expressad/video/signal/activity/AbstractJSActivity;->onBackPressed()V

    .line 735
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->K:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    if-eqz v0, :cond_0

    .line 736
    invoke-virtual {v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->onBackPressed()V

    .line 738
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->L:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    if-eqz v0, :cond_1

    .line 739
    invoke-virtual {v0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->onBackPressed()V

    :cond_1
    return-void
.end method

.method public onConfigurationChanged(Landroid/content/res/Configuration;)V
    .locals 1

    .line 721
    invoke-super {p0, p1}, Lcom/tkay/expressad/video/signal/activity/AbstractJSActivity;->onConfigurationChanged(Landroid/content/res/Configuration;)V

    .line 722
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->K:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    if-eqz v0, :cond_0

    .line 723
    iget v0, p1, Landroid/content/res/Configuration;->orientation:I

    invoke-direct {p0, v0}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->a(I)V

    .line 724
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->K:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->onConfigurationChanged(Landroid/content/res/Configuration;)V

    .line 726
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->L:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    if-eqz v0, :cond_1

    .line 727
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->onConfigurationChanged(Landroid/content/res/Configuration;)V

    :cond_1
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 11

    const-string v0, "_"

    const-string v1, ""

    const-string v2, "anim"

    .line 179
    invoke-super {p0, p1}, Lcom/tkay/expressad/video/signal/activity/AbstractJSActivity;->onCreate(Landroid/os/Bundle;)V

    const/4 v3, 0x1

    .line 180
    sput-boolean v3, Lcom/tkay/expressad/b;->x:Z

    .line 181
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v4

    invoke-virtual {v4, p0}, Lcom/tkay/expressad/foundation/b/b;->b(Landroid/content/Context;)V

    .line 185
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->getIntent()Landroid/content/Intent;

    move-result-object v4

    .line 186
    sget-object v5, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->a:Ljava/lang/String;

    invoke-virtual {v4, v5}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    iput-object v5, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->q:Ljava/lang/String;

    const-string v5, "tkay_more_offer_activity"

    .line 1955
    invoke-virtual {p0}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->getApplicationContext()Landroid/content/Context;

    move-result-object v6

    const-string v7, "layout"

    invoke-static {v6, v5, v7}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v5

    if-gez v5, :cond_0

    const-string p1, "no tkay_more_offer_activity layout"

    .line 205
    invoke-direct {p0, p1}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->b(Ljava/lang/String;)V

    return-void

    .line 208
    :cond_0
    invoke-virtual {p0, v5}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->setContentView(I)V

    .line 210
    iget-object v5, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->q:Ljava/lang/String;

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v6, "data empty error"

    if-eqz v5, :cond_1

    .line 211
    :try_start_1
    invoke-direct {p0, v6}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->b(Ljava/lang/String;)V

    return-void

    .line 216
    :cond_1
    sget-object v5, Lcom/tkay/expressad/reward/b/a;->c:Ljava/util/Map;

    iget-object v7, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->q:Ljava/lang/String;

    invoke-interface {v5, v7}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/tkay/expressad/video/bt/module/b/h;

    iput-object v5, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->C:Lcom/tkay/expressad/video/bt/module/b/h;

    .line 217
    sget-object v5, Lcom/tkay/expressad/b;->y:Ljava/lang/String;

    invoke-virtual {v4, v5}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    iput-object v5, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->r:Ljava/lang/String;

    .line 218
    sget-object v5, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->c:Ljava/lang/String;

    invoke-virtual {v4, v5}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    .line 219
    invoke-static {v5}, Lcom/tkay/expressad/videocommon/c/c;->b(Ljava/lang/String;)Lcom/tkay/expressad/videocommon/c/c;

    move-result-object v5

    iput-object v5, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->t:Lcom/tkay/expressad/videocommon/c/c;

    .line 220
    sget-object v5, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->b:Ljava/lang/String;

    invoke-virtual {v4, v5}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    iput-object v5, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->s:Ljava/lang/String;

    .line 221
    sget-object v5, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->d:Ljava/lang/String;

    const/4 v7, 0x2

    invoke-virtual {v4, v5, v7}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v5

    iput v5, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->u:I

    .line 222
    sget-object v5, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->e:Ljava/lang/String;

    const/4 v7, 0x0

    invoke-virtual {v4, v5, v7}, Landroid/content/Intent;->getBooleanExtra(Ljava/lang/String;Z)Z

    move-result v5

    iput-boolean v5, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->v:Z

    .line 224
    sget-object v5, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->f:Ljava/lang/String;

    invoke-virtual {v4, v5, v7}, Landroid/content/Intent;->getBooleanExtra(Ljava/lang/String;Z)Z

    move-result v5

    iput-boolean v5, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->w:Z

    .line 225
    sget-object v5, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->l:Ljava/lang/String;

    invoke-virtual {v4, v5}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    iput-object v5, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->P:Ljava/lang/String;

    .line 226
    iget-boolean v5, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->v:Z

    if-eqz v5, :cond_2

    .line 227
    sget-object v5, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->i:Ljava/lang/String;

    invoke-virtual {v4, v5, v7}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v5

    iput v5, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->x:I

    .line 228
    sget-object v5, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->j:Ljava/lang/String;

    invoke-virtual {v4, v5, v7}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v5

    iput v5, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->y:I

    .line 229
    sget-object v5, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->k:Ljava/lang/String;

    invoke-virtual {v4, v5, v7}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v5

    iput v5, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->z:I

    .line 231
    :cond_2
    new-instance v5, Lcom/tkay/expressad/video/signal/factory/b;

    invoke-direct {v5, p0}, Lcom/tkay/expressad/video/signal/factory/b;-><init>(Landroid/app/Activity;)V

    iput-object v5, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->o:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    .line 232
    iget-object v5, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->o:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-virtual {p0, v5}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->a(Lcom/tkay/expressad/video/signal/factory/IJSFactory;)V

    .line 234
    iget-object v5, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->C:Lcom/tkay/expressad/video/bt/module/b/h;

    if-nez v5, :cond_3

    const-string p1, "showRewardListener is null"

    .line 235
    invoke-direct {p0, p1}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->b(Ljava/lang/String;)V

    return-void

    .line 239
    :cond_3
    invoke-static {}, Lcom/tkay/expressad/reward/a/e;->a()Lcom/tkay/expressad/reward/a/e;

    move-result-object v5

    iget-object v8, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->r:Ljava/lang/String;

    iget-object v9, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->q:Ljava/lang/String;

    invoke-virtual {v5, v8, v9}, Lcom/tkay/expressad/reward/a/e;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/videocommon/e/d;

    move-result-object v5

    iput-object v5, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->D:Lcom/tkay/expressad/videocommon/e/d;

    if-nez v5, :cond_4

    .line 241
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    move-result-object v5

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v8

    invoke-virtual {v8}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v8

    iget-object v9, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->q:Ljava/lang/String;

    invoke-virtual {v5, v8, v9}, Lcom/tkay/expressad/videocommon/e/c;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/videocommon/e/d;

    move-result-object v5

    iput-object v5, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->D:Lcom/tkay/expressad/videocommon/e/d;

    if-nez v5, :cond_4

    .line 243
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    move-result-object v5

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v8

    invoke-virtual {v8}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v8

    iget-object v9, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->q:Ljava/lang/String;

    iget-boolean v10, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->v:Z

    invoke-virtual {v5, v8, v9, v10}, Lcom/tkay/expressad/videocommon/e/c;->a(Ljava/lang/String;Ljava/lang/String;Z)Lcom/tkay/expressad/videocommon/e/d;

    move-result-object v5

    iput-object v5, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->D:Lcom/tkay/expressad/videocommon/e/d;

    .line 246
    :cond_4
    iget-object v5, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->D:Lcom/tkay/expressad/videocommon/e/d;

    if-eqz v5, :cond_5

    .line 247
    iget-object v5, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->t:Lcom/tkay/expressad/videocommon/c/c;

    iget-object v8, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->D:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {v8}, Lcom/tkay/expressad/videocommon/e/d;->m()I

    move-result v8

    invoke-virtual {v5, v8}, Lcom/tkay/expressad/videocommon/c/c;->a(I)V

    .line 248
    iget-object v5, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->t:Lcom/tkay/expressad/videocommon/c/c;

    iget-object v8, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->D:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {v8}, Lcom/tkay/expressad/videocommon/e/d;->n()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v5, v8}, Lcom/tkay/expressad/videocommon/c/c;->a(Ljava/lang/String;)V

    .line 250
    :cond_5
    iget-object v5, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->t:Lcom/tkay/expressad/videocommon/c/c;

    if-eqz v5, :cond_6

    iget-object v5, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->t:Lcom/tkay/expressad/videocommon/c/c;

    invoke-virtual {v5}, Lcom/tkay/expressad/videocommon/c/c;->b()I

    move-result v5

    if-gtz v5, :cond_6

    .line 251
    iget-object v5, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->t:Lcom/tkay/expressad/videocommon/c/c;

    invoke-virtual {v5, v3}, Lcom/tkay/expressad/videocommon/c/c;->a(I)V

    :cond_6
    const-string v5, "tkay_reward_activity_open"

    .line 254
    invoke-static {p0, v5, v2}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v5

    const-string v8, "tkay_reward_activity_stay"

    .line 255
    invoke-static {p0, v8, v2}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    if-le v5, v3, :cond_7

    if-le v2, v3, :cond_7

    .line 257
    invoke-virtual {p0, v5, v2}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->overridePendingTransition(II)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :cond_7
    if-eqz p1, :cond_8

    .line 262
    :try_start_2
    sget-object v2, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->h:Ljava/lang/String;

    invoke-virtual {p1, v2}, Landroid/os/Bundle;->getBoolean(Ljava/lang/String;)Z

    move-result p1

    iput-boolean p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->F:Z
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 264
    :try_start_3
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 267
    :cond_8
    :goto_0
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object p1

    iget-object v2, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->q:Ljava/lang/String;

    invoke-virtual {p1, v2}, Lcom/tkay/expressad/videocommon/b/c;->b(Ljava/lang/String;)Ljava/util/List;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->I:Ljava/util/List;

    .line 269
    sget-object p1, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->g:Ljava/lang/String;

    invoke-virtual {v4, p1, v7}, Landroid/content/Intent;->getBooleanExtra(Ljava/lang/String;Z)Z

    move-result p1

    iput-boolean p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->A:Z

    if-nez p1, :cond_d

    .line 271
    iget-object p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->I:Ljava/util/List;

    if-eqz p1, :cond_9

    iget-object p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->I:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p1

    if-lez p1, :cond_9

    .line 272
    iget-object p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->I:Ljava/util/List;

    invoke-interface {p1, v7}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/videocommon/b/a;

    iput-object p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->G:Lcom/tkay/expressad/videocommon/b/a;

    .line 275
    :cond_9
    iget-object p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->G:Lcom/tkay/expressad/videocommon/b/a;

    if-eqz p1, :cond_a

    .line 276
    iget-object p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->G:Lcom/tkay/expressad/videocommon/b/a;

    invoke-virtual {p1}, Lcom/tkay/expressad/videocommon/b/a;->n()Lcom/tkay/expressad/foundation/d/c;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->H:Lcom/tkay/expressad/foundation/d/c;

    .line 277
    iget-object p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->G:Lcom/tkay/expressad/videocommon/b/a;

    invoke-virtual {p1, v3}, Lcom/tkay/expressad/videocommon/b/a;->a(Z)V

    .line 278
    iget-object p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->G:Lcom/tkay/expressad/videocommon/b/a;

    invoke-virtual {p1, v7}, Lcom/tkay/expressad/videocommon/b/a;->b(Z)V

    .line 280
    :cond_a
    iget-object p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->G:Lcom/tkay/expressad/videocommon/b/a;

    if-eqz p1, :cond_b

    iget-object p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->H:Lcom/tkay/expressad/foundation/d/c;

    if-eqz p1, :cond_b

    iget-object p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->t:Lcom/tkay/expressad/videocommon/c/c;

    if-nez p1, :cond_c

    .line 281
    :cond_b
    invoke-direct {p0, v6}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->b(Ljava/lang/String;)V

    .line 283
    :cond_c
    invoke-direct {p0}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->b()V

    return-void

    .line 289
    :cond_d
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object p1

    iget-object v2, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->q:Ljava/lang/String;

    invoke-virtual {p1, v2}, Lcom/tkay/expressad/videocommon/b/c;->a(Ljava/lang/String;)Ljava/util/List;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->J:Ljava/util/List;

    .line 291
    iput-object v1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->O:Ljava/lang/String;

    if-eqz p1, :cond_e

    .line 292
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p1

    if-lez p1, :cond_e

    .line 293
    iget-object p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->J:Ljava/util/List;

    invoke-interface {p1, v7}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/foundation/d/c;

    .line 294
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->ar()Ljava/lang/String;

    move-result-object v1

    .line 295
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->O:Ljava/lang/String;

    .line 297
    :cond_e
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->q:Ljava/lang/String;

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->O:Ljava/lang/String;

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 2428
    invoke-static {p1}, Lcom/tkay/expressad/videocommon/a;->a(Ljava/lang/String;)Lcom/tkay/expressad/videocommon/a$a;

    move-result-object p1

    const/4 v0, 0x0

    if-eqz p1, :cond_f

    .line 2430
    invoke-virtual {p1}, Lcom/tkay/expressad/videocommon/a$a;->a()Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    move-result-object p1

    goto :goto_1

    :cond_f
    move-object p1, v0

    .line 297
    :goto_1
    iput-object p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->M:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-nez p1, :cond_1c

    .line 299
    iget-object p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->G:Lcom/tkay/expressad/videocommon/b/a;

    if-nez p1, :cond_10

    .line 300
    iget-object p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->I:Ljava/util/List;

    if-eqz p1, :cond_10

    iget-object p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->I:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p1

    if-lez p1, :cond_10

    .line 301
    iget-object p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->I:Ljava/util/List;

    invoke-interface {p1, v7}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/videocommon/b/a;

    iput-object p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->G:Lcom/tkay/expressad/videocommon/b/a;

    .line 304
    :cond_10
    iget-object p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->G:Lcom/tkay/expressad/videocommon/b/a;

    if-nez p1, :cond_13

    .line 305
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object p1

    iget-boolean v1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->v:Z

    if-eqz v1, :cond_11

    const/16 v1, 0x11f

    goto :goto_2

    :cond_11
    const/16 v1, 0x5e

    :goto_2
    iget-object v2, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->q:Ljava/lang/String;

    iget-boolean v4, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->w:Z

    .line 3124
    invoke-virtual {p1, v2}, Lcom/tkay/expressad/videocommon/b/c;->c(Ljava/lang/String;)Lcom/tkay/expressad/videocommon/b/n;

    move-result-object p1

    if-eqz p1, :cond_12

    .line 3126
    invoke-virtual {p1, v1, v4}, Lcom/tkay/expressad/videocommon/b/n;->b(IZ)Lcom/tkay/expressad/videocommon/b/a;

    move-result-object v0

    .line 305
    :cond_12
    iput-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->G:Lcom/tkay/expressad/videocommon/b/a;

    .line 307
    :cond_13
    iget-object p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->G:Lcom/tkay/expressad/videocommon/b/a;

    if-eqz p1, :cond_14

    .line 308
    iget-object p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->G:Lcom/tkay/expressad/videocommon/b/a;

    invoke-virtual {p1}, Lcom/tkay/expressad/videocommon/b/a;->n()Lcom/tkay/expressad/foundation/d/c;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->H:Lcom/tkay/expressad/foundation/d/c;

    .line 309
    iget-object p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->G:Lcom/tkay/expressad/videocommon/b/a;

    invoke-virtual {p1, v3}, Lcom/tkay/expressad/videocommon/b/a;->a(Z)V

    .line 310
    iget-object p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->G:Lcom/tkay/expressad/videocommon/b/a;

    invoke-virtual {p1, v7}, Lcom/tkay/expressad/videocommon/b/a;->b(Z)V

    .line 313
    :cond_14
    iget-object p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->G:Lcom/tkay/expressad/videocommon/b/a;

    if-eqz p1, :cond_15

    iget-object p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->H:Lcom/tkay/expressad/foundation/d/c;

    if-eqz p1, :cond_15

    iget-object p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->t:Lcom/tkay/expressad/videocommon/c/c;

    if-nez p1, :cond_16

    .line 314
    :cond_15
    invoke-direct {p0, v6}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->b(Ljava/lang/String;)V

    .line 316
    :cond_16
    iput-boolean v7, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->A:Z

    .line 324
    invoke-static {}, Lcom/tkay/expressad/videocommon/a/a;->a()Lcom/tkay/expressad/videocommon/a/a;

    iget-object p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->J:Ljava/util/List;

    invoke-static {p1}, Lcom/tkay/expressad/videocommon/a/a;->a(Ljava/util/List;)Ljava/util/List;

    move-result-object p1
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    const-string v0, "no available campaign"

    if-nez p1, :cond_17

    .line 326
    :try_start_4
    invoke-direct {p0, v0}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->b(Ljava/lang/String;)V

    return-void

    .line 329
    :cond_17
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v1

    if-nez v1, :cond_18

    .line 331
    invoke-direct {p0, v0}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->b(Ljava/lang/String;)V

    return-void

    .line 335
    :cond_18
    invoke-interface {p1, v7}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_1b

    invoke-interface {p1, v7}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    if-eqz v0, :cond_1b

    if-ne v1, v3, :cond_1a

    .line 337
    invoke-interface {p1, v7}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/foundation/d/c;

    iput-object p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->H:Lcom/tkay/expressad/foundation/d/c;

    if-eqz p1, :cond_19

    .line 339
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->m()V

    .line 342
    :cond_19
    iget-object p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->H:Lcom/tkay/expressad/foundation/d/c;

    invoke-direct {p0, p1}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->b(Lcom/tkay/expressad/foundation/d/c;)V

    return-void

    .line 344
    :cond_1a
    invoke-direct {p0, p1}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->a(Ljava/util/List;)V

    return-void

    .line 347
    :cond_1b
    invoke-direct {p0}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->b()V

    return-void

    .line 350
    :cond_1c
    invoke-direct {p0}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->c()V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 355
    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "onCreate error"

    invoke-virtual {v0, p1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->b(Ljava/lang/String;)V

    return-void
.end method

.method public onDestroy()V
    .locals 6

    .line 765
    :try_start_0
    invoke-super {p0}, Lcom/tkay/expressad/video/signal/activity/AbstractJSActivity;->onDestroy()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 6987
    :catchall_0
    :try_start_1
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->J:Ljava/util/List;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->J:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 6988
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->J:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/foundation/d/c;

    .line 6989
    invoke-static {v1}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->c(Lcom/tkay/expressad/foundation/d/c;)V

    goto :goto_0

    .line 6993
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->H:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_1

    .line 6994
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->H:Lcom/tkay/expressad/foundation/d/c;

    invoke-static {v0}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->c(Lcom/tkay/expressad/foundation/d/c;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    goto :goto_1

    :catchall_1
    move-exception v0

    .line 6997
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    .line 772
    :cond_1
    :goto_1
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->q:Ljava/lang/String;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/b/a;->a(Ljava/lang/String;)V

    .line 773
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->K:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    const/4 v1, 0x0

    if-eqz v0, :cond_2

    .line 774
    invoke-virtual {v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->onDestroy()V

    .line 775
    iput-object v1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->K:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    .line 777
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->L:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    if-eqz v0, :cond_3

    .line 778
    invoke-virtual {v0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->onDestroy()V

    .line 779
    iput-object v1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->L:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    .line 782
    :cond_3
    iput-object v1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->Y:Lcom/tkay/expressad/video/dynview/f/a;

    .line 783
    iput-object v1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->Z:Lcom/tkay/expressad/video/dynview/f/d;

    .line 785
    invoke-static {}, Lcom/tkay/expressad/foundation/g/h/a;->a()Ljava/util/concurrent/ThreadPoolExecutor;

    move-result-object v0

    new-instance v2, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity$a;

    iget-object v3, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->I:Ljava/util/List;

    iget-object v4, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->q:Ljava/lang/String;

    iget-object v5, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->O:Ljava/lang/String;

    invoke-direct {v2, v3, v4, v5}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity$a;-><init>(Ljava/util/List;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0, v2}, Ljava/util/concurrent/ThreadPoolExecutor;->execute(Ljava/lang/Runnable;)V

    .line 788
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->J:Ljava/util/List;

    if-eqz v0, :cond_4

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_4

    .line 789
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->J:Ljava/util/List;

    const/4 v1, 0x0

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    move-object v1, v0

    check-cast v1, Lcom/tkay/expressad/foundation/d/c;

    :cond_4
    if-nez v1, :cond_5

    .line 792
    iget-object v1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->H:Lcom/tkay/expressad/foundation/d/c;

    :cond_5
    if-eqz v1, :cond_6

    .line 794
    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_6

    .line 795
    invoke-static {}, Lcom/tkay/core/common/a/j;->a()Lcom/tkay/core/common/a/j;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/a/j;->b()V

    :cond_6
    return-void
.end method

.method public onPause()V
    .locals 1

    .line 710
    invoke-super {p0}, Lcom/tkay/expressad/video/signal/activity/AbstractJSActivity;->onPause()V

    .line 711
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->K:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    if-eqz v0, :cond_0

    .line 712
    invoke-virtual {v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->onPause()V

    .line 714
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->L:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    if-eqz v0, :cond_1

    .line 715
    invoke-virtual {v0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->onPause()V

    :cond_1
    return-void
.end method

.method protected onRestart()V
    .locals 1

    .line 801
    invoke-super {p0}, Lcom/tkay/expressad/video/signal/activity/AbstractJSActivity;->onRestart()V

    .line 802
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->K:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    if-eqz v0, :cond_0

    .line 803
    invoke-virtual {v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->onRestart()V

    .line 805
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->L:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    if-eqz v0, :cond_1

    .line 806
    invoke-virtual {v0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->onRestart()V

    :cond_1
    return-void
.end method

.method public onResume()V
    .locals 1

    .line 687
    invoke-super {p0}, Lcom/tkay/expressad/video/signal/activity/AbstractJSActivity;->onResume()V

    .line 688
    sget-boolean v0, Lcom/tkay/expressad/foundation/f/b;->c:Z

    if-eqz v0, :cond_0

    return-void

    .line 691
    :cond_0
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/tkay/expressad/foundation/b/b;->b(Landroid/content/Context;)V

    .line 700
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->K:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    if-eqz v0, :cond_1

    .line 701
    invoke-virtual {v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->onResume()V

    .line 703
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->L:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    if-eqz v0, :cond_2

    .line 704
    invoke-virtual {v0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->onResume()V

    :cond_2
    return-void
.end method

.method public onSaveInstanceState(Landroid/os/Bundle;)V
    .locals 2

    .line 922
    sget-object v0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->h:Ljava/lang/String;

    iget-boolean v1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->F:Z

    invoke-virtual {p1, v0, v1}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 923
    invoke-super {p0, p1}, Lcom/tkay/expressad/video/signal/activity/AbstractJSActivity;->onSaveInstanceState(Landroid/os/Bundle;)V

    return-void
.end method

.method protected onStart()V
    .locals 5

    .line 812
    invoke-super {p0}, Lcom/tkay/expressad/video/signal/activity/AbstractJSActivity;->onStart()V

    .line 814
    new-instance v0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity$4;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity$4;-><init>(Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;)V

    .line 830
    sget-boolean v0, Lcom/tkay/expressad/foundation/f/b;->c:Z

    if-eqz v0, :cond_0

    return-void

    .line 833
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->K:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    const-string v1, "_1"

    if-eqz v0, :cond_1

    .line 834
    invoke-virtual {v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->onStart()V

    .line 835
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->H:Lcom/tkay/expressad/foundation/d/c;

    iget-object v2, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->q:Ljava/lang/String;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/foundation/d/c;->l(Ljava/lang/String;)V

    .line 836
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->q:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->H:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0, v2, v3}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;)V

    .line 838
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->L:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    if-eqz v0, :cond_2

    .line 839
    invoke-virtual {v0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->onStart()V

    .line 840
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->J:Ljava/util/List;

    if-eqz v0, :cond_2

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_2

    .line 841
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->J:Ljava/util/List;

    const/4 v2, 0x0

    invoke-interface {v0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/foundation/d/c;

    .line 842
    iget-object v2, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->q:Ljava/lang/String;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/foundation/d/c;->l(Ljava/lang/String;)V

    .line 843
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->q:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3, v0}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;)V

    .line 847
    :cond_2
    iget-boolean v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->Q:Z

    if-nez v0, :cond_3

    .line 848
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->q:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x1

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/foundation/f/b;->b(Ljava/lang/String;I)V

    .line 849
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->q:Ljava/lang/String;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "_2"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/f/b;->c(Ljava/lang/String;)V

    .line 851
    iput-boolean v2, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->Q:Z

    :cond_3
    return-void
.end method

.method protected onStop()V
    .locals 1

    const/4 v0, 0x0

    .line 745
    sput-boolean v0, Lcom/tkay/expressad/b;->x:Z

    .line 747
    :try_start_0
    invoke-super {p0}, Lcom/tkay/expressad/video/signal/activity/AbstractJSActivity;->onStop()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 754
    :catchall_0
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->K:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    if-eqz v0, :cond_0

    .line 755
    invoke-virtual {v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->onStop()V

    .line 757
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->L:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    if-eqz v0, :cond_1

    .line 758
    invoke-virtual {v0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->onStop()V

    :cond_1
    return-void
.end method

.method public setTheme(I)V
    .locals 1

    const-string p1, "tkay_transparent_theme"

    const-string v0, "style"

    .line 1016
    invoke-static {p0, p1, v0}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    invoke-super {p0, p1}, Lcom/tkay/expressad/video/signal/activity/AbstractJSActivity;->setTheme(I)V

    return-void
.end method
