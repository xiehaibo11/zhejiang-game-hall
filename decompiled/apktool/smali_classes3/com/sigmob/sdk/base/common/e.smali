.class public Lcom/sigmob/sdk/base/common/e;
.super Ljava/lang/Object;


# instance fields
.field private a:I

.field private b:I


# direct methods
.method public constructor <init>(II)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput p1, p0, Lcom/sigmob/sdk/base/common/e;->a:I

    iput p2, p0, Lcom/sigmob/sdk/base/common/e;->b:I

    return-void
.end method

.method protected constructor <init>(Landroid/os/Parcel;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result v0

    iput v0, p0, Lcom/sigmob/sdk/base/common/e;->a:I

    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result p1

    iput p1, p0, Lcom/sigmob/sdk/base/common/e;->b:I

    return-void
.end method


# virtual methods
.method public a()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/base/common/e;->a:I

    return v0
.end method

.method public a(I)V
    .locals 0

    iput p1, p0, Lcom/sigmob/sdk/base/common/e;->a:I

    return-void
.end method

.method public b()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/base/common/e;->b:I

    return v0
.end method

.method public b(I)V
    .locals 0

    iput p1, p0, Lcom/sigmob/sdk/base/common/e;->b:I

    return-void
.end method
