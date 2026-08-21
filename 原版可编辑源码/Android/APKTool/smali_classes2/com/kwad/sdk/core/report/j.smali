.class public final Lcom/kwad/sdk/core/report/j;
.super Ljava/lang/Object;


# instance fields
.field private aqY:Lcom/kwad/sdk/core/report/z$b;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Lcom/kwad/sdk/core/report/z$b;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/z$b;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/report/j;->aqY:Lcom/kwad/sdk/core/report/z$b;

    return-void
.end method

.method private Cb()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/core/report/j;->aqY:Lcom/kwad/sdk/core/report/z$b;

    iget-object v0, v0, Lcom/kwad/sdk/core/report/z$b;->att:Lcom/kwad/sdk/core/report/z$a;

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/core/report/j;->aqY:Lcom/kwad/sdk/core/report/z$b;

    new-instance v1, Lcom/kwad/sdk/core/report/z$a;

    invoke-direct {v1}, Lcom/kwad/sdk/core/report/z$a;-><init>()V

    iput-object v1, v0, Lcom/kwad/sdk/core/report/z$b;->att:Lcom/kwad/sdk/core/report/z$a;

    :cond_0
    return-void
.end method


# virtual methods
.method public final Ca()Lcom/kwad/sdk/core/report/z$b;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/report/j;->aqY:Lcom/kwad/sdk/core/report/z$b;

    return-object v0
.end method

.method public final a(Lcom/kwad/sdk/core/report/z$a;)Lcom/kwad/sdk/core/report/j;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/report/j;->aqY:Lcom/kwad/sdk/core/report/z$b;

    iput-object p1, v0, Lcom/kwad/sdk/core/report/z$b;->att:Lcom/kwad/sdk/core/report/z$a;

    return-object p0
.end method

.method public final a(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;Ljava/lang/String;Lcom/kwad/sdk/g/a;)Lcom/kwad/sdk/core/report/j;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/kwad/sdk/core/response/model/AdTemplate;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Lcom/kwad/sdk/g/a<",
            "Lcom/kwad/sdk/core/report/AdTrackLog;",
            ">;)",
            "Lcom/kwad/sdk/core/report/j;"
        }
    .end annotation

    invoke-direct {p0}, Lcom/kwad/sdk/core/report/j;->Cb()V

    iget-object v0, p0, Lcom/kwad/sdk/core/report/j;->aqY:Lcom/kwad/sdk/core/report/z$b;

    iget-object v0, v0, Lcom/kwad/sdk/core/report/z$b;->att:Lcom/kwad/sdk/core/report/z$a;

    invoke-virtual {v0, p1, p2, p3}, Lcom/kwad/sdk/core/report/z$a;->c(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;Ljava/lang/String;)Lcom/kwad/sdk/core/report/AdTrackLog;

    if-eqz p4, :cond_0

    iget-object p1, p0, Lcom/kwad/sdk/core/report/j;->aqY:Lcom/kwad/sdk/core/report/z$b;

    iget-object p1, p1, Lcom/kwad/sdk/core/report/z$b;->att:Lcom/kwad/sdk/core/report/z$a;

    iget-object p1, p1, Lcom/kwad/sdk/core/report/z$a;->asR:Lcom/kwad/sdk/core/report/AdTrackLog;

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/sdk/core/report/j;->aqY:Lcom/kwad/sdk/core/report/z$b;

    iget-object p1, p1, Lcom/kwad/sdk/core/report/z$b;->att:Lcom/kwad/sdk/core/report/z$a;

    iget-object p1, p1, Lcom/kwad/sdk/core/report/z$a;->asR:Lcom/kwad/sdk/core/report/AdTrackLog;

    invoke-interface {p4, p1}, Lcom/kwad/sdk/g/a;->accept(Ljava/lang/Object;)V

    :cond_0
    return-object p0
.end method

.method public final af(J)Lcom/kwad/sdk/core/report/j;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/report/j;->aqY:Lcom/kwad/sdk/core/report/z$b;

    iput-wide p1, v0, Lcom/kwad/sdk/core/report/z$b;->vy:J

    return-object p0
.end method

.method public final c(Lcom/kwad/sdk/utils/ac$a;)Lcom/kwad/sdk/core/report/j;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/report/j;->aqY:Lcom/kwad/sdk/core/report/z$b;

    iput-object p1, v0, Lcom/kwad/sdk/core/report/z$b;->jI:Lcom/kwad/sdk/utils/ac$a;

    return-object p0
.end method

