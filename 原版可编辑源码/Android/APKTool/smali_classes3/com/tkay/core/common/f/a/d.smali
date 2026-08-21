.class public final Lcom/tkay/core/common/f/a/d;
.super Lcom/tkay/core/common/f/j;

# interfaces
.implements Ljava/io/Serializable;


# direct methods
.method public constructor <init>(Lcom/tkay/core/common/f/a/a;)V
    .locals 4

    .line 9
    invoke-direct {p0}, Lcom/tkay/core/common/f/j;-><init>()V

    .line 11
    invoke-interface {p1}, Lcom/tkay/core/common/f/a/a;->d()I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/common/f/a/d;->u(I)V

    .line 13
    invoke-interface {p1}, Lcom/tkay/core/common/f/a/a;->c()I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/common/f/a/d;->n(I)V

    .line 15
    invoke-interface {p1}, Lcom/tkay/core/common/f/a/a;->b()J

    move-result-wide v0

    const-wide/16 v2, 0x3e8

    mul-long/2addr v0, v2

    invoke-virtual {p0, v0, v1}, Lcom/tkay/core/common/f/a/d;->b(J)V

    .line 17
    invoke-interface {p1}, Lcom/tkay/core/common/f/a/a;->a()I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/common/f/a/d;->o(I)V

    .line 21
    invoke-interface {p1}, Lcom/tkay/core/common/f/a/a;->e()I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/common/f/a/d;->w(I)V

    .line 23
    invoke-interface {p1}, Lcom/tkay/core/common/f/a/a;->f()I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/tkay/core/common/f/a/d;->v(I)V

    return-void
.end method
