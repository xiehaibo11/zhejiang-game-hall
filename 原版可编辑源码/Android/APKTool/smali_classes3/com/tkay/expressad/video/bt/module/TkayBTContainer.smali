.class public Lcom/tkay/expressad/video/bt/module/TkayBTContainer;
.super Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;

# interfaces
.implements Lcom/tkay/expressad/video/signal/b;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/video/bt/module/TkayBTContainer$a;
    }
.end annotation


# static fields
.field private static final d:Ljava/lang/String;


# instance fields
.field private A:Landroid/content/Context;

.field private B:Landroid/widget/TextView;

.field private C:Z

.field private D:Z

.field private E:Ljava/lang/String;

.field private F:Z

.field private G:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;"
        }
    .end annotation
.end field

.field private H:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/expressad/videocommon/b/a;",
            ">;"
        }
    .end annotation
.end field

.field private I:Lcom/tkay/expressad/video/bt/module/a/a;

.field private J:Lcom/tkay/expressad/video/bt/module/b/h;

.field private K:Lcom/tkay/expressad/video/bt/module/b/h;

.field private L:Lcom/tkay/expressad/video/bt/module/a/b;

.field private M:Ljava/lang/String;

.field private N:Ljava/lang/String;

.field private O:Z

.field private P:I

.field private Q:Z

.field private R:I

.field private S:Ljava/lang/String;

.field private T:Lcom/tkay/expressad/video/dynview/f/d;

.field a:Lcom/tkay/expressad/foundation/d/c;

.field private e:I

.field private f:I

.field private g:Landroid/widget/FrameLayout;

.field private h:Lcom/tkay/expressad/video/bt/module/TkayBTLayout;

.field private i:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

