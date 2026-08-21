.class public final Lcom/loc/fa;
.super Ljava/lang/Object;
.source "Cgi.java"


# instance fields
.field public a:I

.field public b:I

.field public c:I

.field public d:I

.field public e:J

.field public f:I

.field public g:I

.field public h:I

.field public i:I

.field public j:I

.field public k:I

.field public l:I

.field public m:S

.field public n:Z

.field public o:I

.field public p:I

.field public q:I

.field public r:Z

.field public s:I

.field public t:J


# direct methods
.method public constructor <init>(IZ)V
    .locals 4

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput v0, p0, Lcom/loc/fa;->a:I

    iput v0, p0, Lcom/loc/fa;->b:I

    iput v0, p0, Lcom/loc/fa;->c:I

    iput v0, p0, Lcom/loc/fa;->d:I

    const-wide/16 v1, 0x0

    iput-wide v1, p0, Lcom/loc/fa;->e:J

    iput v0, p0, Lcom/loc/fa;->f:I

    iput v0, p0, Lcom/loc/fa;->g:I

    iput v0, p0, Lcom/loc/fa;->h:I

    iput v0, p0, Lcom/loc/fa;->i:I

    iput v0, p0, Lcom/loc/fa;->j:I

    const/16 v3, -0x71

    iput v3, p0, Lcom/loc/fa;->k:I

    iput v0, p0, Lcom/loc/fa;->l:I

    iput-short v0, p0, Lcom/loc/fa;->m:S

    iput-boolean v0, p0, Lcom/loc/fa;->n:Z

    const/16 v0, 0x7fff

    iput v0, p0, Lcom/loc/fa;->o:I

    const v0, 0x7fffffff

    iput v0, p0, Lcom/loc/fa;->p:I

    iput v0, p0, Lcom/loc/fa;->q:I

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/loc/fa;->r:Z

    const/16 v0, 0x63

    iput v0, p0, Lcom/loc/fa;->s:I

    iput-wide v1, p0, Lcom/loc/fa;->t:J

    iput p1, p0, Lcom/loc/fa;->l:I

    iput-boolean p2, p0, Lcom/loc/fa;->n:Z

    return-void
.end method

.method private e()Ljava/lang/String;
    .locals 5

    iget v0, p0, Lcom/loc/fa;->l:I

    const/4 v1, 0x5

    const-wide/16 v0, 0x0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget v3, p0, Lcom/loc/fa;->l:I

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, "#"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v4, p0, Lcom/loc/fa;->a:I

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v4, p0, Lcom/loc/fa;->b:I

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0, v1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/loc/fa;->a()J

    move-result-wide v0

    invoke-virtual {v2, v0, v1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method private f()Ljava/lang/String;
    .locals 3

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget v1, p0, Lcom/loc/fa;->l:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "#"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/loc/fa;->h:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/loc/fa;->i:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/loc/fa;->j:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method


# virtual methods
.method public final a()J
    .locals 2

    iget v0, p0, Lcom/loc/fa;->l:I

    const/4 v1, 0x5

    if-ne v0, v1, :cond_0

    iget-wide v0, p0, Lcom/loc/fa;->e:J

    return-wide v0

    :cond_0
    iget v0, p0, Lcom/loc/fa;->d:I

    int-to-long v0, v0

    return-wide v0
.end method

.method public final b()Ljava/lang/String;
    .locals 2

    iget v0, p0, Lcom/loc/fa;->l:I

    const/4 v1, 0x1

    if-eq v0, v1, :cond_1

    const/4 v1, 0x2

    if-eq v0, v1, :cond_0

    const/4 v1, 0x3

    if-eq v0, v1, :cond_1

    const/4 v1, 0x4

    if-eq v0, v1, :cond_1

    const/4 v1, 0x5

    if-eq v0, v1, :cond_1

    const/4 v0, 0x0

    return-object v0

    :cond_0
    invoke-direct {p0}, Lcom/loc/fa;->f()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_1
    invoke-direct {p0}, Lcom/loc/fa;->e()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final c()Ljava/lang/String;
    .locals 3

    invoke-virtual {p0}, Lcom/loc/fa;->b()Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v1

    if-lez v1, :cond_0

    iget-boolean v1, p0, Lcom/loc/fa;->r:Z

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "#"

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const-string v0, ""

    return-object v0
.end method

.method protected final synthetic clone()Ljava/lang/Object;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/CloneNotSupportedException;
        }
    .end annotation

    invoke-virtual {p0}, Lcom/loc/fa;->d()Lcom/loc/fa;

    move-result-object v0

    return-object v0