.method public final cg(I)Lcom/kwad/sdk/core/report/j;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/report/j;->aqY:Lcom/kwad/sdk/core/report/z$b;

    iput p1, v0, Lcom/kwad/sdk/core/report/z$b;->jG:I

    return-object p0
.end method

.method public final ch(I)Lcom/kwad/sdk/core/report/j;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/report/j;->aqY:Lcom/kwad/sdk/core/report/z$b;

    iput p1, v0, Lcom/kwad/sdk/core/report/z$b;->asU:I

    return-object p0
.end method

.method public final ci(I)Lcom/kwad/sdk/core/report/j;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/report/j;->aqY:Lcom/kwad/sdk/core/report/z$b;

    iput p1, v0, Lcom/kwad/sdk/core/report/z$b;->asV:I

    return-object p0
.end method

.method public final cj(I)Lcom/kwad/sdk/core/report/j;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/report/j;->aqY:Lcom/kwad/sdk/core/report/z$b;

    iput p1, v0, Lcom/kwad/sdk/core/report/z$b;->arz:I

    return-object p0
.end method

.method public final ck(I)Lcom/kwad/sdk/core/report/j;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/report/j;->aqY:Lcom/kwad/sdk/core/report/z$b;

    iput p1, v0, Lcom/kwad/sdk/core/report/z$b;->ata:I

    return-object p0
.end method

.method public final cl(I)Lcom/kwad/sdk/core/report/j;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/report/j;->aqY:Lcom/kwad/sdk/core/report/z$b;

    iput p1, v0, Lcom/kwad/sdk/core/report/z$b;->atv:I

    return-object p0
.end method

.method public final cm(I)Lcom/kwad/sdk/core/report/j;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/report/j;->aqY:Lcom/kwad/sdk/core/report/z$b;

    iput p1, v0, Lcom/kwad/sdk/core/report/z$b;->atA:I

    return-object p0
.end method

.method public final cn(I)Lcom/kwad/sdk/core/report/j;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/report/j;->aqY:Lcom/kwad/sdk/core/report/z$b;

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/core/report/z$b;->cu(I)V

    return-object p0
.end method

.method public final co(I)Lcom/kwad/sdk/core/report/j;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/report/j;->aqY:Lcom/kwad/sdk/core/report/z$b;

    iput p1, v0, Lcom/kwad/sdk/core/report/z$b;->atC:I

    return-object p0
.end method

.method public final cp(I)Lcom/kwad/sdk/core/report/j;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/report/j;->aqY:Lcom/kwad/sdk/core/report/z$b;

    iput p1, v0, Lcom/kwad/sdk/core/report/z$b;->atD:I

    return-object p0
.end method

.method public final cq(I)Lcom/kwad/sdk/core/report/j;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/report/j;->aqY:Lcom/kwad/sdk/core/report/z$b;

    iput p1, v0, Lcom/kwad/sdk/core/report/z$b;->atE:I

    return-object p0
.end method

.method public final cr(I)Lcom/kwad/sdk/core/report/j;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/report/j;->aqY:Lcom/kwad/sdk/core/report/z$b;

    iput p1, v0, Lcom/kwad/sdk/core/report/z$b;->atb:I

    return-object p0
.end method

.method public final dt(Ljava/lang/String;)Lcom/kwad/sdk/core/report/j;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/report/j;->aqY:Lcom/kwad/sdk/core/report/z$b;

    iput-object p1, v0, Lcom/kwad/sdk/core/report/z$b;->UP:Ljava/lang/String;

    return-object p0
.end method

.method public final du(Ljava/lang/String;)Lcom/kwad/sdk/core/report/j;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/report/j;->aqY:Lcom/kwad/sdk/core/report/z$b;

    iput-object p1, v0, Lcom/kwad/sdk/core/report/z$b;->aty:Ljava/lang/String;

    return-object p0
.end method

.method public final i(D)Lcom/kwad/sdk/core/report/j;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/report/j;->aqY:Lcom/kwad/sdk/core/report/z$b;

    iput-wide p1, v0, Lcom/kwad/sdk/core/report/z$b;->jJ:D

    return-object p0
.end method

.method public final t(II)Lcom/kwad/sdk/core/report/j;
    .locals 1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, ","

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    iget-object p2, p0, Lcom/kwad/sdk/core/report/j;->aqY:Lcom/kwad/sdk/core/report/z$b;

    iput-object p1, p2, Lcom/kwad/sdk/core/report/z$b;->asW:Ljava/lang/String;

    return-object p0
.end method
