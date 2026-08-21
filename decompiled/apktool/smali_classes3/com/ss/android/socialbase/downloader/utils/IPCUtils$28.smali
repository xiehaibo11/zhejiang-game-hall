.class final Lcom/ss/android/socialbase/downloader/utils/IPCUtils$28;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/socialbase/downloader/downloader/IRetryDelayTimeCalculator;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/downloader/utils/IPCUtils;->convertRetryDelayTimeCalculatorFromAidl(Lcom/ss/android/socialbase/downloader/depend/IRetryDelayTimeAidlCalculator;)Lcom/ss/android/socialbase/downloader/downloader/IRetryDelayTimeCalculator;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic val$retryDelayTimeAidlCalculator:Lcom/ss/android/socialbase/downloader/depend/IRetryDelayTimeAidlCalculator;


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/downloader/depend/IRetryDelayTimeAidlCalculator;)V
    .locals 0

    .line 873
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$28;->val$retryDelayTimeAidlCalculator:Lcom/ss/android/socialbase/downloader/depend/IRetryDelayTimeAidlCalculator;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public calculateRetryDelayTime(II)J
    .locals 1

    .line 878
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/utils/IPCUtils$28;->val$retryDelayTimeAidlCalculator:Lcom/ss/android/socialbase/downloader/depend/IRetryDelayTimeAidlCalculator;

    invoke-interface {v0, p1, p2}, Lcom/ss/android/socialbase/downloader/depend/IRetryDelayTimeAidlCalculator;->calculateRetryDelayTime(II)J

    move-result-wide p1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return-wide p1

    :catch_0
    move-exception p1

    .line 880
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    const-wide/16 p1, 0x0

    return-wide p1
.end method