.end method

.method protected final d()Lcom/loc/fa;
    .locals 3

    new-instance v0, Lcom/loc/fa;

    iget v1, p0, Lcom/loc/fa;->l:I

    iget-boolean v2, p0, Lcom/loc/fa;->n:Z

    invoke-direct {v0, v1, v2}, Lcom/loc/fa;-><init>(IZ)V

    iget v1, p0, Lcom/loc/fa;->a:I

    iput v1, v0, Lcom/loc/fa;->a:I

    iget v1, p0, Lcom/loc/fa;->b:I

    iput v1, v0, Lcom/loc/fa;->b:I

    iget v1, p0, Lcom/loc/fa;->c:I

    iput v1, v0, Lcom/loc/fa;->c:I

    iget v1, p0, Lcom/loc/fa;->d:I

    iput v1, v0, Lcom/loc/fa;->d:I

    iget-wide v1, p0, Lcom/loc/fa;->e:J

    iput-wide v1, v0, Lcom/loc/fa;->e:J

    iget v1, p0, Lcom/loc/fa;->f:I

    iput v1, v0, Lcom/loc/fa;->f:I

    iget v1, p0, Lcom/loc/fa;->g:I

    iput v1, v0, Lcom/loc/fa;->g:I

    iget v1, p0, Lcom/loc/fa;->h:I

    iput v1, v0, Lcom/loc/fa;->h:I

    iget v1, p0, Lcom/loc/fa;->i:I

    iput v1, v0, Lcom/loc/fa;->i:I

    iget v1, p0, Lcom/loc/fa;->j:I

    iput v1, v0, Lcom/loc/fa;->j:I

    iget v1, p0, Lcom/loc/fa;->k:I

    iput v1, v0, Lcom/loc/fa;->k:I

    iget-short v1, p0, Lcom/loc/fa;->m:S

    iput-short v1, v0, Lcom/loc/fa;->m:S

    iget v1, p0, Lcom/loc/fa;->o:I

    iput v1, v0, Lcom/loc/fa;->o:I

    iget v1, p0, Lcom/loc/fa;->p:I

    iput v1, v0, Lcom/loc/fa;->p:I

    iget v1, p0, Lcom/loc/fa;->q:I

    iput v1, v0, Lcom/loc/fa;->q:I

    iget-boolean v1, p0, Lcom/loc/fa;->r:Z

    iput-boolean v1, v0, Lcom/loc/fa;->r:Z

    iget v1, p0, Lcom/loc/fa;->s:I

    iput v1, v0, Lcom/loc/fa;->s:I

    iget-wide v1, p0, Lcom/loc/fa;->t:J

    iput-wide v1, v0, Lcom/loc/fa;->t:J

    return-object v0
.end method

