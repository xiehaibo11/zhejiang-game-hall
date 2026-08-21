.class public Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;
.super Ljava/lang/Object;
.source "GenAuthThemeConfig.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "Builder"
.end annotation


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

.field public a:Z

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

.field private ak:Z

.field private al:I

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
.method public constructor <init>()V
    .locals 5

    .line 513
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 515
    iput v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->b:I

    .line 516
    iput-boolean v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->c:Z

    const/4 v1, 0x0

    .line 518
    iput-object v1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->d:Landroid/view/View;

    const/4 v2, -0x1

    .line 519
    iput v2, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->e:I

    .line 521
    iput v2, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->f:I

    const/16 v3, 0x11

    .line 523
    iput v3, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->h:I

    .line 524
    iput v2, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->i:I

    const v3, -0xff7930

    .line 525
    iput v3, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->j:I

    const-string v4, "return_bg"

    .line 527
    iput-object v4, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->k:Ljava/lang/String;

    const/4 v4, -0x2

    .line 528
    iput v4, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->l:I

    .line 529
    iput v4, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->m:I

    .line 530
    sget-object v4, Landroid/widget/ImageView$ScaleType;->CENTER:Landroid/widget/ImageView$ScaleType;

    iput-object v4, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->n:Landroid/widget/ImageView$ScaleType;

    const/16 v4, 0x12

    .line 532
    iput v4, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->o:I

    .line 533
    iput-boolean v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->p:Z

    .line 534
    iput v3, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->q:I

    .line 535
    iput v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->r:I

    const/16 v3, 0xb8

    .line 536
    iput v3, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->s:I

    .line 537
    iput v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->t:I

    const-string v3, "\u672c\u673a\u53f7\u7801\u4e00\u952e\u767b\u5f55"

    .line 539
    iput-object v3, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->u:Ljava/lang/String;

    const/4 v3, 0x1

    .line 540
    iput-boolean v3, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->v:Z

    const/16 v4, 0xf

    .line 541
    iput v4, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->w:I

    .line 542
    iput-boolean v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->x:Z

    .line 543
    iput v2, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->y:I

    const-string v4, "umcsdk_login_btn_bg"

    .line 544
    iput-object v4, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->z:Ljava/lang/String;

    .line 545
    iput v2, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->A:I

    const/16 v4, 0x24

    .line 546
    iput v4, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->B:I

    const/16 v4, 0x2e

    .line 547
    iput v4, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->C:I

    .line 548
    iput v4, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->D:I

    const/16 v4, 0xfe

    .line 549
    iput v4, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->E:I

    .line 550
    iput v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->F:I

    const-string v4, "umcsdk_check_image"

    .line 560
    iput-object v4, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->N:Ljava/lang/String;

    const-string v4, "umcsdk_uncheck_image"

    .line 561
    iput-object v4, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->O:Ljava/lang/String;

    const/16 v4, 0x9

    .line 562
    iput v4, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->P:I

    .line 563
    iput v4, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->Q:I

    .line 564
    iput-boolean v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->R:Z

    const-string v4, "\u767b\u5f55\u5373\u540c\u610f$$\u8fd0\u8425\u5546\u6761\u6b3e$$\u5e76\u4f7f\u7528\u672c\u673a\u53f7\u7801\u767b\u5f55"

    .line 566
    iput-object v4, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->S:Ljava/lang/String;

    .line 567
    iput-object v1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->T:Ljava/lang/String;

    .line 568
    iput-object v1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->U:Ljava/lang/String;

    .line 569
    iput-object v1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->V:Ljava/lang/String;

    .line 570
    iput-object v1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->W:Ljava/lang/String;

    .line 571
    iput-object v1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->X:Ljava/lang/String;

    .line 572
    iput-object v1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->Y:Ljava/lang/String;

    .line 573
    iput-object v1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->Z:Ljava/lang/String;

    .line 574
    iput-object v1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->aa:Ljava/lang/String;

    const/16 v1, 0xa

    .line 575
    iput v1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->ab:I

    .line 576
    iput-boolean v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->ac:Z

    const v1, -0x99999a

    .line 577
    iput v1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->ad:I

    const v1, -0xf441fa

    .line 578
    iput v1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->ae:I

    .line 579
    iput-boolean v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->af:Z

    const/16 v1, 0x34

    .line 581
    iput v1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->ag:I

    .line 582
    iput v1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->ah:I

    .line 583
    iput v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->ai:I

    const/16 v1, 0x1e

    .line 584
    iput v1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->aj:I

    .line 585
    iput-boolean v3, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->ak:Z

    .line 597
    iput v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->au:I

    .line 598
    iput v2, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->av:I

    .line 599
    iput v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->aw:I

    .line 600
    iput-boolean v3, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->ax:Z

    .line 601
    iput-boolean v3, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->ay:Z

    return-void
