.class public final Lcom/tkay/core/common/m/e;
.super Ljava/lang/Object;


# instance fields
.field a:Lcom/tkay/core/common/f/aj;

.field b:I


# direct methods
.method public constructor <init>(Lcom/tkay/core/common/f/aj;I)V
    .locals 0

    .line 10
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 11
    iput-object p1, p0, Lcom/tkay/core/common/m/e;->a:Lcom/tkay/core/common/f/aj;

    .line 12
    iput p2, p0, Lcom/tkay/core/common/m/e;->b:I

    return-void
.end method


# virtual methods
.method public final a()Lcom/tkay/core/common/f/aj;
    .locals 1

    .line 16
    iget-object v0, p0, Lcom/tkay/core/common/m/e;->a:Lcom/tkay/core/common/f/aj;

    return-object v0
.end method

.method public final b()I
    .locals 1

    .line 20
    iget v0, p0, Lcom/tkay/core/common/m/e;->b:I

    return v0
.end method