.field private j:Landroid/view/LayoutInflater;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 76
    const-class v0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->d:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 2

    .line 116
    invoke-direct {p0, p1}, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;-><init>(Landroid/content/Context;)V

    const/4 v0, 0x0

    .line 78
    iput v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->e:I

    const/4 v1, 0x1

    .line 79
    iput v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->f:I

    .line 90
    iput-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->C:Z

    .line 91
    iput-boolean v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->D:Z

    .line 94
    iput-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->F:Z

    .line 106
    iput v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->P:I

    .line 117
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->init(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    .line 121
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const/4 p2, 0x0

    .line 78
    iput p2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->e:I

    const/4 v0, 0x1

    .line 79
    iput v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->f:I

    .line 90
    iput-boolean p2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->C:Z

    .line 91
    iput-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->D:Z

    .line 94
    iput-boolean p2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->F:Z

    .line 106
    iput v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->P:I

    .line 122
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->init(Landroid/content/Context;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;I)I
    .locals 0

    .line 75
    iput p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->R:I

    return p1
.end method

.method static synthetic a(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;Landroid/widget/TextView;)Landroid/widget/TextView;
    .locals 0

    .line 75
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->B:Landroid/widget/TextView;

    return-object p1
.end method

.method static synthetic a(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;
    .locals 0

    .line 75
    iget-object p0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->i:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    return-object p0
.end method

.method static synthetic a()Ljava/lang/String;
    .locals 1

    .line 75
    sget-object v0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->d:Ljava/lang/String;

    return-object v0
.end method

.method private a(Landroid/content/Context;)V
    .locals 3

    .line 338
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->T:Lcom/tkay/expressad/video/dynview/f/d;

    if-nez v0, :cond_0

    const-string p1, "ChoiceOneCallback is null"

    .line 339
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->a(Ljava/lang/String;)V

    return-void

    .line 342
    :cond_0
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 343
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->T:Lcom/tkay/expressad/video/dynview/f/d;

    const-string v2, "choice_one_callback"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 344
    invoke-static {}, Lcom/tkay/expressad/video/dynview/b;->a()Lcom/tkay/expressad/video/dynview/b;

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->G:Ljava/util/List;

    new-instance v2, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$2;

    invoke-direct {v2, p0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$2;-><init>(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)V

    invoke-static {p1, v1, v2, v0}, Lcom/tkay/expressad/video/dynview/b;->a(Landroid/content/Context;Ljava/util/List;Lcom/tkay/expressad/video/dynview/f/h;Ljava/util/Map;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;Z)Z
    .locals 0

    .line 75
    iput-boolean p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->Q:Z

    return p1
.end method

.method private a(Z)Z
    .locals 4

    const/4 v0, 0x0

    .line 1187
    :try_start_0
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->o:Lcom/tkay/expressad/videocommon/e/d;

    if-nez v1, :cond_0

    return v0

    .line 1190
    :cond_0
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->o:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {v1}, Lcom/tkay/expressad/videocommon/e/d;->K()I

    move-result v1

    const/4 v2, 0x1

    if-eq v1, v2, :cond_4

    const/4 v3, 0x2

    if-eq v1, v3, :cond_2

    const/4 p1, 0x3

    if-eq v1, p1, :cond_1

    goto :goto_0

    .line 1198
    :cond_1
    invoke-direct {p0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->g()Z

    move-result p1

    return p1

    :cond_2
    if-eqz p1, :cond_3

    .line 1195
    invoke-direct {p0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->g()Z

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz p1, :cond_3

    return v2

    :cond_3
    return v0

    :cond_4
    return p1

    :catchall_0
    :goto_0
    return v0
.end method

.method static synthetic b(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Landroid/widget/FrameLayout;
    .locals 0

    .line 75
    iget-object p0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->g:Landroid/widget/FrameLayout;

    return-object p0
.end method

.method private b(Ljava/lang/String;)Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;
    .locals 2

    .line 616
    invoke-static {p1}, Lcom/tkay/expressad/videocommon/a;->a(Ljava/lang/String;)Lcom/tkay/expressad/videocommon/a$a;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 618
    invoke-virtual {p1}, Lcom/tkay/expressad/videocommon/a$a;->b()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->E:Ljava/lang/String;

    .line 619
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "get BT wraper.getTag = "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->E:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, ""

    .line 620
    invoke-virtual {p1, v0}, Lcom/tkay/expressad/videocommon/a$a;->a(Ljava/lang/String;)V

    .line 621
    invoke-virtual {p1}, Lcom/tkay/expressad/videocommon/a$a;->a()Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    move-result-object p1

    return-object p1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method static synthetic c(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Lcom/tkay/expressad/video/bt/module/a/a;
    .locals 0

    .line 75
    iget-object p0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->I:Lcom/tkay/expressad/video/bt/module/a/a;

    return-object p0
.end method

.method private c()Lcom/tkay/expressad/video/bt/module/a/b;
    .locals 1

    .line 472
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->L:Lcom/tkay/expressad/video/bt/module/a/b;

    if-nez v0, :cond_0

    .line 473
    new-instance v0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$3;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$3;-><init>(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)V

    iput-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->L:Lcom/tkay/expressad/video/bt/module/a/b;

    .line 611
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->L:Lcom/tkay/expressad/video/bt/module/a/b;

    return-object v0
.end method

.method private d(Lcom/tkay/expressad/foundation/d/c;)Lcom/tkay/expressad/videocommon/b/a;
    .locals 4

    .line 1016
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->H:Ljava/util/List;

    if-eqz v0, :cond_1

    if-eqz p1, :cond_1

    .line 1017
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/videocommon/b/a;

    .line 1018
    invoke-virtual {v1}, Lcom/tkay/expressad/videocommon/b/a;->n()Lcom/tkay/expressad/foundation/d/c;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    return-object v1

    :cond_1
    const/4 p1, 0x0

    return-object p1
.end method

.method static synthetic d(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Ljava/util/List;
    .locals 0

    .line 75
    iget-object p0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->G:Ljava/util/List;

    return-object p0
.end method

.method private static d()V
    .locals 0

    return-void
.end method

.method static synthetic e(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Ljava/lang/String;
    .locals 0

    .line 75
    iget-object p0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->m:Ljava/lang/String;

    return-object p0
.end method

.method private static e()Z
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method private static f()I
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method static synthetic f(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Ljava/lang/String;
    .locals 0

    .line 75
    iget-object p0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->m:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic g(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Ljava/lang/String;
    .locals 0

    .line 75
    iget-object p0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->n:Ljava/lang/String;

    return-object p0
.end method

.method private g()Z
    .locals 5

    const/4 v0, 0x0

    .line 1215
    :try_start_0
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->o:Lcom/tkay/expressad/videocommon/e/d;

    if-nez v1, :cond_0

    return v0

    .line 1218
    :cond_0
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->o:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {v1}, Lcom/tkay/expressad/videocommon/e/d;->L()D

    move-result-wide v1

    const-wide/high16 v3, 0x3ff0000000000000L    # 1.0

    cmpl-double v3, v1, v3

    if-nez v3, :cond_1

    return v0

    .line 1222
    :cond_1
    new-instance v3, Ljava/util/Random;

    invoke-direct {v3}, Ljava/util/Random;-><init>()V

    invoke-virtual {v3}, Ljava/util/Random;->nextDouble()D

    move-result-wide v3
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    cmpl-double v1, v3, v1

    if-lez v1, :cond_2

    const/4 v0, 0x1

    :catchall_0
    :cond_2
    return v0
.end method

.method static synthetic h(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Ljava/lang/String;
    .locals 0

    .line 75
    iget-object p0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->m:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic i(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Ljava/lang/String;
    .locals 0

    .line 75
    iget-object p0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->n:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic j(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Ljava/lang/String;
    .locals 0

    .line 75
    iget-object p0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->m:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic k(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Ljava/lang/String;
    .locals 0

    .line 75
    iget-object p0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->n:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic l(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Ljava/lang/String;
    .locals 0

    .line 75
    iget-object p0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->m:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic m(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Ljava/lang/String;
    .locals 0

    .line 75
    iget-object p0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->n:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic n(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Ljava/lang/String;
    .locals 0

    .line 75
    iget-object p0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->m:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic o(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Ljava/lang/String;
    .locals 0

    .line 75
    iget-object p0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->n:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic p(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Ljava/lang/String;
    .locals 0

    .line 75
    iget-object p0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->m:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic q(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Landroid/app/Activity;
    .locals 0

    .line 75
    iget-object p0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->l:Landroid/app/Activity;

    return-object p0
.end method

.method static synthetic r(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Z
    .locals 0

    .line 75
    iget-boolean p0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->D:Z

    return p0
.end method

.method static synthetic s(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Landroid/app/Activity;
    .locals 0

    .line 75
    iget-object p0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->l:Landroid/app/Activity;

    return-object p0
.end method

.method static synthetic t(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Lcom/tkay/expressad/video/bt/module/b/h;
    .locals 0

    .line 75
    iget-object p0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->K:Lcom/tkay/expressad/video/bt/module/b/h;

    return-object p0
.end method


# virtual methods
.method protected final a(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 5

    if-eqz p1, :cond_0

    .line 438
    :try_start_0
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->e()Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 439
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_0

    .line 440
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 441
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->m:Ljava/lang/String;

    const/4 v4, 0x1

    invoke-static {v2, p1, v3, v1, v4}, Lcom/tkay/expressad/a/a;->a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 446
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    :cond_0
    return-void
.end method

.method protected final a(Ljava/lang/String;)V
    .locals 1

    .line 429
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->J:Lcom/tkay/expressad/video/bt/module/b/h;

    if-eqz v0, :cond_0

    .line 430
    invoke-interface {v0, p1}, Lcom/tkay/expressad/video/bt/module/b/h;->a(Ljava/lang/String;)V

    .line 432
    :cond_0
    invoke-super {p0, p1}, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->a(Ljava/lang/String;)V

    return-void
.end method

.method public appendSubView(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;Lcom/tkay/expressad/video/bt/module/TYTempContainer;Lorg/json/JSONObject;)V
    .locals 7

    .line 967
    :try_start_0
    new-instance v0, Landroid/widget/FrameLayout$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {v0, v1, v1}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    if-eqz p3, :cond_5

    .line 969
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    const-string v2, "left"

    const/16 v3, -0x3e7

    .line 970
    invoke-virtual {p3, v2, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v2

    const-string v4, "top"

    .line 971
    invoke-virtual {p3, v4, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v4

    const-string v5, "right"

    .line 972
    invoke-virtual {p3, v5, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v5

    const-string v6, "bottom"

    .line 973
    invoke-virtual {p3, v6, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v6

    if-eq v2, v3, :cond_0

    if-eqz v1, :cond_0

    int-to-float v2, v2

    .line 975
    invoke-static {v1, v2}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v2

    iput v2, v0, Landroid/widget/FrameLayout$LayoutParams;->leftMargin:I

    :cond_0
    if-eq v4, v3, :cond_1

    if-eqz v1, :cond_1

    int-to-float v2, v4

    .line 978
    invoke-static {v1, v2}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v2

    iput v2, v0, Landroid/widget/FrameLayout$LayoutParams;->topMargin:I

    :cond_1
    if-eq v5, v3, :cond_2

    if-eqz v1, :cond_2

    int-to-float v2, v5

    .line 981
    invoke-static {v1, v2}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v2

    iput v2, v0, Landroid/widget/FrameLayout$LayoutParams;->rightMargin:I

    :cond_2
    if-eq v6, v3, :cond_3

    if-eqz v1, :cond_3

    int-to-float v2, v6

    .line 984
    invoke-static {v1, v2}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v1

    iput v1, v0, Landroid/widget/FrameLayout$LayoutParams;->bottomMargin:I

    :cond_3
    const-string v1, "width"

    .line 986
    invoke-virtual {p3, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v1

    const-string v2, "height"

    .line 987
    invoke-virtual {p3, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p3

    if-lez v1, :cond_4

    .line 989
    iput v1, v0, Landroid/widget/FrameLayout$LayoutParams;->width:I

    :cond_4
    if-lez p3, :cond_5

    .line 992
    iput p3, v0, Landroid/widget/FrameLayout$LayoutParams;->height:I

    .line 995
    :cond_5
    invoke-virtual {p1, p2, v0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 996
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->l:Landroid/app/Activity;

    invoke-virtual {p2, p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setActivity(Landroid/app/Activity;)V

    .line 997
    iget p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->s:I

    invoke-virtual {p2, p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setMute(I)V

    .line 998
    iget-boolean p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->C:Z

    invoke-virtual {p2, p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setBidCampaign(Z)V

    .line 999
    iget-boolean p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->t:Z

    invoke-virtual {p2, p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setIV(Z)V

    .line 1000
    iget-boolean p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->D:Z

    invoke-virtual {p2, p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setBigOffer(Z)V

    .line 1001
    iget p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->v:I

    iget p3, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->w:I

    iget v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->x:I

    invoke-virtual {p2, p1, p3, v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setIVRewardEnable(III)V

    .line 1002
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->K:Lcom/tkay/expressad/video/bt/module/b/h;

    invoke-virtual {p2, p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setShowRewardListener(Lcom/tkay/expressad/video/bt/module/b/h;)V

    .line 1003
    invoke-virtual {p2}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getCampaign()Lcom/tkay/expressad/foundation/d/c;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->d(Lcom/tkay/expressad/foundation/d/c;)Lcom/tkay/expressad/videocommon/b/a;

    move-result-object p1

    invoke-virtual {p2, p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setCampaignDownLoadTask(Lcom/tkay/expressad/videocommon/b/a;)V

    .line 1004
    invoke-direct {p0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->c()Lcom/tkay/expressad/video/bt/module/a/b;

    move-result-object p1

    invoke-virtual {p2, p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setTkayTempCallback(Lcom/tkay/expressad/video/bt/module/a/b;)V

    .line 1005
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/expressad/video/signal/c;->e()I

    move-result p1

    invoke-virtual {p2, p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setH5Cbp(I)V

    .line 1006
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/expressad/video/signal/c;->f()I

    move-result p1

    invoke-virtual {p2, p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setWebViewFront(I)V

    .line 1008
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->A:Landroid/content/Context;

    invoke-virtual {p2, p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->init(Landroid/content/Context;)V

    .line 1009
    invoke-virtual {p2}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->onCreate()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 1011
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public broadcast(Ljava/lang/String;Lorg/json/JSONObject;)V
    .locals 4

    const-string v0, "broadcast"

    .line 1028
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->i:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v1, :cond_0

    .line 1030
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "code"

    .line 1031
    iget v3, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->e:I

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v2, "id"

    .line 1032
    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->E:Ljava/lang/String;

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "eventName"

    .line 1033
    invoke-virtual {v1, v2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "data"

    .line 1034
    invoke-virtual {v1, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 1035
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->i:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/String;->getBytes()[B

    move-result-object p2

    const/4 v1, 0x2

    invoke-static {p2, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p2

    invoke-static {p1, v0, p2}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    .line 1037
    :catch_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->i:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    iget-object p2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->E:Ljava/lang/String;

    invoke-static {p1, v0, p2}, Lcom/tkay/expressad/video/bt/a/c;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public click(ILjava/lang/String;)V
    .locals 0

    return-void
.end method

.method public findID(Ljava/lang/String;)I
    .locals 2

    .line 1066
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "id"

    invoke-static {v0, p1, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    return p1
.end method

.method public findLayout(Ljava/lang/String;)I
    .locals 2

    .line 1070
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "layout"

    invoke-static {v0, p1, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    return p1
.end method

.method public handlerH5Exception(ILjava/lang/String;)V
    .locals 0

    return-void
.end method

.method public init(Landroid/content/Context;)V
    .locals 0

    .line 126
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->A:Landroid/content/Context;

    .line 127
    invoke-static {p1}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->j:Landroid/view/LayoutInflater;

    return-void
.end method

.method public isNativeKilledCallback(Lcom/tkay/expressad/foundation/d/c;)Z
    .locals 3

    .line 1099
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/c;->e()I

    move-result v0

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-ne v0, v2, :cond_0

    return v1

    :cond_0
    if-eqz p1, :cond_4

    .line 1105
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->n()I

    move-result v0

    if-ne v0, v2, :cond_2

    .line 1106
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->o:Lcom/tkay/expressad/videocommon/e/d;

    if-eqz v0, :cond_4

    .line 1107
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->o:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/e/d;->M()I

    move-result v0

    if-ne v0, v2, :cond_1

    .line 1108
    invoke-virtual {p1, v2}, Lcom/tkay/expressad/foundation/d/c;->m(I)V

    return v2

    .line 1111
    :cond_1
    invoke-virtual {p1, v1}, Lcom/tkay/expressad/foundation/d/c;->m(I)V

    return v1

    .line 1116
    :cond_2
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->A()Z

    move-result v0

    if-eqz v0, :cond_3

    .line 1118
    invoke-virtual {p1, v1}, Lcom/tkay/expressad/foundation/d/c;->m(I)V

    return v1

    .line 1121
    :cond_3
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->o:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/e/d;->a()I

    move-result v0

    .line 1122
    invoke-virtual {p1, v0}, Lcom/tkay/expressad/foundation/d/c;->m(I)V

    if-ne v0, v2, :cond_4

    return v2

    :cond_4
    return v1
.end method

.method public onAdClose()V
    .locals 1

    .line 726
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->l:Landroid/app/Activity;

    if-eqz v0, :cond_0

    .line 727
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->l:Landroid/app/Activity;

    invoke-virtual {v0}, Landroid/app/Activity;->finish()V

    :cond_0
    return-void
.end method

.method public onBackPressed()V
    .locals 3

    .line 679
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->m:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->N:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 680
    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->size()I

    move-result v1

    if-lez v1, :cond_3

    .line 681
    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/view/View;

    .line 682
    instance-of v2, v1, Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    if-eqz v2, :cond_1

    .line 683
    check-cast v1, Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-virtual {v1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->onBackPressed()V

    goto :goto_0

    .line 684
    :cond_1
    instance-of v2, v1, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;

    if-eqz v2, :cond_2

    .line 685
    check-cast v1, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;

    invoke-virtual {v1}, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->onBackPressed()V

    goto :goto_0

    .line 686
    :cond_2
    instance-of v2, v1, Lcom/tkay/expressad/video/bt/module/TkayBTLayout;

    if-eqz v2, :cond_0

    .line 687
    check-cast v1, Lcom/tkay/expressad/video/bt/module/TkayBTLayout;

    invoke-virtual {v1}, Lcom/tkay/expressad/video/bt/module/TkayBTLayout;->onBackPressed()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :cond_3
    return-void

    :catchall_0
    move-exception v0

    .line 692
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public onConfigurationChanged(Landroid/content/res/Configuration;)V
    .locals 3

    .line 452
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->m:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->N:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 453
    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->size()I

    move-result v1

    if-lez v1, :cond_3

    .line 454
    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/view/View;

    .line 455
    instance-of v2, v1, Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    if-eqz v2, :cond_1

    .line 456
    check-cast v1, Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-virtual {v1, p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->onConfigurationChanged(Landroid/content/res/Configuration;)V

    goto :goto_0

    .line 457
    :cond_1
    instance-of v2, v1, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;

    if-eqz v2, :cond_2

    .line 458
    check-cast v1, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;

    invoke-virtual {v1, p1}, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->onConfigurationChanged(Landroid/content/res/Configuration;)V

    goto :goto_0

    .line 459
    :cond_2
    instance-of v2, v1, Lcom/tkay/expressad/video/bt/module/TkayBTLayout;

    if-eqz v2, :cond_0

    .line 460
    check-cast v1, Lcom/tkay/expressad/video/bt/module/TkayBTLayout;

    invoke-virtual {v1, p1}, Lcom/tkay/expressad/video/bt/module/TkayBTLayout;->onConfigurationChanged(Landroid/content/res/Configuration;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :cond_3
    return-void

    :catchall_0
    move-exception p1

    .line 465
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public onCreate()V
    .locals 9

    const-string v0, "_1"

    const-string v1, ""

    const-string v2, "_"

    :try_start_0
    const-string v3, "tkay_bt_container"

    .line 132
    invoke-virtual {p0, v3}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->findLayout(Ljava/lang/String;)I

    move-result v3

    if-gez v3, :cond_0

    const-string v0, "tkay_bt_container layout null"

    .line 134
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->a(Ljava/lang/String;)V

    return-void

    .line 137
    :cond_0
    iget-object v4, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->j:Landroid/view/LayoutInflater;

    invoke-virtual {v4, v3, p0}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/FrameLayout;

    iput-object v3, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->g:Landroid/widget/FrameLayout;

    if-nez v3, :cond_1

    const-string v0, "ViewIds null"

    .line 139
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->a(Ljava/lang/String;)V

    return-void

    .line 144
    :cond_1
    iput-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->N:Ljava/lang/String;

    .line 145
    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->G:Ljava/util/List;

    const/4 v4, 0x0

    if-eqz v3, :cond_2

    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->G:Ljava/util/List;

    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v3

    if-lez v3, :cond_2

    .line 146
    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->G:Ljava/util/List;

    invoke-interface {v3, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/tkay/expressad/foundation/d/c;

    .line 147
    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c;->ar()Ljava/lang/String;

    move-result-object v5

    .line 148
    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v3

    iput-object v3, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->N:Ljava/lang/String;

    goto :goto_0

    :cond_2
    move-object v5, v1

    .line 150
    :goto_0
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v6, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->m:Ljava/lang/String;

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v6, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->N:Ljava/lang/String;

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 1616
    invoke-static {v3}, Lcom/tkay/expressad/videocommon/a;->a(Ljava/lang/String;)Lcom/tkay/expressad/videocommon/a$a;

    move-result-object v3

    const/4 v6, 0x0

    if-eqz v3, :cond_3

    .line 1618
    invoke-virtual {v3}, Lcom/tkay/expressad/videocommon/a$a;->b()Ljava/lang/String;

    move-result-object v7

    iput-object v7, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->E:Ljava/lang/String;

    .line 1619
    new-instance v7, Ljava/lang/StringBuilder;

    const-string v8, "get BT wraper.getTag = "

    invoke-direct {v7, v8}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v8, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->E:Ljava/lang/String;

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1620
    invoke-virtual {v3, v1}, Lcom/tkay/expressad/videocommon/a$a;->a(Ljava/lang/String;)V

    .line 1621
    invoke-virtual {v3}, Lcom/tkay/expressad/videocommon/a$a;->a()Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    move-result-object v3

    goto :goto_1

    :cond_3
    move-object v3, v6

    .line 150
    :goto_1
    iput-object v3, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->i:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 151
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v7, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->m:Ljava/lang/String;

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v7, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->N:Ljava/lang/String;

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Lcom/tkay/expressad/videocommon/a;->b(Ljava/lang/String;)V

    .line 152
    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->i:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v3, :cond_f

    .line 153
    new-instance v3, Lcom/tkay/expressad/video/signal/factory/b;

    iget-object v5, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->l:Landroid/app/Activity;

    iget-object v7, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->i:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-direct {v3, v5, p0, v7}, Lcom/tkay/expressad/video/signal/factory/b;-><init>(Landroid/app/Activity;Lcom/tkay/expressad/video/bt/module/TkayBTContainer;Landroid/webkit/WebView;)V

    .line 154
    invoke-virtual {p0, v3}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->registerJsFactory(Lcom/tkay/expressad/video/signal/factory/IJSFactory;)V

    .line 155
    iget-object v5, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->i:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v5, v3}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setApiManagerJSFactory(Ljava/lang/Object;)V

    .line 156
    iget-object v5, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->i:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v5}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getParent()Landroid/view/ViewParent;

    move-result-object v5

    if-eqz v5, :cond_4

    const-string v0, "preload template webview is null or load error"

    .line 157
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->a(Ljava/lang/String;)V

    return-void

    .line 160
    :cond_4
    iget-object v5, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->i:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v5}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v5

    instance-of v5, v5, Lcom/tkay/expressad/video/signal/a/j;

    if-eqz v5, :cond_6

    .line 161
    iget-object v5, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->i:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v5}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/tkay/expressad/video/signal/a/j;

    invoke-virtual {v3, v5}, Lcom/tkay/expressad/video/signal/factory/b;->a(Lcom/tkay/expressad/video/signal/a/j;)V

    .line 162
    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->i:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v3, :cond_5

    .line 163
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3}, Lorg/json/JSONObject;-><init>()V

    .line 164
    sget-object v5, Lcom/tkay/expressad/foundation/g/a;->ch:Ljava/lang/String;

    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->getContext()Landroid/content/Context;

    move-result-object v7

    invoke-static {v7}, Lcom/tkay/expressad/foundation/h/t;->c(Landroid/content/Context;)F

    move-result v7

    float-to-double v7, v7

    invoke-virtual {v3, v5, v7, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 166
    :try_start_1
    new-instance v5, Lorg/json/JSONObject;

    invoke-direct {v5}, Lorg/json/JSONObject;-><init>()V

    const-string v7, "name"

    .line 167
    iget-object v8, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->q:Lcom/tkay/expressad/videocommon/c/c;

    invoke-virtual {v8}, Lcom/tkay/expressad/videocommon/c/c;->a()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v5, v7, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v7, "amount"

    .line 168
    iget-object v8, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->q:Lcom/tkay/expressad/videocommon/c/c;

    invoke-virtual {v8}, Lcom/tkay/expressad/videocommon/c/c;->b()I

    move-result v8

    invoke-virtual {v5, v7, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v7, "id"

    .line 169
    iget-object v8, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->r:Ljava/lang/String;

    invoke-virtual {v5, v7, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v7, "userId"

    .line 170
    iget-object v8, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->p:Ljava/lang/String;

    invoke-virtual {v3, v7, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v7, "reward"

    .line 171
    invoke-virtual {v3, v7, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v5, "playVideoMute"

    .line 172
    iget v7, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->s:I

    invoke-virtual {v3, v5, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v5, "extra"

    .line 173
    iget-object v7, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->S:Ljava/lang/String;

    invoke-virtual {v3, v5, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_2

    :catch_0
    move-exception v5

    .line 177
    :try_start_2
    invoke-virtual {v5}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    goto :goto_2

    :catch_1
    move-exception v5

    .line 175
    invoke-virtual {v5}, Lorg/json/JSONException;->getMessage()Ljava/lang/String;

    .line 179
    :goto_2
    new-instance v5, Lcom/tkay/expressad/video/bt/module/b/d;

    invoke-direct {p0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->c()Lcom/tkay/expressad/video/bt/module/a/b;

    move-result-object v7

    invoke-direct {v5, v7, v1}, Lcom/tkay/expressad/video/bt/module/b/d;-><init>(Lcom/tkay/expressad/video/bt/module/a/b;Ljava/lang/String;)V

    iput-object v5, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->K:Lcom/tkay/expressad/video/bt/module/b/h;

    .line 180
    invoke-virtual {v3}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    .line 181
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->getJSNotifyProxy()Lcom/tkay/expressad/video/signal/g;

    move-result-object v3

    invoke-interface {v3, v1}, Lcom/tkay/expressad/video/signal/g;->a(Ljava/lang/Object;)V

    .line 182
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v1

    invoke-interface {v1}, Lcom/tkay/expressad/video/signal/c;->h()V

    .line 183
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v1

    new-instance v3, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$a;

    invoke-direct {v3, p0, v4}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$a;-><init>(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;B)V

    invoke-interface {v1, v3}, Lcom/tkay/expressad/video/signal/c;->a(Lcom/tkay/expressad/video/signal/c$a;)V

    .line 185
    :cond_5
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/video/signal/a/c;

    iget-object v1, v1, Lcom/tkay/expressad/video/signal/a/c;->r:Lcom/tkay/expressad/video/signal/c$a;

    invoke-interface {v1}, Lcom/tkay/expressad/video/signal/c$a;->c()V

    .line 187
    :cond_6
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->i:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v1, v4}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setBackgroundColor(I)V

    .line 188
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    move-result-object v1

    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->m:Ljava/lang/String;

    iget-object v5, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->N:Ljava/lang/String;

    invoke-virtual {v1, v3, v5}, Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object v1

    if-eqz v1, :cond_e

    .line 189
    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->E:Ljava/lang/String;

    invoke-virtual {v1, v3}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_e

    .line 190
    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->E:Ljava/lang/String;

    invoke-virtual {v1, v3}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Landroid/view/View;

    .line 191
    instance-of v5, v3, Lcom/tkay/expressad/video/bt/module/TkayBTLayout;

    if-eqz v5, :cond_c

    .line 192
    check-cast v3, Lcom/tkay/expressad/video/bt/module/TkayBTLayout;

    iput-object v3, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->h:Lcom/tkay/expressad/video/bt/module/TkayBTLayout;

    .line 193
    iget-object v5, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->i:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    new-instance v7, Landroid/widget/FrameLayout$LayoutParams;

    const/4 v8, -0x1

    invoke-direct {v7, v8, v8}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v3, v5, v4, v7}, Lcom/tkay/expressad/video/bt/module/TkayBTLayout;->addView(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V

    .line 194
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v3

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v7, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->m:Ljava/lang/String;

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    new-instance v7, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$1;

    invoke-direct {v7, p0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$1;-><init>(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)V

    invoke-virtual {v3, v5, v7}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/f/a;)V

    .line 247
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v3

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v7, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->m:Ljava/lang/String;

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "_2"

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, v5}, Lcom/tkay/expressad/foundation/f/b;->c(Ljava/lang/String;)V

    .line 248
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v3

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v7, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->m:Ljava/lang/String;

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Lcom/tkay/expressad/foundation/f/b;->b(Ljava/lang/String;)Lcom/tkay/expressad/widget/FeedBackButton;

    move-result-object v0

    .line 249
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/f/b;->b()Z

    move-result v3
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    if-eqz v3, :cond_9

    if-eqz v0, :cond_9

    .line 252
    :try_start_3
    invoke-virtual {v0}, Lcom/tkay/expressad/widget/FeedBackButton;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v3

    check-cast v3, Landroid/widget/RelativeLayout$LayoutParams;
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_2
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    move-object v6, v3

    goto :goto_3

    :catch_2
    move-exception v3

    .line 254
    :try_start_4
    invoke-virtual {v3}, Ljava/lang/Exception;->printStackTrace()V

    :goto_3
    if-nez v6, :cond_7

    .line 257
    new-instance v6, Landroid/widget/RelativeLayout$LayoutParams;

    sget v3, Lcom/tkay/expressad/foundation/f/b;->a:I

    sget v5, Lcom/tkay/expressad/foundation/f/b;->b:I

    invoke-direct {v6, v3, v5}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 259
    :cond_7
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v3

    const/high16 v5, 0x41200000    # 10.0f

    invoke-static {v3, v5}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v3

    iput v3, v6, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    .line 260
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v3

    invoke-static {v3, v5}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v3

    iput v3, v6, Landroid/widget/RelativeLayout$LayoutParams;->leftMargin:I

    .line 261
    invoke-virtual {v0, v6}, Lcom/tkay/expressad/widget/FeedBackButton;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 262
    invoke-virtual {v0}, Lcom/tkay/expressad/widget/FeedBackButton;->getParent()Landroid/view/ViewParent;

    move-result-object v3

    check-cast v3, Landroid/view/ViewGroup;

    if-eqz v3, :cond_8

    .line 264
    invoke-virtual {v3, v0}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 267
    :cond_8
    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->h:Lcom/tkay/expressad/video/bt/module/TkayBTLayout;

    invoke-virtual {v3, v0}, Lcom/tkay/expressad/video/bt/module/TkayBTLayout;->addView(Landroid/view/View;)V

    .line 269
    :cond_9
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->h:Lcom/tkay/expressad/video/bt/module/TkayBTLayout;

    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->E:Ljava/lang/String;

    invoke-virtual {v0, v3}, Lcom/tkay/expressad/video/bt/module/TkayBTLayout;->setTag(Ljava/lang/Object;)V

    .line 270
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->E:Ljava/lang/String;

    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->h:Lcom/tkay/expressad/video/bt/module/TkayBTLayout;

    invoke-virtual {v1, v0, v3}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 271
    invoke-virtual {v1}, Ljava/util/LinkedHashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_a
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_b

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Landroid/view/View;

    .line 272
    instance-of v5, v3, Lcom/tkay/expressad/video/bt/module/TkayBTRootLayout;

    if-eqz v5, :cond_a

    .line 273
    check-cast v3, Lcom/tkay/expressad/video/bt/module/TkayBTRootLayout;

    .line 274
    invoke-virtual {v3}, Lcom/tkay/expressad/video/bt/module/TkayBTRootLayout;->getInstanceId()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->M:Ljava/lang/String;

    .line 275
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->g:Landroid/widget/FrameLayout;

    new-instance v5, Landroid/widget/FrameLayout$LayoutParams;

    invoke-direct {v5, v8, v8}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v0, v3, v5}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 279
    :cond_b
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->M:Ljava/lang/String;

    invoke-virtual {v1, v0}, Ljava/util/LinkedHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 280
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->M:Ljava/lang/String;

    invoke-virtual {v1, v0, p0}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 286
    :cond_c
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->m:Ljava/lang/String;

    iget v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->s:I

    invoke-static {v0, v1}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/String;I)V

    .line 287
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->E:Ljava/lang/String;

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->N:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 288
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->M:Ljava/lang/String;

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->N:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 289
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->m:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->N:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->l:Landroid/app/Activity;

    invoke-static {v0, v1}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/String;Landroid/app/Activity;)V

    .line 310
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->G:Ljava/util/List;

    if-eqz v0, :cond_d

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->G:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_d

    .line 312
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->o:Lcom/tkay/expressad/videocommon/e/d;

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->G:Ljava/util/List;

    invoke-interface {v1, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p0, v0, v1}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->a(Lcom/tkay/expressad/videocommon/e/d;Lcom/tkay/expressad/foundation/d/c;)V

    :cond_d
    return-void

    :cond_e
    const-string v0, "big template webviewLayout is null"

    .line 283
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->a(Ljava/lang/String;)V

    return-void

    .line 315
    :cond_f
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->G:Ljava/util/List;

    if-eqz v0, :cond_11

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->G:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_11

    .line 316
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->G:Ljava/util/List;

    invoke-interface {v0, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_11

    .line 317
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    if-eqz v0, :cond_11

    .line 323
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->A:Landroid/content/Context;

    .line 2338
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->T:Lcom/tkay/expressad/video/dynview/f/d;

    if-nez v1, :cond_10

    const-string v0, "ChoiceOneCallback is null"

    .line 2339
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->a(Ljava/lang/String;)V

    return-void

    .line 2342
    :cond_10
    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    const-string v2, "choice_one_callback"

    .line 2343
    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->T:Lcom/tkay/expressad/video/dynview/f/d;

    invoke-interface {v1, v2, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2344
    invoke-static {}, Lcom/tkay/expressad/video/dynview/b;->a()Lcom/tkay/expressad/video/dynview/b;

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->G:Ljava/util/List;

    new-instance v3, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$2;

    invoke-direct {v3, p0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$2;-><init>(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)V

    invoke-static {v0, v2, v3, v1}, Lcom/tkay/expressad/video/dynview/b;->a(Landroid/content/Context;Ljava/util/List;Lcom/tkay/expressad/video/dynview/f/h;Ljava/util/Map;)V

    return-void

    :cond_11
    const-string v0, "big template webview is null"

    .line 327
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->a(Ljava/lang/String;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    .line 330
    invoke-static {v0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "onCreate exception "

    invoke-virtual {v1, v0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->a(Ljava/lang/String;)V

    return-void
.end method

.method public onDestroy()V
    .locals 5

    .line 733
    iget-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->F:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    .line 736
    iput-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->F:Z

    .line 737
    invoke-super {p0}, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->onDestroy()V

    .line 738
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->m:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "_"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->N:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/video/bt/a/c;->d(Ljava/lang/String;)V

    .line 742
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->i:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_2

    .line 743
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->i:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    if-eqz v0, :cond_1

    .line 745
    invoke-virtual {v0}, Landroid/view/ViewGroup;->removeAllViews()V

    .line 747
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->i:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->clearWebView()V

    .line 748
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->i:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->release()V

    .line 750
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->L:Lcom/tkay/expressad/video/bt/module/a/b;

    const/4 v2, 0x0

    if-eqz v0, :cond_3

    .line 751
    iput-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->L:Lcom/tkay/expressad/video/bt/module/a/b;

    .line 753
    :cond_3
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->I:Lcom/tkay/expressad/video/bt/module/a/a;

    if-eqz v0, :cond_4

    .line 754
    iput-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->I:Lcom/tkay/expressad/video/bt/module/a/a;

    .line 756
    :cond_4
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->A:Landroid/content/Context;

    if-eqz v0, :cond_5

    .line 757
    iput-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->A:Landroid/content/Context;

    .line 759
    :cond_5
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->G:Ljava/util/List;

    if-eqz v0, :cond_7

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->G:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_7

    .line 760
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->G:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_6
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_7

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/foundation/d/c;

    if-eqz v2, :cond_6

    .line 761
    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v3

    if-eqz v3, :cond_6

    .line 762
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->m:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/expressad/videocommon/a;->b(Ljava/lang/String;)V

    goto :goto_0

    .line 766
    :cond_7
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->E:Ljava/lang/String;

    invoke-static {v0}, Lcom/tkay/expressad/video/bt/a/c;->f(Ljava/lang/String;)V

    .line 767
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->m:Ljava/lang/String;

    invoke-static {v0}, Lcom/tkay/expressad/video/bt/a/c;->g(Ljava/lang/String;)V

    .line 768
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->m:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->N:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->E:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/util/LinkedHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 769
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->m:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->N:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->M:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/util/LinkedHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 770
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->m:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->N:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->clear()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    .line 772
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method protected onDetachedFromWindow()V
    .locals 0

    .line 721
    invoke-super {p0}, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->onDetachedFromWindow()V

    return-void
.end method

.method public onPause()V
    .locals 3

    .line 698
    invoke-super {p0}, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->onPause()V

    .line 699
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->G:Ljava/util/List;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 700
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->G:Ljava/util/List;

    const/4 v1, 0x0

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_0

    .line 701
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 702
    invoke-static {}, Lcom/tkay/expressad/video/dynview/b/a;->a()Lcom/tkay/expressad/video/dynview/b/a;

    .line 706
    :cond_0
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->m:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->N:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 707
    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->size()I

    move-result v1

    if-lez v1, :cond_2

    .line 708
    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_1
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/view/View;

    .line 709
    instance-of v2, v1, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    if-eqz v2, :cond_1

    .line 710
    check-cast v1, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    invoke-virtual {v1}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->onPause()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :cond_2
    return-void

    :catchall_0
    move-exception v0

    .line 715
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public onResume()V
    .locals 3

    .line 628
    invoke-super {p0}, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->onResume()V

    .line 630
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->G:Ljava/util/List;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 631
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->G:Ljava/util/List;

    const/4 v1, 0x0

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_0

    .line 632
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 633
    invoke-static {}, Lcom/tkay/expressad/video/dynview/b/a;->a()Lcom/tkay/expressad/video/dynview/b/a;

    move-result-object v0

    .line 3090
    iget-object v1, v0, Lcom/tkay/expressad/video/dynview/b/a;->a:Lcom/tkay/expressad/video/dynview/e/a;

    if-eqz v1, :cond_0

    .line 3091
    iget-object v0, v0, Lcom/tkay/expressad/video/dynview/b/a;->a:Lcom/tkay/expressad/video/dynview/e/a;

    invoke-interface {v0}, Lcom/tkay/expressad/video/dynview/e/a;->a()V

    .line 637
    :cond_0
    sget-boolean v0, Lcom/tkay/expressad/foundation/f/b;->c:Z

    if-eqz v0, :cond_1

    return-void

    .line 641
    :cond_1
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->m:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->N:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 642
    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->size()I

    move-result v1

    if-lez v1, :cond_3

    .line 643
    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_2
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/view/View;

    .line 644
    instance-of v2, v1, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    if-eqz v2, :cond_2

    .line 645
    check-cast v1, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    invoke-virtual {v1}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->onResume()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :cond_3
    return-void

    :catchall_0
    move-exception v0

    .line 650
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public onStop()V
    .locals 3

    .line 656
    invoke-super {p0}, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->onStop()V

    .line 657
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->G:Ljava/util/List;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 658
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->G:Ljava/util/List;

    const/4 v1, 0x0

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_0

    .line 659
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 660
    invoke-static {}, Lcom/tkay/expressad/video/dynview/b/a;->a()Lcom/tkay/expressad/video/dynview/b/a;

    move-result-object v0

    .line 3102
    iget-object v1, v0, Lcom/tkay/expressad/video/dynview/b/a;->a:Lcom/tkay/expressad/video/dynview/e/a;

    if-eqz v1, :cond_0

    .line 3103
    iget-object v0, v0, Lcom/tkay/expressad/video/dynview/b/a;->a:Lcom/tkay/expressad/video/dynview/e/a;

    invoke-interface {v0}, Lcom/tkay/expressad/video/dynview/e/a;->c()V

    .line 664
    :cond_0
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->m:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->N:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 665
    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->size()I

    move-result v1

    if-lez v1, :cond_2

    .line 666
    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_1
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/view/View;

    .line 667
    instance-of v2, v1, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    if-eqz v2, :cond_1

    .line 668
    check-cast v1, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    invoke-virtual {v1}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->onStop()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :cond_2
    return-void

    :catchall_0
    move-exception v0

    .line 673
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public reactDeveloper(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 8

    const-string v0, "error"

    .line 795
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->I:Lcom/tkay/expressad/video/bt/module/a/a;

    if-eqz v1, :cond_e

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_e

    .line 797
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "type"

    .line 798
    invoke-virtual {v1, p2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p2

    const-string v2, "hit"

    .line 799
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v2

    const-string v3, "unitId"

    .line 800
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->getUnitId()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v3, v4}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 801
    sget-object v4, Lcom/tkay/expressad/b;->y:Ljava/lang/String;

    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->getPlacementId()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v4, v5}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    const-string v4, "data"

    .line 802
    invoke-virtual {v1, v4}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    .line 804
    iget-object v4, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->G:Ljava/util/List;

    const/4 v5, 0x0

    invoke-interface {v4, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/tkay/expressad/foundation/d/c;

    const/4 v6, 0x1

    if-ne p2, v6, :cond_2

    const-string v7, "expired"

    .line 807
    invoke-virtual {v1, v7}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v7

    if-eqz v4, :cond_1

    if-eqz v7, :cond_0

    .line 811
    invoke-virtual {v4, v6}, Lcom/tkay/expressad/foundation/d/c;->e(I)V

    goto :goto_0

    .line 813
    :cond_0
    invoke-virtual {v4, v5}, Lcom/tkay/expressad/foundation/d/c;->e(I)V

    .line 817
    :cond_1
    :goto_0
    invoke-virtual {p0, v4}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->isNativeKilledCallback(Lcom/tkay/expressad/foundation/d/c;)Z

    move-result v7

    iput-boolean v7, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->O:Z

    :cond_2
    packed-switch p2, :pswitch_data_0

    goto/16 :goto_2

    :pswitch_0
    const-string p2, "convert"

    .line 838
    invoke-virtual {v1, p2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p2

    if-ne p2, v6, :cond_3

    goto :goto_1

    :cond_3
    move v6, v5

    :goto_1
    const-string p2, "reward"

    .line 839
    invoke-virtual {v1, p2}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    const-string v0, "campaign"

    .line 840
    invoke-virtual {v1, v0}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/d/c;->b(Lorg/json/JSONObject;)Lcom/tkay/expressad/foundation/d/c;

    move-result-object v0

    .line 841
    invoke-static {p2}, Lcom/tkay/expressad/videocommon/c/c;->a(Lorg/json/JSONObject;)Lcom/tkay/expressad/videocommon/c/c;

    move-result-object p2

    if-nez p2, :cond_4

    .line 842
    iget-object p2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->q:Lcom/tkay/expressad/videocommon/c/c;

    :cond_4
    const-string v7, "extra"

    .line 843
    invoke-virtual {v1, v7}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 844
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-nez v7, :cond_5

    .line 845
    iput-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->S:Ljava/lang/String;

    .line 849
    :cond_5
    iget-boolean v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->O:Z

    if-nez v1, :cond_d

    .line 873
    iget v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->P:I

    if-eq v2, v1, :cond_d

    .line 875
    iget-boolean v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->t:Z

    if-eqz v1, :cond_7

    iget v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->v:I

    sget v2, Lcom/tkay/expressad/foundation/g/a;->cr:I

    if-eq v1, v2, :cond_6

    iget v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->v:I

    sget v2, Lcom/tkay/expressad/foundation/g/a;->cs:I

    if-ne v1, v2, :cond_7

    .line 876
    :cond_6
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->I:Lcom/tkay/expressad/video/bt/module/a/a;

    iget-boolean v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->Q:Z

    iget v7, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->R:I

    invoke-interface {v1, v2, v7}, Lcom/tkay/expressad/video/bt/module/a/a;->a(ZI)V

    :cond_7
    if-nez v6, :cond_8

    .line 879
    invoke-virtual {p2, v5}, Lcom/tkay/expressad/videocommon/c/c;->a(I)V

    .line 881
    :cond_8
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->I:Lcom/tkay/expressad/video/bt/module/a/a;

    invoke-interface {v1, v6, p2}, Lcom/tkay/expressad/video/bt/module/a/a;->a(ZLcom/tkay/expressad/videocommon/c/c;)V

    .line 883
    iget-boolean v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->t:Z

    if-nez v1, :cond_d

    if-eqz v6, :cond_d

    if-eqz v0, :cond_9

    .line 885
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->p:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->S:Ljava/lang/String;

    invoke-static {v0, p2, v3, v1, v2}, Lcom/tkay/expressad/video/module/b/a;->a(Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/videocommon/c/c;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_2

    .line 887
    :cond_9
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->p:Ljava/lang/String;

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->S:Ljava/lang/String;

    invoke-static {v4, p2, v3, v0, v1}, Lcom/tkay/expressad/video/module/b/a;->a(Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/videocommon/c/c;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_2

    .line 916
    :pswitch_1
    iget-object p2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->I:Lcom/tkay/expressad/video/bt/module/a/a;

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->a:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_a

    iget-object v4, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->a:Lcom/tkay/expressad/foundation/d/c;

    :cond_a
    invoke-interface {p2, v4}, Lcom/tkay/expressad/video/bt/module/a/a;->a(Lcom/tkay/expressad/foundation/d/c;)V

    goto :goto_2

    .line 942
    :pswitch_2
    iget-object p2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->I:Lcom/tkay/expressad/video/bt/module/a/a;

    invoke-interface {p2}, Lcom/tkay/expressad/video/bt/module/a/a;->c()V

    goto :goto_2

    .line 929
    :pswitch_3
    iget-object p2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->I:Lcom/tkay/expressad/video/bt/module/a/a;

    invoke-interface {p2}, Lcom/tkay/expressad/video/bt/module/a/a;->b()V

    goto :goto_2

    .line 894
    :pswitch_4
    invoke-virtual {v1, v0}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    const-string v3, ""

    if-eqz p2, :cond_b

    const-string v3, "msg"

    .line 897
    invoke-virtual {p2, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 899
    :cond_b
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_c

    .line 900
    invoke-virtual {v1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 902
    :cond_c
    iget-boolean p2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->O:Z

    if-nez p2, :cond_d

    .line 907
    iget p2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->P:I

    if-eq v2, p2, :cond_d

    .line 908
    iget-object p2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->I:Lcom/tkay/expressad/video/bt/module/a/a;

    invoke-interface {p2, v3}, Lcom/tkay/expressad/video/bt/module/a/a;->a(Ljava/lang/String;)V

    goto :goto_2

    .line 822
    :pswitch_5
    iget-object p2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->I:Lcom/tkay/expressad/video/bt/module/a/a;

    invoke-interface {p2}, Lcom/tkay/expressad/video/bt/module/a/a;->a()V

    .line 955
    :cond_d
    :goto_2
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->a(Ljava/lang/Object;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p2

    .line 957
    invoke-virtual {p2}, Lorg/json/JSONException;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 958
    invoke-virtual {p2}, Lorg/json/JSONException;->getMessage()Ljava/lang/String;

    return-void

    :cond_e
    const-string p2, "listener is null"

    .line 961
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->a(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method public setBTContainerCallback(Lcom/tkay/expressad/video/bt/module/a/a;)V
    .locals 0

    .line 1074
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->I:Lcom/tkay/expressad/video/bt/module/a/a;

    return-void
.end method

.method public setCampaignDownLoadTasks(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/videocommon/b/a;",
            ">;)V"
        }
    .end annotation

    .line 1083
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->H:Ljava/util/List;

    return-void
.end method

.method public setCampaigns(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;)V"
        }
    .end annotation

    .line 1079
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->G:Ljava/util/List;

    return-void
.end method

.method public setChoiceOneCallback(Lcom/tkay/expressad/video/dynview/f/d;)V
    .locals 0

    .line 1095
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->T:Lcom/tkay/expressad/video/dynview/f/d;

    return-void
.end method

.method public setDeveloperExtraData(Ljava/lang/String;)V
    .locals 0

    .line 1279
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->S:Ljava/lang/String;

    return-void
.end method

.method public setJSFactory(Lcom/tkay/expressad/video/signal/factory/b;)V
    .locals 0

    .line 1087
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->z:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    return-void
.end method

.method public setNotchPadding(IIIII)V
    .locals 16

    move-object/from16 v1, p0

    move/from16 v8, p2

    move/from16 v9, p3

    move/from16 v10, p4

    move/from16 v11, p5

    .line 1232
    :try_start_0
    invoke-static/range {p1 .. p5}, Lcom/tkay/expressad/foundation/h/h;->a(IIIII)Ljava/lang/String;

    move-result-object v12

    .line 1236
    iget-object v0, v1, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->i:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v13, "oncutoutfetched"

    const/4 v14, 0x0

    if-eqz v0, :cond_0

    :try_start_1
    iget-object v0, v1, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->i:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v0

    instance-of v0, v0, Lcom/tkay/expressad/video/signal/a/j;

    if-eqz v0, :cond_0

    .line 1237
    invoke-static {v12}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 1238
    iget-object v0, v1, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->i:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/video/signal/a/j;

    invoke-virtual {v0, v12}, Lcom/tkay/expressad/video/signal/a/j;->b(Ljava/lang/String;)V

    .line 1239
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    iget-object v0, v1, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->i:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v12}, Ljava/lang/String;->getBytes()[B

    move-result-object v2

    invoke-static {v2, v14}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v13, v2}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    .line 1243
    :cond_0
    iget-object v0, v1, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->G:Ljava/util/List;

    if-eqz v0, :cond_1

    iget-object v0, v1, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->G:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-lez v0, :cond_1

    .line 1245
    :try_start_2
    iget-object v0, v1, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->G:Ljava/util/List;

    invoke-interface {v0, v14}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, v1, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->B:Landroid/widget/TextView;

    if-eqz v0, :cond_1

    .line 1246
    iget-object v0, v1, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->B:Landroid/widget/TextView;

    invoke-virtual {v0}, Landroid/widget/TextView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    check-cast v0, Landroid/widget/FrameLayout$LayoutParams;

    .line 1247
    invoke-virtual {v0, v8, v10, v9, v11}, Landroid/widget/FrameLayout$LayoutParams;->setMargins(IIII)V

    .line 1248
    iget-object v2, v1, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->B:Landroid/widget/TextView;

    invoke-virtual {v2, v0}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 1251
    :try_start_3
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    .line 1255
    :cond_1
    :goto_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    invoke-static/range {p1 .. p5}, Lcom/tkay/expressad/video/bt/a/c;->a(IIIII)V

    .line 1257
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    move-result-object v0

    iget-object v2, v1, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->m:Ljava/lang/String;

    iget-object v3, v1, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->N:Ljava/lang/String;

    invoke-virtual {v0, v2, v3}, Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object v0

    if-eqz v0, :cond_5

    .line 1258
    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->size()I

    move-result v2

    if-lez v2, :cond_5

    .line 1259
    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_2
    :goto_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_5

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    move-object v15, v2

    check-cast v15, Landroid/view/View;

    .line 1260
    instance-of v2, v15, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    if-eqz v2, :cond_3

    .line 1261
    move-object v2, v15

    check-cast v2, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    invoke-virtual {v2, v8, v9, v10, v11}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->setNotchPadding(IIII)V

    .line 1264
    :cond_3
    instance-of v2, v15, Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    if-eqz v2, :cond_4

    .line 1265
    move-object v2, v15

    check-cast v2, Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    move/from16 v3, p1

    move/from16 v4, p2

    move/from16 v5, p3

    move/from16 v6, p4

    move/from16 v7, p5

    invoke-virtual/range {v2 .. v7}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setNotchPadding(IIIII)V

    .line 1268
    :cond_4
    instance-of v2, v15, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v2, :cond_2

    invoke-static {v12}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_2

    .line 1269
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object v2

    invoke-virtual {v12}, Ljava/lang/String;->getBytes()[B

    move-result-object v3

    invoke-static {v3, v14}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v15, v13, v3}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    goto :goto_1

    :cond_5
    return-void

    :catchall_0
    move-exception v0

    .line 1274
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public setShowRewardVideoListener(Lcom/tkay/expressad/video/bt/module/b/h;)V
    .locals 0

    .line 1091
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->J:Lcom/tkay/expressad/video/bt/module/b/h;

    return-void
.end method
