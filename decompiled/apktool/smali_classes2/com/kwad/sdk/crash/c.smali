.class public final Lcom/kwad/sdk/crash/c;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/crash/c$a;
    }
.end annotation


# instance fields
.field public final ajx:Ljava/lang/String;

.field public final atV:Ljava/lang/String;

.field public final azA:Lcom/kwad/sdk/crash/h;

.field public final azB:[Ljava/lang/String;

.field public final azC:[Ljava/lang/String;

.field public final azD:Z

.field public final azE:Lcom/kwad/sdk/crash/f;

.field public final azF:Ljava/lang/String;

.field public final azG:Ljava/lang/String;

.field public final azH:Ljava/lang/String;

.field public final azI:Ljava/lang/String;

.field public final azJ:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/sdk/crash/a;",
            ">;"
        }
    .end annotation
.end field

.field public final azq:D

.field public final azu:Z

.field public final azv:Z

.field public final azy:Lcom/kwad/sdk/crash/model/b;

.field public final azz:Lcom/kwad/sdk/crash/model/a;

.field public final context:Landroid/content/Context;

.field public final isExternal:Z

.field public final platform:Ljava/lang/String;

.field public final version:Ljava/lang/String;


# direct methods
.method private constructor <init>(Lcom/kwad/sdk/crash/c$a;)V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Lcom/kwad/sdk/crash/model/b;

    invoke-direct {v0}, Lcom/kwad/sdk/crash/model/b;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/crash/c;->azy:Lcom/kwad/sdk/crash/model/b;

    new-instance v0, Lcom/kwad/sdk/crash/model/a;

    invoke-direct {v0}, Lcom/kwad/sdk/crash/model/a;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/crash/c;->azz:Lcom/kwad/sdk/crash/model/a;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/crash/c;->azJ:Ljava/util/List;

    invoke-static {p1}, Lcom/kwad/sdk/crash/c$a;->a(Lcom/kwad/sdk/crash/c$a;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/sdk/crash/c;->azD:Z

    invoke-static {p1}, Lcom/kwad/sdk/crash/c$a;->b(Lcom/kwad/sdk/crash/c$a;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/sdk/crash/c;->azu:Z

    invoke-static {p1}, Lcom/kwad/sdk/crash/c$a;->c(Lcom/kwad/sdk/crash/c$a;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/sdk/crash/c;->azv:Z

    invoke-static {p1}, Lcom/kwad/sdk/crash/c$a;->d(Lcom/kwad/sdk/crash/c$a;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/sdk/crash/c;->isExternal:Z

    invoke-static {p1}, Lcom/kwad/sdk/crash/c$a;->e(Lcom/kwad/sdk/crash/c$a;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/crash/c;->azH:Ljava/lang/String;

    invoke-static {p1}, Lcom/kwad/sdk/crash/c$a;->f(Lcom/kwad/sdk/crash/c$a;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/crash/c;->azI:Ljava/lang/String;

    invoke-static {p1}, Lcom/kwad/sdk/crash/c$a;->g(Lcom/kwad/sdk/crash/c$a;)Landroid/content/Context;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/crash/c;->context:Landroid/content/Context;

    invoke-static {p1}, Lcom/kwad/sdk/crash/c$a;->h(Lcom/kwad/sdk/crash/c$a;)Lcom/kwad/sdk/crash/f;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/crash/c;->azE:Lcom/kwad/sdk/crash/f;

    invoke-static {p1}, Lcom/kwad/sdk/crash/c$a;->i(Lcom/kwad/sdk/crash/c$a;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/crash/c;->platform:Ljava/lang/String;

    invoke-static {p1}, Lcom/kwad/sdk/crash/c$a;->j(Lcom/kwad/sdk/crash/c$a;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/crash/c;->version:Ljava/lang/String;

    invoke-static {p1}, Lcom/kwad/sdk/crash/c$a;->k(Lcom/kwad/sdk/crash/c$a;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/crash/c;->atV:Ljava/lang/String;

    invoke-static {p1}, Lcom/kwad/sdk/crash/c$a;->l(Lcom/kwad/sdk/crash/c$a;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/crash/c;->ajx:Ljava/lang/String;

    invoke-static {p1}, Lcom/kwad/sdk/crash/c$a;->m(Lcom/kwad/sdk/crash/c$a;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/crash/c;->azF:Ljava/lang/String;

    invoke-static {p1}, Lcom/kwad/sdk/crash/c$a;->n(Lcom/kwad/sdk/crash/c$a;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/crash/c;->azG:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/crash/c;->azz:Lcom/kwad/sdk/crash/model/a;

    invoke-static {p1}, Lcom/kwad/sdk/crash/c$a;->o(Lcom/kwad/sdk/crash/c$a;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/sdk/crash/model/a;->aAm:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/crash/c;->azz:Lcom/kwad/sdk/crash/model/a;

    invoke-static {p1}, Lcom/kwad/sdk/crash/c$a;->p(Lcom/kwad/sdk/crash/c$a;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/sdk/crash/model/a;->mAppName:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/crash/c;->azz:Lcom/kwad/sdk/crash/model/a;

    invoke-static {p1}, Lcom/kwad/sdk/crash/c$a;->q(Lcom/kwad/sdk/crash/c$a;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/sdk/crash/model/a;->aAo:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/crash/c;->azz:Lcom/kwad/sdk/crash/model/a;

    invoke-static {p1}, Lcom/kwad/sdk/crash/c$a;->r(Lcom/kwad/sdk/crash/c$a;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/sdk/crash/model/a;->aAn:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/crash/c;->azy:Lcom/kwad/sdk/crash/model/b;

    invoke-static {p1}, Lcom/kwad/sdk/crash/c$a;->s(Lcom/kwad/sdk/crash/c$a;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/sdk/crash/model/b;->aAr:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/crash/c;->azy:Lcom/kwad/sdk/crash/model/b;

    invoke-static {p1}, Lcom/kwad/sdk/crash/c$a;->t(Lcom/kwad/sdk/crash/c$a;)I

    move-result v1

    iput v1, v0, Lcom/kwad/sdk/crash/model/b;->aAs:I

    iget-object v0, p0, Lcom/kwad/sdk/crash/c;->azy:Lcom/kwad/sdk/crash/model/b;

    invoke-static {p1}, Lcom/kwad/sdk/crash/c$a;->u(Lcom/kwad/sdk/crash/c$a;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/sdk/crash/model/b;->mSdkVersion:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/crash/c;->azy:Lcom/kwad/sdk/crash/model/b;

    invoke-static {p1}, Lcom/kwad/sdk/crash/c$a;->v(Lcom/kwad/sdk/crash/c$a;)I

    move-result v1

    iput v1, v0, Lcom/kwad/sdk/crash/model/b;->aAq:I

    iget-object v0, p0, Lcom/kwad/sdk/crash/c;->azy:Lcom/kwad/sdk/crash/model/b;

    invoke-static {p1}, Lcom/kwad/sdk/crash/c$a;->w(Lcom/kwad/sdk/crash/c$a;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/sdk/crash/model/b;->aAp:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/crash/c;->azy:Lcom/kwad/sdk/crash/model/b;

    iget v1, p1, Lcom/kwad/sdk/crash/c$a;->Ul:I

    iput v1, v0, Lcom/kwad/sdk/crash/model/b;->aAt:I

    invoke-static {p1}, Lcom/kwad/sdk/crash/c$a;->x(Lcom/kwad/sdk/crash/c$a;)Lcom/kwad/sdk/crash/h;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/crash/c;->azA:Lcom/kwad/sdk/crash/h;

    invoke-static {p1}, Lcom/kwad/sdk/crash/c$a;->y(Lcom/kwad/sdk/crash/c$a;)[Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/crash/c;->azB:[Ljava/lang/String;

    iget-object v0, p1, Lcom/kwad/sdk/crash/c$a;->azN:[Ljava/lang/String;

    iput-object v0, p0, Lcom/kwad/sdk/crash/c;->azC:[Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/crash/c;->azJ:Ljava/util/List;

    invoke-static {p1}, Lcom/kwad/sdk/crash/c$a;->z(Lcom/kwad/sdk/crash/c$a;)Ljava/util/List;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    invoke-static {p1}, Lcom/kwad/sdk/crash/c$a;->A(Lcom/kwad/sdk/crash/c$a;)D

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/crash/c;->azq:D

    return-void
.end method

.method synthetic constructor <init>(Lcom/kwad/sdk/crash/c$a;B)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/sdk/crash/c;-><init>(Lcom/kwad/sdk/crash/c$a;)V

    return-void
.end method


# virtual methods
.method public final EA()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/sdk/crash/c;->azD:Z

    return v0
.end method

.method public final Ez()Lcom/kwad/sdk/crash/f;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/crash/c;->azE:Lcom/kwad/sdk/crash/f;

    return-object v0
.end method
