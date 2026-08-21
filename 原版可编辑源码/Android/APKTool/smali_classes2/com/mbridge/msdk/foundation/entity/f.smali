.class public final Lcom/mbridge/msdk/foundation/entity/f;
.super Ljava/lang/Object;
.source "DlInfo.java"


# instance fields
.field private a:Ljava/lang/String;

.field private b:Ljava/lang/String;

.field private c:Ljava/lang/String;

.field private d:Ljava/lang/String;

.field private e:Ljava/lang/String;

.field private f:Ljava/lang/String;

.field private g:Ljava/lang/String;

.field private h:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 3
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()Ljava/lang/String;
    .locals 1

    .line 15
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/f;->a:Ljava/lang/String;

    return-object v0
.end method

.method public final a(Ljava/lang/String;)V
    .locals 0

    .line 19
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/f;->a:Ljava/lang/String;

    return-void
.end method

.method public final b()Ljava/lang/String;
    .locals 1

    .line 23
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/f;->b:Ljava/lang/String;

    return-object v0
.end method

.method public final b(Ljava/lang/String;)V
    .locals 0

    .line 27
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/f;->b:Ljava/lang/String;

    return-void
.end method

.method public final c()Ljava/lang/String;
    .locals 1

    .line 31
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/f;->c:Ljava/lang/String;

    return-object v0
.end method

.method public final c(Ljava/lang/String;)V
    .locals 0

    .line 35
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/f;->c:Ljava/lang/String;

    return-void
.end method

.method public final d()Ljava/lang/String;
    .locals 1

    .line 39
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/f;->d:Ljava/lang/String;

    return-object v0
.end method

.method public final d(Ljava/lang/String;)V
    .locals 0

    .line 43
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/f;->d:Ljava/lang/String;

    return-void
.end method

.method public final e()Ljava/lang/String;
    .locals 1

    .line 47
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/f;->h:Ljava/lang/String;

    return-object v0
.end method

.method public final e(Ljava/lang/String;)V
    .locals 0

    .line 51
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/f;->h:Ljava/lang/String;

    return-void
.end method

.method public final f()Ljava/lang/String;
    .locals 1

    .line 55
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/f;->e:Ljava/lang/String;

    return-object v0
.end method

.method public final f(Ljava/lang/String;)V
    .locals 0

    .line 59
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/f;->e:Ljava/lang/String;

    return-void
.end method

.method public final g()Ljava/lang/String;
    .locals 1

    .line 63
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/f;->g:Ljava/lang/String;

    return-object v0
.end method

.method public final g(Ljava/lang/String;)V
    .locals 0

    .line 67
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/f;->g:Ljava/lang/String;

    return-void
.end method

.method public final h()Ljava/lang/String;
    .locals 1

    .line 71
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/f;->f:Ljava/lang/String;

    return-object v0
.end method

.method public final h(Ljava/lang/String;)V
    .locals 0

    .line 75
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/f;->f:Ljava/lang/String;

    return-void
.end method

.method public final toString()Ljava/lang/String;
    .locals 3

    .line 80
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "{savePath:\'"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/foundation/entity/f;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/16 v1, 0x27

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    const-string v2, ", dlUrl:\'"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/foundation/entity/f;->b:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    const-string v2, ", uniqueKey:\'"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/foundation/entity/f;->c:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    const-string v2, ", rid:\'"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/foundation/entity/f;->d:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    const-string v2, ", packageName:\'"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/foundation/entity/f;->h:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    const/16 v1, 0x7d

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
