.class public Lcom/kwad/sdk/core/imageloader/KSImageLoader$InnerImageLoadingListener;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/imageloader/core/listener/ImageLoadingListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/core/imageloader/KSImageLoader;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "InnerImageLoadingListener"
.end annotation


# static fields
.field public static final MAX_DURATION:I = 0x7530


# instance fields
.field adTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field loadingListener:Lcom/kwad/sdk/core/imageloader/core/listener/ImageLoadingListener;

.field private startTime:J


# direct methods
.method public constructor <init>(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/imageloader/core/listener/ImageLoadingListener;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/kwad/sdk/core/imageloader/KSImageLoader$InnerImageLoadingListener;->adTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-object p2, p0, Lcom/kwad/sdk/core/imageloader/KSImageLoader$InnerImageLoadingListener;->loadingListener:Lcom/kwad/sdk/core/imageloader/core/listener/ImageLoadingListener;

    return-void
.end method

.method private getDuration(J)J
    .locals 5

    const-wide/16 v0, 0x0

    cmp-long v0, p1, v0

    const-wide/16 v1, -0x1

    if-nez v0, :cond_0

    return-wide v1

    :cond_0
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v3

    sub-long/2addr v3, p1

    const-wide/16 p1, 0x7530

    cmp-long p1, v3, p1

    if-ltz p1, :cond_1

    return-wide v1

    :cond_1
    return-wide v3
.end method

.method private recordDuration(J)V
    .locals 2

    :try_start_0
    invoke-direct {p0, p1, p2}, Lcom/kwad/sdk/core/imageloader/KSImageLoader$InnerImageLoadingListener;->getDuration(J)J

    move-result-wide p1

    const-wide/16 v0, 0x0

    cmp-long v0, p1, v0

    if-ltz v0, :cond_0

    invoke-static {p1, p2}, Lcom/kwad/sdk/utils/y;->au(J)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_0
    return-void
.end method


# virtual methods
.method public onDecode(Ljava/lang/String;Ljava/io/InputStream;Lcom/kwad/sdk/core/imageloader/core/decode/DecodedResult;)Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/imageloader/KSImageLoader$InnerImageLoadingListener;->loadingListener:Lcom/kwad/sdk/core/imageloader/core/listener/ImageLoadingListener;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1, p2, p3}, Lcom/kwad/sdk/core/imageloader/core/listener/ImageLoadingListener;->onDecode(Ljava/lang/String;Ljava/io/InputStream;Lcom/kwad/sdk/core/imageloader/core/decode/DecodedResult;)Z

    move-result p1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public onLoadingCancelled(Ljava/lang/String;Landroid/view/View;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/imageloader/KSImageLoader$InnerImageLoadingListener;->loadingListener:Lcom/kwad/sdk/core/imageloader/core/listener/ImageLoadingListener;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1, p2}, Lcom/kwad/sdk/core/imageloader/core/listener/ImageLoadingListener;->onLoadingCancelled(Ljava/lang/String;Landroid/view/View;)V

    :cond_0
    return-void
.end method

.method public onLoadingComplete(Ljava/lang/String;Landroid/view/View;Lcom/kwad/sdk/core/imageloader/core/decode/DecodedResult;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/imageloader/KSImageLoader$InnerImageLoadingListener;->loadingListener:Lcom/kwad/sdk/core/imageloader/core/listener/ImageLoadingListener;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1, p2, p3}, Lcom/kwad/sdk/core/imageloader/core/listener/ImageLoadingListener;->onLoadingComplete(Ljava/lang/String;Landroid/view/View;Lcom/kwad/sdk/core/imageloader/core/decode/DecodedResult;)V

    :cond_0
    iget-wide p1, p0, Lcom/kwad/sdk/core/imageloader/KSImageLoader$InnerImageLoadingListener;->startTime:J

    invoke-direct {p0, p1, p2}, Lcom/kwad/sdk/core/imageloader/KSImageLoader$InnerImageLoadingListener;->recordDuration(J)V

    invoke-static {}, Lcom/kwad/sdk/utils/y;->ID()V

    return-void
.end method

