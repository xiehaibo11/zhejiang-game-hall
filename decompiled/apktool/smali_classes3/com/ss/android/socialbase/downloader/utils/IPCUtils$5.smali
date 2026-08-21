.class final Lcom/ss/android/socialbase/downloader/utils/IPCUtils$5;
.super Lcom/ss/android/socialbase/downloader/depend/IRetryDelayTimeAidlCalculator$Stub;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertRetryDelayTimeCalculatorToAidl(Lcom/ss/android/socialbase/downloader/downloader/IRetryDelayTimeCalculator;)Lcom/ss/android/socialbase/downloader/depend/IRetryDelayTimeAidlCalculator;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic val$retryDelayTimeCalculator:Lcom/ss/android/socialbase/downloader/downloader/IRetryDelayTimeCalculator;


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/downloader/downloader/IRetryDelayTimeCalculator;)V
    .locals 0

    .line 379
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$5;->val$retryDelayTimeCalculator:Lcom/ss/android/socialbase/downloader/downloader/IRetryDelayTimeCalculator;

    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/depend/IRetryDelayTimeAidlCalculator$Stub;-><init>()V

    return-void
.end method


# virtual methods
.method public calculateRetryDelayTime(II)J
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 382
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$5;->val$retryDelayTimeCalculator:Lcom/ss/android/socialbase/downloader/downloader/IRetryDelayTimeCalculator;

    invoke-interface {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/IRetryDelayTimeCalculator;->calculateRetryDelayTime(II)J

    move-result-wide p1

    return-wide p1
.end method
