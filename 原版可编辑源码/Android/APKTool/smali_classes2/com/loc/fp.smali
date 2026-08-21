.class public final Lcom/loc/fp;
.super Ljava/lang/Object;
.source "Req.java"


# static fields
.field protected static I:Ljava/lang/String;

.field protected static K:Ljava/lang/String;


# instance fields
.field protected A:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/loc/fa;",
            ">;"
        }
    .end annotation
.end field

.field protected B:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/loc/fa;",
            ">;"
        }
    .end annotation
.end field

.field protected C:Ljava/lang/String;

.field protected D:Ljava/lang/String;

.field protected E:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/loc/eg;",
            ">;"
        }
    .end annotation
.end field

.field protected F:Ljava/lang/String;

.field protected G:Ljava/lang/String;

.field protected H:[B

.field protected J:Ljava/lang/String;

.field protected L:Ljava/lang/String;

.field protected M:Ljava/lang/String;

.field protected N:Ljava/lang/String;

.field protected O:I

.field final P:I

.field private Q:[B

.field private R:I

.field private S:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/loc/fc;",
            ">;"
        }
    .end annotation
.end field

.field private T:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/loc/fa;",
            ">;"
        }
    .end annotation
.end field

.field public a:Ljava/lang/String;

.field protected b:S

.field protected c:Ljava/lang/String;

.field protected d:Ljava/lang/String;

.field protected e:Ljava/lang/String;

.field protected f:Ljava/lang/String;

.field protected g:Ljava/lang/String;

.field public h:Ljava/lang/String;

.field public i:Ljava/lang/String;

.field protected j:Ljava/lang/String;

.field protected k:Ljava/lang/String;

.field protected l:Ljava/lang/String;

.field protected m:Ljava/lang/String;

.field protected n:Ljava/lang/String;

.field protected o:Ljava/lang/String;

.field protected p:Ljava/lang/String;

.field protected q:Ljava/lang/String;

.field protected r:Ljava/lang/String;

.field protected s:Ljava/lang/String;

.field protected t:Ljava/lang/String;

.field protected u:Ljava/lang/String;

.field protected v:Ljava/lang/String;

.field protected w:Ljava/lang/String;

.field protected x:Ljava/lang/String;

.field protected y:Ljava/lang/String;

