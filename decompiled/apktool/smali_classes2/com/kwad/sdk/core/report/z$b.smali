.class public Lcom/kwad/sdk/core/report/z$b;
.super Lcom/kwad/sdk/core/response/a/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/core/report/z;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "b"
.end annotation


# instance fields
.field public Kh:J

.field public UP:Ljava/lang/String;

.field public adnName:Ljava/lang/String;

.field public adnType:I

.field public adxResult:I

.field public arz:I

.field public asS:I

.field public asT:I

.field public asU:I

.field public asV:I

.field public asW:Ljava/lang/String;

.field public asX:J

.field public asY:I

.field public asZ:J

.field public atA:I

.field public atB:I

.field public atC:I

.field public atD:I

.field public atE:I

.field public atF:Ljava/lang/String;

.field public ata:I

.field public atb:I

.field public atc:I

.field public atd:Ljava/lang/String;

.field public ate:I

.field public atf:I

.field public atg:Ljava/lang/String;

.field public ath:Ljava/lang/String;

.field public ati:I

.field public atj:Ljava/lang/String;

.field public atk:Ljava/lang/String;

.field public atl:I

.field public atm:I

.field public atn:J

.field public ato:J

.field public atp:I

.field public atq:I

.field public atr:I

.field public ats:I

.field public att:Lcom/kwad/sdk/core/report/z$a;

.field public atu:I

.field public atv:I

.field public atw:I

.field public atx:I

.field public aty:Ljava/lang/String;

.field public atz:I

.field public downloadSource:I

.field public jG:I

.field public jI:Lcom/kwad/sdk/utils/ac$a;

.field public jJ:D

.field public vy:J


# direct methods
.method public constructor <init>()V
    .locals 3

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/a/a;-><init>()V

    const-wide/16 v0, -0x1

    iput-wide v0, p0, Lcom/kwad/sdk/core/report/z$b;->asX:J

    const/4 v2, -0x1

    iput v2, p0, Lcom/kwad/sdk/core/report/z$b;->asY:I

    iput-wide v0, p0, Lcom/kwad/sdk/core/report/z$b;->asZ:J

    iput v2, p0, Lcom/kwad/sdk/core/report/z$b;->ata:I

    const/4 v0, 0x0

    iput v0, p0, Lcom/kwad/sdk/core/report/z$b;->atb:I

    const-string v1, ""

    iput-object v1, p0, Lcom/kwad/sdk/core/report/z$b;->atg:Ljava/lang/String;

    iput v2, p0, Lcom/kwad/sdk/core/report/z$b;->atp:I

    iput v2, p0, Lcom/kwad/sdk/core/report/z$b;->atq:I

    iput v0, p0, Lcom/kwad/sdk/core/report/z$b;->atr:I

    iput v2, p0, Lcom/kwad/sdk/core/report/z$b;->atw:I

    iput v2, p0, Lcom/kwad/sdk/core/report/z$b;->atx:I

    iput v2, p0, Lcom/kwad/sdk/core/report/z$b;->atz:I

    iput v2, p0, Lcom/kwad/sdk/core/report/z$b;->adxResult:I

    iput v2, p0, Lcom/kwad/sdk/core/report/z$b;->atD:I

    iput v0, p0, Lcom/kwad/sdk/core/report/z$b;->atE:I

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/core/report/k;)V
    .locals 0

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Lcom/kwad/sdk/core/report/k;->Cc()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/sdk/core/report/z$b;->atF:Ljava/lang/String;

    :cond_0
    return-void
.end method

.method public final cu(I)V
    .locals 2

    const/4 v0, 0x1

    if-eqz p1, :cond_2

    const/4 v1, 0x2

    if-eq p1, v0, :cond_1

    if-eq p1, v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 p1, 0x3

    iput p1, p0, Lcom/kwad/sdk/core/report/z$b;->atB:I

    :goto_0
    return-void

    :cond_1
    iput v1, p0, Lcom/kwad/sdk/core/report/z$b;->atB:I

    return-void

    :cond_2
    iput v0, p0, Lcom/kwad/sdk/core/report/z$b;->atB:I

    return-void
.end method
