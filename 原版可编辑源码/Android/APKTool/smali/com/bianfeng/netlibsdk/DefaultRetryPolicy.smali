.class public Lcom/bianfeng/netlibsdk/DefaultRetryPolicy;
.super Ljava/lang/Object;
.source "DefaultRetryPolicy.java"

# interfaces
.implements Lcom/bianfeng/netlibsdk/RetryPolicy;


# static fields
.field public static final DEFAULT_BACKOFF_MULT:F = 1.0f

.field public static final DEFAULT_MAX_RETRIES:I = 0x1

.field public static final DEFAULT_TIMEOUT_MS:I = 0x9c4


# instance fields
.field private final mBackoffMultiplier:F

.field private mCurrentRetryCount:I

.field private mCurrentTimeoutMs:I

.field private final mMaxNumRetries:I


# direct methods
.method public constructor <init>()V
    .locals 3

    const/16 v0, 0x9c4

    const/4 v1, 0x1

    const/high16 v2, 0x3f800000    # 1.0f

    .line 20
    invoke-direct {p0, v0, v1, v2}, Lcom/bianfeng/netlibsdk/DefaultRetryPolicy;-><init>(IIF)V

    return-void
.end method

.method public constructor <init>(IIF)V
    .locals 0

    .line 23
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 24
    iput p1, p0, Lcom/bianfeng/netlibsdk/DefaultRetryPolicy;->mCurrentTimeoutMs:I

    .line 25
    iput p2, p0, Lcom/bianfeng/netlibsdk/DefaultRetryPolicy;->mMaxNumRetries:I

    .line 26
    iput p3, p0, Lcom/bianfeng/netlibsdk/DefaultRetryPolicy;->mBackoffMultiplier:F

    return-void
.end method


# virtual methods
.method public getCurrentRetryCount()I
    .locals 1

    .line 36
    iget v0, p0, Lcom/bianfeng/netlibsdk/DefaultRetryPolicy;->mCurrentRetryCount:I

    return v0
.end method

.method public getCurrentTimeout()I
    .locals 1

    .line 31
    iget v0, p0, Lcom/bianfeng/netlibsdk/DefaultRetryPolicy;->mCurrentTimeoutMs:I

    return v0
.end method

.method protected hasAttemptRemaining()Z
    .locals 2

    .line 49
    iget v0, p0, Lcom/bianfeng/netlibsdk/DefaultRetryPolicy;->mCurrentRetryCount:I

    iget v1, p0, Lcom/bianfeng/netlibsdk/DefaultRetryPolicy;->mMaxNumRetries:I

    if-gt v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public retry(Lcom/bianfeng/netlibsdk/utils/NetException;)V
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/netlibsdk/utils/NetException;
        }
    .end annotation

    .line 41
    iget v0, p0, Lcom/bianfeng/netlibsdk/DefaultRetryPolicy;->mCurrentRetryCount:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/bianfeng/netlibsdk/DefaultRetryPolicy;->mCurrentRetryCount:I

    .line 42
    iget v0, p0, Lcom/bianfeng/netlibsdk/DefaultRetryPolicy;->mCurrentTimeoutMs:I

    int-to-float v1, v0

    iget v2, p0, Lcom/bianfeng/netlibsdk/DefaultRetryPolicy;->mBackoffMultiplier:F

    mul-float v1, v1, v2

    float-to-int v1, v1

    add-int/2addr v0, v1

    iput v0, p0, Lcom/bianfeng/netlibsdk/DefaultRetryPolicy;->mCurrentTimeoutMs:I

    .line 43
    invoke-virtual {p0}, Lcom/bianfeng/netlibsdk/DefaultRetryPolicy;->hasAttemptRemaining()Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 44
    :cond_0
    throw p1
.end method
