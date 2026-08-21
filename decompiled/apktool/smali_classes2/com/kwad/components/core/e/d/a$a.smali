.class public final Lcom/kwad/components/core/e/d/a$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/core/e/d/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "a"
.end annotation


# instance fields
.field private JC:Z

.field private JD:Z

.field private JE:Z

.field private JF:Lcom/kwad/components/core/e/d/a$b;

.field private JG:Lcom/kwad/components/core/e/d/c;

.field private JH:Z

.field private JI:J

.field private JJ:Z

.field private JK:Z

.field private JL:Lcom/kwad/sdk/core/report/z$b;

.field private JM:Lorg/json/JSONObject;

.field private JN:Z

.field private JO:Z

.field private JP:I

.field private JQ:I

.field private JR:I

.field private JS:Ljava/util/concurrent/Callable;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/Callable<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private JT:Ljava/lang/String;

.field private adTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private final context:Landroid/content/Context;

.field private jE:I

.field private jG:I


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/core/e/d/a$a;->JN:Z

    iput-object p1, p0, Lcom/kwad/components/core/e/d/a$a;->context:Landroid/content/Context;

    return-void
.end method

.method static synthetic j(Lcom/kwad/components/core/e/d/a$a;)Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/e/d/a$a;->adTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object p0
.end method