.end method

.method static synthetic A(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I
    .locals 0

    .line 513
    iget p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->B:I

    return p0
.end method

.method static synthetic B(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I
    .locals 0

    .line 513
    iget p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->C:I

    return p0
.end method

.method static synthetic C(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I
    .locals 0

    .line 513
    iget p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->D:I

    return p0
.end method

.method static synthetic D(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I
    .locals 0

    .line 513
    iget p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->E:I

    return p0
.end method

.method static synthetic E(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I
    .locals 0

    .line 513
    iget p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->F:I

    return p0
.end method

.method static synthetic F(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Ljava/lang/String;
    .locals 0

    .line 513
    iget-object p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->G:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic G(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Z
    .locals 0

    .line 513
    iget-boolean p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->H:Z

    return p0
.end method

.method static synthetic H(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Lcom/cmic/gen/sdk/view/GenBackPressedListener;
    .locals 0

    .line 513
    iget-object p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->I:Lcom/cmic/gen/sdk/view/GenBackPressedListener;

    return-object p0
.end method

.method static synthetic I(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Lcom/cmic/gen/sdk/view/GenLoginClickListener;
    .locals 0

    .line 513
    iget-object p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->J:Lcom/cmic/gen/sdk/view/GenLoginClickListener;

    return-object p0
.end method

.method static synthetic J(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Lcom/cmic/gen/sdk/view/GenCheckBoxListener;
    .locals 0

    .line 513
    iget-object p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->K:Lcom/cmic/gen/sdk/view/GenCheckBoxListener;

    return-object p0
.end method

.method static synthetic K(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Lcom/cmic/gen/sdk/view/GenCheckedChangeListener;
    .locals 0

    .line 513
    iget-object p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->L:Lcom/cmic/gen/sdk/view/GenCheckedChangeListener;

    return-object p0
.end method

.method static synthetic L(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Ljava/lang/String;
    .locals 0

    .line 513
    iget-object p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->N:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic M(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Ljava/lang/String;
    .locals 0

    .line 513
    iget-object p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->O:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic N(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I
    .locals 0

    .line 513
    iget p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->P:I

    return p0
.end method

.method static synthetic O(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I
    .locals 0

    .line 513
    iget p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->Q:I

    return p0
.end method

.method static synthetic P(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Z
    .locals 0

    .line 513
    iget-boolean p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->R:Z

    return p0
.end method

.method static synthetic Q(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Ljava/lang/String;
    .locals 0

    .line 513
    iget-object p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->S:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic R(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Ljava/lang/String;
    .locals 0

    .line 513
    iget-object p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->T:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic S(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Ljava/lang/String;
    .locals 0

    .line 513
    iget-object p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->U:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic T(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Ljava/lang/String;
    .locals 0

    .line 513
    iget-object p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->V:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic U(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Ljava/lang/String;
    .locals 0

    .line 513
    iget-object p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->W:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic V(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Ljava/lang/String;
    .locals 0

    .line 513
    iget-object p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->X:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic W(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Ljava/lang/String;
    .locals 0

    .line 513
    iget-object p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->Y:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic X(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Ljava/lang/String;
    .locals 0

    .line 513
    iget-object p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->Z:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic Y(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Ljava/lang/String;
    .locals 0

    .line 513
    iget-object p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->aa:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic Z(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I
    .locals 0

    .line 513
    iget p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->ab:I

    return p0
.end method

.method static synthetic a(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I
    .locals 0

    .line 513
    iget p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->b:I

    return p0
.end method

.method static synthetic aa(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Z
    .locals 0

    .line 513
    iget-boolean p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->ac:Z

    return p0
.end method

.method static synthetic ab(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I
    .locals 0

    .line 513
    iget p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->ad:I

    return p0
.end method

.method static synthetic ac(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I
    .locals 0

    .line 513
    iget p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->ae:I

    return p0
.end method

.method static synthetic ad(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Z
    .locals 0

    .line 513
    iget-boolean p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->af:Z

    return p0
.end method

.method static synthetic ae(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I
    .locals 0

    .line 513
    iget p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->ag:I

    return p0
.end method

.method static synthetic af(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I
    .locals 0

    .line 513
    iget p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->ah:I

    return p0
.end method

.method static synthetic ag(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I
    .locals 0

    .line 513
    iget p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->ai:I

    return p0
.end method

.method static synthetic ah(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I
    .locals 0

    .line 513
    iget p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->aj:I

    return p0
.end method

.method static synthetic ai(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Z
    .locals 0

    .line 513
    iget-boolean p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->ak:Z

    return p0
.end method

.method static synthetic aj(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I
    .locals 0

    .line 513
    iget p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->al:I

    return p0
.end method

.method static synthetic ak(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Ljava/lang/String;
    .locals 0

    .line 513
    iget-object p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->am:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic al(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Ljava/lang/String;
    .locals 0

    .line 513
    iget-object p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->an:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic am(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Ljava/lang/String;
    .locals 0

    .line 513
    iget-object p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->ao:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic an(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Ljava/lang/String;
    .locals 0

    .line 513
    iget-object p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->ap:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic ao(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I
    .locals 0

    .line 513
    iget p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->aq:I

    return p0
.end method

.method static synthetic ap(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I
    .locals 0

    .line 513
    iget p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->ar:I

    return p0
.end method

.method static synthetic aq(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I
    .locals 0

    .line 513
    iget p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->as:I

    return p0
.end method

.method static synthetic ar(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I
    .locals 0

    .line 513
    iget p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->at:I

    return p0
.end method

.method static synthetic as(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I
    .locals 0

    .line 513
    iget p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->au:I

    return p0
.end method

.method static synthetic at(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I
    .locals 0

    .line 513
    iget p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->av:I

    return p0
.end method

.method static synthetic au(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I
    .locals 0

    .line 513
    iget p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->aw:I

    return p0
.end method

.method static synthetic av(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Z
    .locals 0

    .line 513
    iget-boolean p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->ax:Z

    return p0
.end method

.method static synthetic aw(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Z
    .locals 0

    .line 513
    iget-boolean p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->ay:Z

    return p0
.end method

.method static synthetic ax(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Ljava/lang/String;
    .locals 0

    .line 513
    iget-object p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->az:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic ay(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Lcom/cmic/gen/sdk/view/GenAuthLoginListener;
    .locals 0

    .line 513
    iget-object p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->M:Lcom/cmic/gen/sdk/view/GenAuthLoginListener;

    return-object p0
.end method

.method static synthetic b(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Z
    .locals 0

    .line 513
    iget-boolean p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->c:Z

    return p0
.end method

.method static synthetic c(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Landroid/view/View;
    .locals 0

    .line 513
    iget-object p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->d:Landroid/view/View;

    return-object p0
.end method

.method static synthetic d(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I
    .locals 0

    .line 513
    iget p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->e:I

    return p0
.end method

.method static synthetic e(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I
    .locals 0

    .line 513
    iget p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->f:I

    return p0
.end method

.method static synthetic f(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Ljava/lang/String;
    .locals 0

    .line 513
    iget-object p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->g:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic g(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I
    .locals 0

    .line 513
    iget p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->h:I

    return p0
.end method

.method static synthetic h(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I
    .locals 0

    .line 513
    iget p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->i:I

    return p0
.end method

.method static synthetic i(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I
    .locals 0

    .line 513
    iget p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->j:I

    return p0
.end method

.method static synthetic j(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Ljava/lang/String;
    .locals 0

    .line 513
    iget-object p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->k:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic k(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I
    .locals 0

    .line 513
    iget p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->l:I

    return p0
.end method

.method static synthetic l(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I
    .locals 0

    .line 513
    iget p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->m:I

    return p0
.end method

.method static synthetic m(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Landroid/widget/ImageView$ScaleType;
    .locals 0

    .line 513
    iget-object p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->n:Landroid/widget/ImageView$ScaleType;

    return-object p0
.end method

.method static synthetic n(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I
    .locals 0

    .line 513
    iget p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->o:I

    return p0
.end method

.method static synthetic o(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Z
    .locals 0

    .line 513
    iget-boolean p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->p:Z

    return p0
.end method

.method static synthetic p(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I
    .locals 0

    .line 513
    iget p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->q:I

    return p0
.end method

.method static synthetic q(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I
    .locals 0

    .line 513
    iget p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->r:I

    return p0
.end method

.method static synthetic r(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I
    .locals 0

    .line 513
    iget p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->s:I

    return p0
.end method

.method static synthetic s(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I
    .locals 0

    .line 513
    iget p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->t:I

    return p0
.end method

.method static synthetic t(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Ljava/lang/String;
    .locals 0

    .line 513
    iget-object p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->u:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic u(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Z
    .locals 0

    .line 513
    iget-boolean p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->v:Z

    return p0
.end method

.method static synthetic v(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I
    .locals 0

    .line 513
    iget p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->w:I

    return p0
.end method

.method static synthetic w(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Z
    .locals 0

    .line 513
    iget-boolean p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->x:Z

    return p0
.end method

.method static synthetic x(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I
    .locals 0

    .line 513
    iget p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->y:I

    return p0
.end method

.method static synthetic y(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)Ljava/lang/String;
    .locals 0

    .line 513
    iget-object p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->z:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic z(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;)I
    .locals 0

    .line 513
    iget p0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->A:I

    return p0
.end method


# virtual methods
.method public build()Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;
    .locals 2

    .line 905
    new-instance v0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    const/4 v1, 0x0

    invoke-direct {v0, p0, v1}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;-><init>(Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$1;)V

    return-object v0
.end method

.method public setAppLanguageType(I)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;
    .locals 0

    .line 885
    iput p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->aw:I

    return-object p0
.end method

.method public setAuthContentView(Landroid/view/View;)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;
    .locals 0

    .line 611
    iput-object p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->d:Landroid/view/View;

    const/4 p1, -0x1

    .line 612
    iput p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->e:I

    return-object p0
.end method

.method public setAuthLayoutResID(I)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;
    .locals 0

    .line 617
    iput p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->e:I

    const/4 p1, 0x0

    .line 618
    iput-object p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->d:Landroid/view/View;

    return-object p0
.end method

.method public setAuthPageActIn(Ljava/lang/String;Ljava/lang/String;)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;
    .locals 0

    .line 851
    iput-object p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->am:Ljava/lang/String;

    .line 852
    iput-object p2, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->an:Ljava/lang/String;

    return-object p0
.end method

.method public setAuthPageActOut(Ljava/lang/String;Ljava/lang/String;)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;
    .locals 0

    .line 857
    iput-object p2, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->ao:Ljava/lang/String;

    .line 858
    iput-object p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->ap:Ljava/lang/String;

    return-object p0
.end method

.method public setAuthPageWindowMode(II)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;
    .locals 0

    .line 863
    iput p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->aq:I

    .line 864
    iput p2, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->ar:I

    return-object p0
.end method

.method public setAuthPageWindowOffset(II)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;
    .locals 0

    .line 869
    iput p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->as:I

    .line 870
    iput p2, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->at:I

    return-object p0
.end method

.method public setBackButton(Z)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;
    .locals 0

    .line 895
    iput-boolean p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->ay:Z

    return-object p0
.end method

.method public setCheckBoxImgPath(Ljava/lang/String;Ljava/lang/String;II)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;
    .locals 0

    .line 778
    iput-object p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->N:Ljava/lang/String;

    .line 779
    iput-object p2, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->O:Ljava/lang/String;

    .line 780
    iput p3, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->P:I

    .line 781
    iput p4, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->Q:I

    return-object p0
.end method

.method public setCheckBoxLocation(I)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;
    .locals 0

    .line 845
    iput p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->al:I

    return-object p0
.end method

.method public setCheckTipText(Ljava/lang/String;)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;
    .locals 2

    .line 762
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result v0

    const/16 v1, 0x64

    if-le v0, v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 v0, 0x1

    :goto_1
    iput-boolean v0, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->H:Z

    if-eqz v0, :cond_2

    const-string p1, "\u8bf7\u52fe\u9009\u540c\u610f\u670d\u52a1\u6761\u6b3e"

    .line 763
    :cond_2
    iput-object p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->G:Ljava/lang/String;

    return-object p0
.end method

.method public setCheckedImgPath(Ljava/lang/String;)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;
    .locals 0

    .line 768
    iput-object p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->N:Ljava/lang/String;

    return-object p0
.end method

.method public setClauseColor(II)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;
    .locals 0

    .line 816
    iput p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->ad:I

    .line 817
    iput p2, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->ae:I

    return-object p0
.end method

.method public setClauseLayoutResID(ILjava/lang/String;)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;
    .locals 0

    .line 623
    iput p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->f:I

    .line 624
    iput-object p2, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->g:Ljava/lang/String;

    return-object p0
.end method

.method public setFitsSystemWindows(Z)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;
    .locals 0

    .line 890
    iput-boolean p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->ax:Z

    return-object p0
.end method

.method public setGenAuthLoginListener(Lcom/cmic/gen/sdk/view/GenAuthLoginListener;)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;
    .locals 0

    .line 750
    iput-object p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->M:Lcom/cmic/gen/sdk/view/GenAuthLoginListener;

    return-object p0
.end method

.method public setGenBackPressedListener(Lcom/cmic/gen/sdk/view/GenBackPressedListener;)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;
    .locals 0

    .line 730
    iput-object p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->I:Lcom/cmic/gen/sdk/view/GenBackPressedListener;

    return-object p0
.end method

.method public setGenCheckBoxListener(Lcom/cmic/gen/sdk/view/GenCheckBoxListener;)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;
    .locals 0

    .line 740
    iput-object p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->K:Lcom/cmic/gen/sdk/view/GenCheckBoxListener;

    return-object p0
.end method

.method public setGenCheckedChangeListener(Lcom/cmic/gen/sdk/view/GenCheckedChangeListener;)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;
    .locals 0

    .line 745
    iput-object p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->L:Lcom/cmic/gen/sdk/view/GenCheckedChangeListener;

    return-object p0
.end method

.method public setLogBtn(II)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;
    .locals 0

    .line 712
    iput p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->A:I

    .line 713
    iput p2, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->B:I

    return-object p0
.end method

.method public setLogBtnClickListener(Lcom/cmic/gen/sdk/view/GenLoginClickListener;)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;
    .locals 0

    .line 735
    iput-object p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->J:Lcom/cmic/gen/sdk/view/GenLoginClickListener;

    return-object p0
.end method

.method public setLogBtnImgPath(Ljava/lang/String;)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;
    .locals 0

    .line 707
    iput-object p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->z:Ljava/lang/String;

    return-object p0
.end method

.method public setLogBtnMargin(II)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;
    .locals 0

    .line 718
    iput p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->C:I

    .line 719
    iput p2, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->D:I

    return-object p0
.end method

.method public setLogBtnOffsetY(I)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;
    .locals 0

    .line 724
    iput p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->E:I

    const/4 p1, 0x0

    .line 725
    iput p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->F:I

    return-object p0
.end method

.method public setLogBtnOffsetY_B(I)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;
    .locals 0

    .line 756
    iput p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->F:I

    const/4 p1, 0x0

    .line 757
    iput p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->E:I

    return-object p0
.end method

.method public setLogBtnText(Ljava/lang/String;)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;
    .locals 1

    .line 675
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, "^\\s*\\n*$"

    .line 676
    invoke-static {v0}, Ljava/util/regex/Pattern;->compile(Ljava/lang/String;)Ljava/util/regex/Pattern;

    move-result-object v0

    .line 677
    invoke-virtual {v0, p1}, Ljava/util/regex/Pattern;->matcher(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;

    move-result-object v0

    .line 678
    invoke-virtual {v0}, Ljava/util/regex/Matcher;->matches()Z

    move-result v0

    if-nez v0, :cond_0

    .line 679
    iput-object p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->u:Ljava/lang/String;

    const/4 p1, 0x0

    .line 680
    iput-boolean p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->v:Z

    :cond_0
    return-object p0
.end method

.method public setLogBtnText(Ljava/lang/String;IIZ)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;
    .locals 1

    .line 687
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, "^\\s*\\n*$"

    .line 688
    invoke-static {v0}, Ljava/util/regex/Pattern;->compile(Ljava/lang/String;)Ljava/util/regex/Pattern;

    move-result-object v0

    .line 689
    invoke-virtual {v0, p1}, Ljava/util/regex/Pattern;->matcher(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;

    move-result-object v0

    .line 690
    invoke-virtual {v0}, Ljava/util/regex/Matcher;->matches()Z

    move-result v0

    if-nez v0, :cond_0

    .line 691
    iput-object p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->u:Ljava/lang/String;

    const/4 p1, 0x0

    .line 692
    iput-boolean p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->v:Z

    .line 695
    :cond_0
    iput p2, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->y:I

    .line 696
    iput p3, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->w:I

    .line 697
    iput-boolean p4, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->x:Z

    return-object p0
.end method

.method public setLogBtnTextColor(I)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;
    .locals 0

    .line 702
    iput p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->y:I

    return-object p0
.end method

.method public setNavColor(I)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;
    .locals 0

    .line 639
    iput p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->j:I

    return-object p0
.end method

.method public setNavTextColor(I)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;
    .locals 0

    .line 634
    iput p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->i:I

    return-object p0
.end method

.method public setNavTextSize(I)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;
    .locals 0

    .line 629
    iput p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->h:I

    return-object p0
.end method

.method public setNumFieldOffsetY(I)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;
    .locals 0

    .line 662
    iput p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->s:I

    const/4 p1, 0x0

    .line 663
    iput p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->t:I

    return-object p0
.end method

.method public setNumFieldOffsetY_B(I)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;
    .locals 0

    .line 668
    iput p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->t:I

    const/4 p1, 0x0

    .line 669
    iput p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->s:I

    return-object p0
.end method

.method public setNumberColor(I)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;
    .locals 0

    .line 652
    iput p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->q:I

    return-object p0
.end method

.method public setNumberOffsetX(I)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;
    .locals 0

    .line 657
    iput p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->r:I

    return-object p0
.end method

.method public setNumberSize(IZ)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;
    .locals 1

    const/16 v0, 0x8

    if-le p1, v0, :cond_0

    .line 645
    iput p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->o:I

    .line 646
    iput-boolean p2, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->p:Z

    :cond_0
    return-object p0
.end method

.method public setPrivacyAlignment(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;
    .locals 1

    const-string v0, "$$\u8fd0\u8425\u5546\u6761\u6b3e$$"

    .line 792
    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 793
    iput-object p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->S:Ljava/lang/String;

    .line 794
    iput-object p2, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->T:Ljava/lang/String;

    .line 795
    iput-object p3, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->U:Ljava/lang/String;

    .line 796
    iput-object p4, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->V:Ljava/lang/String;

    .line 797
    iput-object p5, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->W:Ljava/lang/String;

    .line 798
    iput-object p6, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->X:Ljava/lang/String;

    .line 799
    iput-object p7, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->Y:Ljava/lang/String;

    .line 800
    iput-object p8, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->Z:Ljava/lang/String;

    .line 801
    iput-object p9, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->aa:Ljava/lang/String;

    :cond_0
    return-object p0
.end method

.method public setPrivacyAnimation(Ljava/lang/String;)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;
    .locals 0

    .line 900
    iput-object p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->az:Ljava/lang/String;

    return-object p0
.end method

.method public setPrivacyBookSymbol(Z)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;
    .locals 0

    .line 840
    iput-boolean p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->ak:Z

    return-object p0
.end method

.method public setPrivacyMargin(II)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;
    .locals 0

    .line 822
    iput p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->ag:I

    .line 823
    iput p2, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->ah:I

    return-object p0
.end method

.method public setPrivacyOffsetY(I)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;
    .locals 0

    .line 828
    iput p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->ai:I

    const/4 p1, 0x0

    .line 829
    iput p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->aj:I

    return-object p0
.end method

.method public setPrivacyOffsetY_B(I)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;
    .locals 0

    .line 834
    iput p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->aj:I

    const/4 p1, 0x0

    .line 835
    iput p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->ai:I

    return-object p0
.end method

.method public setPrivacyState(Z)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;
    .locals 0

    .line 786
    iput-boolean p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->R:Z

    return-object p0
.end method

.method public setPrivacyText(IIIZZ)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;
    .locals 0

    .line 807
    iput p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->ab:I

    .line 808
    iput p2, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->ad:I

    .line 809
    iput p3, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->ae:I

    .line 810
    iput-boolean p4, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->af:Z

    .line 811
    iput-boolean p5, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->ac:Z

    return-object p0
.end method

.method public setStatusBar(IZ)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;
    .locals 0

    .line 605
    iput p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->b:I

    .line 606
    iput-boolean p2, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->c:Z

    return-object p0
.end method

.method public setThemeId(I)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;
    .locals 0

    .line 880
    iput p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->av:I

    return-object p0
.end method

.method public setUncheckedImgPath(Ljava/lang/String;)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;
    .locals 0

    .line 773
    iput-object p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->O:Ljava/lang/String;

    return-object p0
.end method

.method public setWebDomStorage(Z)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;
    .locals 0

    .line 910
    iput-boolean p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->a:Z

    return-object p0
.end method

.method public setWindowBottom(I)Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;
    .locals 0

    .line 875
    iput p1, p0, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig$Builder;->au:I

    return-object p0
.end method