.method public final equals(Ljava/lang/Object;)Z
    .locals 7

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return v0

    :cond_0
    instance-of v1, p1, Lcom/loc/fa;

    if-eqz v1, :cond_f

    check-cast p1, Lcom/loc/fa;

    iget v1, p1, Lcom/loc/fa;->l:I

    const/4 v2, 0x1

    if-eq v1, v2, :cond_d

    const/4 v3, 0x2

    if-eq v1, v3, :cond_a

    const/4 v3, 0x3

    if-eq v1, v3, :cond_7

    const/4 v3, 0x4

    if-eq v1, v3, :cond_4

    const/4 v3, 0x5

    if-eq v1, v3, :cond_1

    return v0

    :cond_1
    iget v1, p0, Lcom/loc/fa;->l:I

    if-eq v1, v3, :cond_2

    return v0

    :cond_2
    iget v1, p1, Lcom/loc/fa;->c:I

    iget v3, p0, Lcom/loc/fa;->c:I

    if-ne v1, v3, :cond_3

    iget-wide v3, p1, Lcom/loc/fa;->e:J

    iget-wide v5, p0, Lcom/loc/fa;->e:J

    cmp-long v1, v3, v5

    if-nez v1, :cond_3

    iget p1, p1, Lcom/loc/fa;->q:I

    iget v1, p0, Lcom/loc/fa;->q:I

    if-ne p1, v1, :cond_3

    return v2

    :cond_3
    return v0

    :cond_4
    iget v1, p0, Lcom/loc/fa;->l:I

    if-eq v1, v3, :cond_5

    return v0

    :cond_5
    iget v1, p1, Lcom/loc/fa;->c:I

    iget v3, p0, Lcom/loc/fa;->c:I

    if-ne v1, v3, :cond_6

    iget v1, p1, Lcom/loc/fa;->d:I

    iget v3, p0, Lcom/loc/fa;->d:I

    if-ne v1, v3, :cond_6

    iget p1, p1, Lcom/loc/fa;->b:I

    iget v1, p0, Lcom/loc/fa;->b:I

    if-ne p1, v1, :cond_6

    return v2

    :cond_6
    return v0

    :cond_7
    iget v1, p0, Lcom/loc/fa;->l:I

    if-eq v1, v3, :cond_8

    return v0

    :cond_8
    iget v1, p1, Lcom/loc/fa;->c:I

    iget v3, p0, Lcom/loc/fa;->c:I

    if-ne v1, v3, :cond_9

    iget v1, p1, Lcom/loc/fa;->d:I

    iget v3, p0, Lcom/loc/fa;->d:I

    if-ne v1, v3, :cond_9

    iget p1, p1, Lcom/loc/fa;->b:I

    iget v1, p0, Lcom/loc/fa;->b:I

    if-ne p1, v1, :cond_9

    return v2

    :cond_9
    return v0

    :cond_a
    iget v1, p0, Lcom/loc/fa;->l:I

    if-eq v1, v3, :cond_b

    return v0

    :cond_b
    iget v1, p1, Lcom/loc/fa;->j:I

    iget v3, p0, Lcom/loc/fa;->j:I

    if-ne v1, v3, :cond_c

    iget v1, p1, Lcom/loc/fa;->i:I

    iget v3, p0, Lcom/loc/fa;->i:I

    if-ne v1, v3, :cond_c

    iget p1, p1, Lcom/loc/fa;->h:I

    iget v1, p0, Lcom/loc/fa;->h:I

    if-ne p1, v1, :cond_c

    return v2

    :cond_c
    return v0

    :cond_d
    iget v1, p0, Lcom/loc/fa;->l:I

    if-eq v1, v2, :cond_e

    return v0

    :cond_e
    iget v1, p1, Lcom/loc/fa;->c:I

    iget v3, p0, Lcom/loc/fa;->c:I

    if-ne v1, v3, :cond_f

    iget v1, p1, Lcom/loc/fa;->d:I

    iget v3, p0, Lcom/loc/fa;->d:I

    if-ne v1, v3, :cond_f

    iget p1, p1, Lcom/loc/fa;->b:I

    iget v1, p0, Lcom/loc/fa;->b:I

    if-ne p1, v1, :cond_f

    return v2

    :cond_f
    return v0
.end method

.method public final hashCode()I
    .locals 3

    iget v0, p0, Lcom/loc/fa;->l:I

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->hashCode()I

    move-result v0

    iget v1, p0, Lcom/loc/fa;->l:I

    const/4 v2, 0x2

    if-ne v1, v2, :cond_0

    iget v1, p0, Lcom/loc/fa;->j:I

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    iget v2, p0, Lcom/loc/fa;->i:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/String;->hashCode()I

    move-result v2

    add-int/2addr v1, v2

    iget v2, p0, Lcom/loc/fa;->h:I

    goto :goto_0

    :cond_0
    iget v1, p0, Lcom/loc/fa;->c:I

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    iget v2, p0, Lcom/loc/fa;->d:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/String;->hashCode()I

    move-result v2

    add-int/2addr v1, v2

    iget v2, p0, Lcom/loc/fa;->b:I

    :goto_0
    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/String;->hashCode()I

    move-result v2

    add-int/2addr v1, v2

    add-int/2addr v0, v1

    return v0
.end method
