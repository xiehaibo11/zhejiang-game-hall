.class public Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;
.super Ljava/lang/Object;
.source "GenAuthThemeConfig.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;
    }
.end annotation


# static fields
.field public static final PLACEHOLDER:Ljava/lang/String; = "$$\u8fd0\u8425\u5546\u6761\u6b3e$$"


# instance fields
.field private A:I

.field private B:I

.field private C:I

.field private D:I

.field private E:I

.field private F:I

.field private G:Ljava/lang/String;

.field private H:Z

.field private I:Lcom/cmic/gen/sdk/view/GenBackPressedListener;

.field private J:Lcom/cmic/gen/sdk/view/GenLoginClickListener;

.field private K:Lcom/cmic/gen/sdk/view/GenCheckBoxListener;

.field private L:Lcom/cmic/gen/sdk/view/GenCheckedChangeListener;

.field private M:Lcom/cmic/gen/sdk/view/GenAuthLoginListener;

.field private N:Ljava/lang/String;

.field private O:Ljava/lang/String;

.field private P:I

.field private Q:I

.field private R:Z

.field private S:Ljava/lang/String;

.field private T:Ljava/lang/String;

.field private U:Ljava/lang/String;

.field private V:Ljava/lang/String;

.field private W:Ljava/lang/String;

.field private X:Ljava/lang/String;

.field private Y:Ljava/lang/String;

.field private Z:Ljava/lang/String;

.field private final a:Z

.field private aa:Ljava/lang/String;

.field private ab:I

.field private ac:Z

.field private ad:I

.field private ae:I

.field private af:Z

.field private ag:I

.field private ah:I

.field private ai:I

.field private aj:I

.field private ak:I

.field private al:Z

.field private am:Ljava/lang/String;

.field private an:Ljava/lang/String;

.field private ao:Ljava/lang/String;

.field private ap:Ljava/lang/String;

.field private aq:I

.field private ar:I

.field private as:I

.field private at:I

.field private au:I

.field private av:I

.field private aw:I

.field private ax:Z

.field private ay:Z

.field private az:Ljava/lang/String;

.field private b:I

.field private c:Z

.field private d:Landroid/view/View;

.field private e:I

.field private f:I

.field private g:Ljava/lang/String;

.field private h:I

.field private i:I

.field private j:I

.field private k:Ljava/lang/String;

.field private l:I

.field private m:I

.field private n:Landroid/widget/ImageView$ScaleType;

.field private o:I

.field private p:Z

.field private q:I

.field private r:I

.field private s:I

.field private t:I

.field private u:Ljava/lang/String;

.field private v:Z

.field private w:I

.field private x:Z

.field private y:I

.field private z:Ljava/lang/String;