.method public onLoadingFailed(Ljava/lang/String;Landroid/view/View;Lcom/kwad/sdk/core/imageloader/core/assist/FailReason;)V
    .locals 4

    iget-object v0, p0, Lcom/kwad/sdk/core/imageloader/KSImageLoader$InnerImageLoadingListener;->loadingListener:Lcom/kwad/sdk/core/imageloader/core/listener/ImageLoadingListener;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1, p2, p3}, Lcom/kwad/sdk/core/imageloader/core/listener/ImageLoadingListener;->onLoadingFailed(Ljava/lang/String;Landroid/view/View;Lcom/kwad/sdk/core/imageloader/core/assist/FailReason;)V

    :cond_0
    iget-object p2, p0, Lcom/kwad/sdk/core/imageloader/KSImageLoader$InnerImageLoadingListener;->adTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    if-eqz p2, :cond_8

    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "ImageLoader:"

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    const/4 v0, 0x0

    if-eqz p3, :cond_7

    invoke-virtual {p3}, Lcom/kwad/sdk/core/imageloader/core/assist/FailReason;->getCause()Ljava/lang/Throwable;

    move-result-object v1

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Ljava/lang/Throwable;->getStackTrace()[Ljava/lang/StackTraceElement;

    move-result-object v2

    array-length v2, v2

    if-lez v2, :cond_1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, " @ "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/Throwable;->getStackTrace()[Ljava/lang/StackTraceElement;

    move-result-object v3

    aget-object v3, v3, v0

    invoke-virtual {v3}, Ljava/lang/StackTraceElement;->getFileName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/Throwable;->getStackTrace()[Ljava/lang/StackTraceElement;

    move-result-object v3

    aget-object v3, v3, v0

    invoke-virtual {v3}, Ljava/lang/StackTraceElement;->getClassName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/Throwable;->getStackTrace()[Ljava/lang/StackTraceElement;

    move-result-object v1

    aget-object v1, v1, v0

    invoke-virtual {v1}, Ljava/lang/StackTraceElement;->getLineNumber()I

    move-result v1

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    goto :goto_0

    :cond_1
    const-string v1, ""

    :goto_0
    sget-object v2, Lcom/kwad/sdk/core/imageloader/KSImageLoader$1;->$SwitchMap$com$kwad$sdk$core$imageloader$core$assist$FailReason$FailType:[I

    invoke-virtual {p3}, Lcom/kwad/sdk/core/imageloader/core/assist/FailReason;->getType()Lcom/kwad/sdk/core/imageloader/core/assist/FailReason$FailType;

    move-result-object p3

    invoke-virtual {p3}, Lcom/kwad/sdk/core/imageloader/core/assist/FailReason$FailType;->ordinal()I

    move-result p3

    aget p3, v2, p3

    const/4 v2, 0x1

    if-eq p3, v2, :cond_6

    const/4 v2, 0x2

    if-eq p3, v2, :cond_5

    const/4 v1, 0x3

    if-eq p3, v1, :cond_4

    const/4 v1, 0x4

    if-eq p3, v1, :cond_3

    const/4 v1, 0x5

    if-eq p3, v1, :cond_2

    goto :goto_2

    :cond_2
    const-string p3, "DECODING_ERROR"

    goto :goto_1

    :cond_3
    const-string p3, "NETWORK_DENIED"

    goto :goto_1

    :cond_4
    const-string p3, "OUT_OF_MEMORY"

    goto :goto_1

    :cond_5
    const-string p3, "IO_ERROR"

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_2

    :cond_6
    const-string p3, "UNKNOWN"

    :goto_1
    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_7
    :goto_2
    invoke-static {}, Lcom/kwad/sdk/core/imageloader/KSImageLoader;->access$000()Lcom/kwad/sdk/core/imageloader/OnRenderResultListener;

    move-result-object p3

    if-eqz p3, :cond_8

    invoke-static {}, Lcom/kwad/sdk/core/imageloader/KSImageLoader;->access$000()Lcom/kwad/sdk/core/imageloader/OnRenderResultListener;

    move-result-object p3

    iget-object v1, p0, Lcom/kwad/sdk/core/imageloader/KSImageLoader$InnerImageLoadingListener;->adTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-interface {p3, v0, v1, p1, p2}, Lcom/kwad/sdk/core/imageloader/OnRenderResultListener;->onRenderResult(ZLjava/lang/Object;Ljava/lang/String;Ljava/lang/String;)V

    :cond_8
    invoke-static {}, Lcom/kwad/sdk/utils/y;->IE()V

    return-void
.end method

.method public onLoadingStarted(Ljava/lang/String;Landroid/view/View;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/imageloader/KSImageLoader$InnerImageLoadingListener;->loadingListener:Lcom/kwad/sdk/core/imageloader/core/listener/ImageLoadingListener;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1, p2}, Lcom/kwad/sdk/core/imageloader/core/listener/ImageLoadingListener;->onLoadingStarted(Ljava/lang/String;Landroid/view/View;)V

    :cond_0
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide p1

    iput-wide p1, p0, Lcom/kwad/sdk/core/imageloader/KSImageLoader$InnerImageLoadingListener;->startTime:J

    invoke-static {}, Lcom/kwad/sdk/utils/y;->IC()V

    return-void
.end method
