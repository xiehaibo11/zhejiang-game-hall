.class public Lcom/sigmob/sdk/base/services/g;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Cloneable;


# instance fields
.field public a:[F

.field public b:[F

.field public c:[F

.field public d:[F

.field public e:[F

.field public f:[F

.field public g:J


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method protected a()Lcom/sigmob/sdk/base/services/g;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/CloneNotSupportedException;
        }
    .end annotation

    invoke-super {p0}, Ljava/lang/Object;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/sigmob/sdk/base/services/g;

    return-object v0
.end method

.method protected synthetic clone()Ljava/lang/Object;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/CloneNotSupportedException;
        }
    .end annotation

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/services/g;->a()Lcom/sigmob/sdk/base/services/g;

    move-result-object v0

    return-object v0
.end method
