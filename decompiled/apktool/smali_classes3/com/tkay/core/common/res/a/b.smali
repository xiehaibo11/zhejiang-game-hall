.class public final Lcom/tkay/core/common/res/a/b;
.super Ljava/lang/Object;


# instance fields
.field public a:I

.field public b:I

.field public c:I


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 8
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 4
    iput v0, p0, Lcom/tkay/core/common/res/a/b;->a:I

    .line 5
    iput v0, p0, Lcom/tkay/core/common/res/a/b;->b:I

    const/4 v1, 0x2

    .line 6
    iput v1, p0, Lcom/tkay/core/common/res/a/b;->c:I

    .line 9
    iput v0, p0, Lcom/tkay/core/common/res/a/b;->a:I

    .line 10
    iput v1, p0, Lcom/tkay/core/common/res/a/b;->c:I

    return-void
.end method

.method public constructor <init>(II)V
    .locals 1

    .line 13
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 4
    iput v0, p0, Lcom/tkay/core/common/res/a/b;->a:I

    .line 5
    iput v0, p0, Lcom/tkay/core/common/res/a/b;->b:I

    const/4 v0, 0x2

    .line 6
    iput v0, p0, Lcom/tkay/core/common/res/a/b;->c:I

    .line 14
    iput p1, p0, Lcom/tkay/core/common/res/a/b;->a:I

    .line 15
    iput p2, p0, Lcom/tkay/core/common/res/a/b;->c:I

    return-void
.end method
