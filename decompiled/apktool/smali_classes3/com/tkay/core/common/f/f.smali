.class public final Lcom/tkay/core/common/f/f;
.super Lcom/tkay/core/common/f/z;


# static fields
.field public static final a:I = 0x1

.field public static final b:I = 0x2


# instance fields
.field private R:Ljava/lang/String;

.field private S:Ljava/lang/String;

.field private am:I


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 21
    invoke-direct {p0}, Lcom/tkay/core/common/f/z;-><init>()V

    const/4 v0, 0x1

    .line 17
    iput v0, p0, Lcom/tkay/core/common/f/f;->am:I

    return-void
.end method


# virtual methods
.method public final a()Ljava/lang/String;
    .locals 1

    .line 26
    iget-object v0, p0, Lcom/tkay/core/common/f/f;->S:Ljava/lang/String;

    return-object v0
.end method

.method public final a(I)V
    .locals 0

    .line 46
    iput p1, p0, Lcom/tkay/core/common/f/f;->am:I

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 0

    .line 30
    iput-object p1, p0, Lcom/tkay/core/common/f/f;->S:Ljava/lang/String;

    return-void
.end method

.method public final b()Ljava/lang/String;
    .locals 1

    .line 34
    iget-object v0, p0, Lcom/tkay/core/common/f/f;->R:Ljava/lang/String;

    return-object v0
.end method

.method public final b(Ljava/lang/String;)V
    .locals 0

    .line 38
    iput-object p1, p0, Lcom/tkay/core/common/f/f;->R:Ljava/lang/String;

    return-void
.end method

.method public final c()I
    .locals 1

    .line 42
    iget v0, p0, Lcom/tkay/core/common/f/f;->am:I

    return v0
.end method

.method public final d()I
    .locals 2

    .line 51
    iget v0, p0, Lcom/tkay/core/common/f/f;->am:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    const/4 v0, 0x2

    return v0

    :cond_0
    const/4 v0, 0x4

    return v0
.end method
