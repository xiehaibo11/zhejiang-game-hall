.class public abstract Lcom/tkay/core/common/l/a/a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/l/a/b;


# static fields
.field private static final DEFAULT_IMPRESSION_MIN_PERCENTAGE_VIEWED:I = 0x32

.field private static final DEFAULT_IMPRESSION_MIN_TIME_VIEWED_MS:I = 0x1f4


# instance fields
.field private mImpressionMinPercentageViewed:I

.field private mImpressionMinTimeViewed:I

.field private mImpressionMinVisiblePx:Ljava/lang/Integer;

.field private mImpressionRecorded:Z


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 28
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/16 v0, 0x1f4

    .line 29
    iput v0, p0, Lcom/tkay/core/common/l/a/a;->mImpressionMinTimeViewed:I

    const/16 v0, 0x32

    .line 30
    iput v0, p0, Lcom/tkay/core/common/l/a/a;->mImpressionMinPercentageViewed:I

    const/4 v0, 0x0

    .line 31
    iput-object v0, p0, Lcom/tkay/core/common/l/a/a;->mImpressionMinVisiblePx:Ljava/lang/Integer;

    return-void
.end method


# virtual methods
.method public getImpressionMinPercentageViewed()I
    .locals 1

    .line 39
    iget v0, p0, Lcom/tkay/core/common/l/a/a;->mImpressionMinPercentageViewed:I

    return v0
.end method

.method public getImpressionMinTimeViewed()I
    .locals 1

    .line 44
    iget v0, p0, Lcom/tkay/core/common/l/a/a;->mImpressionMinTimeViewed:I

    return v0
.end method

.method public final getImpressionMinVisiblePx()Ljava/lang/Integer;
    .locals 1

    .line 49
    iget-object v0, p0, Lcom/tkay/core/common/l/a/a;->mImpressionMinVisiblePx:Ljava/lang/Integer;

    return-object v0
.end method

.method public final isImpressionRecorded()Z
    .locals 1

    .line 54
    iget-boolean v0, p0, Lcom/tkay/core/common/l/a/a;->mImpressionRecorded:Z

    return v0
.end method

.method public abstract recordImpression(Landroid/view/View;)V
.end method

.method public final setImpressionRecorded()V
    .locals 1

    const/4 v0, 0x1

    .line 59
    iput-boolean v0, p0, Lcom/tkay/core/common/l/a/a;->mImpressionRecorded:Z

    return-void
.end method
