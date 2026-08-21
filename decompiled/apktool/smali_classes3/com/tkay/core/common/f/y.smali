.class public final Lcom/tkay/core/common/f/y;
.super Lcom/tkay/core/common/f/z;


# static fields
.field public static final R:I = 0x2

.field public static final b:I = 0x1


# instance fields
.field S:I

.field a:I


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 29
    invoke-direct {p0}, Lcom/tkay/core/common/f/z;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()I
    .locals 1

    .line 42
    iget v0, p0, Lcom/tkay/core/common/f/y;->a:I

    return v0
.end method

.method public final a(I)V
    .locals 0

    .line 46
    iput p1, p0, Lcom/tkay/core/common/f/y;->a:I

    return-void
.end method

.method public final b()I
    .locals 1

    .line 50
    iget v0, p0, Lcom/tkay/core/common/f/y;->S:I

    return v0
.end method

.method public final d()I
    .locals 1

    const/4 v0, 0x3

    return v0
.end method

.method public final g(I)V
    .locals 0

    .line 54
    iput p1, p0, Lcom/tkay/core/common/f/y;->S:I

    return-void
.end method