# direct methods
.method private constructor <init>(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)V
    .locals 1

    .line 420
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x1

    .line 47
    iput-boolean v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->v:Z

    const/4 v0, 0x0

    .line 77
    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->X:Ljava/lang/String;

    .line 78
    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->Y:Ljava/lang/String;

    .line 79
    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->Z:Ljava/lang/String;

    .line 80
    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->aa:Ljava/lang/String;

    .line 421
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->a(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I

    move-result v0

    iput v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->b:I

    .line 422
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->b(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->c:Z

    .line 424
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->c(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->d:Landroid/view/View;

    .line 425
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->d(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I

    move-result v0

    iput v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->e:I

    .line 427
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->e(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I

    move-result v0

    iput v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->f:I

    .line 428
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->f(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->g:Ljava/lang/String;

    .line 429
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->g(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I

    move-result v0

    iput v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->h:I

    .line 430
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->h(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I

    move-result v0

    iput v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->i:I

    .line 431
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->i(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I

    move-result v0

    iput v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->j:I

    .line 433
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->j(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->k:Ljava/lang/String;

    .line 434
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->k(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I

    move-result v0

    iput v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->l:I

    .line 435
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->l(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I

    move-result v0

    iput v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->m:I

    .line 436
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->m(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Landroid/widget/ImageView$ScaleType;

    move-result-object v0

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->n:Landroid/widget/ImageView$ScaleType;

    .line 438
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->n(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I

    move-result v0

    iput v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->o:I

    .line 439
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->o(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->p:Z

    .line 440
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->p(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I

    move-result v0

    iput v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->q:I

    .line 441
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->q(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I

    move-result v0

    iput v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->r:I

    .line 442
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->r(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I

    move-result v0

    iput v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->s:I

    .line 443
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->s(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I

    move-result v0

    iput v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->t:I

    .line 445
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->t(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->u:Ljava/lang/String;

    .line 446
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->u(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->v:Z

    .line 447
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->v(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I

    move-result v0

    iput v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->w:I

    .line 448
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->w(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->x:Z

    .line 449
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->x(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I

    move-result v0

    iput v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->y:I

    .line 450
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->y(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->z:Ljava/lang/String;

    .line 451
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->z(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I

    move-result v0

    iput v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->A:I

    .line 452
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->A(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I

    move-result v0

    iput v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->B:I

    .line 453
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->B(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I

    move-result v0

    iput v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->C:I

    .line 454
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->C(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I

    move-result v0

    iput v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->D:I

    .line 455
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->D(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I

    move-result v0

    iput v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->E:I

    .line 456
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->E(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I

    move-result v0

    iput v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->F:I

    .line 457
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->F(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->G:Ljava/lang/String;

    .line 458
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->G(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->H:Z

    .line 459
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->H(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Lcom/cmic/gen/sdk/view/GenBackPressedListener;

    move-result-object v0

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->I:Lcom/cmic/gen/sdk/view/GenBackPressedListener;

    .line 460
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->I(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Lcom/cmic/gen/sdk/view/GenLoginClickListener;

    move-result-object v0

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->J:Lcom/cmic/gen/sdk/view/GenLoginClickListener;

    .line 461
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->J(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Lcom/cmic/gen/sdk/view/GenCheckBoxListener;

    move-result-object v0

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->K:Lcom/cmic/gen/sdk/view/GenCheckBoxListener;

    .line 462
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->K(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Lcom/cmic/gen/sdk/view/GenCheckedChangeListener;

    move-result-object v0

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->L:Lcom/cmic/gen/sdk/view/GenCheckedChangeListener;

    .line 464
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->L(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->N:Ljava/lang/String;

    .line 465
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->M(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->O:Ljava/lang/String;

    .line 466
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->N(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I

    move-result v0

    iput v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->P:I

    .line 467
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->O(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I

    move-result v0

    iput v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->Q:I

    .line 468
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->P(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->R:Z

    .line 470
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->Q(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->S:Ljava/lang/String;

    .line 471
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->R(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->T:Ljava/lang/String;

    .line 472
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->S(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->U:Ljava/lang/String;

    .line 473
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->T(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->V:Ljava/lang/String;

    .line 474
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->U(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->W:Ljava/lang/String;

    .line 476
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->V(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->X:Ljava/lang/String;

    .line 477
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->W(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->Y:Ljava/lang/String;

    .line 478
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->X(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->Z:Ljava/lang/String;

    .line 479
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->Y(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->aa:Ljava/lang/String;

    .line 481
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->Z(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I

    move-result v0

    iput v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->ab:I

    .line 482
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->aa(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->ac:Z

    .line 483
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->ab(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I

    move-result v0

    iput v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->ad:I

    .line 484
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->ac(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I

    move-result v0

    iput v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->ae:I

    .line 485
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->ad(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->af:Z

    .line 487
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->ae(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I

    move-result v0

    iput v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->ah:I

    .line 488
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->af(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I

    move-result v0

    iput v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->ai:I

    .line 489
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->ag(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I

    move-result v0

    iput v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->aj:I

    .line 490
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->ah(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I

    move-result v0

    iput v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->ak:I

    .line 491
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->ai(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->al:Z

    .line 492
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->aj(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I

    move-result v0

    iput v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->ag:I

    .line 494
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->ak(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->am:Ljava/lang/String;

    .line 495
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->al(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->an:Ljava/lang/String;

    .line 496
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->am(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->ao:Ljava/lang/String;

    .line 497
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->an(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->ap:Ljava/lang/String;

    .line 499
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->ao(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I

    move-result v0

    iput v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->aq:I

    .line 500
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->ap(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I

    move-result v0

    iput v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->ar:I

    .line 501
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->aq(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I

    move-result v0

    iput v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->as:I

    .line 502
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->ar(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I

    move-result v0

    iput v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->at:I

    .line 503
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->as(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I

    move-result v0

    iput v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->au:I

    .line 504
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->at(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I

    move-result v0

    iput v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->av:I

    .line 505
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->au(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I

    move-result v0

    iput v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->aw:I

    .line 506
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->av(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->ax:Z

    .line 507
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->aw(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->ay:Z

    .line 508
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->ax(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->az:Ljava/lang/String;

    .line 509
    iget-boolean v0, p1, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->a:Z

    iput-boolean v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->a:Z

    .line 510
    invoke-static {p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->ay(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Lcom/cmic/gen/sdk/view/GenAuthLoginListener;

    move-result-object p1

    iput-object p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->M:Lcom/cmic/gen/sdk/view/GenAuthLoginListener;

    return-void
.end method

.method synthetic constructor <init>(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$1;)V
    .locals 0

    .line 18
    invoke-direct {p0, p1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;-><init>(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)V

    return-void
.end method


# virtual methods
.method public getActivityIn()Ljava/lang/String;
    .locals 1

    .line 373
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->ap:Ljava/lang/String;

    return-object v0
.end method

.method public getActivityOut()Ljava/lang/String;
    .locals 1

    .line 365
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->an:Ljava/lang/String;

    return-object v0
.end method

.method public getAppLanguageType()I
    .locals 1

    .line 401
    iget v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->aw:I

    return v0
.end method

.method public getAuthPageActIn()Ljava/lang/String;
    .locals 1

    .line 361
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->am:Ljava/lang/String;

    return-object v0
.end method

.method public getAuthPageActOut()Ljava/lang/String;
    .locals 1

    .line 369
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->ao:Ljava/lang/String;

    return-object v0
.end method

.method public getCheckBoxLocation()I
    .locals 1

    .line 357
    iget v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->ag:I

    return v0
.end method

.method public getCheckTipText()Ljava/lang/String;
    .locals 2

    .line 234
    iget-boolean v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->H:Z

    if-eqz v0, :cond_2

    .line 235
    iget v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->aw:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    const-string v0, "\u8acb\u52fe\u9078\u540c\u610f\u670d\u52d9\u689d\u6b3e"

    goto :goto_0

    :cond_0
    const/4 v1, 0x2

    if-ne v0, v1, :cond_1

    const-string v0, "Please check to agree to the terms of service"

    goto :goto_0

    :cond_1
    const-string v0, "\u8bf7\u52fe\u9009\u540c\u610f\u670d\u52a1\u6761\u6b3e"

    :goto_0
    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->G:Ljava/lang/String;

    .line 237
    :cond_2
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->G:Ljava/lang/String;

    return-object v0
.end method

.method public getCheckedImgHeight()I
    .locals 1

    .line 273
    iget v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->Q:I

    return v0
.end method

.method public getCheckedImgPath()Ljava/lang/String;
    .locals 1

    .line 261
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->N:Ljava/lang/String;

    return-object v0
.end method

.method public getCheckedImgWidth()I
    .locals 1

    .line 269
    iget v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->P:I

    return v0
.end method

.method public getClauseBaseColor()I
    .locals 1

    .line 325
    iget v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->ad:I

    return v0
.end method

.method public getClauseColor()I
    .locals 1

    .line 329
    iget v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->ae:I

    return v0
.end method

.method public getClauseLayoutResID()I
    .locals 1

    .line 127
    iget v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->f:I

    return v0
.end method

.method public getClauseLayoutReturnID()Ljava/lang/String;
    .locals 1

    .line 131
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->g:Ljava/lang/String;

    return-object v0
.end method

.method public getClauseName()Ljava/lang/String;
    .locals 1

    .line 285
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->T:Ljava/lang/String;

    return-object v0
.end method

.method public getClauseName2()Ljava/lang/String;
    .locals 1

    .line 293
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->V:Ljava/lang/String;

    return-object v0
.end method

.method public getClauseName3()Ljava/lang/String;
    .locals 1

    .line 301
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->X:Ljava/lang/String;

    return-object v0
.end method

.method public getClauseName4()Ljava/lang/String;
    .locals 1

    .line 309
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->Z:Ljava/lang/String;

    return-object v0
.end method

.method public getClauseUrl()Ljava/lang/String;
    .locals 1

    .line 289
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->U:Ljava/lang/String;

    return-object v0
.end method

.method public getClauseUrl2()Ljava/lang/String;
    .locals 1

    .line 297
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->W:Ljava/lang/String;

    return-object v0
.end method

.method public getClauseUrl3()Ljava/lang/String;
    .locals 1

    .line 305
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->Y:Ljava/lang/String;

    return-object v0
.end method

.method public getClauseUrl4()Ljava/lang/String;
    .locals 1

    .line 313
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->aa:Ljava/lang/String;

    return-object v0
.end method

.method public getContentView()Landroid/view/View;
    .locals 1

    .line 119
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->d:Landroid/view/View;

    return-object v0
.end method

.method public getGenAuthLoginListener()Lcom/cmic/gen/sdk/view/GenAuthLoginListener;
    .locals 1

    .line 257
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->M:Lcom/cmic/gen/sdk/view/GenAuthLoginListener;

    return-object v0
.end method

.method public getGenBackPressedListener()Lcom/cmic/gen/sdk/view/GenBackPressedListener;
    .locals 1

    .line 241
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->I:Lcom/cmic/gen/sdk/view/GenBackPressedListener;

    return-object v0
.end method

.method public getGenCheckBoxListener()Lcom/cmic/gen/sdk/view/GenCheckBoxListener;
    .locals 1

    .line 249
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->K:Lcom/cmic/gen/sdk/view/GenCheckBoxListener;

    return-object v0
.end method

.method public getGenCheckedChangeListener()Lcom/cmic/gen/sdk/view/GenCheckedChangeListener;
    .locals 1

    .line 253
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->L:Lcom/cmic/gen/sdk/view/GenCheckedChangeListener;

    return-object v0
.end method

.method public getGenLoginClickListener()Lcom/cmic/gen/sdk/view/GenLoginClickListener;
    .locals 1

    .line 245
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->J:Lcom/cmic/gen/sdk/view/GenLoginClickListener;

    return-object v0
.end method

.method public getLayoutResID()I
    .locals 1

    .line 123
    iget v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->e:I

    return v0
.end method

.method public getLogBtnBackgroundPath()Ljava/lang/String;
    .locals 1

    .line 206
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->z:Ljava/lang/String;

    return-object v0
.end method

.method public getLogBtnHeight()I
    .locals 1

    .line 214
    iget v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->B:I

    return v0
.end method

.method public getLogBtnMarginLeft()I
    .locals 1

    .line 218
    iget v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->C:I

    return v0
.end method

.method public getLogBtnMarginRight()I
    .locals 1

    .line 222
    iget v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->D:I

    return v0
.end method

.method public getLogBtnOffsetY()I
    .locals 1

    .line 226
    iget v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->E:I

    return v0
.end method

.method public getLogBtnOffsetY_B()I
    .locals 1

    .line 230
    iget v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->F:I

    return v0
.end method

.method public getLogBtnText()Ljava/lang/String;
    .locals 2

    .line 187
    iget-boolean v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->v:Z

    if-eqz v0, :cond_2

    .line 188
    iget v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->aw:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    const-string v0, "\u672c\u6a5f\u865f\u78bc\u767b\u9304"

    goto :goto_0

    :cond_0
    const/4 v1, 0x2

    if-ne v0, v1, :cond_1

    const-string v0, "Login"

    goto :goto_0

    :cond_1
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->u:Ljava/lang/String;

    :goto_0
    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->u:Ljava/lang/String;

    .line 190
    :cond_2
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->u:Ljava/lang/String;

    return-object v0
.end method

.method public getLogBtnTextColor()I
    .locals 1

    .line 202
    iget v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->y:I

    return v0
.end method

.method public getLogBtnTextSize()I
    .locals 1

    .line 194
    iget v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->w:I

    return v0
.end method

.method public getLogBtnWidth()I
    .locals 1

    .line 210
    iget v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->A:I

    return v0
.end method

.method public getNavColor()I
    .locals 1

    .line 143
    iget v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->j:I

    return v0
.end method

.method public getNavReturnImgHeight()I
    .locals 1

    .line 155
    iget v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->m:I

    return v0
.end method

.method public getNavReturnImgPath()Ljava/lang/String;
    .locals 1

    .line 147
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->k:Ljava/lang/String;

    return-object v0
.end method

.method public getNavReturnImgScaleType()Landroid/widget/ImageView$ScaleType;
    .locals 1

    .line 159
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->n:Landroid/widget/ImageView$ScaleType;

    return-object v0
.end method

.method public getNavReturnImgWidth()I
    .locals 1

    .line 151
    iget v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->l:I

    return v0
.end method

.method public getNavTextColor()I
    .locals 1

    .line 139
    iget v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->i:I

    return v0
.end method

.method public getNavTextSize()I
    .locals 1

    .line 135
    iget v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->h:I

    return v0
.end method

.method public getNumFieldOffsetY()I
    .locals 1

    .line 179
    iget v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->s:I

    return v0
.end method

.method public getNumFieldOffsetY_B()I
    .locals 1

    .line 183
    iget v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->t:I

    return v0
.end method

.method public getNumberColor()I
    .locals 1

    .line 171
    iget v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->q:I

    return v0
.end method

.method public getNumberOffsetX()I
    .locals 1

    .line 175
    iget v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->r:I

    return v0
.end method

.method public getNumberSize()I
    .locals 1

    .line 163
    iget v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->o:I

    return v0
.end method

.method public getPrivacy()Ljava/lang/String;
    .locals 1

    .line 281
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->S:Ljava/lang/String;

    return-object v0
.end method

.method public getPrivacyAnimation()Ljava/lang/String;
    .locals 1

    .line 413
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->az:Ljava/lang/String;

    return-object v0
.end method

.method public getPrivacyMarginLeft()I
    .locals 1

    .line 337
    iget v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->ah:I

    return v0
.end method

.method public getPrivacyMarginRight()I
    .locals 1

    .line 341
    iget v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->ai:I

    return v0
.end method

.method public getPrivacyOffsetY()I
    .locals 1

    .line 345
    iget v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->aj:I

    return v0
.end method

.method public getPrivacyOffsetY_B()I
    .locals 1

    .line 349
    iget v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->ak:I

    return v0
.end method

.method public getPrivacyTextSize()I
    .locals 1

    .line 317
    iget v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->ab:I

    return v0
.end method

.method public getStatusBarColor()I
    .locals 1

    .line 111
    iget v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->b:I

    return v0
.end method

.method public getThemeId()I
    .locals 1

    .line 397
    iget v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->av:I

    return v0
.end method

.method public getUncheckedImgPath()Ljava/lang/String;
    .locals 1

    .line 265
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->O:Ljava/lang/String;

    return-object v0
.end method

.method public getWebStorage()Z
    .locals 1

    .line 417
    iget-boolean v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->a:Z

    return v0
.end method

.method public getWindowBottom()I
    .locals 1

    .line 393
    iget v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->au:I

    return v0
.end method

.method public getWindowHeight()I
    .locals 1

    .line 381
    iget v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->ar:I

    return v0
.end method

.method public getWindowWidth()I
    .locals 1

    .line 377
    iget v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->aq:I

    return v0
.end method

.method public getWindowX()I
    .locals 1

    .line 385
    iget v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->as:I

    return v0
.end method

.method public getWindowY()I
    .locals 1

    .line 389
    iget v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->at:I

    return v0
.end method

.method public isBackButton()Z
    .locals 1

    .line 409
    iget-boolean v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->ay:Z

    return v0
.end method

.method public isFitsSystemWindows()Z
    .locals 1

    .line 405
    iget-boolean v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->ax:Z

    return v0
.end method

.method public isLightColor()Z
    .locals 1

    .line 115
    iget-boolean v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->c:Z

    return v0
.end method

.method public isLogBtnTextBold()Z
    .locals 1

    .line 198
    iget-boolean v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->x:Z

    return v0
.end method

.method public isNumberBold()Z
    .locals 1

    .line 167
    iget-boolean v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->p:Z

    return v0
.end method

.method public isPrivacyBookSymbol()Z
    .locals 1

    .line 353
    iget-boolean v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->al:Z

    return v0
.end method

.method public isPrivacyState()Z
    .locals 1

    .line 277
    iget-boolean v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->R:Z

    return v0
.end method

.method public isPrivacyTextBold()Z
    .locals 1

    .line 321
    iget-boolean v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->ac:Z

    return v0
.end method

.method public isPrivacyTextGravityCenter()Z
    .locals 1

    .line 333
    iget-boolean v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->af:Z

    return v0
.end method
