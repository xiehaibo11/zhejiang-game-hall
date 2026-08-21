.class public abstract Lcom/igexin/push/f/b/g;
.super Lcom/igexin/b/a/d/e;


# instance fields
.field d:J


# direct methods
.method public constructor <init>(J)V
    .locals 2

    const-wide/16 v0, 0x0

    invoke-direct {p0, v0, v1, p1, p2}, Lcom/igexin/push/f/b/g;-><init>(JJ)V

    return-void
.end method

.method public constructor <init>(JJ)V
    .locals 2

    const/4 v0, 0x5

    invoke-direct {p0, v0}, Lcom/igexin/b/a/d/e;-><init>(I)V

    const-wide/16 v0, 0x0

    cmp-long v0, p1, v0

    if-gtz v0, :cond_0

    goto :goto_0

    :cond_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    sub-long/2addr p1, v0

    add-long/2addr p3, p1

    :goto_0
    iput-wide p3, p0, Lcom/igexin/push/f/b/g;->d:J

    sget-object p1, Ljava/util/concurrent/TimeUnit;->MILLISECONDS:Ljava/util/concurrent/TimeUnit;

    invoke-virtual {p0, p3, p4, p1}, Lcom/igexin/push/f/b/g;->a(JLjava/util/concurrent/TimeUnit;)I

    return-void
.end method


# virtual methods
.method public final b()V
    .locals 0

    invoke-super {p0}, Lcom/igexin/b/a/d/e;->b()V

    invoke-virtual {p0}, Lcom/igexin/push/f/b/g;->d_()V

    return-void
.end method

.method protected abstract d_()V
.end method

.method protected e()V
    .locals 0

    return-void
.end method
