.class final Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/splashscreen/widget/SkipView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "b"
.end annotation


# instance fields
.field private Fd:I

.field private Gv:Ljava/lang/String;

.field private Gw:Ljava/lang/String;

.field private Gx:I

.field private Gy:Z

.field private Gz:Z


# direct methods
.method private constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "\u8df3\u8fc7"

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;->Gv:Ljava/lang/String;

    const-string v0, ""

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;->Gw:Ljava/lang/String;

    const/4 v0, 0x5

    iput v0, p0, Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;->Gx:I

    iput v0, p0, Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;->Fd:I

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;->Gy:Z

    iput-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;->Gz:Z

    return-void
.end method

.method synthetic constructor <init>(B)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;-><init>()V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;->Gw:Ljava/lang/String;

    return-object p1
.end method

.method static synthetic a(Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;->Gy:Z

    return p1
.end method

.method static synthetic b(Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;)I
    .locals 0

    iget p0, p0, Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;->Gx:I

    return p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;->Gv:Ljava/lang/String;

    return-object p1
.end method

.method static synthetic b(Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;->Gz:Z

    return p1
.end method

.method static synthetic c(Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;)I
    .locals 0

    iget p0, p0, Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;->Fd:I

    return p0
.end method

.method static synthetic d(Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;)I
    .locals 2

    iget v0, p0, Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;->Fd:I

    add-int/lit8 v1, v0, -0x1

    iput v1, p0, Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;->Fd:I

    return v0
.end method

.method static synthetic e(Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;->Gv:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic f(Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;->Gy:Z

    return p0
.end method

.method static synthetic g(Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;->Gz:Z

    return p0
.end method

.method static synthetic h(Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;)Z
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;->lM()Z

    move-result p0

    return p0
.end method

.method private lM()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;->Gy:Z

    if-eqz v0, :cond_0

    iget-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;->Gz:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method


# virtual methods
.method public final ad(Ljava/lang/String;)V
    .locals 1

    const/4 v0, -0x1

    iput v0, p0, Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;->Fd:I

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;->Gw:Ljava/lang/String;

    return-void
.end method

.method public final af(I)V
    .locals 0

    iput p1, p0, Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;->Gx:I

    iput p1, p0, Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;->Fd:I

    return-void
.end method

.method public final lK()Ljava/lang/String;
    .locals 2

    iget v0, p0, Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;->Fd:I

    if-gez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;->Gw:Ljava/lang/String;

    return-object v0

    :cond_0
    if-nez v0, :cond_1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;->Gw:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v1, 0x1

    :goto_0
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;->Gw:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;->Fd:I

    goto :goto_0
.end method

.method public final lL()Z
    .locals 1

    iget v0, p0, Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;->Fd:I

    if-gtz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method
