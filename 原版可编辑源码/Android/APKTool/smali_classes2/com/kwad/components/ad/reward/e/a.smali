.class public abstract Lcom/kwad/components/ad/reward/e/a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/ad/reward/e/f;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private a(Lcom/kwad/components/ad/reward/e/f;)I
    .locals 1

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/e/a;->getPriority()I

    move-result v0

    invoke-interface {p1}, Lcom/kwad/components/ad/reward/e/f;->getPriority()I

    move-result p1

    sub-int/2addr v0, p1

    return v0
.end method


# virtual methods
.method public synthetic compareTo(Ljava/lang/Object;)I
    .locals 0

    check-cast p1, Lcom/kwad/components/ad/reward/e/f;

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/reward/e/a;->a(Lcom/kwad/components/ad/reward/e/f;)I

    move-result p1

    return p1
.end method

.method public getPriority()I
    .locals 1

    const/4 v0, 0x0

    return v0
.end method
