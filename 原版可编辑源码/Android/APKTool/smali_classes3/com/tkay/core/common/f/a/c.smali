.class public final Lcom/tkay/core/common/f/a/c;
.super Lcom/tkay/core/common/f/i;

# interfaces
.implements Ljava/io/Serializable;


# direct methods
.method public constructor <init>(Lcom/tkay/core/common/f/a/a;Lcom/tkay/core/common/f/d;I)V
    .locals 1

    .line 10
    invoke-direct {p0}, Lcom/tkay/core/common/f/i;-><init>()V

    .line 11
    invoke-virtual {p2}, Lcom/tkay/core/common/f/d;->j()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/f/a/c;->a:Ljava/lang/String;

    .line 12
    invoke-virtual {p2}, Lcom/tkay/core/common/f/d;->W()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/f/a/c;->b:Ljava/lang/String;

    .line 13
    invoke-virtual {p2}, Lcom/tkay/core/common/f/d;->x()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/f/a/c;->c:Ljava/lang/String;

    .line 14
    invoke-virtual {p2}, Lcom/tkay/core/common/f/d;->X()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/f/a/c;->d:Ljava/lang/String;

    .line 15
    invoke-virtual {p2}, Lcom/tkay/core/common/f/d;->H()I

    move-result v0

    iput v0, p0, Lcom/tkay/core/common/f/a/c;->f:I

    .line 16
    invoke-virtual {p2}, Lcom/tkay/core/common/f/d;->T()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/f/a/c;->g:Ljava/lang/String;

    .line 17
    invoke-virtual {p2}, Lcom/tkay/core/common/f/d;->U()I

    move-result v0

    iput v0, p0, Lcom/tkay/core/common/f/a/c;->h:I

    .line 18
    invoke-virtual {p2}, Lcom/tkay/core/common/f/d;->I()I

    move-result v0

    iput v0, p0, Lcom/tkay/core/common/f/a/c;->i:I

    .line 19
    iput p3, p0, Lcom/tkay/core/common/f/a/c;->j:I

    .line 20
    invoke-virtual {p2}, Lcom/tkay/core/common/f/d;->e()Ljava/lang/String;

    move-result-object p2

    iput-object p2, p0, Lcom/tkay/core/common/f/a/c;->k:Ljava/lang/String;

    .line 22
    new-instance p2, Lcom/tkay/core/common/f/a/d;

    invoke-direct {p2, p1}, Lcom/tkay/core/common/f/a/d;-><init>(Lcom/tkay/core/common/f/a/a;)V

    iput-object p2, p0, Lcom/tkay/core/common/f/a/c;->m:Lcom/tkay/core/common/f/j;

    return-void
.end method