.field protected z:I


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 3

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "1"

    iput-object v0, p0, Lcom/loc/fp;->a:Ljava/lang/String;

    const/4 v0, 0x0

    iput-short v0, p0, Lcom/loc/fp;->b:S

    const/4 v1, 0x0

    iput-object v1, p0, Lcom/loc/fp;->c:Ljava/lang/String;

    iput-object v1, p0, Lcom/loc/fp;->d:Ljava/lang/String;

    iput-object v1, p0, Lcom/loc/fp;->e:Ljava/lang/String;

    iput-object v1, p0, Lcom/loc/fp;->f:Ljava/lang/String;

    iput-object v1, p0, Lcom/loc/fp;->g:Ljava/lang/String;

    iput-object v1, p0, Lcom/loc/fp;->h:Ljava/lang/String;

    iput-object v1, p0, Lcom/loc/fp;->i:Ljava/lang/String;

    iput-object v1, p0, Lcom/loc/fp;->j:Ljava/lang/String;

    iput-object v1, p0, Lcom/loc/fp;->k:Ljava/lang/String;

    iput-object v1, p0, Lcom/loc/fp;->l:Ljava/lang/String;

    iput-object v1, p0, Lcom/loc/fp;->m:Ljava/lang/String;

    iput-object v1, p0, Lcom/loc/fp;->n:Ljava/lang/String;

    iput-object v1, p0, Lcom/loc/fp;->o:Ljava/lang/String;

    iput-object v1, p0, Lcom/loc/fp;->p:Ljava/lang/String;

    iput-object v1, p0, Lcom/loc/fp;->q:Ljava/lang/String;

    iput-object v1, p0, Lcom/loc/fp;->r:Ljava/lang/String;

    iput-object v1, p0, Lcom/loc/fp;->s:Ljava/lang/String;

    iput-object v1, p0, Lcom/loc/fp;->t:Ljava/lang/String;

    iput-object v1, p0, Lcom/loc/fp;->u:Ljava/lang/String;

    iput-object v1, p0, Lcom/loc/fp;->v:Ljava/lang/String;

    iput-object v1, p0, Lcom/loc/fp;->w:Ljava/lang/String;

    iput-object v1, p0, Lcom/loc/fp;->x:Ljava/lang/String;

    iput-object v1, p0, Lcom/loc/fp;->y:Ljava/lang/String;

    iput v0, p0, Lcom/loc/fp;->z:I

    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    iput-object v2, p0, Lcom/loc/fp;->A:Ljava/util/ArrayList;

    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    iput-object v2, p0, Lcom/loc/fp;->B:Ljava/util/ArrayList;

    iput-object v1, p0, Lcom/loc/fp;->C:Ljava/lang/String;

    iput-object v1, p0, Lcom/loc/fp;->D:Ljava/lang/String;

    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    iput-object v2, p0, Lcom/loc/fp;->E:Ljava/util/ArrayList;

    iput-object v1, p0, Lcom/loc/fp;->F:Ljava/lang/String;

    iput-object v1, p0, Lcom/loc/fp;->G:Ljava/lang/String;

    iput-object v1, p0, Lcom/loc/fp;->H:[B

    iput-object v1, p0, Lcom/loc/fp;->Q:[B

    iput v0, p0, Lcom/loc/fp;->R:I

    iput-object v1, p0, Lcom/loc/fp;->J:Ljava/lang/String;

    iput-object v1, p0, Lcom/loc/fp;->L:Ljava/lang/String;

    iput-object v1, p0, Lcom/loc/fp;->M:Ljava/lang/String;

    iput-object v1, p0, Lcom/loc/fp;->N:Ljava/lang/String;

    iput v0, p0, Lcom/loc/fp;->O:I

    iput-object v1, p0, Lcom/loc/fp;->S:Ljava/util/List;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    invoke-static {v0}, Ljava/util/Collections;->synchronizedList(Ljava/util/List;)Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/loc/fp;->T:Ljava/util/List;

    const/4 v0, 0x3

    iput v0, p0, Lcom/loc/fp;->P:I

    return-void
.end method

.method private static a(Ljava/lang/String;[BI)I
    .locals 3

    const/4 v0, 0x0

    :try_start_0
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    aput-byte v0, p1, p2

    goto :goto_0

    :cond_0
    const-string v1, "GBK"

    invoke-virtual {p0, v1}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object p0

    array-length v1, p0

    const/16 v2, 0x7f

    if-le v1, v2, :cond_1

    const/16 v1, 0x7f

    :cond_1
    int-to-byte v2, v1

    aput-byte v2, p1, p2

    add-int/lit8 p2, p2, 0x1

    invoke-static {p0, v0, p1, p2, v1}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    add-int/2addr p2, v1

    goto :goto_1

    :catchall_0
    move-exception p0

    const-string v1, "Req"

    const-string v2, "copyContentWithByteLen"

    invoke-static {p0, v1, v2}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    aput-byte v0, p1, p2

    :goto_0
    add-int/lit8 p2, p2, 0x1

    :goto_1
    return p2
.end method

.method private static a(Lcom/loc/fa;Ljava/util/List;)V
    .locals 9
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/loc/fa;",
            "Ljava/util/List<",
            "Lcom/loc/fa;",
            ">;)V"
        }
    .end annotation

    if-eqz p0, :cond_7

    if-nez p1, :cond_0

    goto :goto_2

    :cond_0
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_1

    invoke-interface {p1, p0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void

    :cond_1
    const-wide v1, 0x7fffffffffffffffL

    const/4 v3, 0x0

    const/4 v4, -0x1

    const/4 v5, -0x1

    :goto_0
    if-ge v3, v0, :cond_4

    invoke-interface {p1, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/loc/fa;

    invoke-virtual {p0}, Lcom/loc/fa;->c()Ljava/lang/String;

    move-result-object v7

    if-eqz v7, :cond_2

    invoke-virtual {p0}, Lcom/loc/fa;->c()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6}, Lcom/loc/fa;->c()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v7, v8}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_2

    iget v3, p0, Lcom/loc/fa;->s:I

    iget v5, v6, Lcom/loc/fa;->s:I

    if-eq v3, v5, :cond_5

    iget-wide v7, p0, Lcom/loc/fa;->t:J

    iput-wide v7, v6, Lcom/loc/fa;->t:J

    iget v3, p0, Lcom/loc/fa;->s:I

    iput v3, v6, Lcom/loc/fa;->s:I

    goto :goto_1

    :cond_2
    iget-wide v7, v6, Lcom/loc/fa;->t:J

    invoke-static {v1, v2, v7, v8}, Ljava/lang/Math;->min(JJ)J

    move-result-wide v1

    iget-wide v6, v6, Lcom/loc/fa;->t:J

    cmp-long v8, v1, v6

    if-nez v8, :cond_3

    move v5, v3

    :cond_3
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_4
    move v4, v5

    :cond_5
    :goto_1
    if-ltz v4, :cond_7

    const/4 v3, 0x3

    if-ge v0, v3, :cond_6

    invoke-interface {p1, p0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void

    :cond_6
    iget-wide v5, p0, Lcom/loc/fa;->t:J

    cmp-long v3, v5, v1

    if-lez v3, :cond_7

    if-ge v4, v0, :cond_7

    invoke-interface {p1, v4}, Ljava/util/List;->remove(I)Ljava/lang/Object;

    invoke-interface {p1, p0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_7
    :goto_2
    return-void
.end method

.method private a(Ljava/util/ArrayList;Ljava/util/ArrayList;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/ArrayList<",
            "Lcom/loc/fa;",
            ">;",
            "Ljava/util/ArrayList<",
            "Lcom/loc/fa;",
            ">;)V"
        }
    .end annotation

    if-eqz p2, :cond_1

    invoke-virtual {p2}, Ljava/util/ArrayList;->size()I

    move-result v0

    if-lez v0, :cond_1

    invoke-virtual {p2}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object p2

    :cond_0
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/loc/fa;

    iget-boolean v1, v0, Lcom/loc/fa;->r:Z

    if-eqz v1, :cond_0

    iget-boolean v1, v0, Lcom/loc/fa;->n:Z

    if-eqz v1, :cond_0

    iget-object p1, p0, Lcom/loc/fp;->T:Ljava/util/List;

    invoke-static {v0, p1}, Lcom/loc/fp;->a(Lcom/loc/fa;Ljava/util/List;)V

    return-void

    :cond_1
    if-eqz p1, :cond_2

    invoke-virtual {p1}, Ljava/util/ArrayList;->size()I

    move-result p2

    if-lez p2, :cond_2

    const/4 p2, 0x0

    invoke-virtual {p1, p2}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/loc/fa;

    iget-object p2, p0, Lcom/loc/fp;->T:Ljava/util/List;

    invoke-static {p1, p2}, Lcom/loc/fp;->a(Lcom/loc/fa;Ljava/util/List;)V

    :cond_2
    return-void
.end method

.method private a(Ljava/lang/String;)[B
    .locals 6

    const-string v0, ":"

    invoke-virtual {p1, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x6

    new-array v2, v1, [B

    const/4 v3, 0x0

    if-eqz v0, :cond_0

    :try_start_0
    array-length v4, v0

    if-eq v4, v1, :cond_1

    :cond_0
    new-array v0, v1, [Ljava/lang/String;

    const/4 v4, 0x0

    :goto_0
    if-ge v4, v1, :cond_1

    const-string v5, "0"

    aput-object v5, v0, v4

    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    :cond_1
    const/4 v1, 0x0

    :goto_1
    array-length v4, v0

    if-ge v1, v4, :cond_3

    aget-object v4, v0, v1

    invoke-virtual {v4}, Ljava/lang/String;->length()I

    move-result v4

    const/4 v5, 0x2

    if-le v4, v5, :cond_2

    aget-object v4, v0, v1

    invoke-virtual {v4, v3, v5}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v4

    aput-object v4, v0, v1

    :cond_2
    aget-object v4, v0, v1

    const/16 v5, 0x10

    invoke-static {v4, v5}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;I)I

    move-result v4

    int-to-byte v4, v4

    aput-byte v4, v2, v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    add-int/lit8 v1, v1, 0x1

    goto :goto_1

    :catchall_0
    move-exception v0

    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    const-string v1, "getMacBa "

    invoke-virtual {v1, p1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    const-string v1, "Req"

    invoke-static {v0, v1, p1}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "00:00:00:00:00:00"

    invoke-direct {p0, p1}, Lcom/loc/fp;->a(Ljava/lang/String;)[B

    move-result-object v2

    :cond_3
    return-object v2
.end method

.method private b()V
    .locals 5

    const/16 v0, 0x1b

    new-array v1, v0, [Ljava/lang/String;

    iget-object v2, p0, Lcom/loc/fp;->a:Ljava/lang/String;

    const/4 v3, 0x0

    aput-object v2, v1, v3

    iget-object v2, p0, Lcom/loc/fp;->c:Ljava/lang/String;

    const/4 v4, 0x1

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/loc/fp;->d:Ljava/lang/String;

    const/4 v4, 0x2

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/loc/fp;->e:Ljava/lang/String;

    const/4 v4, 0x3

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/loc/fp;->f:Ljava/lang/String;

    const/4 v4, 0x4

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/loc/fp;->g:Ljava/lang/String;

    const/4 v4, 0x5

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/loc/fp;->h:Ljava/lang/String;

    const/4 v4, 0x6

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/loc/fp;->i:Ljava/lang/String;

    const/4 v4, 0x7

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/loc/fp;->l:Ljava/lang/String;

    const/16 v4, 0x8

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/loc/fp;->m:Ljava/lang/String;

    const/16 v4, 0x9

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/loc/fp;->n:Ljava/lang/String;

    const/16 v4, 0xa

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/loc/fp;->o:Ljava/lang/String;

    const/16 v4, 0xb

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/loc/fp;->p:Ljava/lang/String;

    const/16 v4, 0xc

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/loc/fp;->q:Ljava/lang/String;

    const/16 v4, 0xd

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/loc/fp;->r:Ljava/lang/String;

    const/16 v4, 0xe

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/loc/fp;->s:Ljava/lang/String;

    const/16 v4, 0xf

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/loc/fp;->t:Ljava/lang/String;

    const/16 v4, 0x10

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/loc/fp;->u:Ljava/lang/String;

    const/16 v4, 0x11

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/loc/fp;->v:Ljava/lang/String;

    const/16 v4, 0x12

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/loc/fp;->w:Ljava/lang/String;

    const/16 v4, 0x13

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/loc/fp;->x:Ljava/lang/String;

    const/16 v4, 0x14

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/loc/fp;->D:Ljava/lang/String;

    const/16 v4, 0x15

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/loc/fp;->F:Ljava/lang/String;

    const/16 v4, 0x16

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/loc/fp;->G:Ljava/lang/String;

    const/16 v4, 0x17

    aput-object v2, v1, v4

    sget-object v2, Lcom/loc/fp;->I:Ljava/lang/String;

    const/16 v4, 0x18

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/loc/fp;->M:Ljava/lang/String;

    const/16 v4, 0x19

    aput-object v2, v1, v4

    iget-object v2, p0, Lcom/loc/fp;->N:Ljava/lang/String;

    const/16 v4, 0x1a

    aput-object v2, v1, v4

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v0, :cond_1

    aget-object v4, v1, v2

    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_0

    const-string v4, ""

    aput-object v4, v1, v2

    :cond_0
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_1
    iget-object v0, p0, Lcom/loc/fp;->j:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const-string v1, "2"

    const-string v2, "0"

    if-eqz v0, :cond_2

    :goto_1
    iput-object v2, p0, Lcom/loc/fp;->j:Ljava/lang/String;

    goto :goto_2

    :cond_2
    iget-object v0, p0, Lcom/loc/fp;->j:Ljava/lang/String;

    invoke-virtual {v2, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/loc/fp;->j:Ljava/lang/String;

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_3

    goto :goto_1

    :cond_3
    :goto_2
    iget-object v0, p0, Lcom/loc/fp;->k:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const-string v4, "1"

    if-eqz v0, :cond_4

    :goto_3
    iput-object v2, p0, Lcom/loc/fp;->k:Ljava/lang/String;

    goto :goto_4

    :cond_4
    iget-object v0, p0, Lcom/loc/fp;->k:Ljava/lang/String;

    invoke-virtual {v2, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_5

    iget-object v0, p0, Lcom/loc/fp;->k:Ljava/lang/String;

    invoke-virtual {v4, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_5

    goto :goto_3

    :cond_5
    :goto_4
    iget-object v0, p0, Lcom/loc/fp;->y:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_6

    :goto_5
    iput-object v2, p0, Lcom/loc/fp;->y:Ljava/lang/String;

    goto :goto_6

    :cond_6
    iget-object v0, p0, Lcom/loc/fp;->y:Ljava/lang/String;

    invoke-virtual {v4, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_7

    iget-object v0, p0, Lcom/loc/fp;->y:Ljava/lang/String;

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_7

    goto :goto_5

    :cond_7
    :goto_6
    iget v0, p0, Lcom/loc/fp;->z:I

    invoke-static {v0}, Lcom/loc/fb;->a(I)Z

    move-result v0

    if-nez v0, :cond_8

    iput v3, p0, Lcom/loc/fp;->z:I

    :cond_8
    iget-object v0, p0, Lcom/loc/fp;->H:[B

    if-nez v0, :cond_9

    new-array v0, v3, [B

    iput-object v0, p0, Lcom/loc/fp;->H:[B

    :cond_9
    return-void
.end method


# virtual methods
.method public final a(Landroid/content/Context;ZZLcom/loc/fb;Lcom/loc/ff;Landroid/net/ConnectivityManager;Ljava/lang/String;Lcom/loc/fd;)V
    .locals 18

    move-object/from16 v1, p0

    invoke-static/range {p1 .. p1}, Lcom/loc/l;->f(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    invoke-static {}, Lcom/loc/fz;->d()I

    move-result v3

    move-object/from16 v0, p7

    iput-object v0, v1, Lcom/loc/fp;->J:Ljava/lang/String;

    const/4 v4, 0x0

    iput-object v4, v1, Lcom/loc/fp;->S:Ljava/util/List;

    if-nez p3, :cond_0

    const-string v0, "UC_nlp_20131029"

    const-string v5, "BKZCHMBBSSUK7U8GLUKHBB56CCFF78U"

    goto :goto_0

    :cond_0
    const-string v0, "api_serverSDK_130905"

    const-string v5, "S128DF1572465B890OE3F7A13167KLEI"

    :goto_0
    move-object v6, v5

    move-object v5, v0

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual/range {p4 .. p4}, Lcom/loc/fb;->g()I

    move-result v8

    invoke-virtual/range {p4 .. p4}, Lcom/loc/fb;->h()I

    move-result v0

    invoke-virtual/range {p4 .. p4}, Lcom/loc/fb;->i()Landroid/telephony/TelephonyManager;

    move-result-object v9

    invoke-virtual/range {p4 .. p4}, Lcom/loc/fb;->c()Ljava/util/ArrayList;

    move-result-object v10

    invoke-virtual/range {p4 .. p4}, Lcom/loc/fb;->d()Ljava/util/ArrayList;

    move-result-object v11

    invoke-virtual/range {p5 .. p5}, Lcom/loc/ff;->e()Ljava/util/ArrayList;

    move-result-object v12

    const-string v13, "1"

    const/4 v14, 0x2

    const-string v15, "0"

    if-ne v0, v14, :cond_1

    move-object v4, v13

    goto :goto_1

    :cond_1
    move-object v4, v15

    :goto_1
    const-string v14, "Aps"

    if-eqz v9, :cond_5

    sget-object v0, Lcom/loc/fr;->g:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    :try_start_0
    invoke-static {}, Lcom/loc/o;->k()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/loc/fr;->g:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception v0

    const-string v9, "getApsReq part4"

    invoke-static {v0, v14, v9}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    :goto_2
    sget-object v0, Lcom/loc/fr;->g:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const-string v9, "888888888888888"

    move-object/from16 v16, v13

    const/16 v13, 0x1d

    if-eqz v0, :cond_3

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    if-ge v0, v13, :cond_3

    sput-object v9, Lcom/loc/fr;->g:Ljava/lang/String;

    :cond_3
    sget-object v0, Lcom/loc/fr;->h:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_4

    :try_start_1
    invoke-static {}, Lcom/loc/o;->n()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/loc/fr;->h:Ljava/lang/String;
    :try_end_1
    .catch Ljava/lang/SecurityException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    goto :goto_3

    :catchall_1
    move-exception v0

    const-string v13, "getApsReq part2"

    invoke-static {v0, v14, v13}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_3

    :catch_0
    nop

    :cond_4
    :goto_3
    sget-object v0, Lcom/loc/fr;->h:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_6

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v13, 0x1d

    if-ge v0, v13, :cond_6

    sput-object v9, Lcom/loc/fr;->h:Ljava/lang/String;

    goto :goto_4

    :cond_5
    move-object/from16 v16, v13

    :cond_6
    :goto_4
    :try_start_2
    invoke-virtual/range {p6 .. p6}, Landroid/net/ConnectivityManager;->getActiveNetworkInfo()Landroid/net/NetworkInfo;

    move-result-object v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    goto :goto_5

    :catchall_2
    move-exception v0

    move-object v9, v0

    const-string v0, "getApsReq part"

    invoke-static {v9, v14, v0}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    const/4 v0, 0x0

    :goto_5
    invoke-virtual/range {p5 .. p6}, Lcom/loc/ff;->a(Landroid/net/ConnectivityManager;)Z

    move-result v9

    invoke-static {v0}, Lcom/loc/fz;->a(Landroid/net/NetworkInfo;)I

    move-result v0

    const/4 v13, -0x1

    const-string v14, ""

    if-eq v0, v13, :cond_8

    invoke-static/range {p6 .. p6}, Lcom/loc/fz;->a(Landroid/net/ConnectivityManager;)Ljava/lang/String;

    move-result-object v0

    if-eqz v9, :cond_7

    const-string v13, "2"

    goto :goto_6

    :cond_7
    move-object/from16 v13, v16

    goto :goto_6

    :cond_8
    move-object v0, v14

    move-object v13, v0

    :goto_6
    move-object/from16 v16, v7

    and-int/lit8 v7, v8, 0x4

    move/from16 v17, v8

    const/4 v8, 0x4

    if-ne v7, v8, :cond_9

    invoke-virtual {v11}, Ljava/util/ArrayList;->isEmpty()Z

    move-result v7

    if-nez v7, :cond_9

    iget-object v7, v1, Lcom/loc/fp;->B:Ljava/util/ArrayList;

    invoke-virtual {v7}, Ljava/util/ArrayList;->clear()V

    iget-object v7, v1, Lcom/loc/fp;->B:Ljava/util/ArrayList;

    invoke-virtual {v7, v11}, Ljava/util/ArrayList;->addAll(Ljava/util/Collection;)Z

    goto :goto_7

    :cond_9
    iget-object v7, v1, Lcom/loc/fp;->B:Ljava/util/ArrayList;

    invoke-virtual {v7}, Ljava/util/ArrayList;->clear()V

    :goto_7
    iget-object v7, v1, Lcom/loc/fp;->A:Ljava/util/ArrayList;

    invoke-virtual {v7}, Ljava/util/ArrayList;->clear()V

    iget-object v7, v1, Lcom/loc/fp;->A:Ljava/util/ArrayList;

    invoke-virtual {v7, v10}, Ljava/util/ArrayList;->addAll(Ljava/util/Collection;)Z

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual/range {p5 .. p5}, Lcom/loc/ff;->k()Z

    move-result v8

    if-eqz v8, :cond_e

    if-eqz v9, :cond_d

    invoke-virtual/range {p5 .. p5}, Lcom/loc/ff;->m()Landroid/net/wifi/WifiInfo;

    move-result-object v8

    invoke-static {v8}, Lcom/loc/ff;->a(Landroid/net/wifi/WifiInfo;)Z

    move-result v9

    if-eqz v9, :cond_d

    invoke-virtual {v8}, Landroid/net/wifi/WifiInfo;->getBSSID()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v7, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, ","

    invoke-virtual {v7, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Landroid/net/wifi/WifiInfo;->getRssi()I

    move-result v11

    const/16 v10, -0x80

    if-ge v11, v10, :cond_a

    :goto_8
    const/4 v11, 0x0

    goto :goto_9

    :cond_a
    const/16 v10, 0x7f

    if-le v11, v10, :cond_b

    goto :goto_8

    :cond_b
    :goto_9
    invoke-virtual {v7, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Landroid/net/wifi/WifiInfo;->getSSID()Ljava/lang/String;

    move-result-object v9

    const/16 v10, 0x20

    :try_start_3
    invoke-virtual {v8}, Landroid/net/wifi/WifiInfo;->getSSID()Ljava/lang/String;

    move-result-object v8

    const-string v11, "UTF-8"

    invoke-virtual {v8, v11}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object v8

    array-length v8, v8
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1

    goto :goto_a

    :catch_1
    const/16 v8, 0x20

    :goto_a
    if-lt v8, v10, :cond_c

    const-string v9, "unkwn"

    :cond_c
    const-string v8, "*"

    const-string v10, "."

    invoke-virtual {v9, v8, v10}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_d
    if-eqz v12, :cond_f

    iget-object v8, v1, Lcom/loc/fp;->E:Ljava/util/ArrayList;

    if-eqz v8, :cond_f

    invoke-virtual {v8}, Ljava/util/ArrayList;->clear()V

    iget-object v8, v1, Lcom/loc/fp;->E:Ljava/util/ArrayList;

    invoke-virtual {v8, v12}, Ljava/util/ArrayList;->addAll(Ljava/util/Collection;)Z

    goto :goto_b

    :cond_e
    invoke-virtual/range {p5 .. p5}, Lcom/loc/ff;->g()V

    iget-object v8, v1, Lcom/loc/fp;->E:Ljava/util/ArrayList;

    if-eqz v8, :cond_f

    invoke-virtual {v8}, Ljava/util/ArrayList;->clear()V

    :cond_f
    :goto_b
    const/4 v8, 0x0

    iput-short v8, v1, Lcom/loc/fp;->b:S

    if-nez p2, :cond_10

    const/4 v8, 0x0

    const/4 v9, 0x2

    or-int/2addr v8, v9

    int-to-short v8, v8

    iput-short v8, v1, Lcom/loc/fp;->b:S

    :cond_10
    iput-object v5, v1, Lcom/loc/fp;->c:Ljava/lang/String;

    iput-object v6, v1, Lcom/loc/fp;->d:Ljava/lang/String;

    sget-object v5, Landroid/os/Build;->MODEL:Ljava/lang/String;

    iput-object v5, v1, Lcom/loc/fp;->f:Ljava/lang/String;

    new-instance v5, Ljava/lang/StringBuilder;

    const-string v6, "android"

    invoke-direct {v5, v6}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    sget-object v6, Landroid/os/Build$VERSION;->RELEASE:Ljava/lang/String;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    iput-object v5, v1, Lcom/loc/fp;->g:Ljava/lang/String;

    invoke-static/range {p1 .. p1}, Lcom/loc/fz;->b(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v5

    iput-object v5, v1, Lcom/loc/fp;->h:Ljava/lang/String;

    iput-object v4, v1, Lcom/loc/fp;->i:Ljava/lang/String;

    iput-object v15, v1, Lcom/loc/fp;->j:Ljava/lang/String;

    iput-object v15, v1, Lcom/loc/fp;->k:Ljava/lang/String;

    iput-object v15, v1, Lcom/loc/fp;->l:Ljava/lang/String;

    iput-object v15, v1, Lcom/loc/fp;->m:Ljava/lang/String;

    iput-object v15, v1, Lcom/loc/fp;->n:Ljava/lang/String;

    iput-object v2, v1, Lcom/loc/fp;->o:Ljava/lang/String;

    sget-object v2, Lcom/loc/fr;->g:Ljava/lang/String;

    iput-object v2, v1, Lcom/loc/fp;->p:Ljava/lang/String;

    sget-object v2, Lcom/loc/fr;->h:Ljava/lang/String;

    iput-object v2, v1, Lcom/loc/fp;->q:Ljava/lang/String;

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/loc/fp;->s:Ljava/lang/String;

    invoke-static/range {p1 .. p1}, Lcom/loc/fz;->i(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/loc/fp;->t:Ljava/lang/String;

    const-string v2, "6.4.0"

    iput-object v2, v1, Lcom/loc/fp;->v:Ljava/lang/String;

    const/4 v2, 0x0

    iput-object v2, v1, Lcom/loc/fp;->w:Ljava/lang/String;

    iput-object v14, v1, Lcom/loc/fp;->u:Ljava/lang/String;

    iput-object v0, v1, Lcom/loc/fp;->x:Ljava/lang/String;

    iput-object v13, v1, Lcom/loc/fp;->y:Ljava/lang/String;

    move/from16 v2, v17

    iput v2, v1, Lcom/loc/fp;->z:I

    invoke-virtual/range {p4 .. p4}, Lcom/loc/fb;->l()Ljava/lang/String;

    move-result-object v0

    iput-object v0, v1, Lcom/loc/fp;->C:Ljava/lang/String;

    invoke-static {}, Lcom/loc/ff;->p()Ljava/lang/String;

    move-result-object v0

    iput-object v0, v1, Lcom/loc/fp;->F:Ljava/lang/String;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, v1, Lcom/loc/fp;->D:Ljava/lang/String;

    invoke-static {}, Lcom/loc/fz;->b()J

    move-result-wide v2

    invoke-virtual/range {p5 .. p5}, Lcom/loc/ff;->q()J

    move-result-wide v4

    sub-long/2addr v2, v4

    const-wide/16 v4, 0x3e8

    div-long/2addr v2, v4

    long-to-int v0, v2

    iput v0, v1, Lcom/loc/fp;->O:I

    :try_start_4
    sget-object v0, Lcom/loc/fp;->I:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_11

    invoke-static/range {p1 .. p1}, Lcom/loc/o;->f(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/loc/fp;->I:Ljava/lang/String;
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_3

    :catchall_3
    :cond_11
    :try_start_5
    sget-object v0, Lcom/loc/fp;->K:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_12

    invoke-static/range {p1 .. p1}, Lcom/loc/o;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/loc/fp;->K:Ljava/lang/String;
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_4

    :catchall_4
    :cond_12
    :try_start_6
    iget-object v0, v1, Lcom/loc/fp;->M:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_13

    invoke-static {}, Lcom/loc/o;->f()Ljava/lang/String;

    move-result-object v0

    iput-object v0, v1, Lcom/loc/fp;->M:Ljava/lang/String;
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_5

    :catchall_5
    :cond_13
    :try_start_7
    iget-object v0, v1, Lcom/loc/fp;->N:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_14

    invoke-static/range {p1 .. p1}, Lcom/loc/o;->e(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, v1, Lcom/loc/fp;->N:Ljava/lang/String;
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_6

    :catchall_6
    :cond_14
    :try_start_8
    iget-object v0, v1, Lcom/loc/fp;->B:Ljava/util/ArrayList;

    iget-object v2, v1, Lcom/loc/fp;->E:Ljava/util/ArrayList;

    move-object/from16 v3, p8

    invoke-virtual {v3, v0, v2}, Lcom/loc/fd;->a(Ljava/util/ArrayList;Ljava/util/ArrayList;)Ljava/util/List;

    move-result-object v0

    iput-object v0, v1, Lcom/loc/fp;->S:Ljava/util/List;

    iget-object v0, v1, Lcom/loc/fp;->A:Ljava/util/ArrayList;

    iget-object v2, v1, Lcom/loc/fp;->B:Ljava/util/ArrayList;

    invoke-direct {v1, v0, v2}, Lcom/loc/fp;->a(Ljava/util/ArrayList;Ljava/util/ArrayList;)V
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_7

    goto :goto_c

    :catchall_7
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_c
    invoke-virtual/range {v16 .. v16}, Ljava/lang/StringBuilder;->length()I

    move-result v0

    move-object/from16 v2, v16

    const/4 v3, 0x0

    invoke-virtual {v2, v3, v0}, Ljava/lang/StringBuilder;->delete(II)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->length()I

    move-result v0

    invoke-virtual {v7, v3, v0}, Ljava/lang/StringBuilder;->delete(II)Ljava/lang/StringBuilder;

    return-void
.end method

.method public final a()[B
    .locals 30

    move-object/from16 v1, p0

    const-string v2, "Req"

    invoke-direct/range {p0 .. p0}, Lcom/loc/fp;->b()V

    const/4 v3, 0x2

    new-array v4, v3, [B

    const/4 v5, 0x4

    new-array v6, v5, [B

    iget-object v0, v1, Lcom/loc/fp;->H:[B

    const/16 v7, 0x1000

    const/4 v8, 0x1

    if-eqz v0, :cond_0

    array-length v0, v0

    add-int/2addr v0, v8

    add-int/2addr v7, v0

    :cond_0
    iget-object v0, v1, Lcom/loc/fp;->Q:[B

    if-eqz v0, :cond_1

    iget v9, v1, Lcom/loc/fp;->R:I

    if-le v7, v9, :cond_2

    :cond_1
    new-array v0, v7, [B

    iput-object v0, v1, Lcom/loc/fp;->Q:[B

    iput v7, v1, Lcom/loc/fp;->R:I

    :cond_2
    move-object v7, v0

    iget-object v0, v1, Lcom/loc/fp;->a:Ljava/lang/String;

    invoke-static {v0}, Lcom/loc/fz;->g(Ljava/lang/String;)B

    move-result v0

    const/4 v9, 0x0

    aput-byte v0, v7, v9

    iget-short v0, v1, Lcom/loc/fp;->b:S

    const/4 v10, 0x0

    invoke-static {v0, v10}, Lcom/loc/fz;->a(I[B)[B

    move-result-object v0

    array-length v11, v0

    invoke-static {v0, v9, v7, v8, v11}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v0, v0

    add-int/2addr v0, v8

    iget-object v11, v1, Lcom/loc/fp;->c:Ljava/lang/String;

    invoke-static {v11, v7, v0}, Lcom/loc/fp;->a(Ljava/lang/String;[BI)I

    move-result v0

    iget-object v11, v1, Lcom/loc/fp;->d:Ljava/lang/String;

    invoke-static {v11, v7, v0}, Lcom/loc/fp;->a(Ljava/lang/String;[BI)I

    move-result v0

    iget-object v11, v1, Lcom/loc/fp;->o:Ljava/lang/String;

    invoke-static {v11, v7, v0}, Lcom/loc/fp;->a(Ljava/lang/String;[BI)I

    move-result v0

    iget-object v11, v1, Lcom/loc/fp;->e:Ljava/lang/String;

    invoke-static {v11, v7, v0}, Lcom/loc/fp;->a(Ljava/lang/String;[BI)I

    move-result v0

    iget-object v11, v1, Lcom/loc/fp;->f:Ljava/lang/String;

    invoke-static {v11, v7, v0}, Lcom/loc/fp;->a(Ljava/lang/String;[BI)I

    move-result v0

    iget-object v11, v1, Lcom/loc/fp;->g:Ljava/lang/String;

    invoke-static {v11, v7, v0}, Lcom/loc/fp;->a(Ljava/lang/String;[BI)I

    move-result v0

    iget-object v11, v1, Lcom/loc/fp;->u:Ljava/lang/String;

    invoke-static {v11, v7, v0}, Lcom/loc/fp;->a(Ljava/lang/String;[BI)I

    move-result v0

    iget-object v11, v1, Lcom/loc/fp;->h:Ljava/lang/String;

    invoke-static {v11, v7, v0}, Lcom/loc/fp;->a(Ljava/lang/String;[BI)I

    move-result v0

    iget-object v11, v1, Lcom/loc/fp;->p:Ljava/lang/String;

    invoke-static {v11, v7, v0}, Lcom/loc/fp;->a(Ljava/lang/String;[BI)I

    move-result v0

    iget-object v11, v1, Lcom/loc/fp;->q:Ljava/lang/String;

    invoke-static {v11, v7, v0}, Lcom/loc/fp;->a(Ljava/lang/String;[BI)I

    move-result v11

    :try_start_0
    iget-object v0, v1, Lcom/loc/fp;->t:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_3

    aput-byte v9, v7, v11

    goto :goto_0

    :cond_3
    iget-object v0, v1, Lcom/loc/fp;->t:Ljava/lang/String;

    invoke-direct {v1, v0}, Lcom/loc/fp;->a(Ljava/lang/String;)[B

    move-result-object v0

    array-length v12, v0

    int-to-byte v12, v12

    aput-byte v12, v7, v11

    add-int/lit8 v11, v11, 0x1

    array-length v12, v0

    invoke-static {v0, v9, v7, v11, v12}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v0, v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    add-int/2addr v11, v0

    goto :goto_1

    :catchall_0
    move-exception v0

    const-string v12, "buildV4Dot219"

    invoke-static {v0, v2, v12}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    aput-byte v9, v7, v11

    :goto_0
    add-int/2addr v11, v8

    :goto_1
    iget-object v0, v1, Lcom/loc/fp;->v:Ljava/lang/String;

    invoke-static {v0, v7, v11}, Lcom/loc/fp;->a(Ljava/lang/String;[BI)I

    move-result v0

    iget-object v11, v1, Lcom/loc/fp;->w:Ljava/lang/String;

    invoke-static {v11, v7, v0}, Lcom/loc/fp;->a(Ljava/lang/String;[BI)I

    move-result v0

    sget-object v11, Lcom/loc/fp;->I:Ljava/lang/String;

    invoke-static {v11, v7, v0}, Lcom/loc/fp;->a(Ljava/lang/String;[BI)I

    move-result v0

    sget-object v11, Lcom/loc/fp;->K:Ljava/lang/String;

    invoke-static {v11, v7, v0}, Lcom/loc/fp;->a(Ljava/lang/String;[BI)I

    move-result v0

    iget-object v11, v1, Lcom/loc/fp;->x:Ljava/lang/String;

    invoke-static {v11, v7, v0}, Lcom/loc/fp;->a(Ljava/lang/String;[BI)I

    move-result v0

    iget-object v11, v1, Lcom/loc/fp;->y:Ljava/lang/String;

    invoke-static {v11}, Ljava/lang/Byte;->parseByte(Ljava/lang/String;)B

    move-result v11

    aput-byte v11, v7, v0

    add-int/2addr v0, v8

    iget-object v11, v1, Lcom/loc/fp;->j:Ljava/lang/String;

    invoke-static {v11}, Ljava/lang/Byte;->parseByte(Ljava/lang/String;)B

    move-result v11

    aput-byte v11, v7, v0

    add-int/2addr v0, v8

    iget v11, v1, Lcom/loc/fp;->z:I

    and-int/lit8 v12, v11, 0x3

    int-to-byte v11, v11

    aput-byte v11, v7, v0

    add-int/2addr v0, v8

    const/16 v11, -0x80

    const-wide/16 v15, 0x3e8

    const-wide/16 v17, 0x0

    const/16 v5, 0x7f

    if-eq v12, v8, :cond_5

    if-ne v12, v3, :cond_4

    goto :goto_2

    :cond_4
    move-object/from16 v21, v6

    goto/16 :goto_1b

    :cond_5
    :goto_2
    iget-object v13, v1, Lcom/loc/fp;->A:Ljava/util/ArrayList;

    invoke-virtual {v13}, Ljava/util/ArrayList;->size()I

    move-result v13

    if-lez v13, :cond_6

    iget-object v13, v1, Lcom/loc/fp;->A:Ljava/util/ArrayList;

    invoke-virtual {v13, v9}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v13

    check-cast v13, Lcom/loc/fa;

    iget v13, v13, Lcom/loc/fa;->a:I

    goto :goto_3

    :cond_6
    const/4 v13, 0x0

    :goto_3
    invoke-static {v13, v10}, Lcom/loc/fz;->a(I[B)[B

    move-result-object v13

    array-length v14, v13

    invoke-static {v13, v9, v7, v0, v14}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v13, v13

    add-int/2addr v0, v13

    if-ne v12, v8, :cond_a

    iget-object v13, v1, Lcom/loc/fp;->A:Ljava/util/ArrayList;

    invoke-virtual {v13}, Ljava/util/ArrayList;->size()I

    move-result v13

    if-lez v13, :cond_7

    iget-object v13, v1, Lcom/loc/fp;->A:Ljava/util/ArrayList;

    invoke-virtual {v13, v9}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v13

    check-cast v13, Lcom/loc/fa;

    iget v13, v13, Lcom/loc/fa;->b:I

    goto :goto_4

    :cond_7
    const/4 v13, 0x0

    :goto_4
    invoke-static {v13, v10}, Lcom/loc/fz;->a(I[B)[B

    move-result-object v13

    array-length v14, v13

    invoke-static {v13, v9, v7, v0, v14}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v13, v13

    add-int/2addr v0, v13

    iget-object v13, v1, Lcom/loc/fp;->A:Ljava/util/ArrayList;

    invoke-virtual {v13}, Ljava/util/ArrayList;->size()I

    move-result v13

    if-lez v13, :cond_8

    iget-object v13, v1, Lcom/loc/fp;->A:Ljava/util/ArrayList;

    invoke-virtual {v13, v9}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v13

    check-cast v13, Lcom/loc/fa;

    iget v13, v13, Lcom/loc/fa;->c:I

    goto :goto_5

    :cond_8
    const/4 v13, 0x0

    :goto_5
    invoke-static {v13, v10}, Lcom/loc/fz;->a(I[B)[B

    move-result-object v13

    array-length v14, v13

    invoke-static {v13, v9, v7, v0, v14}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v13, v13

    add-int/2addr v0, v13

    iget-object v13, v1, Lcom/loc/fp;->A:Ljava/util/ArrayList;

    invoke-virtual {v13}, Ljava/util/ArrayList;->size()I

    move-result v13

    if-lez v13, :cond_9

    iget-object v13, v1, Lcom/loc/fp;->A:Ljava/util/ArrayList;

    invoke-virtual {v13, v9}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v13

    check-cast v13, Lcom/loc/fa;

    iget v13, v13, Lcom/loc/fa;->d:I

    goto :goto_6

    :cond_9
    const/4 v13, 0x0

    :goto_6
    invoke-static {v13, v10}, Lcom/loc/fz;->b(I[B)[B

    move-result-object v13

    array-length v14, v13

    invoke-static {v13, v9, v7, v0, v14}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v13, v13

    :goto_7
    add-int/2addr v0, v13

    goto/16 :goto_d

    :cond_a
    if-ne v12, v3, :cond_10

    iget-object v13, v1, Lcom/loc/fp;->A:Ljava/util/ArrayList;

    invoke-virtual {v13}, Ljava/util/ArrayList;->size()I

    move-result v13

    if-lez v13, :cond_b

    iget-object v13, v1, Lcom/loc/fp;->A:Ljava/util/ArrayList;

    invoke-virtual {v13, v9}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v13

    check-cast v13, Lcom/loc/fa;

    iget v13, v13, Lcom/loc/fa;->h:I

    goto :goto_8

    :cond_b
    const/4 v13, 0x0

    :goto_8
    invoke-static {v13, v10}, Lcom/loc/fz;->a(I[B)[B

    move-result-object v13

    array-length v14, v13

    invoke-static {v13, v9, v7, v0, v14}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v13, v13

    add-int/2addr v0, v13

    iget-object v13, v1, Lcom/loc/fp;->A:Ljava/util/ArrayList;

    invoke-virtual {v13}, Ljava/util/ArrayList;->size()I

    move-result v13

    if-lez v13, :cond_c

    iget-object v13, v1, Lcom/loc/fp;->A:Ljava/util/ArrayList;

    invoke-virtual {v13, v9}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v13

    check-cast v13, Lcom/loc/fa;

    iget v13, v13, Lcom/loc/fa;->i:I

    goto :goto_9

    :cond_c
    const/4 v13, 0x0

    :goto_9
    invoke-static {v13, v10}, Lcom/loc/fz;->a(I[B)[B

    move-result-object v13

    array-length v14, v13

    invoke-static {v13, v9, v7, v0, v14}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v13, v13

    add-int/2addr v0, v13

    iget-object v13, v1, Lcom/loc/fp;->A:Ljava/util/ArrayList;

    invoke-virtual {v13}, Ljava/util/ArrayList;->size()I

    move-result v13

    if-lez v13, :cond_d

    iget-object v13, v1, Lcom/loc/fp;->A:Ljava/util/ArrayList;

    invoke-virtual {v13, v9}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v13

    check-cast v13, Lcom/loc/fa;

    iget v13, v13, Lcom/loc/fa;->j:I

    goto :goto_a

    :cond_d
    const/4 v13, 0x0

    :goto_a
    invoke-static {v13, v10}, Lcom/loc/fz;->a(I[B)[B

    move-result-object v13

    array-length v14, v13

    invoke-static {v13, v9, v7, v0, v14}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v13, v13

    add-int/2addr v0, v13

    iget-object v13, v1, Lcom/loc/fp;->A:Ljava/util/ArrayList;

    invoke-virtual {v13}, Ljava/util/ArrayList;->size()I

    move-result v13

    if-lez v13, :cond_e

    iget-object v13, v1, Lcom/loc/fp;->A:Ljava/util/ArrayList;

    invoke-virtual {v13, v9}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v13

    check-cast v13, Lcom/loc/fa;

    iget v13, v13, Lcom/loc/fa;->g:I

    goto :goto_b

    :cond_e
    const/4 v13, 0x0

    :goto_b
    invoke-static {v13, v10}, Lcom/loc/fz;->b(I[B)[B

    move-result-object v13

    array-length v14, v13

    invoke-static {v13, v9, v7, v0, v14}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v13, v13

    add-int/2addr v0, v13

    iget-object v13, v1, Lcom/loc/fp;->A:Ljava/util/ArrayList;

    invoke-virtual {v13}, Ljava/util/ArrayList;->size()I

    move-result v13

    if-lez v13, :cond_f

    iget-object v13, v1, Lcom/loc/fp;->A:Ljava/util/ArrayList;

    invoke-virtual {v13, v9}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v13

    check-cast v13, Lcom/loc/fa;

    iget v13, v13, Lcom/loc/fa;->f:I

    goto :goto_c

    :cond_f
    const/4 v13, 0x0

    :goto_c
    invoke-static {v13, v10}, Lcom/loc/fz;->b(I[B)[B

    move-result-object v13

    array-length v14, v13

    invoke-static {v13, v9, v7, v0, v14}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v13, v13

    goto/16 :goto_7

    :cond_10
    :goto_d
    iget-object v13, v1, Lcom/loc/fp;->A:Ljava/util/ArrayList;

    invoke-virtual {v13}, Ljava/util/ArrayList;->size()I

    move-result v13

    if-lez v13, :cond_11

    iget-object v13, v1, Lcom/loc/fp;->A:Ljava/util/ArrayList;

    invoke-virtual {v13, v9}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v13

    check-cast v13, Lcom/loc/fa;

    iget v13, v13, Lcom/loc/fa;->k:I

    goto :goto_e

    :cond_11
    const/4 v13, 0x0

    :goto_e
    if-le v13, v5, :cond_12

    :goto_f
    const/4 v13, 0x0

    goto :goto_10

    :cond_12
    if-ge v13, v11, :cond_13

    goto :goto_f

    :cond_13
    :goto_10
    int-to-byte v13, v13

    aput-byte v13, v7, v0

    add-int/2addr v0, v8

    iget-object v13, v1, Lcom/loc/fp;->A:Ljava/util/ArrayList;

    invoke-virtual {v13}, Ljava/util/ArrayList;->size()I

    move-result v13

    if-lez v13, :cond_14

    invoke-static {}, Lcom/loc/fz;->b()J

    move-result-wide v13

    iget-object v11, v1, Lcom/loc/fp;->A:Ljava/util/ArrayList;

    invoke-virtual {v11, v9}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v11

    check-cast v11, Lcom/loc/fa;

    move-object/from16 v21, v6

    iget-wide v5, v11, Lcom/loc/fa;->t:J

    sub-long/2addr v13, v5

    div-long/2addr v13, v15

    goto :goto_11

    :cond_14
    move-object/from16 v21, v6

    move-wide/from16 v13, v17

    :goto_11
    const-wide/32 v5, 0xffff

    cmp-long v11, v13, v5

    if-lez v11, :cond_15

    move-wide v13, v5

    :cond_15
    cmp-long v11, v13, v17

    if-gez v11, :cond_16

    move-wide/from16 v13, v17

    :cond_16
    long-to-int v11, v13

    invoke-static {v11, v4}, Lcom/loc/fz;->a(I[B)[B

    move-result-object v11

    array-length v13, v11

    invoke-static {v11, v9, v7, v0, v13}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    add-int/2addr v0, v3

    if-ne v12, v8, :cond_21

    iget-object v11, v1, Lcom/loc/fp;->A:Ljava/util/ArrayList;

    invoke-virtual {v11}, Ljava/util/ArrayList;->size()I

    move-result v11

    if-nez v11, :cond_17

    aput-byte v9, v7, v0

    goto/16 :goto_1a

    :cond_17
    iget-object v11, v1, Lcom/loc/fp;->A:Ljava/util/ArrayList;

    invoke-virtual {v11}, Ljava/util/ArrayList;->size()I

    move-result v11

    int-to-byte v12, v11

    aput-byte v12, v7, v0

    add-int/lit8 v0, v0, 0x1

    const/4 v12, 0x0

    :goto_12
    if-ge v12, v11, :cond_22

    iget-object v13, v1, Lcom/loc/fp;->A:Ljava/util/ArrayList;

    invoke-virtual {v13}, Ljava/util/ArrayList;->size()I

    move-result v13

    if-lez v13, :cond_18

    iget-object v13, v1, Lcom/loc/fp;->A:Ljava/util/ArrayList;

    invoke-virtual {v13, v12}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v13

    check-cast v13, Lcom/loc/fa;

    iget v13, v13, Lcom/loc/fa;->c:I

    goto :goto_13

    :cond_18
    const/4 v13, 0x0

    :goto_13
    invoke-static {v13, v10}, Lcom/loc/fz;->a(I[B)[B

    move-result-object v13

    array-length v14, v13

    invoke-static {v13, v9, v7, v0, v14}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v13, v13

    add-int/2addr v0, v13

    iget-object v13, v1, Lcom/loc/fp;->A:Ljava/util/ArrayList;

    invoke-virtual {v13}, Ljava/util/ArrayList;->size()I

    move-result v13

    if-lez v13, :cond_19

    iget-object v13, v1, Lcom/loc/fp;->A:Ljava/util/ArrayList;

    invoke-virtual {v13, v12}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v13

    check-cast v13, Lcom/loc/fa;

    iget v13, v13, Lcom/loc/fa;->d:I

    goto :goto_14

    :cond_19
    const/4 v13, 0x0

    :goto_14
    invoke-static {v13, v10}, Lcom/loc/fz;->b(I[B)[B

    move-result-object v13

    array-length v14, v13

    invoke-static {v13, v9, v7, v0, v14}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v13, v13

    add-int/2addr v0, v13

    iget-object v13, v1, Lcom/loc/fp;->A:Ljava/util/ArrayList;

    invoke-virtual {v13}, Ljava/util/ArrayList;->size()I

    move-result v13

    if-lez v13, :cond_1a

    iget-object v13, v1, Lcom/loc/fp;->A:Ljava/util/ArrayList;

    invoke-virtual {v13, v12}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v13

    check-cast v13, Lcom/loc/fa;

    iget v13, v13, Lcom/loc/fa;->k:I

    goto :goto_15

    :cond_1a
    const/4 v13, 0x0

    :goto_15
    const/16 v14, 0x7f

    if-le v13, v14, :cond_1b

    :goto_16
    const/4 v13, 0x0

    goto :goto_17

    :cond_1b
    const/16 v14, -0x80

    if-ge v13, v14, :cond_1c

    goto :goto_16

    :cond_1c
    :goto_17
    int-to-byte v13, v13

    aput-byte v13, v7, v0

    add-int/2addr v0, v8

    sget-object v13, Lcom/loc/fr;->a:Ljava/lang/String;

    invoke-static {v13}, Ljava/lang/Double;->valueOf(Ljava/lang/String;)Ljava/lang/Double;

    move-result-object v13

    invoke-virtual {v13}, Ljava/lang/Double;->doubleValue()D

    move-result-wide v13

    const-wide v19, 0x4014cccccccccccdL    # 5.2

    cmpl-double v22, v13, v19

    if-ltz v22, :cond_20

    iget-object v13, v1, Lcom/loc/fp;->A:Ljava/util/ArrayList;

    invoke-virtual {v13}, Ljava/util/ArrayList;->size()I

    move-result v13

    if-lez v13, :cond_1d

    invoke-static {}, Lcom/loc/fz;->b()J

    move-result-wide v13

    iget-object v10, v1, Lcom/loc/fp;->A:Ljava/util/ArrayList;

    invoke-virtual {v10, v9}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v10

    check-cast v10, Lcom/loc/fa;

    iget-wide v8, v10, Lcom/loc/fa;->t:J

    sub-long/2addr v13, v8

    div-long/2addr v13, v15

    goto :goto_18

    :cond_1d
    move-wide/from16 v13, v17

    :goto_18
    cmp-long v8, v13, v5

    if-lez v8, :cond_1e

    move-wide v13, v5

    :cond_1e
    cmp-long v8, v13, v17

    if-gez v8, :cond_1f

    move-wide/from16 v13, v17

    :cond_1f
    long-to-int v8, v13

    invoke-static {v8, v4}, Lcom/loc/fz;->a(I[B)[B

    move-result-object v8

    array-length v9, v8

    const/4 v10, 0x0

    invoke-static {v8, v10, v7, v0, v9}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v8, v8

    add-int/2addr v0, v8

    goto :goto_19

    :cond_20
    const/4 v10, 0x0

    :goto_19
    add-int/lit8 v12, v12, 0x1

    const/4 v8, 0x1

    const/4 v9, 0x0

    const/4 v10, 0x0

    goto/16 :goto_12

    :cond_21
    const/4 v10, 0x0

    if-ne v12, v3, :cond_22

    aput-byte v10, v7, v0

    :goto_1a
    add-int/lit8 v0, v0, 0x1

    :cond_22
    :goto_1b
    iget-object v5, v1, Lcom/loc/fp;->C:Ljava/lang/String;

    const-string v6, "GBK"

    const/16 v8, 0x8

    if-eqz v5, :cond_23

    iget v9, v1, Lcom/loc/fp;->z:I

    and-int/2addr v9, v8

    if-ne v9, v8, :cond_23

    :try_start_1
    invoke-virtual {v5, v6}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object v5

    array-length v9, v5

    const/16 v10, 0x3c

    invoke-static {v9, v10}, Ljava/lang/Math;->min(II)I

    move-result v9

    int-to-byte v10, v9

    aput-byte v10, v7, v0

    add-int/lit8 v0, v0, 0x1

    const/4 v10, 0x0

    invoke-static {v5, v10, v7, v0, v9}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    add-int/2addr v0, v9

    goto :goto_1c

    :catch_0
    :cond_23
    const/4 v5, 0x0

    aput-byte v5, v7, v0

    const/4 v5, 0x1

    add-int/2addr v0, v5

    :goto_1c
    iget-object v5, v1, Lcom/loc/fp;->B:Ljava/util/ArrayList;

    invoke-virtual {v5}, Ljava/util/ArrayList;->size()I

    move-result v9

    iget v10, v1, Lcom/loc/fp;->z:I

    const/4 v11, 0x4

    and-int/2addr v10, v11

    const-wide v23, 0x4015333333333333L    # 5.3

    const/4 v14, 0x5

    const/4 v12, 0x3

    if-ne v10, v11, :cond_35

    if-lez v9, :cond_35

    const/4 v10, 0x0

    invoke-virtual {v5, v10}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    int-to-byte v10, v9

    aput-byte v10, v7, v0

    const/4 v10, 0x1

    add-int/2addr v0, v10

    const/4 v11, 0x0

    :goto_1d
    if-ge v11, v9, :cond_34

    invoke-virtual {v5, v11}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v13

    check-cast v13, Lcom/loc/fa;

    iget v15, v13, Lcom/loc/fa;->l:I

    if-eq v15, v10, :cond_29

    iget v10, v13, Lcom/loc/fa;->l:I

    if-eq v10, v12, :cond_29

    iget v10, v13, Lcom/loc/fa;->l:I

    const/4 v15, 0x4

    if-ne v10, v15, :cond_24

    goto/16 :goto_1f

    :cond_24
    iget v10, v13, Lcom/loc/fa;->l:I

    if-ne v10, v3, :cond_26

    iget v10, v13, Lcom/loc/fa;->l:I

    int-to-byte v10, v10

    iget-boolean v15, v13, Lcom/loc/fa;->n:Z

    if-eqz v15, :cond_25

    or-int/lit8 v10, v10, 0x8

    int-to-byte v10, v10

    :cond_25
    aput-byte v10, v7, v0

    add-int/lit8 v0, v0, 0x1

    iget v10, v13, Lcom/loc/fa;->a:I

    invoke-static {v10, v4}, Lcom/loc/fz;->a(I[B)[B

    move-result-object v10

    array-length v15, v10

    const/4 v3, 0x0

    invoke-static {v10, v3, v7, v0, v15}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v10, v10

    add-int/2addr v0, v10

    iget v10, v13, Lcom/loc/fa;->h:I

    invoke-static {v10, v4}, Lcom/loc/fz;->a(I[B)[B

    move-result-object v10

    array-length v15, v10

    invoke-static {v10, v3, v7, v0, v15}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v10, v10

    add-int/2addr v0, v10

    iget v10, v13, Lcom/loc/fa;->i:I

    invoke-static {v10, v4}, Lcom/loc/fz;->a(I[B)[B

    move-result-object v10

    array-length v15, v10

    invoke-static {v10, v3, v7, v0, v15}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v10, v10

    add-int/2addr v0, v10

    iget v10, v13, Lcom/loc/fa;->j:I

    invoke-static {v10, v4}, Lcom/loc/fz;->a(I[B)[B

    move-result-object v10

    array-length v15, v10

    invoke-static {v10, v3, v7, v0, v15}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v10, v10

    add-int/2addr v0, v10

    iget v10, v13, Lcom/loc/fa;->g:I

    move-object/from16 v15, v21

    invoke-static {v10, v15}, Lcom/loc/fz;->b(I[B)[B

    move-result-object v10

    array-length v12, v10

    invoke-static {v10, v3, v7, v0, v12}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v10, v10

    add-int/2addr v0, v10

    iget v10, v13, Lcom/loc/fa;->f:I

    invoke-static {v10, v15}, Lcom/loc/fz;->b(I[B)[B

    move-result-object v10

    array-length v12, v10

    invoke-static {v10, v3, v7, v0, v12}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v3, v10

    add-int/2addr v0, v3

    goto :goto_1e

    :cond_26
    move-object/from16 v15, v21

    iget v3, v13, Lcom/loc/fa;->l:I

    if-ne v3, v14, :cond_28

    iget v3, v13, Lcom/loc/fa;->l:I

    int-to-byte v3, v3

    iget-boolean v10, v13, Lcom/loc/fa;->n:Z

    if-eqz v10, :cond_27

    or-int/lit8 v3, v3, 0x8

    int-to-byte v3, v3

    :cond_27
    aput-byte v3, v7, v0

    add-int/lit8 v0, v0, 0x1

    iget v3, v13, Lcom/loc/fa;->a:I

    invoke-static {v3, v4}, Lcom/loc/fz;->a(I[B)[B

    move-result-object v3

    array-length v10, v3

    const/4 v12, 0x0

    invoke-static {v3, v12, v7, v0, v10}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v3, v3

    add-int/2addr v0, v3

    iget v3, v13, Lcom/loc/fa;->b:I

    invoke-static {v3, v4}, Lcom/loc/fz;->a(I[B)[B

    move-result-object v3

    array-length v10, v3

    invoke-static {v3, v12, v7, v0, v10}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v3, v3

    add-int/2addr v0, v3

    iget v3, v13, Lcom/loc/fa;->c:I

    invoke-static {v3, v4}, Lcom/loc/fz;->a(I[B)[B

    move-result-object v3

    array-length v10, v3

    invoke-static {v3, v12, v7, v0, v10}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v3, v3

    add-int/2addr v0, v3

    move-object v10, v15

    iget-wide v14, v13, Lcom/loc/fa;->e:J

    invoke-static {v14, v15}, Lcom/loc/fz;->a(J)[B

    move-result-object v14

    invoke-static {v14, v12, v7, v0, v8}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    add-int/2addr v0, v8

    goto :goto_20

    :cond_28
    :goto_1e
    move-object v10, v15

    goto :goto_20

    :cond_29
    :goto_1f
    move-object/from16 v10, v21

    iget v12, v13, Lcom/loc/fa;->l:I

    int-to-byte v12, v12

    iget-boolean v14, v13, Lcom/loc/fa;->n:Z

    if-eqz v14, :cond_2a

    or-int/lit8 v12, v12, 0x8

    int-to-byte v12, v12

    :cond_2a
    aput-byte v12, v7, v0

    add-int/lit8 v0, v0, 0x1

    iget v12, v13, Lcom/loc/fa;->a:I

    invoke-static {v12, v4}, Lcom/loc/fz;->a(I[B)[B

    move-result-object v12

    array-length v14, v12

    const/4 v15, 0x0

    invoke-static {v12, v15, v7, v0, v14}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v12, v12

    add-int/2addr v0, v12

    iget v12, v13, Lcom/loc/fa;->b:I

    invoke-static {v12, v4}, Lcom/loc/fz;->a(I[B)[B

    move-result-object v12

    array-length v14, v12

    invoke-static {v12, v15, v7, v0, v14}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v12, v12

    add-int/2addr v0, v12

    iget v12, v13, Lcom/loc/fa;->c:I

    invoke-static {v12, v4}, Lcom/loc/fz;->a(I[B)[B

    move-result-object v12

    array-length v14, v12

    invoke-static {v12, v15, v7, v0, v14}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v12, v12

    add-int/2addr v0, v12

    iget v12, v13, Lcom/loc/fa;->d:I

    invoke-static {v12, v10}, Lcom/loc/fz;->b(I[B)[B

    move-result-object v12

    array-length v14, v12

    invoke-static {v12, v15, v7, v0, v14}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v12, v12

    add-int/2addr v0, v12

    :goto_20
    iget v12, v13, Lcom/loc/fa;->k:I

    const/16 v14, 0x63

    const/16 v15, 0x7f

    if-le v12, v15, :cond_2b

    :goto_21
    const/16 v12, 0x63

    goto :goto_22

    :cond_2b
    const/16 v15, -0x80

    if-ge v12, v15, :cond_2c

    goto :goto_21

    :cond_2c
    :goto_22
    int-to-byte v12, v12

    aput-byte v12, v7, v0

    const/4 v12, 0x1

    add-int/2addr v0, v12

    invoke-static {}, Lcom/loc/fz;->b()J

    move-result-wide v14

    move/from16 v29, v9

    iget-wide v8, v13, Lcom/loc/fa;->t:J

    sub-long/2addr v14, v8

    const-wide/16 v8, 0x3e8

    div-long/2addr v14, v8

    long-to-int v8, v14

    int-to-short v8, v8

    invoke-static {v8, v4}, Lcom/loc/fz;->a(I[B)[B

    move-result-object v8

    array-length v9, v8

    const/4 v14, 0x0

    invoke-static {v8, v14, v7, v0, v9}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v8, v8

    add-int/2addr v0, v8

    iget v8, v13, Lcom/loc/fa;->l:I

    const/16 v9, 0x7fff

    const/4 v14, 0x3

    if-eq v8, v14, :cond_30

    iget v8, v13, Lcom/loc/fa;->l:I

    const/4 v14, 0x4

    if-eq v8, v14, :cond_30

    iget v8, v13, Lcom/loc/fa;->l:I

    const/4 v3, 0x5

    if-ne v8, v3, :cond_2d

    goto :goto_25

    :cond_2d
    iget v8, v13, Lcom/loc/fa;->l:I

    const/4 v14, 0x1

    if-ne v8, v14, :cond_33

    sget-object v8, Lcom/loc/fr;->a:Ljava/lang/String;

    invoke-static {v8}, Ljava/lang/Double;->valueOf(Ljava/lang/String;)Ljava/lang/Double;

    move-result-object v8

    invoke-virtual {v8}, Ljava/lang/Double;->doubleValue()D

    move-result-wide v14

    cmpl-double v8, v14, v23

    if-ltz v8, :cond_33

    iget v8, v13, Lcom/loc/fa;->o:I

    if-le v8, v9, :cond_2e

    const/16 v8, 0x7fff

    :cond_2e
    if-gez v8, :cond_2f

    goto :goto_23

    :cond_2f
    move v9, v8

    :goto_23
    invoke-static {v9, v4}, Lcom/loc/fz;->a(I[B)[B

    move-result-object v8

    array-length v9, v8

    const/4 v14, 0x0

    invoke-static {v8, v14, v7, v0, v9}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v8, v8

    add-int/2addr v0, v8

    iget v8, v13, Lcom/loc/fa;->p:I

    invoke-static {v8, v10}, Lcom/loc/fz;->b(I[B)[B

    move-result-object v8

    array-length v9, v8

    invoke-static {v8, v14, v7, v0, v9}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v8, v8

    add-int/2addr v0, v8

    iget v8, v13, Lcom/loc/fa;->q:I

    invoke-static {v8, v10}, Lcom/loc/fz;->b(I[B)[B

    move-result-object v8

    array-length v9, v8

    invoke-static {v8, v14, v7, v0, v9}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v8, v8

    :goto_24
    add-int/2addr v0, v8

    goto :goto_27

    :cond_30
    :goto_25
    sget-object v8, Lcom/loc/fr;->a:Ljava/lang/String;

    invoke-static {v8}, Ljava/lang/Double;->valueOf(Ljava/lang/String;)Ljava/lang/Double;

    move-result-object v8

    invoke-virtual {v8}, Ljava/lang/Double;->doubleValue()D

    move-result-wide v14

    const-wide/high16 v25, 0x4014000000000000L    # 5.0

    cmpl-double v8, v14, v25

    if-ltz v8, :cond_33

    iget v8, v13, Lcom/loc/fa;->o:I

    if-le v8, v9, :cond_31

    const/16 v8, 0x7fff

    :cond_31
    if-gez v8, :cond_32

    goto :goto_26

    :cond_32
    move v9, v8

    :goto_26
    invoke-static {v9, v4}, Lcom/loc/fz;->a(I[B)[B

    move-result-object v8

    array-length v9, v8

    const/4 v14, 0x0

    invoke-static {v8, v14, v7, v0, v9}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v8, v8

    add-int/2addr v0, v8

    sget-object v8, Lcom/loc/fr;->a:Ljava/lang/String;

    invoke-static {v8}, Ljava/lang/Double;->valueOf(Ljava/lang/String;)Ljava/lang/Double;

    move-result-object v8

    invoke-virtual {v8}, Ljava/lang/Double;->doubleValue()D

    move-result-wide v8

    cmpl-double v15, v8, v23

    if-ltz v15, :cond_33

    iget v8, v13, Lcom/loc/fa;->p:I

    invoke-static {v8, v10}, Lcom/loc/fz;->b(I[B)[B

    move-result-object v8

    array-length v9, v8

    invoke-static {v8, v14, v7, v0, v9}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v8, v8

    add-int/2addr v0, v8

    iget v8, v13, Lcom/loc/fa;->q:I

    invoke-static {v8, v10}, Lcom/loc/fz;->b(I[B)[B

    move-result-object v8

    array-length v9, v8

    invoke-static {v8, v14, v7, v0, v9}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v8, v8

    goto :goto_24

    :cond_33
    :goto_27
    add-int/lit8 v11, v11, 0x1

    move-object/from16 v21, v10

    move/from16 v9, v29

    const/4 v3, 0x2

    const/16 v8, 0x8

    const/4 v10, 0x1

    const/4 v12, 0x3

    const/4 v14, 0x5

    const-wide/16 v15, 0x3e8

    goto/16 :goto_1d

    :cond_34
    move-object/from16 v10, v21

    const/4 v5, 0x1

    goto :goto_28

    :cond_35
    move-object/from16 v10, v21

    const/4 v5, 0x0

    aput-byte v5, v7, v0

    const/4 v5, 0x1

    add-int/2addr v0, v5

    :goto_28
    iget-object v8, v1, Lcom/loc/fp;->D:Ljava/lang/String;

    invoke-static {v8}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v8

    if-nez v8, :cond_3b

    iget-object v8, v1, Lcom/loc/fp;->D:Ljava/lang/String;

    invoke-virtual {v8}, Ljava/lang/String;->length()I

    move-result v8

    if-nez v8, :cond_36

    goto/16 :goto_2c

    :cond_36
    aput-byte v5, v7, v0

    add-int/lit8 v8, v0, 0x1

    :try_start_2
    iget-object v0, v1, Lcom/loc/fp;->D:Ljava/lang/String;

    const-string v5, ","

    invoke-virtual {v0, v5}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v5

    const/4 v9, 0x0

    aget-object v0, v5, v9

    invoke-direct {v1, v0}, Lcom/loc/fp;->a(Ljava/lang/String;)[B

    move-result-object v0

    array-length v11, v0

    invoke-static {v0, v9, v7, v8, v11}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v0, v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    add-int/2addr v8, v0

    const/4 v9, 0x2

    :try_start_3
    aget-object v0, v5, v9

    invoke-virtual {v0, v6}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object v0

    array-length v9, v0

    const/16 v11, 0x7f

    if-le v9, v11, :cond_37

    const/16 v9, 0x7f

    :cond_37
    int-to-byte v11, v9

    aput-byte v11, v7, v8

    add-int/lit8 v8, v8, 0x1

    const/4 v11, 0x0

    invoke-static {v0, v11, v7, v8, v9}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    add-int/2addr v8, v9

    goto :goto_29

    :catchall_1
    move-exception v0

    :try_start_4
    const-string v9, "buildV4Dot214"

    invoke-static {v0, v2, v9}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    const/4 v9, 0x0

    aput-byte v9, v7, v8

    add-int/lit8 v8, v8, 0x1

    :goto_29
    const/4 v9, 0x1

    aget-object v0, v5, v9

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    const/16 v5, 0x7f

    if-le v0, v5, :cond_38

    :goto_2a
    const/4 v0, 0x0

    goto :goto_2b

    :cond_38
    const/16 v5, -0x80

    if-ge v0, v5, :cond_39

    goto :goto_2a

    :cond_39
    :goto_2b
    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Byte;->parseByte(Ljava/lang/String;)B

    move-result v0

    aput-byte v0, v7, v8

    add-int/lit8 v8, v8, 0x1

    sget-object v0, Lcom/loc/fr;->a:Ljava/lang/String;

    invoke-static {v0}, Ljava/lang/Double;->valueOf(Ljava/lang/String;)Ljava/lang/Double;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Double;->doubleValue()D

    move-result-wide v13

    const-wide v19, 0x4014cccccccccccdL    # 5.2

    cmpl-double v0, v13, v19

    if-ltz v0, :cond_3a

    iget v0, v1, Lcom/loc/fp;->O:I

    invoke-static {v0, v4}, Lcom/loc/fz;->a(I[B)[B

    move-result-object v0

    array-length v5, v0

    const/4 v9, 0x0

    invoke-static {v0, v9, v7, v8, v5}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v0, v0
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_2

    add-int/2addr v8, v0

    :cond_3a
    const/4 v2, 0x1

    const/4 v5, 0x0

    goto :goto_2d

    :catchall_2
    move-exception v0

    const-string v5, "buildV4Dot216"

    invoke-static {v0, v2, v5}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    const-string v0, "00:00:00:00:00:00"

    invoke-direct {v1, v0}, Lcom/loc/fp;->a(Ljava/lang/String;)[B

    move-result-object v0

    array-length v2, v0

    const/4 v5, 0x0

    invoke-static {v0, v5, v7, v8, v2}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v0, v0

    add-int/2addr v8, v0

    aput-byte v5, v7, v8

    const/4 v2, 0x1

    add-int/2addr v8, v2

    const-string v0, "0"

    invoke-static {v0}, Ljava/lang/Byte;->parseByte(Ljava/lang/String;)B

    move-result v0

    aput-byte v0, v7, v8

    add-int/2addr v8, v2

    goto :goto_2d

    :cond_3b
    :goto_2c
    const/4 v2, 0x1

    const/4 v5, 0x0

    aput-byte v5, v7, v0

    add-int/lit8 v8, v0, 0x1

    :goto_2d
    iget-object v0, v1, Lcom/loc/fp;->E:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v9

    const/16 v11, 0x19

    invoke-static {v9, v11}, Ljava/lang/Math;->min(II)I

    move-result v9

    if-nez v9, :cond_3c

    aput-byte v5, v7, v8

    add-int/2addr v8, v2

    const/4 v3, 0x0

    goto/16 :goto_34

    :cond_3c
    int-to-byte v5, v9

    aput-byte v5, v7, v8

    add-int/2addr v8, v2

    invoke-static {}, Lcom/loc/fz;->c()I

    move-result v2

    const/16 v5, 0x11

    if-lt v2, v5, :cond_3d

    const/4 v2, 0x1

    goto :goto_2e

    :cond_3d
    const/4 v2, 0x0

    :goto_2e
    if-eqz v2, :cond_3e

    invoke-static {}, Lcom/loc/fz;->b()J

    move-result-wide v13

    const-wide/16 v17, 0x3e8

    div-long v13, v13, v17

    move-wide/from16 v17, v13

    :cond_3e
    const/4 v5, 0x0

    :goto_2f
    if-ge v5, v9, :cond_44

    invoke-virtual {v0, v5}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v13

    check-cast v13, Lcom/loc/eg;

    iget-wide v14, v13, Lcom/loc/eg;->a:J

    invoke-static {v14, v15}, Lcom/loc/eg;->a(J)Ljava/lang/String;

    move-result-object v14

    invoke-direct {v1, v14}, Lcom/loc/fp;->a(Ljava/lang/String;)[B

    move-result-object v14

    array-length v15, v14

    const/4 v3, 0x0

    invoke-static {v14, v3, v7, v8, v15}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v3, v14

    add-int/2addr v8, v3

    :try_start_5
    iget-object v3, v13, Lcom/loc/eg;->b:Ljava/lang/String;

    invoke-virtual {v3, v6}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object v3

    array-length v14, v3

    int-to-byte v14, v14

    aput-byte v14, v7, v8

    add-int/lit8 v8, v8, 0x1

    array-length v14, v3

    const/4 v15, 0x0

    invoke-static {v3, v15, v7, v8, v14}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v3, v3
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_1

    add-int/2addr v8, v3

    const/4 v3, 0x1

    goto :goto_30

    :catch_1
    const/4 v3, 0x0

    aput-byte v3, v7, v8

    const/4 v3, 0x1

    add-int/2addr v8, v3

    :goto_30
    iget v14, v13, Lcom/loc/eg;->c:I

    const/16 v15, 0x7f

    if-le v14, v15, :cond_3f

    const/4 v14, 0x0

    const/16 v15, -0x80

    goto :goto_31

    :cond_3f
    const/16 v15, -0x80

    if-ge v14, v15, :cond_40

    const/4 v14, 0x0

    :cond_40
    :goto_31
    invoke-static {v14}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v14

    invoke-static {v14}, Ljava/lang/Byte;->parseByte(Ljava/lang/String;)B

    move-result v14

    aput-byte v14, v7, v8

    add-int/2addr v8, v3

    if-eqz v2, :cond_42

    iget-wide v11, v13, Lcom/loc/eg;->f:J

    const-wide/16 v27, 0x3e8

    div-long v11, v11, v27

    sub-long v11, v17, v11

    long-to-int v12, v11

    if-gez v12, :cond_41

    goto :goto_32

    :cond_41
    const v11, 0xffff

    goto :goto_33

    :cond_42
    :goto_32
    const v11, 0xffff

    const/4 v12, 0x0

    :goto_33
    if-le v12, v11, :cond_43

    const v12, 0xffff

    :cond_43
    invoke-static {v12, v4}, Lcom/loc/fz;->a(I[B)[B

    move-result-object v11

    array-length v12, v11

    const/4 v3, 0x0

    invoke-static {v11, v3, v7, v8, v12}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v11, v11

    add-int/2addr v8, v11

    iget v11, v13, Lcom/loc/eg;->d:I

    invoke-static {v11, v4}, Lcom/loc/fz;->a(I[B)[B

    move-result-object v11

    array-length v12, v11

    invoke-static {v11, v3, v7, v8, v12}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v11, v11

    add-int/2addr v8, v11

    add-int/lit8 v5, v5, 0x1

    goto/16 :goto_2f

    :cond_44
    const/4 v3, 0x0

    iget-object v0, v1, Lcom/loc/fp;->F:Ljava/lang/String;

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    invoke-static {v0, v4}, Lcom/loc/fz;->a(I[B)[B

    move-result-object v0

    array-length v2, v0

    invoke-static {v0, v3, v7, v8, v2}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v0, v0

    add-int/2addr v8, v0

    :goto_34
    aput-byte v3, v7, v8

    const/4 v2, 0x1

    add-int/2addr v8, v2

    :try_start_6
    iget-object v0, v1, Lcom/loc/fp;->G:Ljava/lang/String;

    if-nez v0, :cond_45

    aput-byte v3, v7, v8

    goto :goto_35

    :cond_45
    iget-object v0, v1, Lcom/loc/fp;->G:Ljava/lang/String;

    invoke-virtual {v0, v6}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object v0

    array-length v2, v0

    const/16 v3, 0x7f

    if-le v2, v3, :cond_46

    const/4 v0, 0x0

    :cond_46
    if-nez v0, :cond_47

    const/4 v2, 0x0

    aput-byte v2, v7, v8

    const/4 v2, 0x1

    goto :goto_35

    :cond_47
    array-length v2, v0

    int-to-byte v2, v2

    aput-byte v2, v7, v8

    add-int/lit8 v8, v8, 0x1

    array-length v2, v0

    const/4 v3, 0x0

    invoke-static {v0, v3, v7, v8, v2}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v0, v0
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_3

    add-int/2addr v8, v0

    goto :goto_36

    :catchall_3
    const/4 v2, 0x0

    aput-byte v2, v7, v8

    const/4 v2, 0x1

    :goto_35
    add-int/2addr v8, v2

    :goto_36
    const/4 v2, 0x2

    new-array v0, v2, [B

    fill-array-data v0, :array_0

    :try_start_7
    iget-object v2, v1, Lcom/loc/fp;->J:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_48

    iget-object v0, v1, Lcom/loc/fp;->J:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v0

    invoke-static {v0, v4}, Lcom/loc/fz;->a(I[B)[B

    move-result-object v0

    :cond_48
    const/4 v3, 0x2

    const/4 v5, 0x0

    invoke-static {v0, v5, v7, v8, v3}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_5

    add-int/2addr v8, v3

    if-nez v2, :cond_49

    :try_start_8
    iget-object v0, v1, Lcom/loc/fp;->J:Ljava/lang/String;

    invoke-virtual {v0, v6}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object v0

    array-length v2, v0

    invoke-static {v0, v5, v7, v8, v2}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v0, v0
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_4

    add-int/2addr v8, v0

    :catchall_4
    :cond_49
    const/4 v2, 0x2

    goto :goto_37

    :catchall_5
    const/4 v2, 0x2

    add-int/2addr v8, v2

    :goto_37
    const/4 v3, 0x0

    :try_start_9
    invoke-static {v3, v4}, Lcom/loc/fz;->a(I[B)[B

    move-result-object v0

    invoke-static {v0, v3, v7, v8, v2}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V
    :try_end_9
    .catchall {:try_start_9 .. :try_end_9} :catchall_6

    :catchall_6
    add-int/2addr v8, v2

    new-array v0, v2, [B

    fill-array-data v0, :array_1

    :try_start_a
    invoke-static {v0, v3, v7, v8, v2}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V
    :try_end_a
    .catchall {:try_start_a .. :try_end_a} :catchall_7

    :catchall_7
    add-int/2addr v8, v2

    iget-object v0, v1, Lcom/loc/fp;->H:[B

    if-eqz v0, :cond_4a

    array-length v0, v0

    goto :goto_38

    :cond_4a
    const/4 v0, 0x0

    :goto_38
    const/4 v2, 0x0

    invoke-static {v0, v2}, Lcom/loc/fz;->a(I[B)[B

    move-result-object v2

    array-length v3, v2

    const/4 v5, 0x0

    invoke-static {v2, v5, v7, v8, v3}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v2, v2

    add-int/2addr v8, v2

    if-lez v0, :cond_4b

    iget-object v0, v1, Lcom/loc/fp;->H:[B

    array-length v2, v0

    invoke-static {v0, v5, v7, v8, v2}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    iget-object v0, v1, Lcom/loc/fp;->H:[B

    array-length v0, v0

    add-int/2addr v8, v0

    :cond_4b
    sget-object v0, Lcom/loc/fr;->a:Ljava/lang/String;

    invoke-static {v0}, Ljava/lang/Double;->valueOf(Ljava/lang/String;)Ljava/lang/Double;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Double;->doubleValue()D

    move-result-wide v2

    const-wide/high16 v5, 0x4014000000000000L    # 5.0

    cmpl-double v0, v2, v5

    if-ltz v0, :cond_56

    iget-object v0, v1, Lcom/loc/fp;->T:Ljava/util/List;

    if-eqz v0, :cond_4c

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    goto :goto_39

    :cond_4c
    const/4 v0, 0x0

    :goto_39
    int-to-byte v2, v0

    aput-byte v2, v7, v8

    add-int/lit8 v8, v8, 0x1

    new-array v2, v8, [B

    const/4 v3, 0x0

    invoke-static {v7, v3, v2, v3, v8}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    if-lez v0, :cond_55

    :try_start_b
    iget-object v0, v1, Lcom/loc/fp;->T:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    move v3, v8

    :goto_3a
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v5

    if-eqz v5, :cond_54

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/loc/fa;

    iget v6, v5, Lcom/loc/fa;->l:I

    const/4 v9, 0x1

    if-eq v6, v9, :cond_51

    iget v6, v5, Lcom/loc/fa;->l:I

    const/4 v11, 0x3

    if-eq v6, v11, :cond_51

    iget v6, v5, Lcom/loc/fa;->l:I

    const/4 v12, 0x4

    if-ne v6, v12, :cond_4d

    goto :goto_3b

    :cond_4d
    iget v6, v5, Lcom/loc/fa;->l:I

    const/4 v12, 0x2

    if-ne v6, v12, :cond_4f

    iget v6, v5, Lcom/loc/fa;->l:I

    int-to-byte v6, v6

    iget-boolean v12, v5, Lcom/loc/fa;->n:Z

    if-eqz v12, :cond_4e

    or-int/lit8 v6, v6, 0x8

    int-to-byte v6, v6

    :cond_4e
    aput-byte v6, v7, v3

    add-int/lit8 v3, v3, 0x1

    iget v6, v5, Lcom/loc/fa;->h:I

    invoke-static {v6, v4}, Lcom/loc/fz;->a(I[B)[B

    move-result-object v6

    array-length v12, v6

    const/4 v13, 0x0

    invoke-static {v6, v13, v7, v3, v12}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v6, v6

    add-int/2addr v3, v6

    iget v6, v5, Lcom/loc/fa;->i:I

    invoke-static {v6, v4}, Lcom/loc/fz;->a(I[B)[B

    move-result-object v6

    array-length v12, v6

    invoke-static {v6, v13, v7, v3, v12}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v6, v6

    add-int/2addr v3, v6

    iget v6, v5, Lcom/loc/fa;->j:I

    invoke-static {v6, v4}, Lcom/loc/fz;->a(I[B)[B

    move-result-object v6

    array-length v12, v6

    invoke-static {v6, v13, v7, v3, v12}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v6, v6

    add-int/2addr v3, v6

    const/4 v13, 0x5

    goto :goto_3c

    :cond_4f
    iget v6, v5, Lcom/loc/fa;->l:I

    const/4 v13, 0x5

    if-ne v6, v13, :cond_53

    iget v6, v5, Lcom/loc/fa;->l:I

    int-to-byte v6, v6

    iget-boolean v12, v5, Lcom/loc/fa;->n:Z

    if-eqz v12, :cond_50

    or-int/lit8 v6, v6, 0x8

    int-to-byte v6, v6

    :cond_50
    aput-byte v6, v7, v3

    add-int/lit8 v3, v3, 0x1

    iget v6, v5, Lcom/loc/fa;->c:I

    invoke-static {v6, v4}, Lcom/loc/fz;->a(I[B)[B

    move-result-object v6

    array-length v12, v6

    const/4 v15, 0x0

    invoke-static {v6, v15, v7, v3, v12}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v6, v6

    add-int/2addr v3, v6

    iget-wide v11, v5, Lcom/loc/fa;->e:J

    invoke-static {v11, v12}, Lcom/loc/fz;->a(J)[B

    move-result-object v6

    const/16 v11, 0x8

    invoke-static {v6, v15, v7, v3, v11}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    add-int/lit8 v3, v3, 0x8

    goto :goto_3c

    :cond_51
    :goto_3b
    const/4 v13, 0x5

    iget v6, v5, Lcom/loc/fa;->l:I

    int-to-byte v6, v6

    iget-boolean v11, v5, Lcom/loc/fa;->n:Z

    if-eqz v11, :cond_52

    or-int/lit8 v6, v6, 0x8

    int-to-byte v6, v6

    :cond_52
    aput-byte v6, v7, v3

    add-int/lit8 v3, v3, 0x1

    iget v6, v5, Lcom/loc/fa;->c:I

    invoke-static {v6, v4}, Lcom/loc/fz;->a(I[B)[B

    move-result-object v6

    array-length v11, v6

    const/4 v15, 0x0

    invoke-static {v6, v15, v7, v3, v11}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v6, v6

    add-int/2addr v3, v6

    iget v6, v5, Lcom/loc/fa;->d:I

    invoke-static {v6, v10}, Lcom/loc/fz;->b(I[B)[B

    move-result-object v6

    array-length v11, v6

    invoke-static {v6, v15, v7, v3, v11}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v6, v6

    add-int/2addr v3, v6

    :cond_53
    :goto_3c
    invoke-static {}, Lcom/loc/fz;->b()J

    move-result-wide v17

    iget-wide v5, v5, Lcom/loc/fa;->t:J

    sub-long v17, v17, v5

    const-wide/16 v5, 0x3e8

    div-long v12, v17, v5

    long-to-int v13, v12

    int-to-short v12, v13

    invoke-static {v12, v4}, Lcom/loc/fz;->a(I[B)[B

    move-result-object v12

    array-length v13, v12

    const/4 v15, 0x0

    invoke-static {v12, v15, v7, v3, v13}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v12, v12
    :try_end_b
    .catchall {:try_start_b .. :try_end_b} :catchall_8

    add-int/2addr v3, v12

    goto/16 :goto_3a

    :cond_54
    move v8, v3

    goto :goto_3d

    :catchall_8
    const/4 v3, 0x0

    invoke-static {v2, v3, v7, v3, v8}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    add-int/lit8 v0, v8, -0x1

    aput-byte v3, v7, v0

    :cond_55
    :goto_3d
    iget-object v0, v1, Lcom/loc/fp;->M:Ljava/lang/String;

    invoke-static {v0, v7, v8}, Lcom/loc/fp;->a(Ljava/lang/String;[BI)I

    move-result v8

    :cond_56
    sget-object v0, Lcom/loc/fr;->a:Ljava/lang/String;

    invoke-static {v0}, Ljava/lang/Double;->valueOf(Ljava/lang/String;)Ljava/lang/Double;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Double;->doubleValue()D

    move-result-wide v2

    const-wide v5, 0x4014cccccccccccdL    # 5.2

    cmpl-double v0, v2, v5

    if-ltz v0, :cond_5a

    iget-object v0, v1, Lcom/loc/fp;->S:Ljava/util/List;

    if-nez v0, :cond_57

    const/4 v0, 0x0

    goto :goto_3e

    :cond_57
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    :goto_3e
    int-to-byte v2, v0

    aput-byte v2, v7, v8

    add-int/lit8 v8, v8, 0x1

    if-lez v0, :cond_5a

    iget-object v0, v1, Lcom/loc/fp;->S:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_3f
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_5a

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/loc/fc;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v5

    iget-wide v12, v2, Lcom/loc/fc;->d:J

    sub-long/2addr v5, v12

    long-to-int v3, v5

    div-int/lit16 v3, v3, 0x3e8

    const v5, 0xffff

    if-le v3, v5, :cond_58

    const v3, 0xffff

    :cond_58
    invoke-static {v3, v4}, Lcom/loc/fz;->a(I[B)[B

    move-result-object v3

    const/4 v5, 0x2

    const/4 v6, 0x0

    invoke-static {v3, v6, v7, v8, v5}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    add-int/lit8 v8, v8, 0x2

    iget-wide v12, v2, Lcom/loc/fc;->c:D

    const-wide v17, 0x416312d000000000L    # 1.0E7

    mul-double v12, v12, v17

    invoke-static {v12, v13}, Ljava/lang/Math;->round(D)J

    move-result-wide v12

    long-to-int v3, v12

    invoke-static {v3, v10}, Lcom/loc/fz;->b(I[B)[B

    move-result-object v3

    const/4 v5, 0x4

    invoke-static {v3, v6, v7, v8, v5}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    add-int/2addr v8, v5

    iget-wide v12, v2, Lcom/loc/fc;->b:D

    mul-double v12, v12, v17

    invoke-static {v12, v13}, Ljava/lang/Math;->round(D)J

    move-result-wide v12

    long-to-int v3, v12

    invoke-static {v3, v10}, Lcom/loc/fz;->b(I[B)[B

    move-result-object v3

    invoke-static {v3, v6, v7, v8, v5}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    add-int/2addr v8, v5

    iget v3, v2, Lcom/loc/fc;->e:I

    int-to-float v3, v3

    const v6, 0x477fff00    # 65535.0f

    cmpl-float v6, v3, v6

    if-lez v6, :cond_59

    const v3, 0x477fff00    # 65535.0f

    :cond_59
    float-to-int v3, v3

    invoke-static {v3, v4}, Lcom/loc/fz;->a(I[B)[B

    move-result-object v3

    const/4 v6, 0x2

    const/4 v9, 0x0

    invoke-static {v3, v9, v7, v8, v6}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    add-int/2addr v8, v6

    iget v3, v2, Lcom/loc/fc;->a:I

    shl-int/lit8 v3, v3, 0xd

    iget v6, v2, Lcom/loc/fc;->g:I

    shl-int/lit8 v6, v6, 0x6

    or-int/2addr v3, v6

    iget v2, v2, Lcom/loc/fc;->h:I

    or-int/2addr v2, v3

    const v3, 0xffff

    and-int/2addr v2, v3

    int-to-short v2, v2

    invoke-static {v2, v4}, Lcom/loc/fz;->a(I[B)[B

    move-result-object v2

    const/4 v6, 0x2

    const/4 v9, 0x0

    invoke-static {v2, v9, v7, v8, v6}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    add-int/2addr v8, v6

    goto/16 :goto_3f

    :cond_5a
    sget-object v0, Lcom/loc/fr;->a:Ljava/lang/String;

    invoke-static {v0}, Ljava/lang/Double;->valueOf(Ljava/lang/String;)Ljava/lang/Double;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Double;->doubleValue()D

    move-result-wide v2

    cmpl-double v0, v2, v23

    if-ltz v0, :cond_5b

    iget-object v0, v1, Lcom/loc/fp;->N:Ljava/lang/String;

    invoke-static {v0, v7, v8}, Lcom/loc/fp;->a(Ljava/lang/String;[BI)I

    move-result v8

    :cond_5b
    new-array v0, v8, [B

    const/4 v2, 0x0

    invoke-static {v7, v2, v0, v2, v8}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    new-instance v3, Ljava/util/zip/CRC32;

    invoke-direct {v3}, Ljava/util/zip/CRC32;-><init>()V

    invoke-virtual {v3, v0}, Ljava/util/zip/CRC32;->update([B)V

    invoke-virtual {v3}, Ljava/util/zip/CRC32;->getValue()J

    move-result-wide v3

    invoke-static {v3, v4}, Lcom/loc/fz;->a(J)[B

    move-result-object v3

    add-int/lit8 v4, v8, 0x8

    new-array v4, v4, [B

    invoke-static {v0, v2, v4, v2, v8}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    const/16 v5, 0x8

    invoke-static {v3, v2, v4, v8, v5}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    return-object v4

    nop

    :array_0
    .array-data 1
        0x0t
        0x0t
    .end array-data

    nop

    :array_1
    .array-data 1
        0x0t
        0x0t
    .end array-data
.end method
