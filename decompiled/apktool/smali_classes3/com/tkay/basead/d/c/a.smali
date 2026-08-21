.class public final Lcom/tkay/basead/d/c/a;
.super Ljava/lang/Object;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 20
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/tkay/core/common/f/aa;Lcom/tkay/basead/d/c;)V
    .locals 2

    if-eqz p0, :cond_1

    if-nez p1, :cond_0

    goto :goto_0

    .line 29
    :cond_0
    invoke-virtual {p1}, Lcom/tkay/basead/d/c;->a()I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/common/f/aa;->v(I)V

    .line 30
    invoke-virtual {p1}, Lcom/tkay/basead/d/c;->b()I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/common/f/aa;->w(I)V

    .line 32
    invoke-virtual {p1}, Lcom/tkay/basead/d/c;->d()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/common/f/aa;->a(Ljava/lang/String;)V

    .line 33
    invoke-virtual {p1}, Lcom/tkay/basead/d/c;->c()I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/common/f/aa;->p(I)V

    .line 35
    invoke-virtual {p1}, Lcom/tkay/basead/d/c;->e()I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/common/f/aa;->o(I)V

    .line 36
    invoke-virtual {p1}, Lcom/tkay/basead/d/c;->f()I

    move-result v0

    int-to-long v0, v0

    invoke-virtual {p0, v0, v1}, Lcom/tkay/core/common/f/aa;->b(J)V

    .line 37
    invoke-virtual {p1}, Lcom/tkay/basead/d/c;->g()I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/common/f/aa;->n(I)V

    .line 39
    invoke-virtual {p1}, Lcom/tkay/basead/d/c;->h()I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/common/f/aa;->a(I)V

    .line 40
    invoke-virtual {p1}, Lcom/tkay/basead/d/c;->i()I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/common/f/aa;->b(I)V

    .line 42
    invoke-virtual {p1}, Lcom/tkay/basead/d/c;->j()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/tkay/core/common/f/aa;->b(Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public static a(Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/z;)V
    .locals 4

    if-eqz p0, :cond_4

    if-nez p1, :cond_0

    goto/16 :goto_2

    .line 52
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    if-eqz v0, :cond_4

    .line 53
    iget-object v1, p0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    instance-of v1, v1, Lcom/tkay/core/common/f/aa;

    if-nez v1, :cond_1

    goto/16 :goto_2

    .line 57
    :cond_1
    invoke-virtual {p1}, Lcom/tkay/core/common/f/z;->k()Lcom/tkay/core/common/f/j;

    move-result-object v1

    if-eqz v1, :cond_2

    .line 61
    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->y()I

    move-result v2

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/f/j;->v(I)V

    .line 62
    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->z()I

    move-result v2

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/f/j;->w(I)V

    .line 63
    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->s()I

    move-result v2

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/f/j;->p(I)V

    .line 65
    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->r()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/f/j;->a(Ljava/lang/String;)V

    .line 66
    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->t()I

    move-result v2

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/f/j;->q(I)V

    .line 68
    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->q()I

    move-result v2

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/f/j;->o(I)V

    .line 69
    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->n()J

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Lcom/tkay/core/common/f/j;->b(J)V

    .line 70
    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->p()I

    move-result v2

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/f/j;->n(I)V

    .line 72
    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->b()I

    move-result v2

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/f/j;->b(I)V

    .line 73
    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->a()I

    move-result v2

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/f/j;->a(I)V

    .line 75
    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->E()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Lcom/tkay/core/common/f/j;->b(Ljava/lang/String;)V

    .line 77
    iput-object v1, p0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    goto :goto_0

    .line 79
    :cond_2
    iget-object v0, p0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {p1, v0}, Lcom/tkay/core/common/f/z;->a(Lcom/tkay/core/common/f/j;)V

    .line 86
    :goto_0
    instance-of v0, p1, Lcom/tkay/core/common/f/f;

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eqz v0, :cond_3

    move-object v0, p1

    check-cast v0, Lcom/tkay/core/common/f/f;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/f;->a()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    move v0, v2

    goto :goto_1

    :cond_3
    move v0, v1

    :goto_1
    if-eqz v0, :cond_4

    .line 90
    invoke-virtual {p1}, Lcom/tkay/core/common/f/z;->A()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_4

    .line 91
    iget-object p1, p0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {p1, v2}, Lcom/tkay/core/common/f/j;->r(I)V

    .line 92
    iget-object p1, p0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {p1, v2}, Lcom/tkay/core/common/f/j;->t(I)V

    .line 93
    iget-object p1, p0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    const/4 v0, 0x2

    invoke-virtual {p1, v0}, Lcom/tkay/core/common/f/j;->H(I)V

    .line 94
    iget-object p1, p0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {p1, v0}, Lcom/tkay/core/common/f/j;->h(I)V

    .line 95
    iget-object p1, p0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {p1, v1}, Lcom/tkay/core/common/f/j;->A(I)V

    .line 96
    iget-object p0, p0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    const/4 p1, -0x2

    invoke-virtual {p0, p1}, Lcom/tkay/core/common/f/j;->s(I)V

    :cond_4
    :goto_2
    return-void
.end method
