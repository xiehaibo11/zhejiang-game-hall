.class public Lcom/tkay/expressad/video/bt/module/TYTempContainer;
.super Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/video/bt/module/TYTempContainer$d;,
        Lcom/tkay/expressad/video/bt/module/TYTempContainer$c;,
        Lcom/tkay/expressad/video/bt/module/TYTempContainer$b;,
        Lcom/tkay/expressad/video/bt/module/TYTempContainer$e;,
        Lcom/tkay/expressad/video/bt/module/TYTempContainer$a;
    }
.end annotation


# static fields
.field private static final A:Ljava/lang/String;

.field private static final aa:J = 0x1388L

.field private static final ab:J = 0x7d0L

.field private static final ac:J = 0x64L

.field private static final ad:I = -0x1

.field private static final ae:I = -0x2

.field private static final af:I = -0x3

.field private static final ag:I = -0x3

.field private static final ah:I = -0x4

.field private static final al:I = 0xfa

.field protected static final b:I


# instance fields
.field private B:Landroid/view/View;

.field private C:Lcom/tkay/expressad/foundation/d/c;

.field private D:Lcom/tkay/expressad/videocommon/b/a;

.field private E:Lcom/tkay/expressad/video/bt/module/b/h;

.field private F:Lcom/tkay/expressad/video/bt/module/a/b;

.field private G:Lcom/tkay/expressad/video/dynview/f/a;

.field private H:I

.field private I:Ljava/lang/String;

.field private J:Lcom/tkay/expressad/video/signal/factory/b;

.field private K:I

.field private L:I

.field private M:Z

.field private N:I

.field private O:I

.field private P:I

.field private Q:I

.field private R:I

.field private S:Ljava/lang/String;

.field private T:Ljava/lang/String;

.field private U:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;"
        }
    .end annotation
.end field

.field private V:I

.field private W:Landroid/view/LayoutInflater;

.field protected a:Z

.field private ai:I

.field private aj:I

.field private ak:I

.field private am:Landroid/view/View;

.field private an:Z

.field private ao:Z

.field private ap:Z

.field private aq:Z

.field private ar:Z

.field private as:Z

.field private at:Z

.field private au:Z

.field private av:Z

.field private aw:Z

.field private ax:Lcom/tkay/expressad/atsignalcommon/mraid/MraidVolumeChangeReceiver;

.field private ay:Ljava/lang/Runnable;

.field protected c:Z

.field protected d:Lcom/tkay/expressad/video/bt/module/TYTempContainer$a;

.field protected e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

.field protected f:Lcom/tkay/expressad/video/module/TkayVideoView;

.field protected g:Lcom/tkay/expressad/video/module/TkayContainerView;

.field protected h:Landroid/os/Handler;

.field protected i:Ljava/lang/Runnable;

