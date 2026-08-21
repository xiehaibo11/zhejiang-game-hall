.class public final Lcom/kwad/sdk/crash/c$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/crash/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "a"
.end annotation


# instance fields
.field private Uj:Ljava/lang/String;

.field private Uk:I

.field public Ul:I

.field private ajx:Ljava/lang/String;

.field private appId:Ljava/lang/String;

.field private appName:Ljava/lang/String;

.field private appPackageName:Ljava/lang/String;

.field private appVersion:Ljava/lang/String;

.field private asu:I

.field private atV:Ljava/lang/String;

.field private azD:Z

.field private azE:Lcom/kwad/sdk/crash/f;

.field private azF:Ljava/lang/String;

.field private azG:Ljava/lang/String;

.field private azH:Ljava/lang/String;

.field private azI:Ljava/lang/String;

.field private azJ:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/sdk/crash/a;",
            ">;"
        }
    .end annotation
.end field

.field private azK:Ljava/lang/String;

.field private azL:Lcom/kwad/sdk/crash/h;

.field private azM:[Ljava/lang/String;

.field public azN:[Ljava/lang/String;

.field private azq:D

.field private azu:Z

.field private azv:Z

.field private context:Landroid/content/Context;

.field private isExternal:Z

.field private platform:Ljava/lang/String;

.field private sdkVersion:Ljava/lang/String;

.field private version:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/sdk/crash/c$a;->azD:Z

    iput-boolean v0, p0, Lcom/kwad/sdk/crash/c$a;->azu:Z

    iput-boolean v0, p0, Lcom/kwad/sdk/crash/c$a;->azv:Z

    iput-boolean v0, p0, Lcom/kwad/sdk/crash/c$a;->isExternal:Z

    const-string v0, ""

    iput-object v0, p0, Lcom/kwad/sdk/crash/c$a;->azH:Ljava/lang/String;

    iput-object v0, p0, Lcom/kwad/sdk/crash/c$a;->azI:Ljava/lang/String;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/crash/c$a;->azJ:Ljava/util/List;

    const-wide/high16 v0, 0x3ff0000000000000L    # 1.0

    iput-wide v0, p0, Lcom/kwad/sdk/crash/c$a;->azq:D

    return-void
.end method

.method static synthetic A(Lcom/kwad/sdk/crash/c$a;)D
    .locals 2

    iget-wide v0, p0, Lcom/kwad/sdk/crash/c$a;->azq:D

    return-wide v0
.end method

.method static synthetic a(Lcom/kwad/sdk/crash/c$a;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/sdk/crash/c$a;->azD:Z

    return p0
.end method

.method static synthetic b(Lcom/kwad/sdk/crash/c$a;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/sdk/crash/c$a;->azu:Z

    return p0
.end method

.method static synthetic c(Lcom/kwad/sdk/crash/c$a;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/sdk/crash/c$a;->azv:Z

    return p0
.end method

.method static synthetic d(Lcom/kwad/sdk/crash/c$a;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/sdk/crash/c$a;->isExternal:Z

    return p0
.end method

.method static synthetic e(Lcom/kwad/sdk/crash/c$a;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/crash/c$a;->azH:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic f(Lcom/kwad/sdk/crash/c$a;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/crash/c$a;->azI:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic g(Lcom/kwad/sdk/crash/c$a;)Landroid/content/Context;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/crash/c$a;->context:Landroid/content/Context;

    return-object p0
.end method

.method static synthetic h(Lcom/kwad/sdk/crash/c$a;)Lcom/kwad/sdk/crash/f;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/crash/c$a;->azE:Lcom/kwad/sdk/crash/f;

    return-object p0
.end method

.method static synthetic i(Lcom/kwad/sdk/crash/c$a;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/crash/c$a;->platform:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic j(Lcom/kwad/sdk/crash/c$a;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/crash/c$a;->version:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic k(Lcom/kwad/sdk/crash/c$a;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/crash/c$a;->atV:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic l(Lcom/kwad/sdk/crash/c$a;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/crash/c$a;->ajx:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic m(Lcom/kwad/sdk/crash/c$a;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/crash/c$a;->azF:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic n(Lcom/kwad/sdk/crash/c$a;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/crash/c$a;->azG:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic o(Lcom/kwad/sdk/crash/c$a;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/crash/c$a;->appId:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic p(Lcom/kwad/sdk/crash/c$a;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/crash/c$a;->appName:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic q(Lcom/kwad/sdk/crash/c$a;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/crash/c$a;->appVersion:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic r(Lcom/kwad/sdk/crash/c$a;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/crash/c$a;->appPackageName:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic s(Lcom/kwad/sdk/crash/c$a;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/crash/c$a;->Uj:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic t(Lcom/kwad/sdk/crash/c$a;)I
    .locals 0

    iget p0, p0, Lcom/kwad/sdk/crash/c$a;->Uk:I

    return p0
.end method

.method static synthetic u(Lcom/kwad/sdk/crash/c$a;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/crash/c$a;->sdkVersion:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic v(Lcom/kwad/sdk/crash/c$a;)I
    .locals 0

    iget p0, p0, Lcom/kwad/sdk/crash/c$a;->asu:I

    return p0
.end method

.method static synthetic w(Lcom/kwad/sdk/crash/c$a;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/crash/c$a;->azK:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic x(Lcom/kwad/sdk/crash/c$a;)Lcom/kwad/sdk/crash/h;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/crash/c$a;->azL:Lcom/kwad/sdk/crash/h;

    return-object p0
.end method

.method static synthetic y(Lcom/kwad/sdk/crash/c$a;)[Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/crash/c$a;->azM:[Ljava/lang/String;

    return-object p0
.end method

.method static synthetic z(Lcom/kwad/sdk/crash/c$a;)Ljava/util/List;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/crash/c$a;->azJ:Ljava/util/List;

    return-object p0
.end method


# virtual methods
.method public final A(Ljava/util/List;)Lcom/kwad/sdk/crash/c$a;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)",
            "Lcom/kwad/sdk/crash/c$a;"
        }
    .end annotation

    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_0
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, v0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    new-instance v0, Lcom/kwad/sdk/crash/a;

    invoke-direct {v0}, Lcom/kwad/sdk/crash/a;-><init>()V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/crash/a;->parseJson(Lorg/json/JSONObject;)V

    iget-object v1, p0, Lcom/kwad/sdk/crash/c$a;->azJ:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ExceptionCollectorConfigs"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->w(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_1
    return-object p0
.end method

.method public final EB()Lcom/kwad/sdk/crash/c;
    .locals 2

    new-instance v0, Lcom/kwad/sdk/crash/c;

    const/4 v1, 0x0

    invoke-direct {v0, p0, v1}, Lcom/kwad/sdk/crash/c;-><init>(Lcom/kwad/sdk/crash/c$a;B)V

    return-object v0
.end method

.method public final a(Lcom/kwad/sdk/crash/f;)Lcom/kwad/sdk/crash/c$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/crash/c$a;->azE:Lcom/kwad/sdk/crash/f;

    return-object p0
.end method

.method public final a(Lcom/kwad/sdk/crash/h;)Lcom/kwad/sdk/crash/c$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/crash/c$a;->azL:Lcom/kwad/sdk/crash/h;

    return-object p0
.end method

.method public final bn(Z)Lcom/kwad/sdk/crash/c$a;
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/sdk/crash/c$a;->azu:Z

    return-object p0
.end method

.method public final bo(Z)Lcom/kwad/sdk/crash/c$a;
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/sdk/crash/c$a;->azv:Z

    return-object p0
.end method

.method public final bp(Z)Lcom/kwad/sdk/crash/c$a;
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/sdk/crash/c$a;->isExternal:Z

    return-object p0
.end method

.method public final bv(Landroid/content/Context;)Lcom/kwad/sdk/crash/c$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/crash/c$a;->context:Landroid/content/Context;

    return-object p0
.end method

.method public final cC(I)Lcom/kwad/sdk/crash/c$a;
    .locals 0

    iput p1, p0, Lcom/kwad/sdk/crash/c$a;->asu:I

    return-object p0
.end method

.method public final cD(I)Lcom/kwad/sdk/crash/c$a;
    .locals 0

    iput p1, p0, Lcom/kwad/sdk/crash/c$a;->Uk:I

    return-object p0
.end method

.method public final cE(I)Lcom/kwad/sdk/crash/c$a;
    .locals 0

    const/4 p1, 0x1

    iput p1, p0, Lcom/kwad/sdk/crash/c$a;->Ul:I

    return-object p0
.end method

.method public final d([Ljava/lang/String;)Lcom/kwad/sdk/crash/c$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/crash/c$a;->azM:[Ljava/lang/String;

    return-object p0
.end method

.method public final e([Ljava/lang/String;)Lcom/kwad/sdk/crash/c$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/crash/c$a;->azN:[Ljava/lang/String;

    return-object p0
.end method

.method public final el(Ljava/lang/String;)Lcom/kwad/sdk/crash/c$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/crash/c$a;->azH:Ljava/lang/String;

    return-object p0
.end method

.method public final em(Ljava/lang/String;)Lcom/kwad/sdk/crash/c$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/crash/c$a;->azI:Ljava/lang/String;

    return-object p0
.end method

.method public final en(Ljava/lang/String;)Lcom/kwad/sdk/crash/c$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/crash/c$a;->platform:Ljava/lang/String;

    return-object p0
.end method

.method public final eo(Ljava/lang/String;)Lcom/kwad/sdk/crash/c$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/crash/c$a;->atV:Ljava/lang/String;

    return-object p0
.end method

.method public final ep(Ljava/lang/String;)Lcom/kwad/sdk/crash/c$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/crash/c$a;->ajx:Ljava/lang/String;

    return-object p0
.end method

.method public final eq(Ljava/lang/String;)Lcom/kwad/sdk/crash/c$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/crash/c$a;->azG:Ljava/lang/String;

    return-object p0
.end method

.method public final er(Ljava/lang/String;)Lcom/kwad/sdk/crash/c$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/crash/c$a;->azK:Ljava/lang/String;

    return-object p0
.end method

.method public final es(Ljava/lang/String;)Lcom/kwad/sdk/crash/c$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/crash/c$a;->sdkVersion:Ljava/lang/String;

    return-object p0
.end method

.method public final et(Ljava/lang/String;)Lcom/kwad/sdk/crash/c$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/crash/c$a;->Uj:Ljava/lang/String;

    return-object p0
.end method

.method public final eu(Ljava/lang/String;)Lcom/kwad/sdk/crash/c$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/crash/c$a;->appPackageName:Ljava/lang/String;

    return-object p0
.end method

.method public final ev(Ljava/lang/String;)Lcom/kwad/sdk/crash/c$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/crash/c$a;->appId:Ljava/lang/String;

    return-object p0
.end method

.method public final ew(Ljava/lang/String;)Lcom/kwad/sdk/crash/c$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/crash/c$a;->appName:Ljava/lang/String;

    return-object p0
.end method

.method public final ex(Ljava/lang/String;)Lcom/kwad/sdk/crash/c$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/crash/c$a;->appVersion:Ljava/lang/String;

    return-object p0
.end method

.method public final j(D)Lcom/kwad/sdk/crash/c$a;
    .locals 0

    iput-wide p1, p0, Lcom/kwad/sdk/crash/c$a;->azq:D

    return-object p0
.end method