.method static synthetic k(Lcom/kwad/components/core/e/d/a$a;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/core/e/d/a$a;->JH:Z

    return p0
.end method

.method static synthetic l(Lcom/kwad/components/core/e/d/a$a;)Lcom/kwad/sdk/core/report/z$b;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/e/d/a$a;->JL:Lcom/kwad/sdk/core/report/z$b;

    return-object p0
.end method


# virtual methods
.method public final P(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/e/d/a$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/e/d/a$a;->adTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object p0
.end method

.method public final a(Lcom/kwad/components/core/e/d/a$b;)Lcom/kwad/components/core/e/d/a$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/e/d/a$a;->JF:Lcom/kwad/components/core/e/d/a$b;

    return-object p0
.end method

.method public final a(Lcom/kwad/sdk/core/report/z$b;)Lcom/kwad/components/core/e/d/a$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/e/d/a$a;->JL:Lcom/kwad/sdk/core/report/z$b;

    return-object p0
.end method

.method public final a(Ljava/util/concurrent/Callable;)Lcom/kwad/components/core/e/d/a$a;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/concurrent/Callable<",
            "Ljava/lang/String;",
            ">;)",
            "Lcom/kwad/components/core/e/d/a$a;"
        }
    .end annotation

    iput-object p1, p0, Lcom/kwad/components/core/e/d/a$a;->JS:Ljava/util/concurrent/Callable;

    return-object p0
.end method

.method public final al(Ljava/lang/String;)Lcom/kwad/components/core/e/d/a$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/e/d/a$a;->JT:Ljava/lang/String;

    return-object p0
.end method

.method public final am(I)Lcom/kwad/components/core/e/d/a$a;
    .locals 0

    iput p1, p0, Lcom/kwad/components/core/e/d/a$a;->JR:I

    return-object p0
.end method

.method public final am(Z)Lcom/kwad/components/core/e/d/a$a;
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/core/e/d/a$a;->JH:Z

    return-object p0
.end method

.method public final an(I)Lcom/kwad/components/core/e/d/a$a;
    .locals 0

    iput p1, p0, Lcom/kwad/components/core/e/d/a$a;->jG:I

    return-object p0
.end method

.method public final an(Z)Lcom/kwad/components/core/e/d/a$a;
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/core/e/d/a$a;->JJ:Z

    return-object p0
.end method

.method public final ao(I)Lcom/kwad/components/core/e/d/a$a;
    .locals 0

    iput p1, p0, Lcom/kwad/components/core/e/d/a$a;->jE:I

    return-object p0
.end method

.method public final ao(Z)Lcom/kwad/components/core/e/d/a$a;
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/core/e/d/a$a;->JK:Z

    return-object p0
.end method

.method public final ap(I)Lcom/kwad/components/core/e/d/a$a;
    .locals 0

    iput p1, p0, Lcom/kwad/components/core/e/d/a$a;->JP:I

    return-object p0
.end method

.method public final ap(Z)Lcom/kwad/components/core/e/d/a$a;
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/core/e/d/a$a;->JN:Z

    return-object p0
.end method

.method public final aq(I)Lcom/kwad/components/core/e/d/a$a;
    .locals 0

    iput p1, p0, Lcom/kwad/components/core/e/d/a$a;->JQ:I

    return-object p0
.end method

.method public final aq(Z)Lcom/kwad/components/core/e/d/a$a;
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/core/e/d/a$a;->JD:Z

    return-object p0
.end method

.method public final ar(Z)Lcom/kwad/components/core/e/d/a$a;
    .locals 0

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/components/core/e/d/a$a;->JE:Z

    return-object p0
.end method

.method public final as(Z)Lcom/kwad/components/core/e/d/a$a;
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/core/e/d/a$a;->JC:Z

    return-object p0
.end method

.method public final at(Z)Lcom/kwad/components/core/e/d/a$a;
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/core/e/d/a$a;->JO:Z

    return-object p0
.end method

.method public final b(Lcom/kwad/components/core/e/d/c;)Lcom/kwad/components/core/e/d/a$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/e/d/a$a;->JG:Lcom/kwad/components/core/e/d/c;

    return-object p0
.end method

.method public final cV()I
    .locals 1

    iget v0, p0, Lcom/kwad/components/core/e/d/a$a;->jE:I

    return v0
.end method

.method public final cY()I
    .locals 1

    iget v0, p0, Lcom/kwad/components/core/e/d/a$a;->jG:I

    return v0
.end method

.method public final d(Lorg/json/JSONObject;)Lcom/kwad/components/core/e/d/a$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/e/d/a$a;->JM:Lorg/json/JSONObject;

    return-object p0
.end method

.method public final getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/e/d/a$a;->adTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object v0
.end method

.method public final getClientParams()Lcom/kwad/sdk/core/report/z$b;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/e/d/a$a;->JL:Lcom/kwad/sdk/core/report/z$b;

    return-object v0
.end method

.method public final getContext()Landroid/content/Context;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/e/d/a$a;->context:Landroid/content/Context;

    return-object v0
.end method

.method public final hi()Lcom/kwad/components/core/e/d/c;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/e/d/a$a;->JG:Lcom/kwad/components/core/e/d/c;

    return-object v0
.end method

.method public final hv()Lorg/json/JSONObject;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/e/d/a$a;->JM:Lorg/json/JSONObject;

    return-object v0
.end method

.method public final ng()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/e/d/a$a;->JT:Ljava/lang/String;

    return-object v0
.end method

.method public final nh()Ljava/util/concurrent/Callable;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/concurrent/Callable<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    iget-object v0, p0, Lcom/kwad/components/core/e/d/a$a;->JS:Ljava/util/concurrent/Callable;

    return-object v0
.end method

.method public final ni()Lcom/kwad/components/core/e/d/a$b;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/e/d/a$a;->JF:Lcom/kwad/components/core/e/d/a$b;

    return-object v0
.end method

.method public final nj()I
    .locals 1

    iget v0, p0, Lcom/kwad/components/core/e/d/a$a;->JR:I

    return v0
.end method

.method public final nk()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/core/e/d/a$a;->JH:Z

    return v0
.end method

.method public final nl()J
    .locals 2

    iget-wide v0, p0, Lcom/kwad/components/core/e/d/a$a;->JI:J

    return-wide v0
.end method

.method public final nm()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/core/e/d/a$a;->JJ:Z

    return v0
.end method

.method public final nn()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/core/e/d/a$a;->JK:Z

    return v0
.end method

.method public final no()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/core/e/d/a$a;->JN:Z

    return v0
.end method

.method public final np()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/core/e/d/a$a;->JD:Z

    return v0
.end method

.method public final nq()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/core/e/d/a$a;->JE:Z

    return v0
.end method

.method public final nr()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/core/e/d/a$a;->JC:Z

    return v0
.end method

.method public final ns()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/core/e/d/a$a;->JO:Z

    return v0
.end method

.method public final nt()I
    .locals 1

    iget v0, p0, Lcom/kwad/components/core/e/d/a$a;->JP:I

    return v0
.end method

.method public final nu()I
    .locals 1

    iget v0, p0, Lcom/kwad/components/core/e/d/a$a;->JQ:I

    return v0
.end method

.method public final s(J)Lcom/kwad/components/core/e/d/a$a;
    .locals 0

    iput-wide p1, p0, Lcom/kwad/components/core/e/d/a$a;->JI:J

    return-object p0
.end method
