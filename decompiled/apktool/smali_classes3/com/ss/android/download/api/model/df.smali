.class public Lcom/ss/android/download/api/model/df;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/download/api/model/df$rg;
    }
.end annotation


# instance fields
.field private final b:I

.field private final bm:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private final c:Ljava/lang/String;

.field private final df:Ljava/lang/String;

.field private final f:Z

.field private final fw:J

.field private final hq:Ljava/lang/Object;

.field private final oh:Ljava/lang/String;

.field private final pp:J

.field private final pt:Z

.field private final q:Ljava/lang/String;

.field private rg:Ljava/lang/String;

.field private final rz:Lorg/json/JSONObject;

.field private final un:Lorg/json/JSONObject;

.field private final ux:Lorg/json/JSONObject;

.field private final v:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/ss/android/download/api/model/df$rg;)V
    .locals 2

    .line 91
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 92
    invoke-static {p1}, Lcom/ss/android/download/api/model/df$rg;->rg(Lcom/ss/android/download/api/model/df$rg;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/download/api/model/df;->rg:Ljava/lang/String;

    .line 93
    invoke-static {p1}, Lcom/ss/android/download/api/model/df$rg;->df(Lcom/ss/android/download/api/model/df$rg;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/download/api/model/df;->df:Ljava/lang/String;

    .line 94
    invoke-static {p1}, Lcom/ss/android/download/api/model/df$rg;->q(Lcom/ss/android/download/api/model/df$rg;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/download/api/model/df;->q:Ljava/lang/String;

    .line 95
    invoke-static {p1}, Lcom/ss/android/download/api/model/df$rg;->pt(Lcom/ss/android/download/api/model/df$rg;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/ss/android/download/api/model/df;->pt:Z

    .line 96
    invoke-static {p1}, Lcom/ss/android/download/api/model/df$rg;->pp(Lcom/ss/android/download/api/model/df$rg;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/ss/android/download/api/model/df;->pp:J

    .line 97
    invoke-static {p1}, Lcom/ss/android/download/api/model/df$rg;->c(Lcom/ss/android/download/api/model/df$rg;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/download/api/model/df;->c:Ljava/lang/String;

    .line 98
    invoke-static {p1}, Lcom/ss/android/download/api/model/df$rg;->fw(Lcom/ss/android/download/api/model/df$rg;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/ss/android/download/api/model/df;->fw:J

    .line 99
    invoke-static {p1}, Lcom/ss/android/download/api/model/df$rg;->ux(Lcom/ss/android/download/api/model/df$rg;)Lorg/json/JSONObject;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/download/api/model/df;->ux:Lorg/json/JSONObject;

    .line 100
    invoke-static {p1}, Lcom/ss/android/download/api/model/df$rg;->rz(Lcom/ss/android/download/api/model/df$rg;)Lorg/json/JSONObject;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/download/api/model/df;->rz:Lorg/json/JSONObject;

    .line 101
    invoke-static {p1}, Lcom/ss/android/download/api/model/df$rg;->bm(Lcom/ss/android/download/api/model/df$rg;)Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/download/api/model/df;->bm:Ljava/util/List;

    .line 102
    invoke-static {p1}, Lcom/ss/android/download/api/model/df$rg;->b(Lcom/ss/android/download/api/model/df$rg;)I

    move-result v0

    iput v0, p0, Lcom/ss/android/download/api/model/df;->b:I

    .line 103
    invoke-static {p1}, Lcom/ss/android/download/api/model/df$rg;->hq(Lcom/ss/android/download/api/model/df$rg;)Ljava/lang/Object;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/download/api/model/df;->hq:Ljava/lang/Object;

    .line 104
    invoke-static {p1}, Lcom/ss/android/download/api/model/df$rg;->oh(Lcom/ss/android/download/api/model/df$rg;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/ss/android/download/api/model/df;->f:Z

    .line 105
    invoke-static {p1}, Lcom/ss/android/download/api/model/df$rg;->f(Lcom/ss/android/download/api/model/df$rg;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/download/api/model/df;->v:Ljava/lang/String;

    .line 106
    invoke-static {p1}, Lcom/ss/android/download/api/model/df$rg;->v(Lcom/ss/android/download/api/model/df$rg;)Lorg/json/JSONObject;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/download/api/model/df;->un:Lorg/json/JSONObject;

    .line 107
    invoke-static {p1}, Lcom/ss/android/download/api/model/df$rg;->un(Lcom/ss/android/download/api/model/df$rg;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/ss/android/download/api/model/df;->oh:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public b()I
    .locals 1

    .line 313
    iget v0, p0, Lcom/ss/android/download/api/model/df;->b:I

    return v0
.end method

.method public bm()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 309
    iget-object v0, p0, Lcom/ss/android/download/api/model/df;->bm:Ljava/util/List;

    return-object v0
.end method

.method public c()Ljava/lang/String;
    .locals 1

    .line 293
    iget-object v0, p0, Lcom/ss/android/download/api/model/df;->c:Ljava/lang/String;

    return-object v0
.end method

.method public df()Ljava/lang/String;
    .locals 1

    .line 277
    iget-object v0, p0, Lcom/ss/android/download/api/model/df;->df:Ljava/lang/String;

    return-object v0
.end method

.method public f()Ljava/lang/String;
    .locals 1

    .line 325
    iget-object v0, p0, Lcom/ss/android/download/api/model/df;->v:Ljava/lang/String;

    return-object v0
.end method

.method public fw()J
    .locals 2

    .line 297
    iget-wide v0, p0, Lcom/ss/android/download/api/model/df;->fw:J

    return-wide v0
.end method

.method public hq()Ljava/lang/Object;
    .locals 1

    .line 317
    iget-object v0, p0, Lcom/ss/android/download/api/model/df;->hq:Ljava/lang/Object;

    return-object v0
.end method

.method public oh()Z
    .locals 1

    .line 321
    iget-boolean v0, p0, Lcom/ss/android/download/api/model/df;->f:Z

    return v0
.end method

.method public pp()J
    .locals 2

    .line 289
    iget-wide v0, p0, Lcom/ss/android/download/api/model/df;->pp:J

    return-wide v0
.end method

.method public pt()Z
    .locals 1

    .line 285
    iget-boolean v0, p0, Lcom/ss/android/download/api/model/df;->pt:Z

    return v0
.end method

.method public q()Ljava/lang/String;
    .locals 1

    .line 281
    iget-object v0, p0, Lcom/ss/android/download/api/model/df;->q:Ljava/lang/String;

    return-object v0
.end method

.method public rg()Ljava/lang/String;
    .locals 1

    .line 273
    iget-object v0, p0, Lcom/ss/android/download/api/model/df;->rg:Ljava/lang/String;

    return-object v0
.end method

.method public rz()Lorg/json/JSONObject;
    .locals 1

    .line 305
    iget-object v0, p0, Lcom/ss/android/download/api/model/df;->rz:Lorg/json/JSONObject;

    return-object v0
.end method

.method public toString()Ljava/lang/String;
    .locals 3

    .line 338
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "category: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/ss/android/download/api/model/df;->rg:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "\ttag: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/ss/android/download/api/model/df;->df:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "\tlabel: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/ss/android/download/api/model/df;->q:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "\nisAd: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v1, p0, Lcom/ss/android/download/api/model/df;->pt:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, "\tadId: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v1, p0, Lcom/ss/android/download/api/model/df;->pp:J

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, "\tlogExtra: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/ss/android/download/api/model/df;->c:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "\textValue: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v1, p0, Lcom/ss/android/download/api/model/df;->fw:J

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, "\nextJson: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/ss/android/download/api/model/df;->ux:Lorg/json/JSONObject;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, "\nparamsJson: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/ss/android/download/api/model/df;->rz:Lorg/json/JSONObject;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, "\nclickTrackUrl: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/ss/android/download/api/model/df;->bm:Ljava/util/List;

    const-string v2, ""

    if-eqz v1, :cond_0

    .line 347
    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    goto :goto_0

    :cond_0
    move-object v1, v2

    :goto_0
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "\teventSource: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/ss/android/download/api/model/df;->b:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "\textraObject: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/ss/android/download/api/model/df;->hq:Ljava/lang/Object;

    if-eqz v1, :cond_1

    .line 349
    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    goto :goto_1

    :cond_1
    move-object v1, v2

    :goto_1
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "\nisV3: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v1, p0, Lcom/ss/android/download/api/model/df;->f:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, "\tV3EventName: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/ss/android/download/api/model/df;->v:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "\tV3EventParams: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/ss/android/download/api/model/df;->un:Lorg/json/JSONObject;

    if-eqz v1, :cond_2

    .line 352
    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v2

    :cond_2
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public ux()Lorg/json/JSONObject;
    .locals 1

    .line 301
    iget-object v0, p0, Lcom/ss/android/download/api/model/df;->ux:Lorg/json/JSONObject;

    return-object v0
.end method

.method public v()Lorg/json/JSONObject;
    .locals 1

    .line 329
    iget-object v0, p0, Lcom/ss/android/download/api/model/df;->un:Lorg/json/JSONObject;

    return-object v0
.end method
