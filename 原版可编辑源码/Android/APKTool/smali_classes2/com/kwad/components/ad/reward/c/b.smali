.class public Lcom/kwad/components/ad/reward/c/b;
.super Lcom/kwad/sdk/core/response/a/a;


# static fields
.field public static STATUS_NONE:I = 0x2

.field public static rt:I = 0x1

.field public static ru:I = 0x3


# instance fields
.field public rv:I

.field public rw:I


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/a/a;-><init>()V

    sget v0, Lcom/kwad/components/ad/reward/c/b;->STATUS_NONE:I

    iput v0, p0, Lcom/kwad/components/ad/reward/c/b;->rv:I

    return-void
.end method

.method public constructor <init>(I)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/a/a;-><init>()V

    sget p1, Lcom/kwad/components/ad/reward/c/b;->STATUS_NONE:I

    iput p1, p0, Lcom/kwad/components/ad/reward/c/b;->rv:I

    const/4 p1, 0x1

    iput p1, p0, Lcom/kwad/components/ad/reward/c/b;->rv:I

    return-void
.end method


# virtual methods
.method public final L(I)V
    .locals 0

    iput p1, p0, Lcom/kwad/components/ad/reward/c/b;->rw:I

    return-void
.end method

.method public final gZ()I
    .locals 1

    iget v0, p0, Lcom/kwad/components/ad/reward/c/b;->rw:I

    return v0
.end method

.method public final getType()I
    .locals 1

    iget v0, p0, Lcom/kwad/components/ad/reward/c/b;->rv:I

    return v0
.end method
