.class public final Lcom/tkay/basead/d/c/d;
.super Ljava/lang/Object;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 7
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a(Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/z;)V
    .locals 2

    if-eqz p1, :cond_1

    if-nez p0, :cond_0

    goto :goto_0

    .line 15
    :cond_0
    instance-of v0, p1, Lcom/tkay/core/common/f/f;

    if-eqz v0, :cond_1

    .line 16
    check-cast p1, Lcom/tkay/core/common/f/f;

    iget-wide v0, p0, Lcom/tkay/core/common/f/i;->n:J

    invoke-virtual {p1, v0, v1}, Lcom/tkay/core/common/f/f;->c(J)V

    :cond_1
    :goto_0
    return-void
.end method