.field protected j:Ljava/lang/Runnable;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 80
    const-class v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->A:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 2

    .line 108
    invoke-direct {p0, p1}, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;-><init>(Landroid/content/Context;)V

    const/4 v0, 0x1

    .line 90
    iput v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->H:I

    const-string v0, ""

    .line 91
    iput-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->I:Ljava/lang/String;

    .line 94
    sget v1, Lcom/tkay/expressad/foundation/g/a;->cv:I

    iput v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->K:I

    const/4 v1, 0x0

    .line 98
    iput-boolean v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->M:Z

    .line 101
    iput-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->S:Ljava/lang/String;

    .line 104
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->U:Ljava/util/List;

    .line 105
    iput v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->V:I

    .line 117
    iput-boolean v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->a:Z

    .line 167
    iput-boolean v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->c:Z

    .line 171
    new-instance v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$a$a;

    invoke-direct {v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer$a$a;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->d:Lcom/tkay/expressad/video/bt/module/TYTempContainer$a;

    .line 260
    new-instance v0, Landroid/os/Handler;

    invoke-direct {v0}, Landroid/os/Handler;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->h:Landroid/os/Handler;

    .line 265
    iput v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ai:I

    .line 267
    iput v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->aj:I

    .line 268
    iput v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ak:I

    .line 273
    new-instance v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$1;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer$1;-><init>(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)V

    iput-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->i:Ljava/lang/Runnable;

    .line 289
    new-instance v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$2;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer$2;-><init>(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)V

    iput-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->j:Ljava/lang/Runnable;

    .line 470
    iput-boolean v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->an:Z

    .line 475
    iput-boolean v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ao:Z

    .line 476
    iput-boolean v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ap:Z

    .line 483
    iput-boolean v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ar:Z

    .line 484
    iput-boolean v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->as:Z

    .line 487
    iput-boolean v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->at:Z

    .line 489
    iput-boolean v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->au:Z

    .line 491
    iput-boolean v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->av:Z

    .line 493
    iput-boolean v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->aw:Z

    .line 497
    new-instance v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$3;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer$3;-><init>(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)V

    iput-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ay:Ljava/lang/Runnable;

    .line 109
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->init(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    .line 113
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const/4 p2, 0x1

    .line 90
    iput p2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->H:I

    const-string p2, ""

    .line 91
    iput-object p2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->I:Ljava/lang/String;

    .line 94
    sget v0, Lcom/tkay/expressad/foundation/g/a;->cv:I

    iput v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->K:I

    const/4 v0, 0x0

    .line 98
    iput-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->M:Z

    .line 101
    iput-object p2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->S:Ljava/lang/String;

    .line 104
    new-instance p2, Ljava/util/ArrayList;

    invoke-direct {p2}, Ljava/util/ArrayList;-><init>()V

    iput-object p2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->U:Ljava/util/List;

    .line 105
    iput v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->V:I

    .line 117
    iput-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->a:Z

    .line 167
    iput-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->c:Z

    .line 171
    new-instance p2, Lcom/tkay/expressad/video/bt/module/TYTempContainer$a$a;

    invoke-direct {p2}, Lcom/tkay/expressad/video/bt/module/TYTempContainer$a$a;-><init>()V

    iput-object p2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->d:Lcom/tkay/expressad/video/bt/module/TYTempContainer$a;

    .line 260
    new-instance p2, Landroid/os/Handler;

    invoke-direct {p2}, Landroid/os/Handler;-><init>()V

    iput-object p2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->h:Landroid/os/Handler;

    .line 265
    iput v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ai:I

    .line 267
    iput v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->aj:I

    .line 268
    iput v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ak:I

    .line 273
    new-instance p2, Lcom/tkay/expressad/video/bt/module/TYTempContainer$1;

    invoke-direct {p2, p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer$1;-><init>(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)V

    iput-object p2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->i:Ljava/lang/Runnable;

    .line 289
    new-instance p2, Lcom/tkay/expressad/video/bt/module/TYTempContainer$2;

    invoke-direct {p2, p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer$2;-><init>(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)V

    iput-object p2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->j:Ljava/lang/Runnable;

    .line 470
    iput-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->an:Z

    .line 475
    iput-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ao:Z

    .line 476
    iput-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ap:Z

    .line 483
    iput-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ar:Z

    .line 484
    iput-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->as:Z

    .line 487
    iput-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->at:Z

    .line 489
    iput-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->au:Z

    .line 491
    iput-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->av:Z

    .line 493
    iput-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->aw:Z

    .line 497
    new-instance p2, Lcom/tkay/expressad/video/bt/module/TYTempContainer$3;

    invoke-direct {p2, p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer$3;-><init>(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)V

    iput-object p2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ay:Ljava/lang/Runnable;

    .line 114
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->init(Landroid/content/Context;)V

    return-void
.end method

.method private a(II)I
    .locals 5

    if-gez p1, :cond_0

    return p1

    .line 1277
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->U:Ljava/util/List;

    if-nez v0, :cond_1

    return p1

    .line 1280
    :cond_1
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_2

    return p1

    :cond_2
    const/4 v0, 0x1

    if-gt p2, v0, :cond_3

    return p1

    :cond_3
    const/4 v1, 0x0

    move v2, v1

    move v3, v2

    :goto_0
    add-int/lit8 v4, p2, -0x1

    if-ge v2, v4, :cond_5

    .line 1289
    iget-object v4, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->U:Ljava/util/List;

    invoke-interface {v4, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    if-eqz v4, :cond_4

    .line 1290
    iget-object v4, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->U:Ljava/util/List;

    invoke-interface {v4, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v4}, Lcom/tkay/expressad/foundation/d/c;->bi()I

    move-result v4

    add-int/2addr v3, v4

    :cond_4
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_5
    if-le p1, v3, :cond_6

    sub-int v1, p1, v3

    :cond_6
    return v1
.end method

.method static synthetic a(Lcom/tkay/expressad/video/bt/module/TYTempContainer;I)I
    .locals 0

    .line 79
    iput p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ai:I

    return p1
.end method

.method static synthetic a(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Landroid/view/View;
    .locals 0

    .line 79
    iget-object p0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->am:Landroid/view/View;

    return-object p0
.end method

.method static synthetic a()Ljava/lang/String;
    .locals 1

    .line 79
    sget-object v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->A:Ljava/lang/String;

    return-object v0
.end method

.method private a(ILjava/lang/String;)V
    .locals 3

    .line 1191
    :try_start_0
    new-instance v0, Lcom/tkay/expressad/foundation/d/r;

    invoke-direct {v0}, Lcom/tkay/expressad/foundation/d/r;-><init>()V

    const-string v1, "2000037"

    .line 1192
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/d/r;->h(Ljava/lang/String;)V

    .line 1193
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "code="

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, ",desc="

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/foundation/d/r;->c(Ljava/lang/String;)V

    .line 1195
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string p2, ""

    if-eqz p1, :cond_0

    :try_start_1
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 1196
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    :cond_0
    move-object p1, p2

    .line 1198
    :goto_0
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/foundation/d/r;->b(Ljava/lang/String;)V

    .line 1199
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->m:Ljava/lang/String;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/foundation/d/r;->f(Ljava/lang/String;)V

    .line 1201
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    if-eqz p1, :cond_1

    .line 1202
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object p2

    .line 1204
    :cond_1
    invoke-virtual {v0, p2}, Lcom/tkay/expressad/foundation/d/r;->g(Ljava/lang/String;)V

    .line 1205
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_2

    .line 1206
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/foundation/d/r;->d(Ljava/lang/String;)V

    .line 1208
    :cond_2
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    if-eqz p1, :cond_3

    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->aa()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_3

    .line 1209
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->aa()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/foundation/d/r;->e(Ljava/lang/String;)V

    .line 1211
    :cond_3
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getContext()Landroid/content/Context;

    invoke-static {}, Lcom/tkay/expressad/foundation/h/k;->a()I

    move-result p1

    .line 1212
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/foundation/d/r;->c(I)V

    .line 1213
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getContext()Landroid/content/Context;

    move-result-object p2

    invoke-static {p2, p1}, Lcom/tkay/expressad/foundation/h/k;->a(Landroid/content/Context;I)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/foundation/d/r;->j(Ljava/lang/String;)V

    .line 1214
    invoke-static {v0}, Lcom/tkay/expressad/foundation/d/r;->a(Lcom/tkay/expressad/foundation/d/r;)Ljava/lang/String;

    .line 1215
    invoke-static {}, Lcom/tkay/expressad/video/module/b/a;->a()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 1217
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/video/bt/module/TYTempContainer;Z)Z
    .locals 0

    .line 79
    iput-boolean p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->at:Z

    return p1
.end method

.method static synthetic b(Lcom/tkay/expressad/video/bt/module/TYTempContainer;I)I
    .locals 0

    .line 79
    iput p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->K:I

    return p1
.end method

.method static synthetic b(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Landroid/app/Activity;
    .locals 0

    .line 79
    iget-object p0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->l:Landroid/app/Activity;

    return-object p0
.end method

.method static synthetic c(Lcom/tkay/expressad/video/bt/module/TYTempContainer;I)I
    .locals 0

    .line 79
    iput p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->L:I

    return p1
.end method

.method static synthetic c(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Landroid/app/Activity;
    .locals 0

    .line 79
    iget-object p0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->l:Landroid/app/Activity;

    return-object p0
.end method

.method private static c()Landroid/widget/RelativeLayout$LayoutParams;
    .locals 2

    .line 130
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {v0, v1, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    return-object v0
.end method

.method static synthetic d(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Lcom/tkay/expressad/foundation/d/c;
    .locals 0

    .line 79
    iget-object p0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    return-object p0
.end method

.method private d()V
    .locals 1

    .line 134
    iget-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->a:Z

    if-eqz v0, :cond_0

    .line 135
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setMatchParent()V

    :cond_0
    return-void
.end method

.method private e()I
    .locals 1

    .line 302
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->b(Lcom/tkay/expressad/foundation/d/c;)Lcom/tkay/expressad/video/signal/a/j;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 304
    invoke-virtual {v0}, Lcom/tkay/expressad/video/signal/a/j;->c()I

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method static synthetic e(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Z
    .locals 0

    .line 79
    iget-boolean p0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->t:Z

    return p0
.end method

.method private f()I
    .locals 1

    .line 310
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 311
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/c;->n()I

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x1

    return v0
.end method

.method static synthetic f(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Z
    .locals 0

    .line 79
    iget-boolean p0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->y:Z

    return p0
.end method

.method private g()I
    .locals 1

    .line 317
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->b(Lcom/tkay/expressad/foundation/d/c;)Lcom/tkay/expressad/video/signal/a/j;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 319
    invoke-virtual {v0}, Lcom/tkay/expressad/video/signal/a/j;->b()I

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method static synthetic g(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Lcom/tkay/expressad/video/bt/module/b/h;
    .locals 0

    .line 79
    iget-object p0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->E:Lcom/tkay/expressad/video/bt/module/b/h;

    return-object p0
.end method

.method private h()Z
    .locals 1

    .line 325
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->b(Lcom/tkay/expressad/foundation/d/c;)Lcom/tkay/expressad/video/signal/a/j;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 327
    invoke-virtual {v0}, Lcom/tkay/expressad/video/signal/a/j;->a()Z

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method static synthetic h(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Z
    .locals 1

    const/4 v0, 0x1

    .line 79
    iput-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ao:Z

    return v0
.end method

.method private i()Z
    .locals 2

    .line 333
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->f:Lcom/tkay/expressad/video/module/TkayVideoView;

    const/4 v1, 0x0

    if-eqz v0, :cond_2

    .line 334
    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->isShowingAlertView()Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->f:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->isInstallDialogShowing()Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    return v1

    :cond_1
    :goto_0
    const/4 v0, 0x1

    return v0

    :cond_2
    return v1
.end method

.method static synthetic i(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Z
    .locals 0

    .line 79
    iget-boolean p0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->at:Z

    return p0
.end method

.method static synthetic j(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Lcom/tkay/expressad/videocommon/e/d;
    .locals 0

    .line 79
    iget-object p0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->o:Lcom/tkay/expressad/videocommon/e/d;

    return-object p0
.end method

.method private j()V
    .locals 6

    .line 341
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_5

    .line 342
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object v0

    iget v0, v0, Landroid/content/res/Configuration;->orientation:I

    .line 345
    invoke-direct {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->h()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 346
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/expressad/foundation/h/t;->g(Landroid/content/Context;)I

    move-result v1

    .line 347
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/expressad/foundation/h/t;->h(Landroid/content/Context;)I

    move-result v2

    .line 348
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-static {v3}, Lcom/tkay/expressad/foundation/h/t;->a(Landroid/content/Context;)Z

    move-result v3

    if-eqz v3, :cond_2

    .line 349
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-static {v3}, Lcom/tkay/expressad/foundation/h/t;->i(Landroid/content/Context;)I

    move-result v3

    const/4 v4, 0x2

    if-ne v0, v4, :cond_0

    add-int/2addr v1, v3

    goto :goto_0

    :cond_0
    add-int/2addr v2, v3

    goto :goto_0

    .line 357
    :cond_1
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/expressad/foundation/h/t;->f(Landroid/content/Context;)I

    move-result v1

    .line 358
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/expressad/foundation/h/t;->e(Landroid/content/Context;)I

    move-result v2

    .line 360
    :cond_2
    :goto_0
    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c$c;->c()I

    move-result v3

    .line 362
    iget-object v4, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p0, v4}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->c(Lcom/tkay/expressad/foundation/d/c;)I

    move-result v4

    const/4 v5, 0x1

    if-ne v4, v5, :cond_3

    move v3, v0

    .line 365
    :cond_3
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getJSNotifyProxy()Lcom/tkay/expressad/video/signal/g;

    move-result-object v4

    invoke-interface {v4, v0, v3, v1, v2}, Lcom/tkay/expressad/video/signal/g;->a(IIII)V

    .line 366
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 367
    sget-object v1, Lcom/tkay/expressad/foundation/g/a;->ch:Ljava/lang/String;

    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/expressad/foundation/h/t;->c(Landroid/content/Context;)F

    move-result v2

    float-to-double v2, v2

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2

    .line 369
    :try_start_1
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->q:Lcom/tkay/expressad/videocommon/c/c;

    if-eqz v1, :cond_4

    .line 370
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "name"

    .line 371
    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->q:Lcom/tkay/expressad/videocommon/c/c;

    invoke-virtual {v3}, Lcom/tkay/expressad/videocommon/c/c;->a()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "amount"

    .line 372
    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->q:Lcom/tkay/expressad/videocommon/c/c;

    invoke-virtual {v3}, Lcom/tkay/expressad/videocommon/c/c;->b()I

    move-result v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v2, "id"

    .line 373
    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->r:Ljava/lang/String;

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "userId"

    .line 374
    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->p:Ljava/lang/String;

    invoke-virtual {v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "reward"

    .line 375
    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "playVideoMute"

    .line 376
    iget v2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->s:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "extra"

    .line 377
    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->T:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_1

    :catch_0
    move-exception v1

    .line 382
    :try_start_2
    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    goto :goto_1

    :catch_1
    move-exception v1

    .line 380
    invoke-virtual {v1}, Lorg/json/JSONException;->getMessage()Ljava/lang/String;

    .line 384
    :cond_4
    :goto_1
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    .line 385
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getJSNotifyProxy()Lcom/tkay/expressad/video/signal/g;

    move-result-object v1

    invoke-interface {v1, v0}, Lcom/tkay/expressad/video/signal/g;->a(Ljava/lang/Object;)V

    .line 386
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    const-string v1, "oncutoutfetched"

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->S:Ljava/lang/String;

    invoke-virtual {v2}, Ljava/lang/String;->getBytes()[B

    move-result-object v2

    const/4 v3, 0x0

    invoke-static {v2, v3}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v1, v2}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    .line 387
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/c;->h()V

    .line 408
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->loadModuleDatas()V

    .line 409
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->h:Landroid/os/Handler;

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->i:Ljava/lang/Runnable;

    const-wide/16 v2, 0x7d0

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2

    :cond_5
    return-void

    :catch_2
    move-exception v0

    .line 412
    sget-boolean v1, Lcom/tkay/expressad/b;->a:Z

    if-eqz v1, :cond_6

    .line 413
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_6
    return-void
.end method

.method private k()V
    .locals 2

    .line 420
    iget v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ai:I

    const/4 v1, -0x3

    if-ne v0, v1, :cond_0

    .line 421
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->i:Ljava/lang/Runnable;

    goto :goto_0

    :cond_0
    const/4 v1, -0x4

    if-ne v0, v1, :cond_1

    .line 423
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->j:Ljava/lang/Runnable;

    goto :goto_0

    :cond_1
    const/4 v0, 0x0

    :goto_0
    if-eqz v0, :cond_2

    .line 426
    invoke-interface {v0}, Ljava/lang/Runnable;->run()V

    const/4 v0, 0x0

    .line 427
    iput v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ai:I

    :cond_2
    return-void
.end method

.method static synthetic k(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)V
    .locals 4

    .line 9734
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->F:Lcom/tkay/expressad/video/bt/module/a/b;

    if-eqz v0, :cond_3

    .line 9735
    iget-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->t:Z

    if-eqz v0, :cond_2

    iget v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->v:I

    sget v1, Lcom/tkay/expressad/foundation/g/a;->cr:I

    if-eq v0, v1, :cond_0

    iget v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->v:I

    sget v1, Lcom/tkay/expressad/foundation/g/a;->cs:I

    if-ne v0, v1, :cond_2

    .line 9737
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->F:Lcom/tkay/expressad/video/bt/module/a/b;

    iget v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->L:I

    const/4 v2, 0x1

    if-ne v1, v2, :cond_1

    goto :goto_0

    :cond_1
    const/4 v2, 0x0

    :goto_0
    iget v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->K:I

    invoke-interface {v0, v2, v1}, Lcom/tkay/expressad/video/bt/module/a/b;->a(ZI)V

    .line 9740
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->F:Lcom/tkay/expressad/video/bt/module/a/b;

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->I:Ljava/lang/String;

    iget-boolean v2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ao:Z

    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->q:Lcom/tkay/expressad/videocommon/c/c;

    invoke-interface {v0, v1, v2, v3}, Lcom/tkay/expressad/video/bt/module/a/b;->a(Ljava/lang/String;ZLcom/tkay/expressad/videocommon/c/c;)V

    return-void

    .line 9742
    :cond_3
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->l:Landroid/app/Activity;

    if-eqz v0, :cond_4

    .line 9743
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->l:Landroid/app/Activity;

    invoke-virtual {v0}, Landroid/app/Activity;->finish()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_4
    return-void

    .line 9747
    :catch_0
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->l:Landroid/app/Activity;

    if-eqz v0, :cond_5

    .line 9748
    iget-object p0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->l:Landroid/app/Activity;

    invoke-virtual {p0}, Landroid/app/Activity;->finish()V

    :cond_5
    return-void
.end method

.method private l()Z
    .locals 7

    .line 442
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->findWindVaneWebView()Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 443
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->findTkayVideoView()Lcom/tkay/expressad/video/module/TkayVideoView;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->f:Lcom/tkay/expressad/video/module/TkayVideoView;

    .line 444
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->setVideoLayout(Lcom/tkay/expressad/foundation/d/c;)V

    .line 445
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->f:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-boolean v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->t:Z

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->setIsIV(Z)V

    .line 446
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->f:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->m:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->setUnitId(Ljava/lang/String;)V

    .line 447
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->f:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->G:Lcom/tkay/expressad/video/dynview/f/a;

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->U:Ljava/util/List;

    iget v3, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->H:I

    iget v4, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->V:I

    invoke-virtual {v0, v1, v2, v3, v4}, Lcom/tkay/expressad/video/module/TkayVideoView;->setCamPlayOrderCallback(Lcom/tkay/expressad/video/dynview/f/a;Ljava/util/List;II)V

    .line 449
    iget-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->y:Z

    if-eqz v0, :cond_0

    .line 450
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->f:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->O:I

    iget v2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->P:I

    iget v3, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->Q:I

    iget v4, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->R:I

    invoke-virtual {v0, v1, v2, v3, v4}, Lcom/tkay/expressad/video/module/TkayVideoView;->setNotchPadding(IIII)V

    .line 452
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->findTkayContainerView()Lcom/tkay/expressad/video/module/TkayContainerView;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    .line 453
    iget-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->y:Z

    if-eqz v0, :cond_1

    .line 454
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    iget v2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->N:I

    iget v3, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->O:I

    iget v4, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->P:I

    iget v5, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->Q:I

    iget v6, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->R:I

    invoke-virtual/range {v1 .. v6}, Lcom/tkay/expressad/video/module/TkayContainerView;->setNotchPadding(IIIII)V

    .line 456
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->f:Lcom/tkay/expressad/video/module/TkayVideoView;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    if-eqz v0, :cond_2

    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->initViews()Z

    move-result v0

    if-eqz v0, :cond_2

    const/4 v0, 0x1

    return v0

    :cond_2
    const/4 v0, 0x0

    return v0
.end method

.method static synthetic l(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Z
    .locals 0

    .line 79
    iget-boolean p0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->y:Z

    return p0
.end method

.method private m()V
    .locals 4

    .line 572
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->o:Lcom/tkay/expressad/videocommon/e/d;

    if-nez v0, :cond_0

    .line 573
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    move-result-object v0

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->m:Ljava/lang/String;

    iget-boolean v3, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->t:Z

    invoke-virtual {v0, v1, v2, v3}, Lcom/tkay/expressad/videocommon/e/c;->a(Ljava/lang/String;Ljava/lang/String;Z)Lcom/tkay/expressad/videocommon/e/d;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->o:Lcom/tkay/expressad/videocommon/e/d;

    :cond_0
    return-void
.end method

.method static synthetic m(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Z
    .locals 1

    const/4 v0, 0x1

    .line 79
    iput-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->au:Z

    return v0
.end method

.method static synthetic n(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Lcom/tkay/expressad/video/bt/module/a/b;
    .locals 0

    .line 79
    iget-object p0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->F:Lcom/tkay/expressad/video/bt/module/a/b;

    return-object p0
.end method

.method private static n()V
    .locals 0

    return-void
.end method

.method static synthetic o(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Ljava/lang/String;
    .locals 0

    .line 79
    iget-object p0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->I:Ljava/lang/String;

    return-object p0
.end method

.method private o()V
    .locals 4

    .line 734
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->F:Lcom/tkay/expressad/video/bt/module/a/b;

    if-eqz v0, :cond_3

    .line 735
    iget-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->t:Z

    if-eqz v0, :cond_2

    iget v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->v:I

    sget v1, Lcom/tkay/expressad/foundation/g/a;->cr:I

    if-eq v0, v1, :cond_0

    iget v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->v:I

    sget v1, Lcom/tkay/expressad/foundation/g/a;->cs:I

    if-ne v0, v1, :cond_2

    .line 737
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->F:Lcom/tkay/expressad/video/bt/module/a/b;

    iget v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->L:I

    const/4 v2, 0x1

    if-ne v1, v2, :cond_1

    goto :goto_0

    :cond_1
    const/4 v2, 0x0

    :goto_0
    iget v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->K:I

    invoke-interface {v0, v2, v1}, Lcom/tkay/expressad/video/bt/module/a/b;->a(ZI)V

    .line 740
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->F:Lcom/tkay/expressad/video/bt/module/a/b;

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->I:Ljava/lang/String;

    iget-boolean v2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ao:Z

    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->q:Lcom/tkay/expressad/videocommon/c/c;

    invoke-interface {v0, v1, v2, v3}, Lcom/tkay/expressad/video/bt/module/a/b;->a(Ljava/lang/String;ZLcom/tkay/expressad/videocommon/c/c;)V

    return-void

    .line 742
    :cond_3
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->l:Landroid/app/Activity;

    if-eqz v0, :cond_4

    .line 743
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->l:Landroid/app/Activity;

    invoke-virtual {v0}, Landroid/app/Activity;->finish()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_4
    return-void

    .line 747
    :catch_0
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->l:Landroid/app/Activity;

    if-eqz v0, :cond_5

    .line 748
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->l:Landroid/app/Activity;

    invoke-virtual {v0}, Landroid/app/Activity;->finish()V

    :cond_5
    return-void
.end method

.method private static p()V
    .locals 0

    return-void
.end method

.method static synthetic p(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Z
    .locals 0

    .line 79
    iget-boolean p0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->t:Z

    return p0
.end method

.method private q()V
    .locals 10

    .line 773
    iget-object v7, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 774
    new-instance v8, Lcom/tkay/expressad/video/signal/factory/b;

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->l:Landroid/app/Activity;

    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->f:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-object v4, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    iget-object v5, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    new-instance v6, Lcom/tkay/expressad/video/bt/module/TYTempContainer$d;

    const/4 v9, 0x0

    invoke-direct {v6, p0, v9}, Lcom/tkay/expressad/video/bt/module/TYTempContainer$d;-><init>(Lcom/tkay/expressad/video/bt/module/TYTempContainer;B)V

    move-object v0, v8

    move-object v2, v7

    invoke-direct/range {v0 .. v6}, Lcom/tkay/expressad/video/signal/factory/b;-><init>(Landroid/app/Activity;Landroid/webkit/WebView;Lcom/tkay/expressad/video/module/TkayVideoView;Lcom/tkay/expressad/video/module/TkayContainerView;Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/video/signal/c$a;)V

    iput-object v8, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->J:Lcom/tkay/expressad/video/signal/factory/b;

    .line 776
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->k()I

    move-result v0

    const/4 v1, 0x5

    if-ne v0, v1, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->U:Ljava/util/List;

    if-eqz v0, :cond_0

    .line 777
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->J:Lcom/tkay/expressad/video/signal/factory/b;

    invoke-virtual {v1, v0}, Lcom/tkay/expressad/video/signal/factory/b;->a(Ljava/util/List;)V

    .line 779
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->J:Lcom/tkay/expressad/video/signal/factory/b;

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->registerJsFactory(Lcom/tkay/expressad/video/signal/factory/IJSFactory;)V

    .line 780
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->m:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "_1"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Lcom/tkay/expressad/video/bt/module/TYTempContainer$5;

    invoke-direct {v2, p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer$5;-><init>(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)V

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/f/a;)V

    const-string v0, "preload template webview is null or load error"

    if-eqz v7, :cond_6

    .line 836
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->B:Landroid/view/View;

    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getContext()Landroid/content/Context;

    move-result-object v2

    const-string v3, "id"

    const-string v4, "tkay_video_templete_webview_parent"

    invoke-static {v2, v4, v3}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v1, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/view/ViewGroup;

    .line 837
    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->J:Lcom/tkay/expressad/video/signal/factory/b;

    invoke-virtual {v7, v2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setApiManagerJSFactory(Ljava/lang/Object;)V

    .line 838
    invoke-virtual {v7}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getParent()Landroid/view/ViewParent;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 839
    invoke-virtual {p0, v9, v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->defaultLoad(ILjava/lang/String;)V

    return-void

    .line 842
    :cond_1
    invoke-virtual {v7}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v0

    instance-of v0, v0, Lcom/tkay/expressad/video/signal/a/j;

    if-eqz v0, :cond_4

    .line 843
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->J:Lcom/tkay/expressad/video/signal/factory/b;

    invoke-virtual {v7}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/video/signal/a/j;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/video/signal/factory/b;->a(Lcom/tkay/expressad/video/signal/a/j;)V

    .line 6874
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v0

    iget v2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->s:I

    invoke-interface {v0, v2}, Lcom/tkay/expressad/video/signal/c;->a(I)V

    .line 6875
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v0

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->m:Ljava/lang/String;

    invoke-interface {v0, v2}, Lcom/tkay/expressad/video/signal/c;->a(Ljava/lang/String;)V

    .line 6876
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v0

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->o:Lcom/tkay/expressad/videocommon/e/d;

    invoke-interface {v0, v2}, Lcom/tkay/expressad/video/signal/c;->a(Lcom/tkay/expressad/videocommon/e/d;)V

    .line 6877
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v0

    new-instance v2, Lcom/tkay/expressad/video/bt/module/TYTempContainer$d;

    invoke-direct {v2, p0, v9}, Lcom/tkay/expressad/video/bt/module/TYTempContainer$d;-><init>(Lcom/tkay/expressad/video/bt/module/TYTempContainer;B)V

    invoke-interface {v0, v2}, Lcom/tkay/expressad/video/signal/c;->a(Lcom/tkay/expressad/video/signal/c$a;)V

    .line 6880
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_3

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->H()Z

    move-result v0

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->ay()Z

    move-result v0

    if-eqz v0, :cond_3

    .line 6881
    :cond_2
    new-instance v0, Lcom/tkay/expressad/atsignalcommon/mraid/MraidVolumeChangeReceiver;

    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v0, v2}, Lcom/tkay/expressad/atsignalcommon/mraid/MraidVolumeChangeReceiver;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ax:Lcom/tkay/expressad/atsignalcommon/mraid/MraidVolumeChangeReceiver;

    .line 6882
    invoke-virtual {v0}, Lcom/tkay/expressad/atsignalcommon/mraid/MraidVolumeChangeReceiver;->registerReceiver()V

    .line 6883
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ax:Lcom/tkay/expressad/atsignalcommon/mraid/MraidVolumeChangeReceiver;

    invoke-virtual {v0}, Lcom/tkay/expressad/atsignalcommon/mraid/MraidVolumeChangeReceiver;->getCurrentVolume()D

    .line 6884
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ax:Lcom/tkay/expressad/atsignalcommon/mraid/MraidVolumeChangeReceiver;

    new-instance v2, Lcom/tkay/expressad/video/bt/module/TYTempContainer$6;

    invoke-direct {v2, p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer$6;-><init>(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)V

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/atsignalcommon/mraid/MraidVolumeChangeReceiver;->setVolumeChangeListener(Lcom/tkay/expressad/atsignalcommon/mraid/MraidVolumeChangeReceiver$VolumeChangeListener;)V

    .line 845
    :cond_3
    invoke-virtual {v7}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/video/signal/a/j;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/signal/a/j;->r()I

    move-result v0

    .line 846
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getJSContainerModule()Lcom/tkay/expressad/video/signal/e;

    move-result-object v2

    invoke-interface {v2, v0}, Lcom/tkay/expressad/video/signal/e;->readyStatus(I)V

    .line 847
    invoke-direct {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->j()V

    .line 848
    invoke-virtual {v7}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/video/signal/a/j;

    iget-object v0, v0, Lcom/tkay/expressad/video/signal/a/j;->r:Lcom/tkay/expressad/video/signal/c$a;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/c$a;->c()V

    .line 850
    iget-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->y:Z

    if-eqz v0, :cond_4

    .line 851
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v0

    iget v2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->aj:I

    invoke-interface {v0, v2}, Lcom/tkay/expressad/video/signal/c;->f(I)V

    .line 852
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v0

    iget v2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ak:I

    invoke-interface {v0, v2}, Lcom/tkay/expressad/video/signal/c;->e(I)V

    .line 857
    :cond_4
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/c;->f()I

    move-result v0

    const/4 v2, 0x1

    if-ne v0, v2, :cond_5

    .line 858
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->B:Landroid/view/View;

    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-static {v5, v4, v3}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v0, v3}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    if-eqz v0, :cond_5

    .line 860
    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->B:Landroid/view/View;

    check-cast v3, Landroid/view/ViewGroup;

    invoke-virtual {v3, v0}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 861
    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->B:Landroid/view/View;

    check-cast v3, Landroid/view/ViewGroup;

    invoke-virtual {v3, v0, v2}, Landroid/view/ViewGroup;->addView(Landroid/view/View;I)V

    .line 864
    :cond_5
    new-instance v0, Landroid/view/ViewGroup$LayoutParams;

    const/4 v2, -0x1

    invoke-direct {v0, v2, v2}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    invoke-virtual {v1, v7, v0}, Landroid/view/ViewGroup;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    return-void

    .line 867
    :cond_6
    invoke-virtual {p0, v9, v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->defaultLoad(ILjava/lang/String;)V

    return-void
.end method

.method static synthetic q(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Z
    .locals 1

    const/4 v0, 0x1

    .line 79
    iput-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->av:Z

    return v0
.end method

.method static synthetic r(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Ljava/lang/Runnable;
    .locals 0

    .line 79
    iget-object p0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ay:Ljava/lang/Runnable;

    return-object p0
.end method

.method private r()V
    .locals 3

    .line 874
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v0

    iget v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->s:I

    invoke-interface {v0, v1}, Lcom/tkay/expressad/video/signal/c;->a(I)V

    .line 875
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->m:Ljava/lang/String;

    invoke-interface {v0, v1}, Lcom/tkay/expressad/video/signal/c;->a(Ljava/lang/String;)V

    .line 876
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->o:Lcom/tkay/expressad/videocommon/e/d;

    invoke-interface {v0, v1}, Lcom/tkay/expressad/video/signal/c;->a(Lcom/tkay/expressad/videocommon/e/d;)V

    .line 877
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v0

    new-instance v1, Lcom/tkay/expressad/video/bt/module/TYTempContainer$d;

    const/4 v2, 0x0

    invoke-direct {v1, p0, v2}, Lcom/tkay/expressad/video/bt/module/TYTempContainer$d;-><init>(Lcom/tkay/expressad/video/bt/module/TYTempContainer;B)V

    invoke-interface {v0, v1}, Lcom/tkay/expressad/video/signal/c;->a(Lcom/tkay/expressad/video/signal/c$a;)V

    .line 880
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->H()Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->ay()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 881
    :cond_0
    new-instance v0, Lcom/tkay/expressad/atsignalcommon/mraid/MraidVolumeChangeReceiver;

    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/tkay/expressad/atsignalcommon/mraid/MraidVolumeChangeReceiver;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ax:Lcom/tkay/expressad/atsignalcommon/mraid/MraidVolumeChangeReceiver;

    .line 882
    invoke-virtual {v0}, Lcom/tkay/expressad/atsignalcommon/mraid/MraidVolumeChangeReceiver;->registerReceiver()V

    .line 883
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ax:Lcom/tkay/expressad/atsignalcommon/mraid/MraidVolumeChangeReceiver;

    invoke-virtual {v0}, Lcom/tkay/expressad/atsignalcommon/mraid/MraidVolumeChangeReceiver;->getCurrentVolume()D

    .line 884
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ax:Lcom/tkay/expressad/atsignalcommon/mraid/MraidVolumeChangeReceiver;

    new-instance v1, Lcom/tkay/expressad/video/bt/module/TYTempContainer$6;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer$6;-><init>(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)V

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/atsignalcommon/mraid/MraidVolumeChangeReceiver;->setVolumeChangeListener(Lcom/tkay/expressad/atsignalcommon/mraid/MraidVolumeChangeReceiver$VolumeChangeListener;)V

    :cond_1
    return-void
.end method

.method private s()V
    .locals 5

    .line 1094
    iget-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ao:Z

    if-eqz v0, :cond_0

    .line 1100
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->q:Lcom/tkay/expressad/videocommon/c/c;

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->m:Ljava/lang/String;

    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->p:Ljava/lang/String;

    iget-object v4, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->T:Ljava/lang/String;

    invoke-static {v0, v1, v2, v3, v4}, Lcom/tkay/expressad/video/module/b/a;->a(Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/videocommon/c/c;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method static synthetic s(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)V
    .locals 2

    .line 10243
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->isLoadSuccess()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 10244
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->l:Landroid/app/Activity;

    new-instance v1, Lcom/tkay/expressad/video/bt/module/TYTempContainer$7;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer$7;-><init>(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)V

    invoke-virtual {v0, v1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    :cond_0
    return-void
.end method

.method private t()V
    .locals 5

    const/4 v0, 0x1

    .line 1152
    :try_start_0
    iput-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->an:Z

    .line 1155
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->J()I

    move-result v1

    const/4 v2, 0x2

    if-ne v1, v2, :cond_0

    .line 1156
    iput-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ao:Z

    .line 1159
    :cond_0
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->E:Lcom/tkay/expressad/video/bt/module/b/h;

    if-eqz v1, :cond_5

    .line 1160
    iget-boolean v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->t:Z

    const/4 v2, 0x0

    if-eqz v1, :cond_3

    iget v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->v:I

    sget v3, Lcom/tkay/expressad/foundation/g/a;->cr:I

    if-eq v1, v3, :cond_1

    iget v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->v:I

    sget v3, Lcom/tkay/expressad/foundation/g/a;->cs:I

    if-ne v1, v3, :cond_3

    .line 1162
    :cond_1
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->E:Lcom/tkay/expressad/video/bt/module/b/h;

    iget v3, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->L:I

    if-ne v3, v0, :cond_2

    goto :goto_0

    :cond_2
    move v0, v2

    :goto_0
    iget v3, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->K:I

    invoke-interface {v1, v0, v3}, Lcom/tkay/expressad/video/bt/module/b/h;->a(ZI)V

    .line 1164
    :cond_3
    iget-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ao:Z

    if-nez v0, :cond_4

    .line 1165
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->q:Lcom/tkay/expressad/videocommon/c/c;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/videocommon/c/c;->a(I)V

    .line 1167
    :cond_4
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->E:Lcom/tkay/expressad/video/bt/module/b/h;

    iget-boolean v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ao:Z

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->q:Lcom/tkay/expressad/videocommon/c/c;

    invoke-interface {v0, v1, v2}, Lcom/tkay/expressad/video/bt/module/b/h;->a(ZLcom/tkay/expressad/videocommon/c/c;)V

    .line 1169
    :cond_5
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->h:Landroid/os/Handler;

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ay:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 1171
    iget-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->t:Z

    if-nez v0, :cond_6

    iget-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->y:Z

    if-eqz v0, :cond_7

    :cond_6
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_8

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    if-eqz v0, :cond_8

    .line 9094
    :cond_7
    iget-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ao:Z

    if-eqz v0, :cond_8

    .line 9100
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->q:Lcom/tkay/expressad/videocommon/c/c;

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->m:Ljava/lang/String;

    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->p:Ljava/lang/String;

    iget-object v4, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->T:Ljava/lang/String;

    invoke-static {v0, v1, v2, v3, v4}, Lcom/tkay/expressad/video/module/b/a;->a(Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/videocommon/c/c;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 1174
    :cond_8
    iget-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->y:Z

    if-nez v0, :cond_a

    .line 1175
    iget-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->t:Z

    if-eqz v0, :cond_9

    const/16 v0, 0x11f

    .line 1176
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-static {v0, v1}, Lcom/tkay/expressad/videocommon/a;->b(ILcom/tkay/expressad/foundation/d/c;)V

    goto :goto_1

    :cond_9
    const/16 v0, 0x5e

    .line 1178
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-static {v0, v1}, Lcom/tkay/expressad/videocommon/a;->b(ILcom/tkay/expressad/foundation/d/c;)V

    .line 1181
    :cond_a
    :goto_1
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    if-eqz v0, :cond_b

    .line 1182
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->release()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_b
    return-void

    :catchall_0
    move-exception v0

    .line 1185
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method static synthetic t(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Z
    .locals 1

    const/4 v0, 0x1

    .line 79
    iput-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->as:Z

    return v0
.end method

.method private static u()I
    .locals 2

    const/4 v0, 0x5

    .line 1228
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/videocommon/e/c;->b()Lcom/tkay/expressad/videocommon/e/a;

    move-result-object v1

    if-nez v1, :cond_0

    .line 1230
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->c()Lcom/tkay/expressad/videocommon/e/a;

    :cond_0
    if-eqz v1, :cond_1

    .line 1233
    invoke-virtual {v1}, Lcom/tkay/expressad/videocommon/e/a;->g()J

    move-result-wide v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    long-to-int v0, v0

    goto :goto_0

    :catchall_0
    move-exception v1

    .line 1237
    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_1
    :goto_0
    return v0
.end method

.method static synthetic u(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)V
    .locals 2

    .line 10256
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->isLoadSuccess()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 10257
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->l:Landroid/app/Activity;

    new-instance v1, Lcom/tkay/expressad/video/bt/module/TYTempContainer$8;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer$8;-><init>(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)V

    invoke-virtual {v0, v1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    :cond_0
    return-void
.end method

.method static synthetic v(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Landroid/app/Activity;
    .locals 0

    .line 79
    iget-object p0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->l:Landroid/app/Activity;

    return-object p0
.end method

.method private v()V
    .locals 2

    .line 1243
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->isLoadSuccess()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1244
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->l:Landroid/app/Activity;

    new-instance v1, Lcom/tkay/expressad/video/bt/module/TYTempContainer$7;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer$7;-><init>(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)V

    invoke-virtual {v0, v1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    :cond_0
    return-void
.end method

.method private w()V
    .locals 2

    .line 1256
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->isLoadSuccess()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1257
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->l:Landroid/app/Activity;

    new-instance v1, Lcom/tkay/expressad/video/bt/module/TYTempContainer$8;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer$8;-><init>(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)V

    invoke-virtual {v0, v1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    :cond_0
    return-void
.end method

.method static synthetic w(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Z
    .locals 0

    .line 79
    iget-boolean p0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->y:Z

    return p0
.end method

.method static synthetic x(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Landroid/app/Activity;
    .locals 0

    .line 79
    iget-object p0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->l:Landroid/app/Activity;

    return-object p0
.end method


# virtual methods
.method protected final a(Ljava/lang/String;)V
    .locals 1

    .line 559
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->E:Lcom/tkay/expressad/video/bt/module/b/h;

    if-eqz v0, :cond_0

    .line 560
    invoke-interface {v0, p1}, Lcom/tkay/expressad/video/bt/module/b/h;->a(Ljava/lang/String;)V

    .line 562
    :cond_0
    invoke-super {p0, p1}, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->a(Ljava/lang/String;)V

    return-void
.end method

.method public canBackPress()Z
    .locals 1

    .line 1105
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->canBackPress()Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    return v0

    :cond_1
    :goto_0
    const/4 v0, 0x1

    return v0
.end method

.method public defaultLoad(ILjava/lang/String;)V
    .locals 19

    move-object/from16 v0, p0

    .line 977
    invoke-virtual/range {p0 .. p2}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->superDefaultLoad(ILjava/lang/String;)V

    .line 979
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->isLoadSuccess()Z

    move-result v1

    if-eqz v1, :cond_6

    .line 980
    iget-object v1, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->J()I

    move-result v1

    const/4 v2, 0x2

    const/4 v3, 0x0

    const/4 v4, -0x2

    if-ne v1, v2, :cond_1

    .line 981
    iget-object v1, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    iget-object v2, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/video/module/TkayContainerView;->setCampaign(Lcom/tkay/expressad/foundation/d/c;)V

    .line 982
    iget-object v1, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    iget-object v2, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->U:Ljava/util/List;

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/video/module/TkayContainerView;->addOrderViewData(Ljava/util/List;)V

    .line 983
    iget-object v1, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    iget-object v2, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->m:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/video/module/TkayContainerView;->setUnitID(Ljava/lang/String;)V

    .line 985
    iget-object v1, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->g()I

    move-result v1

    if-le v1, v4, :cond_0

    .line 986
    iget-object v1, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->g()I

    move-result v1

    goto :goto_0

    .line 988
    :cond_0
    iget-object v1, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->o:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {v1}, Lcom/tkay/expressad/videocommon/e/d;->p()I

    move-result v1

    .line 990
    :goto_0
    iget-object v2, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {v2, v1}, Lcom/tkay/expressad/video/module/TkayContainerView;->setCloseDelayTime(I)V

    .line 991
    iget-object v1, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    iget-object v2, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->o:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {v2}, Lcom/tkay/expressad/videocommon/e/d;->j()I

    move-result v2

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/video/module/TkayContainerView;->setPlayCloseBtnTm(I)V

    .line 992
    iget-object v1, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    new-instance v2, Lcom/tkay/expressad/video/module/a/a/h;

    iget-object v5, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    iget-object v6, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->D:Lcom/tkay/expressad/videocommon/b/a;

    iget-object v7, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->q:Lcom/tkay/expressad/videocommon/c/c;

    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->b()Ljava/lang/String;

    move-result-object v8

    iget-object v9, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->m:Ljava/lang/String;

    new-instance v10, Lcom/tkay/expressad/video/bt/module/TYTempContainer$c;

    invoke-direct {v10, v0, v3}, Lcom/tkay/expressad/video/bt/module/TYTempContainer$c;-><init>(Lcom/tkay/expressad/video/bt/module/TYTempContainer;B)V

    iget-object v3, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->o:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {v3}, Lcom/tkay/expressad/videocommon/e/d;->M()I

    move-result v11

    iget-boolean v12, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->y:Z

    move-object v4, v2

    invoke-direct/range {v4 .. v12}, Lcom/tkay/expressad/video/module/a/a/h;-><init>(Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/videocommon/b/a;Lcom/tkay/expressad/videocommon/c/c;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/video/module/a/a;IZ)V

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/video/module/TkayContainerView;->setNotifyListener(Lcom/tkay/expressad/video/module/a/a;)V

    .line 994
    iget-object v1, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    iget-object v2, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->J:Lcom/tkay/expressad/video/signal/factory/b;

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/video/module/TkayContainerView;->preLoadData(Lcom/tkay/expressad/video/signal/factory/b;)V

    .line 995
    iget-object v1, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {v1}, Lcom/tkay/expressad/video/module/TkayContainerView;->showPlayableView()V

    return-void

    .line 997
    :cond_1
    invoke-direct/range {p0 .. p2}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->a(ILjava/lang/String;)V

    .line 998
    iget-object v1, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->am:Landroid/view/View;

    const/16 v2, 0x8

    invoke-virtual {v1, v2}, Landroid/view/View;->setVisibility(I)V

    .line 999
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->loadModuleDatas()V

    .line 1000
    iget-object v1, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->o:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {v1}, Lcom/tkay/expressad/videocommon/e/d;->f()I

    move-result v1

    .line 1001
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->e()I

    move-result v2

    if-eqz v2, :cond_2

    move v13, v2

    goto :goto_1

    :cond_2
    move v13, v1

    .line 1005
    :goto_1
    iget-object v1, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v1, :cond_3

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v1

    if-eqz v1, :cond_3

    .line 1006
    iget-object v1, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->f:Lcom/tkay/expressad/video/module/TkayVideoView;

    new-instance v2, Lcom/tkay/expressad/video/bt/module/TYTempContainer$b;

    iget-object v5, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->l:Landroid/app/Activity;

    iget-object v6, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-direct {v2, v0, v5, v6}, Lcom/tkay/expressad/video/bt/module/TYTempContainer$b;-><init>(Lcom/tkay/expressad/video/bt/module/TYTempContainer;Landroid/app/Activity;Lcom/tkay/expressad/foundation/d/c;)V

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/video/module/TkayVideoView;->setContainerViewOnNotifyListener(Lcom/tkay/expressad/video/module/a/a;)V

    .line 1009
    :cond_3
    iget-object v1, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v1, :cond_4

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->h()I

    move-result v1

    if-le v1, v4, :cond_4

    .line 1010
    iget-object v1, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->h()I

    move-result v1

    goto :goto_2

    .line 1012
    :cond_4
    iget-object v1, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->o:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {v1}, Lcom/tkay/expressad/videocommon/e/d;->e()I

    move-result v1

    .line 1015
    :goto_2
    iget-object v2, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->k()I

    move-result v2

    const/4 v4, 0x5

    if-ne v2, v4, :cond_5

    iget v2, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->H:I

    const/4 v4, 0x1

    if-le v2, v4, :cond_5

    .line 1016
    invoke-direct {v0, v1, v2}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->a(II)I

    move-result v1

    .line 1017
    iget-object v2, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v2, v1}, Lcom/tkay/expressad/foundation/d/c;->a(I)V

    :cond_5
    move v14, v1

    .line 1019
    iget-object v1, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->f:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-virtual {v1, v14}, Lcom/tkay/expressad/video/module/TkayVideoView;->setVideoSkipTime(I)V

    .line 1020
    iget-object v1, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->f:Lcom/tkay/expressad/video/module/TkayVideoView;

    new-instance v2, Lcom/tkay/expressad/video/module/a/a/m;

    iget-object v7, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    iget-object v8, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    iget-object v9, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->q:Lcom/tkay/expressad/videocommon/c/c;

    iget-object v10, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->D:Lcom/tkay/expressad/videocommon/b/a;

    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->b()Ljava/lang/String;

    move-result-object v11

    iget-object v12, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->m:Ljava/lang/String;

    new-instance v15, Lcom/tkay/expressad/video/bt/module/TYTempContainer$e;

    invoke-direct {v15, v0, v3}, Lcom/tkay/expressad/video/bt/module/TYTempContainer$e;-><init>(Lcom/tkay/expressad/video/bt/module/TYTempContainer;B)V

    iget-object v3, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->o:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {v3}, Lcom/tkay/expressad/videocommon/e/d;->M()I

    move-result v16

    iget-boolean v3, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->y:Z

    iget-object v4, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->o:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {v4}, Lcom/tkay/expressad/videocommon/e/d;->U()I

    move-result v18

    move-object v5, v2

    move-object v6, v1

    move/from16 v17, v3

    invoke-direct/range {v5 .. v18}, Lcom/tkay/expressad/video/module/a/a/m;-><init>(Lcom/tkay/expressad/video/module/TkayVideoView;Lcom/tkay/expressad/video/module/TkayContainerView;Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/videocommon/c/c;Lcom/tkay/expressad/videocommon/b/a;Ljava/lang/String;Ljava/lang/String;IILcom/tkay/expressad/video/module/a/a;IZI)V

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/video/module/TkayVideoView;->setNotifyListener(Lcom/tkay/expressad/video/module/a/a;)V

    .line 1022
    iget-object v1, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->f:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-virtual {v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->defaultShow()V

    .line 1023
    iget-object v1, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    new-instance v13, Lcom/tkay/expressad/video/module/a/a/b;

    iget-object v3, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->f:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-object v5, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    iget-object v6, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->q:Lcom/tkay/expressad/videocommon/c/c;

    iget-object v7, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->D:Lcom/tkay/expressad/videocommon/b/a;

    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->b()Ljava/lang/String;

    move-result-object v8

    iget-object v9, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->m:Ljava/lang/String;

    new-instance v10, Lcom/tkay/expressad/video/bt/module/TYTempContainer$b;

    iget-object v2, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->l:Landroid/app/Activity;

    iget-object v4, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-direct {v10, v0, v2, v4}, Lcom/tkay/expressad/video/bt/module/TYTempContainer$b;-><init>(Lcom/tkay/expressad/video/bt/module/TYTempContainer;Landroid/app/Activity;Lcom/tkay/expressad/foundation/d/c;)V

    iget-object v2, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->o:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {v2}, Lcom/tkay/expressad/videocommon/e/d;->M()I

    move-result v11

    iget-boolean v12, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->y:Z

    move-object v2, v13

    move-object v4, v1

    invoke-direct/range {v2 .. v12}, Lcom/tkay/expressad/video/module/a/a/b;-><init>(Lcom/tkay/expressad/video/module/TkayVideoView;Lcom/tkay/expressad/video/module/TkayContainerView;Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/videocommon/c/c;Lcom/tkay/expressad/videocommon/b/a;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/video/module/a/a;IZ)V

    invoke-virtual {v1, v13}, Lcom/tkay/expressad/video/module/TkayContainerView;->setNotifyListener(Lcom/tkay/expressad/video/module/a/a;)V

    .line 1025
    iget-object v1, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {v1}, Lcom/tkay/expressad/video/module/TkayContainerView;->defaultShow()V

    return-void

    .line 1028
    :cond_6
    invoke-direct/range {p0 .. p2}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->a(ILjava/lang/String;)V

    .line 1029
    iget-object v1, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->l:Landroid/app/Activity;

    if-eqz v1, :cond_7

    .line 1030
    iget-object v1, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->l:Landroid/app/Activity;

    invoke-virtual {v1}, Landroid/app/Activity;->finish()V

    :cond_7
    return-void
.end method

.method public findID(Ljava/lang/String;)I
    .locals 2

    .line 178
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "id"

    invoke-static {v0, p1, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    return p1
.end method

.method public findLayout(Ljava/lang/String;)I
    .locals 2

    .line 182
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "layout"

    invoke-static {v0, p1, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    return p1
.end method

.method public findTkayContainerView()Lcom/tkay/expressad/video/module/TkayContainerView;
    .locals 1

    const-string v0, "tkay_video_templete_container"

    .line 1085
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->findID(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/video/module/TkayContainerView;

    return-object v0
.end method

.method public findTkayVideoView()Lcom/tkay/expressad/video/module/TkayVideoView;
    .locals 1

    const-string v0, "tkay_video_templete_videoview"

    .line 1081
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->findID(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/video/module/TkayVideoView;

    return-object v0
.end method

.method public findWindVaneWebView()Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;
    .locals 4

    const-string v0, "_"

    .line 1042
    :try_start_0
    iget-boolean v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->y:Z

    if-eqz v1, :cond_0

    .line 1044
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v1, :cond_4

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v1

    if-eqz v1, :cond_4

    .line 1046
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->m:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 1047
    invoke-static {v0}, Lcom/tkay/expressad/videocommon/a;->a(Ljava/lang/String;)Lcom/tkay/expressad/videocommon/a$a;

    move-result-object v0

    if-eqz v0, :cond_4

    .line 1049
    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/a$a;->a()Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    move-result-object v0

    return-object v0

    .line 1054
    :cond_0
    iget-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->t:Z

    const/16 v1, 0x11f

    const/16 v2, 0x5e

    if-eqz v0, :cond_1

    .line 1055
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-static {v1, v0}, Lcom/tkay/expressad/videocommon/a;->a(ILcom/tkay/expressad/foundation/d/c;)Lcom/tkay/expressad/videocommon/a$a;

    move-result-object v0

    goto :goto_0

    .line 1057
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-static {v2, v0}, Lcom/tkay/expressad/videocommon/a;->a(ILcom/tkay/expressad/foundation/d/c;)Lcom/tkay/expressad/videocommon/a$a;

    move-result-object v0

    :goto_0
    if-eqz v0, :cond_4

    .line 1059
    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/a$a;->c()Z

    move-result v3

    if-eqz v3, :cond_4

    .line 1060
    iget-boolean v3, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->t:Z

    if-eqz v3, :cond_2

    .line 1061
    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-static {v1, v2}, Lcom/tkay/expressad/videocommon/a;->b(ILcom/tkay/expressad/foundation/d/c;)V

    goto :goto_1

    .line 1063
    :cond_2
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-static {v2, v1}, Lcom/tkay/expressad/videocommon/a;->b(ILcom/tkay/expressad/foundation/d/c;)V

    .line 1065
    :goto_1
    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/a$a;->a()Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    move-result-object v0

    .line 1066
    iget-boolean v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ar:Z

    if-eqz v1, :cond_3

    .line 1067
    invoke-virtual {v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setWebViewTransparent()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_3
    return-object v0

    :catch_0
    move-exception v0

    .line 1073
    sget-boolean v1, Lcom/tkay/expressad/b;->a:Z

    if-eqz v1, :cond_4

    .line 1074
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_4
    const/4 v0, 0x0

    return-object v0
.end method

.method public getCampaign()Lcom/tkay/expressad/foundation/d/c;
    .locals 1

    .line 1706
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    return-object v0
.end method

.method public getInstanceId()Ljava/lang/String;
    .locals 1

    .line 1772
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->I:Ljava/lang/String;

    return-object v0
.end method

.method public getLayoutID()I
    .locals 1

    .line 1036
    iget-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ar:Z

    if-eqz v0, :cond_0

    const-string v0, "tkay_reward_activity_video_templete_transparent"

    :goto_0
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->findLayout(Ljava/lang/String;)I

    move-result v0

    return v0

    :cond_0
    const-string v0, "tkay_reward_activity_video_templete"

    goto :goto_0
.end method

.method public init(Landroid/content/Context;)V
    .locals 0

    .line 122
    invoke-static {p1}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->W:Landroid/view/LayoutInflater;

    return-void
.end method

.method public initViews()Z
    .locals 1

    const-string v0, "tkay_video_templete_progressbar"

    .line 1089
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->findID(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->am:Landroid/view/View;

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public isLoadSuccess()Z
    .locals 1

    .line 219
    iget-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->c:Z

    return v0
.end method

.method public loadModuleDatas()V
    .locals 20

    move-object/from16 v0, p0

    .line 7317
    iget-object v1, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->b(Lcom/tkay/expressad/foundation/d/c;)Lcom/tkay/expressad/video/signal/a/j;

    move-result-object v1

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    .line 7319
    invoke-virtual {v1}, Lcom/tkay/expressad/video/signal/a/j;->b()I

    move-result v1

    goto :goto_0

    :cond_0
    move v1, v2

    :goto_0
    if-eqz v1, :cond_1

    .line 905
    iput v1, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->s:I

    .line 907
    :cond_1
    iget-object v1, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->o:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {v1}, Lcom/tkay/expressad/videocommon/e/d;->f()I

    move-result v1

    .line 908
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->e()I

    move-result v3

    if-eqz v3, :cond_2

    move v11, v3

    goto :goto_1

    :cond_2
    move v11, v1

    .line 912
    :goto_1
    iget-object v1, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->f:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget v3, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->s:I

    invoke-virtual {v1, v3}, Lcom/tkay/expressad/video/module/TkayVideoView;->setSoundState(I)V

    .line 913
    iget-object v1, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->f:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-object v3, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1, v3}, Lcom/tkay/expressad/video/module/TkayVideoView;->setCampaign(Lcom/tkay/expressad/foundation/d/c;)V

    .line 915
    iget-object v1, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->f:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-object v3, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->D:Lcom/tkay/expressad/videocommon/b/a;

    invoke-virtual {v3}, Lcom/tkay/expressad/videocommon/b/a;->r()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/tkay/expressad/video/module/TkayVideoView;->setPlayURL(Ljava/lang/String;)V

    .line 918
    iget-object v1, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    const/4 v3, -0x2

    if-eqz v1, :cond_3

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->h()I

    move-result v1

    if-le v1, v3, :cond_3

    .line 919
    iget-object v1, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->h()I

    move-result v1

    goto :goto_2

    .line 921
    :cond_3
    iget-object v1, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->o:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {v1}, Lcom/tkay/expressad/videocommon/e/d;->e()I

    move-result v1

    .line 924
    :goto_2
    iget-object v4, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v4}, Lcom/tkay/expressad/foundation/d/c;->k()I

    move-result v4

    const/4 v5, 0x5

    const/4 v15, 0x1

    if-ne v4, v5, :cond_4

    iget v4, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->H:I

    if-le v4, v15, :cond_4

    .line 925
    invoke-direct {v0, v1, v4}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->a(II)I

    move-result v1

    .line 926
    iget-object v4, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v4, v1}, Lcom/tkay/expressad/foundation/d/c;->a(I)V

    .line 928
    :cond_4
    iget-object v4, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->f:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-virtual {v4, v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->setVideoSkipTime(I)V

    .line 929
    iget-object v4, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->f:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-object v5, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->o:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {v5}, Lcom/tkay/expressad/videocommon/e/d;->k()I

    move-result v5

    invoke-virtual {v4, v5}, Lcom/tkay/expressad/video/module/TkayVideoView;->setCloseAlert(I)V

    .line 930
    iget-object v4, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->f:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->u()I

    move-result v5

    invoke-virtual {v4, v5}, Lcom/tkay/expressad/video/module/TkayVideoView;->setBufferTimeout(I)V

    .line 931
    iget-object v14, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->f:Lcom/tkay/expressad/video/module/TkayVideoView;

    new-instance v13, Lcom/tkay/expressad/video/module/a/a/n;

    iget-object v5, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->J:Lcom/tkay/expressad/video/signal/factory/b;

    iget-object v6, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    iget-object v7, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->q:Lcom/tkay/expressad/videocommon/c/c;

    iget-object v8, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->D:Lcom/tkay/expressad/videocommon/b/a;

    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->b()Ljava/lang/String;

    move-result-object v9

    iget-object v10, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->m:Ljava/lang/String;

    new-instance v12, Lcom/tkay/expressad/video/bt/module/TYTempContainer$e;

    invoke-direct {v12, v0, v2}, Lcom/tkay/expressad/video/bt/module/TYTempContainer$e;-><init>(Lcom/tkay/expressad/video/bt/module/TYTempContainer;B)V

    iget-object v4, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->o:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {v4}, Lcom/tkay/expressad/videocommon/e/d;->M()I

    move-result v16

    iget-boolean v4, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->y:Z

    iget-object v15, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->o:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {v15}, Lcom/tkay/expressad/videocommon/e/d;->U()I

    move-result v18

    move v15, v4

    move-object v4, v13

    move-object/from16 v19, v12

    move v12, v1

    move-object v2, v13

    move-object/from16 v13, v19

    move-object v3, v14

    move/from16 v14, v16

    const/16 v17, 0x1

    move/from16 v16, v18

    invoke-direct/range {v4 .. v16}, Lcom/tkay/expressad/video/module/a/a/n;-><init>(Lcom/tkay/expressad/video/signal/factory/IJSFactory;Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/videocommon/c/c;Lcom/tkay/expressad/videocommon/b/a;Ljava/lang/String;Ljava/lang/String;IILcom/tkay/expressad/video/module/a/a;IZI)V

    invoke-virtual {v3, v2}, Lcom/tkay/expressad/video/module/TkayVideoView;->setNotifyListener(Lcom/tkay/expressad/video/module/a/a;)V

    .line 932
    iget-object v2, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->f:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-boolean v3, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ar:Z

    invoke-virtual {v2, v3}, Lcom/tkay/expressad/video/module/TkayVideoView;->setShowingTransparent(Z)V

    .line 933
    iget-boolean v2, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->t:Z

    if-eqz v2, :cond_7

    iget v2, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->v:I

    sget v3, Lcom/tkay/expressad/foundation/g/a;->cr:I

    if-eq v2, v3, :cond_5

    iget v2, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->v:I

    sget v3, Lcom/tkay/expressad/foundation/g/a;->cs:I

    if-ne v2, v3, :cond_7

    .line 934
    :cond_5
    iget-object v2, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->f:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget v3, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->v:I

    iget v4, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->w:I

    iget v5, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->x:I

    invoke-virtual {v2, v3, v4, v5}, Lcom/tkay/expressad/video/module/TkayVideoView;->setIVRewardEnable(III)V

    .line 935
    iget-object v2, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->f:Lcom/tkay/expressad/video/module/TkayVideoView;

    .line 8310
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v3

    if-eqz v3, :cond_6

    .line 8311
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v3

    invoke-interface {v3}, Lcom/tkay/expressad/video/signal/c;->n()I

    move-result v15

    goto :goto_3

    :cond_6
    move/from16 v15, v17

    .line 935
    :goto_3
    invoke-virtual {v2, v15}, Lcom/tkay/expressad/video/module/TkayVideoView;->setDialogRole(I)V

    .line 937
    :cond_7
    iget-object v2, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    iget-object v3, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v2, v3}, Lcom/tkay/expressad/video/module/TkayContainerView;->setCampaign(Lcom/tkay/expressad/foundation/d/c;)V

    .line 938
    iget-object v2, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    iget-object v3, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->U:Ljava/util/List;

    invoke-virtual {v2, v3}, Lcom/tkay/expressad/video/module/TkayContainerView;->addOrderViewData(Ljava/util/List;)V

    .line 939
    iget-object v2, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    iget-object v3, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->m:Ljava/lang/String;

    invoke-virtual {v2, v3}, Lcom/tkay/expressad/video/module/TkayContainerView;->setUnitID(Ljava/lang/String;)V

    .line 941
    iget-object v2, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->g()I

    move-result v2

    const/4 v3, -0x2

    if-le v2, v3, :cond_8

    .line 942
    iget-object v2, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->g()I

    move-result v2

    goto :goto_4

    .line 944
    :cond_8
    iget-object v2, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->o:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {v2}, Lcom/tkay/expressad/videocommon/e/d;->p()I

    move-result v2

    .line 946
    :goto_4
    iget-object v3, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {v3, v2}, Lcom/tkay/expressad/video/module/TkayContainerView;->setCloseDelayTime(I)V

    .line 947
    iget-object v2, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    iget-object v3, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->o:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {v3}, Lcom/tkay/expressad/videocommon/e/d;->j()I

    move-result v3

    invoke-virtual {v2, v3}, Lcom/tkay/expressad/video/module/TkayContainerView;->setPlayCloseBtnTm(I)V

    .line 949
    iget-object v2, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    iget-object v3, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->o:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {v3}, Lcom/tkay/expressad/videocommon/e/d;->h()I

    move-result v3

    invoke-virtual {v2, v3}, Lcom/tkay/expressad/video/module/TkayContainerView;->setVideoInteractiveType(I)V

    .line 950
    iget-object v2, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    iget-object v3, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->o:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {v3}, Lcom/tkay/expressad/videocommon/e/d;->r()I

    move-result v3

    invoke-virtual {v2, v3}, Lcom/tkay/expressad/video/module/TkayContainerView;->setEndscreenType(I)V

    .line 951
    iget-object v2, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {v2, v1}, Lcom/tkay/expressad/video/module/TkayContainerView;->setVideoSkipTime(I)V

    .line 952
    iget-object v1, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    iget-boolean v2, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ar:Z

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/video/module/TkayContainerView;->setShowingTransparent(Z)V

    .line 953
    iget-object v1, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    iget-object v2, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->J:Lcom/tkay/expressad/video/signal/factory/b;

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/video/module/TkayContainerView;->setJSFactory(Lcom/tkay/expressad/video/signal/factory/b;)V

    .line 954
    iget-object v1, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->J()I

    move-result v1

    const/4 v2, 0x2

    if-ne v1, v2, :cond_9

    .line 955
    iget-object v1, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    new-instance v11, Lcom/tkay/expressad/video/module/a/a/h;

    iget-object v3, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    iget-object v4, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->D:Lcom/tkay/expressad/videocommon/b/a;

    iget-object v5, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->q:Lcom/tkay/expressad/videocommon/c/c;

    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->b()Ljava/lang/String;

    move-result-object v6

    iget-object v7, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->m:Ljava/lang/String;

    new-instance v8, Lcom/tkay/expressad/video/bt/module/TYTempContainer$c;

    const/4 v2, 0x0

    invoke-direct {v8, v0, v2}, Lcom/tkay/expressad/video/bt/module/TYTempContainer$c;-><init>(Lcom/tkay/expressad/video/bt/module/TYTempContainer;B)V

    iget-object v2, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->o:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {v2}, Lcom/tkay/expressad/videocommon/e/d;->M()I

    move-result v9

    iget-boolean v10, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->y:Z

    move-object v2, v11

    invoke-direct/range {v2 .. v10}, Lcom/tkay/expressad/video/module/a/a/h;-><init>(Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/videocommon/b/a;Lcom/tkay/expressad/videocommon/c/c;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/video/module/a/a;IZ)V

    invoke-virtual {v1, v11}, Lcom/tkay/expressad/video/module/TkayContainerView;->setNotifyListener(Lcom/tkay/expressad/video/module/a/a;)V

    .line 956
    iget-object v1, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    iget-object v2, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->J:Lcom/tkay/expressad/video/signal/factory/b;

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/video/module/TkayContainerView;->preLoadData(Lcom/tkay/expressad/video/signal/factory/b;)V

    .line 957
    iget-object v1, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {v1}, Lcom/tkay/expressad/video/module/TkayContainerView;->showPlayableView()V

    goto :goto_5

    .line 959
    :cond_9
    iget-object v1, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    new-instance v12, Lcom/tkay/expressad/video/module/a/a/c;

    iget-object v3, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->J:Lcom/tkay/expressad/video/signal/factory/b;

    iget-object v4, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    iget-object v5, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->q:Lcom/tkay/expressad/videocommon/c/c;

    iget-object v6, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->D:Lcom/tkay/expressad/videocommon/b/a;

    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->b()Ljava/lang/String;

    move-result-object v7

    iget-object v8, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->m:Ljava/lang/String;

    new-instance v9, Lcom/tkay/expressad/video/bt/module/TYTempContainer$b;

    iget-object v2, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->l:Landroid/app/Activity;

    iget-object v10, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-direct {v9, v0, v2, v10}, Lcom/tkay/expressad/video/bt/module/TYTempContainer$b;-><init>(Lcom/tkay/expressad/video/bt/module/TYTempContainer;Landroid/app/Activity;Lcom/tkay/expressad/foundation/d/c;)V

    iget-object v2, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->o:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {v2}, Lcom/tkay/expressad/videocommon/e/d;->M()I

    move-result v10

    iget-boolean v11, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->y:Z

    move-object v2, v12

    invoke-direct/range {v2 .. v11}, Lcom/tkay/expressad/video/module/a/a/c;-><init>(Lcom/tkay/expressad/video/signal/factory/IJSFactory;Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/videocommon/c/c;Lcom/tkay/expressad/videocommon/b/a;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/video/module/a/a;IZ)V

    invoke-virtual {v1, v12}, Lcom/tkay/expressad/video/module/TkayContainerView;->setNotifyListener(Lcom/tkay/expressad/video/module/a/a;)V

    .line 960
    iget-object v1, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    iget-object v2, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->J:Lcom/tkay/expressad/video/signal/factory/b;

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/video/module/TkayContainerView;->preLoadData(Lcom/tkay/expressad/video/signal/factory/b;)V

    .line 961
    iget-object v1, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->f:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-object v2, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->J:Lcom/tkay/expressad/video/signal/factory/b;

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/video/module/TkayVideoView;->preLoadData(Lcom/tkay/expressad/video/signal/factory/b;)V

    .line 963
    :goto_5
    iget-boolean v1, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ar:Z

    if-eqz v1, :cond_a

    .line 964
    iget-object v1, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {v1}, Lcom/tkay/expressad/video/module/TkayContainerView;->setTkayClickMiniCardViewTransparent()V

    :cond_a
    return-void
.end method

.method public notifyEvent(Ljava/lang/String;)V
    .locals 3

    .line 1784
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_0

    .line 1785
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->I:Ljava/lang/String;

    .line 9175
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    invoke-virtual {v1}, Ljava/lang/String;->getBytes()[B

    move-result-object v1

    const/4 v2, 0x2

    invoke-static {v1, v2}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, p1, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public onBackPressed()V
    .locals 1

    .line 1109
    iget-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ar:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->f:Lcom/tkay/expressad/video/module/TkayVideoView;

    if-eqz v0, :cond_0

    .line 1110
    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->notifyVideoClose()V

    return-void

    .line 1113
    :cond_0
    iget-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->at:Z

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->f:Lcom/tkay/expressad/video/module/TkayVideoView;

    if-eqz v0, :cond_3

    .line 1114
    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->isMiniCardShowing()Z

    move-result v0

    if-eqz v0, :cond_2

    .line 1115
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    if-eqz v0, :cond_1

    .line 1116
    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->onMiniEndcardBackPress()V

    :cond_1
    return-void

    .line 1120
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->f:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->onBackPress()V

    return-void

    .line 1123
    :cond_3
    iget-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->av:Z

    if-eqz v0, :cond_4

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    if-eqz v0, :cond_4

    .line 1124
    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->onPlayableBackPress()V

    return-void

    .line 1127
    :cond_4
    iget-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->au:Z

    if-eqz v0, :cond_5

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    if-eqz v0, :cond_5

    .line 1128
    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->onEndcardBackPress()V

    .line 1131
    :cond_5
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/c;->g()Z

    move-result v0

    if-eqz v0, :cond_7

    .line 1133
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getJSContainerModule()Lcom/tkay/expressad/video/signal/e;

    move-result-object v0

    if-eqz v0, :cond_6

    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getJSContainerModule()Lcom/tkay/expressad/video/signal/e;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/e;->miniCardShowing()Z

    move-result v0

    if-nez v0, :cond_8

    .line 1136
    :cond_6
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getActivityProxy()Lcom/tkay/expressad/video/signal/a;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/a;->g()V

    return-void

    .line 1139
    :cond_7
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->canBackPress()Z

    move-result v0

    if-eqz v0, :cond_8

    .line 1140
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->l:Landroid/app/Activity;

    if-eqz v0, :cond_8

    iget-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->y:Z

    if-nez v0, :cond_8

    iget-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->aw:Z

    if-nez v0, :cond_8

    const/4 v0, 0x1

    .line 1141
    iput-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->aw:Z

    .line 1142
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->l:Landroid/app/Activity;

    invoke-virtual {v0}, Landroid/app/Activity;->onBackPressed()V

    :cond_8
    return-void
.end method

.method public onConfigurationChanged(Landroid/content/res/Configuration;)V
    .locals 0

    .line 508
    invoke-super {p0, p1}, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->onConfigurationChanged(Landroid/content/res/Configuration;)V

    return-void
.end method

.method public onCreate()V
    .locals 14

    const-string v0, "id"

    const-string v1, "tkay_video_templete_webview_parent"

    .line 512
    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "onCreate isBigOffer: "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-boolean v3, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->y:Z

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    .line 2572
    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->o:Lcom/tkay/expressad/videocommon/e/d;

    if-nez v2, :cond_0

    .line 2573
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    move-result-object v2

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v3

    iget-object v4, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->m:Ljava/lang/String;

    iget-boolean v5, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->t:Z

    invoke-virtual {v2, v3, v4, v5}, Lcom/tkay/expressad/videocommon/e/c;->a(Ljava/lang/String;Ljava/lang/String;Z)Lcom/tkay/expressad/videocommon/e/d;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->o:Lcom/tkay/expressad/videocommon/e/d;

    :cond_0
    const/4 v2, 0x0

    .line 514
    iput-boolean v2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->aw:Z

    .line 517
    :try_start_0
    iget-boolean v3, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->y:Z

    if-eqz v3, :cond_2

    .line 518
    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v3, :cond_1

    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v3

    if-eqz v3, :cond_1

    .line 519
    new-instance v3, Lcom/tkay/expressad/video/bt/module/b/e;

    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getContext()Landroid/content/Context;

    move-result-object v5

    iget-boolean v6, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->t:Z

    iget-object v7, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->o:Lcom/tkay/expressad/videocommon/e/d;

    iget-object v8, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    iget-object v9, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->E:Lcom/tkay/expressad/video/bt/module/b/h;

    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->b()Ljava/lang/String;

    move-result-object v10

    iget-object v11, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->m:Ljava/lang/String;

    move-object v4, v3

    invoke-direct/range {v4 .. v11}, Lcom/tkay/expressad/video/bt/module/b/e;-><init>(Landroid/content/Context;ZLcom/tkay/expressad/videocommon/e/d;Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/video/bt/module/b/h;Ljava/lang/String;Ljava/lang/String;)V

    iput-object v3, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->E:Lcom/tkay/expressad/video/bt/module/b/h;

    goto :goto_0

    .line 523
    :cond_1
    new-instance v3, Lcom/tkay/expressad/video/bt/module/b/d;

    iget-object v4, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->F:Lcom/tkay/expressad/video/bt/module/a/b;

    iget-object v5, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->I:Ljava/lang/String;

    invoke-direct {v3, v4, v5}, Lcom/tkay/expressad/video/bt/module/b/d;-><init>(Lcom/tkay/expressad/video/bt/module/a/b;Ljava/lang/String;)V

    iput-object v3, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->E:Lcom/tkay/expressad/video/bt/module/b/h;

    goto :goto_0

    .line 526
    :cond_2
    new-instance v11, Lcom/tkay/expressad/video/bt/module/b/e;

    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getContext()Landroid/content/Context;

    move-result-object v4

    iget-boolean v5, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->t:Z

    iget-object v6, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->o:Lcom/tkay/expressad/videocommon/e/d;

    iget-object v7, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    iget-object v8, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->E:Lcom/tkay/expressad/video/bt/module/b/h;

    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->b()Ljava/lang/String;

    move-result-object v9

    iget-object v10, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->m:Ljava/lang/String;

    move-object v3, v11

    invoke-direct/range {v3 .. v10}, Lcom/tkay/expressad/video/bt/module/b/e;-><init>(Landroid/content/Context;ZLcom/tkay/expressad/videocommon/e/d;Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/video/bt/module/b/h;Ljava/lang/String;Ljava/lang/String;)V

    iput-object v11, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->E:Lcom/tkay/expressad/video/bt/module/b/h;

    .line 529
    :goto_0
    new-instance v3, Lcom/tkay/expressad/video/bt/module/b/f;

    iget-object v4, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->E:Lcom/tkay/expressad/video/bt/module/b/h;

    invoke-direct {v3, v4}, Lcom/tkay/expressad/video/bt/module/b/f;-><init>(Lcom/tkay/expressad/video/bt/module/b/h;)V

    invoke-virtual {p0, v3}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->registerErrorListener(Lcom/tkay/expressad/video/bt/module/TYTempContainer$a;)V

    .line 531
    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->o:Lcom/tkay/expressad/videocommon/e/d;

    iget-object v4, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p0, v3, v4}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->a(Lcom/tkay/expressad/videocommon/e/d;Lcom/tkay/expressad/foundation/d/c;)V

    .line 532
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setShowingTransparent()V

    .line 534
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getLayoutID()I

    move-result v3

    if-gtz v3, :cond_3

    const-string v0, "layoutID not found"

    .line 536
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->a(Ljava/lang/String;)V

    return-void

    .line 538
    :cond_3
    iget-object v4, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->W:Landroid/view/LayoutInflater;

    const/4 v5, 0x0

    invoke-virtual {v4, v3, v5}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v3

    iput-object v3, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->B:Landroid/view/View;

    .line 3130
    new-instance v4, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v5, -0x1

    invoke-direct {v4, v5, v5}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 539
    invoke-virtual {p0, v3, v4}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 3134
    iget-boolean v3, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->a:Z

    if-eqz v3, :cond_4

    .line 3135
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setMatchParent()V

    .line 3442
    :cond_4
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->findWindVaneWebView()Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    move-result-object v3

    iput-object v3, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 3443
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->findTkayVideoView()Lcom/tkay/expressad/video/module/TkayVideoView;

    move-result-object v3

    iput-object v3, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->f:Lcom/tkay/expressad/video/module/TkayVideoView;

    .line 3444
    iget-object v4, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v3, v4}, Lcom/tkay/expressad/video/module/TkayVideoView;->setVideoLayout(Lcom/tkay/expressad/foundation/d/c;)V

    .line 3445
    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->f:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-boolean v4, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->t:Z

    invoke-virtual {v3, v4}, Lcom/tkay/expressad/video/module/TkayVideoView;->setIsIV(Z)V

    .line 3446
    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->f:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-object v4, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->m:Ljava/lang/String;

    invoke-virtual {v3, v4}, Lcom/tkay/expressad/video/module/TkayVideoView;->setUnitId(Ljava/lang/String;)V

    .line 3447
    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->f:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-object v4, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->G:Lcom/tkay/expressad/video/dynview/f/a;

    iget-object v6, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->U:Ljava/util/List;

    iget v7, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->H:I

    iget v8, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->V:I

    invoke-virtual {v3, v4, v6, v7, v8}, Lcom/tkay/expressad/video/module/TkayVideoView;->setCamPlayOrderCallback(Lcom/tkay/expressad/video/dynview/f/a;Ljava/util/List;II)V

    .line 3449
    iget-boolean v3, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->y:Z

    if-eqz v3, :cond_5

    .line 3450
    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->f:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget v4, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->O:I

    iget v6, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->P:I

    iget v7, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->Q:I

    iget v8, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->R:I

    invoke-virtual {v3, v4, v6, v7, v8}, Lcom/tkay/expressad/video/module/TkayVideoView;->setNotchPadding(IIII)V

    .line 3452
    :cond_5
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->findTkayContainerView()Lcom/tkay/expressad/video/module/TkayContainerView;

    move-result-object v3

    iput-object v3, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    .line 3453
    iget-boolean v3, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->y:Z

    if-eqz v3, :cond_6

    .line 3454
    iget-object v6, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    iget v7, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->N:I

    iget v8, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->O:I

    iget v9, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->P:I

    iget v10, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->Q:I

    iget v11, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->R:I

    invoke-virtual/range {v6 .. v11}, Lcom/tkay/expressad/video/module/TkayContainerView;->setNotchPadding(IIIII)V

    .line 3456
    :cond_6
    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->f:Lcom/tkay/expressad/video/module/TkayVideoView;

    const/4 v4, 0x1

    if-eqz v3, :cond_7

    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    if-eqz v3, :cond_7

    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->initViews()Z

    move-result v3

    if-eqz v3, :cond_7

    move v3, v4

    goto :goto_1

    :cond_7
    move v3, v2

    :goto_1
    if-nez v3, :cond_8

    .line 543
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->d:Lcom/tkay/expressad/video/bt/module/TYTempContainer$a;

    const-string v1, "not found View IDS"

    invoke-interface {v0, v1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer$a;->a(Ljava/lang/String;)V

    .line 544
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->l:Landroid/app/Activity;

    if-eqz v0, :cond_10

    .line 545
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->l:Landroid/app/Activity;

    invoke-virtual {v0}, Landroid/app/Activity;->finish()V

    return-void

    .line 548
    :cond_8
    iput-boolean v4, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->c:Z

    .line 3773
    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 3774
    new-instance v13, Lcom/tkay/expressad/video/signal/factory/b;

    iget-object v7, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->l:Landroid/app/Activity;

    iget-object v9, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->f:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-object v10, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    iget-object v11, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    new-instance v12, Lcom/tkay/expressad/video/bt/module/TYTempContainer$d;

    invoke-direct {v12, p0, v2}, Lcom/tkay/expressad/video/bt/module/TYTempContainer$d;-><init>(Lcom/tkay/expressad/video/bt/module/TYTempContainer;B)V

    move-object v6, v13

    move-object v8, v3

    invoke-direct/range {v6 .. v12}, Lcom/tkay/expressad/video/signal/factory/b;-><init>(Landroid/app/Activity;Landroid/webkit/WebView;Lcom/tkay/expressad/video/module/TkayVideoView;Lcom/tkay/expressad/video/module/TkayContainerView;Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/video/signal/c$a;)V

    iput-object v13, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->J:Lcom/tkay/expressad/video/signal/factory/b;

    .line 3776
    iget-object v6, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v6, :cond_9

    iget-object v6, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v6}, Lcom/tkay/expressad/foundation/d/c;->k()I

    move-result v6

    const/4 v7, 0x5

    if-ne v6, v7, :cond_9

    iget-object v6, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->U:Ljava/util/List;

    if-eqz v6, :cond_9

    .line 3777
    iget-object v6, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->J:Lcom/tkay/expressad/video/signal/factory/b;

    iget-object v7, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->U:Ljava/util/List;

    invoke-virtual {v6, v7}, Lcom/tkay/expressad/video/signal/factory/b;->a(Ljava/util/List;)V

    .line 3779
    :cond_9
    iget-object v6, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->J:Lcom/tkay/expressad/video/signal/factory/b;

    invoke-virtual {p0, v6}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->registerJsFactory(Lcom/tkay/expressad/video/signal/factory/IJSFactory;)V

    .line 3780
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v6

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v8, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->m:Ljava/lang/String;

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, "_1"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    new-instance v8, Lcom/tkay/expressad/video/bt/module/TYTempContainer$5;

    invoke-direct {v8, p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer$5;-><init>(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)V

    invoke-virtual {v6, v7, v8}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/f/a;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v6, "preload template webview is null or load error"

    if-eqz v3, :cond_f

    .line 3836
    :try_start_1
    iget-object v7, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->B:Landroid/view/View;

    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getContext()Landroid/content/Context;

    move-result-object v8

    invoke-static {v8, v1, v0}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v8

    invoke-virtual {v7, v8}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v7

    check-cast v7, Landroid/view/ViewGroup;

    .line 3837
    iget-object v8, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->J:Lcom/tkay/expressad/video/signal/factory/b;

    invoke-virtual {v3, v8}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setApiManagerJSFactory(Ljava/lang/Object;)V

    .line 3838
    invoke-virtual {v3}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getParent()Landroid/view/ViewParent;

    move-result-object v8

    if-eqz v8, :cond_a

    .line 3839
    invoke-virtual {p0, v2, v6}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->defaultLoad(ILjava/lang/String;)V

    return-void

    .line 3842
    :cond_a
    invoke-virtual {v3}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v6

    instance-of v6, v6, Lcom/tkay/expressad/video/signal/a/j;

    if-eqz v6, :cond_d

    .line 3843
    iget-object v6, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->J:Lcom/tkay/expressad/video/signal/factory/b;

    invoke-virtual {v3}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Lcom/tkay/expressad/video/signal/a/j;

    invoke-virtual {v6, v8}, Lcom/tkay/expressad/video/signal/factory/b;->a(Lcom/tkay/expressad/video/signal/a/j;)V

    .line 3874
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v6

    iget v8, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->s:I

    invoke-interface {v6, v8}, Lcom/tkay/expressad/video/signal/c;->a(I)V

    .line 3875
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v6

    iget-object v8, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->m:Ljava/lang/String;

    invoke-interface {v6, v8}, Lcom/tkay/expressad/video/signal/c;->a(Ljava/lang/String;)V

    .line 3876
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v6

    iget-object v8, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->o:Lcom/tkay/expressad/videocommon/e/d;

    invoke-interface {v6, v8}, Lcom/tkay/expressad/video/signal/c;->a(Lcom/tkay/expressad/videocommon/e/d;)V

    .line 3877
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v6

    new-instance v8, Lcom/tkay/expressad/video/bt/module/TYTempContainer$d;

    invoke-direct {v8, p0, v2}, Lcom/tkay/expressad/video/bt/module/TYTempContainer$d;-><init>(Lcom/tkay/expressad/video/bt/module/TYTempContainer;B)V

    invoke-interface {v6, v8}, Lcom/tkay/expressad/video/signal/c;->a(Lcom/tkay/expressad/video/signal/c$a;)V

    .line 3880
    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v2, :cond_c

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->H()Z

    move-result v2

    if-nez v2, :cond_b

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->ay()Z

    move-result v2

    if-eqz v2, :cond_c

    .line 3881
    :cond_b
    new-instance v2, Lcom/tkay/expressad/atsignalcommon/mraid/MraidVolumeChangeReceiver;

    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getContext()Landroid/content/Context;

    move-result-object v6

    invoke-direct {v2, v6}, Lcom/tkay/expressad/atsignalcommon/mraid/MraidVolumeChangeReceiver;-><init>(Landroid/content/Context;)V

    iput-object v2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ax:Lcom/tkay/expressad/atsignalcommon/mraid/MraidVolumeChangeReceiver;

    .line 3882
    invoke-virtual {v2}, Lcom/tkay/expressad/atsignalcommon/mraid/MraidVolumeChangeReceiver;->registerReceiver()V

    .line 3883
    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ax:Lcom/tkay/expressad/atsignalcommon/mraid/MraidVolumeChangeReceiver;

    invoke-virtual {v2}, Lcom/tkay/expressad/atsignalcommon/mraid/MraidVolumeChangeReceiver;->getCurrentVolume()D

    .line 3884
    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ax:Lcom/tkay/expressad/atsignalcommon/mraid/MraidVolumeChangeReceiver;

    new-instance v6, Lcom/tkay/expressad/video/bt/module/TYTempContainer$6;

    invoke-direct {v6, p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer$6;-><init>(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)V

    invoke-virtual {v2, v6}, Lcom/tkay/expressad/atsignalcommon/mraid/MraidVolumeChangeReceiver;->setVolumeChangeListener(Lcom/tkay/expressad/atsignalcommon/mraid/MraidVolumeChangeReceiver$VolumeChangeListener;)V

    .line 3845
    :cond_c
    invoke-virtual {v3}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/video/signal/a/j;

    invoke-virtual {v2}, Lcom/tkay/expressad/video/signal/a/j;->r()I

    move-result v2

    .line 3846
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getJSContainerModule()Lcom/tkay/expressad/video/signal/e;

    move-result-object v6

    invoke-interface {v6, v2}, Lcom/tkay/expressad/video/signal/e;->readyStatus(I)V

    .line 3847
    invoke-direct {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->j()V

    .line 3848
    invoke-virtual {v3}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/video/signal/a/j;

    iget-object v2, v2, Lcom/tkay/expressad/video/signal/a/j;->r:Lcom/tkay/expressad/video/signal/c$a;

    invoke-interface {v2}, Lcom/tkay/expressad/video/signal/c$a;->c()V

    .line 3850
    iget-boolean v2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->y:Z

    if-eqz v2, :cond_d

    .line 3851
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v2

    iget v6, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->aj:I

    invoke-interface {v2, v6}, Lcom/tkay/expressad/video/signal/c;->f(I)V

    .line 3852
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v2

    iget v6, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ak:I

    invoke-interface {v2, v6}, Lcom/tkay/expressad/video/signal/c;->e(I)V

    .line 3857
    :cond_d
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v2

    invoke-interface {v2}, Lcom/tkay/expressad/video/signal/c;->f()I

    move-result v2

    if-ne v2, v4, :cond_e

    .line 3858
    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->B:Landroid/view/View;

    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getContext()Landroid/content/Context;

    move-result-object v6

    invoke-static {v6, v1, v0}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v2, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    if-eqz v0, :cond_e

    .line 3860
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->B:Landroid/view/View;

    check-cast v1, Landroid/view/ViewGroup;

    invoke-virtual {v1, v0}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 3861
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->B:Landroid/view/View;

    check-cast v1, Landroid/view/ViewGroup;

    invoke-virtual {v1, v0, v4}, Landroid/view/ViewGroup;->addView(Landroid/view/View;I)V

    .line 3864
    :cond_e
    new-instance v0, Landroid/view/ViewGroup$LayoutParams;

    invoke-direct {v0, v5, v5}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    invoke-virtual {v7, v3, v0}, Landroid/view/ViewGroup;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    return-void

    .line 3867
    :cond_f
    invoke-virtual {p0, v2, v6}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->defaultLoad(ILjava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :cond_10
    return-void

    :catchall_0
    move-exception v0

    .line 553
    invoke-static {v0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "onCreate error"

    invoke-virtual {v1, v0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->a(Ljava/lang/String;)V

    return-void
.end method

.method public onDestroy()V
    .locals 5

    .line 639
    iget-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->M:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    .line 642
    iput-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->M:Z

    .line 643
    invoke-super {p0}, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->onDestroy()V

    .line 649
    :try_start_0
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->f:Lcom/tkay/expressad/video/module/TkayVideoView;

    if-eqz v1, :cond_1

    .line 650
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->f:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-virtual {v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->releasePlayer()V

    .line 655
    :cond_1
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v1, :cond_3

    .line 656
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getParent()Landroid/view/ViewParent;

    move-result-object v1

    check-cast v1, Landroid/view/ViewGroup;

    if-eqz v1, :cond_2

    .line 658
    invoke-virtual {v1}, Landroid/view/ViewGroup;->removeAllViews()V

    .line 660
    :cond_2
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->clearWebView()V

    .line 661
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->release()V

    .line 663
    :cond_3
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->F:Lcom/tkay/expressad/video/bt/module/a/b;

    if-eqz v1, :cond_4

    const/4 v1, 0x0

    .line 664
    iput-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->F:Lcom/tkay/expressad/video/bt/module/a/b;

    .line 667
    :cond_4
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->h:Landroid/os/Handler;

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->i:Ljava/lang/Runnable;

    invoke-virtual {v1, v2}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 668
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->h:Landroid/os/Handler;

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->j:Ljava/lang/Runnable;

    invoke-virtual {v1, v2}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 670
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v1

    invoke-interface {v1}, Lcom/tkay/expressad/video/signal/c;->k()V

    .line 672
    iget-boolean v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->t:Z

    if-eqz v1, :cond_5

    .line 673
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->m:Ljava/lang/String;

    invoke-static {v1}, Lcom/tkay/expressad/d/b;->c(Ljava/lang/String;)V

    .line 677
    :cond_5
    iget-boolean v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->an:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-nez v1, :cond_11

    .line 5152
    :try_start_1
    iput-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->an:Z

    .line 5155
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v1, :cond_6

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->J()I

    move-result v1

    const/4 v2, 0x2

    if-ne v1, v2, :cond_6

    .line 5156
    iput-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ao:Z

    .line 5159
    :cond_6
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->E:Lcom/tkay/expressad/video/bt/module/b/h;

    if-eqz v1, :cond_b

    .line 5160
    iget-boolean v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->t:Z

    const/4 v2, 0x0

    if-eqz v1, :cond_9

    iget v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->v:I

    sget v3, Lcom/tkay/expressad/foundation/g/a;->cr:I

    if-eq v1, v3, :cond_7

    iget v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->v:I

    sget v3, Lcom/tkay/expressad/foundation/g/a;->cs:I

    if-ne v1, v3, :cond_9

    .line 5162
    :cond_7
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->E:Lcom/tkay/expressad/video/bt/module/b/h;

    iget v3, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->L:I

    if-ne v3, v0, :cond_8

    goto :goto_0

    :cond_8
    move v0, v2

    :goto_0
    iget v3, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->K:I

    invoke-interface {v1, v0, v3}, Lcom/tkay/expressad/video/bt/module/b/h;->a(ZI)V

    .line 5164
    :cond_9
    iget-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ao:Z

    if-nez v0, :cond_a

    .line 5165
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->q:Lcom/tkay/expressad/videocommon/c/c;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/videocommon/c/c;->a(I)V

    .line 5167
    :cond_a
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->E:Lcom/tkay/expressad/video/bt/module/b/h;

    iget-boolean v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ao:Z

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->q:Lcom/tkay/expressad/videocommon/c/c;

    invoke-interface {v0, v1, v2}, Lcom/tkay/expressad/video/bt/module/b/h;->a(ZLcom/tkay/expressad/videocommon/c/c;)V

    .line 5169
    :cond_b
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->h:Landroid/os/Handler;

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ay:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 5171
    iget-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->t:Z

    if-nez v0, :cond_c

    iget-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->y:Z

    if-eqz v0, :cond_d

    :cond_c
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_e

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    if-eqz v0, :cond_e

    .line 6094
    :cond_d
    iget-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ao:Z

    if-eqz v0, :cond_e

    .line 6100
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->q:Lcom/tkay/expressad/videocommon/c/c;

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->m:Ljava/lang/String;

    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->p:Ljava/lang/String;

    iget-object v4, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->T:Ljava/lang/String;

    invoke-static {v0, v1, v2, v3, v4}, Lcom/tkay/expressad/video/module/b/a;->a(Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/videocommon/c/c;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 5174
    :cond_e
    iget-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->y:Z

    if-nez v0, :cond_10

    .line 5175
    iget-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->t:Z

    if-eqz v0, :cond_f

    const/16 v0, 0x11f

    .line 5176
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-static {v0, v1}, Lcom/tkay/expressad/videocommon/a;->b(ILcom/tkay/expressad/foundation/d/c;)V

    goto :goto_1

    :cond_f
    const/16 v0, 0x5e

    .line 5178
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-static {v0, v1}, Lcom/tkay/expressad/videocommon/a;->b(ILcom/tkay/expressad/foundation/d/c;)V

    .line 5181
    :cond_10
    :goto_1
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    if-eqz v0, :cond_11

    .line 5182
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->release()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception v0

    .line 5185
    :try_start_2
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    .line 684
    :cond_11
    :goto_2
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ax:Lcom/tkay/expressad/atsignalcommon/mraid/MraidVolumeChangeReceiver;

    if-eqz v0, :cond_12

    .line 685
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ax:Lcom/tkay/expressad/atsignalcommon/mraid/MraidVolumeChangeReceiver;

    invoke-virtual {v0}, Lcom/tkay/expressad/atsignalcommon/mraid/MraidVolumeChangeReceiver;->unregisterReceiver()V

    .line 688
    :cond_12
    iget-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->y:Z

    if-nez v0, :cond_14

    .line 689
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->isLoadSuccess()Z

    move-result v0

    if-eqz v0, :cond_13

    .line 690
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->h:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/bt/module/TYTempContainer$4;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer$4;-><init>(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)V

    const-wide/16 v2, 0x64

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    goto :goto_3

    .line 699
    :cond_13
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->l:Landroid/app/Activity;

    if-eqz v0, :cond_14

    .line 700
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->l:Landroid/app/Activity;

    invoke-virtual {v0}, Landroid/app/Activity;->finish()V

    .line 708
    :cond_14
    :goto_3
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->I:Ljava/lang/String;

    invoke-static {v0}, Lcom/tkay/expressad/video/bt/a/c;->f(Ljava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    return-void

    :catchall_1
    move-exception v0

    .line 711
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method protected onDetachedFromWindow()V
    .locals 0

    .line 626
    invoke-super {p0}, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->onDetachedFromWindow()V

    return-void
.end method

.method public onPause()V
    .locals 2

    .line 579
    invoke-super {p0}, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->onPause()V

    const/4 v0, 0x1

    .line 581
    iput-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ap:Z

    .line 583
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getJSVideoModule()Lcom/tkay/expressad/video/signal/j;

    move-result-object v0

    const/4 v1, 0x2

    invoke-interface {v0, v1}, Lcom/tkay/expressad/video/signal/j;->videoOperate(I)V

    .line 585
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    if-eqz v0, :cond_0

    .line 586
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->setOnPause()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception v0

    .line 589
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public onResume()V
    .locals 2

    .line 595
    invoke-super {p0}, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->onResume()V

    .line 4420
    iget v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ai:I

    const/4 v1, -0x3

    if-ne v0, v1, :cond_0

    .line 4421
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->i:Ljava/lang/Runnable;

    goto :goto_0

    :cond_0
    const/4 v1, -0x4

    if-ne v0, v1, :cond_1

    .line 4423
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->j:Ljava/lang/Runnable;

    goto :goto_0

    :cond_1
    const/4 v0, 0x0

    :goto_0
    const/4 v1, 0x0

    if-eqz v0, :cond_2

    .line 4426
    invoke-interface {v0}, Ljava/lang/Runnable;->run()V

    .line 4427
    iput v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ai:I

    .line 600
    :cond_2
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->f:Lcom/tkay/expressad/video/module/TkayVideoView;

    if-eqz v0, :cond_3

    invoke-direct {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->i()Z

    move-result v0

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->f:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->isMiniCardShowing()Z

    move-result v0

    if-nez v0, :cond_3

    sget-boolean v0, Lcom/tkay/expressad/foundation/f/b;->c:Z

    if-nez v0, :cond_3

    .line 601
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->f:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->setCover(Z)V

    .line 604
    :cond_3
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    if-eqz v0, :cond_4

    .line 605
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->setOnResume()V

    .line 608
    :cond_4
    iget-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ap:Z

    if-eqz v0, :cond_5

    invoke-direct {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->i()Z

    move-result v0

    if-nez v0, :cond_5

    sget-boolean v0, Lcom/tkay/expressad/foundation/f/b;->c:Z

    if-nez v0, :cond_5

    .line 609
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getJSVideoModule()Lcom/tkay/expressad/video/signal/j;

    move-result-object v0

    const/4 v1, 0x1

    invoke-interface {v0, v1}, Lcom/tkay/expressad/video/signal/j;->videoOperate(I)V

    .line 611
    :cond_5
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->l:Landroid/app/Activity;

    if-eqz v0, :cond_6

    .line 612
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->l:Landroid/app/Activity;

    invoke-virtual {v0}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/h/t;->a(Landroid/view/View;)V

    .line 614
    :cond_6
    iget-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ar:Z

    if-eqz v0, :cond_7

    iget-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->as:Z

    if-eqz v0, :cond_7

    .line 615
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->l:Landroid/app/Activity;

    if-eqz v0, :cond_7

    .line 616
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->l:Landroid/app/Activity;

    invoke-virtual {v0}, Landroid/app/Activity;->finish()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_7
    return-void

    :catchall_0
    move-exception v0

    .line 620
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public onStop()V
    .locals 2

    .line 631
    invoke-super {p0}, Lcom/tkay/expressad/video/signal/container/AbstractJSContainer;->onStop()V

    .line 632
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->f:Lcom/tkay/expressad/video/module/TkayVideoView;

    if-eqz v0, :cond_0

    const/4 v1, 0x1

    .line 633
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->setCover(Z)V

    :cond_0
    return-void
.end method

.method public preload()V
    .locals 0

    return-void
.end method

.method public receiveSuccess()V
    .locals 4

    .line 971
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->h:Landroid/os/Handler;

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->j:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 972
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->h:Landroid/os/Handler;

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ay:Ljava/lang/Runnable;

    const-wide/16 v2, 0xfa

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method

.method public registerErrorListener(Lcom/tkay/expressad/video/bt/module/TYTempContainer$a;)V
    .locals 0

    .line 174
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->d:Lcom/tkay/expressad/video/bt/module/TYTempContainer$a;

    return-void
.end method

.method public setCamPlayOrderCallback(Lcom/tkay/expressad/video/dynview/f/a;I)V
    .locals 0

    .line 1759
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->G:Lcom/tkay/expressad/video/dynview/f/a;

    .line 1760
    iput p2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->H:I

    return-void
.end method

.method public setCampOrderViewData(Ljava/util/List;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;I)V"
        }
    .end annotation

    if-eqz p1, :cond_0

    .line 152
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->U:Ljava/util/List;

    .line 154
    :cond_0
    iput p2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->V:I

    return-void
.end method

.method public setCampaign(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 3

    .line 1696
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    if-eqz p1, :cond_1

    .line 1698
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->K()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->m:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 1699
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->m:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/foundation/d/c;->l(Ljava/lang/String;)V

    .line 1701
    :cond_0
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->K()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "_1"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1, p1}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;)V

    :cond_1
    return-void
.end method

.method public setCampaignDownLoadTask(Lcom/tkay/expressad/videocommon/b/a;)V
    .locals 0

    .line 1747
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->D:Lcom/tkay/expressad/videocommon/b/a;

    return-void
.end method

.method public setCampaignExpired(Z)V
    .locals 2

    .line 1711
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_4

    const/4 v0, 0x0

    if-eqz p1, :cond_2

    .line 1714
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    const/4 v1, 0x1

    invoke-virtual {p1, v1}, Lcom/tkay/expressad/foundation/d/c;->e(I)V

    .line 1715
    iget-boolean p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->u:Z

    if-eqz p1, :cond_0

    .line 1716
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/foundation/d/c;->m(I)V

    return-void

    .line 1718
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->o:Lcom/tkay/expressad/videocommon/e/d;

    if-eqz p1, :cond_4

    .line 1719
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->o:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {p1}, Lcom/tkay/expressad/videocommon/e/d;->M()I

    move-result p1

    if-ne p1, v1, :cond_1

    .line 1720
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1, v1}, Lcom/tkay/expressad/foundation/d/c;->m(I)V

    return-void

    .line 1722
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/foundation/d/c;->m(I)V

    return-void

    .line 1727
    :cond_2
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/foundation/d/c;->e(I)V

    .line 1729
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->A()Z

    move-result p1

    if-eqz p1, :cond_3

    .line 1730
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/foundation/d/c;->m(I)V

    return-void

    .line 1732
    :cond_3
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->o:Lcom/tkay/expressad/videocommon/e/d;

    if-eqz p1, :cond_4

    .line 1733
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->o:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {p1}, Lcom/tkay/expressad/videocommon/e/d;->a()I

    move-result p1

    .line 1736
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->C:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/foundation/d/c;->m(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_4
    return-void

    :catch_0
    move-exception p1

    .line 1742
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public setDeveloperExtraData(Ljava/lang/String;)V
    .locals 0

    .line 1818
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->T:Ljava/lang/String;

    return-void
.end method

.method public setH5Cbp(I)V
    .locals 0

    .line 1776
    iput p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ak:I

    return-void
.end method

.method public setInstanceId(Ljava/lang/String;)V
    .locals 0

    .line 1768
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->I:Ljava/lang/String;

    return-void
.end method

.method public setJSFactory(Lcom/tkay/expressad/video/signal/factory/b;)V
    .locals 0

    .line 1764
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->J:Lcom/tkay/expressad/video/signal/factory/b;

    return-void
.end method

.method public setMatchParent()V
    .locals 2

    .line 140
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    const/4 v1, -0x1

    if-nez v0, :cond_0

    .line 142
    new-instance v0, Landroid/view/ViewGroup$LayoutParams;

    invoke-direct {v0, v1, v1}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    .line 143
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    return-void

    .line 145
    :cond_0
    iput v1, v0, Landroid/view/ViewGroup$LayoutParams;->height:I

    .line 146
    iput v1, v0, Landroid/view/ViewGroup$LayoutParams;->width:I

    return-void
.end method

.method public setMediaPlayerUrl(Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public setNotchPadding(IIIII)V
    .locals 7

    .line 1790
    iput p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->N:I

    .line 1791
    iput p2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->O:I

    .line 1792
    iput p3, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->P:I

    .line 1793
    iput p4, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->Q:I

    .line 1794
    iput p5, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->R:I

    .line 1796
    invoke-static {p1, p2, p3, p4, p5}, Lcom/tkay/expressad/foundation/h/h;->a(IIIII)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->S:Ljava/lang/String;

    .line 1800
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->S:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 1801
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->S:Ljava/lang/String;

    invoke-interface {v0, v1}, Lcom/tkay/expressad/video/signal/c;->b(Ljava/lang/String;)V

    .line 1803
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->S:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 1804
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->S:Ljava/lang/String;

    invoke-virtual {v1}, Ljava/lang/String;->getBytes()[B

    move-result-object v1

    const/4 v2, 0x0

    invoke-static {v1, v2}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v1

    const-string v2, "oncutoutfetched"

    invoke-static {v0, v2, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    .line 1808
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->f:Lcom/tkay/expressad/video/module/TkayVideoView;

    if-eqz v0, :cond_1

    .line 1809
    invoke-virtual {v0, p2, p3, p4, p5}, Lcom/tkay/expressad/video/module/TkayVideoView;->setNotchPadding(IIII)V

    .line 1812
    :cond_1
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    if-eqz v1, :cond_2

    move v2, p1

    move v3, p2

    move v4, p3

    move v5, p4

    move v6, p5

    .line 1813
    invoke-virtual/range {v1 .. v6}, Lcom/tkay/expressad/video/module/TkayContainerView;->setNotchPadding(IIIII)V

    :cond_2
    return-void
.end method

.method public setShowRewardListener(Lcom/tkay/expressad/video/bt/module/b/h;)V
    .locals 0

    .line 1751
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->E:Lcom/tkay/expressad/video/bt/module/b/h;

    return-void
.end method

.method public setShowingTransparent()V
    .locals 3

    .line 763
    invoke-direct {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->h()Z

    move-result v0

    iput-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->ar:Z

    if-nez v0, :cond_0

    .line 765
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "tkay_reward_theme"

    const-string v2, "style"

    invoke-static {v0, v1, v2}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    const/4 v1, 0x1

    if-le v0, v1, :cond_0

    .line 766
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->l:Landroid/app/Activity;

    if-eqz v1, :cond_0

    .line 767
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->l:Landroid/app/Activity;

    invoke-virtual {v1, v0}, Landroid/app/Activity;->setTheme(I)V

    :cond_0
    return-void
.end method

.method public setTkayTempCallback(Lcom/tkay/expressad/video/bt/module/a/b;)V
    .locals 0

    .line 1755
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->F:Lcom/tkay/expressad/video/bt/module/a/b;

    return-void
.end method

.method public setWebViewFront(I)V
    .locals 0

    .line 1780
    iput p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->aj:I

    return-void
.end method

.method public superDefaultLoad(ILjava/lang/String;)V
    .locals 2

    .line 432
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "receiveError:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, ",descroption:"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 433
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->h:Landroid/os/Handler;

    iget-object p2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->i:Ljava/lang/Runnable;

    invoke-virtual {p1, p2}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 434
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->h:Landroid/os/Handler;

    iget-object p2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->j:Ljava/lang/Runnable;

    invoke-virtual {p1, p2}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 435
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->d:Lcom/tkay/expressad/video/bt/module/TYTempContainer$a;

    invoke-interface {p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer$a;->b()V

    .line 436
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz p1, :cond_0

    const/16 p2, 0x8

    .line 437
    invoke-virtual {p1, p2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setVisibility(I)V

    :cond_0
    return-void
.end method
