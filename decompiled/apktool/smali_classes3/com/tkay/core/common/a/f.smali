.class public final Lcom/tkay/core/common/a/f;
.super Lcom/tkay/core/common/a/d;


# instance fields
.field c:I

.field d:I


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 3
    invoke-direct {p0}, Lcom/tkay/core/common/a/d;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(I)V
    .locals 0

    .line 12
    iput p1, p0, Lcom/tkay/core/common/a/f;->c:I

    return-void
.end method

.method public final b(I)V
    .locals 0

    .line 20
    iput p1, p0, Lcom/tkay/core/common/a/f;->d:I

    return-void
.end method

.method public final c()I
    .locals 1

    .line 8
    iget v0, p0, Lcom/tkay/core/common/a/f;->c:I

    return v0
.end method

.method public final d()I
    .locals 1

    .line 16
    iget v0, p0, Lcom/tkay/core/common/a/f;->d:I

    return v0
.end method
